#include "CExoLinkedListTemplatedCExoKeyTable.hpp"
#include "API/Functions.hpp"
#include "Platform/ASLR.hpp"

#include "CExoLinkedListInternal.hpp"

namespace NWNXLib {

namespace API {

CExoLinkedListTemplatedCExoKeyTable::~CExoLinkedListTemplatedCExoKeyTable()
{
    CExoLinkedListTemplatedCExoKeyTable__CExoLinkedListTemplatedCExoKeyTableDtor(this);
}

void CExoLinkedListTemplatedCExoKeyTable__CExoLinkedListTemplatedCExoKeyTableDtor(CExoLinkedListTemplatedCExoKeyTable* thisPtr)
{
    using FuncPtrType = void(__fastcall *)(CExoLinkedListTemplatedCExoKeyTable*, int, int);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CExoLinkedListTemplatedCExoKeyTable__CExoLinkedListTemplatedCExoKeyTableDtor);
    FuncPtrType func = reinterpret_cast<FuncPtrType>    (address);
    int edx = 0;
    func(thisPtr, edx, 2);
}

}

}
