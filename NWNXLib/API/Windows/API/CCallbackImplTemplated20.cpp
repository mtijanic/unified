#include "CCallbackImplTemplated20.hpp"
#include "API/Functions.hpp"
#include "Platform/ASLR.hpp"

namespace NWNXLib {

namespace API {

void CCallbackImplTemplated20::GetCallbackSizeBytes()
{
    return CCallbackImplTemplated20__GetCallbackSizeBytes(this);
}

void CCallbackImplTemplated20::Run(void* a0, int32_t a1, uint64_t a2)
{
    return CCallbackImplTemplated20__Run(this, a0, a1, a2);
}

void CCallbackImplTemplated20__GetCallbackSizeBytes(CCallbackImplTemplated20* thisPtr)
{
    using FuncPtrType = void(__fastcall *)(CCallbackImplTemplated20*, int);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CCallbackImplTemplated20__GetCallbackSizeBytes);
    FuncPtrType func = reinterpret_cast<FuncPtrType>    (address);
    int edx = 0;
    func(thisPtr, edx);
}

void CCallbackImplTemplated20__Run(CCallbackImplTemplated20* thisPtr, void* a0, int32_t a1, uint64_t a2)
{
    using FuncPtrType = void(__fastcall *)(CCallbackImplTemplated20*, int, void*, int32_t, uint64_t);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CCallbackImplTemplated20__Run);
    FuncPtrType func = reinterpret_cast<FuncPtrType>    (address);
    int edx = 0;
    func(thisPtr, edx, a0, a1, a2);
}

}

}
