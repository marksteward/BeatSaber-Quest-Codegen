// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
// Including type: OVRPlugin/OVRP_0_1_3
#include "GlobalNamespace/OVRPlugin_OVRP_0_1_3.hpp"
// Including type: System.Version
#include "System/Version.hpp"
// Including type: OVRPlugin/Node
#include "GlobalNamespace/OVRPlugin_Node.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static public readonly System.Version version
System::Version* GlobalNamespace::OVRPlugin::OVRP_0_1_3::_get_version() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("OVRP_0_1_3").WithContext("_get_version");
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<System::Version*>("", "OVRPlugin/OVRP_0_1_3", "version"));
}
// Autogenerated static field setter
// Set static field: static public readonly System.Version version
void GlobalNamespace::OVRPlugin::OVRP_0_1_3::_set_version(System::Version* value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("OVRP_0_1_3").WithContext("_set_version");
  THROW_UNLESS(il2cpp_utils::SetFieldValue("", "OVRPlugin/OVRP_0_1_3", "version", value));
}
// Autogenerated method: OVRPlugin/OVRP_0_1_3.ovrp_GetNodeVelocity
GlobalNamespace::OVRPlugin::Posef GlobalNamespace::OVRPlugin::OVRP_0_1_3::ovrp_GetNodeVelocity(GlobalNamespace::OVRPlugin::Node nodeId) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("OVRP_0_1_3").WithContext("ovrp_GetNodeVelocity");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("", "OVRPlugin/OVRP_0_1_3", "ovrp_GetNodeVelocity", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(nodeId)));
  return ::il2cpp_utils::RunMethodThrow<GlobalNamespace::OVRPlugin::Posef, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, nodeId);
}
// Autogenerated method: OVRPlugin/OVRP_0_1_3.ovrp_GetNodeAcceleration
GlobalNamespace::OVRPlugin::Posef GlobalNamespace::OVRPlugin::OVRP_0_1_3::ovrp_GetNodeAcceleration(GlobalNamespace::OVRPlugin::Node nodeId) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("OVRP_0_1_3").WithContext("ovrp_GetNodeAcceleration");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("", "OVRPlugin/OVRP_0_1_3", "ovrp_GetNodeAcceleration", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(nodeId)));
  return ::il2cpp_utils::RunMethodThrow<GlobalNamespace::OVRPlugin::Posef, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, nodeId);
}
// Autogenerated method: OVRPlugin/OVRP_0_1_3..cctor
void GlobalNamespace::OVRPlugin::OVRP_0_1_3::_cctor() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("OVRP_0_1_3").WithContext(".cctor");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("", "OVRPlugin/OVRP_0_1_3", ".cctor", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method);
}
