#include "CCallbackImplTemplated16.hpp"
#include "API/Functions.hpp"
#include "Platform/ASLR.hpp"

namespace NWNXLib {

namespace API {

int32_t CCallbackImplTemplated16::GetCallbackSizeBytes()
{
    return CCallbackImplTemplated16__GetCallbackSizeBytes(this);
}

void CCallbackImplTemplated16::Run(void* a0, int32_t a1, uint64_t a2)
{
    return CCallbackImplTemplated16__Run(this, a0, a1, a2);
}

int32_t CCallbackImplTemplated16__GetCallbackSizeBytes(CCallbackImplTemplated16* thisPtr)
{
    using FuncPtrType = int32_t(__fastcall *)(CCallbackImplTemplated16*, int);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CCallbackImplTemplated16__GetCallbackSizeBytes);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx);
}

void CCallbackImplTemplated16__Run(CCallbackImplTemplated16* thisPtr, void* a0, int32_t a1, uint64_t a2)
{
    using FuncPtrType = void(__fastcall *)(CCallbackImplTemplated16*, int, void*, int32_t, uint64_t);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CCallbackImplTemplated16__Run);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx, a0, a1, a2);
}

}

}
