#include "CExoArrayListTemplatedCNWSInvitationDetails.hpp"
#include "API/Functions.hpp"
#include "Platform/ASLR.hpp"

namespace NWNXLib {

namespace API {

void CExoArrayListTemplatedCNWSInvitationDetails::Add(CNWSInvitationDetails a0)
{
    return CExoArrayListTemplatedCNWSInvitationDetails__Add(this, a0);
}

void CExoArrayListTemplatedCNWSInvitationDetails__Add(CExoArrayListTemplatedCNWSInvitationDetails* thisPtr, CNWSInvitationDetails a0)
{
    using FuncPtrType = void(__fastcall *)(CExoArrayListTemplatedCNWSInvitationDetails*, int, CNWSInvitationDetails);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CExoArrayListTemplatedCNWSInvitationDetails__Add);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx, a0);
}

}

}
