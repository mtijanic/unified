#include "CTwoDimArrays.hpp"
#include "API/Functions.hpp"
#include "Platform/ASLR.hpp"

#include "C2DA.hpp"
#include "CExoLinkedListTemplatedC2DA.hpp"

namespace NWNXLib {

namespace API {

CTwoDimArrays::CTwoDimArrays()
{
    CTwoDimArrays__CTwoDimArraysCtor(this);
}

CTwoDimArrays::~CTwoDimArrays()
{
    CTwoDimArrays__CTwoDimArraysDtor(this);
}

void CTwoDimArrays::ClearCached2DAs()
{
    return CTwoDimArrays__ClearCached2DAs(this);
}

C2DA* CTwoDimArrays::GetCached2DA(CExoString a0, int32_t a1)
{
    return CTwoDimArrays__GetCached2DA(this, a0, a1);
}

unsigned char CTwoDimArrays::GetEpicAttackBonus(unsigned char a0)
{
    return CTwoDimArrays__GetEpicAttackBonus(this, a0);
}

unsigned char CTwoDimArrays::GetEpicFortSaveBonus(unsigned char a0)
{
    return CTwoDimArrays__GetEpicFortSaveBonus(this, a0);
}

unsigned char CTwoDimArrays::GetEpicRefSaveBonus(unsigned char a0)
{
    return CTwoDimArrays__GetEpicRefSaveBonus(this, a0);
}

unsigned char CTwoDimArrays::GetEpicWillSaveBonus(unsigned char a0)
{
    return CTwoDimArrays__GetEpicWillSaveBonus(this, a0);
}

C2DA* CTwoDimArrays::GetIPRPCostTable(unsigned char a0)
{
    return CTwoDimArrays__GetIPRPCostTable(this, a0);
}

int32_t CTwoDimArrays::Load2DArrays()
{
    return CTwoDimArrays__Load2DArrays(this);
}

int32_t CTwoDimArrays::LoadEpicAttacks()
{
    return CTwoDimArrays__LoadEpicAttacks(this);
}

int32_t CTwoDimArrays::LoadEpicSaves()
{
    return CTwoDimArrays__LoadEpicSaves(this);
}

int32_t CTwoDimArrays::LoadIPRPCostTables()
{
    return CTwoDimArrays__LoadIPRPCostTables(this);
}

int32_t CTwoDimArrays::UnLoad2DArrays()
{
    return CTwoDimArrays__UnLoad2DArrays(this);
}

int32_t CTwoDimArrays::UnLoadIPRPCostTables()
{
    return CTwoDimArrays__UnLoadIPRPCostTables(this);
}

void CTwoDimArrays::Update2DACache(CExoLinkedListTemplatedC2DA* a0, int32_t a1, C2DA* a2)
{
    return CTwoDimArrays__Update2DACache(this, a0, a1, a2);
}

void CTwoDimArrays__CTwoDimArraysCtor(CTwoDimArrays* thisPtr)
{
    using FuncPtrType = void(__fastcall *)(CTwoDimArrays*, int);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CTwoDimArrays__CTwoDimArraysCtor);
    FuncPtrType func = reinterpret_cast<FuncPtrType>    (address);
    int edx = 0;
    func(thisPtr, edx);
}

void CTwoDimArrays__CTwoDimArraysDtor(CTwoDimArrays* thisPtr)
{
    using FuncPtrType = void(__fastcall *)(CTwoDimArrays*, int, int);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CTwoDimArrays__CTwoDimArraysDtor);
    FuncPtrType func = reinterpret_cast<FuncPtrType>    (address);
    int edx = 0;
    func(thisPtr, edx, 2);
}

void CTwoDimArrays__ClearCached2DAs(CTwoDimArrays* thisPtr)
{
    using FuncPtrType = void(__fastcall *)(CTwoDimArrays*, int);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CTwoDimArrays__ClearCached2DAs);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx);
}

