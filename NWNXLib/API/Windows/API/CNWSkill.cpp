#include "CNWSkill.hpp"
#include "API/Functions.hpp"
#include "Platform/ASLR.hpp"

namespace NWNXLib {

namespace API {

CNWSkill::CNWSkill()
{
    CNWSkill__CNWSkillCtor(this);
}

CNWSkill::~CNWSkill()
{
    CNWSkill__CNWSkillDtor(this);
}

CExoString CNWSkill::GetDescriptionText()
{
    return CNWSkill__GetDescriptionText(this);
}

CExoString CNWSkill::GetNameText()
{
    return CNWSkill__GetNameText(this);
}

void CNWSkill__CNWSkillCtor(CNWSkill* thisPtr)
{
    using FuncPtrType = void(__fastcall *)(CNWSkill*, int);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CNWSkill__CNWSkillCtor);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    func(thisPtr, edx);
}

void CNWSkill__CNWSkillDtor(CNWSkill* thisPtr)
{
    using FuncPtrType = void(__fastcall *)(CNWSkill*, int, int);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CNWSkill__CNWSkillDtor);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    func(thisPtr, edx, 2);
}

CExoString CNWSkill__GetDescriptionText(CNWSkill* thisPtr)
{
    using FuncPtrType = CExoString(__fastcall *)(CNWSkill*, int);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CNWSkill__GetDescriptionText);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx);
}

CExoString CNWSkill__GetNameText(CNWSkill* thisPtr)
{
    using FuncPtrType = CExoString(__fastcall *)(CNWSkill*, int);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CNWSkill__GetNameText);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx);
}

}

}
