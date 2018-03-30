#include "CExoLinkedListTemplatedCServerAIEventNode.hpp"
#include "API/Functions.hpp"
#include "Platform/ASLR.hpp"

#include "CExoLinkedListInternal.hpp"

namespace NWNXLib {

namespace API {

CExoLinkedListTemplatedCServerAIEventNode::~CExoLinkedListTemplatedCServerAIEventNode()
{
    CExoLinkedListTemplatedCServerAIEventNode__CExoLinkedListTemplatedCServerAIEventNodeDtor(this);
}

void CExoLinkedListTemplatedCServerAIEventNode__CExoLinkedListTemplatedCServerAIEventNodeDtor(CExoLinkedListTemplatedCServerAIEventNode* thisPtr)
{
    using FuncPtrType = void(__fastcall *)(CExoLinkedListTemplatedCServerAIEventNode*, int, int);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CExoLinkedListTemplatedCServerAIEventNode__CExoLinkedListTemplatedCServerAIEventNodeDtor);
    FuncPtrType func = reinterpret_cast<FuncPtrType>    (address);
    int edx = 0;
    func(thisPtr, edx, 2);
}

}

}
