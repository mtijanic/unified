#include "CExoIni.hpp"
#include "API/Functions.hpp"
#include "Platform/ASLR.hpp"

#include "CExoIniInternal.hpp"

namespace NWNXLib {

namespace API {

CExoIni::CExoIni(CExoString a0)
{
    CExoIni__CExoIniCtor(this, a0);
}

CExoIni::~CExoIni()
{
    CExoIni__CExoIniDtor(this);
}

int32_t CExoIni::ReadIniEntry(CExoString& a0, const int32_t& a1, const CExoString& a2, const CExoString& a3)
{
    return CExoIni__ReadIniEntry(this, a0, a1, a2, a3);
}

int32_t CExoIni::WriteIniEntry(const CExoString& a0, const int32_t& a1, const CExoString& a2, const CExoString& a3)
{
    return CExoIni__WriteIniEntry(this, a0, a1, a2, a3);
}

void CExoIni__CExoIniCtor(CExoIni* thisPtr, CExoString a0)
{
    using FuncPtrType = void(__fastcall *)(CExoIni*, int, CExoString);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CExoIni__CExoIniCtor);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    func(thisPtr, edx, a0);
}

void CExoIni__CExoIniDtor(CExoIni* thisPtr)
{
    using FuncPtrType = void(__fastcall *)(CExoIni*, int, int);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CExoIni__CExoIniDtor);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    func(thisPtr, edx, 2);
}

int32_t CExoIni__ReadIniEntry(CExoIni* thisPtr, CExoString& a0, const int32_t& a1, const CExoString& a2, const CExoString& a3)
{
    using FuncPtrType = int32_t(__fastcall *)(CExoIni*, int, CExoString&, const int32_t&, const CExoString&, const CExoString&);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CExoIni__ReadIniEntry);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx, a0, a1, a2, a3);
}

int32_t CExoIni__WriteIniEntry(CExoIni* thisPtr, const CExoString& a0, const int32_t& a1, const CExoString& a2, const CExoString& a3)
{
    using FuncPtrType = int32_t(__fastcall *)(CExoIni*, int, const CExoString&, const int32_t&, const CExoString&, const CExoString&);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CExoIni__WriteIniEntry);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx, a0, a1, a2, a3);
}

}

}
