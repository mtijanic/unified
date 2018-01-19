#include "CExoLinkedListTemplatedCLastUpdatePartyObject.hpp"
#include "API/Functions.hpp"
#include "Platform/ASLR.hpp"

#include "CExoLinkedListInternal.hpp"

namespace NWNXLib {

namespace API {

CExoLinkedListTemplatedCLastUpdatePartyObject::~CExoLinkedListTemplatedCLastUpdatePartyObject()
{
    CExoLinkedListTemplatedCLastUpdatePartyObject__CExoLinkedListTemplatedCLastUpdatePartyObjectDtor(this);
}

void CExoLinkedListTemplatedCLastUpdatePartyObject__CExoLinkedListTemplatedCLastUpdatePartyObjectDtor(CExoLinkedListTemplatedCLastUpdatePartyObject* thisPtr)
{
    using FuncPtrType = void(__fastcall *)(CExoLinkedListTemplatedCLastUpdatePartyObject*, int, int);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CExoLinkedListTemplatedCLastUpdatePartyObject__CExoLinkedListTemplatedCLastUpdatePartyObjectDtor);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    func(thisPtr, edx, 2);
}

}

}
