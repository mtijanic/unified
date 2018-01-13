#include "CExoArrayListTemplatedunsignedshort.hpp"
#include "API/Functions.hpp"
#include "Platform/ASLR.hpp"

namespace NWNXLib {

namespace API {

void CExoArrayListTemplatedunsignedshort::Add(uint16_t a0)
{
    return CExoArrayListTemplatedunsignedshort__Add(this, a0);
}

void CExoArrayListTemplatedunsignedshort::Allocate(int32_t a0)
{
    return CExoArrayListTemplatedunsignedshort__Allocate(this, a0);
}

void CExoArrayListTemplatedunsignedshort::Insert(uint16_t a0, int32_t a1)
{
    return CExoArrayListTemplatedunsignedshort__Insert(this, a0, a1);
}

void CExoArrayListTemplatedunsignedshort::SetSize(int32_t a0)
{
    return CExoArrayListTemplatedunsignedshort__SetSize(this, a0);
}

void CExoArrayListTemplatedunsignedshort__Add(CExoArrayListTemplatedunsignedshort* thisPtr, uint16_t a0)
{
    using FuncPtrType = void(__fastcall *)(CExoArrayListTemplatedunsignedshort*, int, uint16_t);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CExoArrayListTemplatedunsignedshort__Add);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx, a0);
}

void CExoArrayListTemplatedunsignedshort__Allocate(CExoArrayListTemplatedunsignedshort* thisPtr, int32_t a0)
{
    using FuncPtrType = void(__fastcall *)(CExoArrayListTemplatedunsignedshort*, int, int32_t);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CExoArrayListTemplatedunsignedshort__Allocate);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx, a0);
}

void CExoArrayListTemplatedunsignedshort__Insert(CExoArrayListTemplatedunsignedshort* thisPtr, uint16_t a0, int32_t a1)
{
    using FuncPtrType = void(__fastcall *)(CExoArrayListTemplatedunsignedshort*, int, uint16_t, int32_t);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CExoArrayListTemplatedunsignedshort__Insert);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx, a0, a1);
}

void CExoArrayListTemplatedunsignedshort__SetSize(CExoArrayListTemplatedunsignedshort* thisPtr, int32_t a0)
{
    using FuncPtrType = void(__fastcall *)(CExoArrayListTemplatedunsignedshort*, int, int32_t);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CExoArrayListTemplatedunsignedshort__SetSize);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx, a0);
}

}

}
