#include "CResHelperTemplatedCResNCS2010.hpp"
#include "API/Functions.hpp"
#include "Platform/ASLR.hpp"

#include "CResRef.hpp"

namespace NWNXLib {

namespace API {

CResHelperTemplatedCResNCS2010::CResHelperTemplatedCResNCS2010()
{
    CResHelperTemplatedCResNCS2010__CResHelperTemplatedCResNCS2010Ctor(this);
}

CResHelperTemplatedCResNCS2010::~CResHelperTemplatedCResNCS2010()
{
    CResHelperTemplatedCResNCS2010__CResHelperTemplatedCResNCS2010Dtor__0(this);
}

void CResHelperTemplatedCResNCS2010::SetResRef(const CResRef& a0, int32_t a1)
{
    return CResHelperTemplatedCResNCS2010__SetResRef(this, a0, a1);
}

void CResHelperTemplatedCResNCS2010__CResHelperTemplatedCResNCS2010Ctor(CResHelperTemplatedCResNCS2010* thisPtr)
{
    using FuncPtrType = void(__fastcall *)(CResHelperTemplatedCResNCS2010*, int);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CResHelperTemplatedCResNCS2010__CResHelperTemplatedCResNCS2010Ctor);
    FuncPtrType func = reinterpret_cast<FuncPtrType>    (address);
    int edx = 0;
    func(thisPtr, edx);
}

void CResHelperTemplatedCResNCS2010__CResHelperTemplatedCResNCS2010Dtor__0(CResHelperTemplatedCResNCS2010* thisPtr)
{
    using FuncPtrType = void(__fastcall *)(CResHelperTemplatedCResNCS2010*, int, int);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CResHelperTemplatedCResNCS2010__CResHelperTemplatedCResNCS2010Dtor);
    FuncPtrType func = reinterpret_cast<FuncPtrType>    (address);
    int edx = 0;
    func(thisPtr, edx, 2);
}

void CResHelperTemplatedCResNCS2010__SetResRef(CResHelperTemplatedCResNCS2010* thisPtr, const CResRef& a0, int32_t a1)
{
    using FuncPtrType = void(__fastcall *)(CResHelperTemplatedCResNCS2010*, int, const CResRef&, int32_t);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CResHelperTemplatedCResNCS2010__SetResRef);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx, a0, a1);
}

}

}
