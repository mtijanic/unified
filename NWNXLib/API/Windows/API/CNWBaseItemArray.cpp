#include "CNWBaseItemArray.hpp"
#include "API/Functions.hpp"
#include "Platform/ASLR.hpp"

#include "CNWBaseItem.hpp"

namespace NWNXLib {

namespace API {

CNWBaseItemArray::CNWBaseItemArray()
{
    CNWBaseItemArray__CNWBaseItemArrayCtor(this);
}

CNWBaseItemArray::~CNWBaseItemArray()
{
    CNWBaseItemArray__CNWBaseItemArrayDtor(this);
}

CNWBaseItem* CNWBaseItemArray::GetBaseItem(int32_t a0)
{
    return CNWBaseItemArray__GetBaseItem(this, a0);
}

void CNWBaseItemArray::Load()
{
    return CNWBaseItemArray__Load(this);
}

void CNWBaseItemArray__CNWBaseItemArrayCtor(CNWBaseItemArray* thisPtr)
{
    using FuncPtrType = void(__fastcall *)(CNWBaseItemArray*, int);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CNWBaseItemArray__CNWBaseItemArrayCtor);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    func(thisPtr, edx);
}

void CNWBaseItemArray__CNWBaseItemArrayDtor(CNWBaseItemArray* thisPtr)
{
    using FuncPtrType = void(__fastcall *)(CNWBaseItemArray*, int, int);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CNWBaseItemArray__CNWBaseItemArrayDtor);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    func(thisPtr, edx, 2);
}

CNWBaseItem* CNWBaseItemArray__GetBaseItem(CNWBaseItemArray* thisPtr, int32_t a0)
{
    using FuncPtrType = CNWBaseItem*(__fastcall *)(CNWBaseItemArray*, int, int32_t);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CNWBaseItemArray__GetBaseItem);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx, a0);
}

void CNWBaseItemArray__Load(CNWBaseItemArray* thisPtr)
{
    using FuncPtrType = void(__fastcall *)(CNWBaseItemArray*, int);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CNWBaseItemArray__Load);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx);
}

}

}
