#include "CNWFeat.hpp"
#include "API/Functions.hpp"
#include "Platform/ASLR.hpp"

namespace NWNXLib {

namespace API {

CNWFeat::CNWFeat()
{
    CNWFeat__CNWFeatCtor(this);
}

CNWFeat::~CNWFeat()
{
    CNWFeat__CNWFeatDtor(this);
}

CExoString CNWFeat::GetDescriptionText()
{
    return CNWFeat__GetDescriptionText(this);
}

CExoString CNWFeat::GetNameText()
{
    return CNWFeat__GetNameText(this);
}

void CNWFeat__CNWFeatCtor(CNWFeat* thisPtr)
{
    using FuncPtrType = void(__fastcall *)(CNWFeat*, int);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CNWFeat__CNWFeatCtor);
    FuncPtrType func = reinterpret_cast<FuncPtrType>    (address);
    int edx = 0;
    func(thisPtr, edx);
}

void CNWFeat__CNWFeatDtor(CNWFeat* thisPtr)
{
    using FuncPtrType = void(__fastcall *)(CNWFeat*, int, int);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CNWFeat__CNWFeatDtor);
    FuncPtrType func = reinterpret_cast<FuncPtrType>    (address);
    int edx = 0;
    func(thisPtr, edx, 2);
}

CExoString CNWFeat__GetDescriptionText(CNWFeat* thisPtr)
{
    using FuncPtrType = CExoString(__fastcall *)(CNWFeat*, int);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CNWFeat__GetDescriptionText);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx);
}

CExoString CNWFeat__GetNameText(CNWFeat* thisPtr)
{
    using FuncPtrType = CExoString(__fastcall *)(CNWFeat*, int);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CNWFeat__GetNameText);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx);
}

}

}
