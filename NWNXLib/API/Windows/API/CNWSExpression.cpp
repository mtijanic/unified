#include "CNWSExpression.hpp"
#include "API/Functions.hpp"
#include "Platform/ASLR.hpp"

#include "CNWSExpressionList.hpp"
#include "CNWSExpressionNode.hpp"

namespace NWNXLib {

namespace API {

CNWSExpression::CNWSExpression()
{
    CNWSExpression__CNWSExpressionCtor(this);
}

CNWSExpression::~CNWSExpression()
{
    CNWSExpression__CNWSExpressionDtor(this);
}

void CNWSExpression::ClearAlternate(CNWSExpressionNode* a0)
{
    return CNWSExpression__ClearAlternate(this, a0);
}

void CNWSExpression::ClearGraph()
{
    return CNWSExpression__ClearGraph(this);
}

CNWSExpressionNode* CNWSExpression::NewNode(int32_t a0)
{
    return CNWSExpression__NewNode(this, a0);
}

int32_t CNWSExpression::ParseString(CExoString a0)
{
    return CNWSExpression__ParseString(this, a0);
}

int32_t CNWSExpression::TestString(const CExoString& a0, int32_t a1)
{
    return CNWSExpression__TestString(this, a0, a1);
}

void CNWSExpression__CNWSExpressionCtor(CNWSExpression* thisPtr)
{
    using FuncPtrType = void(__fastcall *)(CNWSExpression*, int);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CNWSExpression__CNWSExpressionCtor);
    FuncPtrType func = reinterpret_cast<FuncPtrType>    (address);
    int edx = 0;
    func(thisPtr, edx);
}

void CNWSExpression__CNWSExpressionDtor(CNWSExpression* thisPtr)
{
    using FuncPtrType = void(__fastcall *)(CNWSExpression*, int, int);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CNWSExpression__CNWSExpressionDtor);
    FuncPtrType func = reinterpret_cast<FuncPtrType>    (address);
    int edx = 0;
    func(thisPtr, edx, 2);
}

void CNWSExpression__ClearAlternate(CNWSExpression* thisPtr, CNWSExpressionNode* a0)
{
    using FuncPtrType = void(__fastcall *)(CNWSExpression*, int, CNWSExpressionNode*);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CNWSExpression__ClearAlternate);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx, a0);
}

void CNWSExpression__ClearGraph(CNWSExpression* thisPtr)
{
    using FuncPtrType = void(__fastcall *)(CNWSExpression*, int);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CNWSExpression__ClearGraph);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx);
}

CNWSExpressionNode* CNWSExpression__NewNode(CNWSExpression* thisPtr, int32_t a0)
{
    using FuncPtrType = CNWSExpressionNode*(__fastcall *)(CNWSExpression*, int, int32_t);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CNWSExpression__NewNode);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx, a0);
}

int32_t CNWSExpression__ParseString(CNWSExpression* thisPtr, CExoString a0)
{
    using FuncPtrType = int32_t(__fastcall *)(CNWSExpression*, int, CExoString);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CNWSExpression__ParseString);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx, a0);
}

int32_t CNWSExpression__TestString(CNWSExpression* thisPtr, const CExoString& a0, int32_t a1)
{
    using FuncPtrType = int32_t(__fastcall *)(CNWSExpression*, int, const CExoString&, int32_t);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CNWSExpression__TestString);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx, a0, a1);
}

}

}
