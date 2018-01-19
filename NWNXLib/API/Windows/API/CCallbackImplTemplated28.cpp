#include "CCallbackImplTemplated28.hpp"
#include "API/Functions.hpp"
#include "Platform/ASLR.hpp"

namespace NWNXLib {

namespace API {

void CCallbackImplTemplated28::GetCallbackSizeBytes()
{
    return CCallbackImplTemplated28__GetCallbackSizeBytes(this);
}

void CCallbackImplTemplated28::Run(void* a0, int32_t a1, uint64_t a2)
{
    return CCallbackImplTemplated28__Run(this, a0, a1, a2);
}

void CCallbackImplTemplated28__GetCallbackSizeBytes(CCallbackImplTemplated28* thisPtr)
{
    using FuncPtrType = void(__fastcall *)(CCallbackImplTemplated28*, int);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CCallbackImplTemplated28__GetCallbackSizeBytes);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    func(thisPtr, edx);
}

void CCallbackImplTemplated28__Run(CCallbackImplTemplated28* thisPtr, void* a0, int32_t a1, uint64_t a2)
{
    using FuncPtrType = void(__fastcall *)(CCallbackImplTemplated28*, int, void*, int32_t, uint64_t);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CCallbackImplTemplated28__Run);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    func(thisPtr, edx, a0, a1, a2);
}

}

}
