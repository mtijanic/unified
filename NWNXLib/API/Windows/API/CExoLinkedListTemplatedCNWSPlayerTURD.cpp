#include "CExoLinkedListTemplatedCNWSPlayerTURD.hpp"
#include "API/Functions.hpp"
#include "Platform/ASLR.hpp"

#include "CExoLinkedListInternal.hpp"

namespace NWNXLib {

namespace API {

CExoLinkedListTemplatedCNWSPlayerTURD::~CExoLinkedListTemplatedCNWSPlayerTURD()
{
    CExoLinkedListTemplatedCNWSPlayerTURD__CExoLinkedListTemplatedCNWSPlayerTURDDtor(this);
}

void CExoLinkedListTemplatedCNWSPlayerTURD__CExoLinkedListTemplatedCNWSPlayerTURDDtor(CExoLinkedListTemplatedCNWSPlayerTURD* thisPtr)
{
    using FuncPtrType = void(__fastcall *)(CExoLinkedListTemplatedCNWSPlayerTURD*, int, int);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CExoLinkedListTemplatedCNWSPlayerTURD__CExoLinkedListTemplatedCNWSPlayerTURDDtor);
    FuncPtrType func = reinterpret_cast<FuncPtrType>    (address);
    int edx = 0;
    func(thisPtr, edx, 2);
}

}

}
