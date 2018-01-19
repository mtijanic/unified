#include "CExoDebug.hpp"
#include "API/Functions.hpp"
#include "Platform/ASLR.hpp"

#include "CExoDebugInternal.hpp"

namespace NWNXLib {

namespace API {

CExoDebug::CExoDebug()
{
    CExoDebug__CExoDebugCtor(this);
}

CExoDebug::~CExoDebug()
{
    CExoDebug__CExoDebugDtor(this);
}

void CExoDebug::Assert(int32_t a0, const char* a1, const char* a2)
{
    return CExoDebug__Assert(this, a0, a1, a2);
}

void CExoDebug::CloseLogFiles()
{
    return CExoDebug__CloseLogFiles(this);
}

void CExoDebug::FlushErrorFile()
{
    return CExoDebug__FlushErrorFile(this);
}

void CExoDebug::FlushLogFile()
{
    return CExoDebug__FlushLogFile(this);
}

uint32_t CExoDebug::GetCurrentAllocatedMemory()
{
    return CExoDebug__GetCurrentAllocatedMemory(this);
}

uint32_t CExoDebug::GetCurrentMemoryAllocations()
{
    return CExoDebug__GetCurrentMemoryAllocations(this);
}

void CExoDebug::GetCurrentTimestamp(CExoString& a0)
{
    return CExoDebug__GetCurrentTimestamp(this, a0);
}

uint32_t CExoDebug::GetMaxAllocatedMemory()
{
    return CExoDebug__GetMaxAllocatedMemory(this);
}

uint32_t CExoDebug::GetTotalMemoryAllocations()
{
    return CExoDebug__GetTotalMemoryAllocations(this);
}

void CExoDebug::OpenLogFiles(CExoString a0, int32_t a1)
{
    return CExoDebug__OpenLogFiles(this, a0, a1);
}

void CExoDebug::SetRotateLogFile(int32_t a0)
{
    return CExoDebug__SetRotateLogFile(this, a0);
}

void CExoDebug::Warning(int32_t a0, const char* a1, const char* a2)
{
    return CExoDebug__Warning(this, a0, a1, a2);
}

void CExoDebug::WriteToErrorFile(const CExoString& a0)
{
    return CExoDebug__WriteToErrorFile(this, a0);
}

void CExoDebug::WriteToLogFile(const CExoString& a0)
{
    return CExoDebug__WriteToLogFile(this, a0);
}

void CExoDebug__CExoDebugCtor(CExoDebug* thisPtr)
{
    using FuncPtrType = void(__fastcall *)(CExoDebug*, int);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CExoDebug__CExoDebugCtor);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    func(thisPtr, edx);
}

void CExoDebug__CExoDebugDtor(CExoDebug* thisPtr)
{
    using FuncPtrType = void(__fastcall *)(CExoDebug*, int, int);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CExoDebug__CExoDebugDtor);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    func(thisPtr, edx, 2);
}

void CExoDebug__Assert(CExoDebug* thisPtr, int32_t a0, const char* a1, const char* a2)
{
    using FuncPtrType = void(__fastcall *)(CExoDebug*, int, int32_t, const char*, const char*);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CExoDebug__Assert);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx, a0, a1, a2);
}

void CExoDebug__CloseLogFiles(CExoDebug* thisPtr)
{
    using FuncPtrType = void(__fastcall *)(CExoDebug*, int);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CExoDebug__CloseLogFiles);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx);
}

void CExoDebug__FlushErrorFile(CExoDebug* thisPtr)
{
    using FuncPtrType = void(__fastcall *)(CExoDebug*, int);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CExoDebug__FlushErrorFile);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx);
}

void CExoDebug__FlushLogFile(CExoDebug* thisPtr)
{
    using FuncPtrType = void(__fastcall *)(CExoDebug*, int);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CExoDebug__FlushLogFile);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx);
}

uint32_t CExoDebug__GetCurrentAllocatedMemory(CExoDebug* thisPtr)
{
    using FuncPtrType = uint32_t(__fastcall *)(CExoDebug*, int);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CExoDebug__GetCurrentAllocatedMemory);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx);
}

uint32_t CExoDebug__GetCurrentMemoryAllocations(CExoDebug* thisPtr)
{
    using FuncPtrType = uint32_t(__fastcall *)(CExoDebug*, int);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CExoDebug__GetCurrentMemoryAllocations);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx);
}

void CExoDebug__GetCurrentTimestamp(CExoDebug* thisPtr, CExoString& a0)
{
    using FuncPtrType = void(__fastcall *)(CExoDebug*, int, CExoString&);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CExoDebug__GetCurrentTimestamp);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx, a0);
}

uint32_t CExoDebug__GetMaxAllocatedMemory(CExoDebug* thisPtr)
{
    using FuncPtrType = uint32_t(__fastcall *)(CExoDebug*, int);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CExoDebug__GetMaxAllocatedMemory);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx);
}

uint32_t CExoDebug__GetTotalMemoryAllocations(CExoDebug* thisPtr)
{
    using FuncPtrType = uint32_t(__fastcall *)(CExoDebug*, int);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CExoDebug__GetTotalMemoryAllocations);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx);
}

void CExoDebug__OpenLogFiles(CExoDebug* thisPtr, CExoString a0, int32_t a1)
{
    using FuncPtrType = void(__fastcall *)(CExoDebug*, int, CExoString, int32_t);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CExoDebug__OpenLogFiles);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx, a0, a1);
}

void CExoDebug__SetRotateLogFile(CExoDebug* thisPtr, int32_t a0)
{
    using FuncPtrType = void(__fastcall *)(CExoDebug*, int, int32_t);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CExoDebug__SetRotateLogFile);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx, a0);
}

void CExoDebug__Warning(CExoDebug* thisPtr, int32_t a0, const char* a1, const char* a2)
{
    using FuncPtrType = void(__fastcall *)(CExoDebug*, int, int32_t, const char*, const char*);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CExoDebug__Warning);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx, a0, a1, a2);
}

void CExoDebug__WriteToErrorFile(CExoDebug* thisPtr, const CExoString& a0)
{
    using FuncPtrType = void(__fastcall *)(CExoDebug*, int, const CExoString&);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CExoDebug__WriteToErrorFile);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx, a0);
}

void CExoDebug__WriteToLogFile(CExoDebug* thisPtr, const CExoString& a0)
{
    using FuncPtrType = void(__fastcall *)(CExoDebug*, int, const CExoString&);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CExoDebug__WriteToLogFile);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx, a0);
}

}

}
