// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
// Including type: System.IOSelectorJob
#include "System/IOSelectorJob.hpp"
// Including type: System.IOAsyncCallback
#include "System/IOAsyncCallback.hpp"
// Including type: System.IOAsyncResult
#include "System/IOAsyncResult.hpp"
// Including type: System.Threading.ThreadAbortException
#include "System/Threading/ThreadAbortException.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: System.IOSelectorJob..ctor
System::IOSelectorJob* System::IOSelectorJob::New_ctor(System::IOOperation operation, System::IOAsyncCallback* callback, System::IOAsyncResult* state) {
  return THROW_UNLESS(il2cpp_utils::New<IOSelectorJob*>(operation, callback, state));
}
// Autogenerated method: System.IOSelectorJob.MarkDisposed
void System::IOSelectorJob::MarkDisposed() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "MarkDisposed"));
}
// Autogenerated method: System.IOSelectorJob.System.Threading.IThreadPoolWorkItem.ExecuteWorkItem
void System::IOSelectorJob::System_Threading_IThreadPoolWorkItem_ExecuteWorkItem() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "System.Threading.IThreadPoolWorkItem.ExecuteWorkItem"));
}
// Autogenerated method: System.IOSelectorJob.System.Threading.IThreadPoolWorkItem.MarkAborted
void System::IOSelectorJob::System_Threading_IThreadPoolWorkItem_MarkAborted(System::Threading::ThreadAbortException* tae) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "System.Threading.IThreadPoolWorkItem.MarkAborted", tae));
}
