#include "CVirtualMachineCache.hpp"
#include "API/Functions.hpp"
#include "Platform/ASLR.hpp"

#include "CExoString.hpp"

namespace NWNXLib {

namespace API {

CVirtualMachineCache::~CVirtualMachineCache()
{
    CVirtualMachineCache__CVirtualMachineCacheDtor(this);
}

void CVirtualMachineCache::ClearAllFiles()
{
    return CVirtualMachineCache__ClearAllFiles(this);
}

void CVirtualMachineCache::PrecacheFile(const CExoString& a0)
{
    return CVirtualMachineCache__PrecacheFile(this, a0);
}

void CVirtualMachineCache__CVirtualMachineCacheDtor(CVirtualMachineCache* thisPtr)
{
    using FuncPtrType = void(__fastcall *)(CVirtualMachineCache*, int, int);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CVirtualMachineCache__CVirtualMachineCacheDtor);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    func(thisPtr, 2);
}

void CVirtualMachineCache__ClearAllFiles(CVirtualMachineCache* thisPtr)
{
    using FuncPtrType = void(__fastcall *)(CVirtualMachineCache*, int);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CVirtualMachineCache__ClearAllFiles);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx);
}

void CVirtualMachineCache__PrecacheFile(CVirtualMachineCache* thisPtr, const CExoString& a0)
{
    using FuncPtrType = void(__fastcall *)(CVirtualMachineCache*, int, const CExoString&);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CVirtualMachineCache__PrecacheFile);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx, a0);
}

}

}
