// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
// Including type: OVRPlugin/OVRP_1_7_0
#include "GlobalNamespace/OVRPlugin_OVRP_1_7_0.hpp"
// Including type: System.Version
#include "System/Version.hpp"
// Including type: OVRPlugin/Bool
#include "GlobalNamespace/OVRPlugin_Bool.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static public readonly System.Version version
System::Version* GlobalNamespace::OVRPlugin::OVRP_1_7_0::_get_version() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("OVRP_1_7_0").WithContext("_get_version");
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<System::Version*>("", "OVRPlugin/OVRP_1_7_0", "version"));
}
// Autogenerated static field setter
// Set static field: static public readonly System.Version version
void GlobalNamespace::OVRPlugin::OVRP_1_7_0::_set_version(System::Version* value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("OVRP_1_7_0").WithContext("_set_version");
  THROW_UNLESS(il2cpp_utils::SetFieldValue("", "OVRPlugin/OVRP_1_7_0", "version", value));
}
// Autogenerated method: OVRPlugin/OVRP_1_7_0.ovrp_GetAppChromaticCorrection
GlobalNamespace::OVRPlugin::Bool GlobalNamespace::OVRPlugin::OVRP_1_7_0::ovrp_GetAppChromaticCorrection() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("OVRP_1_7_0").WithContext("ovrp_GetAppChromaticCorrection");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("", "OVRPlugin/OVRP_1_7_0", "ovrp_GetAppChromaticCorrection", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<GlobalNamespace::OVRPlugin::Bool, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method);
}
// Autogenerated method: OVRPlugin/OVRP_1_7_0.ovrp_SetAppChromaticCorrection
GlobalNamespace::OVRPlugin::Bool GlobalNamespace::OVRPlugin::OVRP_1_7_0::ovrp_SetAppChromaticCorrection(GlobalNamespace::OVRPlugin::Bool value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("OVRP_1_7_0").WithContext("ovrp_SetAppChromaticCorrection");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("", "OVRPlugin/OVRP_1_7_0", "ovrp_SetAppChromaticCorrection", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(value)));
  return ::il2cpp_utils::RunMethodThrow<GlobalNamespace::OVRPlugin::Bool, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, value);
}
// Autogenerated method: OVRPlugin/OVRP_1_7_0..cctor
void GlobalNamespace::OVRPlugin::OVRP_1_7_0::_cctor() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("OVRP_1_7_0").WithContext(".cctor");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("", "OVRPlugin/OVRP_1_7_0", ".cctor", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method);
}
