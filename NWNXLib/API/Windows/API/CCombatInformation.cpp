#include "CCombatInformation.hpp"
#include "API/Functions.hpp"
#include "Platform/ASLR.hpp"

#include "CResGFF.hpp"
#include "CResStruct.hpp"

namespace NWNXLib {

namespace API {

CCombatInformation::CCombatInformation()
{
    CCombatInformation__CCombatInformationCtor(this);
}

CCombatInformation::~CCombatInformation()
{
    CCombatInformation__CCombatInformationDtor(this);
}

int32_t CCombatInformation::LoadData(CResGFF* a0, CResStruct* a1)
{
    return CCombatInformation__LoadData(this, a0, a1);
}

int32_t CCombatInformation::operator!=(CCombatInformation& a0)
{
    return CCombatInformation__OperatorNotEqualTo(this, a0);
}

CCombatInformation& CCombatInformation::operator=(CCombatInformation& a0)
{
    return CCombatInformation__OperatorAssignment(this, a0);
}

int32_t CCombatInformation::operator==(CCombatInformation& a0)
{
    return CCombatInformation__OperatorEqualTo(this, a0);
}

int32_t CCombatInformation::SaveData(CResGFF* a0, CResStruct* a1)
{
    return CCombatInformation__SaveData(this, a0, a1);
}

void CCombatInformation__CCombatInformationCtor(CCombatInformation* thisPtr)
{
    using FuncPtrType = void(__fastcall *)(CCombatInformation*, int);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CCombatInformation__CCombatInformationCtor);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    func(thisPtr, edx);
}

void CCombatInformation__CCombatInformationDtor(CCombatInformation* thisPtr)
{
    using FuncPtrType = void(__fastcall *)(CCombatInformation*, int, int);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CCombatInformation__CCombatInformationDtor);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    func(thisPtr, edx, 2);
}

int32_t CCombatInformation__LoadData(CCombatInformation* thisPtr, CResGFF* a0, CResStruct* a1)
{
    using FuncPtrType = int32_t(__fastcall *)(CCombatInformation*, int, CResGFF*, CResStruct*);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CCombatInformation__LoadData);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx, a0, a1);
}

int32_t CCombatInformation__OperatorNotEqualTo(CCombatInformation* thisPtr, CCombatInformation& a0)
{
    using FuncPtrType = int32_t(__fastcall *)(CCombatInformation*, int, CCombatInformation&);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CCombatInformation__OperatorNotEqualTo);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx, a0);
}

CCombatInformation& CCombatInformation__OperatorAssignment(CCombatInformation* thisPtr, CCombatInformation& a0)
{
    using FuncPtrType = CCombatInformation&(__fastcall *)(CCombatInformation*, int, CCombatInformation&);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CCombatInformation__OperatorAssignment);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx, a0);
}

int32_t CCombatInformation__OperatorEqualTo(CCombatInformation* thisPtr, CCombatInformation& a0)
{
    using FuncPtrType = int32_t(__fastcall *)(CCombatInformation*, int, CCombatInformation&);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CCombatInformation__OperatorEqualTo);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx, a0);
}

int32_t CCombatInformation__SaveData(CCombatInformation* thisPtr, CResGFF* a0, CResStruct* a1)
{
    using FuncPtrType = int32_t(__fastcall *)(CCombatInformation*, int, CResGFF*, CResStruct*);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CCombatInformation__SaveData);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx, a0, a1);
}

}

}
