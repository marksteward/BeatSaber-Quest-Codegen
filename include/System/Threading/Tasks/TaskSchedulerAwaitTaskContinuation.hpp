// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Threading.Tasks.AwaitTaskContinuation
#include "System/Threading/Tasks/AwaitTaskContinuation.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: TaskScheduler
  class TaskScheduler;
  // Forward declaring type: Task
  class Task;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Completed forward declares
// Type namespace: System.Threading.Tasks
namespace System::Threading::Tasks {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: System.Threading.Tasks.TaskSchedulerAwaitTaskContinuation
  class TaskSchedulerAwaitTaskContinuation : public System::Threading::Tasks::AwaitTaskContinuation {
    public:
    // Nested type: System::Threading::Tasks::TaskSchedulerAwaitTaskContinuation::$$c
    class $$c;
    // private readonly System.Threading.Tasks.TaskScheduler m_scheduler
    // Size: 0x8
    // Offset: 0x20
    System::Threading::Tasks::TaskScheduler* m_scheduler;
    // Field size check
    static_assert(sizeof(System::Threading::Tasks::TaskScheduler*) == 0x8);
    // Creating value type constructor for type: TaskSchedulerAwaitTaskContinuation
    TaskSchedulerAwaitTaskContinuation(System::Threading::Tasks::TaskScheduler* m_scheduler_ = {}) noexcept : m_scheduler{m_scheduler_} {}
    // Creating conversion operator: operator System::Threading::Tasks::TaskScheduler*
    constexpr operator System::Threading::Tasks::TaskScheduler*() const noexcept {
      return m_scheduler;
    }
    // System.Void .ctor(System.Threading.Tasks.TaskScheduler scheduler, System.Action action, System.Boolean flowExecutionContext, ref System.Threading.StackCrawlMark stackMark)
    // Offset: 0x18905CC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TaskSchedulerAwaitTaskContinuation* New_ctor(System::Threading::Tasks::TaskScheduler* scheduler, System::Action* action, bool flowExecutionContext, System::Threading::StackCrawlMark& stackMark) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Threading::Tasks::TaskSchedulerAwaitTaskContinuation::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TaskSchedulerAwaitTaskContinuation*, creationType>(scheduler, action, flowExecutionContext, stackMark)));
    }
    // override System.Void Run(System.Threading.Tasks.Task ignored, System.Boolean canInlineContinuationTask)
    // Offset: 0x1890608
    // Implemented from: System.Threading.Tasks.AwaitTaskContinuation
    // Base method: System.Void AwaitTaskContinuation::Run(System.Threading.Tasks.Task ignored, System.Boolean canInlineContinuationTask)
    void Run(System::Threading::Tasks::Task* ignored, bool canInlineContinuationTask);
  }; // System.Threading.Tasks.TaskSchedulerAwaitTaskContinuation
  #pragma pack(pop)
  static check_size<sizeof(TaskSchedulerAwaitTaskContinuation), 32 + sizeof(System::Threading::Tasks::TaskScheduler*)> __System_Threading_Tasks_TaskSchedulerAwaitTaskContinuationSizeCheck;
  static_assert(sizeof(TaskSchedulerAwaitTaskContinuation) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(System::Threading::Tasks::TaskSchedulerAwaitTaskContinuation*, "System.Threading.Tasks", "TaskSchedulerAwaitTaskContinuation");
// Writing MetadataGetter for method: System::Threading::Tasks::TaskSchedulerAwaitTaskContinuation::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Threading::Tasks::TaskSchedulerAwaitTaskContinuation::Run
// Il2CppName: Run
// Cannot perform method pointer template specialization from operators!
