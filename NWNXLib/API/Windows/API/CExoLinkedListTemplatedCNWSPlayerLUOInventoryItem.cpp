#include "CExoLinkedListTemplatedCNWSPlayerLUOInventoryItem.hpp"
#include "API/Functions.hpp"
#include "Platform/ASLR.hpp"

#include "CExoLinkedListInternal.hpp"

namespace NWNXLib {

namespace API {

CExoLinkedListTemplatedCNWSPlayerLUOInventoryItem::~CExoLinkedListTemplatedCNWSPlayerLUOInventoryItem()
{
    CExoLinkedListTemplatedCNWSPlayerLUOInventoryItem__CExoLinkedListTemplatedCNWSPlayerLUOInventoryItemDtor(this);
}

void CExoLinkedListTemplatedCNWSPlayerLUOInventoryItem__CExoLinkedListTemplatedCNWSPlayerLUOInventoryItemDtor(CExoLinkedListTemplatedCNWSPlayerLUOInventoryItem* thisPtr)
{
    using FuncPtrType = void(__fastcall *)(CExoLinkedListTemplatedCNWSPlayerLUOInventoryItem*, int, int);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CExoLinkedListTemplatedCNWSPlayerLUOInventoryItem__CExoLinkedListTemplatedCNWSPlayerLUOInventoryItemDtor);
    FuncPtrType func = reinterpret_cast<FuncPtrType>    (address);
    int edx = 0;
    func(thisPtr, edx, 2);
}

}

}
