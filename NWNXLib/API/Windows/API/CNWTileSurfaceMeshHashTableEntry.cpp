#include "CNWTileSurfaceMeshHashTableEntry.hpp"
#include "API/Functions.hpp"
#include "Platform/ASLR.hpp"

namespace NWNXLib {

namespace API {

CNWTileSurfaceMeshHashTableEntry::CNWTileSurfaceMeshHashTableEntry()
{
    CNWTileSurfaceMeshHashTableEntry__CNWTileSurfaceMeshHashTableEntryCtor(this);
}

float CNWTileSurfaceMeshHashTableEntry::Fetch(int32_t a0)
{
    return CNWTileSurfaceMeshHashTableEntry__Fetch(this, a0);
}

void CNWTileSurfaceMeshHashTableEntry::Store(int32_t a0, float a1)
{
    return CNWTileSurfaceMeshHashTableEntry__Store(this, a0, a1);
}

void CNWTileSurfaceMeshHashTableEntry__CNWTileSurfaceMeshHashTableEntryCtor(CNWTileSurfaceMeshHashTableEntry* thisPtr)
{
    using FuncPtrType = void(__fastcall *)(CNWTileSurfaceMeshHashTableEntry*, int);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CNWTileSurfaceMeshHashTableEntry__CNWTileSurfaceMeshHashTableEntryCtor);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    func(thisPtr, edx);
}

float CNWTileSurfaceMeshHashTableEntry__Fetch(CNWTileSurfaceMeshHashTableEntry* thisPtr, int32_t a0)
{
    using FuncPtrType = float(__fastcall *)(CNWTileSurfaceMeshHashTableEntry*, int, int32_t);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CNWTileSurfaceMeshHashTableEntry__Fetch);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx, a0);
}

void CNWTileSurfaceMeshHashTableEntry__Store(CNWTileSurfaceMeshHashTableEntry* thisPtr, int32_t a0, float a1)
{
    using FuncPtrType = void(__fastcall *)(CNWTileSurfaceMeshHashTableEntry*, int, int32_t, float);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CNWTileSurfaceMeshHashTableEntry__Store);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx, a0, a1);
}

}

}
