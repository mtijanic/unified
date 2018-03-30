#include "CNetLayerPlayerInfo.hpp"
#include "API/Functions.hpp"
#include "Platform/ASLR.hpp"

namespace NWNXLib {

namespace API {

CNetLayerPlayerInfo::CNetLayerPlayerInfo()
{
    CNetLayerPlayerInfo__CNetLayerPlayerInfoCtor(this);
}

CNetLayerPlayerInfo::~CNetLayerPlayerInfo()
{
    CNetLayerPlayerInfo__CNetLayerPlayerInfoDtor(this);
}

void CNetLayerPlayerInfo::AddCDKey(const CExoString& a0, const CExoString& a1)
{
    return CNetLayerPlayerInfo__AddCDKey(this, a0, a1);
}

int32_t CNetLayerPlayerInfo::AllKeysAuthed(uint32_t& a0)
{
    return CNetLayerPlayerInfo__AllKeysAuthed(this, a0);
}

CExoString CNetLayerPlayerInfo::GetPublicCDKey(int32_t a0)
{
    return CNetLayerPlayerInfo__GetPublicCDKey(this, a0);
}

void CNetLayerPlayerInfo::Initialize()
{
    return CNetLayerPlayerInfo__Initialize(this);
}

void CNetLayerPlayerInfo::SetCDKey(int32_t a0, const CExoString& a1, const CExoString& a2)
{
    return CNetLayerPlayerInfo__SetCDKey(this, a0, a1, a2);
}

void CNetLayerPlayerInfo::StartMstTimer(uint64_t a0)
{
    return CNetLayerPlayerInfo__StartMstTimer(this, a0);
}

int32_t CNetLayerPlayerInfo::UpdateMstTimer(uint64_t a0)
{
    return CNetLayerPlayerInfo__UpdateMstTimer(this, a0);
}

void CNetLayerPlayerInfo__CNetLayerPlayerInfoCtor(CNetLayerPlayerInfo* thisPtr)
{
    using FuncPtrType = void(__fastcall *)(CNetLayerPlayerInfo*, int);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CNetLayerPlayerInfo__CNetLayerPlayerInfoCtor);
    FuncPtrType func = reinterpret_cast<FuncPtrType>    (address);
    int edx = 0;
    func(thisPtr, edx);
}

void CNetLayerPlayerInfo__CNetLayerPlayerInfoDtor(CNetLayerPlayerInfo* thisPtr)
{
    using FuncPtrType = void(__fastcall *)(CNetLayerPlayerInfo*, int, int);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CNetLayerPlayerInfo__CNetLayerPlayerInfoDtor);
    FuncPtrType func = reinterpret_cast<FuncPtrType>    (address);
    int edx = 0;
    func(thisPtr, edx, 2);
}

void CNetLayerPlayerInfo__AddCDKey(CNetLayerPlayerInfo* thisPtr, const CExoString& a0, const CExoString& a1)
{
    using FuncPtrType = void(__fastcall *)(CNetLayerPlayerInfo*, int, const CExoString&, const CExoString&);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CNetLayerPlayerInfo__AddCDKey);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx, a0, a1);
}

int32_t CNetLayerPlayerInfo__AllKeysAuthed(CNetLayerPlayerInfo* thisPtr, uint32_t& a0)
{
    using FuncPtrType = int32_t(__fastcall *)(CNetLayerPlayerInfo*, int, uint32_t&);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CNetLayerPlayerInfo__AllKeysAuthed);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx, a0);
}

CExoString CNetLayerPlayerInfo__GetPublicCDKey(CNetLayerPlayerInfo* thisPtr, int32_t a0)
{
    using FuncPtrType = CExoString(__fastcall *)(CNetLayerPlayerInfo*, int, int32_t);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CNetLayerPlayerInfo__GetPublicCDKey);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx, a0);
}

void CNetLayerPlayerInfo__Initialize(CNetLayerPlayerInfo* thisPtr)
{
    using FuncPtrType = void(__fastcall *)(CNetLayerPlayerInfo*, int);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CNetLayerPlayerInfo__Initialize);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx);
}

void CNetLayerPlayerInfo__SetCDKey(CNetLayerPlayerInfo* thisPtr, int32_t a0, const CExoString& a1, const CExoString& a2)
{
    using FuncPtrType = void(__fastcall *)(CNetLayerPlayerInfo*, int, int32_t, const CExoString&, const CExoString&);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CNetLayerPlayerInfo__SetCDKey);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx, a0, a1, a2);
}

void CNetLayerPlayerInfo__StartMstTimer(CNetLayerPlayerInfo* thisPtr, uint64_t a0)
{
    using FuncPtrType = void(__fastcall *)(CNetLayerPlayerInfo*, int, uint64_t);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CNetLayerPlayerInfo__StartMstTimer);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx, a0);
}

int32_t CNetLayerPlayerInfo__UpdateMstTimer(CNetLayerPlayerInfo* thisPtr, uint64_t a0)
{
    using FuncPtrType = int32_t(__fastcall *)(CNetLayerPlayerInfo*, int, uint64_t);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CNetLayerPlayerInfo__UpdateMstTimer);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx, a0);
}

}

}
