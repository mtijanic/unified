#include "CExoDebugInternal.hpp"
#include "API/Functions.hpp"
#include "Platform/ASLR.hpp"

#include "CExoFile.hpp"

namespace NWNXLib {

namespace API {

CExoDebugInternal::CExoDebugInternal()
{
    CExoDebugInternal__CExoDebugInternalCtor(this);
}

CExoDebugInternal::~CExoDebugInternal()
{
    CExoDebugInternal__CExoDebugInternalDtor(this);
}

void CExoDebugInternal::Assert(int32_t a0, const char* a1, const char* a2)
{
    return CExoDebugInternal__Assert(this, a0, a1, a2);
}

void CExoDebugInternal::CloseLogFiles()
{
    return CExoDebugInternal__CloseLogFiles(this);
}

int32_t CExoDebugInternal::CreateDirectory(CExoString a0)
{
    return CExoDebugInternal__CreateDirectory(this, a0);
}

void CExoDebugInternal::FlushErrorFile()
{
    return CExoDebugInternal__FlushErrorFile(this);
}

void CExoDebugInternal::FlushLogFile()
{
    return CExoDebugInternal__FlushLogFile(this);
}

void CExoDebugInternal::GetCurrentTimestamp(CExoString& a0)
{
    return CExoDebugInternal__GetCurrentTimestamp(this, a0);
}

void CExoDebugInternal::OpenLogFiles(CExoString a0, int32_t a1)
{
    return CExoDebugInternal__OpenLogFiles(this, a0, a1);
}

void CExoDebugInternal::Warning(int32_t a0, const char* a1, const char* a2)
{
    return CExoDebugInternal__Warning(this, a0, a1, a2);
}

void CExoDebugInternal::WriteToErrorFile(const CExoString& a0)
{
    return CExoDebugInternal__WriteToErrorFile(this, a0);
}

void CExoDebugInternal::WriteToLogFile(const CExoString& a0)
{
    return CExoDebugInternal__WriteToLogFile(this, a0);
}

void CExoDebugInternal__CExoDebugInternalCtor(CExoDebugInternal* thisPtr)
{
    using FuncPtrType = void(__fastcall *)(CExoDebugInternal*, int);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CExoDebugInternal__CExoDebugInternalCtor);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    func(thisPtr);
}

void CExoDebugInternal__CExoDebugInternalDtor(CExoDebugInternal* thisPtr)
{
    using FuncPtrType = void(__fastcall *)(CExoDebugInternal*, int, int);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CExoDebugInternal__CExoDebugInternalDtor);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    func(thisPtr, 2);
}

void CExoDebugInternal__Assert(CExoDebugInternal* thisPtr, int32_t a0, const char* a1, const char* a2)
{
    using FuncPtrType = void(__fastcall *)(CExoDebugInternal*, int, int32_t, const char*, const char*);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CExoDebugInternal__Assert);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx, a0, a1, a2);
}

void CExoDebugInternal__CloseLogFiles(CExoDebugInternal* thisPtr)
{
    using FuncPtrType = void(__fastcall *)(CExoDebugInternal*, int);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CExoDebugInternal__CloseLogFiles);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx);
}

int32_t CExoDebugInternal__CreateDirectory(CExoDebugInternal* thisPtr, CExoString a0)
{
    using FuncPtrType = int32_t(__fastcall *)(CExoDebugInternal*, int, CExoString);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CExoDebugInternal__CreateDirectory);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx, a0);
}

void CExoDebugInternal__FlushErrorFile(CExoDebugInternal* thisPtr)
{
    using FuncPtrType = void(__fastcall *)(CExoDebugInternal*, int);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CExoDebugInternal__FlushErrorFile);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx);
}

void CExoDebugInternal__FlushLogFile(CExoDebugInternal* thisPtr)
{
    using FuncPtrType = void(__fastcall *)(CExoDebugInternal*, int);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CExoDebugInternal__FlushLogFile);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx);
}

void CExoDebugInternal__GetCurrentTimestamp(CExoDebugInternal* thisPtr, CExoString& a0)
{
    using FuncPtrType = void(__fastcall *)(CExoDebugInternal*, int, CExoString&);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CExoDebugInternal__GetCurrentTimestamp);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx, a0);
}

void CExoDebugInternal__OpenLogFiles(CExoDebugInternal* thisPtr, CExoString a0, int32_t a1)
{
    using FuncPtrType = void(__fastcall *)(CExoDebugInternal*, int, CExoString, int32_t);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CExoDebugInternal__OpenLogFiles);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx, a0, a1);
}

void CExoDebugInternal__Warning(CExoDebugInternal* thisPtr, int32_t a0, const char* a1, const char* a2)
{
    using FuncPtrType = void(__fastcall *)(CExoDebugInternal*, int, int32_t, const char*, const char*);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CExoDebugInternal__Warning);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx, a0, a1, a2);
}

void CExoDebugInternal__WriteToErrorFile(CExoDebugInternal* thisPtr, const CExoString& a0)
{
    using FuncPtrType = void(__fastcall *)(CExoDebugInternal*, int, const CExoString&);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CExoDebugInternal__WriteToErrorFile);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx, a0);
}

void CExoDebugInternal__WriteToLogFile(CExoDebugInternal* thisPtr, const CExoString& a0)
{
    using FuncPtrType = void(__fastcall *)(CExoDebugInternal*, int, const CExoString&);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CExoDebugInternal__WriteToLogFile);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx, a0);
}

}

}
