// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: ThreadPoolWorkQueueThreadLocals
  class ThreadPoolWorkQueueThreadLocals;
  // Forward declaring type: IThreadPoolWorkItem
  class IThreadPoolWorkItem;
}
// Completed forward declares
// Type namespace: System.Threading
namespace System::Threading {
  // Size: 0x24
  #pragma pack(push, 1)
  // Autogenerated type: System.Threading.ThreadPoolWorkQueue
  class ThreadPoolWorkQueue : public ::Il2CppObject {
    public:
    // Nested type: System::Threading::ThreadPoolWorkQueue::SparseArray_1<T>
    template<typename T>
    class SparseArray_1;
    // Nested type: System::Threading::ThreadPoolWorkQueue::WorkStealingQueue
    class WorkStealingQueue;
    // Nested type: System::Threading::ThreadPoolWorkQueue::QueueSegment
    class QueueSegment;
    // System.Threading.ThreadPoolWorkQueue/QueueSegment queueHead
    // Size: 0x8
    // Offset: 0x10
    System::Threading::ThreadPoolWorkQueue::QueueSegment* queueHead;
    // Field size check
    static_assert(sizeof(System::Threading::ThreadPoolWorkQueue::QueueSegment*) == 0x8);
    // System.Threading.ThreadPoolWorkQueue/QueueSegment queueTail
    // Size: 0x8
    // Offset: 0x18
    System::Threading::ThreadPoolWorkQueue::QueueSegment* queueTail;
    // Field size check
    static_assert(sizeof(System::Threading::ThreadPoolWorkQueue::QueueSegment*) == 0x8);
    // private System.Int32 numOutstandingThreadRequests
    // Size: 0x4
    // Offset: 0x20
    int numOutstandingThreadRequests;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: ThreadPoolWorkQueue
    ThreadPoolWorkQueue(System::Threading::ThreadPoolWorkQueue::QueueSegment* queueHead_ = {}, System::Threading::ThreadPoolWorkQueue::QueueSegment* queueTail_ = {}, int numOutstandingThreadRequests_ = {}) noexcept : queueHead{queueHead_}, queueTail{queueTail_}, numOutstandingThreadRequests{numOutstandingThreadRequests_} {}
    // Get static field: static System.Threading.ThreadPoolWorkQueue/SparseArray`1<System.Threading.ThreadPoolWorkQueue/WorkStealingQueue> allThreadQueues
    static System::Threading::ThreadPoolWorkQueue::SparseArray_1<System::Threading::ThreadPoolWorkQueue::WorkStealingQueue*>* _get_allThreadQueues();
    // Set static field: static System.Threading.ThreadPoolWorkQueue/SparseArray`1<System.Threading.ThreadPoolWorkQueue/WorkStealingQueue> allThreadQueues
    static void _set_allThreadQueues(System::Threading::ThreadPoolWorkQueue::SparseArray_1<System::Threading::ThreadPoolWorkQueue::WorkStealingQueue*>* value);
    // public System.Threading.ThreadPoolWorkQueueThreadLocals EnsureCurrentThreadHasQueue()
    // Offset: 0x18935C0
    System::Threading::ThreadPoolWorkQueueThreadLocals* EnsureCurrentThreadHasQueue();
    // System.Void EnsureThreadRequested()
    // Offset: 0x1893740
    void EnsureThreadRequested();
    // System.Void MarkThreadRequestSatisfied()
    // Offset: 0x18937F8
    void MarkThreadRequestSatisfied();
    // public System.Void Enqueue(System.Threading.IThreadPoolWorkItem callback, System.Boolean forceGlobal)
    // Offset: 0x1893288
    void Enqueue(System::Threading::IThreadPoolWorkItem* callback, bool forceGlobal);
    // System.Boolean LocalFindAndPop(System.Threading.IThreadPoolWorkItem callback)
    // Offset: 0x18933B4
    bool LocalFindAndPop(System::Threading::IThreadPoolWorkItem* callback);
    // public System.Void Dequeue(System.Threading.ThreadPoolWorkQueueThreadLocals tl, out System.Threading.IThreadPoolWorkItem callback, out System.Boolean missedSteal)
    // Offset: 0x189401C
    void Dequeue(System::Threading::ThreadPoolWorkQueueThreadLocals* tl, System::Threading::IThreadPoolWorkItem*& callback, bool& missedSteal);
    // static System.Boolean Dispatch()
    // Offset: 0x18945E0
    static bool Dispatch();
    // static private System.Void .cctor()
    // Offset: 0x1894B6C
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x18934E8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ThreadPoolWorkQueue* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Threading::ThreadPoolWorkQueue::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ThreadPoolWorkQueue*, creationType>()));
    }
  }; // System.Threading.ThreadPoolWorkQueue
  #pragma pack(pop)
  static check_size<sizeof(ThreadPoolWorkQueue), 32 + sizeof(int)> __System_Threading_ThreadPoolWorkQueueSizeCheck;
  static_assert(sizeof(ThreadPoolWorkQueue) == 0x24);
}
DEFINE_IL2CPP_ARG_TYPE(System::Threading::ThreadPoolWorkQueue*, "System.Threading", "ThreadPoolWorkQueue");
// Writing MetadataGetter for method: System::Threading::ThreadPoolWorkQueue::EnsureCurrentThreadHasQueue
// Il2CppName: EnsureCurrentThreadHasQueue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::ThreadPoolWorkQueueThreadLocals* (System::Threading::ThreadPoolWorkQueue::*)()>(&System::Threading::ThreadPoolWorkQueue::EnsureCurrentThreadHasQueue)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Threading::ThreadPoolWorkQueue*), "EnsureCurrentThreadHasQueue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Threading::ThreadPoolWorkQueue::EnsureThreadRequested
// Il2CppName: EnsureThreadRequested
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::ThreadPoolWorkQueue::*)()>(&System::Threading::ThreadPoolWorkQueue::EnsureThreadRequested)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Threading::ThreadPoolWorkQueue*), "EnsureThreadRequested", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Threading::ThreadPoolWorkQueue::MarkThreadRequestSatisfied
// Il2CppName: MarkThreadRequestSatisfied
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::ThreadPoolWorkQueue::*)()>(&System::Threading::ThreadPoolWorkQueue::MarkThreadRequestSatisfied)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Threading::ThreadPoolWorkQueue*), "MarkThreadRequestSatisfied", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Threading::ThreadPoolWorkQueue::Enqueue
// Il2CppName: Enqueue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::ThreadPoolWorkQueue::*)(System::Threading::IThreadPoolWorkItem*, bool)>(&System::Threading::ThreadPoolWorkQueue::Enqueue)> {
  const MethodInfo* get() {
    static auto* callback = &::il2cpp_utils::GetClassFromName("System.Threading", "IThreadPoolWorkItem")->byval_arg;
    static auto* forceGlobal = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Threading::ThreadPoolWorkQueue*), "Enqueue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{callback, forceGlobal});
  }
};
// Writing MetadataGetter for method: System::Threading::ThreadPoolWorkQueue::LocalFindAndPop
// Il2CppName: LocalFindAndPop
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Threading::ThreadPoolWorkQueue::*)(System::Threading::IThreadPoolWorkItem*)>(&System::Threading::ThreadPoolWorkQueue::LocalFindAndPop)> {
  const MethodInfo* get() {
    static auto* callback = &::il2cpp_utils::GetClassFromName("System.Threading", "IThreadPoolWorkItem")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Threading::ThreadPoolWorkQueue*), "LocalFindAndPop", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{callback});
  }
};
// Writing MetadataGetter for method: System::Threading::ThreadPoolWorkQueue::Dequeue
// Il2CppName: Dequeue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::ThreadPoolWorkQueue::*)(System::Threading::ThreadPoolWorkQueueThreadLocals*, System::Threading::IThreadPoolWorkItem*&, bool&)>(&System::Threading::ThreadPoolWorkQueue::Dequeue)> {
  const MethodInfo* get() {
    static auto* tl = &::il2cpp_utils::GetClassFromName("System.Threading", "ThreadPoolWorkQueueThreadLocals")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System.Threading", "IThreadPoolWorkItem")->this_arg;
    static auto* missedSteal = &::il2cpp_utils::GetClassFromName("System", "Boolean")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Threading::ThreadPoolWorkQueue*), "Dequeue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{tl, callback, missedSteal});
  }
};
// Writing MetadataGetter for method: System::Threading::ThreadPoolWorkQueue::Dispatch
// Il2CppName: Dispatch
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&System::Threading::ThreadPoolWorkQueue::Dispatch)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Threading::ThreadPoolWorkQueue*), "Dispatch", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Threading::ThreadPoolWorkQueue::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Threading::ThreadPoolWorkQueue::_cctor)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Threading::ThreadPoolWorkQueue*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Threading::ThreadPoolWorkQueue::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
