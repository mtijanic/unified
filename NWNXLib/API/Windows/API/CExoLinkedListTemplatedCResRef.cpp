#include "CExoLinkedListTemplatedCResRef.hpp"
#include "API/Functions.hpp"
#include "Platform/ASLR.hpp"

#include "CExoLinkedListInternal.hpp"

namespace NWNXLib {

namespace API {

CExoLinkedListTemplatedCResRef::~CExoLinkedListTemplatedCResRef()
{
    CExoLinkedListTemplatedCResRef__CExoLinkedListTemplatedCResRefDtor(this);
}

void CExoLinkedListTemplatedCResRef__CExoLinkedListTemplatedCResRefDtor(CExoLinkedListTemplatedCResRef* thisPtr)
{
    using FuncPtrType = void(__fastcall *)(CExoLinkedListTemplatedCResRef*, int, int);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CExoLinkedListTemplatedCResRef__CExoLinkedListTemplatedCResRefDtor);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    func(thisPtr, edx, 2);
}

}

}
