// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Runtime.Remoting.Identity
#include "System/Runtime/Remoting/Identity.hpp"
// Including type: System.Runtime.Remoting.Messaging.IMessageSink
#include "System/Runtime/Remoting/Messaging/IMessageSink.hpp"
// Including type: System.Runtime.Remoting.Contexts.DynamicPropertyCollection
#include "System/Runtime/Remoting/Contexts/DynamicPropertyCollection.hpp"
// Including type: System.Runtime.Remoting.ObjRef
#include "System/Runtime/Remoting/ObjRef.hpp"
// Including type: System.Type
#include "System/Type.hpp"
// Including type: System.Runtime.Remoting.Messaging.IMessage
#include "System/Runtime/Remoting/Messaging/IMessage.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: System.Runtime.Remoting.Identity..ctor
System::Runtime::Remoting::Identity* System::Runtime::Remoting::Identity::New_ctor(::Il2CppString* objectUri) {
  return THROW_UNLESS(il2cpp_utils::New<Identity*>(objectUri));
}
// Autogenerated method: System.Runtime.Remoting.Identity.CreateObjRef
System::Runtime::Remoting::ObjRef* System::Runtime::Remoting::Identity::CreateObjRef(System::Type* requestedType) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Runtime::Remoting::ObjRef*>(this, "CreateObjRef", requestedType));
}
// Autogenerated method: System.Runtime.Remoting.Identity.get_ChannelSink
System::Runtime::Remoting::Messaging::IMessageSink* System::Runtime::Remoting::Identity::get_ChannelSink() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Runtime::Remoting::Messaging::IMessageSink*>(this, "get_ChannelSink"));
}
// Autogenerated method: System.Runtime.Remoting.Identity.set_ChannelSink
void System::Runtime::Remoting::Identity::set_ChannelSink(System::Runtime::Remoting::Messaging::IMessageSink* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_ChannelSink", value));
}
// Autogenerated method: System.Runtime.Remoting.Identity.get_EnvoySink
System::Runtime::Remoting::Messaging::IMessageSink* System::Runtime::Remoting::Identity::get_EnvoySink() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Runtime::Remoting::Messaging::IMessageSink*>(this, "get_EnvoySink"));
}
// Autogenerated method: System.Runtime.Remoting.Identity.get_ObjectUri
::Il2CppString* System::Runtime::Remoting::Identity::get_ObjectUri() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppString*>(this, "get_ObjectUri"));
}
// Autogenerated method: System.Runtime.Remoting.Identity.set_ObjectUri
void System::Runtime::Remoting::Identity::set_ObjectUri(::Il2CppString* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_ObjectUri", value));
}
// Autogenerated method: System.Runtime.Remoting.Identity.get_IsConnected
bool System::Runtime::Remoting::Identity::get_IsConnected() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_IsConnected"));
}
// Autogenerated method: System.Runtime.Remoting.Identity.get_Disposed
bool System::Runtime::Remoting::Identity::get_Disposed() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_Disposed"));
}
// Autogenerated method: System.Runtime.Remoting.Identity.set_Disposed
void System::Runtime::Remoting::Identity::set_Disposed(bool value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_Disposed", value));
}
// Autogenerated method: System.Runtime.Remoting.Identity.get_ClientDynamicProperties
System::Runtime::Remoting::Contexts::DynamicPropertyCollection* System::Runtime::Remoting::Identity::get_ClientDynamicProperties() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Runtime::Remoting::Contexts::DynamicPropertyCollection*>(this, "get_ClientDynamicProperties"));
}
// Autogenerated method: System.Runtime.Remoting.Identity.get_HasServerDynamicSinks
bool System::Runtime::Remoting::Identity::get_HasServerDynamicSinks() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_HasServerDynamicSinks"));
}
// Autogenerated method: System.Runtime.Remoting.Identity.NotifyClientDynamicSinks
void System::Runtime::Remoting::Identity::NotifyClientDynamicSinks(bool start, System::Runtime::Remoting::Messaging::IMessage* req_msg, bool client_site, bool async) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "NotifyClientDynamicSinks", start, req_msg, client_site, async));
}
// Autogenerated method: System.Runtime.Remoting.Identity.NotifyServerDynamicSinks
void System::Runtime::Remoting::Identity::NotifyServerDynamicSinks(bool start, System::Runtime::Remoting::Messaging::IMessage* req_msg, bool client_site, bool async) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "NotifyServerDynamicSinks", start, req_msg, client_site, async));
}
