// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVRInput/OVRControllerGamepadMac
#include "GlobalNamespace/OVRInput_OVRControllerGamepadMac.hpp"
// Including type: OVRInput/OVRControllerGamepadMac/AxisGPC
#include "GlobalNamespace/OVRInput_OVRControllerGamepadMac_AxisGPC.hpp"
// Including type: OVRInput/OVRControllerGamepadMac/ButtonGPC
#include "GlobalNamespace/OVRInput_OVRControllerGamepadMac_ButtonGPC.hpp"
// Including type: System.String
#include "System/String.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static private System.String DllName
::Il2CppString* GlobalNamespace::OVRInput::OVRControllerGamepadMac::_get_DllName() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("OVRControllerGamepadMac").WithContext("_get_DllName");
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<::Il2CppString*>("", "OVRInput/OVRControllerGamepadMac", "DllName"));
}
// Autogenerated static field setter
// Set static field: static private System.String DllName
void GlobalNamespace::OVRInput::OVRControllerGamepadMac::_set_DllName(::Il2CppString* value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("OVRControllerGamepadMac").WithContext("_set_DllName");
  THROW_UNLESS(il2cpp_utils::SetFieldValue("", "OVRInput/OVRControllerGamepadMac", "DllName", value));
}
// Autogenerated method: OVRInput/OVRControllerGamepadMac.OVR_GamepadController_Initialize
bool GlobalNamespace::OVRInput::OVRControllerGamepadMac::OVR_GamepadController_Initialize() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("OVRControllerGamepadMac").WithContext("OVR_GamepadController_Initialize");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("", "OVRInput/OVRControllerGamepadMac", "OVR_GamepadController_Initialize", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<bool, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method);
}
// Autogenerated method: OVRInput/OVRControllerGamepadMac.OVR_GamepadController_Destroy
bool GlobalNamespace::OVRInput::OVRControllerGamepadMac::OVR_GamepadController_Destroy() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("OVRControllerGamepadMac").WithContext("OVR_GamepadController_Destroy");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("", "OVRInput/OVRControllerGamepadMac", "OVR_GamepadController_Destroy", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<bool, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method);
}
// Autogenerated method: OVRInput/OVRControllerGamepadMac.OVR_GamepadController_Update
bool GlobalNamespace::OVRInput::OVRControllerGamepadMac::OVR_GamepadController_Update() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("OVRControllerGamepadMac").WithContext("OVR_GamepadController_Update");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("", "OVRInput/OVRControllerGamepadMac", "OVR_GamepadController_Update", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<bool, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method);
}
// Autogenerated method: OVRInput/OVRControllerGamepadMac.OVR_GamepadController_GetAxis
float GlobalNamespace::OVRInput::OVRControllerGamepadMac::OVR_GamepadController_GetAxis(int axis) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("OVRControllerGamepadMac").WithContext("OVR_GamepadController_GetAxis");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("", "OVRInput/OVRControllerGamepadMac", "OVR_GamepadController_GetAxis", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(axis)));
  return ::il2cpp_utils::RunMethodThrow<float, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, axis);
}
// Autogenerated method: OVRInput/OVRControllerGamepadMac.OVR_GamepadController_GetButton
bool GlobalNamespace::OVRInput::OVRControllerGamepadMac::OVR_GamepadController_GetButton(int button) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("OVRControllerGamepadMac").WithContext("OVR_GamepadController_GetButton");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("", "OVRInput/OVRControllerGamepadMac", "OVR_GamepadController_GetButton", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(button)));
  return ::il2cpp_utils::RunMethodThrow<bool, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, button);
}
// Autogenerated method: OVRInput/OVRControllerGamepadMac.OVR_GamepadController_SetVibration
bool GlobalNamespace::OVRInput::OVRControllerGamepadMac::OVR_GamepadController_SetVibration(int node, float strength, float frequency) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("OVRControllerGamepadMac").WithContext("OVR_GamepadController_SetVibration");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("", "OVRInput/OVRControllerGamepadMac", "OVR_GamepadController_SetVibration", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(node, strength, frequency)));
  return ::il2cpp_utils::RunMethodThrow<bool, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, node, strength, frequency);
}
// Autogenerated method: OVRInput/OVRControllerGamepadMac.Finalize
void GlobalNamespace::OVRInput::OVRControllerGamepadMac::Finalize() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("OVRControllerGamepadMac").WithContext("Finalize");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "Finalize", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}
// Autogenerated method: OVRInput/OVRControllerGamepadMac.Update
GlobalNamespace::OVRInput::Controller GlobalNamespace::OVRInput::OVRControllerGamepadMac::Update() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("OVRControllerGamepadMac").WithContext("Update");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "Update", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<GlobalNamespace::OVRInput::Controller, false>(this, ___internal__method);
}
// Autogenerated method: OVRInput/OVRControllerGamepadMac.ConfigureButtonMap
void GlobalNamespace::OVRInput::OVRControllerGamepadMac::ConfigureButtonMap() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("OVRControllerGamepadMac").WithContext("ConfigureButtonMap");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "ConfigureButtonMap", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}
// Autogenerated method: OVRInput/OVRControllerGamepadMac.ConfigureTouchMap
void GlobalNamespace::OVRInput::OVRControllerGamepadMac::ConfigureTouchMap() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("OVRControllerGamepadMac").WithContext("ConfigureTouchMap");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "ConfigureTouchMap", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}
// Autogenerated method: OVRInput/OVRControllerGamepadMac.ConfigureNearTouchMap
void GlobalNamespace::OVRInput::OVRControllerGamepadMac::ConfigureNearTouchMap() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("OVRControllerGamepadMac").WithContext("ConfigureNearTouchMap");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "ConfigureNearTouchMap", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}
// Autogenerated method: OVRInput/OVRControllerGamepadMac.ConfigureAxis1DMap
void GlobalNamespace::OVRInput::OVRControllerGamepadMac::ConfigureAxis1DMap() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("OVRControllerGamepadMac").WithContext("ConfigureAxis1DMap");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "ConfigureAxis1DMap", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}
// Autogenerated method: OVRInput/OVRControllerGamepadMac.ConfigureAxis2DMap
void GlobalNamespace::OVRInput::OVRControllerGamepadMac::ConfigureAxis2DMap() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("OVRControllerGamepadMac").WithContext("ConfigureAxis2DMap");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "ConfigureAxis2DMap", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}
// Autogenerated method: OVRInput/OVRControllerGamepadMac.SetControllerVibration
void GlobalNamespace::OVRInput::OVRControllerGamepadMac::SetControllerVibration(float frequency, float amplitude) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("OVRControllerGamepadMac").WithContext("SetControllerVibration");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "SetControllerVibration", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(frequency, amplitude)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, frequency, amplitude);
}
