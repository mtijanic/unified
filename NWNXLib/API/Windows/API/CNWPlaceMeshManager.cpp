#include "CNWPlaceMeshManager.hpp"
#include "API/Functions.hpp"
#include "Platform/ASLR.hpp"

#include "CNWPlaceableSurfaceMesh.hpp"

namespace NWNXLib {

namespace API {

CNWPlaceMeshManager::CNWPlaceMeshManager()
{
    CNWPlaceMeshManager__CNWPlaceMeshManagerCtor(this);
}

CNWPlaceMeshManager::~CNWPlaceMeshManager()
{
    CNWPlaceMeshManager__CNWPlaceMeshManagerDtor(this);
}

void CNWPlaceMeshManager::ClearWalkMeshes()
{
    return CNWPlaceMeshManager__ClearWalkMeshes(this);
}

CNWPlaceableSurfaceMesh* CNWPlaceMeshManager::GetWalkMesh(int32_t a0)
{
    return CNWPlaceMeshManager__GetWalkMesh(this, a0);
}

void CNWPlaceMeshManager::InitializeWalkMeshes(int32_t a0)
{
    return CNWPlaceMeshManager__InitializeWalkMeshes(this, a0);
}

void CNWPlaceMeshManager__CNWPlaceMeshManagerCtor(CNWPlaceMeshManager* thisPtr)
{
    using FuncPtrType = void(__fastcall *)(CNWPlaceMeshManager*, int);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CNWPlaceMeshManager__CNWPlaceMeshManagerCtor);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    func(thisPtr, edx);
}

void CNWPlaceMeshManager__CNWPlaceMeshManagerDtor(CNWPlaceMeshManager* thisPtr)
{
    using FuncPtrType = void(__fastcall *)(CNWPlaceMeshManager*, int, int);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CNWPlaceMeshManager__CNWPlaceMeshManagerDtor);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    func(thisPtr, edx, 2);
}

void CNWPlaceMeshManager__ClearWalkMeshes(CNWPlaceMeshManager* thisPtr)
{
    using FuncPtrType = void(__fastcall *)(CNWPlaceMeshManager*, int);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CNWPlaceMeshManager__ClearWalkMeshes);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx);
}

CNWPlaceableSurfaceMesh* CNWPlaceMeshManager__GetWalkMesh(CNWPlaceMeshManager* thisPtr, int32_t a0)
{
    using FuncPtrType = CNWPlaceableSurfaceMesh*(__fastcall *)(CNWPlaceMeshManager*, int, int32_t);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CNWPlaceMeshManager__GetWalkMesh);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx, a0);
}

void CNWPlaceMeshManager__InitializeWalkMeshes(CNWPlaceMeshManager* thisPtr, int32_t a0)
{
    using FuncPtrType = void(__fastcall *)(CNWPlaceMeshManager*, int, int32_t);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CNWPlaceMeshManager__InitializeWalkMeshes);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx, a0);
}

}

}
