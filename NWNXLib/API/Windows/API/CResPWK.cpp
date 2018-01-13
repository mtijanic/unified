#include "CResPWK.hpp"
#include "API/Functions.hpp"
#include "Platform/ASLR.hpp"

namespace NWNXLib {

namespace API {

CResPWK::CResPWK()
{
    CResPWK__CResPWKCtor(this);
}

CResPWK::~CResPWK()
{
    CResPWK__CResPWKDtor__0(this);
}

unsigned char* CResPWK::GetPWKDataPtr()
{
    return CResPWK__GetPWKDataPtr(this);
}

uint32_t CResPWK::GetPWKSize()
{
    return CResPWK__GetPWKSize(this);
}

int32_t CResPWK::IsLoaded()
{
    return CResPWK__IsLoaded(this);
}

int32_t CResPWK::OnResourceFreed()
{
    return CResPWK__OnResourceFreed(this);
}

int32_t CResPWK::OnResourceServiced()
{
    return CResPWK__OnResourceServiced(this);
}

void CResPWK__CResPWKCtor(CResPWK* thisPtr)
{
    using FuncPtrType = void(__fastcall *)(CResPWK*, int);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CResPWK__CResPWKCtor);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    func(thisPtr, edx);
}

void CResPWK__CResPWKDtor__0(CResPWK* thisPtr)
{
    using FuncPtrType = void(__fastcall *)(CResPWK*, int, int);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CResPWK__CResPWKDtor__0);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    func(thisPtr, edx, 2);
}

unsigned char* CResPWK__GetPWKDataPtr(CResPWK* thisPtr)
{
    using FuncPtrType = unsigned char*(__fastcall *)(CResPWK*, int);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CResPWK__GetPWKDataPtr);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx);
}

uint32_t CResPWK__GetPWKSize(CResPWK* thisPtr)
{
    using FuncPtrType = uint32_t(__fastcall *)(CResPWK*, int);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CResPWK__GetPWKSize);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx);
}

int32_t CResPWK__IsLoaded(CResPWK* thisPtr)
{
    using FuncPtrType = int32_t(__fastcall *)(CResPWK*, int);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CResPWK__IsLoaded);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx);
}

int32_t CResPWK__OnResourceFreed(CResPWK* thisPtr)
{
    using FuncPtrType = int32_t(__fastcall *)(CResPWK*, int);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CResPWK__OnResourceFreed);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx);
}

int32_t CResPWK__OnResourceServiced(CResPWK* thisPtr)
{
    using FuncPtrType = int32_t(__fastcall *)(CResPWK*, int);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CResPWK__OnResourceServiced);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx);
}

}

}
