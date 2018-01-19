#include "CExoArrayListTemplatedunsignedchar.hpp"
#include "API/Functions.hpp"
#include "Platform/ASLR.hpp"

namespace NWNXLib {

namespace API {

void CExoArrayListTemplatedunsignedchar::Add(unsigned char a0)
{
    return CExoArrayListTemplatedunsignedchar__Add(this, a0);
}

void CExoArrayListTemplatedunsignedchar__Add(CExoArrayListTemplatedunsignedchar* thisPtr, unsigned char a0)
{
    using FuncPtrType = void(__fastcall *)(CExoArrayListTemplatedunsignedchar*, int, unsigned char);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CExoArrayListTemplatedunsignedchar__Add);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx, a0);
}

}

}
