// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
// Including type: SaberClashChecker
#include "GlobalNamespace/SaberClashChecker.hpp"
// Including type: PlayerController
#include "GlobalNamespace/PlayerController.hpp"
// Including type: Saber
#include "GlobalNamespace/Saber.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: SaberClashChecker.get_sabersAreClashing
bool GlobalNamespace::SaberClashChecker::get_sabersAreClashing() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_sabersAreClashing"));
}
// Autogenerated method: SaberClashChecker.set_sabersAreClashing
void GlobalNamespace::SaberClashChecker::set_sabersAreClashing(bool value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_sabersAreClashing", value));
}
// Autogenerated method: SaberClashChecker.get_clashingPoint
UnityEngine::Vector3 GlobalNamespace::SaberClashChecker::get_clashingPoint() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Vector3>(this, "get_clashingPoint"));
}
// Autogenerated method: SaberClashChecker.set_clashingPoint
void GlobalNamespace::SaberClashChecker::set_clashingPoint(UnityEngine::Vector3 value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_clashingPoint", value));
}
// Autogenerated method: SaberClashChecker.Start
void GlobalNamespace::SaberClashChecker::Start() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Start"));
}
// Autogenerated method: SaberClashChecker.Update
void GlobalNamespace::SaberClashChecker::Update() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Update"));
}
// Autogenerated method: SaberClashChecker.OnDisable
void GlobalNamespace::SaberClashChecker::OnDisable() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "OnDisable"));
}
// Autogenerated method: SaberClashChecker.SegmentToSegmentDist
float GlobalNamespace::SaberClashChecker::SegmentToSegmentDist(UnityEngine::Vector3 fromA, UnityEngine::Vector3 toA, UnityEngine::Vector3 fromB, UnityEngine::Vector3 toB, UnityEngine::Vector3& inbetweenPoint) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<float>(this, "SegmentToSegmentDist", fromA, toA, fromB, toB, inbetweenPoint));
}
// Autogenerated method: SaberClashChecker..ctor
GlobalNamespace::SaberClashChecker* GlobalNamespace::SaberClashChecker::New_ctor() {
  return THROW_UNLESS(il2cpp_utils::New<SaberClashChecker*>());
}
