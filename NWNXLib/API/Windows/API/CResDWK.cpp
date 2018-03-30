#include "CResDWK.hpp"
#include "API/Functions.hpp"
#include "Platform/ASLR.hpp"

namespace NWNXLib {

namespace API {

CResDWK::CResDWK()
{
    CResDWK__CResDWKCtor(this);
}

CResDWK::~CResDWK()
{
    CResDWK__CResDWKDtor__0(this);
}

unsigned char* CResDWK::GetDWKDataPtr()
{
    return CResDWK__GetDWKDataPtr(this);
}

uint32_t CResDWK::GetDWKSize()
{
    return CResDWK__GetDWKSize(this);
}

int32_t CResDWK::IsLoaded()
{
    return CResDWK__IsLoaded(this);
}

int32_t CResDWK::OnResourceFreed()
{
    return CResDWK__OnResourceFreed(this);
}

int32_t CResDWK::OnResourceServiced()
{
    return CResDWK__OnResourceServiced(this);
}

void CResDWK__CResDWKCtor(CResDWK* thisPtr)
{
    using FuncPtrType = void(__fastcall *)(CResDWK*, int);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CResDWK__CResDWKCtor);
    FuncPtrType func = reinterpret_cast<FuncPtrType>    (address);
    int edx = 0;
    func(thisPtr, edx);
}

void CResDWK__CResDWKDtor__0(CResDWK* thisPtr)
{
    using FuncPtrType = void(__fastcall *)(CResDWK*, int, int);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CResDWK__CResDWKDtor__0);
    FuncPtrType func = reinterpret_cast<FuncPtrType>    (address);
    int edx = 0;
    func(thisPtr, edx, 2);
}

unsigned char* CResDWK__GetDWKDataPtr(CResDWK* thisPtr)
{
    using FuncPtrType = unsigned char*(__fastcall *)(CResDWK*, int);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CResDWK__GetDWKDataPtr);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx);
}

uint32_t CResDWK__GetDWKSize(CResDWK* thisPtr)
{
    using FuncPtrType = uint32_t(__fastcall *)(CResDWK*, int);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CResDWK__GetDWKSize);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx);
}

int32_t CResDWK__IsLoaded(CResDWK* thisPtr)
{
    using FuncPtrType = int32_t(__fastcall *)(CResDWK*, int);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CResDWK__IsLoaded);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx);
}

int32_t CResDWK__OnResourceFreed(CResDWK* thisPtr)
{
    using FuncPtrType = int32_t(__fastcall *)(CResDWK*, int);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CResDWK__OnResourceFreed);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx);
}

int32_t CResDWK__OnResourceServiced(CResDWK* thisPtr)
{
    using FuncPtrType = int32_t(__fastcall *)(CResDWK*, int);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CResDWK__OnResourceServiced);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx);
}

}

}
