#include "CExoLinkedListTemplatedNWAreaExpansion_st.hpp"
#include "API/Functions.hpp"
#include "Platform/ASLR.hpp"

#include "CExoLinkedListInternal.hpp"

namespace NWNXLib {

namespace API {

CExoLinkedListTemplatedNWAreaExpansion_st::~CExoLinkedListTemplatedNWAreaExpansion_st()
{
    CExoLinkedListTemplatedNWAreaExpansion_st__CExoLinkedListTemplatedNWAreaExpansion_stDtor(this);
}

void CExoLinkedListTemplatedNWAreaExpansion_st__CExoLinkedListTemplatedNWAreaExpansion_stDtor(CExoLinkedListTemplatedNWAreaExpansion_st* thisPtr)
{
    using FuncPtrType = void(__fastcall *)(CExoLinkedListTemplatedNWAreaExpansion_st*, int, int);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CExoLinkedListTemplatedNWAreaExpansion_st__CExoLinkedListTemplatedNWAreaExpansion_stDtor);
    FuncPtrType func = reinterpret_cast<FuncPtrType>    (address);
    int edx = 0;
    func(thisPtr, edx, 2);
}

}

}
