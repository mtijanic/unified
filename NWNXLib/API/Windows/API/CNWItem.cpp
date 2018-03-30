#include "CNWItem.hpp"
#include "API/Functions.hpp"
#include "Platform/ASLR.hpp"

namespace NWNXLib {

namespace API {

CNWItem::CNWItem()
{
    CNWItem__CNWItemCtor(this);
}

CNWItem::~CNWItem()
{
    CNWItem__CNWItemDtor__0(this);
}

unsigned char CNWItem::GetLayeredTextureColorPerPart(unsigned char a0, unsigned char a1)
{
    return CNWItem__GetLayeredTextureColorPerPart(this, a0, a1);
}

void CNWItem::SetLayeredTextureColorPerPart(unsigned char a0, unsigned char a1, unsigned char a2)
{
    return CNWItem__SetLayeredTextureColorPerPart(this, a0, a1, a2);
}

void CNWItem__CNWItemCtor(CNWItem* thisPtr)
{
    using FuncPtrType = void(__fastcall *)(CNWItem*, int);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CNWItem__CNWItemCtor);
    FuncPtrType func = reinterpret_cast<FuncPtrType>    (address);
    int edx = 0;
    func(thisPtr, edx);
}

void CNWItem__CNWItemDtor__0(CNWItem* thisPtr)
{
    using FuncPtrType = void(__fastcall *)(CNWItem*, int, int);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CNWItem__CNWItemDtor);
    FuncPtrType func = reinterpret_cast<FuncPtrType>    (address);
    int edx = 0;
    func(thisPtr, edx, 2);
}

unsigned char CNWItem__GetLayeredTextureColorPerPart(CNWItem* thisPtr, unsigned char a0, unsigned char a1)
{
    using FuncPtrType = unsigned char(__fastcall *)(CNWItem*, int, unsigned char, unsigned char);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CNWItem__GetLayeredTextureColorPerPart);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx, a0, a1);
}

void CNWItem__SetLayeredTextureColorPerPart(CNWItem* thisPtr, unsigned char a0, unsigned char a1, unsigned char a2)
{
    using FuncPtrType = void(__fastcall *)(CNWItem*, int, unsigned char, unsigned char, unsigned char);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CNWItem__SetLayeredTextureColorPerPart);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx, a0, a1, a2);
}

}

}
