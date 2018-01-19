#include "CNWRace.hpp"
#include "API/Functions.hpp"
#include "Platform/ASLR.hpp"

namespace NWNXLib {

namespace API {

CNWRace::CNWRace()
{
    CNWRace__CNWRaceCtor(this);
}

CNWRace::~CNWRace()
{
    CNWRace__CNWRaceDtor(this);
}

CExoString CNWRace::GetConverNameLowerText()
{
    return CNWRace__GetConverNameLowerText(this);
}

CExoString CNWRace::GetConverNameText()
{
    return CNWRace__GetConverNameText(this);
}

CExoString CNWRace::GetDefaultBiographyText()
{
    return CNWRace__GetDefaultBiographyText(this);
}

CExoString CNWRace::GetDescriptionText()
{
    return CNWRace__GetDescriptionText(this);
}

CExoString CNWRace::GetNamePluralText()
{
    return CNWRace__GetNamePluralText(this);
}

CExoString CNWRace::GetNameText()
{
    return CNWRace__GetNameText(this);
}

int32_t CNWRace::IsFirstLevelGrantedFeat(uint16_t a0)
{
    return CNWRace__IsFirstLevelGrantedFeat(this, a0);
}

void CNWRace::LoadFeatsTable(CExoString a0)
{
    return CNWRace__LoadFeatsTable(this, a0);
}

void CNWRace__CNWRaceCtor(CNWRace* thisPtr)
{
    using FuncPtrType = void(__fastcall *)(CNWRace*, int);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CNWRace__CNWRaceCtor);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    func(thisPtr, edx);
}

void CNWRace__CNWRaceDtor(CNWRace* thisPtr)
{
    using FuncPtrType = void(__fastcall *)(CNWRace*, int, int);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CNWRace__CNWRaceDtor);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    func(thisPtr, edx, 2);
}

CExoString CNWRace__GetConverNameLowerText(CNWRace* thisPtr)
{
    using FuncPtrType = CExoString(__fastcall *)(CNWRace*, int);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CNWRace__GetConverNameLowerText);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx);
}

CExoString CNWRace__GetConverNameText(CNWRace* thisPtr)
{
    using FuncPtrType = CExoString(__fastcall *)(CNWRace*, int);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CNWRace__GetConverNameText);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx);
}

CExoString CNWRace__GetDefaultBiographyText(CNWRace* thisPtr)
{
    using FuncPtrType = CExoString(__fastcall *)(CNWRace*, int);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CNWRace__GetDefaultBiographyText);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx);
}

CExoString CNWRace__GetDescriptionText(CNWRace* thisPtr)
{
    using FuncPtrType = CExoString(__fastcall *)(CNWRace*, int);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CNWRace__GetDescriptionText);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx);
}

CExoString CNWRace__GetNamePluralText(CNWRace* thisPtr)
{
    using FuncPtrType = CExoString(__fastcall *)(CNWRace*, int);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CNWRace__GetNamePluralText);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx);
}

CExoString CNWRace__GetNameText(CNWRace* thisPtr)
{
    using FuncPtrType = CExoString(__fastcall *)(CNWRace*, int);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CNWRace__GetNameText);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx);
}

int32_t CNWRace__IsFirstLevelGrantedFeat(CNWRace* thisPtr, uint16_t a0)
{
    using FuncPtrType = int32_t(__fastcall *)(CNWRace*, int, uint16_t);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CNWRace__IsFirstLevelGrantedFeat);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx, a0);
}

void CNWRace__LoadFeatsTable(CNWRace* thisPtr, CExoString a0)
{
    using FuncPtrType = void(__fastcall *)(CNWRace*, int, CExoString);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CNWRace__LoadFeatsTable);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx, a0);
}

}

}
