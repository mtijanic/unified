#include "CExoArrayListTemplatedCNWTileSurfaceMeshAABBNodePtr.hpp"
#include "API/Functions.hpp"
#include "Platform/ASLR.hpp"

#include "CNWTileSurfaceMeshAABBNode.hpp"

namespace NWNXLib {

namespace API {

void CExoArrayListTemplatedCNWTileSurfaceMeshAABBNodePtr::Add(CNWTileSurfaceMeshAABBNode* a0)
{
    return CExoArrayListTemplatedCNWTileSurfaceMeshAABBNodePtr__Add(this, a0);
}

void CExoArrayListTemplatedCNWTileSurfaceMeshAABBNodePtr__Add(CExoArrayListTemplatedCNWTileSurfaceMeshAABBNodePtr* thisPtr, CNWTileSurfaceMeshAABBNode* a0)
{
    using FuncPtrType = void(__fastcall *)(CExoArrayListTemplatedCNWTileSurfaceMeshAABBNodePtr*, int, CNWTileSurfaceMeshAABBNode*);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CExoArrayListTemplatedCNWTileSurfaceMeshAABBNodePtr__Add);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx, a0);
}

}

}
