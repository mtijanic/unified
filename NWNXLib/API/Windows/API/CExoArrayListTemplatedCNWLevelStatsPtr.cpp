#include "CExoArrayListTemplatedCNWLevelStatsPtr.hpp"
#include "API/Functions.hpp"
#include "Platform/ASLR.hpp"

#include "CNWLevelStats.hpp"

namespace NWNXLib {

namespace API {

void CExoArrayListTemplatedCNWLevelStatsPtr::Add(CNWLevelStats* a0)
{
    return CExoArrayListTemplatedCNWLevelStatsPtr__Add(this, a0);
}

void CExoArrayListTemplatedCNWLevelStatsPtr__Add(CExoArrayListTemplatedCNWLevelStatsPtr* thisPtr, CNWLevelStats* a0)
{
    using FuncPtrType = void(__fastcall *)(CExoArrayListTemplatedCNWLevelStatsPtr*, int, CNWLevelStats*);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CExoArrayListTemplatedCNWLevelStatsPtr__Add);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx, a0);
}

}

}
