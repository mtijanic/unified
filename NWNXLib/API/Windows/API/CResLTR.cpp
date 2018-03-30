#include "CResLTR.hpp"
#include "API/Functions.hpp"
#include "Platform/ASLR.hpp"

#include "ExoLTRHeader_st.hpp"

namespace NWNXLib {

namespace API {

CResLTR::CResLTR()
{
    CResLTR__CResLTRCtor(this);
}

CResLTR::~CResLTR()
{
    CResLTR__CResLTRDtor__0(this);
}

int32_t CResLTR::OnResourceFreed()
{
    return CResLTR__OnResourceFreed(this);
}

int32_t CResLTR::OnResourceServiced()
{
    return CResLTR__OnResourceServiced(this);
}

void CResLTR__CResLTRCtor(CResLTR* thisPtr)
{
    using FuncPtrType = void(__fastcall *)(CResLTR*, int);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CResLTR__CResLTRCtor);
    FuncPtrType func = reinterpret_cast<FuncPtrType>    (address);
    int edx = 0;
    func(thisPtr, edx);
}

void CResLTR__CResLTRDtor__0(CResLTR* thisPtr)
{
    using FuncPtrType = void(__fastcall *)(CResLTR*, int, int);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CResLTR__CResLTRDtor);
    FuncPtrType func = reinterpret_cast<FuncPtrType>    (address);
    int edx = 0;
    func(thisPtr, edx, 2);
}

int32_t CResLTR__OnResourceFreed(CResLTR* thisPtr)
{
    using FuncPtrType = int32_t(__fastcall *)(CResLTR*, int);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CResLTR__OnResourceFreed);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx);
}

int32_t CResLTR__OnResourceServiced(CResLTR* thisPtr)
{
    using FuncPtrType = int32_t(__fastcall *)(CResLTR*, int);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CResLTR__OnResourceServiced);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx);
}

}

}
