#include "CServerAIBodyBagInfo.hpp"
#include "API/Functions.hpp"
#include "Platform/ASLR.hpp"

#include "CResGFF.hpp"
#include "CResStruct.hpp"

namespace NWNXLib {

namespace API {

int32_t CServerAIBodyBagInfo::LoadBodyBag(CResGFF* a0, CResStruct* a1)
{
    return CServerAIBodyBagInfo__LoadBodyBag(this, a0, a1);
}

int32_t CServerAIBodyBagInfo::SaveBodyBag(CResGFF* a0, CResStruct* a1)
{
    return CServerAIBodyBagInfo__SaveBodyBag(this, a0, a1);
}

int32_t CServerAIBodyBagInfo__LoadBodyBag(CServerAIBodyBagInfo* thisPtr, CResGFF* a0, CResStruct* a1)
{
    using FuncPtrType = int32_t(__fastcall *)(CServerAIBodyBagInfo*, int, CResGFF*, CResStruct*);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CServerAIBodyBagInfo__LoadBodyBag);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx, a0, a1);
}

int32_t CServerAIBodyBagInfo__SaveBodyBag(CServerAIBodyBagInfo* thisPtr, CResGFF* a0, CResStruct* a1)
{
    using FuncPtrType = int32_t(__fastcall *)(CServerAIBodyBagInfo*, int, CResGFF*, CResStruct*);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CServerAIBodyBagInfo__SaveBodyBag);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx, a0, a1);
}

}

}
