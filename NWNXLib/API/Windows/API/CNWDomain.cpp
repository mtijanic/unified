#include "CNWDomain.hpp"
#include "API/Functions.hpp"
#include "Platform/ASLR.hpp"

namespace NWNXLib {

namespace API {

CNWDomain::CNWDomain()
{
    CNWDomain__CNWDomainCtor(this);
}

CNWDomain::~CNWDomain()
{
    CNWDomain__CNWDomainDtor(this);
}

CExoString CNWDomain::GetDescriptionText()
{
    return CNWDomain__GetDescriptionText(this);
}

CExoString CNWDomain::GetNameText()
{
    return CNWDomain__GetNameText(this);
}

void CNWDomain__CNWDomainCtor(CNWDomain* thisPtr)
{
    using FuncPtrType = void(__fastcall *)(CNWDomain*, int);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CNWDomain__CNWDomainCtor);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    func(thisPtr);
}

void CNWDomain__CNWDomainDtor(CNWDomain* thisPtr)
{
    using FuncPtrType = void(__fastcall *)(CNWDomain*, int, int);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CNWDomain__CNWDomainDtor);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    func(thisPtr, 2);
}

CExoString CNWDomain__GetDescriptionText(CNWDomain* thisPtr)
{
    using FuncPtrType = CExoString(__fastcall *)(CNWDomain*, int);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CNWDomain__GetDescriptionText);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx);
}

CExoString CNWDomain__GetNameText(CNWDomain* thisPtr)
{
    using FuncPtrType = CExoString(__fastcall *)(CNWDomain*, int);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CNWDomain__GetNameText);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx);
}

}

}
