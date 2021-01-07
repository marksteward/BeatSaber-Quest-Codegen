// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: NoteCutSoundEffectManager
#include "GlobalNamespace/NoteCutSoundEffectManager.hpp"
// Including type: NoteCutSoundEffectManager/InitData
#include "GlobalNamespace/NoteCutSoundEffectManager_InitData.hpp"
// Including type: AudioManagerSO
#include "GlobalNamespace/AudioManagerSO.hpp"
// Including type: UnityEngine.AudioClip
#include "UnityEngine/AudioClip.hpp"
// Including type: BeatmapObjectManager
#include "GlobalNamespace/BeatmapObjectManager.hpp"
// Including type: SaberManager
#include "GlobalNamespace/SaberManager.hpp"
// Including type: AudioTimeSyncController
#include "GlobalNamespace/AudioTimeSyncController.hpp"
// Including type: RandomObjectPicker`1
#include "GlobalNamespace/RandomObjectPicker_1.hpp"
// Including type: MonoMemoryPoolContainer`1
#include "GlobalNamespace/MonoMemoryPoolContainer_1.hpp"
// Including type: NoteController
#include "GlobalNamespace/NoteController.hpp"
// Including type: NoteCutInfo
#include "GlobalNamespace/NoteCutInfo.hpp"
// Including type: NoteCutSoundEffect/Pool
#include "GlobalNamespace/NoteCutSoundEffect_Pool.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static private System.Int32 kMaxNumberOfEffects
int GlobalNamespace::NoteCutSoundEffectManager::_get_kMaxNumberOfEffects() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("NoteCutSoundEffectManager").WithContext("_get_kMaxNumberOfEffects");
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<int>("", "NoteCutSoundEffectManager", "kMaxNumberOfEffects"));
}
// Autogenerated static field setter
// Set static field: static private System.Int32 kMaxNumberOfEffects
void GlobalNamespace::NoteCutSoundEffectManager::_set_kMaxNumberOfEffects(int value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("NoteCutSoundEffectManager").WithContext("_set_kMaxNumberOfEffects");
  THROW_UNLESS(il2cpp_utils::SetFieldValue("", "NoteCutSoundEffectManager", "kMaxNumberOfEffects", value));
}
// Autogenerated static field getter
// Get static field: static private System.Single kTwoNotesAtTheSameTimeVolumeMul
float GlobalNamespace::NoteCutSoundEffectManager::_get_kTwoNotesAtTheSameTimeVolumeMul() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("NoteCutSoundEffectManager").WithContext("_get_kTwoNotesAtTheSameTimeVolumeMul");
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<float>("", "NoteCutSoundEffectManager", "kTwoNotesAtTheSameTimeVolumeMul"));
}
// Autogenerated static field setter
// Set static field: static private System.Single kTwoNotesAtTheSameTimeVolumeMul
void GlobalNamespace::NoteCutSoundEffectManager::_set_kTwoNotesAtTheSameTimeVolumeMul(float value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("NoteCutSoundEffectManager").WithContext("_set_kTwoNotesAtTheSameTimeVolumeMul");
  THROW_UNLESS(il2cpp_utils::SetFieldValue("", "NoteCutSoundEffectManager", "kTwoNotesAtTheSameTimeVolumeMul", value));
}
// Autogenerated static field getter
// Get static field: static private System.Single kDenseNotesVolumeMul
float GlobalNamespace::NoteCutSoundEffectManager::_get_kDenseNotesVolumeMul() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("NoteCutSoundEffectManager").WithContext("_get_kDenseNotesVolumeMul");
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<float>("", "NoteCutSoundEffectManager", "kDenseNotesVolumeMul"));
}
// Autogenerated static field setter
// Set static field: static private System.Single kDenseNotesVolumeMul
void GlobalNamespace::NoteCutSoundEffectManager::_set_kDenseNotesVolumeMul(float value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("NoteCutSoundEffectManager").WithContext("_set_kDenseNotesVolumeMul");
  THROW_UNLESS(il2cpp_utils::SetFieldValue("", "NoteCutSoundEffectManager", "kDenseNotesVolumeMul", value));
}
// Autogenerated method: NoteCutSoundEffectManager.get_handleWrongSaberTypeAsGood
bool GlobalNamespace::NoteCutSoundEffectManager::get_handleWrongSaberTypeAsGood() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("NoteCutSoundEffectManager").WithContext("get_handleWrongSaberTypeAsGood");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "get_handleWrongSaberTypeAsGood", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method);
}
// Autogenerated method: NoteCutSoundEffectManager.set_handleWrongSaberTypeAsGood
void GlobalNamespace::NoteCutSoundEffectManager::set_handleWrongSaberTypeAsGood(bool value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("NoteCutSoundEffectManager").WithContext("set_handleWrongSaberTypeAsGood");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "set_handleWrongSaberTypeAsGood", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(value)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, value);
}
// Autogenerated method: NoteCutSoundEffectManager.Start
void GlobalNamespace::NoteCutSoundEffectManager::Start() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("NoteCutSoundEffectManager").WithContext("Start");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "Start", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}
// Autogenerated method: NoteCutSoundEffectManager.OnDestroy
void GlobalNamespace::NoteCutSoundEffectManager::OnDestroy() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("NoteCutSoundEffectManager").WithContext("OnDestroy");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "OnDestroy", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}
// Autogenerated method: NoteCutSoundEffectManager.HandleNoteWasSpawned
void GlobalNamespace::NoteCutSoundEffectManager::HandleNoteWasSpawned(GlobalNamespace::NoteController* noteController) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("NoteCutSoundEffectManager").WithContext("HandleNoteWasSpawned");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "HandleNoteWasSpawned", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(noteController)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, noteController);
}
// Autogenerated method: NoteCutSoundEffectManager.HandleNoteWasCut
void GlobalNamespace::NoteCutSoundEffectManager::HandleNoteWasCut(GlobalNamespace::NoteController* noteController, GlobalNamespace::NoteCutInfo* noteCutInfo) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("NoteCutSoundEffectManager").WithContext("HandleNoteWasCut");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "HandleNoteWasCut", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(noteController, noteCutInfo)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, noteController, noteCutInfo);
}
// Autogenerated method: NoteCutSoundEffectManager.HandleCutSoundEffectDidFinish
void GlobalNamespace::NoteCutSoundEffectManager::HandleCutSoundEffectDidFinish(GlobalNamespace::NoteCutSoundEffect* cutSoundEffect) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("NoteCutSoundEffectManager").WithContext("HandleCutSoundEffectDidFinish");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "HandleCutSoundEffectDidFinish", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(cutSoundEffect)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, cutSoundEffect);
}
// Autogenerated method: NoteCutSoundEffectManager.Pause
void GlobalNamespace::NoteCutSoundEffectManager::Pause() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("NoteCutSoundEffectManager").WithContext("Pause");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "Pause", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}
// Autogenerated method: NoteCutSoundEffectManager.Resume
void GlobalNamespace::NoteCutSoundEffectManager::Resume() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("NoteCutSoundEffectManager").WithContext("Resume");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "Resume", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}
