#include "CERFKey.hpp"
#include "API/Functions.hpp"
#include "Platform/ASLR.hpp"

namespace NWNXLib {

namespace API {

CERFKey::CERFKey()
{
    CERFKey__CERFKeyCtor(this);
}

CERFKey::~CERFKey()
{
    CERFKey__CERFKeyDtor(this);
}

int32_t CERFKey::Read()
{
    return CERFKey__Read(this);
}

int32_t CERFKey::Reset()
{
    return CERFKey__Reset(this);
}

void CERFKey::SetName(CExoString& a0)
{
    return CERFKey__SetName(this, a0);
}

int32_t CERFKey::Write(CExoFile& a0)
{
    return CERFKey__Write(this, a0);
}

void CERFKey__CERFKeyCtor(CERFKey* thisPtr)
{
    using FuncPtrType = void(__fastcall *)(CERFKey*, int);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CERFKey__CERFKeyCtor);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    func(thisPtr, edx);
}

void CERFKey__CERFKeyDtor(CERFKey* thisPtr)
{
    using FuncPtrType = void(__fastcall *)(CERFKey*, int, int);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CERFKey__CERFKeyDtor);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    func(thisPtr, edx, 2);
}

int32_t CERFKey__Read(CERFKey* thisPtr)
{
    using FuncPtrType = int32_t(__fastcall *)(CERFKey*, int);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CERFKey__Read);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx);
}

int32_t CERFKey__Reset(CERFKey* thisPtr)
{
    using FuncPtrType = int32_t(__fastcall *)(CERFKey*, int);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CERFKey__Reset);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx);
}

void CERFKey__SetName(CERFKey* thisPtr, CExoString& a0)
{
    using FuncPtrType = void(__fastcall *)(CERFKey*, int, CExoString&);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CERFKey__SetName);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx, a0);
}

int32_t CERFKey__Write(CERFKey* thisPtr, CExoFile& a0)
{
    using FuncPtrType = int32_t(__fastcall *)(CERFKey*, int, CExoFile&);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CERFKey__Write);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx, a0);
}

}

}
