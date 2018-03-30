#include "CNWTileSurfaceMeshAABBNode.hpp"
#include "API/Functions.hpp"
#include "Platform/ASLR.hpp"

namespace NWNXLib {

namespace API {

CNWTileSurfaceMeshAABBNode::~CNWTileSurfaceMeshAABBNode()
{
    CNWTileSurfaceMeshAABBNode__CNWTileSurfaceMeshAABBNodeDtor(this);
}

void CNWTileSurfaceMeshAABBNode__CNWTileSurfaceMeshAABBNodeDtor(CNWTileSurfaceMeshAABBNode* thisPtr)
{
    using FuncPtrType = void(__fastcall *)(CNWTileSurfaceMeshAABBNode*, int, int);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CNWTileSurfaceMeshAABBNode__CNWTileSurfaceMeshAABBNodeDtor);
    FuncPtrType func = reinterpret_cast<FuncPtrType>    (address);
    int edx = 0;
    func(thisPtr, edx, 2);
}

}

}
