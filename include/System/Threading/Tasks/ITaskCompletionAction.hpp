// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task
  class Task;
}
// Completed forward declares
// Type namespace: System.Threading.Tasks
namespace System::Threading::Tasks {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: System.Threading.Tasks.ITaskCompletionAction
  // [] Offset: FFFFFFFF
  class ITaskCompletionAction {
    public:
    // Creating value type constructor for type: ITaskCompletionAction
    ITaskCompletionAction() noexcept {}
    // public System.Void Invoke(System.Threading.Tasks.Task completingTask)
    // Offset: 0xFFFFFFFF
    void System_Threading_Tasks_ITaskCompletionAction_Invoke(System::Threading::Tasks::Task* completingTask);
  }; // System.Threading.Tasks.ITaskCompletionAction
}
#pragma pack(pop)
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Threading::Tasks::ITaskCompletionAction*, "System.Threading.Tasks", "ITaskCompletionAction");
