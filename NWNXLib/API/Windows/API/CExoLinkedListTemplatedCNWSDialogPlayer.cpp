#include "CExoLinkedListTemplatedCNWSDialogPlayer.hpp"
#include "API/Functions.hpp"
#include "Platform/ASLR.hpp"

#include "CExoLinkedListInternal.hpp"

namespace NWNXLib {

namespace API {

CExoLinkedListTemplatedCNWSDialogPlayer::~CExoLinkedListTemplatedCNWSDialogPlayer()
{
    CExoLinkedListTemplatedCNWSDialogPlayer__CExoLinkedListTemplatedCNWSDialogPlayerDtor(this);
}

void CExoLinkedListTemplatedCNWSDialogPlayer__CExoLinkedListTemplatedCNWSDialogPlayerDtor(CExoLinkedListTemplatedCNWSDialogPlayer* thisPtr)
{
    using FuncPtrType = void(__fastcall *)(CExoLinkedListTemplatedCNWSDialogPlayer*, int, int);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CExoLinkedListTemplatedCNWSDialogPlayer__CExoLinkedListTemplatedCNWSDialogPlayerDtor);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    func(thisPtr, edx, 2);
}

}

}
