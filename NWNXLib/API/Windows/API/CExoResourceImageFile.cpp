#include "CExoResourceImageFile.hpp"
#include "API/Functions.hpp"
#include "Platform/ASLR.hpp"

#include "EncapsulatedHeader_st.hpp"
#include "EncapsulatedResListEntry_st.hpp"

namespace NWNXLib {

namespace API {

CExoResourceImageFile::CExoResourceImageFile()
{
    CExoResourceImageFile__CExoResourceImageFileCtor(this);
}

CExoResourceImageFile::~CExoResourceImageFile()
{
    CExoResourceImageFile__CExoResourceImageFileDtor__0(this);
}

void CExoResourceImageFile::AddRefCount()
{
    return CExoResourceImageFile__AddRefCount(this);
}

int32_t CExoResourceImageFile::CloseAsyncFile()
{
    return CExoResourceImageFile__CloseAsyncFile(this);
}

int32_t CExoResourceImageFile::CloseFile()
{
    return CExoResourceImageFile__CloseFile(this);
}

void CExoResourceImageFile::DeleteAsyncRefCount()
{
    return CExoResourceImageFile__DeleteAsyncRefCount(this);
}

void CExoResourceImageFile::DeleteRefCount()
{
    return CExoResourceImageFile__DeleteRefCount(this);
}

EncapsulatedHeader_st* CExoResourceImageFile::GetHeader()
{
    return CExoResourceImageFile__GetHeader(this);
}

EncapsulatedKeyListEntry_st** CExoResourceImageFile::GetKeyList()
{
    return CExoResourceImageFile__GetKeyList(this);
}

EncapsulatedKeyListEntry_st CExoResourceImageFile::GetKeyListEntry(uint32_t a0)
{
    return CExoResourceImageFile__GetKeyListEntry(this, a0);
}

void* CExoResourceImageFile::GetResource(uint32_t a0)
{
    return CExoResourceImageFile__GetResource(this, a0);
}

EncapsulatedResListEntry_st* CExoResourceImageFile::GetResourceListEntry(uint32_t a0)
{
    return CExoResourceImageFile__GetResourceListEntry(this, a0);
}

uint32_t CExoResourceImageFile::GetResourceSize(uint32_t a0)
{
    return CExoResourceImageFile__GetResourceSize(this, a0);
}

int32_t CExoResourceImageFile::Initialize()
{
    return CExoResourceImageFile__Initialize(this);
}

int32_t CExoResourceImageFile::LoadHeader(unsigned char a0)
{
    return CExoResourceImageFile__LoadHeader(this, a0);
}

int32_t CExoResourceImageFile::OpenFile()
{
    return CExoResourceImageFile__OpenFile__0(this);
}

int32_t CExoResourceImageFile::OpenFile(unsigned char* a0)
{
    return CExoResourceImageFile__OpenFile__1(this, a0);
}

uint32_t CExoResourceImageFile::ReadResource(uint32_t a0, void* a1, uint32_t a2, uint32_t a3)
{
    return CExoResourceImageFile__ReadResource(this, a0, a1, a2, a3);
}

void CExoResourceImageFile::ReadResourceAsync(uint32_t a0, void* a1, uint32_t a2, uint32_t a3)
{
    return CExoResourceImageFile__ReadResourceAsync(this, a0, a1, a2, a3);
}

void CExoResourceImageFile__CExoResourceImageFileCtor(CExoResourceImageFile* thisPtr)
{
    using FuncPtrType = void(__fastcall *)(CExoResourceImageFile*, int);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CExoResourceImageFile__CExoResourceImageFileCtor);
    FuncPtrType func = reinterpret_cast<FuncPtrType>    (address);
    int edx = 0;
    func(thisPtr, edx);
}

void CExoResourceImageFile__CExoResourceImageFileDtor__0(CExoResourceImageFile* thisPtr)
{
    using FuncPtrType = void(__fastcall *)(CExoResourceImageFile*, int, int);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CExoResourceImageFile__CExoResourceImageFileDtor);
    FuncPtrType func = reinterpret_cast<FuncPtrType>    (address);
    int edx = 0;
    func(thisPtr, edx, 2);
}

void CExoResourceImageFile__AddRefCount(CExoResourceImageFile* thisPtr)
{
    using FuncPtrType = void(__fastcall *)(CExoResourceImageFile*, int);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CExoResourceImageFile__AddRefCount);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx);
}

int32_t CExoResourceImageFile__CloseAsyncFile(CExoResourceImageFile* thisPtr)
{
    using FuncPtrType = int32_t(__fastcall *)(CExoResourceImageFile*, int);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CExoResourceImageFile__CloseAsyncFile);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx);
}

