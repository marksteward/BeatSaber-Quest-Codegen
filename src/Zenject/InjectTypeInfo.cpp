// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.InjectTypeInfo
#include "Zenject/InjectTypeInfo.hpp"
// Including type: Zenject.InjectTypeInfo/InjectMemberInfo
#include "Zenject/InjectTypeInfo_InjectMemberInfo.hpp"
// Including type: Zenject.InjectTypeInfo/InjectConstructorInfo
#include "Zenject/InjectTypeInfo_InjectConstructorInfo.hpp"
// Including type: Zenject.InjectTypeInfo/InjectMethodInfo
#include "Zenject/InjectTypeInfo_InjectMethodInfo.hpp"
// Including type: System.Type
#include "System/Type.hpp"
// Including type: System.Func`2
#include "System/Func_2.hpp"
// Including type: Zenject.InjectableInfo
#include "Zenject/InjectableInfo.hpp"
// Including type: System.Collections.Generic.IEnumerable`1
#include "System/Collections/Generic/IEnumerable_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// [CompilerGeneratedAttribute] Offset: 0xD82D88
// Autogenerated static field getter
// Get static field: static private System.Func`2<Zenject.InjectTypeInfo/InjectMemberInfo,Zenject.InjectableInfo> CS$<>9__CachedAnonymousMethodDelegate2
System::Func_2<Zenject::InjectTypeInfo::InjectMemberInfo*, Zenject::InjectableInfo*>* Zenject::InjectTypeInfo::_get_CS$$$9__CachedAnonymousMethodDelegate2() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Zenject").WithContext("InjectTypeInfo").WithContext("_get_CS$$$9__CachedAnonymousMethodDelegate2");
  return THROW_UNLESS((il2cpp_utils::GetFieldValue<System::Func_2<Zenject::InjectTypeInfo::InjectMemberInfo*, Zenject::InjectableInfo*>*>("Zenject", "InjectTypeInfo", "CS$<>9__CachedAnonymousMethodDelegate2")));
}
// Autogenerated static field setter
// Set static field: static private System.Func`2<Zenject.InjectTypeInfo/InjectMemberInfo,Zenject.InjectableInfo> CS$<>9__CachedAnonymousMethodDelegate2
void Zenject::InjectTypeInfo::_set_CS$$$9__CachedAnonymousMethodDelegate2(System::Func_2<Zenject::InjectTypeInfo::InjectMemberInfo*, Zenject::InjectableInfo*>* value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Zenject").WithContext("InjectTypeInfo").WithContext("_set_CS$$$9__CachedAnonymousMethodDelegate2");
  THROW_UNLESS(il2cpp_utils::SetFieldValue("Zenject", "InjectTypeInfo", "CS$<>9__CachedAnonymousMethodDelegate2", value));
}
// [CompilerGeneratedAttribute] Offset: 0xD82D98
// Autogenerated static field getter
// Get static field: static private System.Func`2<Zenject.InjectTypeInfo/InjectMethodInfo,System.Collections.Generic.IEnumerable`1<Zenject.InjectableInfo>> CS$<>9__CachedAnonymousMethodDelegate3
System::Func_2<Zenject::InjectTypeInfo::InjectMethodInfo*, System::Collections::Generic::IEnumerable_1<Zenject::InjectableInfo*>*>* Zenject::InjectTypeInfo::_get_CS$$$9__CachedAnonymousMethodDelegate3() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Zenject").WithContext("InjectTypeInfo").WithContext("_get_CS$$$9__CachedAnonymousMethodDelegate3");
  return THROW_UNLESS((il2cpp_utils::GetFieldValue<System::Func_2<Zenject::InjectTypeInfo::InjectMethodInfo*, System::Collections::Generic::IEnumerable_1<Zenject::InjectableInfo*>*>*>("Zenject", "InjectTypeInfo", "CS$<>9__CachedAnonymousMethodDelegate3")));
}
// Autogenerated static field setter
// Set static field: static private System.Func`2<Zenject.InjectTypeInfo/InjectMethodInfo,System.Collections.Generic.IEnumerable`1<Zenject.InjectableInfo>> CS$<>9__CachedAnonymousMethodDelegate3
void Zenject::InjectTypeInfo::_set_CS$$$9__CachedAnonymousMethodDelegate3(System::Func_2<Zenject::InjectTypeInfo::InjectMethodInfo*, System::Collections::Generic::IEnumerable_1<Zenject::InjectableInfo*>*>* value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Zenject").WithContext("InjectTypeInfo").WithContext("_set_CS$$$9__CachedAnonymousMethodDelegate3");
  THROW_UNLESS(il2cpp_utils::SetFieldValue("Zenject", "InjectTypeInfo", "CS$<>9__CachedAnonymousMethodDelegate3", value));
}
// Autogenerated method: Zenject.InjectTypeInfo.get_BaseTypeInfo
Zenject::InjectTypeInfo* Zenject::InjectTypeInfo::get_BaseTypeInfo() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Zenject").WithContext("InjectTypeInfo").WithContext("get_BaseTypeInfo");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "get_BaseTypeInfo", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<Zenject::InjectTypeInfo*, false>(this, ___internal__method);
}
// Autogenerated method: Zenject.InjectTypeInfo.set_BaseTypeInfo
void Zenject::InjectTypeInfo::set_BaseTypeInfo(Zenject::InjectTypeInfo* value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Zenject").WithContext("InjectTypeInfo").WithContext("set_BaseTypeInfo");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "set_BaseTypeInfo", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(value)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, value);
}
// Autogenerated method: Zenject.InjectTypeInfo.get_AllInjectables
System::Collections::Generic::IEnumerable_1<Zenject::InjectableInfo*>* Zenject::InjectTypeInfo::get_AllInjectables() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Zenject").WithContext("InjectTypeInfo").WithContext("get_AllInjectables");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "get_AllInjectables", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<System::Collections::Generic::IEnumerable_1<Zenject::InjectableInfo*>*, false>(this, ___internal__method);
}
// Autogenerated method: Zenject.InjectTypeInfo.<get_AllInjectables>b__0
Zenject::InjectableInfo* Zenject::InjectTypeInfo::$get_AllInjectables$b__0(Zenject::InjectTypeInfo::InjectMemberInfo* x) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Zenject").WithContext("InjectTypeInfo").WithContext("<get_AllInjectables>b__0");
  static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("Zenject", "InjectTypeInfo", "<get_AllInjectables>b__0", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(x))));
  return ::il2cpp_utils::RunMethodThrow<Zenject::InjectableInfo*, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, x);
}
// Autogenerated method: Zenject.InjectTypeInfo.<get_AllInjectables>b__1
System::Collections::Generic::IEnumerable_1<Zenject::InjectableInfo*>* Zenject::InjectTypeInfo::$get_AllInjectables$b__1(Zenject::InjectTypeInfo::InjectMethodInfo* x) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Zenject").WithContext("InjectTypeInfo").WithContext("<get_AllInjectables>b__1");
  static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("Zenject", "InjectTypeInfo", "<get_AllInjectables>b__1", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(x))));
  return ::il2cpp_utils::RunMethodThrow<System::Collections::Generic::IEnumerable_1<Zenject::InjectableInfo*>*, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, x);
}
