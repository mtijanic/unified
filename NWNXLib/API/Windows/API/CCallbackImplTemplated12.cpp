#include "CCallbackImplTemplated12.hpp"
#include "API/Functions.hpp"
#include "Platform/ASLR.hpp"

namespace NWNXLib {

namespace API {

void CCallbackImplTemplated12::GetCallbackSizeBytes()
{
    return CCallbackImplTemplated12__GetCallbackSizeBytes(this);
}

void CCallbackImplTemplated12::Run(void* a0, int32_t a1, uint64_t a2)
{
    return CCallbackImplTemplated12__Run(this, a0, a1, a2);
}

void CCallbackImplTemplated12__GetCallbackSizeBytes(CCallbackImplTemplated12* thisPtr)
{
    using FuncPtrType = void(__fastcall *)(CCallbackImplTemplated12*, int);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CCallbackImplTemplated12__GetCallbackSizeBytes);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    func(thisPtr, edx);
}

void CCallbackImplTemplated12__Run(CCallbackImplTemplated12* thisPtr, void* a0, int32_t a1, uint64_t a2)
{
    using FuncPtrType = void(__fastcall *)(CCallbackImplTemplated12*, int, void*, int32_t, uint64_t);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CCallbackImplTemplated12__Run);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    func(thisPtr, edx, a0, a1, a2);
}

}

}
