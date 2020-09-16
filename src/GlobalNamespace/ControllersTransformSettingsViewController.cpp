// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
// Including type: ControllersTransformSettingsViewController
#include "GlobalNamespace/ControllersTransformSettingsViewController.hpp"
// Including type: Vector3SO
#include "GlobalNamespace/Vector3SO.hpp"
// Including type: HMUI.RangeValuesTextSlider
#include "HMUI/RangeValuesTextSlider.hpp"
// Including type: HMUI.ViewController/ActivationType
#include "HMUI/ViewController_ActivationType.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static private System.Single kPositionStep
float GlobalNamespace::ControllersTransformSettingsViewController::_get_kPositionStep() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<float>("", "ControllersTransformSettingsViewController", "kPositionStep"));
}
// Autogenerated static field setter
// Set static field: static private System.Single kPositionStep
void GlobalNamespace::ControllersTransformSettingsViewController::_set_kPositionStep(float value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("", "ControllersTransformSettingsViewController", "kPositionStep", value));
}
// Autogenerated static field getter
// Get static field: static private System.Single kPositionMul
float GlobalNamespace::ControllersTransformSettingsViewController::_get_kPositionMul() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<float>("", "ControllersTransformSettingsViewController", "kPositionMul"));
}
// Autogenerated static field setter
// Set static field: static private System.Single kPositionMul
void GlobalNamespace::ControllersTransformSettingsViewController::_set_kPositionMul(float value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("", "ControllersTransformSettingsViewController", "kPositionMul", value));
}
// Autogenerated static field getter
// Get static field: static private System.Single kRotationStep
float GlobalNamespace::ControllersTransformSettingsViewController::_get_kRotationStep() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<float>("", "ControllersTransformSettingsViewController", "kRotationStep"));
}
// Autogenerated static field setter
// Set static field: static private System.Single kRotationStep
void GlobalNamespace::ControllersTransformSettingsViewController::_set_kRotationStep(float value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("", "ControllersTransformSettingsViewController", "kRotationStep", value));
}
// Autogenerated method: ControllersTransformSettingsViewController.HandlePositionSliderValueDidChange
void GlobalNamespace::ControllersTransformSettingsViewController::HandlePositionSliderValueDidChange(HMUI::RangeValuesTextSlider* slider, float value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "HandlePositionSliderValueDidChange", slider, value));
}
// Autogenerated method: ControllersTransformSettingsViewController.HandleRotationSliderValueDidChange
void GlobalNamespace::ControllersTransformSettingsViewController::HandleRotationSliderValueDidChange(HMUI::RangeValuesTextSlider* slider, float value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "HandleRotationSliderValueDidChange", slider, value));
}
// Autogenerated method: ControllersTransformSettingsViewController.DidActivate
void GlobalNamespace::ControllersTransformSettingsViewController::DidActivate(bool firstActivation, HMUI::ViewController::ActivationType activationType) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "DidActivate", firstActivation, activationType));
}
// Autogenerated method: ControllersTransformSettingsViewController.OnDestroy
void GlobalNamespace::ControllersTransformSettingsViewController::OnDestroy() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "OnDestroy"));
}
// Autogenerated method: ControllersTransformSettingsViewController..ctor
GlobalNamespace::ControllersTransformSettingsViewController* GlobalNamespace::ControllersTransformSettingsViewController::New_ctor() {
  return THROW_UNLESS(il2cpp_utils::New<ControllersTransformSettingsViewController*>());
}
