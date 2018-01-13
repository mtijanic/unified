#include "CExoArrayListTemplatedunsignedlong.hpp"
#include "API/Functions.hpp"
#include "Platform/ASLR.hpp"

namespace NWNXLib {

namespace API {

void CExoArrayListTemplatedunsignedlong::Add(uint32_t a0)
{
    return CExoArrayListTemplatedunsignedlong__Add(this, a0);
}

int32_t CExoArrayListTemplatedunsignedlong::AddUnique(uint32_t a0)
{
    return CExoArrayListTemplatedunsignedlong__AddUnique(this, a0);
}

void CExoArrayListTemplatedunsignedlong::Allocate(int32_t a0)
{
    return CExoArrayListTemplatedunsignedlong__Allocate(this, a0);
}

CExoArrayListTemplatedunsignedlong& CExoArrayListTemplatedunsignedlong::operator=(const CExoArrayListTemplatedunsignedlong& a0)
{
    return CExoArrayListTemplatedunsignedlong__OperatorAssignment(this, a0);
}

void CExoArrayListTemplatedunsignedlong::Remove(uint32_t a0)
{
    return CExoArrayListTemplatedunsignedlong__Remove(this, a0);
}

void CExoArrayListTemplatedunsignedlong::SetSize(int32_t a0)
{
    return CExoArrayListTemplatedunsignedlong__SetSize(this, a0);
}

void CExoArrayListTemplatedunsignedlong__Add(CExoArrayListTemplatedunsignedlong* thisPtr, uint32_t a0)
{
    using FuncPtrType = void(__fastcall *)(CExoArrayListTemplatedunsignedlong*, int, uint32_t);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CExoArrayListTemplatedunsignedlong__Add);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx, a0);
}

int32_t CExoArrayListTemplatedunsignedlong__AddUnique(CExoArrayListTemplatedunsignedlong* thisPtr, uint32_t a0)
{
    using FuncPtrType = int32_t(__fastcall *)(CExoArrayListTemplatedunsignedlong*, int, uint32_t);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CExoArrayListTemplatedunsignedlong__AddUnique);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx, a0);
}

void CExoArrayListTemplatedunsignedlong__Allocate(CExoArrayListTemplatedunsignedlong* thisPtr, int32_t a0)
{
    using FuncPtrType = void(__fastcall *)(CExoArrayListTemplatedunsignedlong*, int, int32_t);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CExoArrayListTemplatedunsignedlong__Allocate);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx, a0);
}

CExoArrayListTemplatedunsignedlong& CExoArrayListTemplatedunsignedlong__OperatorAssignment(CExoArrayListTemplatedunsignedlong* thisPtr, const CExoArrayListTemplatedunsignedlong& a0)
{
    using FuncPtrType = CExoArrayListTemplatedunsignedlong&(__fastcall *)(CExoArrayListTemplatedunsignedlong*, int, const CExoArrayListTemplatedunsignedlong&);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CExoArrayListTemplatedunsignedlong__OperatorAssignment);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx, a0);
}

void CExoArrayListTemplatedunsignedlong__Remove(CExoArrayListTemplatedunsignedlong* thisPtr, uint32_t a0)
{
    using FuncPtrType = void(__fastcall *)(CExoArrayListTemplatedunsignedlong*, int, uint32_t);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CExoArrayListTemplatedunsignedlong__Remove);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx, a0);
}

void CExoArrayListTemplatedunsignedlong__SetSize(CExoArrayListTemplatedunsignedlong* thisPtr, int32_t a0)
{
    using FuncPtrType = void(__fastcall *)(CExoArrayListTemplatedunsignedlong*, int, int32_t);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CExoArrayListTemplatedunsignedlong__SetSize);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx, a0);
}

}

}
