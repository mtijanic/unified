#include "CExoLinkedListTemplatedCExoString.hpp"
#include "API/Functions.hpp"
#include "Platform/ASLR.hpp"

#include "CExoLinkedListInternal.hpp"

namespace NWNXLib {

namespace API {

CExoLinkedListTemplatedCExoString::~CExoLinkedListTemplatedCExoString()
{
    CExoLinkedListTemplatedCExoString__CExoLinkedListTemplatedCExoStringDtor(this);
}

void CExoLinkedListTemplatedCExoString__CExoLinkedListTemplatedCExoStringDtor(CExoLinkedListTemplatedCExoString* thisPtr)
{
    using FuncPtrType = void(__fastcall *)(CExoLinkedListTemplatedCExoString*, int, int);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CExoLinkedListTemplatedCExoString__CExoLinkedListTemplatedCExoStringDtor);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    func(thisPtr, edx, 2);
}

}

}
