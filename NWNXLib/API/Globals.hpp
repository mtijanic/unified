#pragma once

#include <cstdint>
#include "API/Version.hpp"

namespace NWNXLib {

namespace API {

struct CExoBase;
struct CExoResMan;
struct CVirtualMachine;
struct CScriptCompiler;
struct CAppManager;
struct CTlkTable;
struct CNWRules;
struct CExoString;

namespace Globals {


#ifdef _WIN32
constexpr uintptr_t g_exoBaseAddr        = 0x0075F74C; NWNX_EXPECT_VERSION(8154);
constexpr uintptr_t g_exoResManAddr      = 0x0075F748; NWNX_EXPECT_VERSION(8154);
constexpr uintptr_t g_virtualMachineAddr = 0x0075F778; NWNX_EXPECT_VERSION(8154);
constexpr uintptr_t g_scriptCompilerAddr = 0x0075F77C; NWNX_EXPECT_VERSION(8154);
constexpr uintptr_t g_appManagerAddr     = 0x0075F744; NWNX_EXPECT_VERSION(8154);
constexpr uintptr_t g_tlkTableAddr       = 0x0075F780; NWNX_EXPECT_VERSION(8154);
constexpr uintptr_t g_nwRulesAddr        = 0x0075F75C; NWNX_EXPECT_VERSION(8154);
constexpr uintptr_t g_buildNumberAddr    = 0x0075F7A4; NWNX_EXPECT_VERSION(8154);
#else
constexpr uintptr_t g_exoBaseAddr        = 0x0046F7E0; NWNX_EXPECT_VERSION(8153);
constexpr uintptr_t g_exoResManAddr      = 0x0046F7DC; NWNX_EXPECT_VERSION(8153);
constexpr uintptr_t g_virtualMachineAddr = 0x0046F7D8; NWNX_EXPECT_VERSION(8153);
constexpr uintptr_t g_scriptCompilerAddr = 0x0046F7D4; NWNX_EXPECT_VERSION(8153);
constexpr uintptr_t g_appManagerAddr     = 0x0046F7D0; NWNX_EXPECT_VERSION(8153);
constexpr uintptr_t g_tlkTableAddr       = 0x0046F7CC; NWNX_EXPECT_VERSION(8153);
constexpr uintptr_t g_nwRulesAddr        = 0x0046F7C8; NWNX_EXPECT_VERSION(8153);
constexpr uintptr_t g_buildNumberAddr    = 0x0046F7BC; NWNX_EXPECT_VERSION(8153);
#endif


extern CExoBase*        ExoBase();
extern CExoResMan*      ExoResMan();
extern CVirtualMachine* VirtualMachine();
extern CScriptCompiler* ScriptCompiler();
extern CAppManager*     AppManager();
extern CTlkTable*       TlkTable();
extern CNWRules*        Rules();
extern CExoString*      BuildNumber();

}

}

}
