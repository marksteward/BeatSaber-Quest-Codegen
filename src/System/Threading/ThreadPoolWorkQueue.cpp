// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
// Including type: System.Threading.ThreadPoolWorkQueue
#include "System/Threading/ThreadPoolWorkQueue.hpp"
// Including type: System.Threading.ThreadPoolWorkQueue/SparseArray`1
#include "System/Threading/ThreadPoolWorkQueue_SparseArray_1.hpp"
// Including type: System.Threading.ThreadPoolWorkQueue/WorkStealingQueue
#include "System/Threading/ThreadPoolWorkQueue_WorkStealingQueue.hpp"
// Including type: System.Threading.ThreadPoolWorkQueue/QueueSegment
#include "System/Threading/ThreadPoolWorkQueue_QueueSegment.hpp"
// Including type: System.Threading.ThreadPoolWorkQueueThreadLocals
#include "System/Threading/ThreadPoolWorkQueueThreadLocals.hpp"
// Including type: System.Threading.IThreadPoolWorkItem
#include "System/Threading/IThreadPoolWorkItem.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static System.Threading.ThreadPoolWorkQueue/SparseArray`1<System.Threading.ThreadPoolWorkQueue/WorkStealingQueue> allThreadQueues
System::Threading::ThreadPoolWorkQueue::SparseArray_1<System::Threading::ThreadPoolWorkQueue::WorkStealingQueue*>* System::Threading::ThreadPoolWorkQueue::_get_allThreadQueues() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Threading").WithContext("ThreadPoolWorkQueue").WithContext("_get_allThreadQueues");
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<System::Threading::ThreadPoolWorkQueue::SparseArray_1<System::Threading::ThreadPoolWorkQueue::WorkStealingQueue*>*>("System.Threading", "ThreadPoolWorkQueue", "allThreadQueues"));
}
// Autogenerated static field setter
// Set static field: static System.Threading.ThreadPoolWorkQueue/SparseArray`1<System.Threading.ThreadPoolWorkQueue/WorkStealingQueue> allThreadQueues
void System::Threading::ThreadPoolWorkQueue::_set_allThreadQueues(System::Threading::ThreadPoolWorkQueue::SparseArray_1<System::Threading::ThreadPoolWorkQueue::WorkStealingQueue*>* value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Threading").WithContext("ThreadPoolWorkQueue").WithContext("_set_allThreadQueues");
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System.Threading", "ThreadPoolWorkQueue", "allThreadQueues", value));
}
// Autogenerated method: System.Threading.ThreadPoolWorkQueue.EnsureCurrentThreadHasQueue
System::Threading::ThreadPoolWorkQueueThreadLocals* System::Threading::ThreadPoolWorkQueue::EnsureCurrentThreadHasQueue() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Threading").WithContext("ThreadPoolWorkQueue").WithContext("EnsureCurrentThreadHasQueue");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "EnsureCurrentThreadHasQueue", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<System::Threading::ThreadPoolWorkQueueThreadLocals*, false>(this, ___internal__method);
}
// Autogenerated method: System.Threading.ThreadPoolWorkQueue.EnsureThreadRequested
void System::Threading::ThreadPoolWorkQueue::EnsureThreadRequested() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Threading").WithContext("ThreadPoolWorkQueue").WithContext("EnsureThreadRequested");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "EnsureThreadRequested", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}
// Autogenerated method: System.Threading.ThreadPoolWorkQueue.MarkThreadRequestSatisfied
void System::Threading::ThreadPoolWorkQueue::MarkThreadRequestSatisfied() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Threading").WithContext("ThreadPoolWorkQueue").WithContext("MarkThreadRequestSatisfied");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "MarkThreadRequestSatisfied", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}
// Autogenerated method: System.Threading.ThreadPoolWorkQueue.Enqueue
void System::Threading::ThreadPoolWorkQueue::Enqueue(System::Threading::IThreadPoolWorkItem* callback, bool forceGlobal) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Threading").WithContext("ThreadPoolWorkQueue").WithContext("Enqueue");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "Enqueue", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(callback, forceGlobal)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, callback, forceGlobal);
}
// Autogenerated method: System.Threading.ThreadPoolWorkQueue.LocalFindAndPop
bool System::Threading::ThreadPoolWorkQueue::LocalFindAndPop(System::Threading::IThreadPoolWorkItem* callback) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Threading").WithContext("ThreadPoolWorkQueue").WithContext("LocalFindAndPop");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "LocalFindAndPop", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(callback)));
  return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method, callback);
}
// Autogenerated method: System.Threading.ThreadPoolWorkQueue.Dequeue
void System::Threading::ThreadPoolWorkQueue::Dequeue(System::Threading::ThreadPoolWorkQueueThreadLocals* tl, System::Threading::IThreadPoolWorkItem*& callback, bool& missedSteal) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Threading").WithContext("ThreadPoolWorkQueue").WithContext("Dequeue");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "Dequeue", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(tl, callback, missedSteal)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, tl, callback, missedSteal);
}
// Autogenerated method: System.Threading.ThreadPoolWorkQueue.Dispatch
bool System::Threading::ThreadPoolWorkQueue::Dispatch() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Threading").WithContext("ThreadPoolWorkQueue").WithContext("Dispatch");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("System.Threading", "ThreadPoolWorkQueue", "Dispatch", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<bool, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method);
}
// Autogenerated method: System.Threading.ThreadPoolWorkQueue..cctor
void System::Threading::ThreadPoolWorkQueue::_cctor() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Threading").WithContext("ThreadPoolWorkQueue").WithContext(".cctor");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("System.Threading", "ThreadPoolWorkQueue", ".cctor", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method);
}
