// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Runtime.Remoting.Messaging.MonoMethodMessage
#include "System/Runtime/Remoting/Messaging/MonoMethodMessage.hpp"
// Including type: System.Reflection.MonoMethod
#include "System/Reflection/MonoMethod.hpp"
// Including type: System.Runtime.Remoting.Messaging.LogicalCallContext
#include "System/Runtime/Remoting/Messaging/LogicalCallContext.hpp"
// Including type: System.Exception
#include "System/Exception.hpp"
// Including type: System.Runtime.Remoting.Messaging.AsyncResult
#include "System/Runtime/Remoting/Messaging/AsyncResult.hpp"
// Including type: System.Runtime.Remoting.Messaging.MCMDictionary
#include "System/Runtime/Remoting/Messaging/MCMDictionary.hpp"
// Including type: System.Type
#include "System/Type.hpp"
// Including type: System.Runtime.Remoting.Identity
#include "System/Runtime/Remoting/Identity.hpp"
// Including type: System.Reflection.MethodBase
#include "System/Reflection/MethodBase.hpp"
// Including type: System.Reflection.MethodInfo
#include "System/Reflection/MethodInfo.hpp"
// Including type: System.Collections.IDictionary
#include "System/Collections/IDictionary.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static System.String CallContextKey
::Il2CppString* System::Runtime::Remoting::Messaging::MonoMethodMessage::_get_CallContextKey() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<::Il2CppString*>("System.Runtime.Remoting.Messaging", "MonoMethodMessage", "CallContextKey"));
}
// Autogenerated static field setter
// Set static field: static System.String CallContextKey
void System::Runtime::Remoting::Messaging::MonoMethodMessage::_set_CallContextKey(::Il2CppString* value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System.Runtime.Remoting.Messaging", "MonoMethodMessage", "CallContextKey", value));
}
// Autogenerated static field getter
// Get static field: static System.String UriKey
::Il2CppString* System::Runtime::Remoting::Messaging::MonoMethodMessage::_get_UriKey() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<::Il2CppString*>("System.Runtime.Remoting.Messaging", "MonoMethodMessage", "UriKey"));
}
// Autogenerated static field setter
// Set static field: static System.String UriKey
void System::Runtime::Remoting::Messaging::MonoMethodMessage::_set_UriKey(::Il2CppString* value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System.Runtime.Remoting.Messaging", "MonoMethodMessage", "UriKey", value));
}
// Autogenerated method: System.Runtime.Remoting.Messaging.MonoMethodMessage.InitMessage
void System::Runtime::Remoting::Messaging::MonoMethodMessage::InitMessage(System::Reflection::MonoMethod* method, ::Array<::Il2CppObject*>* out_args) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "InitMessage", method, out_args));
}
// Autogenerated method: System.Runtime.Remoting.Messaging.MonoMethodMessage..ctor
System::Runtime::Remoting::Messaging::MonoMethodMessage* System::Runtime::Remoting::Messaging::MonoMethodMessage::New_ctor(System::Reflection::MethodBase* method, ::Array<::Il2CppObject*>* out_args) {
  return THROW_UNLESS(il2cpp_utils::New<MonoMethodMessage*>(method, out_args));
}
// Autogenerated method: System.Runtime.Remoting.Messaging.MonoMethodMessage..ctor
System::Runtime::Remoting::Messaging::MonoMethodMessage* System::Runtime::Remoting::Messaging::MonoMethodMessage::New_ctor(System::Reflection::MethodInfo* minfo, ::Array<::Il2CppObject*>* in_args, ::Array<::Il2CppObject*>* out_args) {
  return THROW_UNLESS(il2cpp_utils::New<MonoMethodMessage*>(minfo, in_args, out_args));
}
// Autogenerated method: System.Runtime.Remoting.Messaging.MonoMethodMessage.GetMethodInfo
System::Reflection::MethodInfo* System::Runtime::Remoting::Messaging::MonoMethodMessage::GetMethodInfo(System::Type* type, ::Il2CppString* methodName) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Reflection::MethodInfo*>("System.Runtime.Remoting.Messaging", "MonoMethodMessage", "GetMethodInfo", type, methodName));
}
// Autogenerated method: System.Runtime.Remoting.Messaging.MonoMethodMessage..ctor
System::Runtime::Remoting::Messaging::MonoMethodMessage* System::Runtime::Remoting::Messaging::MonoMethodMessage::New_ctor(System::Type* type, ::Il2CppString* methodName, ::Array<::Il2CppObject*>* in_args) {
  return THROW_UNLESS(il2cpp_utils::New<MonoMethodMessage*>(type, methodName, in_args));
}
// Autogenerated method: System.Runtime.Remoting.Messaging.MonoMethodMessage.set_LogicalCallContext
void System::Runtime::Remoting::Messaging::MonoMethodMessage::set_LogicalCallContext(System::Runtime::Remoting::Messaging::LogicalCallContext* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_LogicalCallContext", value));
}
// Autogenerated method: System.Runtime.Remoting.Messaging.MonoMethodMessage.get_OutArgCount
int System::Runtime::Remoting::Messaging::MonoMethodMessage::get_OutArgCount() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "get_OutArgCount"));
}
// Autogenerated method: System.Runtime.Remoting.Messaging.MonoMethodMessage.get_AsyncResult
System::Runtime::Remoting::Messaging::AsyncResult* System::Runtime::Remoting::Messaging::MonoMethodMessage::get_AsyncResult() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Runtime::Remoting::Messaging::AsyncResult*>(this, "get_AsyncResult"));
}
// Autogenerated method: System.Runtime.Remoting.Messaging.MonoMethodMessage.get_CallType
System::Runtime::Remoting::Messaging::CallType System::Runtime::Remoting::Messaging::MonoMethodMessage::get_CallType() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Runtime::Remoting::Messaging::CallType>(this, "get_CallType"));
}
// Autogenerated method: System.Runtime.Remoting.Messaging.MonoMethodMessage.NeedsOutProcessing
bool System::Runtime::Remoting::Messaging::MonoMethodMessage::NeedsOutProcessing(int& outCount) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "NeedsOutProcessing", outCount));
}
// Autogenerated method: System.Runtime.Remoting.Messaging.MonoMethodMessage..cctor
void System::Runtime::Remoting::Messaging::MonoMethodMessage::_cctor() {
  THROW_UNLESS(il2cpp_utils::RunMethod("System.Runtime.Remoting.Messaging", "MonoMethodMessage", ".cctor"));
}
// Autogenerated method: System.Runtime.Remoting.Messaging.MonoMethodMessage.get_Properties
System::Collections::IDictionary* System::Runtime::Remoting::Messaging::MonoMethodMessage::get_Properties() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Collections::IDictionary*>(this, "get_Properties"));
}
// Autogenerated method: System.Runtime.Remoting.Messaging.MonoMethodMessage.get_ArgCount
int System::Runtime::Remoting::Messaging::MonoMethodMessage::get_ArgCount() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "get_ArgCount"));
}
// Autogenerated method: System.Runtime.Remoting.Messaging.MonoMethodMessage.get_Args
::Array<::Il2CppObject*>* System::Runtime::Remoting::Messaging::MonoMethodMessage::get_Args() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Array<::Il2CppObject*>*>(this, "get_Args"));
}
// Autogenerated method: System.Runtime.Remoting.Messaging.MonoMethodMessage.get_LogicalCallContext
System::Runtime::Remoting::Messaging::LogicalCallContext* System::Runtime::Remoting::Messaging::MonoMethodMessage::get_LogicalCallContext() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Runtime::Remoting::Messaging::LogicalCallContext*>(this, "get_LogicalCallContext"));
}
// Autogenerated method: System.Runtime.Remoting.Messaging.MonoMethodMessage.get_MethodBase
System::Reflection::MethodBase* System::Runtime::Remoting::Messaging::MonoMethodMessage::get_MethodBase() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Reflection::MethodBase*>(this, "get_MethodBase"));
}
// Autogenerated method: System.Runtime.Remoting.Messaging.MonoMethodMessage.get_MethodName
::Il2CppString* System::Runtime::Remoting::Messaging::MonoMethodMessage::get_MethodName() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppString*>(this, "get_MethodName"));
}
// Autogenerated method: System.Runtime.Remoting.Messaging.MonoMethodMessage.get_MethodSignature
::Il2CppObject* System::Runtime::Remoting::Messaging::MonoMethodMessage::get_MethodSignature() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppObject*>(this, "get_MethodSignature"));
}
// Autogenerated method: System.Runtime.Remoting.Messaging.MonoMethodMessage.get_TypeName
::Il2CppString* System::Runtime::Remoting::Messaging::MonoMethodMessage::get_TypeName() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppString*>(this, "get_TypeName"));
}
// Autogenerated method: System.Runtime.Remoting.Messaging.MonoMethodMessage.get_Uri
::Il2CppString* System::Runtime::Remoting::Messaging::MonoMethodMessage::get_Uri() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppString*>(this, "get_Uri"));
}
::Il2CppString* System::Runtime::Remoting::Messaging::MonoMethodMessage::System_Runtime_Remoting_Messaging_IInternalMessage_get_Uri() {
  return System::Runtime::Remoting::Messaging::MonoMethodMessage::get_Uri();
}
// Autogenerated method: System.Runtime.Remoting.Messaging.MonoMethodMessage.set_Uri
void System::Runtime::Remoting::Messaging::MonoMethodMessage::set_Uri(::Il2CppString* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_Uri", value));
}
void System::Runtime::Remoting::Messaging::MonoMethodMessage::System_Runtime_Remoting_Messaging_IInternalMessage_set_Uri(::Il2CppString* value) {
  System::Runtime::Remoting::Messaging::MonoMethodMessage::set_Uri(value);
}
// Autogenerated method: System.Runtime.Remoting.Messaging.MonoMethodMessage.GetArg
::Il2CppObject* System::Runtime::Remoting::Messaging::MonoMethodMessage::GetArg(int arg_num) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppObject*>(this, "GetArg", arg_num));
}
// Autogenerated method: System.Runtime.Remoting.Messaging.MonoMethodMessage.get_Exception
System::Exception* System::Runtime::Remoting::Messaging::MonoMethodMessage::get_Exception() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Exception*>(this, "get_Exception"));
}
// Autogenerated method: System.Runtime.Remoting.Messaging.MonoMethodMessage.get_OutArgs
::Array<::Il2CppObject*>* System::Runtime::Remoting::Messaging::MonoMethodMessage::get_OutArgs() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Array<::Il2CppObject*>*>(this, "get_OutArgs"));
}
// Autogenerated method: System.Runtime.Remoting.Messaging.MonoMethodMessage.get_ReturnValue
::Il2CppObject* System::Runtime::Remoting::Messaging::MonoMethodMessage::get_ReturnValue() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppObject*>(this, "get_ReturnValue"));
}
// Autogenerated method: System.Runtime.Remoting.Messaging.MonoMethodMessage.System.Runtime.Remoting.Messaging.IInternalMessage.get_TargetIdentity
System::Runtime::Remoting::Identity* System::Runtime::Remoting::Messaging::MonoMethodMessage::System_Runtime_Remoting_Messaging_IInternalMessage_get_TargetIdentity() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Runtime::Remoting::Identity*>(this, "System.Runtime.Remoting.Messaging.IInternalMessage.get_TargetIdentity"));
}
// Autogenerated method: System.Runtime.Remoting.Messaging.MonoMethodMessage.System.Runtime.Remoting.Messaging.IInternalMessage.set_TargetIdentity
void System::Runtime::Remoting::Messaging::MonoMethodMessage::System_Runtime_Remoting_Messaging_IInternalMessage_set_TargetIdentity(System::Runtime::Remoting::Identity* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "System.Runtime.Remoting.Messaging.IInternalMessage.set_TargetIdentity", value));
}
