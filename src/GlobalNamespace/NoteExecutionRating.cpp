// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
// Including type: NoteExecutionRating
#include "GlobalNamespace/NoteExecutionRating.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: NoteExecutionRating.get_rating
GlobalNamespace::NoteExecutionRating::Rating GlobalNamespace::NoteExecutionRating::get_rating() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<GlobalNamespace::NoteExecutionRating::Rating>(this, "get_rating"));
}
// Autogenerated method: NoteExecutionRating.set_rating
void GlobalNamespace::NoteExecutionRating::set_rating(GlobalNamespace::NoteExecutionRating::Rating value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_rating", value));
}
// Autogenerated method: NoteExecutionRating.get_cutScore
int GlobalNamespace::NoteExecutionRating::get_cutScore() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "get_cutScore"));
}
// Autogenerated method: NoteExecutionRating.set_cutScore
void GlobalNamespace::NoteExecutionRating::set_cutScore(int value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_cutScore", value));
}
// Autogenerated method: NoteExecutionRating.get_cutTimeDeviation
float GlobalNamespace::NoteExecutionRating::get_cutTimeDeviation() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<float>(this, "get_cutTimeDeviation"));
}
// Autogenerated method: NoteExecutionRating.set_cutTimeDeviation
void GlobalNamespace::NoteExecutionRating::set_cutTimeDeviation(float value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_cutTimeDeviation", value));
}
// Autogenerated method: NoteExecutionRating.get_cutDirDeviation
float GlobalNamespace::NoteExecutionRating::get_cutDirDeviation() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<float>(this, "get_cutDirDeviation"));
}
// Autogenerated method: NoteExecutionRating.set_cutDirDeviation
void GlobalNamespace::NoteExecutionRating::set_cutDirDeviation(float value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_cutDirDeviation", value));
}
// Autogenerated method: NoteExecutionRating..ctor
GlobalNamespace::NoteExecutionRating* GlobalNamespace::NoteExecutionRating::New_ctor(float time, GlobalNamespace::NoteExecutionRating::Rating rating, int cutScore, float cutTimeDeviation, float cutDirDeviation) {
  return THROW_UNLESS(il2cpp_utils::New<NoteExecutionRating*>(time, rating, cutScore, cutTimeDeviation, cutDirDeviation));
}
