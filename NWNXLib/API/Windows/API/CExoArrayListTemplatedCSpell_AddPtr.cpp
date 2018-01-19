#include "CExoArrayListTemplatedCSpell_AddPtr.hpp"
#include "API/Functions.hpp"
#include "Platform/ASLR.hpp"

#include "CSpell_Add.hpp"

namespace NWNXLib {

namespace API {

void CExoArrayListTemplatedCSpell_AddPtr::Add(CSpell_Add* a0)
{
    return CExoArrayListTemplatedCSpell_AddPtr__Add(this, a0);
}

void CExoArrayListTemplatedCSpell_AddPtr__Add(CExoArrayListTemplatedCSpell_AddPtr* thisPtr, CSpell_Add* a0)
{
    using FuncPtrType = void(__fastcall *)(CExoArrayListTemplatedCSpell_AddPtr*, int, CSpell_Add*);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CExoArrayListTemplatedCSpell_AddPtr__Add);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx, a0);
}

}

}
