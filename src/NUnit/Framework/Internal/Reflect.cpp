// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: NUnit.Framework.Internal.Reflect
#include "NUnit/Framework/Internal/Reflect.hpp"
// Including type: NUnit.Framework.Internal.Reflect/BaseTypesFirstComparer
#include "NUnit/Framework/Internal/Reflect_BaseTypesFirstComparer.hpp"
// Including type: NUnit.Framework.Internal.Reflect/<>c__DisplayClass2
#include "NUnit/Framework/Internal/Reflect_--c__DisplayClass2.hpp"
// Including type: System.Type
#include "System/Type.hpp"
// Including type: System.Func`2
#include "System/Func_2.hpp"
// Including type: System.Func`1
#include "System/Func_1.hpp"
// Including type: System.Func`3
#include "System/Func_3.hpp"
// Including type: System.Reflection.MethodInfo
#include "System/Reflection/MethodInfo.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static private readonly System.Reflection.BindingFlags AllMembers
System::Reflection::BindingFlags NUnit::Framework::Internal::Reflect::_get_AllMembers() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("NUnit::Framework::Internal").WithContext("Reflect").WithContext("_get_AllMembers");
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<System::Reflection::BindingFlags>("NUnit.Framework.Internal", "Reflect", "AllMembers"));
}
// Autogenerated static field setter
// Set static field: static private readonly System.Reflection.BindingFlags AllMembers
void NUnit::Framework::Internal::Reflect::_set_AllMembers(System::Reflection::BindingFlags value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("NUnit::Framework::Internal").WithContext("Reflect").WithContext("_set_AllMembers");
  THROW_UNLESS(il2cpp_utils::SetFieldValue("NUnit.Framework.Internal", "Reflect", "AllMembers", value));
}
// Autogenerated static field getter
// Get static field: static private readonly System.Type[] EmptyTypes
::Array<System::Type*>* NUnit::Framework::Internal::Reflect::_get_EmptyTypes() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("NUnit::Framework::Internal").WithContext("Reflect").WithContext("_get_EmptyTypes");
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<::Array<System::Type*>*>("NUnit.Framework.Internal", "Reflect", "EmptyTypes"));
}
// Autogenerated static field setter
// Set static field: static private readonly System.Type[] EmptyTypes
void NUnit::Framework::Internal::Reflect::_set_EmptyTypes(::Array<System::Type*>* value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("NUnit::Framework::Internal").WithContext("Reflect").WithContext("_set_EmptyTypes");
  THROW_UNLESS(il2cpp_utils::SetFieldValue("NUnit.Framework.Internal", "Reflect", "EmptyTypes", value));
}
// [CompilerGeneratedAttribute] Offset: 0xDB34DC
// Autogenerated static field getter
// Get static field: static private System.Func`2<System.Func`1<System.Object>,System.Object> <MethodCallWrapper>k__BackingField
System::Func_2<System::Func_1<::Il2CppObject*>*, ::Il2CppObject*>* NUnit::Framework::Internal::Reflect::_get_$MethodCallWrapper$k__BackingField() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("NUnit::Framework::Internal").WithContext("Reflect").WithContext("_get_$MethodCallWrapper$k__BackingField");
  return THROW_UNLESS((il2cpp_utils::GetFieldValue<System::Func_2<System::Func_1<::Il2CppObject*>*, ::Il2CppObject*>*>("NUnit.Framework.Internal", "Reflect", "<MethodCallWrapper>k__BackingField")));
}
// Autogenerated static field setter
// Set static field: static private System.Func`2<System.Func`1<System.Object>,System.Object> <MethodCallWrapper>k__BackingField
void NUnit::Framework::Internal::Reflect::_set_$MethodCallWrapper$k__BackingField(System::Func_2<System::Func_1<::Il2CppObject*>*, ::Il2CppObject*>* value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("NUnit::Framework::Internal").WithContext("Reflect").WithContext("_set_$MethodCallWrapper$k__BackingField");
  THROW_UNLESS(il2cpp_utils::SetFieldValue("NUnit.Framework.Internal", "Reflect", "<MethodCallWrapper>k__BackingField", value));
}
// [CompilerGeneratedAttribute] Offset: 0xDB34EC
// Autogenerated static field getter
// Get static field: static private System.Func`3<System.Type,System.Object[],System.Object> <ConstructorCallWrapper>k__BackingField
System::Func_3<System::Type*, ::Array<::Il2CppObject*>*, ::Il2CppObject*>* NUnit::Framework::Internal::Reflect::_get_$ConstructorCallWrapper$k__BackingField() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("NUnit::Framework::Internal").WithContext("Reflect").WithContext("_get_$ConstructorCallWrapper$k__BackingField");
  return THROW_UNLESS((il2cpp_utils::GetFieldValue<System::Func_3<System::Type*, ::Array<::Il2CppObject*>*, ::Il2CppObject*>*>("NUnit.Framework.Internal", "Reflect", "<ConstructorCallWrapper>k__BackingField")));
}
// Autogenerated static field setter
// Set static field: static private System.Func`3<System.Type,System.Object[],System.Object> <ConstructorCallWrapper>k__BackingField
void NUnit::Framework::Internal::Reflect::_set_$ConstructorCallWrapper$k__BackingField(System::Func_3<System::Type*, ::Array<::Il2CppObject*>*, ::Il2CppObject*>* value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("NUnit::Framework::Internal").WithContext("Reflect").WithContext("_set_$ConstructorCallWrapper$k__BackingField");
  THROW_UNLESS(il2cpp_utils::SetFieldValue("NUnit.Framework.Internal", "Reflect", "<ConstructorCallWrapper>k__BackingField", value));
}
// Autogenerated method: NUnit.Framework.Internal.Reflect.GetMethodsWithAttribute
::Array<System::Reflection::MethodInfo*>* NUnit::Framework::Internal::Reflect::GetMethodsWithAttribute(System::Type* fixtureType, System::Type* attributeType, bool inherit) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("NUnit::Framework::Internal").WithContext("Reflect").WithContext("GetMethodsWithAttribute");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("NUnit.Framework.Internal", "Reflect", "GetMethodsWithAttribute", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(fixtureType, attributeType, inherit)));
  return ::il2cpp_utils::RunMethodThrow<::Array<System::Reflection::MethodInfo*>*, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, fixtureType, attributeType, inherit);
}
// Autogenerated method: NUnit.Framework.Internal.Reflect.HasMethodWithAttribute
bool NUnit::Framework::Internal::Reflect::HasMethodWithAttribute(System::Type* fixtureType, System::Type* attributeType) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("NUnit::Framework::Internal").WithContext("Reflect").WithContext("HasMethodWithAttribute");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("NUnit.Framework.Internal", "Reflect", "HasMethodWithAttribute", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(fixtureType, attributeType)));
  return ::il2cpp_utils::RunMethodThrow<bool, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, fixtureType, attributeType);
}
// Autogenerated method: NUnit.Framework.Internal.Reflect.Construct
::Il2CppObject* NUnit::Framework::Internal::Reflect::Construct(System::Type* type) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("NUnit::Framework::Internal").WithContext("Reflect").WithContext("Construct");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("NUnit.Framework.Internal", "Reflect", "Construct", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(type)));
  return ::il2cpp_utils::RunMethodThrow<::Il2CppObject*, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, type);
}
// Autogenerated method: NUnit.Framework.Internal.Reflect.Construct
::Il2CppObject* NUnit::Framework::Internal::Reflect::Construct(System::Type* type, ::Array<::Il2CppObject*>* arguments) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("NUnit::Framework::Internal").WithContext("Reflect").WithContext("Construct");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("NUnit.Framework.Internal", "Reflect", "Construct", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(type, arguments)));
  return ::il2cpp_utils::RunMethodThrow<::Il2CppObject*, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, type, arguments);
}
// Autogenerated method: NUnit.Framework.Internal.Reflect.GetTypeArray
::Array<System::Type*>* NUnit::Framework::Internal::Reflect::GetTypeArray(::Array<::Il2CppObject*>* objects) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("NUnit::Framework::Internal").WithContext("Reflect").WithContext("GetTypeArray");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("NUnit.Framework.Internal", "Reflect", "GetTypeArray", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(objects)));
  return ::il2cpp_utils::RunMethodThrow<::Array<System::Type*>*, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, objects);
}
// Autogenerated method: NUnit.Framework.Internal.Reflect.InvokeMethod
::Il2CppObject* NUnit::Framework::Internal::Reflect::InvokeMethod(System::Reflection::MethodInfo* method, ::Il2CppObject* fixture) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("NUnit::Framework::Internal").WithContext("Reflect").WithContext("InvokeMethod");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("NUnit.Framework.Internal", "Reflect", "InvokeMethod", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(method, fixture)));
  return ::il2cpp_utils::RunMethodThrow<::Il2CppObject*, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, method, fixture);
}
// Autogenerated method: NUnit.Framework.Internal.Reflect.InvokeMethod
::Il2CppObject* NUnit::Framework::Internal::Reflect::InvokeMethod(System::Reflection::MethodInfo* method, ::Il2CppObject* fixture, ::Array<::Il2CppObject*>* args) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("NUnit::Framework::Internal").WithContext("Reflect").WithContext("InvokeMethod");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("NUnit.Framework.Internal", "Reflect", "InvokeMethod", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(method, fixture, args)));
  return ::il2cpp_utils::RunMethodThrow<::Il2CppObject*, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, method, fixture, args);
}
// Creating initializer_list -> params proxy for: System.Object InvokeMethod(System.Reflection.MethodInfo method, System.Object fixture, params System.Object[] args)
::Il2CppObject* NUnit::Framework::Internal::Reflect::InvokeMethod(System::Reflection::MethodInfo* method, ::Il2CppObject* fixture, std::initializer_list<::Il2CppObject*> args) {
  return NUnit::Framework::Internal::Reflect::InvokeMethod(method, fixture, ::Array<::Il2CppObject*>::New(args));
}
// Autogenerated method: NUnit.Framework.Internal.Reflect.get_MethodCallWrapper
System::Func_2<System::Func_1<::Il2CppObject*>*, ::Il2CppObject*>* NUnit::Framework::Internal::Reflect::get_MethodCallWrapper() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("NUnit::Framework::Internal").WithContext("Reflect").WithContext("get_MethodCallWrapper");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("NUnit.Framework.Internal", "Reflect", "get_MethodCallWrapper", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<System::Func_2<System::Func_1<::Il2CppObject*>*, ::Il2CppObject*>*, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method);
}
// Autogenerated method: NUnit.Framework.Internal.Reflect.get_ConstructorCallWrapper
System::Func_3<System::Type*, ::Array<::Il2CppObject*>*, ::Il2CppObject*>* NUnit::Framework::Internal::Reflect::get_ConstructorCallWrapper() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("NUnit::Framework::Internal").WithContext("Reflect").WithContext("get_ConstructorCallWrapper");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("NUnit.Framework.Internal", "Reflect", "get_ConstructorCallWrapper", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<System::Func_3<System::Type*, ::Array<::Il2CppObject*>*, ::Il2CppObject*>*, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method);
}
// Autogenerated method: NUnit.Framework.Internal.Reflect..cctor
void NUnit::Framework::Internal::Reflect::_cctor() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("NUnit::Framework::Internal").WithContext("Reflect").WithContext(".cctor");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("NUnit.Framework.Internal", "Reflect", ".cctor", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method);
}
