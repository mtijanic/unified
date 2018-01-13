#include "CWorldJournalEntry.hpp"
#include "API/Functions.hpp"
#include "Platform/ASLR.hpp"

namespace NWNXLib {

namespace API {

CWorldJournalEntry::~CWorldJournalEntry()
{
    CWorldJournalEntry__CWorldJournalEntryDtor(this);
}

void CWorldJournalEntry__CWorldJournalEntryDtor(CWorldJournalEntry* thisPtr)
{
    using FuncPtrType = void(__fastcall *)(CWorldJournalEntry*, int, int);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CWorldJournalEntry__CWorldJournalEntryDtor);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    func(thisPtr, edx, 2);
}

}

}