int32_t CExoResourceImageFile__CloseFile(CExoResourceImageFile* thisPtr)
{
    using FuncPtrType = int32_t(__fastcall *)(CExoResourceImageFile*, int);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CExoResourceImageFile__CloseFile);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx);
}

void CExoResourceImageFile__DeleteAsyncRefCount(CExoResourceImageFile* thisPtr)
{
    using FuncPtrType = void(__fastcall *)(CExoResourceImageFile*, int);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CExoResourceImageFile__DeleteAsyncRefCount);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx);
}

void CExoResourceImageFile__DeleteRefCount(CExoResourceImageFile* thisPtr)
{
    using FuncPtrType = void(__fastcall *)(CExoResourceImageFile*, int);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CExoResourceImageFile__DeleteRefCount);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx);
}

EncapsulatedHeader_st* CExoResourceImageFile__GetHeader(CExoResourceImageFile* thisPtr)
{
    using FuncPtrType = EncapsulatedHeader_st*(__fastcall *)(CExoResourceImageFile*, int);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CExoResourceImageFile__GetHeader);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx);
}

EncapsulatedKeyListEntry_st** CExoResourceImageFile__GetKeyList(CExoResourceImageFile* thisPtr)
{
    using FuncPtrType = EncapsulatedKeyListEntry_st**(__fastcall *)(CExoResourceImageFile*, int);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CExoResourceImageFile__GetKeyList);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx);
}

EncapsulatedKeyListEntry_st CExoResourceImageFile__GetKeyListEntry(CExoResourceImageFile* thisPtr, uint32_t a0)
{
    using FuncPtrType = EncapsulatedKeyListEntry_st(__fastcall *)(CExoResourceImageFile*, int, uint32_t);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CExoResourceImageFile__GetKeyListEntry);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx, a0);
}

void* CExoResourceImageFile__GetResource(CExoResourceImageFile* thisPtr, uint32_t a0)
{
    using FuncPtrType = void*(__fastcall *)(CExoResourceImageFile*, int, uint32_t);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CExoResourceImageFile__GetResource);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx, a0);
}

EncapsulatedResListEntry_st* CExoResourceImageFile__GetResourceListEntry(CExoResourceImageFile* thisPtr, uint32_t a0)
{
    using FuncPtrType = EncapsulatedResListEntry_st*(__fastcall *)(CExoResourceImageFile*, int, uint32_t);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CExoResourceImageFile__GetResourceListEntry);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx, a0);
}

uint32_t CExoResourceImageFile__GetResourceSize(CExoResourceImageFile* thisPtr, uint32_t a0)
{
    using FuncPtrType = uint32_t(__fastcall *)(CExoResourceImageFile*, int, uint32_t);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CExoResourceImageFile__GetResourceSize);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx, a0);
}

int32_t CExoResourceImageFile__Initialize(CExoResourceImageFile* thisPtr)
{
    using FuncPtrType = int32_t(__fastcall *)(CExoResourceImageFile*, int);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CExoResourceImageFile__Initialize);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx);
}

int32_t CExoResourceImageFile__LoadHeader(CExoResourceImageFile* thisPtr, unsigned char a0)
{
    using FuncPtrType = int32_t(__fastcall *)(CExoResourceImageFile*, int, unsigned char);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CExoResourceImageFile__LoadHeader);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx, a0);
}

int32_t CExoResourceImageFile__OpenFile__0(CExoResourceImageFile* thisPtr)
{
    using FuncPtrType = int32_t(__fastcall *)(CExoResourceImageFile*, int);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CExoResourceImageFile__OpenFile__0);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx);
}

int32_t CExoResourceImageFile__OpenFile__1(CExoResourceImageFile* thisPtr, unsigned char* a0)
{
    using FuncPtrType = int32_t(__fastcall *)(CExoResourceImageFile*, int, unsigned char*);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CExoResourceImageFile__OpenFile__1);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx, a0);
}

uint32_t CExoResourceImageFile__ReadResource(CExoResourceImageFile* thisPtr, uint32_t a0, void* a1, uint32_t a2, uint32_t a3)
{
    using FuncPtrType = uint32_t(__fastcall *)(CExoResourceImageFile*, int, uint32_t, void*, uint32_t, uint32_t);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CExoResourceImageFile__ReadResource);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx, a0, a1, a2, a3);
}

void CExoResourceImageFile__ReadResourceAsync(CExoResourceImageFile* thisPtr, uint32_t a0, void* a1, uint32_t a2, uint32_t a3)
{
    using FuncPtrType = void(__fastcall *)(CExoResourceImageFile*, int, uint32_t, void*, uint32_t, uint32_t);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CExoResourceImageFile__ReadResourceAsync);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx, a0, a1, a2, a3);
}

}

}
