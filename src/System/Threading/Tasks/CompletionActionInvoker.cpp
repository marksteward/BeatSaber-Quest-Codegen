// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
// Including type: System.Threading.Tasks.CompletionActionInvoker
#include "System/Threading/Tasks/CompletionActionInvoker.hpp"
// Including type: System.Threading.Tasks.ITaskCompletionAction
#include "System/Threading/Tasks/ITaskCompletionAction.hpp"
// Including type: System.Threading.Tasks.Task
#include "System/Threading/Tasks/Task.hpp"
// Including type: System.Threading.ThreadAbortException
#include "System/Threading/ThreadAbortException.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: System.Threading.Tasks.CompletionActionInvoker..ctor
System::Threading::Tasks::CompletionActionInvoker* System::Threading::Tasks::CompletionActionInvoker::New_ctor(System::Threading::Tasks::ITaskCompletionAction* action, System::Threading::Tasks::Task* completingTask) {
  return THROW_UNLESS(il2cpp_utils::New<CompletionActionInvoker*>(action, completingTask));
}
// Autogenerated method: System.Threading.Tasks.CompletionActionInvoker.ExecuteWorkItem
void System::Threading::Tasks::CompletionActionInvoker::ExecuteWorkItem() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "ExecuteWorkItem"));
}
void System::Threading::Tasks::CompletionActionInvoker::System_Threading_IThreadPoolWorkItem_ExecuteWorkItem() {
  System::Threading::Tasks::CompletionActionInvoker::ExecuteWorkItem();
}
// Autogenerated method: System.Threading.Tasks.CompletionActionInvoker.MarkAborted
void System::Threading::Tasks::CompletionActionInvoker::MarkAborted(System::Threading::ThreadAbortException* tae) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "MarkAborted", tae));
}
void System::Threading::Tasks::CompletionActionInvoker::System_Threading_IThreadPoolWorkItem_MarkAborted(System::Threading::ThreadAbortException* tae) {
  System::Threading::Tasks::CompletionActionInvoker::MarkAborted(tae);
}
