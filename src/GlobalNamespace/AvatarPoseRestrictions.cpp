// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
// Including type: AvatarPoseRestrictions
#include "GlobalNamespace/AvatarPoseRestrictions.hpp"
// Including type: AvatarPoseController
#include "GlobalNamespace/AvatarPoseController.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: AvatarPoseRestrictions.Start
void GlobalNamespace::AvatarPoseRestrictions::Start() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Start"));
}
// Autogenerated method: AvatarPoseRestrictions.HandleAvatarPoseControllerPositionsWillBeSet
void GlobalNamespace::AvatarPoseRestrictions::HandleAvatarPoseControllerPositionsWillBeSet(UnityEngine::Quaternion headRotation, UnityEngine::Vector3 headPosition, UnityEngine::Vector3 leftHandPosition, UnityEngine::Vector3 rightHandPosition, UnityEngine::Vector3& newHeadPosition, UnityEngine::Vector3& newLeftHandPosition, UnityEngine::Vector3& newRightHandPosition) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "HandleAvatarPoseControllerPositionsWillBeSet", headRotation, headPosition, leftHandPosition, rightHandPosition, newHeadPosition, newLeftHandPosition, newRightHandPosition));
}
// Autogenerated method: AvatarPoseRestrictions.LimitHandPositionRelativeToHead
UnityEngine::Vector3 GlobalNamespace::AvatarPoseRestrictions::LimitHandPositionRelativeToHead(UnityEngine::Vector3 handPosition, UnityEngine::Vector3 headCenter) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Vector3>(this, "LimitHandPositionRelativeToHead", handPosition, headCenter));
}
// Autogenerated method: AvatarPoseRestrictions..ctor
GlobalNamespace::AvatarPoseRestrictions* GlobalNamespace::AvatarPoseRestrictions::New_ctor() {
  return THROW_UNLESS(il2cpp_utils::New<AvatarPoseRestrictions*>());
}