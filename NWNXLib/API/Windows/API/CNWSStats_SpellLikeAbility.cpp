#include "CNWSStats_SpellLikeAbility.hpp"
#include "API/Functions.hpp"
#include "Platform/ASLR.hpp"

namespace NWNXLib {

namespace API {

CNWSStats_SpellLikeAbility::CNWSStats_SpellLikeAbility()
{
    CNWSStats_SpellLikeAbility__CNWSStats_SpellLikeAbilityCtor(this);
}

void CNWSStats_SpellLikeAbility__CNWSStats_SpellLikeAbilityCtor(CNWSStats_SpellLikeAbility* thisPtr)
{
    using FuncPtrType = void(__fastcall *)(CNWSStats_SpellLikeAbility*, int);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CNWSStats_SpellLikeAbility__CNWSStats_SpellLikeAbilityCtor);
    FuncPtrType func = reinterpret_cast<FuncPtrType>    (address);
    int edx = 0;
    func(thisPtr, edx);
}

}

}
