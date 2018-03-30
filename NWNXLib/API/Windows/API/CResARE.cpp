#include "CResARE.hpp"
#include "API/Functions.hpp"
#include "Platform/ASLR.hpp"

namespace NWNXLib {

namespace API {

CResARE::~CResARE()
{
    CResARE__CResAREDtor__0(this);
}

void CResARE__CResAREDtor__0(CResARE* thisPtr)
{
    using FuncPtrType = void(__fastcall *)(CResARE*, int, int);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CResARE__CResAREDtor__0);
    FuncPtrType func = reinterpret_cast<FuncPtrType>    (address);
    int edx = 0;
    func(thisPtr, edx, 2);
}

}

}
