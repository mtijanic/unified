#include "CNetLayerSessionInfo.hpp"
#include "API/Functions.hpp"
#include "Platform/ASLR.hpp"

#include "CExtendedServerInfo.hpp"

namespace NWNXLib {

namespace API {

CNetLayerSessionInfo::CNetLayerSessionInfo()
{
    CNetLayerSessionInfo__CNetLayerSessionInfoCtor(this);
}

CNetLayerSessionInfo::~CNetLayerSessionInfo()
{
    CNetLayerSessionInfo__CNetLayerSessionInfoDtor(this);
}

void CNetLayerSessionInfo::Clean()
{
    return CNetLayerSessionInfo__Clean(this);
}

void CNetLayerSessionInfo__CNetLayerSessionInfoCtor(CNetLayerSessionInfo* thisPtr)
{
    using FuncPtrType = void(__fastcall *)(CNetLayerSessionInfo*, int);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CNetLayerSessionInfo__CNetLayerSessionInfoCtor);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    func(thisPtr);
}

void CNetLayerSessionInfo__CNetLayerSessionInfoDtor(CNetLayerSessionInfo* thisPtr)
{
    using FuncPtrType = void(__fastcall *)(CNetLayerSessionInfo*, int, int);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CNetLayerSessionInfo__CNetLayerSessionInfoDtor);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    func(thisPtr, 2);
}

void CNetLayerSessionInfo__Clean(CNetLayerSessionInfo* thisPtr)
{
    using FuncPtrType = void(__fastcall *)(CNetLayerSessionInfo*, int);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CNetLayerSessionInfo__Clean);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx);
}

}

}
