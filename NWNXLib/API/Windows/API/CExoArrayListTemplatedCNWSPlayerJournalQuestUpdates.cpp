#include "CExoArrayListTemplatedCNWSPlayerJournalQuestUpdates.hpp"
#include "API/Functions.hpp"
#include "Platform/ASLR.hpp"

namespace NWNXLib {

namespace API {

CExoArrayListTemplatedCNWSPlayerJournalQuestUpdates::~CExoArrayListTemplatedCNWSPlayerJournalQuestUpdates()
{
    CExoArrayListTemplatedCNWSPlayerJournalQuestUpdates__CExoArrayListTemplatedCNWSPlayerJournalQuestUpdatesDtor(this);
}

void CExoArrayListTemplatedCNWSPlayerJournalQuestUpdates::Add(CNWSPlayerJournalQuestUpdates a0)
{
    return CExoArrayListTemplatedCNWSPlayerJournalQuestUpdates__Add(this, a0);
}

void CExoArrayListTemplatedCNWSPlayerJournalQuestUpdates::Allocate(int32_t a0)
{
    return CExoArrayListTemplatedCNWSPlayerJournalQuestUpdates__Allocate(this, a0);
}

void CExoArrayListTemplatedCNWSPlayerJournalQuestUpdates__CExoArrayListTemplatedCNWSPlayerJournalQuestUpdatesDtor(CExoArrayListTemplatedCNWSPlayerJournalQuestUpdates* thisPtr)
{
    using FuncPtrType = void(__fastcall *)(CExoArrayListTemplatedCNWSPlayerJournalQuestUpdates*, int, int);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CExoArrayListTemplatedCNWSPlayerJournalQuestUpdates__CExoArrayListTemplatedCNWSPlayerJournalQuestUpdatesDtor);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    func(thisPtr, edx, 2);
}

void CExoArrayListTemplatedCNWSPlayerJournalQuestUpdates__Add(CExoArrayListTemplatedCNWSPlayerJournalQuestUpdates* thisPtr, CNWSPlayerJournalQuestUpdates a0)
{
    using FuncPtrType = void(__fastcall *)(CExoArrayListTemplatedCNWSPlayerJournalQuestUpdates*, int, CNWSPlayerJournalQuestUpdates);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CExoArrayListTemplatedCNWSPlayerJournalQuestUpdates__Add);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx, a0);
}

void CExoArrayListTemplatedCNWSPlayerJournalQuestUpdates__Allocate(CExoArrayListTemplatedCNWSPlayerJournalQuestUpdates* thisPtr, int32_t a0)
{
    using FuncPtrType = void(__fastcall *)(CExoArrayListTemplatedCNWSPlayerJournalQuestUpdates*, int, int32_t);
    uintptr_t address = Platform::ASLR::GetRelocatedAddress(Functions::CExoArrayListTemplatedCNWSPlayerJournalQuestUpdates__Allocate);
    FuncPtrType func = reinterpret_cast<FuncPtrType>(address);
    int edx = 0;
    return func(thisPtr, edx, a0);
}

}

}
