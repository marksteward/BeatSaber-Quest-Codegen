// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
// Including type: UnityEngine.UI.ClipperRegistry
#include "UnityEngine/UI/ClipperRegistry.hpp"
// Including type: UnityEngine.UI.Collections.IndexedSet`1
#include "UnityEngine/UI/Collections/IndexedSet_1.hpp"
// Including type: UnityEngine.UI.IClipper
#include "UnityEngine/UI/IClipper.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static private UnityEngine.UI.ClipperRegistry s_Instance
UnityEngine::UI::ClipperRegistry* UnityEngine::UI::ClipperRegistry::_get_s_Instance() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("UnityEngine::UI").WithContext("ClipperRegistry").WithContext("_get_s_Instance");
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<UnityEngine::UI::ClipperRegistry*>("UnityEngine.UI", "ClipperRegistry", "s_Instance"));
}
// Autogenerated static field setter
// Set static field: static private UnityEngine.UI.ClipperRegistry s_Instance
void UnityEngine::UI::ClipperRegistry::_set_s_Instance(UnityEngine::UI::ClipperRegistry* value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("UnityEngine::UI").WithContext("ClipperRegistry").WithContext("_set_s_Instance");
  THROW_UNLESS(il2cpp_utils::SetFieldValue("UnityEngine.UI", "ClipperRegistry", "s_Instance", value));
}
// Autogenerated method: UnityEngine.UI.ClipperRegistry.get_instance
UnityEngine::UI::ClipperRegistry* UnityEngine::UI::ClipperRegistry::get_instance() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("UnityEngine::UI").WithContext("ClipperRegistry").WithContext("get_instance");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("UnityEngine.UI", "ClipperRegistry", "get_instance", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<UnityEngine::UI::ClipperRegistry*, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method);
}
// Autogenerated method: UnityEngine.UI.ClipperRegistry.Cull
void UnityEngine::UI::ClipperRegistry::Cull() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("UnityEngine::UI").WithContext("ClipperRegistry").WithContext("Cull");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "Cull", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}
// Autogenerated method: UnityEngine.UI.ClipperRegistry.Register
void UnityEngine::UI::ClipperRegistry::Register(UnityEngine::UI::IClipper* c) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("UnityEngine::UI").WithContext("ClipperRegistry").WithContext("Register");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("UnityEngine.UI", "ClipperRegistry", "Register", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(c)));
  ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, c);
}
// Autogenerated method: UnityEngine.UI.ClipperRegistry.Unregister
void UnityEngine::UI::ClipperRegistry::Unregister(UnityEngine::UI::IClipper* c) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("UnityEngine::UI").WithContext("ClipperRegistry").WithContext("Unregister");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("UnityEngine.UI", "ClipperRegistry", "Unregister", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(c)));
  ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, c);
}
