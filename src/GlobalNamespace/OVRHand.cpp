// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
// Including type: OVRHand
#include "GlobalNamespace/OVRHand.hpp"
// Including type: UnityEngine.Transform
#include "UnityEngine/Transform.hpp"
// Including type: OVRHand/HandFinger
#include "GlobalNamespace/OVRHand_HandFinger.hpp"
// Including type: UnityEngine.GameObject
#include "UnityEngine/GameObject.hpp"
// Including type: OVRPlugin/Step
#include "GlobalNamespace/OVRPlugin_Step.hpp"
// Including type: OVRSkeleton/SkeletonPoseData
#include "GlobalNamespace/OVRSkeleton_SkeletonPoseData.hpp"
// Including type: OVRSkeletonRenderer/SkeletonRendererData
#include "GlobalNamespace/OVRSkeletonRenderer_SkeletonRendererData.hpp"
// Including type: OVRMeshRenderer/MeshRendererData
#include "GlobalNamespace/OVRMeshRenderer_MeshRendererData.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: OVRHand.get_IsDataValid
bool GlobalNamespace::OVRHand::get_IsDataValid() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_IsDataValid"));
}
// Autogenerated method: OVRHand.set_IsDataValid
void GlobalNamespace::OVRHand::set_IsDataValid(bool value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_IsDataValid", value));
}
// Autogenerated method: OVRHand.get_IsDataHighConfidence
bool GlobalNamespace::OVRHand::get_IsDataHighConfidence() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_IsDataHighConfidence"));
}
// Autogenerated method: OVRHand.set_IsDataHighConfidence
void GlobalNamespace::OVRHand::set_IsDataHighConfidence(bool value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_IsDataHighConfidence", value));
}
// Autogenerated method: OVRHand.get_IsTracked
bool GlobalNamespace::OVRHand::get_IsTracked() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_IsTracked"));
}
// Autogenerated method: OVRHand.set_IsTracked
void GlobalNamespace::OVRHand::set_IsTracked(bool value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_IsTracked", value));
}
// Autogenerated method: OVRHand.get_IsSystemGestureInProgress
bool GlobalNamespace::OVRHand::get_IsSystemGestureInProgress() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_IsSystemGestureInProgress"));
}
// Autogenerated method: OVRHand.set_IsSystemGestureInProgress
void GlobalNamespace::OVRHand::set_IsSystemGestureInProgress(bool value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_IsSystemGestureInProgress", value));
}
// Autogenerated method: OVRHand.get_IsPointerPoseValid
bool GlobalNamespace::OVRHand::get_IsPointerPoseValid() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_IsPointerPoseValid"));
}
// Autogenerated method: OVRHand.set_IsPointerPoseValid
void GlobalNamespace::OVRHand::set_IsPointerPoseValid(bool value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_IsPointerPoseValid", value));
}
// Autogenerated method: OVRHand.get_PointerPose
UnityEngine::Transform* GlobalNamespace::OVRHand::get_PointerPose() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Transform*>(this, "get_PointerPose"));
}
// Autogenerated method: OVRHand.set_PointerPose
void GlobalNamespace::OVRHand::set_PointerPose(UnityEngine::Transform* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_PointerPose", value));
}
// Autogenerated method: OVRHand.get_HandScale
float GlobalNamespace::OVRHand::get_HandScale() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<float>(this, "get_HandScale"));
}
// Autogenerated method: OVRHand.set_HandScale
void GlobalNamespace::OVRHand::set_HandScale(float value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_HandScale", value));
}
// Autogenerated method: OVRHand.get_HandConfidence
GlobalNamespace::OVRHand::TrackingConfidence GlobalNamespace::OVRHand::get_HandConfidence() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<GlobalNamespace::OVRHand::TrackingConfidence>(this, "get_HandConfidence"));
}
// Autogenerated method: OVRHand.set_HandConfidence
void GlobalNamespace::OVRHand::set_HandConfidence(GlobalNamespace::OVRHand::TrackingConfidence value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_HandConfidence", value));
}
// Autogenerated method: OVRHand.Awake
void GlobalNamespace::OVRHand::Awake() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Awake"));
}
// Autogenerated method: OVRHand.Update
void GlobalNamespace::OVRHand::Update() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Update"));
}
// Autogenerated method: OVRHand.FixedUpdate
void GlobalNamespace::OVRHand::FixedUpdate() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "FixedUpdate"));
}
// Autogenerated method: OVRHand.GetHandState
void GlobalNamespace::OVRHand::GetHandState(GlobalNamespace::OVRPlugin::Step step) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "GetHandState", step));
}
// Autogenerated method: OVRHand.GetFingerIsPinching
bool GlobalNamespace::OVRHand::GetFingerIsPinching(GlobalNamespace::OVRHand::HandFinger finger) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "GetFingerIsPinching", finger));
}
// Autogenerated method: OVRHand.GetFingerPinchStrength
float GlobalNamespace::OVRHand::GetFingerPinchStrength(GlobalNamespace::OVRHand::HandFinger finger) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<float>(this, "GetFingerPinchStrength", finger));
}
// Autogenerated method: OVRHand.GetFingerConfidence
GlobalNamespace::OVRHand::TrackingConfidence GlobalNamespace::OVRHand::GetFingerConfidence(GlobalNamespace::OVRHand::HandFinger finger) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<GlobalNamespace::OVRHand::TrackingConfidence>(this, "GetFingerConfidence", finger));
}
// Autogenerated method: OVRHand.OVRSkeleton.IOVRSkeletonDataProvider.GetSkeletonType
GlobalNamespace::OVRSkeleton::SkeletonType GlobalNamespace::OVRHand::GlobalNamespace_OVRSkeleton_IOVRSkeletonDataProvider_GetSkeletonType() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<GlobalNamespace::OVRSkeleton::SkeletonType>(this, "OVRSkeleton.IOVRSkeletonDataProvider.GetSkeletonType"));
}
// Autogenerated method: OVRHand.OVRSkeleton.IOVRSkeletonDataProvider.GetSkeletonPoseData
GlobalNamespace::OVRSkeleton::SkeletonPoseData GlobalNamespace::OVRHand::GlobalNamespace_OVRSkeleton_IOVRSkeletonDataProvider_GetSkeletonPoseData() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<GlobalNamespace::OVRSkeleton::SkeletonPoseData>(this, "OVRSkeleton.IOVRSkeletonDataProvider.GetSkeletonPoseData"));
}
// Autogenerated method: OVRHand.OVRSkeletonRenderer.IOVRSkeletonRendererDataProvider.GetSkeletonRendererData
GlobalNamespace::OVRSkeletonRenderer::SkeletonRendererData GlobalNamespace::OVRHand::GlobalNamespace_OVRSkeletonRenderer_IOVRSkeletonRendererDataProvider_GetSkeletonRendererData() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<GlobalNamespace::OVRSkeletonRenderer::SkeletonRendererData>(this, "OVRSkeletonRenderer.IOVRSkeletonRendererDataProvider.GetSkeletonRendererData"));
}
// Autogenerated method: OVRHand.OVRMesh.IOVRMeshDataProvider.GetMeshType
GlobalNamespace::OVRMesh::MeshType GlobalNamespace::OVRHand::GlobalNamespace_OVRMesh_IOVRMeshDataProvider_GetMeshType() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<GlobalNamespace::OVRMesh::MeshType>(this, "OVRMesh.IOVRMeshDataProvider.GetMeshType"));
}
// Autogenerated method: OVRHand.OVRMeshRenderer.IOVRMeshRendererDataProvider.GetMeshRendererData
GlobalNamespace::OVRMeshRenderer::MeshRendererData GlobalNamespace::OVRHand::GlobalNamespace_OVRMeshRenderer_IOVRMeshRendererDataProvider_GetMeshRendererData() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<GlobalNamespace::OVRMeshRenderer::MeshRendererData>(this, "OVRMeshRenderer.IOVRMeshRendererDataProvider.GetMeshRendererData"));
}
// Autogenerated method: OVRHand..ctor
GlobalNamespace::OVRHand* GlobalNamespace::OVRHand::New_ctor() {
  return THROW_UNLESS(il2cpp_utils::New<OVRHand*>());
}
