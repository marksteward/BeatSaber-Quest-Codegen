// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
// Including type: PlayerSettingsPanelController
#include "GlobalNamespace/PlayerSettingsPanelController.hpp"
// Including type: PlayerSettingsPanelController/PlayerSettingsPanelLayout
#include "GlobalNamespace/PlayerSettingsPanelController_PlayerSettingsPanelLayout.hpp"
// Including type: UnityEngine.UI.Toggle
#include "UnityEngine/UI/Toggle.hpp"
// Including type: PlayerHeightSettingsController
#include "GlobalNamespace/PlayerHeightSettingsController.hpp"
// Including type: FormattedFloatListSettingsController
#include "GlobalNamespace/FormattedFloatListSettingsController.hpp"
// Including type: NoteJumpStartBeatOffsetDropdown
#include "GlobalNamespace/NoteJumpStartBeatOffsetDropdown.hpp"
// Including type: UnityEngine.CanvasGroup
#include "UnityEngine/CanvasGroup.hpp"
// Including type: System.Action
#include "System/Action.hpp"
// Including type: PlayerSpecificSettings
#include "GlobalNamespace/PlayerSpecificSettings.hpp"
// Including type: HMUI.ToggleBinder
#include "HMUI/ToggleBinder.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static private System.Single kDisabledSectionAlpha
float GlobalNamespace::PlayerSettingsPanelController::_get_kDisabledSectionAlpha() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("PlayerSettingsPanelController").WithContext("_get_kDisabledSectionAlpha");
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<float>("", "PlayerSettingsPanelController", "kDisabledSectionAlpha"));
}
// Autogenerated static field setter
// Set static field: static private System.Single kDisabledSectionAlpha
void GlobalNamespace::PlayerSettingsPanelController::_set_kDisabledSectionAlpha(float value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("PlayerSettingsPanelController").WithContext("_set_kDisabledSectionAlpha");
  THROW_UNLESS(il2cpp_utils::SetFieldValue("", "PlayerSettingsPanelController", "kDisabledSectionAlpha", value));
}
// Autogenerated method: PlayerSettingsPanelController.add_didChangePlayerSettingsEvent
void GlobalNamespace::PlayerSettingsPanelController::add_didChangePlayerSettingsEvent(System::Action* value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("PlayerSettingsPanelController").WithContext("add_didChangePlayerSettingsEvent");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "add_didChangePlayerSettingsEvent", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(value)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, value);
}
// Autogenerated method: PlayerSettingsPanelController.remove_didChangePlayerSettingsEvent
void GlobalNamespace::PlayerSettingsPanelController::remove_didChangePlayerSettingsEvent(System::Action* value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("PlayerSettingsPanelController").WithContext("remove_didChangePlayerSettingsEvent");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "remove_didChangePlayerSettingsEvent", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(value)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, value);
}
// Autogenerated method: PlayerSettingsPanelController.get_playerSpecificSettings
GlobalNamespace::PlayerSpecificSettings* GlobalNamespace::PlayerSettingsPanelController::get_playerSpecificSettings() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("PlayerSettingsPanelController").WithContext("get_playerSpecificSettings");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "get_playerSpecificSettings", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<GlobalNamespace::PlayerSpecificSettings*, false>(this, ___internal__method);
}
// Autogenerated method: PlayerSettingsPanelController.SetData
void GlobalNamespace::PlayerSettingsPanelController::SetData(GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("PlayerSettingsPanelController").WithContext("SetData");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "SetData", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(playerSpecificSettings)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, playerSpecificSettings);
}
// Autogenerated method: PlayerSettingsPanelController.SetLayout
void GlobalNamespace::PlayerSettingsPanelController::SetLayout(GlobalNamespace::PlayerSettingsPanelController::PlayerSettingsPanelLayout layout) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("PlayerSettingsPanelController").WithContext("SetLayout");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "SetLayout", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(layout)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, layout);
}
// Autogenerated method: PlayerSettingsPanelController.Awake
void GlobalNamespace::PlayerSettingsPanelController::Awake() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("PlayerSettingsPanelController").WithContext("Awake");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "Awake", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}
// Autogenerated method: PlayerSettingsPanelController.OnDestroy
void GlobalNamespace::PlayerSettingsPanelController::OnDestroy() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("PlayerSettingsPanelController").WithContext("OnDestroy");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "OnDestroy", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}
// Autogenerated method: PlayerSettingsPanelController.HandleSFXVolumeSettingsControllerValueDidChange
void GlobalNamespace::PlayerSettingsPanelController::HandleSFXVolumeSettingsControllerValueDidChange(GlobalNamespace::FormattedFloatListSettingsController* settingsController, float value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("PlayerSettingsPanelController").WithContext("HandleSFXVolumeSettingsControllerValueDidChange");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "HandleSFXVolumeSettingsControllerValueDidChange", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(settingsController, value)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, settingsController, value);
}
// Autogenerated method: PlayerSettingsPanelController.HandleSaberTrailIntensitySettingsControllerValueDidChange
void GlobalNamespace::PlayerSettingsPanelController::HandleSaberTrailIntensitySettingsControllerValueDidChange(GlobalNamespace::FormattedFloatListSettingsController* settingsController, float value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("PlayerSettingsPanelController").WithContext("HandleSaberTrailIntensitySettingsControllerValueDidChange");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "HandleSaberTrailIntensitySettingsControllerValueDidChange", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(settingsController, value)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, settingsController, value);
}
// Autogenerated method: PlayerSettingsPanelController.HandlePlayerHeightSettingsControllerValueDidChange
void GlobalNamespace::PlayerSettingsPanelController::HandlePlayerHeightSettingsControllerValueDidChange(float value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("PlayerSettingsPanelController").WithContext("HandlePlayerHeightSettingsControllerValueDidChange");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "HandlePlayerHeightSettingsControllerValueDidChange", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(value)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, value);
}
// Autogenerated method: PlayerSettingsPanelController.HandleNoteJumpStartBeatOffsetPositionSelected
void GlobalNamespace::PlayerSettingsPanelController::HandleNoteJumpStartBeatOffsetPositionSelected(int idx) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("PlayerSettingsPanelController").WithContext("HandleNoteJumpStartBeatOffsetPositionSelected");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "HandleNoteJumpStartBeatOffsetPositionSelected", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(idx)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, idx);
}
// Autogenerated method: PlayerSettingsPanelController.HandleAdvancedHudToggleChanged
void GlobalNamespace::PlayerSettingsPanelController::HandleAdvancedHudToggleChanged(bool on) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("PlayerSettingsPanelController").WithContext("HandleAdvancedHudToggleChanged");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "HandleAdvancedHudToggleChanged", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(on)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, on);
}
// Autogenerated method: PlayerSettingsPanelController.HandleNoTextsAndHudsToggleChanged
void GlobalNamespace::PlayerSettingsPanelController::HandleNoTextsAndHudsToggleChanged(bool on) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("PlayerSettingsPanelController").WithContext("HandleNoTextsAndHudsToggleChanged");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "HandleNoTextsAndHudsToggleChanged", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(on)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, on);
}
// Autogenerated method: PlayerSettingsPanelController.SetIsDirty
void GlobalNamespace::PlayerSettingsPanelController::SetIsDirty() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("PlayerSettingsPanelController").WithContext("SetIsDirty");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "SetIsDirty", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}
// Autogenerated method: PlayerSettingsPanelController.SetSection
void GlobalNamespace::PlayerSettingsPanelController::SetSection(UnityEngine::CanvasGroup* sectionCanvasGroup, bool block) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("PlayerSettingsPanelController").WithContext("SetSection");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "SetSection", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(sectionCanvasGroup, block)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, sectionCanvasGroup, block);
}
// Autogenerated method: PlayerSettingsPanelController.<Awake>b__27_0
void GlobalNamespace::PlayerSettingsPanelController::$Awake$b__27_0(bool on) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("PlayerSettingsPanelController").WithContext("<Awake>b__27_0");
  static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "<Awake>b__27_0", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(on))));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, on);
}
// Autogenerated method: PlayerSettingsPanelController.<Awake>b__27_1
void GlobalNamespace::PlayerSettingsPanelController::$Awake$b__27_1(bool on) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("PlayerSettingsPanelController").WithContext("<Awake>b__27_1");
  static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "<Awake>b__27_1", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(on))));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, on);
}
// Autogenerated method: PlayerSettingsPanelController.<Awake>b__27_2
void GlobalNamespace::PlayerSettingsPanelController::$Awake$b__27_2(bool on) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("PlayerSettingsPanelController").WithContext("<Awake>b__27_2");
  static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "<Awake>b__27_2", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(on))));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, on);
}
// Autogenerated method: PlayerSettingsPanelController.<Awake>b__27_3
void GlobalNamespace::PlayerSettingsPanelController::$Awake$b__27_3(bool on) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("PlayerSettingsPanelController").WithContext("<Awake>b__27_3");
  static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "<Awake>b__27_3", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(on))));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, on);
}
// Autogenerated method: PlayerSettingsPanelController.<Awake>b__27_4
void GlobalNamespace::PlayerSettingsPanelController::$Awake$b__27_4(bool on) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("PlayerSettingsPanelController").WithContext("<Awake>b__27_4");
  static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "<Awake>b__27_4", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(on))));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, on);
}
// Autogenerated method: PlayerSettingsPanelController.<Awake>b__27_5
void GlobalNamespace::PlayerSettingsPanelController::$Awake$b__27_5(bool on) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("PlayerSettingsPanelController").WithContext("<Awake>b__27_5");
  static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "<Awake>b__27_5", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(on))));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, on);
}
// Autogenerated method: PlayerSettingsPanelController.<Awake>b__27_6
void GlobalNamespace::PlayerSettingsPanelController::$Awake$b__27_6(bool on) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("PlayerSettingsPanelController").WithContext("<Awake>b__27_6");
  static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "<Awake>b__27_6", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(on))));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, on);
}
// Autogenerated method: PlayerSettingsPanelController.Refresh
void GlobalNamespace::PlayerSettingsPanelController::Refresh() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("PlayerSettingsPanelController").WithContext("Refresh");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "Refresh", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}
void GlobalNamespace::PlayerSettingsPanelController::GlobalNamespace_IRefreshable_Refresh() {
  GlobalNamespace::PlayerSettingsPanelController::Refresh();
}
