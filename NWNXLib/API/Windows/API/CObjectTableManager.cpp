#include "CObjectTableManager.hpp"
#include "API/Functions.hpp"
#include "Platform/ASLR.hpp"

#include "CObjectLookupTable.hpp"

namespace NWNXLib {

namespace API {

CObjectTableManager::CObjectTableManager()
{
    CObjectTableManager__CObjectTableManagerCtor(this);
}

CObjectTableManager::~CObjectTableManager()
{
    CObjectTableManager__CObjectTableManagerDtor(this);
}

int32_t CObjectTableManager::AddID(uint32_t a0, uint32_t* a1, uint32_t a2)
{
    return CObjectTableManager__AddID(this, a0, a1, a2);
}

void CObjectTableManager::ClearAll()
{
    return CObjectTableManager__ClearAll(this);
}

int32_t CObjectTableManager::CreateNewPlayer(uint32_t a0)
{
    return CObjectTableManager__CreateNewPlayer(this, a0);
}

uint32_t CObjectTableManager::GetIDFromIndex(uint32_t a0, uint32_t a1)
{
    return CObjectTableManager__GetIDFromIndex(this, a0, a1);
}

uint32_t CObjectTableManager::GetIndexFromID(uint32_t a0, uint32_t a1)
{
    return CObjectTableManager__GetIndexFromID(this, a0, a1);
}

int32_t CObjectTableManager::RemovePlayer(uint32_t a0)
{
    return CObjectTableManager__RemovePlayer(this, a0);
}

int32_t CObjectTableManager::Touch(uint32_t a0, uint32_t a1)
{
    return CObjectTableManager__Touch(this, a0, a1);
}

void CObjectTableManager__CObjectTableManagerCtor(CObjectTableManager* thisPtr)
{
    using FuncPtrType = void(__fastcall *)(CObjectTableManager*, int);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CObjectTableManager__CObjectTableManagerCtor);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    func(thisPtr, edx);
}

void CObjectTableManager__CObjectTableManagerDtor(CObjectTableManager* thisPtr)
{
    using FuncPtrType = void(__fastcall *)(CObjectTableManager*, int, int);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CObjectTableManager__CObjectTableManagerDtor);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    func(thisPtr, edx, 2);
}

int32_t CObjectTableManager__AddID(CObjectTableManager* thisPtr, uint32_t a0, uint32_t* a1, uint32_t a2)
{
    using FuncPtrType = int32_t(__fastcall *)(CObjectTableManager*, int, uint32_t, uint32_t*, uint32_t);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CObjectTableManager__AddID);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx, a0, a1, a2);
}

void CObjectTableManager__ClearAll(CObjectTableManager* thisPtr)
{
    using FuncPtrType = void(__fastcall *)(CObjectTableManager*, int);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CObjectTableManager__ClearAll);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx);
}

int32_t CObjectTableManager__CreateNewPlayer(CObjectTableManager* thisPtr, uint32_t a0)
{
    using FuncPtrType = int32_t(__fastcall *)(CObjectTableManager*, int, uint32_t);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CObjectTableManager__CreateNewPlayer);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx, a0);
}

uint32_t CObjectTableManager__GetIDFromIndex(CObjectTableManager* thisPtr, uint32_t a0, uint32_t a1)
{
    using FuncPtrType = uint32_t(__fastcall *)(CObjectTableManager*, int, uint32_t, uint32_t);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CObjectTableManager__GetIDFromIndex);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx, a0, a1);
}

uint32_t CObjectTableManager__GetIndexFromID(CObjectTableManager* thisPtr, uint32_t a0, uint32_t a1)
{
    using FuncPtrType = uint32_t(__fastcall *)(CObjectTableManager*, int, uint32_t, uint32_t);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CObjectTableManager__GetIndexFromID);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx, a0, a1);
}

int32_t CObjectTableManager__RemovePlayer(CObjectTableManager* thisPtr, uint32_t a0)
{
    using FuncPtrType = int32_t(__fastcall *)(CObjectTableManager*, int, uint32_t);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CObjectTableManager__RemovePlayer);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx, a0);
}

int32_t CObjectTableManager__Touch(CObjectTableManager* thisPtr, uint32_t a0, uint32_t a1)
{
    using FuncPtrType = int32_t(__fastcall *)(CObjectTableManager*, int, uint32_t, uint32_t);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CObjectTableManager__Touch);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx, a0, a1);
}

}

}
