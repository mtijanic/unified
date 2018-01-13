#include "CExoArrayListTemplatedCGameObjectPtr.hpp"
#include "API/Functions.hpp"
#include "Platform/ASLR.hpp"

#include "CGameObject.hpp"

namespace NWNXLib {

namespace API {

void CExoArrayListTemplatedCGameObjectPtr::Add(CGameObject* a0)
{
    return CExoArrayListTemplatedCGameObjectPtr__Add(this, a0);
}

void CExoArrayListTemplatedCGameObjectPtr__Add(CExoArrayListTemplatedCGameObjectPtr* thisPtr, CGameObject* a0)
{
    using FuncPtrType = void(__fastcall *)(CExoArrayListTemplatedCGameObjectPtr*, int, CGameObject*);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CExoArrayListTemplatedCGameObjectPtr__Add);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx, a0);
}

}

}
