#include "CExoCriticalSectionInternal.hpp"
#include "API/Functions.hpp"
#include "Platform/ASLR.hpp"

namespace NWNXLib {

namespace API {

CExoCriticalSectionInternal::CExoCriticalSectionInternal()
{
    CExoCriticalSectionInternal__CExoCriticalSectionInternalCtor(this);
}

CExoCriticalSectionInternal::~CExoCriticalSectionInternal()
{
    CExoCriticalSectionInternal__CExoCriticalSectionInternalDtor(this);
}

void CExoCriticalSectionInternal::EnterCriticalSection()
{
    return CExoCriticalSectionInternal__EnterCriticalSection(this);
}

void CExoCriticalSectionInternal::LeaveCriticalSection()
{
    return CExoCriticalSectionInternal__LeaveCriticalSection(this);
}

void CExoCriticalSectionInternal__CExoCriticalSectionInternalCtor(CExoCriticalSectionInternal* thisPtr)
{
    using FuncPtrType = void(__fastcall *)(CExoCriticalSectionInternal*, int);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CExoCriticalSectionInternal__CExoCriticalSectionInternalCtor);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    func(thisPtr);
}

void CExoCriticalSectionInternal__CExoCriticalSectionInternalDtor(CExoCriticalSectionInternal* thisPtr)
{
    using FuncPtrType = void(__fastcall *)(CExoCriticalSectionInternal*, int, int);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CExoCriticalSectionInternal__CExoCriticalSectionInternalDtor);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    func(thisPtr, 2);
}

void CExoCriticalSectionInternal__EnterCriticalSection(CExoCriticalSectionInternal* thisPtr)
{
    using FuncPtrType = void(__fastcall *)(CExoCriticalSectionInternal*, int);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CExoCriticalSectionInternal__EnterCriticalSection);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx);
}

void CExoCriticalSectionInternal__LeaveCriticalSection(CExoCriticalSectionInternal* thisPtr)
{
    using FuncPtrType = void(__fastcall *)(CExoCriticalSectionInternal*, int);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CExoCriticalSectionInternal__LeaveCriticalSection);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx);
}

}

}
