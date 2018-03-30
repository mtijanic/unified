#include "CTlkFile.hpp"
#include "API/Functions.hpp"
#include "Platform/ASLR.hpp"

namespace NWNXLib {

namespace API {

CTlkFile::CTlkFile(CExoString a0)
{
    CTlkFile__CTlkFileCtor(this, a0);
}

int32_t CTlkFile::ReadHeader()
{
    return CTlkFile__ReadHeader(this);
}

void CTlkFile__CTlkFileCtor(CTlkFile* thisPtr, CExoString a0)
{
    using FuncPtrType = void(__fastcall *)(CTlkFile*, int, CExoString);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CTlkFile__CTlkFileCtor);
    FuncPtrType func = reinterpret_cast<FuncPtrType>    (address);
    int edx = 0;
    func(thisPtr, edx, a0);
}

int32_t CTlkFile__ReadHeader(CTlkFile* thisPtr)
{
    using FuncPtrType = int32_t(__fastcall *)(CTlkFile*, int);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CTlkFile__ReadHeader);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx);
}

}

}
