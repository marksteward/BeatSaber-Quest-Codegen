// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Threading.ParameterizedThreadStart
#include "System/Threading/ParameterizedThreadStart.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
// Including type: System.AsyncCallback
#include "System/AsyncCallback.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: System.Threading.ParameterizedThreadStart..ctor
System::Threading::ParameterizedThreadStart* System::Threading::ParameterizedThreadStart::New_ctor(::Il2CppObject* object, System::IntPtr method) {
  return THROW_UNLESS(il2cpp_utils::New<ParameterizedThreadStart*>(object, method));
}
// Autogenerated method: System.Threading.ParameterizedThreadStart.Invoke
void System::Threading::ParameterizedThreadStart::Invoke(::Il2CppObject* obj) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Invoke", obj));
}
// Autogenerated method: System.Threading.ParameterizedThreadStart.BeginInvoke
System::IAsyncResult* System::Threading::ParameterizedThreadStart::BeginInvoke(::Il2CppObject* obj, System::AsyncCallback* callback, ::Il2CppObject* object) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginInvoke", obj, callback, object));
}
// Autogenerated method: System.Threading.ParameterizedThreadStart.EndInvoke
void System::Threading::ParameterizedThreadStart::EndInvoke(System::IAsyncResult* result) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "EndInvoke", result));
}
