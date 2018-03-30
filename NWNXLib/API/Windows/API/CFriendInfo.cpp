#include "CFriendInfo.hpp"
#include "API/Functions.hpp"
#include "Platform/ASLR.hpp"

namespace NWNXLib {

namespace API {

void CFriendInfo::Sanitize()
{
    return CFriendInfo__Sanitize(this);
}

void CFriendInfo__Sanitize(CFriendInfo* thisPtr)
{
    using FuncPtrType = void(__fastcall *)(CFriendInfo*, int);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CFriendInfo__Sanitize);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx);
}

}

}
