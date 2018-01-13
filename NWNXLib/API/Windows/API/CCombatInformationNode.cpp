#include "CCombatInformationNode.hpp"
#include "API/Functions.hpp"
#include "Platform/ASLR.hpp"

namespace NWNXLib {

namespace API {

CCombatInformationNode::CCombatInformationNode()
{
    CCombatInformationNode__CCombatInformationNodeCtor(this);
}

int32_t CCombatInformationNode::operator!=(CCombatInformationNode& a0)
{
    return CCombatInformationNode__OperatorNotEqualTo(this, a0);
}

CCombatInformationNode& CCombatInformationNode::operator=(const CCombatInformationNode& a0)
{
    return CCombatInformationNode__OperatorAssignment(this, a0);
}

int32_t CCombatInformationNode::operator==(CCombatInformationNode& a0)
{
    return CCombatInformationNode__OperatorEqualTo(this, a0);
}

void CCombatInformationNode__CCombatInformationNodeCtor(CCombatInformationNode* thisPtr)
{
    using FuncPtrType = void(__fastcall *)(CCombatInformationNode*, int);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CCombatInformationNode__CCombatInformationNodeCtor);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    func(thisPtr, edx);
}

int32_t CCombatInformationNode__OperatorNotEqualTo(CCombatInformationNode* thisPtr, CCombatInformationNode& a0)
{
    using FuncPtrType = int32_t(__fastcall *)(CCombatInformationNode*, int, CCombatInformationNode&);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CCombatInformationNode__OperatorNotEqualTo);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx, a0);
}

CCombatInformationNode& CCombatInformationNode__OperatorAssignment(CCombatInformationNode* thisPtr, const CCombatInformationNode& a0)
{
    using FuncPtrType = CCombatInformationNode&(__fastcall *)(CCombatInformationNode*, int, const CCombatInformationNode&);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CCombatInformationNode__OperatorAssignment);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx, a0);
}

int32_t CCombatInformationNode__OperatorEqualTo(CCombatInformationNode* thisPtr, CCombatInformationNode& a0)
{
    using FuncPtrType = int32_t(__fastcall *)(CCombatInformationNode*, int, CCombatInformationNode&);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CCombatInformationNode__OperatorEqualTo);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx, a0);
}

}

}
