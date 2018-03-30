#include "CResNDB.hpp"
#include "API/Functions.hpp"
#include "Platform/ASLR.hpp"

namespace NWNXLib {

namespace API {

CResNDB::CResNDB()
{
    CResNDB__CResNDBCtor(this);
}

CResNDB::~CResNDB()
{
    CResNDB__CResNDBDtor__0(this);
}

unsigned char* CResNDB::GetNDBDataPtr()
{
    return CResNDB__GetNDBDataPtr(this);
}

uint32_t CResNDB::GetNDBSize()
{
    return CResNDB__GetNDBSize(this);
}

int32_t CResNDB::IsLoaded()
{
    return CResNDB__IsLoaded(this);
}

int32_t CResNDB::OnResourceFreed()
{
    return CResNDB__OnResourceFreed(this);
}

int32_t CResNDB::OnResourceServiced()
{
    return CResNDB__OnResourceServiced(this);
}

void CResNDB__CResNDBCtor(CResNDB* thisPtr)
{
    using FuncPtrType = void(__fastcall *)(CResNDB*, int);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CResNDB__CResNDBCtor);
    FuncPtrType func = reinterpret_cast<FuncPtrType>    (address);
    int edx = 0;
    func(thisPtr, edx);
}

void CResNDB__CResNDBDtor__0(CResNDB* thisPtr)
{
    using FuncPtrType = void(__fastcall *)(CResNDB*, int, int);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CResNDB__CResNDBDtor__0);
    FuncPtrType func = reinterpret_cast<FuncPtrType>    (address);
    int edx = 0;
    func(thisPtr, edx, 2);
}

unsigned char* CResNDB__GetNDBDataPtr(CResNDB* thisPtr)
{
    using FuncPtrType = unsigned char*(__fastcall *)(CResNDB*, int);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CResNDB__GetNDBDataPtr);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx);
}

uint32_t CResNDB__GetNDBSize(CResNDB* thisPtr)
{
    using FuncPtrType = uint32_t(__fastcall *)(CResNDB*, int);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CResNDB__GetNDBSize);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx);
}

int32_t CResNDB__IsLoaded(CResNDB* thisPtr)
{
    using FuncPtrType = int32_t(__fastcall *)(CResNDB*, int);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CResNDB__IsLoaded);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx);
}

int32_t CResNDB__OnResourceFreed(CResNDB* thisPtr)
{
    using FuncPtrType = int32_t(__fastcall *)(CResNDB*, int);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CResNDB__OnResourceFreed);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx);
}

int32_t CResNDB__OnResourceServiced(CResNDB* thisPtr)
{
    using FuncPtrType = int32_t(__fastcall *)(CResNDB*, int);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CResNDB__OnResourceServiced);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx);
}

}

}