C2DA* CTwoDimArrays__GetCached2DA(CTwoDimArrays* thisPtr, CExoString a0, int32_t a1)
{
    using FuncPtrType = C2DA*(__fastcall *)(CTwoDimArrays*, int, CExoString, int32_t);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CTwoDimArrays__GetCached2DA);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx, a0, a1);
}

unsigned char CTwoDimArrays__GetEpicAttackBonus(CTwoDimArrays* thisPtr, unsigned char a0)
{
    using FuncPtrType = unsigned char(__fastcall *)(CTwoDimArrays*, int, unsigned char);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CTwoDimArrays__GetEpicAttackBonus);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx, a0);
}

unsigned char CTwoDimArrays__GetEpicFortSaveBonus(CTwoDimArrays* thisPtr, unsigned char a0)
{
    using FuncPtrType = unsigned char(__fastcall *)(CTwoDimArrays*, int, unsigned char);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CTwoDimArrays__GetEpicFortSaveBonus);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx, a0);
}

unsigned char CTwoDimArrays__GetEpicRefSaveBonus(CTwoDimArrays* thisPtr, unsigned char a0)
{
    using FuncPtrType = unsigned char(__fastcall *)(CTwoDimArrays*, int, unsigned char);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CTwoDimArrays__GetEpicRefSaveBonus);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx, a0);
}

unsigned char CTwoDimArrays__GetEpicWillSaveBonus(CTwoDimArrays* thisPtr, unsigned char a0)
{
    using FuncPtrType = unsigned char(__fastcall *)(CTwoDimArrays*, int, unsigned char);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CTwoDimArrays__GetEpicWillSaveBonus);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx, a0);
}

C2DA* CTwoDimArrays__GetIPRPCostTable(CTwoDimArrays* thisPtr, unsigned char a0)
{
    using FuncPtrType = C2DA*(__fastcall *)(CTwoDimArrays*, int, unsigned char);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CTwoDimArrays__GetIPRPCostTable);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx, a0);
}

int32_t CTwoDimArrays__Load2DArrays(CTwoDimArrays* thisPtr)
{
    using FuncPtrType = int32_t(__fastcall *)(CTwoDimArrays*, int);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CTwoDimArrays__Load2DArrays);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx);
}

int32_t CTwoDimArrays__LoadEpicAttacks(CTwoDimArrays* thisPtr)
{
    using FuncPtrType = int32_t(__fastcall *)(CTwoDimArrays*, int);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CTwoDimArrays__LoadEpicAttacks);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx);
}

int32_t CTwoDimArrays__LoadEpicSaves(CTwoDimArrays* thisPtr)
{
    using FuncPtrType = int32_t(__fastcall *)(CTwoDimArrays*, int);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CTwoDimArrays__LoadEpicSaves);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx);
}

int32_t CTwoDimArrays__LoadIPRPCostTables(CTwoDimArrays* thisPtr)
{
    using FuncPtrType = int32_t(__fastcall *)(CTwoDimArrays*, int);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CTwoDimArrays__LoadIPRPCostTables);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx);
}

int32_t CTwoDimArrays__UnLoad2DArrays(CTwoDimArrays* thisPtr)
{
    using FuncPtrType = int32_t(__fastcall *)(CTwoDimArrays*, int);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CTwoDimArrays__UnLoad2DArrays);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx);
}

int32_t CTwoDimArrays__UnLoadIPRPCostTables(CTwoDimArrays* thisPtr)
{
    using FuncPtrType = int32_t(__fastcall *)(CTwoDimArrays*, int);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CTwoDimArrays__UnLoadIPRPCostTables);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx);
}

void CTwoDimArrays__Update2DACache(CTwoDimArrays* thisPtr, CExoLinkedListTemplatedC2DA* a0, int32_t a1, C2DA* a2)
{
    using FuncPtrType = void(__fastcall *)(CTwoDimArrays*, int, CExoLinkedListTemplatedC2DA*, int32_t, C2DA*);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CTwoDimArrays__Update2DACache);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx, a0, a1, a2);
}

}

}
