#include "CNWSRules.hpp"
#include "API/Functions.hpp"
#include "Platform/ASLR.hpp"

namespace NWNXLib {

namespace API {

CNWSRules::CNWSRules()
{
    CNWSRules__CNWSRulesCtor(this);
}

CNWSRules::~CNWSRules()
{
    CNWSRules__CNWSRulesDtor__0(this);
}

void CNWSRules__CNWSRulesCtor(CNWSRules* thisPtr)
{
    using FuncPtrType = void(__fastcall *)(CNWSRules*, int);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CNWSRules__CNWSRulesCtor);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    func(thisPtr, edx);
}

void CNWSRules__CNWSRulesDtor__0(CNWSRules* thisPtr)
{
    using FuncPtrType = void(__fastcall *)(CNWSRules*, int, int);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CNWSRules__CNWSRulesDtor__0);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    func(thisPtr, edx, 2);
}

}

}
