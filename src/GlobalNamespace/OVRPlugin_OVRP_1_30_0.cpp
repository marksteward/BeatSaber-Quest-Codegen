// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVRPlugin/OVRP_1_30_0
#include "GlobalNamespace/OVRPlugin_OVRP_1_30_0.hpp"
// Including type: System.Version
#include "System/Version.hpp"
// Including type: OVRPlugin/Result
#include "GlobalNamespace/OVRPlugin_Result.hpp"
// Including type: OVRPlugin/PerfMetrics
#include "GlobalNamespace/OVRPlugin_PerfMetrics.hpp"
// Including type: OVRPlugin/Bool
#include "GlobalNamespace/OVRPlugin_Bool.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static public readonly System.Version version
System::Version* GlobalNamespace::OVRPlugin::OVRP_1_30_0::_get_version() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("OVRP_1_30_0").WithContext("_get_version");
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<System::Version*>("", "OVRPlugin/OVRP_1_30_0", "version"));
}
// Autogenerated static field setter
// Set static field: static public readonly System.Version version
void GlobalNamespace::OVRPlugin::OVRP_1_30_0::_set_version(System::Version* value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("OVRP_1_30_0").WithContext("_set_version");
  THROW_UNLESS(il2cpp_utils::SetFieldValue("", "OVRPlugin/OVRP_1_30_0", "version", value));
}
// Autogenerated method: OVRPlugin/OVRP_1_30_0.ovrp_GetCurrentTrackingTransformPose
GlobalNamespace::OVRPlugin::Result GlobalNamespace::OVRPlugin::OVRP_1_30_0::ovrp_GetCurrentTrackingTransformPose(GlobalNamespace::OVRPlugin::Posef& trackingTransformPose) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("OVRP_1_30_0").WithContext("ovrp_GetCurrentTrackingTransformPose");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("", "OVRPlugin/OVRP_1_30_0", "ovrp_GetCurrentTrackingTransformPose", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(trackingTransformPose)));
  return ::il2cpp_utils::RunMethodThrow<GlobalNamespace::OVRPlugin::Result, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, trackingTransformPose);
}
// Autogenerated method: OVRPlugin/OVRP_1_30_0.ovrp_GetTrackingTransformRawPose
GlobalNamespace::OVRPlugin::Result GlobalNamespace::OVRPlugin::OVRP_1_30_0::ovrp_GetTrackingTransformRawPose(GlobalNamespace::OVRPlugin::Posef& trackingTransformRawPose) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("OVRP_1_30_0").WithContext("ovrp_GetTrackingTransformRawPose");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("", "OVRPlugin/OVRP_1_30_0", "ovrp_GetTrackingTransformRawPose", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(trackingTransformRawPose)));
  return ::il2cpp_utils::RunMethodThrow<GlobalNamespace::OVRPlugin::Result, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, trackingTransformRawPose);
}
// Autogenerated method: OVRPlugin/OVRP_1_30_0.ovrp_SendEvent2
GlobalNamespace::OVRPlugin::Result GlobalNamespace::OVRPlugin::OVRP_1_30_0::ovrp_SendEvent2(::Il2CppString* name, ::Il2CppString* param, ::Il2CppString* source) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("OVRP_1_30_0").WithContext("ovrp_SendEvent2");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("", "OVRPlugin/OVRP_1_30_0", "ovrp_SendEvent2", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(name, param, source)));
  return ::il2cpp_utils::RunMethodThrow<GlobalNamespace::OVRPlugin::Result, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, name, param, source);
}
// Autogenerated method: OVRPlugin/OVRP_1_30_0.ovrp_IsPerfMetricsSupported
GlobalNamespace::OVRPlugin::Result GlobalNamespace::OVRPlugin::OVRP_1_30_0::ovrp_IsPerfMetricsSupported(GlobalNamespace::OVRPlugin::PerfMetrics perfMetrics, GlobalNamespace::OVRPlugin::Bool& isSupported) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("OVRP_1_30_0").WithContext("ovrp_IsPerfMetricsSupported");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("", "OVRPlugin/OVRP_1_30_0", "ovrp_IsPerfMetricsSupported", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(perfMetrics, isSupported)));
  return ::il2cpp_utils::RunMethodThrow<GlobalNamespace::OVRPlugin::Result, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, perfMetrics, isSupported);
}
// Autogenerated method: OVRPlugin/OVRP_1_30_0.ovrp_GetPerfMetricsFloat
GlobalNamespace::OVRPlugin::Result GlobalNamespace::OVRPlugin::OVRP_1_30_0::ovrp_GetPerfMetricsFloat(GlobalNamespace::OVRPlugin::PerfMetrics perfMetrics, float& value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("OVRP_1_30_0").WithContext("ovrp_GetPerfMetricsFloat");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("", "OVRPlugin/OVRP_1_30_0", "ovrp_GetPerfMetricsFloat", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(perfMetrics, value)));
  return ::il2cpp_utils::RunMethodThrow<GlobalNamespace::OVRPlugin::Result, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, perfMetrics, value);
}
// Autogenerated method: OVRPlugin/OVRP_1_30_0.ovrp_GetPerfMetricsInt
GlobalNamespace::OVRPlugin::Result GlobalNamespace::OVRPlugin::OVRP_1_30_0::ovrp_GetPerfMetricsInt(GlobalNamespace::OVRPlugin::PerfMetrics perfMetrics, int& value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("OVRP_1_30_0").WithContext("ovrp_GetPerfMetricsInt");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("", "OVRPlugin/OVRP_1_30_0", "ovrp_GetPerfMetricsInt", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(perfMetrics, value)));
  return ::il2cpp_utils::RunMethodThrow<GlobalNamespace::OVRPlugin::Result, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, perfMetrics, value);
}
// Autogenerated method: OVRPlugin/OVRP_1_30_0..cctor
void GlobalNamespace::OVRPlugin::OVRP_1_30_0::_cctor() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("OVRP_1_30_0").WithContext(".cctor");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("", "OVRPlugin/OVRP_1_30_0", ".cctor", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method);
}
