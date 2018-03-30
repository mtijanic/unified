#include "CExoTimers.hpp"
#include "API/Functions.hpp"
#include "Platform/ASLR.hpp"

#include "CExoTimersInternal.hpp"

namespace NWNXLib {

namespace API {

CExoTimers::CExoTimers()
{
    CExoTimers__CExoTimersCtor(this);
}

CExoTimers::~CExoTimers()
{
    CExoTimers__CExoTimersDtor(this);
}

uint64_t CExoTimers::GetHighResolutionTimer()
{
    return CExoTimers__GetHighResolutionTimer(this);
}

uint32_t CExoTimers::GetLowResolutionTimer()
{
    return CExoTimers__GetLowResolutionTimer(this);
}

void CExoTimers__CExoTimersCtor(CExoTimers* thisPtr)
{
    using FuncPtrType = void(__fastcall *)(CExoTimers*, int);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CExoTimers__CExoTimersCtor);
    FuncPtrType func = reinterpret_cast<FuncPtrType>    (address);
    int edx = 0;
    func(thisPtr, edx);
}

void CExoTimers__CExoTimersDtor(CExoTimers* thisPtr)
{
    using FuncPtrType = void(__fastcall *)(CExoTimers*, int, int);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CExoTimers__CExoTimersDtor);
    FuncPtrType func = reinterpret_cast<FuncPtrType>    (address);
    int edx = 0;
    func(thisPtr, edx, 2);
}

uint64_t CExoTimers__GetHighResolutionTimer(CExoTimers* thisPtr)
{
    using FuncPtrType = uint64_t(__fastcall *)(CExoTimers*, int);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CExoTimers__GetHighResolutionTimer);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx);
}

uint32_t CExoTimers__GetLowResolutionTimer(CExoTimers* thisPtr)
{
    using FuncPtrType = uint32_t(__fastcall *)(CExoTimers*, int);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CExoTimers__GetLowResolutionTimer);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx);
}

}

}
