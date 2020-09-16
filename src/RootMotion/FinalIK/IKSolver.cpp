// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: RootMotion.FinalIK.IKSolver
#include "RootMotion/FinalIK/IKSolver.hpp"
// Including type: RootMotion.FinalIK.IKSolver/Point
#include "RootMotion/FinalIK/IKSolver_Point.hpp"
// Including type: RootMotion.FinalIK.IKSolver/Bone
#include "RootMotion/FinalIK/IKSolver_Bone.hpp"
// Including type: RootMotion.FinalIK.IKSolver/Node
#include "RootMotion/FinalIK/IKSolver_Node.hpp"
// Including type: RootMotion.FinalIK.IKSolver/UpdateDelegate
#include "RootMotion/FinalIK/IKSolver_UpdateDelegate.hpp"
// Including type: RootMotion.FinalIK.IKSolver/IterationDelegate
#include "RootMotion/FinalIK/IKSolver_IterationDelegate.hpp"
// Including type: UnityEngine.Transform
#include "UnityEngine/Transform.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: RootMotion.FinalIK.IKSolver.IsValid
bool RootMotion::FinalIK::IKSolver::IsValid() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "IsValid"));
}
// Autogenerated method: RootMotion.FinalIK.IKSolver.IsValid
bool RootMotion::FinalIK::IKSolver::IsValid(::Il2CppString*& message) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "IsValid", message));
}
// Autogenerated method: RootMotion.FinalIK.IKSolver.Initiate
void RootMotion::FinalIK::IKSolver::Initiate(UnityEngine::Transform* root) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Initiate", root));
}
// Autogenerated method: RootMotion.FinalIK.IKSolver.Update
void RootMotion::FinalIK::IKSolver::Update() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Update"));
}
// Autogenerated method: RootMotion.FinalIK.IKSolver.GetIKPosition
UnityEngine::Vector3 RootMotion::FinalIK::IKSolver::GetIKPosition() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Vector3>(this, "GetIKPosition"));
}
// Autogenerated method: RootMotion.FinalIK.IKSolver.SetIKPosition
void RootMotion::FinalIK::IKSolver::SetIKPosition(UnityEngine::Vector3 position) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SetIKPosition", position));
}
// Autogenerated method: RootMotion.FinalIK.IKSolver.GetIKPositionWeight
float RootMotion::FinalIK::IKSolver::GetIKPositionWeight() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<float>(this, "GetIKPositionWeight"));
}
// Autogenerated method: RootMotion.FinalIK.IKSolver.SetIKPositionWeight
void RootMotion::FinalIK::IKSolver::SetIKPositionWeight(float weight) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SetIKPositionWeight", weight));
}
// Autogenerated method: RootMotion.FinalIK.IKSolver.GetRoot
UnityEngine::Transform* RootMotion::FinalIK::IKSolver::GetRoot() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Transform*>(this, "GetRoot"));
}
// Autogenerated method: RootMotion.FinalIK.IKSolver.get_initiated
bool RootMotion::FinalIK::IKSolver::get_initiated() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_initiated"));
}
// Autogenerated method: RootMotion.FinalIK.IKSolver.set_initiated
void RootMotion::FinalIK::IKSolver::set_initiated(bool value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_initiated", value));
}
// Autogenerated method: RootMotion.FinalIK.IKSolver.GetPoints
::Array<RootMotion::FinalIK::IKSolver::Point*>* RootMotion::FinalIK::IKSolver::GetPoints() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Array<RootMotion::FinalIK::IKSolver::Point*>*>(this, "GetPoints"));
}
// Autogenerated method: RootMotion.FinalIK.IKSolver.GetPoint
RootMotion::FinalIK::IKSolver::Point* RootMotion::FinalIK::IKSolver::GetPoint(UnityEngine::Transform* transform) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<RootMotion::FinalIK::IKSolver::Point*>(this, "GetPoint", transform));
}
// Autogenerated method: RootMotion.FinalIK.IKSolver.FixTransforms
void RootMotion::FinalIK::IKSolver::FixTransforms() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "FixTransforms"));
}
// Autogenerated method: RootMotion.FinalIK.IKSolver.StoreDefaultLocalState
void RootMotion::FinalIK::IKSolver::StoreDefaultLocalState() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "StoreDefaultLocalState"));
}
// Autogenerated method: RootMotion.FinalIK.IKSolver.OnInitiate
void RootMotion::FinalIK::IKSolver::OnInitiate() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "OnInitiate"));
}
// Autogenerated method: RootMotion.FinalIK.IKSolver.OnUpdate
void RootMotion::FinalIK::IKSolver::OnUpdate() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "OnUpdate"));
}
// Autogenerated method: RootMotion.FinalIK.IKSolver.LogWarning
void RootMotion::FinalIK::IKSolver::LogWarning(::Il2CppString* message) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "LogWarning", message));
}
// Autogenerated method: RootMotion.FinalIK.IKSolver.ContainsDuplicateBone
UnityEngine::Transform* RootMotion::FinalIK::IKSolver::ContainsDuplicateBone(::Array<RootMotion::FinalIK::IKSolver::Bone*>* bones) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Transform*>("RootMotion.FinalIK", "IKSolver", "ContainsDuplicateBone", bones));
}
// Autogenerated method: RootMotion.FinalIK.IKSolver.HierarchyIsValid
bool RootMotion::FinalIK::IKSolver::HierarchyIsValid(::Array<RootMotion::FinalIK::IKSolver::Bone*>* bones) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("RootMotion.FinalIK", "IKSolver", "HierarchyIsValid", bones));
}
// Autogenerated method: RootMotion.FinalIK.IKSolver.PreSolveBones
float RootMotion::FinalIK::IKSolver::PreSolveBones(::Array<RootMotion::FinalIK::IKSolver::Bone*>*& bones) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<float>("RootMotion.FinalIK", "IKSolver", "PreSolveBones", bones));
}
// Autogenerated method: RootMotion.FinalIK.IKSolver..ctor
RootMotion::FinalIK::IKSolver* RootMotion::FinalIK::IKSolver::New_ctor() {
  return THROW_UNLESS(il2cpp_utils::New<IKSolver*>());
}
