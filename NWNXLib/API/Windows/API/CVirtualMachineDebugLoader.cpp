#include "CVirtualMachineDebugLoader.hpp"
#include "API/Functions.hpp"
#include "Platform/ASLR.hpp"

#include "CExoString.hpp"

namespace NWNXLib {

namespace API {

CVirtualMachineDebugLoader::~CVirtualMachineDebugLoader()
{
    CVirtualMachineDebugLoader__CVirtualMachineDebugLoaderDtor__0(this);
}

int32_t CVirtualMachineDebugLoader::DemandDebugInfo(CExoString* a0)
{
    return CVirtualMachineDebugLoader__DemandDebugInfo(this, a0);
}

unsigned char* CVirtualMachineDebugLoader::GetDataPtr()
{
    return CVirtualMachineDebugLoader__GetDataPtr(this);
}

uint32_t CVirtualMachineDebugLoader::GetSize()
{
    return CVirtualMachineDebugLoader__GetSize(this);
}

int32_t CVirtualMachineDebugLoader::ReleaseDebugInfo()
{
    return CVirtualMachineDebugLoader__ReleaseDebugInfo(this);
}

void CVirtualMachineDebugLoader__CVirtualMachineDebugLoaderDtor__0(CVirtualMachineDebugLoader* thisPtr)
{
    using FuncPtrType = void(__fastcall *)(CVirtualMachineDebugLoader*, int, int);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CVirtualMachineDebugLoader__CVirtualMachineDebugLoaderDtor);
    FuncPtrType func = reinterpret_cast<FuncPtrType>    (address);
    int edx = 0;
    func(thisPtr, edx, 2);
}

int32_t CVirtualMachineDebugLoader__DemandDebugInfo(CVirtualMachineDebugLoader* thisPtr, CExoString* a0)
{
    using FuncPtrType = int32_t(__fastcall *)(CVirtualMachineDebugLoader*, int, CExoString*);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CVirtualMachineDebugLoader__DemandDebugInfo);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx, a0);
}

unsigned char* CVirtualMachineDebugLoader__GetDataPtr(CVirtualMachineDebugLoader* thisPtr)
{
    using FuncPtrType = unsigned char*(__fastcall *)(CVirtualMachineDebugLoader*, int);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CVirtualMachineDebugLoader__GetDataPtr);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx);
}

uint32_t CVirtualMachineDebugLoader__GetSize(CVirtualMachineDebugLoader* thisPtr)
{
    using FuncPtrType = uint32_t(__fastcall *)(CVirtualMachineDebugLoader*, int);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CVirtualMachineDebugLoader__GetSize);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx);
}

int32_t CVirtualMachineDebugLoader__ReleaseDebugInfo(CVirtualMachineDebugLoader* thisPtr)
{
    using FuncPtrType = int32_t(__fastcall *)(CVirtualMachineDebugLoader*, int);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CVirtualMachineDebugLoader__ReleaseDebugInfo);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx);
}

}

}
