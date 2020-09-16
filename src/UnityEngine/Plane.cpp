// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Plane
#include "UnityEngine/Plane.hpp"
// Including type: UnityEngine.Ray
#include "UnityEngine/Ray.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static System.Int32 size
int UnityEngine::Plane::_get_size() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<int>("UnityEngine", "Plane", "size"));
}
// Autogenerated static field setter
// Set static field: static System.Int32 size
void UnityEngine::Plane::_set_size(int value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("UnityEngine", "Plane", "size", value));
}
// Autogenerated method: UnityEngine.Plane.get_normal
UnityEngine::Vector3 UnityEngine::Plane::get_normal() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Vector3>(*this, "get_normal"));
}
// Autogenerated method: UnityEngine.Plane..ctor
UnityEngine::Plane::Plane(UnityEngine::Vector3 inNormal, UnityEngine::Vector3 inPoint) {
  THROW_UNLESS(il2cpp_utils::RunMethod(*this, ".ctor", inNormal, inPoint));
}
// Autogenerated method: UnityEngine.Plane..ctor
UnityEngine::Plane::Plane(UnityEngine::Vector3 a, UnityEngine::Vector3 b, UnityEngine::Vector3 c) {
  THROW_UNLESS(il2cpp_utils::RunMethod(*this, ".ctor", a, b, c));
}
// Autogenerated method: UnityEngine.Plane.SetNormalAndPosition
void UnityEngine::Plane::SetNormalAndPosition(UnityEngine::Vector3 inNormal, UnityEngine::Vector3 inPoint) {
  THROW_UNLESS(il2cpp_utils::RunMethod(*this, "SetNormalAndPosition", inNormal, inPoint));
}
// Autogenerated method: UnityEngine.Plane.ClosestPointOnPlane
UnityEngine::Vector3 UnityEngine::Plane::ClosestPointOnPlane(UnityEngine::Vector3 point) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Vector3>(*this, "ClosestPointOnPlane", point));
}
// Autogenerated method: UnityEngine.Plane.GetDistanceToPoint
float UnityEngine::Plane::GetDistanceToPoint(UnityEngine::Vector3 point) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<float>(*this, "GetDistanceToPoint", point));
}
// Autogenerated method: UnityEngine.Plane.SameSide
bool UnityEngine::Plane::SameSide(UnityEngine::Vector3 inPt0, UnityEngine::Vector3 inPt1) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(*this, "SameSide", inPt0, inPt1));
}
// Autogenerated method: UnityEngine.Plane.Raycast
bool UnityEngine::Plane::Raycast(UnityEngine::Ray ray, float& enter) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(*this, "Raycast", ray, enter));
}
// Autogenerated method: UnityEngine.Plane.ToString
::Il2CppString* UnityEngine::Plane::ToString() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppString*>(*this, "ToString"));
}
