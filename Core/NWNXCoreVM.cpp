#include "NWNXCore.hpp"

#include "API/CAppManager.hpp"
#include "API/CExoString.hpp"
#include "API/Constants.hpp"
#include "API/Functions.hpp"
#include "API/Globals.hpp"
#include "API/Vector.hpp"
#include "API/CExoString.hpp"
#include "API/CScriptLocation.hpp"
#include "API/CVirtualMachine.hpp"
#include "API/CGameEffect.hpp"
#include "API/CNWVirtualMachineCommands.hpp"
#include "API/CNWSObject.hpp"
#include "Platform/Debug.hpp"
#include "Services/Events/Events.hpp"
#include "Utils.hpp"

#include <cstring>

using namespace NWNXLib;
using namespace NWNXLib::API;
using namespace NWNXLib::API::Types;

namespace {

enum VMCommand
{
    PlaySound           = 46,
    GetLocalInt         = 51,
    GetLocalFloat       = 52,
    GetLocalString      = 53,
    GetLocalObject      = 54,
    SetLocalInt         = 55,
    SetLocalFloat       = 56,
    SetLocalString      = 57,
    SetLocalObject      = 58,
    SetLocalLocation    = 152,
    GetLocalLocation    = 153,
    TagEffect           = 850,
    TagItemProperty     = 855
};
enum VMError
{
    Success                      = 0,
    TooManyInstructions          = -632,
    TooManyLevelsOfRecursion     = -633,
    FileNotOpened                = -634,
    FileNotCompiledSuccessfully  = -635,
    InvalidAuxCode               = -636,
    NullVirtualMachineNode       = -637,
    StackOverflow                = -638,
    StackUnderflow               = -639,
    InvalidOpCode                = -640,
    InvalidExtraDataOnOpCode     = -641,
    InvalidCommand               = -642,
    FakeShortcutLogicalOperation = -643,
    DivideByZero                 = -644,
    FakeAbortScript              = -645,
    IPOutOfCodeSegment           = -646,
    CommandImplementerNotSet     = -647,
    UnknownTypeOnRunTimeSTack    = -648
};

enum VMStructure
{
    Effect       = 0,
    Event        = 1,
    Location     = 2,
    Talent       = 3,
    ItemProperty = 4
};

struct Command
{
    std::string plugin;
    std::string event;
    std::string operation;
};

static const int  NWNX_ABI_VERSION = 2;

Maybe<Command> ProcessNWNX(const CExoString& str)
{
    auto startsWith = [](const CExoString& str, const char *prefix) -> bool
    {
        auto len = std::strlen(prefix);
        return str.m_sString && str.m_nBufferLength >= len && std::strncmp(prefix, str.m_sString, len) == 0;
    };

    if (startsWith(str, "NWNXEE!"))
    {
        int abi;
        char plugin[256];
        char event[256];
        char operation[256];

        int scanned = std::sscanf(str.m_sString,
                            "NWNXEE!ABIv%d!%255[A-Za-z0-9_]!%255[A-Za-z0-9_]!%255[A-Za-z0-9_]",
                            &abi, plugin, event, operation);

        if (scanned < 4 || abi != NWNX_ABI_VERSION)
        {
            LOG_WARNING("Bad NWNX ABI call detected: \"%s\" from %s.nss - ignored", str.m_sString, Utils::GetCurrentScript().c_str());
            LOG_WARNING("NWNX ABI has changed. Please update your \"nwnx.nss\" file and recompile all scripts.");
        }
        else
        {
            Command cmd; 
            cmd.plugin    = plugin;
            cmd.event     = event;
            cmd.operation = operation;
            return Maybe<Command>(cmd);
        }
    }
    else if (startsWith(str, "NWNX!"))
    {
        LOG_NOTICE("Legacy NWNX call detected: \"%s\" from %s.nss - ignored", str.m_sString, Utils::GetCurrentScript().c_str());
        const char *cmd = str.m_sString + 5;
        if (!std::strncmp(cmd, "PUSH_ARGUMENT",    std::strlen("PUSH_ARGUMENT")) ||
            !std::strncmp(cmd, "CALL_FUNCTION",    std::strlen("CALL_FUNCTION")) ||
            !std::strncmp(cmd, "GET_RETURN_VALUE", std::strlen("GET_RETURN_VALUE")))
        {
            LOG_NOTICE("  Please recompile all scripts that include \"nwnx.nss\"");
        }
        else
        {
            LOG_NOTICE("  This is a leftover from 1.69 nwnx2 scripts.");
        }
    }

    return Maybe<Command>();
}

}

