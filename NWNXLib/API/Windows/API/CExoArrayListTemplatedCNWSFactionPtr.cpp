#include "CExoArrayListTemplatedCNWSFactionPtr.hpp"
#include "API/Functions.hpp"
#include "Platform/ASLR.hpp"

#include "CNWSFaction.hpp"

namespace NWNXLib {

namespace API {

void CExoArrayListTemplatedCNWSFactionPtr::Add(CNWSFaction* a0)
{
    return CExoArrayListTemplatedCNWSFactionPtr__Add(this, a0);
}

void CExoArrayListTemplatedCNWSFactionPtr__Add(CExoArrayListTemplatedCNWSFactionPtr* thisPtr, CNWSFaction* a0)
{
    using FuncPtrType = void(__fastcall *)(CExoArrayListTemplatedCNWSFactionPtr*, int, CNWSFaction*);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CExoArrayListTemplatedCNWSFactionPtr__Add);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx, a0);
}

}

}
