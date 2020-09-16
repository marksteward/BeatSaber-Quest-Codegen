// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
// Including type: LightSwitchEventEffect
#include "GlobalNamespace/LightSwitchEventEffect.hpp"
// Including type: ColorSO
#include "GlobalNamespace/ColorSO.hpp"
// Including type: BeatmapObjectCallbackController
#include "GlobalNamespace/BeatmapObjectCallbackController.hpp"
// Including type: LightWithIdManager
#include "GlobalNamespace/LightWithIdManager.hpp"
// Including type: BeatmapEventData
#include "GlobalNamespace/BeatmapEventData.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: LightSwitchEventEffect.get_LightsID
int GlobalNamespace::LightSwitchEventEffect::get_LightsID() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "get_LightsID"));
}
// Autogenerated method: LightSwitchEventEffect.Start
void GlobalNamespace::LightSwitchEventEffect::Start() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Start"));
}
// Autogenerated method: LightSwitchEventEffect.OnDestroy
void GlobalNamespace::LightSwitchEventEffect::OnDestroy() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "OnDestroy"));
}
// Autogenerated method: LightSwitchEventEffect.Update
void GlobalNamespace::LightSwitchEventEffect::Update() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Update"));
}
// Autogenerated method: LightSwitchEventEffect.HandleBeatmapObjectCallbackControllerBeatmapEventDidTrigger
void GlobalNamespace::LightSwitchEventEffect::HandleBeatmapObjectCallbackControllerBeatmapEventDidTrigger(GlobalNamespace::BeatmapEventData* beatmapEventData) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "HandleBeatmapObjectCallbackControllerBeatmapEventDidTrigger", beatmapEventData));
}
// Autogenerated method: LightSwitchEventEffect.ProcessLightSwitchEvent
void GlobalNamespace::LightSwitchEventEffect::ProcessLightSwitchEvent(int beatmapEventDataValue, bool updateColorsOnly) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "ProcessLightSwitchEvent", beatmapEventDataValue, updateColorsOnly));
}
// Autogenerated method: LightSwitchEventEffect.GetNormalColor
UnityEngine::Color GlobalNamespace::LightSwitchEventEffect::GetNormalColor(int beatmapEventValue) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Color>(this, "GetNormalColor", beatmapEventValue));
}
// Autogenerated method: LightSwitchEventEffect.GetHighlightColor
UnityEngine::Color GlobalNamespace::LightSwitchEventEffect::GetHighlightColor(int beatmapEventValue) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Color>(this, "GetHighlightColor", beatmapEventValue));
}
// Autogenerated method: LightSwitchEventEffect.SetColor
void GlobalNamespace::LightSwitchEventEffect::SetColor(UnityEngine::Color color) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SetColor", color));
}
// Autogenerated method: LightSwitchEventEffect..ctor
GlobalNamespace::LightSwitchEventEffect* GlobalNamespace::LightSwitchEventEffect::New_ctor() {
  return THROW_UNLESS(il2cpp_utils::New<LightSwitchEventEffect*>());
}
