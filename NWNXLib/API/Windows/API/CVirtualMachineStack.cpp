#include "CVirtualMachineStack.hpp"
#include "API/Functions.hpp"
#include "Platform/ASLR.hpp"

#include "CResGFF.hpp"
#include "CResStruct.hpp"
#include "CVirtualMachine.hpp"

namespace NWNXLib {

namespace API {

CVirtualMachineStack::CVirtualMachineStack()
{
    CVirtualMachineStack__CVirtualMachineStackCtor(this);
}

CVirtualMachineStack::~CVirtualMachineStack()
{
    CVirtualMachineStack__CVirtualMachineStackDtor(this);
}

void CVirtualMachineStack::AddToTopOfStack(int32_t a0)
{
    return CVirtualMachineStack__AddToTopOfStack(this, a0);
}

void CVirtualMachineStack::AssignLocationToLocation(int32_t a0, int32_t a1)
{
    return CVirtualMachineStack__AssignLocationToLocation(this, a0, a1);
}

void CVirtualMachineStack::ClearStack()
{
    return CVirtualMachineStack__ClearStack(this);
}

void CVirtualMachineStack::CopyFromStack(CVirtualMachineStack* a0, int32_t a1, int32_t a2)
{
    return CVirtualMachineStack__CopyFromStack(this, a0, a1, a2);
}

int32_t CVirtualMachineStack::GetBasePointer()
{
    return CVirtualMachineStack__GetBasePointer(this);
}

int32_t CVirtualMachineStack::GetStackPointer()
{
    return CVirtualMachineStack__GetStackPointer(this);
}

void CVirtualMachineStack::InitializeStack()
{
    return CVirtualMachineStack__InitializeStack(this);
}

int32_t CVirtualMachineStack::LoadStack(CResGFF* a0, CResStruct* a1)
{
    return CVirtualMachineStack__LoadStack(this, a0, a1);
}

void CVirtualMachineStack::ModifyIntegerAtLocation(int32_t a0, int32_t a1)
{
    return CVirtualMachineStack__ModifyIntegerAtLocation(this, a0, a1);
}

int32_t CVirtualMachineStack::SaveStack(CResGFF* a0, CResStruct* a1)
{
    return CVirtualMachineStack__SaveStack(this, a0, a1);
}

void CVirtualMachineStack::SetBasePointer(int32_t a0)
{
    return CVirtualMachineStack__SetBasePointer(this, a0);
}

void CVirtualMachineStack::SetStackPointer(int32_t a0)
{
    return CVirtualMachineStack__SetStackPointer(this, a0);
}

void CVirtualMachineStack__CVirtualMachineStackCtor(CVirtualMachineStack* thisPtr)
{
    using FuncPtrType = void(__fastcall *)(CVirtualMachineStack*, int);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CVirtualMachineStack__CVirtualMachineStackCtor);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    func(thisPtr, edx);
}

void CVirtualMachineStack__CVirtualMachineStackDtor(CVirtualMachineStack* thisPtr)
{
    using FuncPtrType = void(__fastcall *)(CVirtualMachineStack*, int, int);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CVirtualMachineStack__CVirtualMachineStackDtor);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    func(thisPtr, edx, 2);
}

void CVirtualMachineStack__AddToTopOfStack(CVirtualMachineStack* thisPtr, int32_t a0)
{
    using FuncPtrType = void(__fastcall *)(CVirtualMachineStack*, int, int32_t);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CVirtualMachineStack__AddToTopOfStack);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx, a0);
}

void CVirtualMachineStack__AssignLocationToLocation(CVirtualMachineStack* thisPtr, int32_t a0, int32_t a1)
{
    using FuncPtrType = void(__fastcall *)(CVirtualMachineStack*, int, int32_t, int32_t);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CVirtualMachineStack__AssignLocationToLocation);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx, a0, a1);
}

void CVirtualMachineStack__ClearStack(CVirtualMachineStack* thisPtr)
{
    using FuncPtrType = void(__fastcall *)(CVirtualMachineStack*, int);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CVirtualMachineStack__ClearStack);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx);
}

void CVirtualMachineStack__CopyFromStack(CVirtualMachineStack* thisPtr, CVirtualMachineStack* a0, int32_t a1, int32_t a2)
{
    using FuncPtrType = void(__fastcall *)(CVirtualMachineStack*, int, CVirtualMachineStack*, int32_t, int32_t);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CVirtualMachineStack__CopyFromStack);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx, a0, a1, a2);
}

int32_t CVirtualMachineStack__GetBasePointer(CVirtualMachineStack* thisPtr)
{
    using FuncPtrType = int32_t(__fastcall *)(CVirtualMachineStack*, int);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CVirtualMachineStack__GetBasePointer);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx);
}

int32_t CVirtualMachineStack__GetStackPointer(CVirtualMachineStack* thisPtr)
{
    using FuncPtrType = int32_t(__fastcall *)(CVirtualMachineStack*, int);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CVirtualMachineStack__GetStackPointer);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx);
}

void CVirtualMachineStack__InitializeStack(CVirtualMachineStack* thisPtr)
{
    using FuncPtrType = void(__fastcall *)(CVirtualMachineStack*, int);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CVirtualMachineStack__InitializeStack);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx);
}

int32_t CVirtualMachineStack__LoadStack(CVirtualMachineStack* thisPtr, CResGFF* a0, CResStruct* a1)
{
    using FuncPtrType = int32_t(__fastcall *)(CVirtualMachineStack*, int, CResGFF*, CResStruct*);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CVirtualMachineStack__LoadStack);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx, a0, a1);
}

void CVirtualMachineStack__ModifyIntegerAtLocation(CVirtualMachineStack* thisPtr, int32_t a0, int32_t a1)
{
    using FuncPtrType = void(__fastcall *)(CVirtualMachineStack*, int, int32_t, int32_t);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CVirtualMachineStack__ModifyIntegerAtLocation);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx, a0, a1);
}

int32_t CVirtualMachineStack__SaveStack(CVirtualMachineStack* thisPtr, CResGFF* a0, CResStruct* a1)
{
    using FuncPtrType = int32_t(__fastcall *)(CVirtualMachineStack*, int, CResGFF*, CResStruct*);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CVirtualMachineStack__SaveStack);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx, a0, a1);
}

void CVirtualMachineStack__SetBasePointer(CVirtualMachineStack* thisPtr, int32_t a0)
{
    using FuncPtrType = void(__fastcall *)(CVirtualMachineStack*, int, int32_t);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CVirtualMachineStack__SetBasePointer);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx, a0);
}

void CVirtualMachineStack__SetStackPointer(CVirtualMachineStack* thisPtr, int32_t a0)
{
    using FuncPtrType = void(__fastcall *)(CVirtualMachineStack*, int, int32_t);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CVirtualMachineStack__SetStackPointer);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx, a0);
}

}

}
