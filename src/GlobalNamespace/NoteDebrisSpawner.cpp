// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
// Including type: NoteDebrisSpawner
#include "GlobalNamespace/NoteDebrisSpawner.hpp"
// Including type: NoteCutInfo
#include "GlobalNamespace/NoteCutInfo.hpp"
// Including type: INoteController
#include "GlobalNamespace/INoteController.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
// Including type: NoteDebris/Pool
#include "GlobalNamespace/NoteDebris_Pool.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static private System.Single kMinLifeTime
float GlobalNamespace::NoteDebrisSpawner::_get_kMinLifeTime() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<float>("", "NoteDebrisSpawner", "kMinLifeTime"));
}
// Autogenerated static field setter
// Set static field: static private System.Single kMinLifeTime
void GlobalNamespace::NoteDebrisSpawner::_set_kMinLifeTime(float value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("", "NoteDebrisSpawner", "kMinLifeTime", value));
}
// Autogenerated static field getter
// Get static field: static private System.Single kMaxLifeTime
float GlobalNamespace::NoteDebrisSpawner::_get_kMaxLifeTime() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<float>("", "NoteDebrisSpawner", "kMaxLifeTime"));
}
// Autogenerated static field setter
// Set static field: static private System.Single kMaxLifeTime
void GlobalNamespace::NoteDebrisSpawner::_set_kMaxLifeTime(float value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("", "NoteDebrisSpawner", "kMaxLifeTime", value));
}
// Autogenerated static field getter
// Get static field: static private System.Single kLifeTimeOffset
float GlobalNamespace::NoteDebrisSpawner::_get_kLifeTimeOffset() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<float>("", "NoteDebrisSpawner", "kLifeTimeOffset"));
}
// Autogenerated static field setter
// Set static field: static private System.Single kLifeTimeOffset
void GlobalNamespace::NoteDebrisSpawner::_set_kLifeTimeOffset(float value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("", "NoteDebrisSpawner", "kLifeTimeOffset", value));
}
// Autogenerated method: NoteDebrisSpawner.SpawnDebris
void GlobalNamespace::NoteDebrisSpawner::SpawnDebris(GlobalNamespace::NoteCutInfo* noteCutInfo, GlobalNamespace::INoteController* noteController, UnityEngine::Vector3 moveVec) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SpawnDebris", noteCutInfo, noteController, moveVec));
}
// Autogenerated method: NoteDebrisSpawner.HandleNoteDebrisDidFinish
void GlobalNamespace::NoteDebrisSpawner::HandleNoteDebrisDidFinish(GlobalNamespace::NoteDebris* noteDebris) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "HandleNoteDebrisDidFinish", noteDebris));
}
// Autogenerated method: NoteDebrisSpawner..ctor
GlobalNamespace::NoteDebrisSpawner* GlobalNamespace::NoteDebrisSpawner::New_ctor() {
  return THROW_UNLESS(il2cpp_utils::New<NoteDebrisSpawner*>());
}
