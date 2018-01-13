#include "CExoArrayListTemplatedCNWSScriptVar.hpp"
#include "API/Functions.hpp"
#include "Platform/ASLR.hpp"

#include "CNWSScriptVar.hpp"

namespace NWNXLib {

namespace API {

CExoArrayListTemplatedCNWSScriptVar::~CExoArrayListTemplatedCNWSScriptVar()
{
    CExoArrayListTemplatedCNWSScriptVar__CExoArrayListTemplatedCNWSScriptVarDtor(this);
}

void CExoArrayListTemplatedCNWSScriptVar::Allocate(int32_t a0)
{
    return CExoArrayListTemplatedCNWSScriptVar__Allocate(this, a0);
}

void CExoArrayListTemplatedCNWSScriptVar__CExoArrayListTemplatedCNWSScriptVarDtor(CExoArrayListTemplatedCNWSScriptVar* thisPtr)
{
    using FuncPtrType = void(__fastcall *)(CExoArrayListTemplatedCNWSScriptVar*, int, int);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CExoArrayListTemplatedCNWSScriptVar__CExoArrayListTemplatedCNWSScriptVarDtor);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    func(thisPtr, edx, 2);
}

void CExoArrayListTemplatedCNWSScriptVar__Allocate(CExoArrayListTemplatedCNWSScriptVar* thisPtr, int32_t a0)
{
    using FuncPtrType = void(__fastcall *)(CExoArrayListTemplatedCNWSScriptVar*, int, int32_t);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CExoArrayListTemplatedCNWSScriptVar__Allocate);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx, a0);
}

}

}
