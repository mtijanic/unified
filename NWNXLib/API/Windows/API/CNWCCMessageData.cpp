#include "CNWCCMessageData.hpp"
#include "API/Functions.hpp"
#include "Platform/ASLR.hpp"

#include "CResGFF.hpp"
#include "CResStruct.hpp"

namespace NWNXLib {

namespace API {

CNWCCMessageData::CNWCCMessageData()
{
    CNWCCMessageData__CNWCCMessageDataCtor(this);
}

CNWCCMessageData::~CNWCCMessageData()
{
    CNWCCMessageData__CNWCCMessageDataDtor(this);
}

void CNWCCMessageData::ClearData()
{
    return CNWCCMessageData__ClearData(this);
}

void CNWCCMessageData::CopyTo(CNWCCMessageData* a0)
{
    return CNWCCMessageData__CopyTo(this, a0);
}

float CNWCCMessageData::GetFloat(int32_t a0)
{
    return CNWCCMessageData__GetFloat(this, a0);
}

int32_t CNWCCMessageData::GetInteger(int32_t a0)
{
    return CNWCCMessageData__GetInteger(this, a0);
}

uint32_t CNWCCMessageData::GetObjectID(int32_t a0)
{
    return CNWCCMessageData__GetObjectID(this, a0);
}

CExoString CNWCCMessageData::GetString(int32_t a0)
{
    return CNWCCMessageData__GetString(this, a0);
}

int32_t CNWCCMessageData::LoadData(CResGFF* a0, CResStruct* a1)
{
    return CNWCCMessageData__LoadData(this, a0, a1);
}

int32_t CNWCCMessageData::SaveData(CResGFF* a0, CResStruct* a1)
{
    return CNWCCMessageData__SaveData(this, a0, a1);
}

void CNWCCMessageData::SetFloat(int32_t a0, float a1)
{
    return CNWCCMessageData__SetFloat(this, a0, a1);
}

void CNWCCMessageData::SetInteger(int32_t a0, int32_t a1)
{
    return CNWCCMessageData__SetInteger(this, a0, a1);
}

void CNWCCMessageData::SetObjectID(int32_t a0, uint32_t a1)
{
    return CNWCCMessageData__SetObjectID(this, a0, a1);
}

void CNWCCMessageData::SetString(int32_t a0, CExoString a1)
{
    return CNWCCMessageData__SetString(this, a0, a1);
}

void CNWCCMessageData__CNWCCMessageDataCtor(CNWCCMessageData* thisPtr)
{
    using FuncPtrType = void(__fastcall *)(CNWCCMessageData*, int);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CNWCCMessageData__CNWCCMessageDataCtor);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    func(thisPtr);
}

void CNWCCMessageData__CNWCCMessageDataDtor(CNWCCMessageData* thisPtr)
{
    using FuncPtrType = void(__fastcall *)(CNWCCMessageData*, int, int);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CNWCCMessageData__CNWCCMessageDataDtor);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    func(thisPtr, 2);
}

void CNWCCMessageData__ClearData(CNWCCMessageData* thisPtr)
{
    using FuncPtrType = void(__fastcall *)(CNWCCMessageData*, int);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CNWCCMessageData__ClearData);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx);
}

void CNWCCMessageData__CopyTo(CNWCCMessageData* thisPtr, CNWCCMessageData* a0)
{
    using FuncPtrType = void(__fastcall *)(CNWCCMessageData*, int, CNWCCMessageData*);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CNWCCMessageData__CopyTo);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx, a0);
}

float CNWCCMessageData__GetFloat(CNWCCMessageData* thisPtr, int32_t a0)
{
    using FuncPtrType = float(__fastcall *)(CNWCCMessageData*, int, int32_t);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CNWCCMessageData__GetFloat);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx, a0);
}

int32_t CNWCCMessageData__GetInteger(CNWCCMessageData* thisPtr, int32_t a0)
{
    using FuncPtrType = int32_t(__fastcall *)(CNWCCMessageData*, int, int32_t);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CNWCCMessageData__GetInteger);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx, a0);
}

uint32_t CNWCCMessageData__GetObjectID(CNWCCMessageData* thisPtr, int32_t a0)
{
    using FuncPtrType = uint32_t(__fastcall *)(CNWCCMessageData*, int, int32_t);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CNWCCMessageData__GetObjectID);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx, a0);
}

CExoString CNWCCMessageData__GetString(CNWCCMessageData* thisPtr, int32_t a0)
{
    using FuncPtrType = CExoString(__fastcall *)(CNWCCMessageData*, int, int32_t);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CNWCCMessageData__GetString);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx, a0);
}

int32_t CNWCCMessageData__LoadData(CNWCCMessageData* thisPtr, CResGFF* a0, CResStruct* a1)
{
    using FuncPtrType = int32_t(__fastcall *)(CNWCCMessageData*, int, CResGFF*, CResStruct*);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CNWCCMessageData__LoadData);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx, a0, a1);
}

int32_t CNWCCMessageData__SaveData(CNWCCMessageData* thisPtr, CResGFF* a0, CResStruct* a1)
{
    using FuncPtrType = int32_t(__fastcall *)(CNWCCMessageData*, int, CResGFF*, CResStruct*);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CNWCCMessageData__SaveData);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx, a0, a1);
}

void CNWCCMessageData__SetFloat(CNWCCMessageData* thisPtr, int32_t a0, float a1)
{
    using FuncPtrType = void(__fastcall *)(CNWCCMessageData*, int, int32_t, float);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CNWCCMessageData__SetFloat);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx, a0, a1);
}

void CNWCCMessageData__SetInteger(CNWCCMessageData* thisPtr, int32_t a0, int32_t a1)
{
    using FuncPtrType = void(__fastcall *)(CNWCCMessageData*, int, int32_t, int32_t);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CNWCCMessageData__SetInteger);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx, a0, a1);
}

void CNWCCMessageData__SetObjectID(CNWCCMessageData* thisPtr, int32_t a0, uint32_t a1)
{
    using FuncPtrType = void(__fastcall *)(CNWCCMessageData*, int, int32_t, uint32_t);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CNWCCMessageData__SetObjectID);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx, a0, a1);
}

void CNWCCMessageData__SetString(CNWCCMessageData* thisPtr, int32_t a0, CExoString a1)
{
    using FuncPtrType = void(__fastcall *)(CNWCCMessageData*, int, int32_t, CExoString);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CNWCCMessageData__SetString);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx, a0, a1);
}

}

}
