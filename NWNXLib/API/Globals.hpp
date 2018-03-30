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
constexpr uintptr_t g_exoBaseAddr        = 0x00774968; NWNX_EXPECT_VERSION(8166);
constexpr uintptr_t g_exoResManAddr      = 0x0077496C; NWNX_EXPECT_VERSION(8166);
constexpr uintptr_t g_virtualMachineAddr = 0x0077499C; NWNX_EXPECT_VERSION(8166);
constexpr uintptr_t g_scriptCompilerAddr = 0x007749A0; NWNX_EXPECT_VERSION(8166);
constexpr uintptr_t g_appManagerAddr     = 0x00774970; NWNX_EXPECT_VERSION(8166);
constexpr uintptr_t g_tlkTableAddr       = 0x00774964; NWNX_EXPECT_VERSION(8166);
constexpr uintptr_t g_nwRulesAddr        = 0x00774974; NWNX_EXPECT_VERSION(8166);
#else
constexpr uintptr_t g_exoBaseAddr        = 0x00485800; NWNX_EXPECT_VERSION(8166);
constexpr uintptr_t g_exoResManAddr      = 0x004857FC; NWNX_EXPECT_VERSION(8166);
constexpr uintptr_t g_virtualMachineAddr = 0x004857F8; NWNX_EXPECT_VERSION(8166);
constexpr uintptr_t g_scriptCompilerAddr = 0x004857F4; NWNX_EXPECT_VERSION(8166);
constexpr uintptr_t g_appManagerAddr     = 0x004857F0; NWNX_EXPECT_VERSION(8166);
constexpr uintptr_t g_tlkTableAddr       = 0x004857EC; NWNX_EXPECT_VERSION(8166);
constexpr uintptr_t g_nwRulesAddr        = 0x004857E8; NWNX_EXPECT_VERSION(8166);
#endif

extern CExoBase*        ExoBase();
extern CExoResMan*      ExoResMan();
extern CVirtualMachine* VirtualMachine();
extern CScriptCompiler* ScriptCompiler();
extern CAppManager*     AppManager();
extern CTlkTable*       TlkTable();
extern CNWRules*        Rules();

}

}

}
