// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
// Including type: Saber
#include "GlobalNamespace/Saber.hpp"
// Including type: UnityEngine.Transform
#include "UnityEngine/Transform.hpp"
// Including type: VRController
#include "GlobalNamespace/VRController.hpp"
// Including type: SaberTypeObject
#include "GlobalNamespace/SaberTypeObject.hpp"
// Including type: SaberMovementData
#include "GlobalNamespace/SaberMovementData.hpp"
// Including type: System.Collections.Generic.List`1
#include "System/Collections/Generic/List_1.hpp"
// Including type: SaberSwingRatingCounter
#include "GlobalNamespace/SaberSwingRatingCounter.hpp"
// Including type: Cutter
#include "GlobalNamespace/Cutter.hpp"
// Including type: SaberType
#include "GlobalNamespace/SaberType.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
// Including type: UnityEngine.Quaternion
#include "UnityEngine/Quaternion.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static private System.Int32 kNumberOfPrealocatedSwingRatingCounters
int GlobalNamespace::Saber::_get_kNumberOfPrealocatedSwingRatingCounters() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<int>("", "Saber", "kNumberOfPrealocatedSwingRatingCounters"));
}
// Autogenerated static field setter
// Set static field: static private System.Int32 kNumberOfPrealocatedSwingRatingCounters
void GlobalNamespace::Saber::_set_kNumberOfPrealocatedSwingRatingCounters(int value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("", "Saber", "kNumberOfPrealocatedSwingRatingCounters", value));
}
// Autogenerated method: Saber.get_saberType
GlobalNamespace::SaberType GlobalNamespace::Saber::get_saberType() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<GlobalNamespace::SaberType>(this, "get_saberType"));
}
// Autogenerated method: Saber.get_saberBladeTopPos
UnityEngine::Vector3 GlobalNamespace::Saber::get_saberBladeTopPos() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Vector3>(this, "get_saberBladeTopPos"));
}
// Autogenerated method: Saber.get_saberBladeBottomPos
UnityEngine::Vector3 GlobalNamespace::Saber::get_saberBladeBottomPos() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Vector3>(this, "get_saberBladeBottomPos"));
}
// Autogenerated method: Saber.get_handlePos
UnityEngine::Vector3 GlobalNamespace::Saber::get_handlePos() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Vector3>(this, "get_handlePos"));
}
// Autogenerated method: Saber.get_handleRot
UnityEngine::Quaternion GlobalNamespace::Saber::get_handleRot() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Quaternion>(this, "get_handleRot"));
}
// Autogenerated method: Saber.get_bladeSpeed
float GlobalNamespace::Saber::get_bladeSpeed() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<float>(this, "get_bladeSpeed"));
}
// Autogenerated method: Saber.get_disableCutting
bool GlobalNamespace::Saber::get_disableCutting() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_disableCutting"));
}
// Autogenerated method: Saber.set_disableCutting
void GlobalNamespace::Saber::set_disableCutting(bool value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_disableCutting", value));
}
// Autogenerated method: Saber.Start
void GlobalNamespace::Saber::Start() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Start"));
}
// Autogenerated method: Saber.ManualUpdate
void GlobalNamespace::Saber::ManualUpdate() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "ManualUpdate"));
}
// Autogenerated method: Saber.CreateSwingRatingCounter
GlobalNamespace::SaberSwingRatingCounter* GlobalNamespace::Saber::CreateSwingRatingCounter(UnityEngine::Transform* noteTransform) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<GlobalNamespace::SaberSwingRatingCounter*>(this, "CreateSwingRatingCounter", noteTransform));
}
// Autogenerated method: Saber.OnDrawGizmos
void GlobalNamespace::Saber::OnDrawGizmos() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "OnDrawGizmos"));
}
// Autogenerated method: Saber.OverridePositionAndRotation
void GlobalNamespace::Saber::OverridePositionAndRotation(UnityEngine::Vector3 pos, UnityEngine::Quaternion rot) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "OverridePositionAndRotation", pos, rot));
}
// Autogenerated method: Saber..ctor
GlobalNamespace::Saber* GlobalNamespace::Saber::New_ctor() {
  return THROW_UNLESS(il2cpp_utils::New<Saber*>());
}
