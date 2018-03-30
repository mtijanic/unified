#include "CNWTileData.hpp"
#include "API/Functions.hpp"
#include "Platform/ASLR.hpp"

#include "CExoLinkedListTemplatedCExoString.hpp"
#include "CNWTileSurfaceMesh.hpp"

namespace NWNXLib {

namespace API {

CNWTileData::CNWTileData()
{
    CNWTileData__CNWTileDataCtor(this);
}

CNWTileData::~CNWTileData()
{
    CNWTileData__CNWTileDataDtor__0(this);
}

int32_t CNWTileData::AddPropertyMethodString(uint32_t a0, CExoString a1)
{
    return CNWTileData__AddPropertyMethodString(this, a0, a1);
}

CExoString CNWTileData::GetCornerType(unsigned char a0)
{
    return CNWTileData__GetCornerType(this, a0);
}

CExoString CNWTileData::GetEdgeType(unsigned char a0)
{
    return CNWTileData__GetEdgeType(this, a0);
}

CResRef CNWTileData::GetMapIcon()
{
    return CNWTileData__GetMapIcon(this);
}

CResRef CNWTileData::GetModelResRef()
{
    return CNWTileData__GetModelResRef(this);
}

CExoLinkedListTemplatedCExoString* CNWTileData::GetPropertyMethodStringList(uint32_t a0)
{
    return CNWTileData__GetPropertyMethodStringList(this, a0);
}

void CNWTileData::SetCornerType(unsigned char a0, CExoString a1, int32_t a2)
{
    return CNWTileData__SetCornerType(this, a0, a1, a2);
}

void CNWTileData::SetEdgeType(unsigned char a0, CExoString a1)
{
    return CNWTileData__SetEdgeType(this, a0, a1);
}

void CNWTileData::SetMapIcon(CResRef a0)
{
    return CNWTileData__SetMapIcon(this, a0);
}

void CNWTileData::SetModelResRef(CResRef a0)
{
    return CNWTileData__SetModelResRef(this, a0);
}

void CNWTileData__CNWTileDataCtor(CNWTileData* thisPtr)
{
    using FuncPtrType = void(__fastcall *)(CNWTileData*, int);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CNWTileData__CNWTileDataCtor);
    FuncPtrType func = reinterpret_cast<FuncPtrType>    (address);
    int edx = 0;
    func(thisPtr, edx);
}

void CNWTileData__CNWTileDataDtor__0(CNWTileData* thisPtr)
{
    using FuncPtrType = void(__fastcall *)(CNWTileData*, int, int);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CNWTileData__CNWTileDataDtor__0);
    FuncPtrType func = reinterpret_cast<FuncPtrType>    (address);
    int edx = 0;
    func(thisPtr, edx, 2);
}

int32_t CNWTileData__AddPropertyMethodString(CNWTileData* thisPtr, uint32_t a0, CExoString a1)
{
    using FuncPtrType = int32_t(__fastcall *)(CNWTileData*, int, uint32_t, CExoString);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CNWTileData__AddPropertyMethodString);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx, a0, a1);
}

CExoString CNWTileData__GetCornerType(CNWTileData* thisPtr, unsigned char a0)
{
    using FuncPtrType = CExoString(__fastcall *)(CNWTileData*, int, unsigned char);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CNWTileData__GetCornerType);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx, a0);
}

CExoString CNWTileData__GetEdgeType(CNWTileData* thisPtr, unsigned char a0)
{
    using FuncPtrType = CExoString(__fastcall *)(CNWTileData*, int, unsigned char);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CNWTileData__GetEdgeType);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx, a0);
}

CResRef CNWTileData__GetMapIcon(CNWTileData* thisPtr)
{
    using FuncPtrType = CResRef(__fastcall *)(CNWTileData*, int);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CNWTileData__GetMapIcon);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx);
}

CResRef CNWTileData__GetModelResRef(CNWTileData* thisPtr)
{
    using FuncPtrType = CResRef(__fastcall *)(CNWTileData*, int);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CNWTileData__GetModelResRef);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx);
}

CExoLinkedListTemplatedCExoString* CNWTileData__GetPropertyMethodStringList(CNWTileData* thisPtr, uint32_t a0)
{
    using FuncPtrType = CExoLinkedListTemplatedCExoString*(__fastcall *)(CNWTileData*, int, uint32_t);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CNWTileData__GetPropertyMethodStringList);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx, a0);
}

void CNWTileData__SetCornerType(CNWTileData* thisPtr, unsigned char a0, CExoString a1, int32_t a2)
{
    using FuncPtrType = void(__fastcall *)(CNWTileData*, int, unsigned char, CExoString, int32_t);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CNWTileData__SetCornerType);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx, a0, a1, a2);
}

void CNWTileData__SetEdgeType(CNWTileData* thisPtr, unsigned char a0, CExoString a1)
{
    using FuncPtrType = void(__fastcall *)(CNWTileData*, int, unsigned char, CExoString);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CNWTileData__SetEdgeType);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx, a0, a1);
}

void CNWTileData__SetMapIcon(CNWTileData* thisPtr, CResRef a0)
{
    using FuncPtrType = void(__fastcall *)(CNWTileData*, int, CResRef);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CNWTileData__SetMapIcon);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx, a0);
}

void CNWTileData__SetModelResRef(CNWTileData* thisPtr, CResRef a0)
{
    using FuncPtrType = void(__fastcall *)(CNWTileData*, int, CResRef);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CNWTileData__SetModelResRef);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx, a0);
}

}

}
