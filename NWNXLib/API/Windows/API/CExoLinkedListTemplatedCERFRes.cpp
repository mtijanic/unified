#include "CExoLinkedListTemplatedCERFRes.hpp"
#include "API/Functions.hpp"
#include "Platform/ASLR.hpp"

#include "CExoLinkedListInternal.hpp"

namespace NWNXLib {

namespace API {

CExoLinkedListTemplatedCERFRes::~CExoLinkedListTemplatedCERFRes()
{
    CExoLinkedListTemplatedCERFRes__CExoLinkedListTemplatedCERFResDtor(this);
}

void CExoLinkedListTemplatedCERFRes__CExoLinkedListTemplatedCERFResDtor(CExoLinkedListTemplatedCERFRes* thisPtr)
{
    using FuncPtrType = void(__fastcall *)(CExoLinkedListTemplatedCERFRes*, int, int);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CExoLinkedListTemplatedCERFRes__CExoLinkedListTemplatedCERFResDtor);
    FuncPtrType func = reinterpret_cast<FuncPtrType>    (address);
    int edx = 0;
    func(thisPtr, edx, 2);
}

}

}
