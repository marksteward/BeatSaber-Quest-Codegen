// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.TypeAnalyzer
#include "Zenject/TypeAnalyzer.hpp"
// Including type: Zenject.TypeAnalyzer/<>c__DisplayClass23_0
#include "Zenject/TypeAnalyzer_--c__DisplayClass23_0.hpp"
// Including type: System.Collections.Generic.Dictionary`2
#include "System/Collections/Generic/Dictionary_2.hpp"
// Including type: System.Type
#include "System/Type.hpp"
// Including type: Zenject.InjectTypeInfo
#include "Zenject/InjectTypeInfo.hpp"
// Including type: System.String
#include "System/String.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static private System.Collections.Generic.Dictionary`2<System.Type,Zenject.InjectTypeInfo> _typeInfo
System::Collections::Generic::Dictionary_2<System::Type*, Zenject::InjectTypeInfo*>* Zenject::TypeAnalyzer::_get__typeInfo() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Zenject").WithContext("TypeAnalyzer").WithContext("_get__typeInfo");
  return THROW_UNLESS((il2cpp_utils::GetFieldValue<System::Collections::Generic::Dictionary_2<System::Type*, Zenject::InjectTypeInfo*>*>("Zenject", "TypeAnalyzer", "_typeInfo")));
}
// Autogenerated static field setter
// Set static field: static private System.Collections.Generic.Dictionary`2<System.Type,Zenject.InjectTypeInfo> _typeInfo
void Zenject::TypeAnalyzer::_set__typeInfo(System::Collections::Generic::Dictionary_2<System::Type*, Zenject::InjectTypeInfo*>* value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Zenject").WithContext("TypeAnalyzer").WithContext("_set__typeInfo");
  THROW_UNLESS(il2cpp_utils::SetFieldValue("Zenject", "TypeAnalyzer", "_typeInfo", value));
}
// Autogenerated static field getter
// Get static field: static private System.Collections.Generic.Dictionary`2<System.Type,System.Boolean> _allowDuringValidation
System::Collections::Generic::Dictionary_2<System::Type*, bool>* Zenject::TypeAnalyzer::_get__allowDuringValidation() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Zenject").WithContext("TypeAnalyzer").WithContext("_get__allowDuringValidation");
  return THROW_UNLESS((il2cpp_utils::GetFieldValue<System::Collections::Generic::Dictionary_2<System::Type*, bool>*>("Zenject", "TypeAnalyzer", "_allowDuringValidation")));
}
// Autogenerated static field setter
// Set static field: static private System.Collections.Generic.Dictionary`2<System.Type,System.Boolean> _allowDuringValidation
void Zenject::TypeAnalyzer::_set__allowDuringValidation(System::Collections::Generic::Dictionary_2<System::Type*, bool>* value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Zenject").WithContext("TypeAnalyzer").WithContext("_set__allowDuringValidation");
  THROW_UNLESS(il2cpp_utils::SetFieldValue("Zenject", "TypeAnalyzer", "_allowDuringValidation", value));
}
// Autogenerated static field getter
// Get static field: static public System.String ReflectionBakingGetInjectInfoMethodName
::Il2CppString* Zenject::TypeAnalyzer::_get_ReflectionBakingGetInjectInfoMethodName() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Zenject").WithContext("TypeAnalyzer").WithContext("_get_ReflectionBakingGetInjectInfoMethodName");
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<::Il2CppString*>("Zenject", "TypeAnalyzer", "ReflectionBakingGetInjectInfoMethodName"));
}
// Autogenerated static field setter
// Set static field: static public System.String ReflectionBakingGetInjectInfoMethodName
void Zenject::TypeAnalyzer::_set_ReflectionBakingGetInjectInfoMethodName(::Il2CppString* value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Zenject").WithContext("TypeAnalyzer").WithContext("_set_ReflectionBakingGetInjectInfoMethodName");
  THROW_UNLESS(il2cpp_utils::SetFieldValue("Zenject", "TypeAnalyzer", "ReflectionBakingGetInjectInfoMethodName", value));
}
// Autogenerated static field getter
// Get static field: static public System.String ReflectionBakingFactoryMethodName
::Il2CppString* Zenject::TypeAnalyzer::_get_ReflectionBakingFactoryMethodName() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Zenject").WithContext("TypeAnalyzer").WithContext("_get_ReflectionBakingFactoryMethodName");
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<::Il2CppString*>("Zenject", "TypeAnalyzer", "ReflectionBakingFactoryMethodName"));
}
// Autogenerated static field setter
// Set static field: static public System.String ReflectionBakingFactoryMethodName
void Zenject::TypeAnalyzer::_set_ReflectionBakingFactoryMethodName(::Il2CppString* value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Zenject").WithContext("TypeAnalyzer").WithContext("_set_ReflectionBakingFactoryMethodName");
  THROW_UNLESS(il2cpp_utils::SetFieldValue("Zenject", "TypeAnalyzer", "ReflectionBakingFactoryMethodName", value));
}
// Autogenerated static field getter
// Get static field: static public System.String ReflectionBakingInjectMethodPrefix
::Il2CppString* Zenject::TypeAnalyzer::_get_ReflectionBakingInjectMethodPrefix() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Zenject").WithContext("TypeAnalyzer").WithContext("_get_ReflectionBakingInjectMethodPrefix");
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<::Il2CppString*>("Zenject", "TypeAnalyzer", "ReflectionBakingInjectMethodPrefix"));
}
// Autogenerated static field setter
// Set static field: static public System.String ReflectionBakingInjectMethodPrefix
void Zenject::TypeAnalyzer::_set_ReflectionBakingInjectMethodPrefix(::Il2CppString* value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Zenject").WithContext("TypeAnalyzer").WithContext("_set_ReflectionBakingInjectMethodPrefix");
  THROW_UNLESS(il2cpp_utils::SetFieldValue("Zenject", "TypeAnalyzer", "ReflectionBakingInjectMethodPrefix", value));
}
// Autogenerated static field getter
// Get static field: static public System.String ReflectionBakingFieldSetterPrefix
::Il2CppString* Zenject::TypeAnalyzer::_get_ReflectionBakingFieldSetterPrefix() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Zenject").WithContext("TypeAnalyzer").WithContext("_get_ReflectionBakingFieldSetterPrefix");
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<::Il2CppString*>("Zenject", "TypeAnalyzer", "ReflectionBakingFieldSetterPrefix"));
}
// Autogenerated static field setter
// Set static field: static public System.String ReflectionBakingFieldSetterPrefix
void Zenject::TypeAnalyzer::_set_ReflectionBakingFieldSetterPrefix(::Il2CppString* value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Zenject").WithContext("TypeAnalyzer").WithContext("_set_ReflectionBakingFieldSetterPrefix");
  THROW_UNLESS(il2cpp_utils::SetFieldValue("Zenject", "TypeAnalyzer", "ReflectionBakingFieldSetterPrefix", value));
}
// Autogenerated static field getter
// Get static field: static public System.String ReflectionBakingPropertySetterPrefix
::Il2CppString* Zenject::TypeAnalyzer::_get_ReflectionBakingPropertySetterPrefix() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Zenject").WithContext("TypeAnalyzer").WithContext("_get_ReflectionBakingPropertySetterPrefix");
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<::Il2CppString*>("Zenject", "TypeAnalyzer", "ReflectionBakingPropertySetterPrefix"));
}
// Autogenerated static field setter
// Set static field: static public System.String ReflectionBakingPropertySetterPrefix
void Zenject::TypeAnalyzer::_set_ReflectionBakingPropertySetterPrefix(::Il2CppString* value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Zenject").WithContext("TypeAnalyzer").WithContext("_set_ReflectionBakingPropertySetterPrefix");
  THROW_UNLESS(il2cpp_utils::SetFieldValue("Zenject", "TypeAnalyzer", "ReflectionBakingPropertySetterPrefix", value));
}
// [CompilerGeneratedAttribute] Offset: 0xD94D80
// Autogenerated static field getter
// Get static field: static private Zenject.ReflectionBakingCoverageModes <ReflectionBakingCoverageMode>k__BackingField
Zenject::ReflectionBakingCoverageModes Zenject::TypeAnalyzer::_get_$ReflectionBakingCoverageMode$k__BackingField() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Zenject").WithContext("TypeAnalyzer").WithContext("_get_$ReflectionBakingCoverageMode$k__BackingField");
  return THROW_UNLESS((il2cpp_utils::GetFieldValue<Zenject::ReflectionBakingCoverageModes>("Zenject", "TypeAnalyzer", "<ReflectionBakingCoverageMode>k__BackingField")));
}
// Autogenerated static field setter
// Set static field: static private Zenject.ReflectionBakingCoverageModes <ReflectionBakingCoverageMode>k__BackingField
void Zenject::TypeAnalyzer::_set_$ReflectionBakingCoverageMode$k__BackingField(Zenject::ReflectionBakingCoverageModes value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Zenject").WithContext("TypeAnalyzer").WithContext("_set_$ReflectionBakingCoverageMode$k__BackingField");
  THROW_UNLESS(il2cpp_utils::SetFieldValue("Zenject", "TypeAnalyzer", "<ReflectionBakingCoverageMode>k__BackingField", value));
}
// Autogenerated method: Zenject.TypeAnalyzer.get_ReflectionBakingCoverageMode
Zenject::ReflectionBakingCoverageModes Zenject::TypeAnalyzer::get_ReflectionBakingCoverageMode() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Zenject").WithContext("TypeAnalyzer").WithContext("get_ReflectionBakingCoverageMode");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("Zenject", "TypeAnalyzer", "get_ReflectionBakingCoverageMode", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<Zenject::ReflectionBakingCoverageModes, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method);
}
// Autogenerated method: Zenject.TypeAnalyzer.set_ReflectionBakingCoverageMode
void Zenject::TypeAnalyzer::set_ReflectionBakingCoverageMode(Zenject::ReflectionBakingCoverageModes value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Zenject").WithContext("TypeAnalyzer").WithContext("set_ReflectionBakingCoverageMode");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("Zenject", "TypeAnalyzer", "set_ReflectionBakingCoverageMode", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(value)));
  ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, value);
}
// Autogenerated method: Zenject.TypeAnalyzer.ShouldAllowDuringValidation
bool Zenject::TypeAnalyzer::ShouldAllowDuringValidation(System::Type* type) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Zenject").WithContext("TypeAnalyzer").WithContext("ShouldAllowDuringValidation");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("Zenject", "TypeAnalyzer", "ShouldAllowDuringValidation", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(type)));
  return ::il2cpp_utils::RunMethodThrow<bool, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, type);
}
// Autogenerated method: Zenject.TypeAnalyzer.ShouldAllowDuringValidationInternal
bool Zenject::TypeAnalyzer::ShouldAllowDuringValidationInternal(System::Type* type) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Zenject").WithContext("TypeAnalyzer").WithContext("ShouldAllowDuringValidationInternal");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("Zenject", "TypeAnalyzer", "ShouldAllowDuringValidationInternal", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(type)));
  return ::il2cpp_utils::RunMethodThrow<bool, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, type);
}
// Autogenerated method: Zenject.TypeAnalyzer.HasInfo
bool Zenject::TypeAnalyzer::HasInfo(System::Type* type) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Zenject").WithContext("TypeAnalyzer").WithContext("HasInfo");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("Zenject", "TypeAnalyzer", "HasInfo", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(type)));
  return ::il2cpp_utils::RunMethodThrow<bool, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, type);
}
// Autogenerated method: Zenject.TypeAnalyzer.GetInfo
Zenject::InjectTypeInfo* Zenject::TypeAnalyzer::GetInfo(System::Type* type) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Zenject").WithContext("TypeAnalyzer").WithContext("GetInfo");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("Zenject", "TypeAnalyzer", "GetInfo", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(type)));
  return ::il2cpp_utils::RunMethodThrow<Zenject::InjectTypeInfo*, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, type);
}
// Autogenerated method: Zenject.TypeAnalyzer.TryGetInfo
Zenject::InjectTypeInfo* Zenject::TypeAnalyzer::TryGetInfo(System::Type* type) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Zenject").WithContext("TypeAnalyzer").WithContext("TryGetInfo");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("Zenject", "TypeAnalyzer", "TryGetInfo", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(type)));
  return ::il2cpp_utils::RunMethodThrow<Zenject::InjectTypeInfo*, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, type);
}
// Autogenerated method: Zenject.TypeAnalyzer.GetInfoInternal
Zenject::InjectTypeInfo* Zenject::TypeAnalyzer::GetInfoInternal(System::Type* type) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Zenject").WithContext("TypeAnalyzer").WithContext("GetInfoInternal");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("Zenject", "TypeAnalyzer", "GetInfoInternal", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(type)));
  return ::il2cpp_utils::RunMethodThrow<Zenject::InjectTypeInfo*, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, type);
}
// Autogenerated method: Zenject.TypeAnalyzer.ShouldSkipTypeAnalysis
bool Zenject::TypeAnalyzer::ShouldSkipTypeAnalysis(System::Type* type) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Zenject").WithContext("TypeAnalyzer").WithContext("ShouldSkipTypeAnalysis");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("Zenject", "TypeAnalyzer", "ShouldSkipTypeAnalysis", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(type)));
  return ::il2cpp_utils::RunMethodThrow<bool, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, type);
}
// Autogenerated method: Zenject.TypeAnalyzer.IsStaticType
bool Zenject::TypeAnalyzer::IsStaticType(System::Type* type) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Zenject").WithContext("TypeAnalyzer").WithContext("IsStaticType");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("Zenject", "TypeAnalyzer", "IsStaticType", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(type)));
  return ::il2cpp_utils::RunMethodThrow<bool, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, type);
}
// Autogenerated method: Zenject.TypeAnalyzer.CreateTypeInfoFromReflection
Zenject::InjectTypeInfo* Zenject::TypeAnalyzer::CreateTypeInfoFromReflection(System::Type* type) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Zenject").WithContext("TypeAnalyzer").WithContext("CreateTypeInfoFromReflection");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("Zenject", "TypeAnalyzer", "CreateTypeInfoFromReflection", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(type)));
  return ::il2cpp_utils::RunMethodThrow<Zenject::InjectTypeInfo*, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, type);
}
// Autogenerated method: Zenject.TypeAnalyzer..cctor
void Zenject::TypeAnalyzer::_cctor() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Zenject").WithContext("TypeAnalyzer").WithContext(".cctor");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("Zenject", "TypeAnalyzer", ".cctor", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method);
}
