#include "CResHelperTemplatedCResARE2012.hpp"
#include "API/Functions.hpp"
#include "Platform/ASLR.hpp"

namespace NWNXLib {

namespace API {

CResHelperTemplatedCResARE2012::~CResHelperTemplatedCResARE2012()
{
    CResHelperTemplatedCResARE2012__CResHelperTemplatedCResARE2012Dtor__0(this);
}

void CResHelperTemplatedCResARE2012::SetResRef(const CResRef& a0, int32_t a1)
{
    return CResHelperTemplatedCResARE2012__SetResRef(this, a0, a1);
}

void CResHelperTemplatedCResARE2012__CResHelperTemplatedCResARE2012Dtor__0(CResHelperTemplatedCResARE2012* thisPtr)
{
    using FuncPtrType = void(__fastcall *)(CResHelperTemplatedCResARE2012*, int, int);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CResHelperTemplatedCResARE2012__CResHelperTemplatedCResARE2012Dtor__0);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    func(thisPtr, edx, 2);
}

void CResHelperTemplatedCResARE2012__SetResRef(CResHelperTemplatedCResARE2012* thisPtr, const CResRef& a0, int32_t a1)
{
    using FuncPtrType = void(__fastcall *)(CResHelperTemplatedCResARE2012*, int, const CResRef&, int32_t);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CResHelperTemplatedCResARE2012__SetResRef);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx, a0, a1);
}

}

}
