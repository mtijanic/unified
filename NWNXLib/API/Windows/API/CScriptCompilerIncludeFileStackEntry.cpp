#include "CScriptCompilerIncludeFileStackEntry.hpp"
#include "API/Functions.hpp"
#include "Platform/ASLR.hpp"

namespace NWNXLib {

namespace API {

CScriptCompilerIncludeFileStackEntry::~CScriptCompilerIncludeFileStackEntry()
{
    CScriptCompilerIncludeFileStackEntry__CScriptCompilerIncludeFileStackEntryDtor(this);
}

void CScriptCompilerIncludeFileStackEntry__CScriptCompilerIncludeFileStackEntryDtor(CScriptCompilerIncludeFileStackEntry* thisPtr)
{
    using FuncPtrType = void(__fastcall *)(CScriptCompilerIncludeFileStackEntry*, int, int);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CScriptCompilerIncludeFileStackEntry__CScriptCompilerIncludeFileStackEntryDtor);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    func(thisPtr, edx, 2);
}

}

}
