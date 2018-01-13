#include "CNetLayerPlayerCDKeyInfo.hpp"
#include "API/Functions.hpp"
#include "Platform/ASLR.hpp"

namespace NWNXLib {

namespace API {

CNetLayerPlayerCDKeyInfo::~CNetLayerPlayerCDKeyInfo()
{
    CNetLayerPlayerCDKeyInfo__CNetLayerPlayerCDKeyInfoDtor(this);
}

void CNetLayerPlayerCDKeyInfo__CNetLayerPlayerCDKeyInfoDtor(CNetLayerPlayerCDKeyInfo* thisPtr)
{
    using FuncPtrType = void(__fastcall *)(CNetLayerPlayerCDKeyInfo*, int, int);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CNetLayerPlayerCDKeyInfo__CNetLayerPlayerCDKeyInfoDtor);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    func(thisPtr, edx, 2);
}

}

}
