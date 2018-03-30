#include "CLastUpdateObject.hpp"
#include "API/Functions.hpp"
#include "Platform/ASLR.hpp"

#include "CNWSPlayerLUOQuickbarItemButton.hpp"

namespace NWNXLib {

namespace API {

CLastUpdateObject::CLastUpdateObject()
{
    CLastUpdateObject__CLastUpdateObjectCtor(this);
}

CLastUpdateObject::~CLastUpdateObject()
{
    CLastUpdateObject__CLastUpdateObjectDtor(this);
}

void CLastUpdateObject::InitializeQuickbar()
{
    return CLastUpdateObject__InitializeQuickbar(this);
}

void CLastUpdateObject__CLastUpdateObjectCtor(CLastUpdateObject* thisPtr)
{
    using FuncPtrType = void(__fastcall *)(CLastUpdateObject*, int);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CLastUpdateObject__CLastUpdateObjectCtor);
    FuncPtrType func = reinterpret_cast<FuncPtrType>    (address);
    int edx = 0;
    func(thisPtr, edx);
}

void CLastUpdateObject__CLastUpdateObjectDtor(CLastUpdateObject* thisPtr)
{
    using FuncPtrType = void(__fastcall *)(CLastUpdateObject*, int, int);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CLastUpdateObject__CLastUpdateObjectDtor);
    FuncPtrType func = reinterpret_cast<FuncPtrType>    (address);
    int edx = 0;
    func(thisPtr, edx, 2);
}

void CLastUpdateObject__InitializeQuickbar(CLastUpdateObject* thisPtr)
{
    using FuncPtrType = void(__fastcall *)(CLastUpdateObject*, int);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CLastUpdateObject__InitializeQuickbar);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx);
}

}

}
