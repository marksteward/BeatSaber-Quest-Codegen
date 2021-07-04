// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Threading.Tasks.TaskScheduler
#include "System/Threading/Tasks/TaskScheduler.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: ParameterizedThreadStart
  class ParameterizedThreadStart;
}
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task
  class Task;
}
// Completed forward declares
// Type namespace: System.Threading.Tasks
namespace System::Threading::Tasks {
  // Size: 0x14
  #pragma pack(push, 1)
  // Autogenerated type: System.Threading.Tasks.ThreadPoolTaskScheduler
  class ThreadPoolTaskScheduler : public System::Threading::Tasks::TaskScheduler {
    public:
    // Creating value type constructor for type: ThreadPoolTaskScheduler
    ThreadPoolTaskScheduler() noexcept {}
    // Get static field: static private readonly System.Threading.ParameterizedThreadStart s_longRunningThreadWork
    static System::Threading::ParameterizedThreadStart* _get_s_longRunningThreadWork();
    // Set static field: static private readonly System.Threading.ParameterizedThreadStart s_longRunningThreadWork
    static void _set_s_longRunningThreadWork(System::Threading::ParameterizedThreadStart* value);
    // static private System.Void LongRunningThreadWork(System.Object obj)
    // Offset: 0x1890F5C
    static void LongRunningThreadWork(::Il2CppObject* obj);
    // System.Void .ctor()
    // Offset: 0x1890560
    // Implemented from: System.Threading.Tasks.TaskScheduler
    // Base method: System.Void TaskScheduler::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ThreadPoolTaskScheduler* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Threading::Tasks::ThreadPoolTaskScheduler::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ThreadPoolTaskScheduler*, creationType>()));
    }
    // protected internal override System.Void QueueTask(System.Threading.Tasks.Task task)
    // Offset: 0x1890FE4
    // Implemented from: System.Threading.Tasks.TaskScheduler
    // Base method: System.Void TaskScheduler::QueueTask(System.Threading.Tasks.Task task)
    void QueueTask(System::Threading::Tasks::Task* task);
    // protected override System.Boolean TryExecuteTaskInline(System.Threading.Tasks.Task task, System.Boolean taskWasPreviouslyQueued)
    // Offset: 0x189131C
    // Implemented from: System.Threading.Tasks.TaskScheduler
    // Base method: System.Boolean TaskScheduler::TryExecuteTaskInline(System.Threading.Tasks.Task task, System.Boolean taskWasPreviouslyQueued)
    bool TryExecuteTaskInline(System::Threading::Tasks::Task* task, bool taskWasPreviouslyQueued);
    // protected internal override System.Boolean TryDequeue(System.Threading.Tasks.Task task)
    // Offset: 0x189148C
    // Implemented from: System.Threading.Tasks.TaskScheduler
    // Base method: System.Boolean TaskScheduler::TryDequeue(System.Threading.Tasks.Task task)
    bool TryDequeue(System::Threading::Tasks::Task* task);
    // override System.Void NotifyWorkItemProgress()
    // Offset: 0x1891494
    // Implemented from: System.Threading.Tasks.TaskScheduler
    // Base method: System.Void TaskScheduler::NotifyWorkItemProgress()
    void NotifyWorkItemProgress();
    // override System.Boolean get_RequiresAtomicStartTransition()
    // Offset: 0x1891530
    // Implemented from: System.Threading.Tasks.TaskScheduler
    // Base method: System.Boolean TaskScheduler::get_RequiresAtomicStartTransition()
    bool get_RequiresAtomicStartTransition();
    // static private System.Void .cctor()
    // Offset: 0x1891538
    // Implemented from: System.Threading.Tasks.TaskScheduler
    // Base method: System.Void TaskScheduler::.cctor()
    static void _cctor();
  }; // System.Threading.Tasks.ThreadPoolTaskScheduler
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(System::Threading::Tasks::ThreadPoolTaskScheduler*, "System.Threading.Tasks", "ThreadPoolTaskScheduler");
// Writing MetadataGetter for method: System::Threading::Tasks::ThreadPoolTaskScheduler::LongRunningThreadWork
// Il2CppName: LongRunningThreadWork
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Threading::Tasks::ThreadPoolTaskScheduler::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Threading::Tasks::ThreadPoolTaskScheduler::QueueTask
// Il2CppName: QueueTask
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Threading::Tasks::ThreadPoolTaskScheduler::TryExecuteTaskInline
// Il2CppName: TryExecuteTaskInline
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Threading::Tasks::ThreadPoolTaskScheduler::TryDequeue
// Il2CppName: TryDequeue
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Threading::Tasks::ThreadPoolTaskScheduler::NotifyWorkItemProgress
// Il2CppName: NotifyWorkItemProgress
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Threading::Tasks::ThreadPoolTaskScheduler::get_RequiresAtomicStartTransition
// Il2CppName: get_RequiresAtomicStartTransition
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Threading::Tasks::ThreadPoolTaskScheduler::_cctor
// Il2CppName: .cctor
// Cannot perform method pointer template specialization from operators!
