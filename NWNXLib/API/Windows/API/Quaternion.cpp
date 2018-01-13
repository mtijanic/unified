#include "Quaternion.hpp"
#include "API/Functions.hpp"
#include "Platform/ASLR.hpp"

namespace NWNXLib {

namespace API {

Quaternion& Quaternion::operator*=(float a0)
{
    return Quaternion__OperatorMultiplicationAssignment(this, a0);
}

Quaternion& Quaternion__OperatorMultiplicationAssignment(Quaternion* thisPtr, float a0)
{
    using FuncPtrType = Quaternion&(__fastcall *)(Quaternion*, int, float);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::Quaternion__OperatorMultiplicationAssignment);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx, a0);
}

}

}
