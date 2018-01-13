#include "CResWOK.hpp"
#include "API/Functions.hpp"
#include "Platform/ASLR.hpp"

namespace NWNXLib {

namespace API {

CResWOK::CResWOK()
{
    CResWOK__CResWOKCtor(this);
}

CResWOK::~CResWOK()
{
    CResWOK__CResWOKDtor__0(this);
}

unsigned char* CResWOK::GetWOKDataPtr()
{
    return CResWOK__GetWOKDataPtr(this);
}

uint32_t CResWOK::GetWOKSize()
{
    return CResWOK__GetWOKSize(this);
}

int32_t CResWOK::IsLoaded()
{
    return CResWOK__IsLoaded(this);
}

int32_t CResWOK::OnResourceFreed()
{
    return CResWOK__OnResourceFreed(this);
}

int32_t CResWOK::OnResourceServiced()
{
    return CResWOK__OnResourceServiced(this);
}

void CResWOK__CResWOKCtor(CResWOK* thisPtr)
{
    using FuncPtrType = void(__fastcall *)(CResWOK*, int);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CResWOK__CResWOKCtor);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    func(thisPtr, edx);
}

void CResWOK__CResWOKDtor__0(CResWOK* thisPtr)
{
    using FuncPtrType = void(__fastcall *)(CResWOK*, int, int);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CResWOK__CResWOKDtor__0);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    func(thisPtr, edx, 2);
}

unsigned char* CResWOK__GetWOKDataPtr(CResWOK* thisPtr)
{
    using FuncPtrType = unsigned char*(__fastcall *)(CResWOK*, int);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CResWOK__GetWOKDataPtr);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx);
}

uint32_t CResWOK__GetWOKSize(CResWOK* thisPtr)
{
    using FuncPtrType = uint32_t(__fastcall *)(CResWOK*, int);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CResWOK__GetWOKSize);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx);
}

int32_t CResWOK__IsLoaded(CResWOK* thisPtr)
{
    using FuncPtrType = int32_t(__fastcall *)(CResWOK*, int);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CResWOK__IsLoaded);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx);
}

int32_t CResWOK__OnResourceFreed(CResWOK* thisPtr)
{
    using FuncPtrType = int32_t(__fastcall *)(CResWOK*, int);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CResWOK__OnResourceFreed);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx);
}

int32_t CResWOK__OnResourceServiced(CResWOK* thisPtr)
{
    using FuncPtrType = int32_t(__fastcall *)(CResWOK*, int);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CResWOK__OnResourceServiced);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx);
}

}

}
