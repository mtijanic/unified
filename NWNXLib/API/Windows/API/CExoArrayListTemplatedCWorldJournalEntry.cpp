#include "CExoArrayListTemplatedCWorldJournalEntry.hpp"
#include "API/Functions.hpp"
#include "Platform/ASLR.hpp"

namespace NWNXLib {

namespace API {

CExoArrayListTemplatedCWorldJournalEntry::~CExoArrayListTemplatedCWorldJournalEntry()
{
    CExoArrayListTemplatedCWorldJournalEntry__CExoArrayListTemplatedCWorldJournalEntryDtor(this);
}

void CExoArrayListTemplatedCWorldJournalEntry::Add(CWorldJournalEntry a0)
{
    return CExoArrayListTemplatedCWorldJournalEntry__Add(this, a0);
}

void CExoArrayListTemplatedCWorldJournalEntry::Allocate(int32_t a0)
{
    return CExoArrayListTemplatedCWorldJournalEntry__Allocate(this, a0);
}

void CExoArrayListTemplatedCWorldJournalEntry__CExoArrayListTemplatedCWorldJournalEntryDtor(CExoArrayListTemplatedCWorldJournalEntry* thisPtr)
{
    using FuncPtrType = void(__fastcall *)(CExoArrayListTemplatedCWorldJournalEntry*, int, int);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CExoArrayListTemplatedCWorldJournalEntry__CExoArrayListTemplatedCWorldJournalEntryDtor);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    func(thisPtr, edx, 2);
}

void CExoArrayListTemplatedCWorldJournalEntry__Add(CExoArrayListTemplatedCWorldJournalEntry* thisPtr, CWorldJournalEntry a0)
{
    using FuncPtrType = void(__fastcall *)(CExoArrayListTemplatedCWorldJournalEntry*, int, CWorldJournalEntry);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CExoArrayListTemplatedCWorldJournalEntry__Add);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx, a0);
}

void CExoArrayListTemplatedCWorldJournalEntry__Allocate(CExoArrayListTemplatedCWorldJournalEntry* thisPtr, int32_t a0)
{
    using FuncPtrType = void(__fastcall *)(CExoArrayListTemplatedCWorldJournalEntry*, int, int32_t);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CExoArrayListTemplatedCWorldJournalEntry__Allocate);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx, a0);
}

}

}
