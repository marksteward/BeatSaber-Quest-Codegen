// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
// Including type: ColorManager
#include "GlobalNamespace/ColorManager.hpp"
// Including type: ColorSchemeSO
#include "GlobalNamespace/ColorSchemeSO.hpp"
// Including type: SimpleColorSO
#include "GlobalNamespace/SimpleColorSO.hpp"
// Including type: ColorScheme
#include "GlobalNamespace/ColorScheme.hpp"
// Including type: System.Action
#include "System/Action.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
// Including type: NoteType
#include "GlobalNamespace/NoteType.hpp"
// Including type: SaberType
#include "GlobalNamespace/SaberType.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: ColorManager.add_colorsDidChangeEvent
void GlobalNamespace::ColorManager::add_colorsDidChangeEvent(System::Action* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "add_colorsDidChangeEvent", value));
}
// Autogenerated method: ColorManager.remove_colorsDidChangeEvent
void GlobalNamespace::ColorManager::remove_colorsDidChangeEvent(System::Action* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "remove_colorsDidChangeEvent", value));
}
// Autogenerated method: ColorManager.Awake
void GlobalNamespace::ColorManager::Awake() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Awake"));
}
// Autogenerated method: ColorManager.Start
void GlobalNamespace::ColorManager::Start() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Start"));
}
// Autogenerated method: ColorManager.ColorForNoteType
UnityEngine::Color GlobalNamespace::ColorManager::ColorForNoteType(GlobalNamespace::NoteType type) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Color>(this, "ColorForNoteType", type));
}
// Autogenerated method: ColorManager.ColorForSaberType
UnityEngine::Color GlobalNamespace::ColorManager::ColorForSaberType(GlobalNamespace::SaberType type) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Color>(this, "ColorForSaberType", type));
}
// Autogenerated method: ColorManager.EffectsColorForSaberType
UnityEngine::Color GlobalNamespace::ColorManager::EffectsColorForSaberType(GlobalNamespace::SaberType type) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Color>(this, "EffectsColorForSaberType", type));
}
// Autogenerated method: ColorManager.GetObstacleEffectColor
UnityEngine::Color GlobalNamespace::ColorManager::GetObstacleEffectColor() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Color>(this, "GetObstacleEffectColor"));
}
// Autogenerated method: ColorManager..ctor
GlobalNamespace::ColorManager* GlobalNamespace::ColorManager::New_ctor() {
  return THROW_UNLESS(il2cpp_utils::New<ColorManager*>());
}
