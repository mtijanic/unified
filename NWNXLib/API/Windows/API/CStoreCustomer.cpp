#include "CStoreCustomer.hpp"
#include "API/Functions.hpp"
#include "Platform/ASLR.hpp"

namespace NWNXLib {

namespace API {

CStoreCustomer::CStoreCustomer()
{
    CStoreCustomer__CStoreCustomerCtor(this);
}

void CStoreCustomer__CStoreCustomerCtor(CStoreCustomer* thisPtr)
{
    using FuncPtrType = void(__fastcall *)(CStoreCustomer*, int);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CStoreCustomer__CStoreCustomerCtor);
    FuncPtrType func = reinterpret_cast<FuncPtrType>    (address);
    int edx = 0;
    func(thisPtr, edx);
}

}

}
