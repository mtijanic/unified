#include "CExoLinkedListTemplatedCNWSObjectActionNode.hpp"
#include "API/Functions.hpp"
#include "Platform/ASLR.hpp"

#include "CExoLinkedListInternal.hpp"

namespace NWNXLib {

namespace API {

CExoLinkedListTemplatedCNWSObjectActionNode::~CExoLinkedListTemplatedCNWSObjectActionNode()
{
    CExoLinkedListTemplatedCNWSObjectActionNode__CExoLinkedListTemplatedCNWSObjectActionNodeDtor(this);
}

void CExoLinkedListTemplatedCNWSObjectActionNode__CExoLinkedListTemplatedCNWSObjectActionNodeDtor(CExoLinkedListTemplatedCNWSObjectActionNode* thisPtr)
{
    using FuncPtrType = void(__fastcall *)(CExoLinkedListTemplatedCNWSObjectActionNode*, int, int);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CExoLinkedListTemplatedCNWSObjectActionNode__CExoLinkedListTemplatedCNWSObjectActionNodeDtor);
    FuncPtrType func = reinterpret_cast<FuncPtrType>    (address);
    int edx = 0;
    func(thisPtr, edx, 2);
}

}

}
