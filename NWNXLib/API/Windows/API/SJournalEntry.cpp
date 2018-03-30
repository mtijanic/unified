#include "SJournalEntry.hpp"
#include "API/Functions.hpp"
#include "Platform/ASLR.hpp"

namespace NWNXLib {

namespace API {

SJournalEntry::~SJournalEntry()
{
    SJournalEntry__SJournalEntryDtor(this);
}

void SJournalEntry__SJournalEntryDtor(SJournalEntry* thisPtr)
{
    using FuncPtrType = void(__fastcall *)(SJournalEntry*, int, int);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::SJournalEntry__SJournalEntryDtor);
    FuncPtrType func = reinterpret_cast<FuncPtrType>    (address);
    int edx = 0;
    func(thisPtr, edx, 2);
}

}

}
