// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Runtime.Remoting.Messaging.CallContext
#include "System/Runtime/Remoting/Messaging/CallContext.hpp"
// Including type: System.Runtime.Remoting.Messaging.LogicalCallContext
#include "System/Runtime/Remoting/Messaging/LogicalCallContext.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: System.Runtime.Remoting.Messaging.CallContext.SetCurrentCallContext
::Il2CppObject* System::Runtime::Remoting::Messaging::CallContext::SetCurrentCallContext(System::Runtime::Remoting::Messaging::LogicalCallContext* ctx) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppObject*>("System.Runtime.Remoting.Messaging", "CallContext", "SetCurrentCallContext", ctx));
}
// Autogenerated method: System.Runtime.Remoting.Messaging.CallContext.SetLogicalCallContext
System::Runtime::Remoting::Messaging::LogicalCallContext* System::Runtime::Remoting::Messaging::CallContext::SetLogicalCallContext(System::Runtime::Remoting::Messaging::LogicalCallContext* callCtx) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Runtime::Remoting::Messaging::LogicalCallContext*>("System.Runtime.Remoting.Messaging", "CallContext", "SetLogicalCallContext", callCtx));
}
// Autogenerated method: System.Runtime.Remoting.Messaging.CallContext.LogicalGetData
::Il2CppObject* System::Runtime::Remoting::Messaging::CallContext::LogicalGetData(::Il2CppString* name) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppObject*>("System.Runtime.Remoting.Messaging", "CallContext", "LogicalGetData", name));
}
// Autogenerated method: System.Runtime.Remoting.Messaging.CallContext.IllogicalGetData
::Il2CppObject* System::Runtime::Remoting::Messaging::CallContext::IllogicalGetData(::Il2CppString* name) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppObject*>("System.Runtime.Remoting.Messaging", "CallContext", "IllogicalGetData", name));
}
// Autogenerated method: System.Runtime.Remoting.Messaging.CallContext.GetData
::Il2CppObject* System::Runtime::Remoting::Messaging::CallContext::GetData(::Il2CppString* name) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppObject*>("System.Runtime.Remoting.Messaging", "CallContext", "GetData", name));
}
// Autogenerated method: System.Runtime.Remoting.Messaging.CallContext.SetData
void System::Runtime::Remoting::Messaging::CallContext::SetData(::Il2CppString* name, ::Il2CppObject* data) {
  THROW_UNLESS(il2cpp_utils::RunMethod("System.Runtime.Remoting.Messaging", "CallContext", "SetData", name, data));
}
// Autogenerated method: System.Runtime.Remoting.Messaging.CallContext.LogicalSetData
void System::Runtime::Remoting::Messaging::CallContext::LogicalSetData(::Il2CppString* name, ::Il2CppObject* data) {
  THROW_UNLESS(il2cpp_utils::RunMethod("System.Runtime.Remoting.Messaging", "CallContext", "LogicalSetData", name, data));
}
// Autogenerated method: System.Runtime.Remoting.Messaging.CallContext..ctor
System::Runtime::Remoting::Messaging::CallContext* System::Runtime::Remoting::Messaging::CallContext::New_ctor() {
  return THROW_UNLESS(il2cpp_utils::New<CallContext*>());
}
