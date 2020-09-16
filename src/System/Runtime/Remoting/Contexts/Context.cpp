// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Runtime.Remoting.Contexts.Context
#include "System/Runtime/Remoting/Contexts/Context.hpp"
// Including type: System.Runtime.Remoting.Messaging.IMessageSink
#include "System/Runtime/Remoting/Messaging/IMessageSink.hpp"
// Including type: System.Collections.Generic.List`1
#include "System/Collections/Generic/List_1.hpp"
// Including type: System.Runtime.Remoting.Contexts.IContextProperty
#include "System/Runtime/Remoting/Contexts/IContextProperty.hpp"
// Including type: System.LocalDataStoreHolder
#include "System/LocalDataStoreHolder.hpp"
// Including type: System.Runtime.Remoting.Contexts.DynamicPropertyCollection
#include "System/Runtime/Remoting/Contexts/DynamicPropertyCollection.hpp"
// Including type: System.Runtime.Remoting.Contexts.ContextCallbackObject
#include "System/Runtime/Remoting/Contexts/ContextCallbackObject.hpp"
// Including type: System.LocalDataStoreMgr
#include "System/LocalDataStoreMgr.hpp"
// Including type: System.Runtime.Remoting.Contexts.IDynamicProperty
#include "System/Runtime/Remoting/Contexts/IDynamicProperty.hpp"
// Including type: System.ContextBoundObject
#include "System/ContextBoundObject.hpp"
// Including type: System.Runtime.Remoting.Messaging.IMessage
#include "System/Runtime/Remoting/Messaging/IMessage.hpp"
// Including type: System.MarshalByRefObject
#include "System/MarshalByRefObject.hpp"
// Including type: System.Runtime.Remoting.Activation.IConstructionCallMessage
#include "System/Runtime/Remoting/Activation/IConstructionCallMessage.hpp"
// Including type: System.Runtime.Remoting.Contexts.CrossContextDelegate
#include "System/Runtime/Remoting/Contexts/CrossContextDelegate.hpp"
// Including type: System.LocalDataStore
#include "System/LocalDataStore.hpp"
// Including type: System.LocalDataStoreSlot
#include "System/LocalDataStoreSlot.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static private System.Object[] local_slots
::Array<::Il2CppObject*>* System::Runtime::Remoting::Contexts::Context::_get_local_slots() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<::Array<::Il2CppObject*>*>("System.Runtime.Remoting.Contexts", "Context", "local_slots"));
}
// Autogenerated static field setter
// Set static field: static private System.Object[] local_slots
void System::Runtime::Remoting::Contexts::Context::_set_local_slots(::Array<::Il2CppObject*>* value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System.Runtime.Remoting.Contexts", "Context", "local_slots", value));
}
// Autogenerated static field getter
// Get static field: static private System.Runtime.Remoting.Messaging.IMessageSink default_server_context_sink
System::Runtime::Remoting::Messaging::IMessageSink* System::Runtime::Remoting::Contexts::Context::_get_default_server_context_sink() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<System::Runtime::Remoting::Messaging::IMessageSink*>("System.Runtime.Remoting.Contexts", "Context", "default_server_context_sink"));
}
// Autogenerated static field setter
// Set static field: static private System.Runtime.Remoting.Messaging.IMessageSink default_server_context_sink
void System::Runtime::Remoting::Contexts::Context::_set_default_server_context_sink(System::Runtime::Remoting::Messaging::IMessageSink* value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System.Runtime.Remoting.Contexts", "Context", "default_server_context_sink", value));
}
// Autogenerated static field getter
// Get static field: static private System.Int32 global_count
int System::Runtime::Remoting::Contexts::Context::_get_global_count() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<int>("System.Runtime.Remoting.Contexts", "Context", "global_count"));
}
// Autogenerated static field setter
// Set static field: static private System.Int32 global_count
void System::Runtime::Remoting::Contexts::Context::_set_global_count(int value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System.Runtime.Remoting.Contexts", "Context", "global_count", value));
}
// Autogenerated static field getter
// Get static field: static private System.LocalDataStoreMgr _localDataStoreMgr
System::LocalDataStoreMgr* System::Runtime::Remoting::Contexts::Context::_get__localDataStoreMgr() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<System::LocalDataStoreMgr*>("System.Runtime.Remoting.Contexts", "Context", "_localDataStoreMgr"));
}
// Autogenerated static field setter
// Set static field: static private System.LocalDataStoreMgr _localDataStoreMgr
void System::Runtime::Remoting::Contexts::Context::_set__localDataStoreMgr(System::LocalDataStoreMgr* value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System.Runtime.Remoting.Contexts", "Context", "_localDataStoreMgr", value));
}
// Autogenerated static field getter
// Get static field: static private System.Runtime.Remoting.Contexts.DynamicPropertyCollection global_dynamic_properties
System::Runtime::Remoting::Contexts::DynamicPropertyCollection* System::Runtime::Remoting::Contexts::Context::_get_global_dynamic_properties() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<System::Runtime::Remoting::Contexts::DynamicPropertyCollection*>("System.Runtime.Remoting.Contexts", "Context", "global_dynamic_properties"));
}
// Autogenerated static field setter
// Set static field: static private System.Runtime.Remoting.Contexts.DynamicPropertyCollection global_dynamic_properties
void System::Runtime::Remoting::Contexts::Context::_set_global_dynamic_properties(System::Runtime::Remoting::Contexts::DynamicPropertyCollection* value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System.Runtime.Remoting.Contexts", "Context", "global_dynamic_properties", value));
}
// Autogenerated method: System.Runtime.Remoting.Contexts.Context.RegisterContext
void System::Runtime::Remoting::Contexts::Context::RegisterContext(System::Runtime::Remoting::Contexts::Context* ctx) {
  THROW_UNLESS(il2cpp_utils::RunMethod("System.Runtime.Remoting.Contexts", "Context", "RegisterContext", ctx));
}
// Autogenerated method: System.Runtime.Remoting.Contexts.Context.ReleaseContext
void System::Runtime::Remoting::Contexts::Context::ReleaseContext(System::Runtime::Remoting::Contexts::Context* ctx) {
  THROW_UNLESS(il2cpp_utils::RunMethod("System.Runtime.Remoting.Contexts", "Context", "ReleaseContext", ctx));
}
// Autogenerated method: System.Runtime.Remoting.Contexts.Context.get_DefaultContext
System::Runtime::Remoting::Contexts::Context* System::Runtime::Remoting::Contexts::Context::get_DefaultContext() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Runtime::Remoting::Contexts::Context*>("System.Runtime.Remoting.Contexts", "Context", "get_DefaultContext"));
}
// Autogenerated method: System.Runtime.Remoting.Contexts.Context.get_ContextID
int System::Runtime::Remoting::Contexts::Context::get_ContextID() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "get_ContextID"));
}
// Autogenerated method: System.Runtime.Remoting.Contexts.Context.get_ContextProperties
::Array<System::Runtime::Remoting::Contexts::IContextProperty*>* System::Runtime::Remoting::Contexts::Context::get_ContextProperties() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Array<System::Runtime::Remoting::Contexts::IContextProperty*>*>(this, "get_ContextProperties"));
}
// Autogenerated method: System.Runtime.Remoting.Contexts.Context.get_IsDefaultContext
bool System::Runtime::Remoting::Contexts::Context::get_IsDefaultContext() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_IsDefaultContext"));
}
// Autogenerated method: System.Runtime.Remoting.Contexts.Context.get_NeedsContextSink
bool System::Runtime::Remoting::Contexts::Context::get_NeedsContextSink() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_NeedsContextSink"));
}
// Autogenerated method: System.Runtime.Remoting.Contexts.Context.RegisterDynamicProperty
bool System::Runtime::Remoting::Contexts::Context::RegisterDynamicProperty(System::Runtime::Remoting::Contexts::IDynamicProperty* prop, System::ContextBoundObject* obj, System::Runtime::Remoting::Contexts::Context* ctx) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("System.Runtime.Remoting.Contexts", "Context", "RegisterDynamicProperty", prop, obj, ctx));
}
// Autogenerated method: System.Runtime.Remoting.Contexts.Context.UnregisterDynamicProperty
bool System::Runtime::Remoting::Contexts::Context::UnregisterDynamicProperty(::Il2CppString* name, System::ContextBoundObject* obj, System::Runtime::Remoting::Contexts::Context* ctx) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("System.Runtime.Remoting.Contexts", "Context", "UnregisterDynamicProperty", name, obj, ctx));
}
// Autogenerated method: System.Runtime.Remoting.Contexts.Context.GetDynamicPropertyCollection
System::Runtime::Remoting::Contexts::DynamicPropertyCollection* System::Runtime::Remoting::Contexts::Context::GetDynamicPropertyCollection(System::ContextBoundObject* obj, System::Runtime::Remoting::Contexts::Context* ctx) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Runtime::Remoting::Contexts::DynamicPropertyCollection*>("System.Runtime.Remoting.Contexts", "Context", "GetDynamicPropertyCollection", obj, ctx));
}
// Autogenerated method: System.Runtime.Remoting.Contexts.Context.NotifyGlobalDynamicSinks
void System::Runtime::Remoting::Contexts::Context::NotifyGlobalDynamicSinks(bool start, System::Runtime::Remoting::Messaging::IMessage* req_msg, bool client_site, bool async) {
  THROW_UNLESS(il2cpp_utils::RunMethod("System.Runtime.Remoting.Contexts", "Context", "NotifyGlobalDynamicSinks", start, req_msg, client_site, async));
}
// Autogenerated method: System.Runtime.Remoting.Contexts.Context.get_HasGlobalDynamicSinks
bool System::Runtime::Remoting::Contexts::Context::get_HasGlobalDynamicSinks() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("System.Runtime.Remoting.Contexts", "Context", "get_HasGlobalDynamicSinks"));
}
// Autogenerated method: System.Runtime.Remoting.Contexts.Context.NotifyDynamicSinks
void System::Runtime::Remoting::Contexts::Context::NotifyDynamicSinks(bool start, System::Runtime::Remoting::Messaging::IMessage* req_msg, bool client_site, bool async) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "NotifyDynamicSinks", start, req_msg, client_site, async));
}
// Autogenerated method: System.Runtime.Remoting.Contexts.Context.get_HasDynamicSinks
bool System::Runtime::Remoting::Contexts::Context::get_HasDynamicSinks() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_HasDynamicSinks"));
}
// Autogenerated method: System.Runtime.Remoting.Contexts.Context.get_HasExitSinks
bool System::Runtime::Remoting::Contexts::Context::get_HasExitSinks() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_HasExitSinks"));
}
// Autogenerated method: System.Runtime.Remoting.Contexts.Context.GetProperty
System::Runtime::Remoting::Contexts::IContextProperty* System::Runtime::Remoting::Contexts::Context::GetProperty(::Il2CppString* name) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Runtime::Remoting::Contexts::IContextProperty*>(this, "GetProperty", name));
}
// Autogenerated method: System.Runtime.Remoting.Contexts.Context.SetProperty
void System::Runtime::Remoting::Contexts::Context::SetProperty(System::Runtime::Remoting::Contexts::IContextProperty* prop) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SetProperty", prop));
}
// Autogenerated method: System.Runtime.Remoting.Contexts.Context.Freeze
void System::Runtime::Remoting::Contexts::Context::Freeze() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Freeze"));
}
// Autogenerated method: System.Runtime.Remoting.Contexts.Context.GetServerContextSinkChain
System::Runtime::Remoting::Messaging::IMessageSink* System::Runtime::Remoting::Contexts::Context::GetServerContextSinkChain() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Runtime::Remoting::Messaging::IMessageSink*>(this, "GetServerContextSinkChain"));
}
// Autogenerated method: System.Runtime.Remoting.Contexts.Context.GetClientContextSinkChain
System::Runtime::Remoting::Messaging::IMessageSink* System::Runtime::Remoting::Contexts::Context::GetClientContextSinkChain() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Runtime::Remoting::Messaging::IMessageSink*>(this, "GetClientContextSinkChain"));
}
// Autogenerated method: System.Runtime.Remoting.Contexts.Context.CreateServerObjectSinkChain
System::Runtime::Remoting::Messaging::IMessageSink* System::Runtime::Remoting::Contexts::Context::CreateServerObjectSinkChain(System::MarshalByRefObject* obj, bool forceInternalExecute) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Runtime::Remoting::Messaging::IMessageSink*>(this, "CreateServerObjectSinkChain", obj, forceInternalExecute));
}
// Autogenerated method: System.Runtime.Remoting.Contexts.Context.CreateEnvoySink
System::Runtime::Remoting::Messaging::IMessageSink* System::Runtime::Remoting::Contexts::Context::CreateEnvoySink(System::MarshalByRefObject* serverObject) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Runtime::Remoting::Messaging::IMessageSink*>(this, "CreateEnvoySink", serverObject));
}
// Autogenerated method: System.Runtime.Remoting.Contexts.Context.SwitchToContext
System::Runtime::Remoting::Contexts::Context* System::Runtime::Remoting::Contexts::Context::SwitchToContext(System::Runtime::Remoting::Contexts::Context* newContext) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Runtime::Remoting::Contexts::Context*>("System.Runtime.Remoting.Contexts", "Context", "SwitchToContext", newContext));
}
// Autogenerated method: System.Runtime.Remoting.Contexts.Context.CreateNewContext
System::Runtime::Remoting::Contexts::Context* System::Runtime::Remoting::Contexts::Context::CreateNewContext(System::Runtime::Remoting::Activation::IConstructionCallMessage* msg) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Runtime::Remoting::Contexts::Context*>("System.Runtime.Remoting.Contexts", "Context", "CreateNewContext", msg));
}
// Autogenerated method: System.Runtime.Remoting.Contexts.Context.DoCallBack
void System::Runtime::Remoting::Contexts::Context::DoCallBack(System::Runtime::Remoting::Contexts::CrossContextDelegate* deleg) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "DoCallBack", deleg));
}
// Autogenerated method: System.Runtime.Remoting.Contexts.Context.get_MyLocalStore
System::LocalDataStore* System::Runtime::Remoting::Contexts::Context::get_MyLocalStore() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::LocalDataStore*>(this, "get_MyLocalStore"));
}
// Autogenerated method: System.Runtime.Remoting.Contexts.Context.AllocateDataSlot
System::LocalDataStoreSlot* System::Runtime::Remoting::Contexts::Context::AllocateDataSlot() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::LocalDataStoreSlot*>("System.Runtime.Remoting.Contexts", "Context", "AllocateDataSlot"));
}
// Autogenerated method: System.Runtime.Remoting.Contexts.Context.AllocateNamedDataSlot
System::LocalDataStoreSlot* System::Runtime::Remoting::Contexts::Context::AllocateNamedDataSlot(::Il2CppString* name) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::LocalDataStoreSlot*>("System.Runtime.Remoting.Contexts", "Context", "AllocateNamedDataSlot", name));
}
// Autogenerated method: System.Runtime.Remoting.Contexts.Context.FreeNamedDataSlot
void System::Runtime::Remoting::Contexts::Context::FreeNamedDataSlot(::Il2CppString* name) {
  THROW_UNLESS(il2cpp_utils::RunMethod("System.Runtime.Remoting.Contexts", "Context", "FreeNamedDataSlot", name));
}
// Autogenerated method: System.Runtime.Remoting.Contexts.Context.GetNamedDataSlot
System::LocalDataStoreSlot* System::Runtime::Remoting::Contexts::Context::GetNamedDataSlot(::Il2CppString* name) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::LocalDataStoreSlot*>("System.Runtime.Remoting.Contexts", "Context", "GetNamedDataSlot", name));
}
// Autogenerated method: System.Runtime.Remoting.Contexts.Context.GetData
::Il2CppObject* System::Runtime::Remoting::Contexts::Context::GetData(System::LocalDataStoreSlot* slot) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppObject*>("System.Runtime.Remoting.Contexts", "Context", "GetData", slot));
}
// Autogenerated method: System.Runtime.Remoting.Contexts.Context.SetData
void System::Runtime::Remoting::Contexts::Context::SetData(System::LocalDataStoreSlot* slot, ::Il2CppObject* data) {
  THROW_UNLESS(il2cpp_utils::RunMethod("System.Runtime.Remoting.Contexts", "Context", "SetData", slot, data));
}
// Autogenerated method: System.Runtime.Remoting.Contexts.Context..cctor
void System::Runtime::Remoting::Contexts::Context::_cctor() {
  THROW_UNLESS(il2cpp_utils::RunMethod("System.Runtime.Remoting.Contexts", "Context", ".cctor"));
}
// Autogenerated method: System.Runtime.Remoting.Contexts.Context..ctor
System::Runtime::Remoting::Contexts::Context* System::Runtime::Remoting::Contexts::Context::New_ctor() {
  return THROW_UNLESS(il2cpp_utils::New<Context*>());
}
// Autogenerated method: System.Runtime.Remoting.Contexts.Context.Finalize
void System::Runtime::Remoting::Contexts::Context::Finalize() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Finalize"));
}
// Autogenerated method: System.Runtime.Remoting.Contexts.Context.ToString
::Il2CppString* System::Runtime::Remoting::Contexts::Context::ToString() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppString*>(this, "ToString"));
}
