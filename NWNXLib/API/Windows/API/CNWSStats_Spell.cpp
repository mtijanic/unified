#include "CNWSStats_Spell.hpp"
#include "API/Functions.hpp"
#include "Platform/ASLR.hpp"

namespace NWNXLib {

namespace API {

CNWSStats_Spell::CNWSStats_Spell()
{
    CNWSStats_Spell__CNWSStats_SpellCtor(this);
}

void CNWSStats_Spell__CNWSStats_SpellCtor(CNWSStats_Spell* thisPtr)
{
    using FuncPtrType = void(__fastcall *)(CNWSStats_Spell*, int);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CNWSStats_Spell__CNWSStats_SpellCtor);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    func(thisPtr, edx);
}

}

}
