// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Threading.Tasks.TaskContinuation
#include "System/Threading/Tasks/TaskContinuation.hpp"
// Including type: System.Threading.Tasks.TaskContinuationOptions
#include "System/Threading/Tasks/TaskContinuationOptions.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task
  class Task;
  // Forward declaring type: TaskScheduler
  class TaskScheduler;
}
// Completed forward declares
// Type namespace: System.Threading.Tasks
namespace System::Threading::Tasks {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: System.Threading.Tasks.StandardTaskContinuation
  class StandardTaskContinuation : public System::Threading::Tasks::TaskContinuation {
    public:
    // readonly System.Threading.Tasks.Task m_task
    // Size: 0x8
    // Offset: 0x10
    System::Threading::Tasks::Task* m_task;
    // Field size check
    static_assert(sizeof(System::Threading::Tasks::Task*) == 0x8);
    // readonly System.Threading.Tasks.TaskContinuationOptions m_options
    // Size: 0x4
    // Offset: 0x18
    System::Threading::Tasks::TaskContinuationOptions m_options;
    // Field size check
    static_assert(sizeof(System::Threading::Tasks::TaskContinuationOptions) == 0x4);
    // Padding between fields: m_options and: m_taskScheduler
    char __padding1[0x4] = {};
    // private readonly System.Threading.Tasks.TaskScheduler m_taskScheduler
    // Size: 0x8
    // Offset: 0x20
    System::Threading::Tasks::TaskScheduler* m_taskScheduler;
    // Field size check
    static_assert(sizeof(System::Threading::Tasks::TaskScheduler*) == 0x8);
    // Creating value type constructor for type: StandardTaskContinuation
    StandardTaskContinuation(System::Threading::Tasks::Task* m_task_ = {}, System::Threading::Tasks::TaskContinuationOptions m_options_ = {}, System::Threading::Tasks::TaskScheduler* m_taskScheduler_ = {}) noexcept : m_task{m_task_}, m_options{m_options_}, m_taskScheduler{m_taskScheduler_} {}
    // System.Void .ctor(System.Threading.Tasks.Task task, System.Threading.Tasks.TaskContinuationOptions options, System.Threading.Tasks.TaskScheduler scheduler)
    // Offset: 0x1705A6C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static StandardTaskContinuation* New_ctor(System::Threading::Tasks::Task* task, System::Threading::Tasks::TaskContinuationOptions options, System::Threading::Tasks::TaskScheduler* scheduler) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Threading::Tasks::StandardTaskContinuation::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<StandardTaskContinuation*, creationType>(task, options, scheduler)));
    }
    // override System.Void Run(System.Threading.Tasks.Task completedTask, System.Boolean bCanInlineContinuationTask)
    // Offset: 0x1705D04
    // Implemented from: System.Threading.Tasks.TaskContinuation
    // Base method: System.Void TaskContinuation::Run(System.Threading.Tasks.Task completedTask, System.Boolean bCanInlineContinuationTask)
    void Run(System::Threading::Tasks::Task* completedTask, bool bCanInlineContinuationTask);
  }; // System.Threading.Tasks.StandardTaskContinuation
  #pragma pack(pop)
  static check_size<sizeof(StandardTaskContinuation), 32 + sizeof(System::Threading::Tasks::TaskScheduler*)> __System_Threading_Tasks_StandardTaskContinuationSizeCheck;
  static_assert(sizeof(StandardTaskContinuation) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(System::Threading::Tasks::StandardTaskContinuation*, "System.Threading.Tasks", "StandardTaskContinuation");
