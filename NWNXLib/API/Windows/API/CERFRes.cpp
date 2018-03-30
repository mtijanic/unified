#include "CERFRes.hpp"
#include "API/Functions.hpp"
#include "Platform/ASLR.hpp"

#include "CExoFile.hpp"

namespace NWNXLib {

namespace API {

CERFRes::CERFRes()
{
    CERFRes__CERFResCtor(this);
}

CERFRes::~CERFRes()
{
    CERFRes__CERFResDtor(this);
}

int32_t CERFRes::Read()
{
    return CERFRes__Read(this);
}

int32_t CERFRes::Reset()
{
    return CERFRes__Reset(this);
}

int32_t CERFRes::Write(CExoFile& a0, uint32_t a1)
{
    return CERFRes__Write(this, a0, a1);
}

void CERFRes__CERFResCtor(CERFRes* thisPtr)
{
    using FuncPtrType = void(__fastcall *)(CERFRes*, int);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CERFRes__CERFResCtor);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    func(thisPtr);
}

void CERFRes__CERFResDtor(CERFRes* thisPtr)
{
    using FuncPtrType = void(__fastcall *)(CERFRes*, int, int);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CERFRes__CERFResDtor);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    func(thisPtr, 2);
}

int32_t CERFRes__Read(CERFRes* thisPtr)
{
    using FuncPtrType = int32_t(__fastcall *)(CERFRes*, int);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CERFRes__Read);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx);
}

int32_t CERFRes__Reset(CERFRes* thisPtr)
{
    using FuncPtrType = int32_t(__fastcall *)(CERFRes*, int);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CERFRes__Reset);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx);
}

int32_t CERFRes__Write(CERFRes* thisPtr, CExoFile& a0, uint32_t a1)
{
    using FuncPtrType = int32_t(__fastcall *)(CERFRes*, int, CExoFile&, uint32_t);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CERFRes__Write);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx, a0, a1);
}

}

}
