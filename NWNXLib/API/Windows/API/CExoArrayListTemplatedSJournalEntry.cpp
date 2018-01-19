#include "CExoArrayListTemplatedSJournalEntry.hpp"
#include "API/Functions.hpp"
#include "Platform/ASLR.hpp"

namespace NWNXLib {

namespace API {

void CExoArrayListTemplatedSJournalEntry::Add(SJournalEntry a0)
{
    return CExoArrayListTemplatedSJournalEntry__Add(this, a0);
}

void CExoArrayListTemplatedSJournalEntry::Allocate(int32_t a0)
{
    return CExoArrayListTemplatedSJournalEntry__Allocate(this, a0);
}

void CExoArrayListTemplatedSJournalEntry__Add(CExoArrayListTemplatedSJournalEntry* thisPtr, SJournalEntry a0)
{
    using FuncPtrType = void(__fastcall *)(CExoArrayListTemplatedSJournalEntry*, int, SJournalEntry);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CExoArrayListTemplatedSJournalEntry__Add);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx, a0);
}

void CExoArrayListTemplatedSJournalEntry__Allocate(CExoArrayListTemplatedSJournalEntry* thisPtr, int32_t a0)
{
    using FuncPtrType = void(__fastcall *)(CExoArrayListTemplatedSJournalEntry*, int, int32_t);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CExoArrayListTemplatedSJournalEntry__Allocate);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx, a0);
}

}

}
