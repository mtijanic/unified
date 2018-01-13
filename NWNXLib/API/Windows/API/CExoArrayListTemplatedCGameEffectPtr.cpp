#include "CExoArrayListTemplatedCGameEffectPtr.hpp"
#include "API/Functions.hpp"
#include "Platform/ASLR.hpp"

#include "CGameEffect.hpp"

namespace NWNXLib {

namespace API {

void CExoArrayListTemplatedCGameEffectPtr::Add(CGameEffect* a0)
{
    return CExoArrayListTemplatedCGameEffectPtr__Add(this, a0);
}

CExoArrayListTemplatedCGameEffectPtr& CExoArrayListTemplatedCGameEffectPtr::operator=(const CExoArrayListTemplatedCGameEffectPtr& a0)
{
    return CExoArrayListTemplatedCGameEffectPtr__OperatorAssignment(this, a0);
}

void CExoArrayListTemplatedCGameEffectPtr__Add(CExoArrayListTemplatedCGameEffectPtr* thisPtr, CGameEffect* a0)
{
    using FuncPtrType = void(__fastcall *)(CExoArrayListTemplatedCGameEffectPtr*, int, CGameEffect*);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CExoArrayListTemplatedCGameEffectPtr__Add);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx, a0);
}

CExoArrayListTemplatedCGameEffectPtr& CExoArrayListTemplatedCGameEffectPtr__OperatorAssignment(CExoArrayListTemplatedCGameEffectPtr* thisPtr, const CExoArrayListTemplatedCGameEffectPtr& a0)
{
    using FuncPtrType = CExoArrayListTemplatedCGameEffectPtr&(__fastcall *)(CExoArrayListTemplatedCGameEffectPtr*, int, const CExoArrayListTemplatedCGameEffectPtr&);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CExoArrayListTemplatedCGameEffectPtr__OperatorAssignment);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx, a0);
}

}

}
