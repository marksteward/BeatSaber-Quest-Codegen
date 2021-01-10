// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Threading.CancellationToken
#include "System/Threading/CancellationToken.hpp"
// Including type: System.Threading.Tasks.TaskCreationOptions
#include "System/Threading/Tasks/TaskCreationOptions.hpp"
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
  // Forward declaring type: TaskScheduler
  class TaskScheduler;
  // Forward declaring type: Task
  class Task;
  // Forward declaring type: Task`1<TResult>
  template<typename TResult>
  class Task_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IList`1<T>
  template<typename T>
  class IList_1;
}
// Completed forward declares
// Type namespace: System.Threading.Tasks
namespace System::Threading::Tasks {
  // Size: 0x28
  // Autogenerated type: System.Threading.Tasks.TaskFactory
  // [] Offset: FFFFFFFF
  class TaskFactory : public ::Il2CppObject {
    public:
    // Nested type: System::Threading::Tasks::TaskFactory::CompleteOnInvokePromise
    class CompleteOnInvokePromise;
    // private System.Threading.CancellationToken m_defaultCancellationToken
    // Size: 0x8
    // Offset: 0x10
    System::Threading::CancellationToken m_defaultCancellationToken;
    // Field size check
    static_assert(sizeof(System::Threading::CancellationToken) == 0x8);
    // private System.Threading.Tasks.TaskScheduler m_defaultScheduler
    // Size: 0x8
    // Offset: 0x18
    System::Threading::Tasks::TaskScheduler* m_defaultScheduler;
    // Field size check
    static_assert(sizeof(System::Threading::Tasks::TaskScheduler*) == 0x8);
    // private System.Threading.Tasks.TaskCreationOptions m_defaultCreationOptions
    // Size: 0x4
    // Offset: 0x20
    System::Threading::Tasks::TaskCreationOptions m_defaultCreationOptions;
    // Field size check
    static_assert(sizeof(System::Threading::Tasks::TaskCreationOptions) == 0x4);
    // private System.Threading.Tasks.TaskContinuationOptions m_defaultContinuationOptions
    // Size: 0x4
    // Offset: 0x24
    System::Threading::Tasks::TaskContinuationOptions m_defaultContinuationOptions;
    // Field size check
    static_assert(sizeof(System::Threading::Tasks::TaskContinuationOptions) == 0x4);
    // Creating value type constructor for type: TaskFactory
    TaskFactory(System::Threading::CancellationToken m_defaultCancellationToken_ = {}, System::Threading::Tasks::TaskScheduler* m_defaultScheduler_ = {}, System::Threading::Tasks::TaskCreationOptions m_defaultCreationOptions_ = {}, System::Threading::Tasks::TaskContinuationOptions m_defaultContinuationOptions_ = {}) noexcept : m_defaultCancellationToken{m_defaultCancellationToken_}, m_defaultScheduler{m_defaultScheduler_}, m_defaultCreationOptions{m_defaultCreationOptions_}, m_defaultContinuationOptions{m_defaultContinuationOptions_} {}
    // public System.Void .ctor(System.Threading.CancellationToken cancellationToken, System.Threading.Tasks.TaskCreationOptions creationOptions, System.Threading.Tasks.TaskContinuationOptions continuationOptions, System.Threading.Tasks.TaskScheduler scheduler)
    // Offset: 0x1D188D8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TaskFactory* New_ctor(System::Threading::CancellationToken cancellationToken, System::Threading::Tasks::TaskCreationOptions creationOptions, System::Threading::Tasks::TaskContinuationOptions continuationOptions, System::Threading::Tasks::TaskScheduler* scheduler) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Threading::Tasks::TaskFactory::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TaskFactory*, creationType>(cancellationToken, creationOptions, continuationOptions, scheduler)));
    }
    // static System.Void CheckCreationOptions(System.Threading.Tasks.TaskCreationOptions creationOptions)
    // Offset: 0x1D18A5C
    static void CheckCreationOptions(System::Threading::Tasks::TaskCreationOptions creationOptions);
    // public System.Threading.Tasks.Task StartNew(System.Action action, System.Threading.CancellationToken cancellationToken, System.Threading.Tasks.TaskCreationOptions creationOptions, System.Threading.Tasks.TaskScheduler scheduler)
    // Offset: 0x1D18AE4
    System::Threading::Tasks::Task* StartNew(System::Action* action, System::Threading::CancellationToken cancellationToken, System::Threading::Tasks::TaskCreationOptions creationOptions, System::Threading::Tasks::TaskScheduler* scheduler);
    // static System.Void CheckFromAsyncOptions(System.Threading.Tasks.TaskCreationOptions creationOptions, System.Boolean hasBeginMethod)
    // Offset: 0x1D18B98
    static void CheckFromAsyncOptions(System::Threading::Tasks::TaskCreationOptions creationOptions, bool hasBeginMethod);
    // static System.Threading.Tasks.Task`1<System.Threading.Tasks.Task> CommonCWAnyLogic(System.Collections.Generic.IList`1<System.Threading.Tasks.Task> tasks)
    // Offset: 0x1D168C0
    static System::Threading::Tasks::Task_1<System::Threading::Tasks::Task*>* CommonCWAnyLogic(System::Collections::Generic::IList_1<System::Threading::Tasks::Task*>* tasks);
    // static System.Void CheckMultiTaskContinuationOptions(System.Threading.Tasks.TaskContinuationOptions continuationOptions)
    // Offset: 0x1D18950
    static void CheckMultiTaskContinuationOptions(System::Threading::Tasks::TaskContinuationOptions continuationOptions);
    // public System.Void .ctor()
    // Offset: 0x1D16D78
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TaskFactory* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Threading::Tasks::TaskFactory::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TaskFactory*, creationType>()));
    }
  }; // System.Threading.Tasks.TaskFactory
  static check_size<sizeof(TaskFactory), 36 + sizeof(System::Threading::Tasks::TaskContinuationOptions)> __System_Threading_Tasks_TaskFactorySizeCheck;
  static_assert(sizeof(TaskFactory) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(System::Threading::Tasks::TaskFactory*, "System.Threading.Tasks", "TaskFactory");
#pragma pack(pop)
