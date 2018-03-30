#include "CExoRand.hpp"
#include "API/Functions.hpp"
#include "Platform/ASLR.hpp"

#include "CExoRandInternal.hpp"

namespace NWNXLib {

namespace API {

CExoRand::CExoRand()
{
    CExoRand__CExoRandCtor(this);
}

CExoRand::~CExoRand()
{
    CExoRand__CExoRandDtor(this);
}

CExoString CExoRand::GetString(uint16_t a0)
{
    return CExoRand__GetString(this, a0);
}

uint32_t CExoRand::Rand()
{
    return CExoRand__Rand(this);
}

void CExoRand::SignalEvent()
{
    return CExoRand__SignalEvent__0(this);
}

void CExoRand::SignalEvent(uint32_t a0)
{
    return CExoRand__SignalEvent__1(this, a0);
}

void CExoRand__CExoRandCtor(CExoRand* thisPtr)
{
    using FuncPtrType = void(__fastcall *)(CExoRand*, int);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CExoRand__CExoRandCtor);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    func(thisPtr);
}

void CExoRand__CExoRandDtor(CExoRand* thisPtr)
{
    using FuncPtrType = void(__fastcall *)(CExoRand*, int, int);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CExoRand__CExoRandDtor);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    func(thisPtr, 2);
}

CExoString CExoRand__GetString(CExoRand* thisPtr, uint16_t a0)
{
    using FuncPtrType = CExoString(__fastcall *)(CExoRand*, int, uint16_t);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CExoRand__GetString);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx, a0);
}

uint32_t CExoRand__Rand(CExoRand* thisPtr)
{
    using FuncPtrType = uint32_t(__fastcall *)(CExoRand*, int);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CExoRand__Rand);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx);
}

void CExoRand__SignalEvent__0(CExoRand* thisPtr)
{
    using FuncPtrType = void(__fastcall *)(CExoRand*, int);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CExoRand__SignalEvent__0);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx);
}

void CExoRand__SignalEvent__1(CExoRand* thisPtr, uint32_t a0)
{
    using FuncPtrType = void(__fastcall *)(CExoRand*, int, uint32_t);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CExoRand__SignalEvent__1);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx, a0);
}

}

}
