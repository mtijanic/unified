#include "CExoLinkedListTemplatedNWModuleCutScene_st.hpp"
#include "API/Functions.hpp"
#include "Platform/ASLR.hpp"

#include "CExoLinkedListInternal.hpp"

namespace NWNXLib {

namespace API {

CExoLinkedListTemplatedNWModuleCutScene_st::~CExoLinkedListTemplatedNWModuleCutScene_st()
{
    CExoLinkedListTemplatedNWModuleCutScene_st__CExoLinkedListTemplatedNWModuleCutScene_stDtor(this);
}

void CExoLinkedListTemplatedNWModuleCutScene_st__CExoLinkedListTemplatedNWModuleCutScene_stDtor(CExoLinkedListTemplatedNWModuleCutScene_st* thisPtr)
{
    using FuncPtrType = void(__fastcall *)(CExoLinkedListTemplatedNWModuleCutScene_st*, int, int);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CExoLinkedListTemplatedNWModuleCutScene_st__CExoLinkedListTemplatedNWModuleCutScene_stDtor);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    func(thisPtr, edx, 2);
}

}

}
