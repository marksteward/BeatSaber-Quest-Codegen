// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Threading.OSSpecificSynchronizationContext/InvocationEntryDelegate
#include "System/Threading/OSSpecificSynchronizationContext_InvocationEntryDelegate.hpp"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
// Including type: System.AsyncCallback
#include "System/AsyncCallback.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: System.Threading.OSSpecificSynchronizationContext/InvocationEntryDelegate..ctor
System::Threading::OSSpecificSynchronizationContext::InvocationEntryDelegate* System::Threading::OSSpecificSynchronizationContext::InvocationEntryDelegate::New_ctor(::Il2CppObject* object, System::IntPtr method) {
  return THROW_UNLESS(il2cpp_utils::New<OSSpecificSynchronizationContext::InvocationEntryDelegate*>(object, method));
}
// Autogenerated method: System.Threading.OSSpecificSynchronizationContext/InvocationEntryDelegate.Invoke
void System::Threading::OSSpecificSynchronizationContext::InvocationEntryDelegate::Invoke(System::IntPtr arg) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Invoke", arg));
}
// Autogenerated method: System.Threading.OSSpecificSynchronizationContext/InvocationEntryDelegate.BeginInvoke
System::IAsyncResult* System::Threading::OSSpecificSynchronizationContext::InvocationEntryDelegate::BeginInvoke(System::IntPtr arg, System::AsyncCallback* callback, ::Il2CppObject* object) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginInvoke", arg, callback, object));
}
// Autogenerated method: System.Threading.OSSpecificSynchronizationContext/InvocationEntryDelegate.EndInvoke
void System::Threading::OSSpecificSynchronizationContext::InvocationEntryDelegate::EndInvoke(System::IAsyncResult* result) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "EndInvoke", result));
}
