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
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("UnityEngine").WithContext("Plane").WithContext("_get_size");
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<int>("UnityEngine", "Plane", "size"));
}
// Autogenerated static field setter
// Set static field: static System.Int32 size
void UnityEngine::Plane::_set_size(int value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("UnityEngine").WithContext("Plane").WithContext("_set_size");
  THROW_UNLESS(il2cpp_utils::SetFieldValue("UnityEngine", "Plane", "size", value));
}
// Autogenerated method: UnityEngine.Plane.get_normal
UnityEngine::Vector3 UnityEngine::Plane::get_normal() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("UnityEngine").WithContext("Plane").WithContext("get_normal");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(*this, "get_normal", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<UnityEngine::Vector3, false>(*this, ___internal__method);
}
// Autogenerated method: UnityEngine.Plane.SetNormalAndPosition
void UnityEngine::Plane::SetNormalAndPosition(UnityEngine::Vector3 inNormal, UnityEngine::Vector3 inPoint) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("UnityEngine").WithContext("Plane").WithContext("SetNormalAndPosition");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(*this, "SetNormalAndPosition", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(inNormal, inPoint)));
  ::il2cpp_utils::RunMethodThrow<void, false>(*this, ___internal__method, inNormal, inPoint);
}
// Autogenerated method: UnityEngine.Plane.ClosestPointOnPlane
UnityEngine::Vector3 UnityEngine::Plane::ClosestPointOnPlane(UnityEngine::Vector3 point) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("UnityEngine").WithContext("Plane").WithContext("ClosestPointOnPlane");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(*this, "ClosestPointOnPlane", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(point)));
  return ::il2cpp_utils::RunMethodThrow<UnityEngine::Vector3, false>(*this, ___internal__method, point);
}
// Autogenerated method: UnityEngine.Plane.GetDistanceToPoint
float UnityEngine::Plane::GetDistanceToPoint(UnityEngine::Vector3 point) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("UnityEngine").WithContext("Plane").WithContext("GetDistanceToPoint");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(*this, "GetDistanceToPoint", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(point)));
  return ::il2cpp_utils::RunMethodThrow<float, false>(*this, ___internal__method, point);
}
// Autogenerated method: UnityEngine.Plane.SameSide
bool UnityEngine::Plane::SameSide(UnityEngine::Vector3 inPt0, UnityEngine::Vector3 inPt1) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("UnityEngine").WithContext("Plane").WithContext("SameSide");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(*this, "SameSide", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(inPt0, inPt1)));
  return ::il2cpp_utils::RunMethodThrow<bool, false>(*this, ___internal__method, inPt0, inPt1);
}
// Autogenerated method: UnityEngine.Plane.Raycast
bool UnityEngine::Plane::Raycast(UnityEngine::Ray ray, float& enter) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("UnityEngine").WithContext("Plane").WithContext("Raycast");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(*this, "Raycast", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(ray, enter)));
  return ::il2cpp_utils::RunMethodThrow<bool, false>(*this, ___internal__method, ray, enter);
}
// Autogenerated method: UnityEngine.Plane.ToString
::Il2CppString* UnityEngine::Plane::ToString() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("UnityEngine").WithContext("Plane").WithContext("ToString");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(*this, "ToString", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<::Il2CppString*, false>(*this, ___internal__method);
}
