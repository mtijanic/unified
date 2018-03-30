#include "CNWSSysAdmin.hpp"
#include "API/Functions.hpp"
#include "Platform/ASLR.hpp"

namespace NWNXLib {

namespace API {

CNWSSysAdmin::CNWSSysAdmin(uint32_t a0)
{
    CNWSSysAdmin__CNWSSysAdminCtor(this, a0);
}

CNWSSysAdmin::~CNWSSysAdmin()
{
    CNWSSysAdmin__CNWSSysAdminDtor__0(this);
}

CNWSSysAdmin* CNWSSysAdmin::AsNWSSysAdmin()
{
    return CNWSSysAdmin__AsNWSSysAdmin(this);
}

void CNWSSysAdmin__CNWSSysAdminCtor(CNWSSysAdmin* thisPtr, uint32_t a0)
{
    using FuncPtrType = void(__fastcall *)(CNWSSysAdmin*, int, uint32_t);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CNWSSysAdmin__CNWSSysAdminCtor);
    FuncPtrType func = reinterpret_cast<FuncPtrType>    (address);
    int edx = 0;
    func(thisPtr, edx, a0);
}

void CNWSSysAdmin__CNWSSysAdminDtor__0(CNWSSysAdmin* thisPtr)
{
    using FuncPtrType = void(__fastcall *)(CNWSSysAdmin*, int, int);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CNWSSysAdmin__CNWSSysAdminDtor);
    FuncPtrType func = reinterpret_cast<FuncPtrType>    (address);
    int edx = 0;
    func(thisPtr, edx, 2);
}

CNWSSysAdmin* CNWSSysAdmin__AsNWSSysAdmin(CNWSSysAdmin* thisPtr)
{
    using FuncPtrType = CNWSSysAdmin*(__fastcall *)(CNWSSysAdmin*, int);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CNWSSysAdmin__AsNWSSysAdmin);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx);
}

}

}
