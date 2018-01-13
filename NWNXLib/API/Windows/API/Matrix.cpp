#include "Matrix.hpp"
#include "API/Functions.hpp"
#include "Platform/ASLR.hpp"

namespace NWNXLib {

namespace API {

Quaternion Matrix::getquaternion()
{
    return Matrix__getquaternion(this);
}

Quaternion Matrix__getquaternion(Matrix* thisPtr)
{
    using FuncPtrType = Quaternion(__fastcall *)(Matrix*, int);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::Matrix__getquaternion);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx);
}

}

}
