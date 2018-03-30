#include "CResHelperTemplatedCResPWK2053.hpp"
#include "API/Functions.hpp"
#include "Platform/ASLR.hpp"

#include "CResRef.hpp"

namespace NWNXLib {

namespace API {

CResHelperTemplatedCResPWK2053::~CResHelperTemplatedCResPWK2053()
{
    CResHelperTemplatedCResPWK2053__CResHelperTemplatedCResPWK2053Dtor__0(this);
}

void CResHelperTemplatedCResPWK2053::SetResRef(const CResRef& a0, int32_t a1)
{
    return CResHelperTemplatedCResPWK2053__SetResRef(this, a0, a1);
}

void CResHelperTemplatedCResPWK2053__CResHelperTemplatedCResPWK2053Dtor__0(CResHelperTemplatedCResPWK2053* thisPtr)
{
    using FuncPtrType = void(__fastcall *)(CResHelperTemplatedCResPWK2053*, int, int);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CResHelperTemplatedCResPWK2053__CResHelperTemplatedCResPWK2053Dtor__0);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    func(thisPtr, 2);
}

void CResHelperTemplatedCResPWK2053__SetResRef(CResHelperTemplatedCResPWK2053* thisPtr, const CResRef& a0, int32_t a1)
{
    using FuncPtrType = void(__fastcall *)(CResHelperTemplatedCResPWK2053*, int, const CResRef&, int32_t);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CResHelperTemplatedCResPWK2053__SetResRef);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx, a0, a1);
}

}

}
