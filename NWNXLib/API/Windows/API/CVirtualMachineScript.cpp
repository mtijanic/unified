#include "CVirtualMachineScript.hpp"
#include "API/Functions.hpp"
#include "Platform/ASLR.hpp"

#include "CVirtualMachineStack.hpp"

namespace NWNXLib {

namespace API {

CVirtualMachineScript::~CVirtualMachineScript()
{
    CVirtualMachineScript__CVirtualMachineScriptDtor(this);
}

void CVirtualMachineScript__CVirtualMachineScriptDtor(CVirtualMachineScript* thisPtr)
{
    using FuncPtrType = void(__fastcall *)(CVirtualMachineScript*, int, int);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CVirtualMachineScript__CVirtualMachineScriptDtor);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    func(thisPtr, edx, 2);
}

}

}
