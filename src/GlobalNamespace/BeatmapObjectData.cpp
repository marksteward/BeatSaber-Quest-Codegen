// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
// Including type: BeatmapObjectData
#include "GlobalNamespace/BeatmapObjectData.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: BeatmapObjectData.get_beatmapObjectType
GlobalNamespace::BeatmapObjectType GlobalNamespace::BeatmapObjectData::get_beatmapObjectType() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<GlobalNamespace::BeatmapObjectType>(this, "get_beatmapObjectType"));
}
// Autogenerated method: BeatmapObjectData.set_beatmapObjectType
void GlobalNamespace::BeatmapObjectData::set_beatmapObjectType(GlobalNamespace::BeatmapObjectType value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_beatmapObjectType", value));
}
// Autogenerated method: BeatmapObjectData.get_time
float GlobalNamespace::BeatmapObjectData::get_time() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<float>(this, "get_time"));
}
// Autogenerated method: BeatmapObjectData.set_time
void GlobalNamespace::BeatmapObjectData::set_time(float value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_time", value));
}
// Autogenerated method: BeatmapObjectData.get_lineIndex
int GlobalNamespace::BeatmapObjectData::get_lineIndex() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "get_lineIndex"));
}
// Autogenerated method: BeatmapObjectData.set_lineIndex
void GlobalNamespace::BeatmapObjectData::set_lineIndex(int value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_lineIndex", value));
}
// Autogenerated method: BeatmapObjectData.get_id
int GlobalNamespace::BeatmapObjectData::get_id() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "get_id"));
}
// Autogenerated method: BeatmapObjectData.set_id
void GlobalNamespace::BeatmapObjectData::set_id(int value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_id", value));
}
// Autogenerated method: BeatmapObjectData..ctor
GlobalNamespace::BeatmapObjectData* GlobalNamespace::BeatmapObjectData::New_ctor(GlobalNamespace::BeatmapObjectType beatmapObjectType, int id, float time, int lineIndex) {
  return THROW_UNLESS(il2cpp_utils::New<BeatmapObjectData*>(beatmapObjectType, id, time, lineIndex));
}
// Autogenerated method: BeatmapObjectData.MirrorLineIndex
void GlobalNamespace::BeatmapObjectData::MirrorLineIndex(int lineCount) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "MirrorLineIndex", lineCount));
}
// Autogenerated method: BeatmapObjectData.GetCopy
GlobalNamespace::BeatmapObjectData* GlobalNamespace::BeatmapObjectData::GetCopy() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<GlobalNamespace::BeatmapObjectData*>(this, "GetCopy"));
}
