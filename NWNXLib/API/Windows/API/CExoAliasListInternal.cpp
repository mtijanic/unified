#include "CExoAliasListInternal.hpp"
#include "API/Functions.hpp"
#include "Platform/ASLR.hpp"

#include "CExoAliasListInternal__CExoAlias.hpp"

namespace NWNXLib {

namespace API {

CExoAliasListInternal::CExoAliasListInternal()
{
    CExoAliasListInternal__CExoAliasListInternalCtor(this);
}

CExoAliasListInternal::~CExoAliasListInternal()
{
    CExoAliasListInternal__CExoAliasListInternalDtor(this);
}

void CExoAliasListInternal::Add(CExoString a0, CExoString a1)
{
    return CExoAliasListInternal__Add(this, a0, a1);
}

void CExoAliasListInternal::Clear()
{
    return CExoAliasListInternal__Clear(this);
}

void CExoAliasListInternal::Delete(CExoString a0)
{
    return CExoAliasListInternal__Delete(this, a0);
}

const CExoString& CExoAliasListInternal::GetAliasPath(const CExoString& a0, int32_t a1)
{
    return CExoAliasListInternal__GetAliasPath(this, a0, a1);
}

CExoString CExoAliasListInternal::ResolveFileName(const CExoString& a0, uint16_t a1)
{
    return CExoAliasListInternal__ResolveFileName(this, a0, a1);
}

void CExoAliasListInternal__CExoAliasListInternalCtor(CExoAliasListInternal* thisPtr)
{
    using FuncPtrType = void(__fastcall *)(CExoAliasListInternal*, int);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CExoAliasListInternal__CExoAliasListInternalCtor);
    FuncPtrType func = reinterpret_cast<FuncPtrType>    (address);
    int edx = 0;
    func(thisPtr, edx);
}

void CExoAliasListInternal__CExoAliasListInternalDtor(CExoAliasListInternal* thisPtr)
{
    using FuncPtrType = void(__fastcall *)(CExoAliasListInternal*, int, int);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CExoAliasListInternal__CExoAliasListInternalDtor);
    FuncPtrType func = reinterpret_cast<FuncPtrType>    (address);
    int edx = 0;
    func(thisPtr, edx, 2);
}

void CExoAliasListInternal__Add(CExoAliasListInternal* thisPtr, CExoString a0, CExoString a1)
{
    using FuncPtrType = void(__fastcall *)(CExoAliasListInternal*, int, CExoString, CExoString);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CExoAliasListInternal__Add);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx, a0, a1);
}

void CExoAliasListInternal__Clear(CExoAliasListInternal* thisPtr)
{
    using FuncPtrType = void(__fastcall *)(CExoAliasListInternal*, int);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CExoAliasListInternal__Clear);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx);
}

void CExoAliasListInternal__Delete(CExoAliasListInternal* thisPtr, CExoString a0)
{
    using FuncPtrType = void(__fastcall *)(CExoAliasListInternal*, int, CExoString);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CExoAliasListInternal__Delete);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx, a0);
}

const CExoString& CExoAliasListInternal__GetAliasPath(CExoAliasListInternal* thisPtr, const CExoString& a0, int32_t a1)
{
    using FuncPtrType = const CExoString&(__fastcall *)(CExoAliasListInternal*, int, const CExoString&, int32_t);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CExoAliasListInternal__GetAliasPath);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx, a0, a1);
}

CExoString CExoAliasListInternal__ResolveFileName(CExoAliasListInternal* thisPtr, const CExoString& a0, uint16_t a1)
{
    using FuncPtrType = CExoString(__fastcall *)(CExoAliasListInternal*, int, const CExoString&, uint16_t);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CExoAliasListInternal__ResolveFileName);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx, a0, a1);
}

}

}
