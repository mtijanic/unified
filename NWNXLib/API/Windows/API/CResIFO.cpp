#include "CResIFO.hpp"
#include "API/Functions.hpp"
#include "Platform/ASLR.hpp"

namespace NWNXLib {

namespace API {

CResIFO::~CResIFO()
{
    CResIFO__CResIFODtor__0(this);
}

void CResIFO__CResIFODtor__0(CResIFO* thisPtr)
{
    using FuncPtrType = void(__fastcall *)(CResIFO*, int, int);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CResIFO__CResIFODtor__0);
    FuncPtrType func = reinterpret_cast<FuncPtrType>    (address);
    int edx = 0;
    func(thisPtr, edx, 2);
}

}

}
