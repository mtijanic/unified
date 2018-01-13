#include "CExoTimersInternal.hpp"
#include "API/Functions.hpp"
#include "Platform/ASLR.hpp"

namespace NWNXLib {

namespace API {

CExoTimersInternal::CExoTimersInternal()
{
    CExoTimersInternal__CExoTimersInternalCtor(this);
}

CExoTimersInternal::~CExoTimersInternal()
{
    CExoTimersInternal__CExoTimersInternalDtor(this);
}

uint64_t CExoTimersInternal::GetHighResolutionTimer()
{
    return CExoTimersInternal__GetHighResolutionTimer(this);
}

uint32_t CExoTimersInternal::GetLowResolutionTimer()
{
    return CExoTimersInternal__GetLowResolutionTimer(this);
}

void CExoTimersInternal__CExoTimersInternalCtor(CExoTimersInternal* thisPtr)
{
    using FuncPtrType = void(__fastcall *)(CExoTimersInternal*, int);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CExoTimersInternal__CExoTimersInternalCtor);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    func(thisPtr, edx);
}

void CExoTimersInternal__CExoTimersInternalDtor(CExoTimersInternal* thisPtr)
{
    using FuncPtrType = void(__fastcall *)(CExoTimersInternal*, int, int);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CExoTimersInternal__CExoTimersInternalDtor);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    func(thisPtr, edx, 2);
}

uint64_t CExoTimersInternal__GetHighResolutionTimer(CExoTimersInternal* thisPtr)
{
    using FuncPtrType = uint64_t(__fastcall *)(CExoTimersInternal*, int);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CExoTimersInternal__GetHighResolutionTimer);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx);
}

uint32_t CExoTimersInternal__GetLowResolutionTimer(CExoTimersInternal* thisPtr)
{
    using FuncPtrType = uint32_t(__fastcall *)(CExoTimersInternal*, int);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CExoTimersInternal__GetLowResolutionTimer);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx);
}

}

}
