#include "CRes2DA.hpp"
#include "API/Functions.hpp"
#include "Platform/ASLR.hpp"

#include "Exo2DAHeader_st.hpp"

namespace NWNXLib {

namespace API {

CRes2DA::CRes2DA()
{
    CRes2DA__CRes2DACtor(this);
}

CRes2DA::~CRes2DA()
{
    CRes2DA__CRes2DADtor__0(this);
}

unsigned char* CRes2DA::Get2DADataPtr()
{
    return CRes2DA__Get2DADataPtr(this);
}

Exo2DAHeader_st* CRes2DA::Get2DAHeaderPtr()
{
    return CRes2DA__Get2DAHeaderPtr(this);
}

uint32_t CRes2DA::Get2DASize()
{
    return CRes2DA__Get2DASize(this);
}

int32_t CRes2DA::IsLoaded()
{
    return CRes2DA__IsLoaded(this);
}

int32_t CRes2DA::OnResourceFreed()
{
    return CRes2DA__OnResourceFreed(this);
}

int32_t CRes2DA::OnResourceServiced()
{
    return CRes2DA__OnResourceServiced(this);
}

void CRes2DA__CRes2DACtor(CRes2DA* thisPtr)
{
    using FuncPtrType = void(__fastcall *)(CRes2DA*, int);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CRes2DA__CRes2DACtor);
    FuncPtrType func = reinterpret_cast<FuncPtrType>    (address);
    int edx = 0;
    func(thisPtr, edx);
}

void CRes2DA__CRes2DADtor__0(CRes2DA* thisPtr)
{
    using FuncPtrType = void(__fastcall *)(CRes2DA*, int, int);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CRes2DA__CRes2DADtor__0);
    FuncPtrType func = reinterpret_cast<FuncPtrType>    (address);
    int edx = 0;
    func(thisPtr, edx, 2);
}

unsigned char* CRes2DA__Get2DADataPtr(CRes2DA* thisPtr)
{
    using FuncPtrType = unsigned char*(__fastcall *)(CRes2DA*, int);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CRes2DA__Get2DADataPtr);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx);
}

Exo2DAHeader_st* CRes2DA__Get2DAHeaderPtr(CRes2DA* thisPtr)
{
    using FuncPtrType = Exo2DAHeader_st*(__fastcall *)(CRes2DA*, int);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CRes2DA__Get2DAHeaderPtr);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx);
}

uint32_t CRes2DA__Get2DASize(CRes2DA* thisPtr)
{
    using FuncPtrType = uint32_t(__fastcall *)(CRes2DA*, int);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CRes2DA__Get2DASize);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx);
}

int32_t CRes2DA__IsLoaded(CRes2DA* thisPtr)
{
    using FuncPtrType = int32_t(__fastcall *)(CRes2DA*, int);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CRes2DA__IsLoaded);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx);
}

int32_t CRes2DA__OnResourceFreed(CRes2DA* thisPtr)
{
    using FuncPtrType = int32_t(__fastcall *)(CRes2DA*, int);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CRes2DA__OnResourceFreed);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx);
}

int32_t CRes2DA__OnResourceServiced(CRes2DA* thisPtr)
{
    using FuncPtrType = int32_t(__fastcall *)(CRes2DA*, int);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CRes2DA__OnResourceServiced);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx);
}

}

}
