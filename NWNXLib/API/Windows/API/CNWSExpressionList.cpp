#include "CNWSExpressionList.hpp"
#include "API/Functions.hpp"
#include "Platform/ASLR.hpp"

#include "CNWSExpressionNode.hpp"

namespace NWNXLib {

namespace API {

CNWSExpressionList::CNWSExpressionList()
{
    CNWSExpressionList__CNWSExpressionListCtor(this);
}

CNWSExpressionList::~CNWSExpressionList()
{
    CNWSExpressionList__CNWSExpressionListDtor(this);
}

void CNWSExpressionList::AddNode(CNWSExpressionNode* a0)
{
    return CNWSExpressionList__AddNode(this, a0);
}

void CNWSExpressionList::AddNodeToHead(CNWSExpressionNode* a0)
{
    return CNWSExpressionList__AddNodeToHead(this, a0);
}

void CNWSExpressionList::DeleteAlternate(CNWSExpressionNode* a0)
{
    return CNWSExpressionList__DeleteAlternate(this, a0);
}

void CNWSExpressionList::DeleteList()
{
    return CNWSExpressionList__DeleteList(this);
}

void CNWSExpressionList__CNWSExpressionListCtor(CNWSExpressionList* thisPtr)
{
    using FuncPtrType = void(__fastcall *)(CNWSExpressionList*, int);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CNWSExpressionList__CNWSExpressionListCtor);
    FuncPtrType func = reinterpret_cast<FuncPtrType>    (address);
    int edx = 0;
    func(thisPtr, edx);
}

void CNWSExpressionList__CNWSExpressionListDtor(CNWSExpressionList* thisPtr)
{
    using FuncPtrType = void(__fastcall *)(CNWSExpressionList*, int, int);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CNWSExpressionList__CNWSExpressionListDtor);
    FuncPtrType func = reinterpret_cast<FuncPtrType>    (address);
    int edx = 0;
    func(thisPtr, edx, 2);
}

void CNWSExpressionList__AddNode(CNWSExpressionList* thisPtr, CNWSExpressionNode* a0)
{
    using FuncPtrType = void(__fastcall *)(CNWSExpressionList*, int, CNWSExpressionNode*);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CNWSExpressionList__AddNode);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx, a0);
}

void CNWSExpressionList__AddNodeToHead(CNWSExpressionList* thisPtr, CNWSExpressionNode* a0)
{
    using FuncPtrType = void(__fastcall *)(CNWSExpressionList*, int, CNWSExpressionNode*);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CNWSExpressionList__AddNodeToHead);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx, a0);
}

void CNWSExpressionList__DeleteAlternate(CNWSExpressionList* thisPtr, CNWSExpressionNode* a0)
{
    using FuncPtrType = void(__fastcall *)(CNWSExpressionList*, int, CNWSExpressionNode*);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CNWSExpressionList__DeleteAlternate);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx, a0);
}

void CNWSExpressionList__DeleteList(CNWSExpressionList* thisPtr)
{
    using FuncPtrType = void(__fastcall *)(CNWSExpressionList*, int);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CNWSExpressionList__DeleteList);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx);
}

}

}
