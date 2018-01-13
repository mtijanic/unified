#include "CExoArrayListTemplatedCCombatInformationNodePtr.hpp"
#include "API/Functions.hpp"
#include "Platform/ASLR.hpp"

#include "CCombatInformationNode.hpp"

namespace NWNXLib {

namespace API {

void CExoArrayListTemplatedCCombatInformationNodePtr::Add(CCombatInformationNode* a0)
{
    return CExoArrayListTemplatedCCombatInformationNodePtr__Add(this, a0);
}

void CExoArrayListTemplatedCCombatInformationNodePtr__Add(CExoArrayListTemplatedCCombatInformationNodePtr* thisPtr, CCombatInformationNode* a0)
{
    using FuncPtrType = void(__fastcall *)(CExoArrayListTemplatedCCombatInformationNodePtr*, int, CCombatInformationNode*);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CExoArrayListTemplatedCCombatInformationNodePtr__Add);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx, a0);
}

}

}
