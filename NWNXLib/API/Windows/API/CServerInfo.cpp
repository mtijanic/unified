#include "CServerInfo.hpp"
#include "API/Functions.hpp"
#include "Platform/ASLR.hpp"

namespace NWNXLib {

namespace API {

CServerInfo::CServerInfo()
{
    CServerInfo__CServerInfoCtor(this);
}

int32_t CServerInfo::FindOptionIndex(CExoString a0, CExoString a1)
{
    return CServerInfo__FindOptionIndex(this, a0, a1);
}

void CServerInfo::SetDifficultyLevel(int32_t a0, int32_t a1)
{
    return CServerInfo__SetDifficultyLevel(this, a0, a1);
}

void CServerInfo__CServerInfoCtor(CServerInfo* thisPtr)
{
    using FuncPtrType = void(__fastcall *)(CServerInfo*, int);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CServerInfo__CServerInfoCtor);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    func(thisPtr, edx);
}

int32_t CServerInfo__FindOptionIndex(CServerInfo* thisPtr, CExoString a0, CExoString a1)
{
    using FuncPtrType = int32_t(__fastcall *)(CServerInfo*, int, CExoString, CExoString);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CServerInfo__FindOptionIndex);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx, a0, a1);
}

void CServerInfo__SetDifficultyLevel(CServerInfo* thisPtr, int32_t a0, int32_t a1)
{
    using FuncPtrType = void(__fastcall *)(CServerInfo*, int, int32_t, int32_t);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CServerInfo__SetDifficultyLevel);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx, a0, a1);
}

}

}
