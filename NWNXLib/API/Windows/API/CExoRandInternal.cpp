#include "CExoRandInternal.hpp"
#include "API/Functions.hpp"
#include "Platform/ASLR.hpp"

namespace NWNXLib {

namespace API {

CExoRandInternal::CExoRandInternal()
{
    CExoRandInternal__CExoRandInternalCtor(this);
}

CExoRandInternal::~CExoRandInternal()
{
    CExoRandInternal__CExoRandInternalDtor(this);
}

void CExoRandInternal::Add(unsigned char* a0, int32_t a1)
{
    return CExoRandInternal__Add(this, a0, a1);
}

void CExoRandInternal::GenSeed()
{
    return CExoRandInternal__GenSeed(this);
}

CExoString CExoRandInternal::GetString(uint16_t a0)
{
    return CExoRandInternal__GetString(this, a0);
}

uint32_t CExoRandInternal::Rand()
{
    return CExoRandInternal__Rand(this);
}

void CExoRandInternal::ReSeed(uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3)
{
    return CExoRandInternal__ReSeed(this, a0, a1, a2, a3);
}

void CExoRandInternal::SignalEvent()
{
    return CExoRandInternal__SignalEvent__0(this);
}

void CExoRandInternal::SignalEvent(uint32_t a0)
{
    return CExoRandInternal__SignalEvent__1(this, a0);
}

void CExoRandInternal__CExoRandInternalCtor(CExoRandInternal* thisPtr)
{
    using FuncPtrType = void(__fastcall *)(CExoRandInternal*, int);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CExoRandInternal__CExoRandInternalCtor);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    func(thisPtr);
}

void CExoRandInternal__CExoRandInternalDtor(CExoRandInternal* thisPtr)
{
    using FuncPtrType = void(__fastcall *)(CExoRandInternal*, int, int);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CExoRandInternal__CExoRandInternalDtor);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    func(thisPtr, 2);
}

void CExoRandInternal__Add(CExoRandInternal* thisPtr, unsigned char* a0, int32_t a1)
{
    using FuncPtrType = void(__fastcall *)(CExoRandInternal*, int, unsigned char*, int32_t);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CExoRandInternal__Add);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx, a0, a1);
}

void CExoRandInternal__GenSeed(CExoRandInternal* thisPtr)
{
    using FuncPtrType = void(__fastcall *)(CExoRandInternal*, int);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CExoRandInternal__GenSeed);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx);
}

CExoString CExoRandInternal__GetString(CExoRandInternal* thisPtr, uint16_t a0)
{
    using FuncPtrType = CExoString(__fastcall *)(CExoRandInternal*, int, uint16_t);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CExoRandInternal__GetString);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx, a0);
}

uint32_t CExoRandInternal__Rand(CExoRandInternal* thisPtr)
{
    using FuncPtrType = uint32_t(__fastcall *)(CExoRandInternal*, int);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CExoRandInternal__Rand);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx);
}

void CExoRandInternal__ReSeed(CExoRandInternal* thisPtr, uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3)
{
    using FuncPtrType = void(__fastcall *)(CExoRandInternal*, int, uint32_t, uint32_t, uint32_t, uint32_t);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CExoRandInternal__ReSeed);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx, a0, a1, a2, a3);
}

void CExoRandInternal__SignalEvent__0(CExoRandInternal* thisPtr)
{
    using FuncPtrType = void(__fastcall *)(CExoRandInternal*, int);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CExoRandInternal__SignalEvent__0);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx);
}

void CExoRandInternal__SignalEvent__1(CExoRandInternal* thisPtr, uint32_t a0)
{
    using FuncPtrType = void(__fastcall *)(CExoRandInternal*, int, uint32_t);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CExoRandInternal__SignalEvent__1);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx, a0);
}

}

}