namespace Core {

extern NWNXCore* g_core;

int32_t NWNXCore::GetVarHandler(CNWVirtualMachineCommands* thisPtr, int32_t nCommandId, int32_t nParameters)
{
    ASSERT(thisPtr); ASSERT(nParameters == 2);
    auto *vm = Globals::VirtualMachine();

    Types::ObjectID oid;
    if (!vm->StackPopObject(&oid))
        return VMError::StackUnderflow;

    CExoString varname;
    if (!vm->StackPopString(&varname))
        return VMError::StackUnderflow;

    auto *vartable = Utils::GetScriptVarTable(Utils::GetGameObject(oid));

    auto nwnx = ProcessNWNX(varname);
    ASSERT(!nwnx || nwnx->operation == "POP"); // Only POP operation for GetLocal

    bool success = false;
    switch (nCommandId)
    {
        case VMCommand::GetLocalInt:
        {
            int32_t n = 0;
            if (nwnx)
            {
                if (auto res = g_core->m_services->m_events->Pop<int32_t>(nwnx->plugin, nwnx->event))
                    n = *res;
            }
            else if (vartable)
            {
                n = vartable->GetInt(varname);
            }
            success = vm->StackPushInteger(n);
            break;
        }
        case VMCommand::GetLocalFloat:
        {
            float f = 0;
            if (nwnx)
            {
                if (auto res = g_core->m_services->m_events->Pop<float>(nwnx->plugin, nwnx->event))
                    f = *res;
            }
            else if (vartable)
            {
                f = vartable->GetInt(varname);
            }
            success = vm->StackPushFloat(f);
            break;
        }
        case VMCommand::GetLocalString:
        {
            CExoString str = "";
            if (nwnx)
            {
                if (auto res = g_core->m_services->m_events->Pop<std::string>(nwnx->plugin, nwnx->event))
                    str = res->c_str();
            }
            else if (vartable)
            {
                str = vartable->GetString(varname);
            }
            success = vm->StackPushString(str);
            break;
        }
        case VMCommand::GetLocalObject:
        {
            Types::ObjectID oid = Constants::OBJECT_INVALID;

            if (nwnx)
            {
                if (auto res = g_core->m_services->m_events->Pop<Types::ObjectID>(nwnx->plugin, nwnx->event))
                    oid = *res;
            }
            else if (vartable)
            {
                oid = vartable->GetObject(varname);
            }
            success = vm->StackPushObject(oid);
            break;
        }
        case VMCommand::GetLocalLocation:
        {
            // No NWNX option here
            CScriptLocation loc;
            if (vartable)
                loc = vartable->GetLocation(varname);

            success = vm->StackPushEngineStructure(VMStructure::Location, &loc);
            break;
        }
        default:
            ASSERT_FAIL();
    }

    return success ? VMError::Success : VMError::StackOverflow;
}
int32_t NWNXCore::SetVarHandler(CNWVirtualMachineCommands* thisPtr, int32_t nCommandId, int32_t nParameters)
{
    ASSERT(thisPtr); ASSERT(nParameters == 3);
    auto *vm = Globals::VirtualMachine();

    Types::ObjectID oid;
    if (!vm->StackPopObject(&oid))
        return VMError::StackUnderflow;

    CExoString varname;
    if (!vm->StackPopString(&varname))
        return VMError::StackUnderflow;

    auto *vartable = Utils::GetScriptVarTable(Utils::GetGameObject(oid));

    auto nwnx = ProcessNWNX(varname);
    ASSERT(!nwnx || nwnx->operation == "PUSH"); // Only PUSH operation for SetLocal

    switch (nCommandId)
    {
        case VMCommand::SetLocalInt:
        {
            int32_t value;
            if (!vm->StackPopInteger(&value))
                return VMError::StackUnderflow;

            if (nwnx)
            {
                g_core->m_services->m_events->Push(nwnx->plugin, nwnx->event, value);
            }
            else if (vartable)
            {
                vartable->SetInt(varname, value, 0);
            }
            break;
        }
        case VMCommand::SetLocalFloat:
        {
            float value;
            if (!vm->StackPopFloat(&value))
                return VMError::StackUnderflow;

            if (nwnx)
            {
                g_core->m_services->m_events->Push(nwnx->plugin, nwnx->event, value);
            }
            else if (vartable)
            {
                vartable->SetFloat(varname, value);
            }
            break;
        }
        case VMCommand::SetLocalString:
        {
            CExoString value;
            if (!vm->StackPopString(&value))
                return VMError::StackUnderflow;

            if (nwnx)
            {
                g_core->m_services->m_events->Push(nwnx->plugin, nwnx->event, std::string(value.CStr()));
            }
            else if (vartable)
            {
                vartable->SetString(varname, value);
            }
            break;
        }
        case VMCommand::SetLocalObject:
        {
            Types::ObjectID value;
            if (!vm->StackPopObject(&value))
                return VMError::StackUnderflow;

            if (nwnx)
            {
                g_core->m_services->m_events->Push(nwnx->plugin, nwnx->event, value);
            }
            else if (vartable)
            {
                vartable->SetObject(varname, value);
            }
            break;
        }
        case VMCommand::SetLocalLocation:
        {
            // No NWNX option here
            CScriptLocation *pLoc;
            if (!vm->StackPopEngineStructure(VMStructure::Location, (void**)&pLoc))
                return VMError::StackUnderflow;
            if (vartable)
                vartable->SetLocation(varname, *pLoc);

            delete pLoc;
            break;
        }
        default:
            ASSERT_FAIL();
    }


    return VMError::Success;
}

int32_t NWNXCore::TagEffectHandler(CNWVirtualMachineCommands* thisPtr, int32_t nCommandId, int32_t nParameters)
{
    ASSERT(thisPtr); ASSERT(nCommandId == VMCommand::TagEffect); ASSERT(nParameters == 2);
    auto *vm = Globals::VirtualMachine();

    bool bSkipDelete = false;
    CGameEffect *pEffect;
    if (!vm->StackPopEngineStructure(VMStructure::Effect, (void**)&pEffect))
        return VMError::StackUnderflow;

    CExoString tag;
    if (!vm->StackPopString(&tag))
        return VMError::StackUnderflow;

    if (auto nwnx = ProcessNWNX(tag))
    {
        if (nwnx->operation == "PUSH")
        {
            bSkipDelete = true;
            g_core->m_services->m_events->Push(nwnx->plugin, nwnx->event, pEffect);
        }
        else if (nwnx->operation == "POP")
        {
            if (auto res = g_core->m_services->m_events->Pop<CGameEffect*>(nwnx->plugin, nwnx->event))
            {
                delete pEffect;
                pEffect = *res;
            }
        }
        else ASSERT_FAIL_MSG("Only PUSH and POP operations allowed on TagEffect");
    }
    else
    {
        pEffect->SetCustomTag(tag);
        if (pEffect->m_nType == 40) // linked effects
        {
            pEffect->UpdateLinked();
        }
    }

    if (!vm->StackPushEngineStructure(VMStructure::Effect, pEffect))
        return VMError::StackOverflow;

    if (!bSkipDelete)
        delete pEffect;
    return VMError::Success;
}


int32_t NWNXCore::TagItemPropertyHandler(CNWVirtualMachineCommands* thisPtr, int32_t nCommandId, int32_t nParameters)
{
    ASSERT(thisPtr); ASSERT(nCommandId == VMCommand::TagItemProperty); ASSERT(nParameters == 2);
    auto *vm = Globals::VirtualMachine();

    bool bSkipDelete = false;
    CGameEffect *pItemProperty; // Not a typo, same base type for effects and IPs
    if (!vm->StackPopEngineStructure(VMStructure::ItemProperty, (void**)&pItemProperty))
        return VMError::StackUnderflow;

    CExoString tag;
    if (!vm->StackPopString(&tag))
        return VMError::StackUnderflow;

    if (auto nwnx = ProcessNWNX(tag))
    {
        if (nwnx->operation == "PUSH")
        {
            bSkipDelete = true;
            g_core->m_services->m_events->Push(nwnx->plugin, nwnx->event, pItemProperty);
        }
        else if (nwnx->operation == "POP")
        {
            if (auto res = g_core->m_services->m_events->Pop<CGameEffect*>(nwnx->plugin, nwnx->event))
            {
                delete pItemProperty;
                pItemProperty = *res;
            }
        }
        else ASSERT_FAIL_MSG("Only PUSH and POP operations allowed on TagItemProperty");
    }
    else
    {
        if (pItemProperty->m_nType == 91) // ItemProperty effect
        {
            pItemProperty->SetString(0, tag);
        }
    }

    if (!vm->StackPushEngineStructure(VMStructure::ItemProperty, pItemProperty))
        return VMError::StackOverflow;

    if (!bSkipDelete)
        delete pItemProperty;
    return VMError::Success;
}


int32_t NWNXCore::PlaySoundHandler(CNWVirtualMachineCommands* thisPtr, int32_t nCommandId, int32_t nParameters)
{
    ASSERT(thisPtr); ASSERT(nCommandId == VMCommand::PlaySound); ASSERT(nParameters == 1);
    auto *vm = Globals::VirtualMachine();

    CExoString sound;
    if (!vm->StackPopString(&sound))
        return VMError::StackUnderflow;

    if (auto nwnx = ProcessNWNX(sound))
    {
        ASSERT(nwnx->operation == "CALL"); // This one is used only for CALL ops
        g_core->m_services->m_events->Call(nwnx->plugin, nwnx->event);
    }
    else
    {
        if (thisPtr->m_bValidObjectRunScript)
        {
            if (auto *obj = Utils::AsNWSObject(Utils::GetGameObject(thisPtr->m_oidObjectRunScript)))
            {
                if (obj->m_bAbleToModifyActionQueue)
                {
                    obj->AddAction(23, -1, 4, (CExoString*)&sound,
                              0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
                }

            }
        }
    }
    return VMError::Success;
}


}
