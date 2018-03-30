#include "CNWSClient.hpp"
#include "API/Functions.hpp"
#include "Platform/ASLR.hpp"

#include "CNWSDungeonMaster.hpp"
#include "CNWSPlayer.hpp"

namespace NWNXLib {

namespace API {

CNWSClient::CNWSClient(uint32_t a0)
{
    CNWSClient__CNWSClientCtor(this, a0);
}

CNWSClient::~CNWSClient()
{
    CNWSClient__CNWSClientDtor__0(this);
}

CNWSDungeonMaster* CNWSClient::AsNWSDungeonMaster()
{
    return CNWSClient__AsNWSDungeonMaster(this);
}

CNWSPlayer* CNWSClient::AsNWSPlayer()
{
    return CNWSClient__AsNWSPlayer(this);
}

void CNWSClient__CNWSClientCtor(CNWSClient* thisPtr, uint32_t a0)
{
    using FuncPtrType = void(__fastcall *)(CNWSClient*, int, uint32_t);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CNWSClient__CNWSClientCtor);
    FuncPtrType func = reinterpret_cast<FuncPtrType>    (address);
    int edx = 0;
    func(thisPtr, edx, a0);
}

void CNWSClient__CNWSClientDtor__0(CNWSClient* thisPtr)
{
    using FuncPtrType = void(__fastcall *)(CNWSClient*, int, int);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CNWSClient__CNWSClientDtor__0);
    FuncPtrType func = reinterpret_cast<FuncPtrType>    (address);
    int edx = 0;
    func(thisPtr, edx, 2);
}

CNWSDungeonMaster* CNWSClient__AsNWSDungeonMaster(CNWSClient* thisPtr)
{
    using FuncPtrType = CNWSDungeonMaster*(__fastcall *)(CNWSClient*, int);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CNWSClient__AsNWSDungeonMaster);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx);
}

CNWSPlayer* CNWSClient__AsNWSPlayer(CNWSClient* thisPtr)
{
    using FuncPtrType = CNWSPlayer*(__fastcall *)(CNWSClient*, int);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CNWSClient__AsNWSPlayer);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx);
}

}

}
