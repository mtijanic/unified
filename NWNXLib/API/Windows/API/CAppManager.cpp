#include "CAppManager.hpp"
#include "API/Functions.hpp"
#include "Platform/ASLR.hpp"

#include "CClientExoApp.hpp"
#include "CNWReentrantServerStats.hpp"
#include "CNWTileSetManager.hpp"
#include "CObjectTableManager.hpp"
#include "CServerExoApp.hpp"

namespace NWNXLib {

namespace API {

CAppManager::CAppManager()
{
    CAppManager__CAppManagerCtor(this);
}

CAppManager::~CAppManager()
{
    CAppManager__CAppManagerDtor(this);
}

void CAppManager::ConnectToServer(CExoString a0, int32_t a1)
{
    return CAppManager__ConnectToServer(this, a0, a1);
}

void CAppManager::CreateServer()
{
    return CAppManager__CreateServer(this);
}

void CAppManager::DestroyScriptDebuggerPopup()
{
    return CAppManager__DestroyScriptDebuggerPopup(this);
}

void CAppManager::DestroyServer()
{
    return CAppManager__DestroyServer(this);
}

void CAppManager::DisplayScriptDebuggerPopup()
{
    return CAppManager__DisplayScriptDebuggerPopup(this);
}

void CAppManager::DoSaveGameScreenShot(CExoString& a0)
{
    return CAppManager__DoSaveGameScreenShot(this, a0);
}

int32_t CAppManager::GetDungeonMasterEXERunning()
{
    return CAppManager__GetDungeonMasterEXERunning(this);
}

CObjectTableManager* CAppManager::GetObjectTableManager(uint32_t a0)
{
    return CAppManager__GetObjectTableManager(this, a0);
}

unsigned char CAppManager::GetProgressFromCodeword(CExoString& a0)
{
    return CAppManager__GetProgressFromCodeword(this, a0);
}

unsigned char CAppManager::ReadProgressFromINI(unsigned char a0)
{
    return CAppManager__ReadProgressFromINI(this, a0);
}

int32_t CAppManager::SetDDCipherForModule(CExoString a0)
{
    return CAppManager__SetDDCipherForModule(this, a0);
}

void CAppManager::SetDungeonMasterEXERunning(int32_t a0)
{
    return CAppManager__SetDungeonMasterEXERunning(this, a0);
}

void CAppManager::ShowServerMem()
{
    return CAppManager__ShowServerMem(this);
}

int32_t CAppManager::SpawnExternalScriptDebugger()
{
    return CAppManager__SpawnExternalScriptDebugger(this);
}

void CAppManager__CAppManagerCtor(CAppManager* thisPtr)
{
    using FuncPtrType = void(__fastcall *)(CAppManager*, int);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CAppManager__CAppManagerCtor);
    FuncPtrType func = reinterpret_cast<FuncPtrType>    (address);
    int edx = 0;
    func(thisPtr, edx);
}

void CAppManager__CAppManagerDtor(CAppManager* thisPtr)
{
    using FuncPtrType = void(__fastcall *)(CAppManager*, int, int);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CAppManager__CAppManagerDtor);
    FuncPtrType func = reinterpret_cast<FuncPtrType>    (address);
    int edx = 0;
    func(thisPtr, edx, 2);
}

void CAppManager__ConnectToServer(CAppManager* thisPtr, CExoString a0, int32_t a1)
{
    using FuncPtrType = void(__fastcall *)(CAppManager*, int, CExoString, int32_t);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CAppManager__ConnectToServer);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx, a0, a1);
}

void CAppManager__CreateServer(CAppManager* thisPtr)
{
    using FuncPtrType = void(__fastcall *)(CAppManager*, int);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CAppManager__CreateServer);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx);
}

void CAppManager__DestroyScriptDebuggerPopup(CAppManager* thisPtr)
{
    using FuncPtrType = void(__fastcall *)(CAppManager*, int);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CAppManager__DestroyScriptDebuggerPopup);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx);
}

void CAppManager__DestroyServer(CAppManager* thisPtr)
{
    using FuncPtrType = void(__fastcall *)(CAppManager*, int);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CAppManager__DestroyServer);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx);
}

void CAppManager__DisplayScriptDebuggerPopup(CAppManager* thisPtr)
{
    using FuncPtrType = void(__fastcall *)(CAppManager*, int);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CAppManager__DisplayScriptDebuggerPopup);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx);
}

void CAppManager__DoSaveGameScreenShot(CAppManager* thisPtr, CExoString& a0)
{
    using FuncPtrType = void(__fastcall *)(CAppManager*, int, CExoString&);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CAppManager__DoSaveGameScreenShot);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx, a0);
}

int32_t CAppManager__GetDungeonMasterEXERunning(CAppManager* thisPtr)
{
    using FuncPtrType = int32_t(__fastcall *)(CAppManager*, int);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CAppManager__GetDungeonMasterEXERunning);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx);
}

CObjectTableManager* CAppManager__GetObjectTableManager(CAppManager* thisPtr, uint32_t a0)
{
    using FuncPtrType = CObjectTableManager*(__fastcall *)(CAppManager*, int, uint32_t);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CAppManager__GetObjectTableManager);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx, a0);
}

unsigned char CAppManager__GetProgressFromCodeword(CAppManager* thisPtr, CExoString& a0)
{
    using FuncPtrType = unsigned char(__fastcall *)(CAppManager*, int, CExoString&);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CAppManager__GetProgressFromCodeword);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx, a0);
}

unsigned char CAppManager__ReadProgressFromINI(CAppManager* thisPtr, unsigned char a0)
{
    using FuncPtrType = unsigned char(__fastcall *)(CAppManager*, int, unsigned char);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CAppManager__ReadProgressFromINI);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx, a0);
}

int32_t CAppManager__SetDDCipherForModule(CAppManager* thisPtr, CExoString a0)
{
    using FuncPtrType = int32_t(__fastcall *)(CAppManager*, int, CExoString);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CAppManager__SetDDCipherForModule);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx, a0);
}

void CAppManager__SetDungeonMasterEXERunning(CAppManager* thisPtr, int32_t a0)
{
    using FuncPtrType = void(__fastcall *)(CAppManager*, int, int32_t);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CAppManager__SetDungeonMasterEXERunning);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx, a0);
}

void CAppManager__ShowServerMem(CAppManager* thisPtr)
{
    using FuncPtrType = void(__fastcall *)(CAppManager*, int);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CAppManager__ShowServerMem);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx);
}

int32_t CAppManager__SpawnExternalScriptDebugger(CAppManager* thisPtr)
{
    using FuncPtrType = int32_t(__fastcall *)(CAppManager*, int);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CAppManager__SpawnExternalScriptDebugger);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx);
}

}

}
