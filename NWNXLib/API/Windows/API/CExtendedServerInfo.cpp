#include "CExtendedServerInfo.hpp"
#include "API/Functions.hpp"
#include "Platform/ASLR.hpp"

#include "CNetLayerSessionInfo.hpp"

namespace NWNXLib {

namespace API {

CExtendedServerInfo::~CExtendedServerInfo()
{
    CExtendedServerInfo__CExtendedServerInfoDtor(this);
}

CExtendedServerInfo* CExtendedServerInfo::operator=(CNetLayerSessionInfo& a0)
{
    return CExtendedServerInfo__OperatorAssignment(this, a0);
}

void CExtendedServerInfo__CExtendedServerInfoDtor(CExtendedServerInfo* thisPtr)
{
    using FuncPtrType = void(__fastcall *)(CExtendedServerInfo*, int, int);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CExtendedServerInfo__CExtendedServerInfoDtor);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    func(thisPtr, 2);
}

CExtendedServerInfo* CExtendedServerInfo__OperatorAssignment(CExtendedServerInfo* thisPtr, CNetLayerSessionInfo& a0)
{
    using FuncPtrType = CExtendedServerInfo*(__fastcall *)(CExtendedServerInfo*, int, CNetLayerSessionInfo&);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CExtendedServerInfo__OperatorAssignment);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx, a0);
}

}

}
