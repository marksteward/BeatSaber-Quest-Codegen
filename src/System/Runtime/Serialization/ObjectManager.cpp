// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Runtime.Serialization.ObjectManager
#include "System/Runtime/Serialization/ObjectManager.hpp"
// Including type: System.Runtime.Serialization.DeserializationEventHandler
#include "System/Runtime/Serialization/DeserializationEventHandler.hpp"
// Including type: System.Runtime.Serialization.SerializationEventHandler
#include "System/Runtime/Serialization/SerializationEventHandler.hpp"
// Including type: System.Runtime.Serialization.ObjectHolder
#include "System/Runtime/Serialization/ObjectHolder.hpp"
// Including type: System.Runtime.Serialization.ObjectHolderList
#include "System/Runtime/Serialization/ObjectHolderList.hpp"
// Including type: System.Runtime.Serialization.ISurrogateSelector
#include "System/Runtime/Serialization/ISurrogateSelector.hpp"
// Including type: System.Runtime.Serialization.FixupHolder
#include "System/Runtime/Serialization/FixupHolder.hpp"
// Including type: System.Reflection.FieldInfo
#include "System/Reflection/FieldInfo.hpp"
// Including type: System.Runtime.Serialization.SerializationInfo
#include "System/Runtime/Serialization/SerializationInfo.hpp"
// Including type: System.Reflection.MemberInfo
#include "System/Reflection/MemberInfo.hpp"
// Including type: System.Reflection.RuntimeConstructorInfo
#include "System/Reflection/RuntimeConstructorInfo.hpp"
// Including type: System.RuntimeType
#include "System/RuntimeType.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: System.Runtime.Serialization.ObjectManager..ctor
System::Runtime::Serialization::ObjectManager* System::Runtime::Serialization::ObjectManager::New_ctor(System::Runtime::Serialization::ISurrogateSelector* selector, System::Runtime::Serialization::StreamingContext context, bool checkSecurity, bool isCrossAppDomain) {
  return THROW_UNLESS(il2cpp_utils::New<ObjectManager*>(selector, context, checkSecurity, isCrossAppDomain));
}
// Autogenerated method: System.Runtime.Serialization.ObjectManager.CanCallGetType
bool System::Runtime::Serialization::ObjectManager::CanCallGetType(::Il2CppObject* obj) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "CanCallGetType", obj));
}
// Autogenerated method: System.Runtime.Serialization.ObjectManager.set_TopObject
void System::Runtime::Serialization::ObjectManager::set_TopObject(::Il2CppObject* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_TopObject", value));
}
// Autogenerated method: System.Runtime.Serialization.ObjectManager.get_TopObject
::Il2CppObject* System::Runtime::Serialization::ObjectManager::get_TopObject() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppObject*>(this, "get_TopObject"));
}
// Autogenerated method: System.Runtime.Serialization.ObjectManager.get_SpecialFixupObjects
System::Runtime::Serialization::ObjectHolderList* System::Runtime::Serialization::ObjectManager::get_SpecialFixupObjects() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Runtime::Serialization::ObjectHolderList*>(this, "get_SpecialFixupObjects"));
}
// Autogenerated method: System.Runtime.Serialization.ObjectManager.FindObjectHolder
System::Runtime::Serialization::ObjectHolder* System::Runtime::Serialization::ObjectManager::FindObjectHolder(int64_t objectID) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Runtime::Serialization::ObjectHolder*>(this, "FindObjectHolder", objectID));
}
// Autogenerated method: System.Runtime.Serialization.ObjectManager.FindOrCreateObjectHolder
System::Runtime::Serialization::ObjectHolder* System::Runtime::Serialization::ObjectManager::FindOrCreateObjectHolder(int64_t objectID) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Runtime::Serialization::ObjectHolder*>(this, "FindOrCreateObjectHolder", objectID));
}
// Autogenerated method: System.Runtime.Serialization.ObjectManager.AddObjectHolder
void System::Runtime::Serialization::ObjectManager::AddObjectHolder(System::Runtime::Serialization::ObjectHolder* holder) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "AddObjectHolder", holder));
}
// Autogenerated method: System.Runtime.Serialization.ObjectManager.GetCompletionInfo
bool System::Runtime::Serialization::ObjectManager::GetCompletionInfo(System::Runtime::Serialization::FixupHolder* fixup, System::Runtime::Serialization::ObjectHolder*& holder, ::Il2CppObject*& member, bool bThrowIfMissing) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "GetCompletionInfo", fixup, holder, member, bThrowIfMissing));
}
// Autogenerated method: System.Runtime.Serialization.ObjectManager.FixupSpecialObject
void System::Runtime::Serialization::ObjectManager::FixupSpecialObject(System::Runtime::Serialization::ObjectHolder* holder) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "FixupSpecialObject", holder));
}
// Autogenerated method: System.Runtime.Serialization.ObjectManager.ResolveObjectReference
bool System::Runtime::Serialization::ObjectManager::ResolveObjectReference(System::Runtime::Serialization::ObjectHolder* holder) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "ResolveObjectReference", holder));
}
// Autogenerated method: System.Runtime.Serialization.ObjectManager.DoValueTypeFixup
bool System::Runtime::Serialization::ObjectManager::DoValueTypeFixup(System::Reflection::FieldInfo* memberToFix, System::Runtime::Serialization::ObjectHolder* holder, ::Il2CppObject* value) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "DoValueTypeFixup", memberToFix, holder, value));
}
// Autogenerated method: System.Runtime.Serialization.ObjectManager.CompleteObject
void System::Runtime::Serialization::ObjectManager::CompleteObject(System::Runtime::Serialization::ObjectHolder* holder, bool bObjectFullyComplete) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "CompleteObject", holder, bObjectFullyComplete));
}
// Autogenerated method: System.Runtime.Serialization.ObjectManager.DoNewlyRegisteredObjectFixups
void System::Runtime::Serialization::ObjectManager::DoNewlyRegisteredObjectFixups(System::Runtime::Serialization::ObjectHolder* holder) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "DoNewlyRegisteredObjectFixups", holder));
}
// Autogenerated method: System.Runtime.Serialization.ObjectManager.GetObject
::Il2CppObject* System::Runtime::Serialization::ObjectManager::GetObject(int64_t objectID) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppObject*>(this, "GetObject", objectID));
}
// Autogenerated method: System.Runtime.Serialization.ObjectManager.RegisterString
void System::Runtime::Serialization::ObjectManager::RegisterString(::Il2CppString* obj, int64_t objectID, System::Runtime::Serialization::SerializationInfo* info, int64_t idOfContainingObj, System::Reflection::MemberInfo* member) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "RegisterString", obj, objectID, info, idOfContainingObj, member));
}
// Autogenerated method: System.Runtime.Serialization.ObjectManager.RegisterObject
void System::Runtime::Serialization::ObjectManager::RegisterObject(::Il2CppObject* obj, int64_t objectID, System::Runtime::Serialization::SerializationInfo* info, int64_t idOfContainingObj, System::Reflection::MemberInfo* member, ::Array<int>* arrayIndex) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "RegisterObject", obj, objectID, info, idOfContainingObj, member, arrayIndex));
}
// Autogenerated method: System.Runtime.Serialization.ObjectManager.CompleteISerializableObject
void System::Runtime::Serialization::ObjectManager::CompleteISerializableObject(::Il2CppObject* obj, System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "CompleteISerializableObject", obj, info, context));
}
// Autogenerated method: System.Runtime.Serialization.ObjectManager.GetConstructor
System::Reflection::RuntimeConstructorInfo* System::Runtime::Serialization::ObjectManager::GetConstructor(System::RuntimeType* t) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Reflection::RuntimeConstructorInfo*>("System.Runtime.Serialization", "ObjectManager", "GetConstructor", t));
}
// Autogenerated method: System.Runtime.Serialization.ObjectManager.DoFixups
void System::Runtime::Serialization::ObjectManager::DoFixups() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "DoFixups"));
}
// Autogenerated method: System.Runtime.Serialization.ObjectManager.RegisterFixup
void System::Runtime::Serialization::ObjectManager::RegisterFixup(System::Runtime::Serialization::FixupHolder* fixup, int64_t objectToBeFixed, int64_t objectRequired) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "RegisterFixup", fixup, objectToBeFixed, objectRequired));
}
// Autogenerated method: System.Runtime.Serialization.ObjectManager.RecordFixup
void System::Runtime::Serialization::ObjectManager::RecordFixup(int64_t objectToBeFixed, System::Reflection::MemberInfo* member, int64_t objectRequired) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "RecordFixup", objectToBeFixed, member, objectRequired));
}
// Autogenerated method: System.Runtime.Serialization.ObjectManager.RecordDelayedFixup
void System::Runtime::Serialization::ObjectManager::RecordDelayedFixup(int64_t objectToBeFixed, ::Il2CppString* memberName, int64_t objectRequired) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "RecordDelayedFixup", objectToBeFixed, memberName, objectRequired));
}
// Autogenerated method: System.Runtime.Serialization.ObjectManager.RecordArrayElementFixup
void System::Runtime::Serialization::ObjectManager::RecordArrayElementFixup(int64_t arrayToBeFixed, ::Array<int>* indices, int64_t objectRequired) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "RecordArrayElementFixup", arrayToBeFixed, indices, objectRequired));
}
// Autogenerated method: System.Runtime.Serialization.ObjectManager.RaiseDeserializationEvent
void System::Runtime::Serialization::ObjectManager::RaiseDeserializationEvent() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "RaiseDeserializationEvent"));
}
// Autogenerated method: System.Runtime.Serialization.ObjectManager.AddOnDeserialization
void System::Runtime::Serialization::ObjectManager::AddOnDeserialization(System::Runtime::Serialization::DeserializationEventHandler* handler) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "AddOnDeserialization", handler));
}
// Autogenerated method: System.Runtime.Serialization.ObjectManager.AddOnDeserialized
void System::Runtime::Serialization::ObjectManager::AddOnDeserialized(::Il2CppObject* obj) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "AddOnDeserialized", obj));
}
// Autogenerated method: System.Runtime.Serialization.ObjectManager.RaiseOnDeserializedEvent
void System::Runtime::Serialization::ObjectManager::RaiseOnDeserializedEvent(::Il2CppObject* obj) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "RaiseOnDeserializedEvent", obj));
}
// Autogenerated method: System.Runtime.Serialization.ObjectManager.RaiseOnDeserializingEvent
void System::Runtime::Serialization::ObjectManager::RaiseOnDeserializingEvent(::Il2CppObject* obj) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "RaiseOnDeserializingEvent", obj));
}
