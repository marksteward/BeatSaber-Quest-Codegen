// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVRPlugin/Vector4f
#include "GlobalNamespace/OVRPlugin_Vector4f.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static public readonly OVRPlugin/Vector4f zero
GlobalNamespace::OVRPlugin::Vector4f GlobalNamespace::OVRPlugin::Vector4f::_get_zero() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("Vector4f").WithContext("_get_zero");
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<GlobalNamespace::OVRPlugin::Vector4f>("", "OVRPlugin/Vector4f", "zero"));
}
// Autogenerated static field setter
// Set static field: static public readonly OVRPlugin/Vector4f zero
void GlobalNamespace::OVRPlugin::Vector4f::_set_zero(GlobalNamespace::OVRPlugin::Vector4f value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("Vector4f").WithContext("_set_zero");
  THROW_UNLESS(il2cpp_utils::SetFieldValue("", "OVRPlugin/Vector4f", "zero", value));
}
// Autogenerated method: OVRPlugin/Vector4f..cctor
void GlobalNamespace::OVRPlugin::Vector4f::_cctor() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("Vector4f").WithContext(".cctor");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("", "OVRPlugin/Vector4f", ".cctor", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method);
}
// Autogenerated method: OVRPlugin/Vector4f.ToString
::Il2CppString* GlobalNamespace::OVRPlugin::Vector4f::ToString() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("Vector4f").WithContext("ToString");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(*this, "ToString", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<::Il2CppString*, false>(*this, ___internal__method);
}
