#include "CExoBaseInternal.hpp"
#include "API/Functions.hpp"
#include "Platform/ASLR.hpp"

#include "CExoArrayListTemplatedCExoString.hpp"
#include "CExoArrayListTemplatedCFileInfo.hpp"

namespace NWNXLib {

namespace API {

CExoBaseInternal::CExoBaseInternal()
{
    CExoBaseInternal__CExoBaseInternalCtor(this);
}

CExoBaseInternal::~CExoBaseInternal()
{
    CExoBaseInternal__CExoBaseInternalDtor(this);
}

void CExoBaseInternal::AddAlias(int32_t a0, CExoString a1, CExoString a2)
{
    return CExoBaseInternal__AddAlias(this, a0, a1, a2);
}

int32_t CExoBaseInternal::CheckForCD(uint32_t a0)
{
    return CExoBaseInternal__CheckForCD(this, a0);
}

void CExoBaseInternal::CreateResourceExtensionTable()
{
    return CExoBaseInternal__CreateResourceExtensionTable(this);
}

int32_t CExoBaseInternal::GetAugmentedDirectoryList(CExoArrayListTemplatedCFileInfo* a0, CExoString a1, uint16_t a2, int32_t a3)
{
    return CExoBaseInternal__GetAugmentedDirectoryList(this, a0, a1, a2, a3);
}

int32_t CExoBaseInternal::GetDirectoryList(CExoArrayListTemplatedCExoString* a0, CExoString a1, uint16_t a2, int32_t a3, int32_t a4)
{
    return CExoBaseInternal__GetDirectoryList(this, a0, a1, a2, a3, a4);
}

const CExoString& CExoBaseInternal::GetResourceExtension(uint16_t a0)
{
    return CExoBaseInternal__GetResourceExtension(this, a0);
}

uint16_t CExoBaseInternal::GetResTypeFromExtension(const CExoString& a0)
{
    return CExoBaseInternal__GetResTypeFromExtension(this, a0);
}

void CExoBaseInternal::LoadAliases(int32_t a0)
{
    return CExoBaseInternal__LoadAliases(this, a0);
}

void CExoBaseInternal::ShutDown()
{
    return CExoBaseInternal__ShutDown(this);
}

void CExoBaseInternal::SpawnExternalApplication(const CExoString& a0, const CExoString& a1, int32_t a2)
{
    return CExoBaseInternal__SpawnExternalApplication(this, a0, a1, a2);
}

void CExoBaseInternal__CExoBaseInternalCtor(CExoBaseInternal* thisPtr)
{
    using FuncPtrType = void(__fastcall *)(CExoBaseInternal*, int);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CExoBaseInternal__CExoBaseInternalCtor);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    func(thisPtr, edx);
}

void CExoBaseInternal__CExoBaseInternalDtor(CExoBaseInternal* thisPtr)
{
    using FuncPtrType = void(__fastcall *)(CExoBaseInternal*, int, int);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CExoBaseInternal__CExoBaseInternalDtor);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    func(thisPtr, edx, 2);
}

void CExoBaseInternal__AddAlias(CExoBaseInternal* thisPtr, int32_t a0, CExoString a1, CExoString a2)
{
    using FuncPtrType = void(__fastcall *)(CExoBaseInternal*, int, int32_t, CExoString, CExoString);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CExoBaseInternal__AddAlias);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx, a0, a1, a2);
}

int32_t CExoBaseInternal__CheckForCD(CExoBaseInternal* thisPtr, uint32_t a0)
{
    using FuncPtrType = int32_t(__fastcall *)(CExoBaseInternal*, int, uint32_t);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CExoBaseInternal__CheckForCD);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx, a0);
}

void CExoBaseInternal__CreateResourceExtensionTable(CExoBaseInternal* thisPtr)
{
    using FuncPtrType = void(__fastcall *)(CExoBaseInternal*, int);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CExoBaseInternal__CreateResourceExtensionTable);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx);
}

int32_t CExoBaseInternal__GetAugmentedDirectoryList(CExoBaseInternal* thisPtr, CExoArrayListTemplatedCFileInfo* a0, CExoString a1, uint16_t a2, int32_t a3)
{
    using FuncPtrType = int32_t(__fastcall *)(CExoBaseInternal*, int, CExoArrayListTemplatedCFileInfo*, CExoString, uint16_t, int32_t);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CExoBaseInternal__GetAugmentedDirectoryList);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx, a0, a1, a2, a3);
}

int32_t CExoBaseInternal__GetDirectoryList(CExoBaseInternal* thisPtr, CExoArrayListTemplatedCExoString* a0, CExoString a1, uint16_t a2, int32_t a3, int32_t a4)
{
    using FuncPtrType = int32_t(__fastcall *)(CExoBaseInternal*, int, CExoArrayListTemplatedCExoString*, CExoString, uint16_t, int32_t, int32_t);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CExoBaseInternal__GetDirectoryList);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx, a0, a1, a2, a3, a4);
}

const CExoString& CExoBaseInternal__GetResourceExtension(CExoBaseInternal* thisPtr, uint16_t a0)
{
    using FuncPtrType = const CExoString&(__fastcall *)(CExoBaseInternal*, int, uint16_t);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CExoBaseInternal__GetResourceExtension);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx, a0);
}

uint16_t CExoBaseInternal__GetResTypeFromExtension(CExoBaseInternal* thisPtr, const CExoString& a0)
{
    using FuncPtrType = uint16_t(__fastcall *)(CExoBaseInternal*, int, const CExoString&);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CExoBaseInternal__GetResTypeFromExtension);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx, a0);
}

void CExoBaseInternal__LoadAliases(CExoBaseInternal* thisPtr, int32_t a0)
{
    using FuncPtrType = void(__fastcall *)(CExoBaseInternal*, int, int32_t);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CExoBaseInternal__LoadAliases);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx, a0);
}

void CExoBaseInternal__ShutDown(CExoBaseInternal* thisPtr)
{
    using FuncPtrType = void(__fastcall *)(CExoBaseInternal*, int);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CExoBaseInternal__ShutDown);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx);
}

void CExoBaseInternal__SpawnExternalApplication(CExoBaseInternal* thisPtr, const CExoString& a0, const CExoString& a1, int32_t a2)
{
    using FuncPtrType = void(__fastcall *)(CExoBaseInternal*, int, const CExoString&, const CExoString&, int32_t);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CExoBaseInternal__SpawnExternalApplication);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx, a0, a1, a2);
}

}

}
