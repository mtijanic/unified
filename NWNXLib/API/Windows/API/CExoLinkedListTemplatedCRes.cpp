#include "CExoLinkedListTemplatedCRes.hpp"
#include "API/Functions.hpp"
#include "Platform/ASLR.hpp"

#include "CExoLinkedListInternal.hpp"

namespace NWNXLib {

namespace API {

CExoLinkedListTemplatedCRes::~CExoLinkedListTemplatedCRes()
{
    CExoLinkedListTemplatedCRes__CExoLinkedListTemplatedCResDtor(this);
}

void CExoLinkedListTemplatedCRes__CExoLinkedListTemplatedCResDtor(CExoLinkedListTemplatedCRes* thisPtr)
{
    using FuncPtrType = void(__fastcall *)(CExoLinkedListTemplatedCRes*, int, int);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CExoLinkedListTemplatedCRes__CExoLinkedListTemplatedCResDtor);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    func(thisPtr, edx, 2);
}

}

}
