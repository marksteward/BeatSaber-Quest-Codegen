// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Threading.Tasks.Task
#include "System/Threading/Tasks/Task.hpp"
// Including type: System.Threading.Tasks.Task`1
#include "System/Threading/Tasks/Task_1.hpp"
// Including type: System.Threading.Tasks.VoidTaskResult
#include "System/Threading/Tasks/VoidTaskResult.hpp"
// Including type: System.Threading.Tasks.ITaskCompletionAction
#include "System/Threading/Tasks/ITaskCompletionAction.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.Threading.Tasks
namespace System::Threading::Tasks {
  // WARNING Size may be invalid!
  // Autogenerated type: System.Threading.Tasks.Task/WhenAllPromise
  class Task::WhenAllPromise : public System::Threading::Tasks::Task_1<System::Threading::Tasks::VoidTaskResult>/*, public System::Threading::Tasks::ITaskCompletionAction*/ {
    public:
    // private readonly System.Threading.Tasks.Task[] m_tasks
    // Size: 0x8
    // Offset: 0x58
    ::Array<System::Threading::Tasks::Task*>* m_tasks;
    // Field size check
    static_assert(sizeof(::Array<System::Threading::Tasks::Task*>*) == 0x8);
    // private System.Int32 m_count
    // Size: 0x4
    // Offset: 0x60
    int m_count;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: WhenAllPromise
    WhenAllPromise(::Array<System::Threading::Tasks::Task*>* m_tasks_ = {}, int m_count_ = {}) noexcept : m_tasks{m_tasks_}, m_count{m_count_} {}
    // Creating interface conversion operator: operator System::Threading::Tasks::ITaskCompletionAction
    operator System::Threading::Tasks::ITaskCompletionAction() noexcept {
      return *reinterpret_cast<System::Threading::Tasks::ITaskCompletionAction*>(this);
    }
    // System.Void .ctor(System.Threading.Tasks.Task[] tasks)
    // Offset: 0x188D880
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Task::WhenAllPromise* New_ctor(::Array<System::Threading::Tasks::Task*>* tasks) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Threading::Tasks::Task::WhenAllPromise::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Task::WhenAllPromise*, creationType>(tasks)));
    }
    // public System.Void Invoke(System.Threading.Tasks.Task completedTask)
    // Offset: 0x188DA10
    void Invoke(System::Threading::Tasks::Task* completedTask);
    // override System.Boolean get_ShouldNotifyDebuggerOfWaitCompletion()
    // Offset: 0x188DD14
    // Implemented from: System.Threading.Tasks.Task
    // Base method: System.Boolean Task::get_ShouldNotifyDebuggerOfWaitCompletion()
    bool get_ShouldNotifyDebuggerOfWaitCompletion();
  }; // System.Threading.Tasks.Task/WhenAllPromise
  // WARNING Not writing size check since size may be invalid!
}
DEFINE_IL2CPP_ARG_TYPE(System::Threading::Tasks::Task::WhenAllPromise*, "System.Threading.Tasks", "Task/WhenAllPromise");
// Writing MetadataGetter for method: System::Threading::Tasks::Task::WhenAllPromise::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Threading::Tasks::Task::WhenAllPromise::Invoke
// Il2CppName: Invoke
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Threading::Tasks::Task::WhenAllPromise::get_ShouldNotifyDebuggerOfWaitCompletion
// Il2CppName: get_ShouldNotifyDebuggerOfWaitCompletion
// Cannot perform method pointer template specialization from operators!
