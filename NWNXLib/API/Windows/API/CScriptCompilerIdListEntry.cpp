#include "CScriptCompilerIdListEntry.hpp"
#include "API/Functions.hpp"
#include "Platform/ASLR.hpp"

namespace NWNXLib {

namespace API {

CScriptCompilerIdListEntry::CScriptCompilerIdListEntry()
{
    CScriptCompilerIdListEntry__CScriptCompilerIdListEntryCtor(this);
}

CScriptCompilerIdListEntry::~CScriptCompilerIdListEntry()
{
    CScriptCompilerIdListEntry__CScriptCompilerIdListEntryDtor(this);
}

int32_t CScriptCompilerIdListEntry::ExpandParameterSpace()
{
    return CScriptCompilerIdListEntry__ExpandParameterSpace(this);
}

void CScriptCompilerIdListEntry__CScriptCompilerIdListEntryCtor(CScriptCompilerIdListEntry* thisPtr)
{
    using FuncPtrType = void(__fastcall *)(CScriptCompilerIdListEntry*, int);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CScriptCompilerIdListEntry__CScriptCompilerIdListEntryCtor);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    func(thisPtr, edx);
}

void CScriptCompilerIdListEntry__CScriptCompilerIdListEntryDtor(CScriptCompilerIdListEntry* thisPtr)
{
    using FuncPtrType = void(__fastcall *)(CScriptCompilerIdListEntry*, int, int);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CScriptCompilerIdListEntry__CScriptCompilerIdListEntryDtor);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    func(thisPtr, edx, 2);
}

int32_t CScriptCompilerIdListEntry__ExpandParameterSpace(CScriptCompilerIdListEntry* thisPtr)
{
    using FuncPtrType = int32_t(__fastcall *)(CScriptCompilerIdListEntry*, int);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CScriptCompilerIdListEntry__ExpandParameterSpace);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx);
}

}

}
