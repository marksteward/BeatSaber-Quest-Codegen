// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Runtime.Remoting.Messaging.HeaderHandler
#include "System/Runtime/Remoting/Messaging/HeaderHandler.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
// Including type: System.Runtime.Remoting.Messaging.Header
#include "System/Runtime/Remoting/Messaging/Header.hpp"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
// Including type: System.AsyncCallback
#include "System/AsyncCallback.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: System.Runtime.Remoting.Messaging.HeaderHandler..ctor
System::Runtime::Remoting::Messaging::HeaderHandler* System::Runtime::Remoting::Messaging::HeaderHandler::New_ctor(::Il2CppObject* object, System::IntPtr method) {
  return THROW_UNLESS(il2cpp_utils::New<HeaderHandler*>(object, method));
}
// Autogenerated method: System.Runtime.Remoting.Messaging.HeaderHandler.Invoke
::Il2CppObject* System::Runtime::Remoting::Messaging::HeaderHandler::Invoke(::Array<System::Runtime::Remoting::Messaging::Header*>* headers) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppObject*>(this, "Invoke", headers));
}
// Autogenerated method: System.Runtime.Remoting.Messaging.HeaderHandler.BeginInvoke
System::IAsyncResult* System::Runtime::Remoting::Messaging::HeaderHandler::BeginInvoke(::Array<System::Runtime::Remoting::Messaging::Header*>* headers, System::AsyncCallback* callback, ::Il2CppObject* object) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginInvoke", headers, callback, object));
}
// Autogenerated method: System.Runtime.Remoting.Messaging.HeaderHandler.EndInvoke
::Il2CppObject* System::Runtime::Remoting::Messaging::HeaderHandler::EndInvoke(System::IAsyncResult* result) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppObject*>(this, "EndInvoke", result));
}
