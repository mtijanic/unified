#include "CNWPlaceableSurfaceMesh.hpp"
#include "API/Functions.hpp"
#include "Platform/ASLR.hpp"

namespace NWNXLib {

namespace API {

CNWPlaceableSurfaceMesh::CNWPlaceableSurfaceMesh()
{
    CNWPlaceableSurfaceMesh__CNWPlaceableSurfaceMeshCtor(this);
}

CNWPlaceableSurfaceMesh::~CNWPlaceableSurfaceMesh()
{
    CNWPlaceableSurfaceMesh__CNWPlaceableSurfaceMeshDtor__0(this);
}

int32_t CNWPlaceableSurfaceMesh::LoadWalkMesh(CResRef a0)
{
    return CNWPlaceableSurfaceMesh__LoadWalkMesh(this, a0);
}

int32_t CNWPlaceableSurfaceMesh::LoadWalkMeshString(unsigned char** a0, uint32_t* a1, unsigned char* a2, uint32_t a3)
{
    return CNWPlaceableSurfaceMesh__LoadWalkMeshString(this, a0, a1, a2, a3);
}

void CNWPlaceableSurfaceMesh__CNWPlaceableSurfaceMeshCtor(CNWPlaceableSurfaceMesh* thisPtr)
{
    using FuncPtrType = void(__fastcall *)(CNWPlaceableSurfaceMesh*, int);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CNWPlaceableSurfaceMesh__CNWPlaceableSurfaceMeshCtor);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    func(thisPtr, edx);
}

void CNWPlaceableSurfaceMesh__CNWPlaceableSurfaceMeshDtor__0(CNWPlaceableSurfaceMesh* thisPtr)
{
    using FuncPtrType = void(__fastcall *)(CNWPlaceableSurfaceMesh*, int, int);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CNWPlaceableSurfaceMesh__CNWPlaceableSurfaceMeshDtor__0);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    func(thisPtr, edx, 2);
}

int32_t CNWPlaceableSurfaceMesh__LoadWalkMesh(CNWPlaceableSurfaceMesh* thisPtr, CResRef a0)
{
    using FuncPtrType = int32_t(__fastcall *)(CNWPlaceableSurfaceMesh*, int, CResRef);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CNWPlaceableSurfaceMesh__LoadWalkMesh);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx, a0);
}

int32_t CNWPlaceableSurfaceMesh__LoadWalkMeshString(CNWPlaceableSurfaceMesh* thisPtr, unsigned char** a0, uint32_t* a1, unsigned char* a2, uint32_t a3)
{
    using FuncPtrType = int32_t(__fastcall *)(CNWPlaceableSurfaceMesh*, int, unsigned char**, uint32_t*, unsigned char*, uint32_t);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CNWPlaceableSurfaceMesh__LoadWalkMeshString);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx, a0, a1, a2, a3);
}

}

}
