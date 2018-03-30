#include "CScriptSourceFile.hpp"
#include "API/Functions.hpp"
#include "Platform/ASLR.hpp"

#include "CExoString.hpp"

namespace NWNXLib {

namespace API {

CScriptSourceFile::CScriptSourceFile()
{
    CScriptSourceFile__CScriptSourceFileCtor(this);
}

CScriptSourceFile::~CScriptSourceFile()
{
    CScriptSourceFile__CScriptSourceFileDtor__0(this);
}

int32_t CScriptSourceFile::LoadScript(const CExoString& a0, char** a1, uint32_t* a2)
{
    return CScriptSourceFile__LoadScript(this, a0, a1, a2);
}

void CScriptSourceFile::UnloadScript()
{
    return CScriptSourceFile__UnloadScript(this);
}

void CScriptSourceFile__CScriptSourceFileCtor(CScriptSourceFile* thisPtr)
{
    using FuncPtrType = void(__fastcall *)(CScriptSourceFile*, int);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CScriptSourceFile__CScriptSourceFileCtor);
    FuncPtrType func = reinterpret_cast<FuncPtrType>    (address);
    int edx = 0;
    func(thisPtr, edx);
}

void CScriptSourceFile__CScriptSourceFileDtor__0(CScriptSourceFile* thisPtr)
{
    using FuncPtrType = void(__fastcall *)(CScriptSourceFile*, int, int);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CScriptSourceFile__CScriptSourceFileDtor__0);
    FuncPtrType func = reinterpret_cast<FuncPtrType>    (address);
    int edx = 0;
    func(thisPtr, edx, 2);
}

int32_t CScriptSourceFile__LoadScript(CScriptSourceFile* thisPtr, const CExoString& a0, char** a1, uint32_t* a2)
{
    using FuncPtrType = int32_t(__fastcall *)(CScriptSourceFile*, int, const CExoString&, char**, uint32_t*);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CScriptSourceFile__LoadScript);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx, a0, a1, a2);
}

void CScriptSourceFile__UnloadScript(CScriptSourceFile* thisPtr)
{
    using FuncPtrType = void(__fastcall *)(CScriptSourceFile*, int);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CScriptSourceFile__UnloadScript);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx);
}

}

}
