#include "CExoLinkedListTemplatedCERFString.hpp"
#include "API/Functions.hpp"
#include "Platform/ASLR.hpp"

#include "CExoLinkedListInternal.hpp"

namespace NWNXLib {

namespace API {

CExoLinkedListTemplatedCERFString::~CExoLinkedListTemplatedCERFString()
{
    CExoLinkedListTemplatedCERFString__CExoLinkedListTemplatedCERFStringDtor(this);
}

void CExoLinkedListTemplatedCERFString__CExoLinkedListTemplatedCERFStringDtor(CExoLinkedListTemplatedCERFString* thisPtr)
{
    using FuncPtrType = void(__fastcall *)(CExoLinkedListTemplatedCERFString*, int, int);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CExoLinkedListTemplatedCERFString__CExoLinkedListTemplatedCERFStringDtor);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    func(thisPtr, edx, 2);
}

}

}
