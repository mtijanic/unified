#include "CERFString.hpp"
#include "API/Functions.hpp"
#include "Platform/ASLR.hpp"

namespace NWNXLib {

namespace API {

CERFString::CERFString()
{
    CERFString__CERFStringCtor(this);
}

CERFString::~CERFString()
{
    CERFString__CERFStringDtor(this);
}

CExoString CERFString::GetText()
{
    return CERFString__GetText(this);
}

int32_t CERFString::Read()
{
    return CERFString__Read(this);
}

int32_t CERFString::Reset()
{
    return CERFString__Reset(this);
}

void CERFString::SetText(CExoString& a0)
{
    return CERFString__SetText(this, a0);
}

int32_t CERFString::Write(CExoFile& a0)
{
    return CERFString__Write(this, a0);
}

void CERFString__CERFStringCtor(CERFString* thisPtr)
{
    using FuncPtrType = void(__fastcall *)(CERFString*, int);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CERFString__CERFStringCtor);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    func(thisPtr, edx);
}

void CERFString__CERFStringDtor(CERFString* thisPtr)
{
    using FuncPtrType = void(__fastcall *)(CERFString*, int, int);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CERFString__CERFStringDtor);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    func(thisPtr, edx, 2);
}

CExoString CERFString__GetText(CERFString* thisPtr)
{
    using FuncPtrType = CExoString(__fastcall *)(CERFString*, int);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CERFString__GetText);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx);
}

int32_t CERFString__Read(CERFString* thisPtr)
{
    using FuncPtrType = int32_t(__fastcall *)(CERFString*, int);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CERFString__Read);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx);
}

int32_t CERFString__Reset(CERFString* thisPtr)
{
    using FuncPtrType = int32_t(__fastcall *)(CERFString*, int);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CERFString__Reset);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx);
}

void CERFString__SetText(CERFString* thisPtr, CExoString& a0)
{
    using FuncPtrType = void(__fastcall *)(CERFString*, int, CExoString&);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CERFString__SetText);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    func(thisPtr, edx, a0);
}

int32_t CERFString__Write(CERFString* thisPtr, CExoFile& a0)
{
    using FuncPtrType = int32_t(__fastcall *)(CERFString*, int, CExoFile&);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CERFString__Write);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx, a0);
}

}

}
