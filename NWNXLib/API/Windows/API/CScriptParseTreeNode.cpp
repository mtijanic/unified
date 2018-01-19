#include "CScriptParseTreeNode.hpp"
#include "API/Functions.hpp"
#include "Platform/ASLR.hpp"

#include "CExoString.hpp"

namespace NWNXLib {

namespace API {

CScriptParseTreeNode::~CScriptParseTreeNode()
{
    CScriptParseTreeNode__CScriptParseTreeNodeDtor(this);
}

void CScriptParseTreeNode__CScriptParseTreeNodeDtor(CScriptParseTreeNode* thisPtr)
{
    using FuncPtrType = void(__fastcall *)(CScriptParseTreeNode*, int, int);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CScriptParseTreeNode__CScriptParseTreeNodeDtor);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    func(thisPtr, edx, 2);
}

}

}
