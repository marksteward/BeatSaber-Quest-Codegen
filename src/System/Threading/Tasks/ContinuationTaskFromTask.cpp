// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Threading.Tasks.ContinuationTaskFromTask
#include "System/Threading/Tasks/ContinuationTaskFromTask.hpp"
// Including type: System.Delegate
#include "System/Delegate.hpp"
// Including type: System.Threading.Tasks.TaskCreationOptions
#include "System/Threading/Tasks/TaskCreationOptions.hpp"
// Including type: System.Threading.Tasks.InternalTaskOptions
#include "System/Threading/Tasks/InternalTaskOptions.hpp"
// Including type: System.Threading.StackCrawlMark
#include "System/Threading/StackCrawlMark.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: System.Threading.Tasks.ContinuationTaskFromTask..ctor
System::Threading::Tasks::ContinuationTaskFromTask* System::Threading::Tasks::ContinuationTaskFromTask::New_ctor(System::Threading::Tasks::Task* antecedent, System::Delegate* action, ::Il2CppObject* state, System::Threading::Tasks::TaskCreationOptions creationOptions, System::Threading::Tasks::InternalTaskOptions internalOptions, System::Threading::StackCrawlMark& stackMark) {
  return THROW_UNLESS(il2cpp_utils::New<ContinuationTaskFromTask*>(antecedent, action, state, creationOptions, internalOptions, stackMark));
}
// Autogenerated method: System.Threading.Tasks.ContinuationTaskFromTask.InnerInvoke
void System::Threading::Tasks::ContinuationTaskFromTask::InnerInvoke() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "InnerInvoke"));
}
