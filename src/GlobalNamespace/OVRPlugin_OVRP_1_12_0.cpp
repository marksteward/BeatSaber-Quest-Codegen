// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
// Including type: OVRPlugin/OVRP_1_12_0
#include "GlobalNamespace/OVRPlugin_OVRP_1_12_0.hpp"
// Including type: System.Version
#include "System/Version.hpp"
// Including type: OVRPlugin/PoseStatef
#include "GlobalNamespace/OVRPlugin_PoseStatef.hpp"
// Including type: OVRPlugin/Step
#include "GlobalNamespace/OVRPlugin_Step.hpp"
// Including type: OVRPlugin/Node
#include "GlobalNamespace/OVRPlugin_Node.hpp"
// Including type: OVRPlugin/ControllerState2
#include "GlobalNamespace/OVRPlugin_ControllerState2.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static public readonly System.Version version
System::Version* GlobalNamespace::OVRPlugin::OVRP_1_12_0::_get_version() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("OVRP_1_12_0").WithContext("_get_version");
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<System::Version*>("", "OVRPlugin/OVRP_1_12_0", "version"));
}
// Autogenerated static field setter
// Set static field: static public readonly System.Version version
void GlobalNamespace::OVRPlugin::OVRP_1_12_0::_set_version(System::Version* value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("OVRP_1_12_0").WithContext("_set_version");
  THROW_UNLESS(il2cpp_utils::SetFieldValue("", "OVRPlugin/OVRP_1_12_0", "version", value));
}
// Autogenerated method: OVRPlugin/OVRP_1_12_0.ovrp_GetAppFramerate
float GlobalNamespace::OVRPlugin::OVRP_1_12_0::ovrp_GetAppFramerate() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("OVRP_1_12_0").WithContext("ovrp_GetAppFramerate");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("", "OVRPlugin/OVRP_1_12_0", "ovrp_GetAppFramerate", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<float, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method);
}
// Autogenerated method: OVRPlugin/OVRP_1_12_0.ovrp_GetNodePoseState
GlobalNamespace::OVRPlugin::PoseStatef GlobalNamespace::OVRPlugin::OVRP_1_12_0::ovrp_GetNodePoseState(GlobalNamespace::OVRPlugin::Step stepId, GlobalNamespace::OVRPlugin::Node nodeId) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("OVRP_1_12_0").WithContext("ovrp_GetNodePoseState");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("", "OVRPlugin/OVRP_1_12_0", "ovrp_GetNodePoseState", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(stepId, nodeId)));
  return ::il2cpp_utils::RunMethodThrow<GlobalNamespace::OVRPlugin::PoseStatef, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, stepId, nodeId);
}
// Autogenerated method: OVRPlugin/OVRP_1_12_0.ovrp_GetControllerState2
GlobalNamespace::OVRPlugin::ControllerState2 GlobalNamespace::OVRPlugin::OVRP_1_12_0::ovrp_GetControllerState2(uint controllerMask) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("OVRP_1_12_0").WithContext("ovrp_GetControllerState2");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("", "OVRPlugin/OVRP_1_12_0", "ovrp_GetControllerState2", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(controllerMask)));
  return ::il2cpp_utils::RunMethodThrow<GlobalNamespace::OVRPlugin::ControllerState2, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, controllerMask);
}
// Autogenerated method: OVRPlugin/OVRP_1_12_0..cctor
void GlobalNamespace::OVRPlugin::OVRP_1_12_0::_cctor() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("OVRP_1_12_0").WithContext(".cctor");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("", "OVRPlugin/OVRP_1_12_0", ".cctor", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method);
}
