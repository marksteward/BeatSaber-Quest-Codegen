// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Matrix4x4
#include "UnityEngine/Matrix4x4.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
// Including type: UnityEngine.Quaternion
#include "UnityEngine/Quaternion.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static private readonly UnityEngine.Matrix4x4 zeroMatrix
UnityEngine::Matrix4x4 UnityEngine::Matrix4x4::_get_zeroMatrix() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("UnityEngine").WithContext("Matrix4x4").WithContext("_get_zeroMatrix");
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<UnityEngine::Matrix4x4>("UnityEngine", "Matrix4x4", "zeroMatrix"));
}
// Autogenerated static field setter
// Set static field: static private readonly UnityEngine.Matrix4x4 zeroMatrix
void UnityEngine::Matrix4x4::_set_zeroMatrix(UnityEngine::Matrix4x4 value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("UnityEngine").WithContext("Matrix4x4").WithContext("_set_zeroMatrix");
  THROW_UNLESS(il2cpp_utils::SetFieldValue("UnityEngine", "Matrix4x4", "zeroMatrix", value));
}
// Autogenerated static field getter
// Get static field: static private readonly UnityEngine.Matrix4x4 identityMatrix
UnityEngine::Matrix4x4 UnityEngine::Matrix4x4::_get_identityMatrix() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("UnityEngine").WithContext("Matrix4x4").WithContext("_get_identityMatrix");
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<UnityEngine::Matrix4x4>("UnityEngine", "Matrix4x4", "identityMatrix"));
}
// Autogenerated static field setter
// Set static field: static private readonly UnityEngine.Matrix4x4 identityMatrix
void UnityEngine::Matrix4x4::_set_identityMatrix(UnityEngine::Matrix4x4 value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("UnityEngine").WithContext("Matrix4x4").WithContext("_set_identityMatrix");
  THROW_UNLESS(il2cpp_utils::SetFieldValue("UnityEngine", "Matrix4x4", "identityMatrix", value));
}
// Autogenerated method: UnityEngine.Matrix4x4.GetLossyScale
UnityEngine::Vector3 UnityEngine::Matrix4x4::GetLossyScale() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("UnityEngine").WithContext("Matrix4x4").WithContext("GetLossyScale");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(*this, "GetLossyScale", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<UnityEngine::Vector3, false>(*this, ___internal__method);
}
// Autogenerated method: UnityEngine.Matrix4x4.get_lossyScale
UnityEngine::Vector3 UnityEngine::Matrix4x4::get_lossyScale() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("UnityEngine").WithContext("Matrix4x4").WithContext("get_lossyScale");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(*this, "get_lossyScale", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<UnityEngine::Vector3, false>(*this, ___internal__method);
}
// Autogenerated method: UnityEngine.Matrix4x4.TRS
UnityEngine::Matrix4x4 UnityEngine::Matrix4x4::TRS(UnityEngine::Vector3 pos, UnityEngine::Quaternion q, UnityEngine::Vector3 s) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("UnityEngine").WithContext("Matrix4x4").WithContext("TRS");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("UnityEngine", "Matrix4x4", "TRS", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(pos, q, s)));
  return ::il2cpp_utils::RunMethodThrow<UnityEngine::Matrix4x4, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, pos, q, s);
}
// Autogenerated method: UnityEngine.Matrix4x4.Inverse
UnityEngine::Matrix4x4 UnityEngine::Matrix4x4::Inverse(UnityEngine::Matrix4x4 m) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("UnityEngine").WithContext("Matrix4x4").WithContext("Inverse");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("UnityEngine", "Matrix4x4", "Inverse", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(m)));
  return ::il2cpp_utils::RunMethodThrow<UnityEngine::Matrix4x4, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, m);
}
// Autogenerated method: UnityEngine.Matrix4x4.get_inverse
UnityEngine::Matrix4x4 UnityEngine::Matrix4x4::get_inverse() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("UnityEngine").WithContext("Matrix4x4").WithContext("get_inverse");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(*this, "get_inverse", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<UnityEngine::Matrix4x4, false>(*this, ___internal__method);
}
// Autogenerated method: UnityEngine.Matrix4x4.Ortho
UnityEngine::Matrix4x4 UnityEngine::Matrix4x4::Ortho(float left, float right, float bottom, float top, float zNear, float zFar) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("UnityEngine").WithContext("Matrix4x4").WithContext("Ortho");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("UnityEngine", "Matrix4x4", "Ortho", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(left, right, bottom, top, zNear, zFar)));
  return ::il2cpp_utils::RunMethodThrow<UnityEngine::Matrix4x4, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, left, right, bottom, top, zNear, zFar);
}
// Autogenerated method: UnityEngine.Matrix4x4.get_Item
float UnityEngine::Matrix4x4::get_Item(int row, int column) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("UnityEngine").WithContext("Matrix4x4").WithContext("get_Item");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(*this, "get_Item", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(row, column)));
  return ::il2cpp_utils::RunMethodThrow<float, false>(*this, ___internal__method, row, column);
}
// Autogenerated method: UnityEngine.Matrix4x4.set_Item
void UnityEngine::Matrix4x4::set_Item(int row, int column, float value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("UnityEngine").WithContext("Matrix4x4").WithContext("set_Item");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(*this, "set_Item", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(row, column, value)));
  ::il2cpp_utils::RunMethodThrow<void, false>(*this, ___internal__method, row, column, value);
}
// Autogenerated method: UnityEngine.Matrix4x4.get_Item
float UnityEngine::Matrix4x4::get_Item(int index) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("UnityEngine").WithContext("Matrix4x4").WithContext("get_Item");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(*this, "get_Item", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(index)));
  return ::il2cpp_utils::RunMethodThrow<float, false>(*this, ___internal__method, index);
}
// Autogenerated method: UnityEngine.Matrix4x4.set_Item
void UnityEngine::Matrix4x4::set_Item(int index, float value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("UnityEngine").WithContext("Matrix4x4").WithContext("set_Item");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(*this, "set_Item", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(index, value)));
  ::il2cpp_utils::RunMethodThrow<void, false>(*this, ___internal__method, index, value);
}
// Autogenerated method: UnityEngine.Matrix4x4.GetColumn
UnityEngine::Vector4 UnityEngine::Matrix4x4::GetColumn(int index) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("UnityEngine").WithContext("Matrix4x4").WithContext("GetColumn");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(*this, "GetColumn", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(index)));
  return ::il2cpp_utils::RunMethodThrow<UnityEngine::Vector4, false>(*this, ___internal__method, index);
}
// Autogenerated method: UnityEngine.Matrix4x4.SetColumn
void UnityEngine::Matrix4x4::SetColumn(int index, UnityEngine::Vector4 column) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("UnityEngine").WithContext("Matrix4x4").WithContext("SetColumn");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(*this, "SetColumn", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(index, column)));
  ::il2cpp_utils::RunMethodThrow<void, false>(*this, ___internal__method, index, column);
}
// Autogenerated method: UnityEngine.Matrix4x4.MultiplyPoint
UnityEngine::Vector3 UnityEngine::Matrix4x4::MultiplyPoint(UnityEngine::Vector3 point) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("UnityEngine").WithContext("Matrix4x4").WithContext("MultiplyPoint");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(*this, "MultiplyPoint", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(point)));
  return ::il2cpp_utils::RunMethodThrow<UnityEngine::Vector3, false>(*this, ___internal__method, point);
}
// Autogenerated method: UnityEngine.Matrix4x4.MultiplyPoint3x4
UnityEngine::Vector3 UnityEngine::Matrix4x4::MultiplyPoint3x4(UnityEngine::Vector3 point) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("UnityEngine").WithContext("Matrix4x4").WithContext("MultiplyPoint3x4");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(*this, "MultiplyPoint3x4", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(point)));
  return ::il2cpp_utils::RunMethodThrow<UnityEngine::Vector3, false>(*this, ___internal__method, point);
}
// Autogenerated method: UnityEngine.Matrix4x4.MultiplyVector
UnityEngine::Vector3 UnityEngine::Matrix4x4::MultiplyVector(UnityEngine::Vector3 vector) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("UnityEngine").WithContext("Matrix4x4").WithContext("MultiplyVector");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(*this, "MultiplyVector", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(vector)));
  return ::il2cpp_utils::RunMethodThrow<UnityEngine::Vector3, false>(*this, ___internal__method, vector);
}
// Autogenerated method: UnityEngine.Matrix4x4.Rotate
UnityEngine::Matrix4x4 UnityEngine::Matrix4x4::Rotate(UnityEngine::Quaternion q) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("UnityEngine").WithContext("Matrix4x4").WithContext("Rotate");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("UnityEngine", "Matrix4x4", "Rotate", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(q)));
  return ::il2cpp_utils::RunMethodThrow<UnityEngine::Matrix4x4, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, q);
}
// Autogenerated method: UnityEngine.Matrix4x4.get_identity
UnityEngine::Matrix4x4 UnityEngine::Matrix4x4::get_identity() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("UnityEngine").WithContext("Matrix4x4").WithContext("get_identity");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("UnityEngine", "Matrix4x4", "get_identity", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<UnityEngine::Matrix4x4, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method);
}
// Autogenerated method: UnityEngine.Matrix4x4..cctor
void UnityEngine::Matrix4x4::_cctor() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("UnityEngine").WithContext("Matrix4x4").WithContext(".cctor");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("UnityEngine", "Matrix4x4", ".cctor", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method);
}
// Autogenerated method: UnityEngine.Matrix4x4.GetLossyScale_Injected
void UnityEngine::Matrix4x4::GetLossyScale_Injected(UnityEngine::Matrix4x4& _unity_self, UnityEngine::Vector3& ret) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("UnityEngine").WithContext("Matrix4x4").WithContext("GetLossyScale_Injected");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("UnityEngine", "Matrix4x4", "GetLossyScale_Injected", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(_unity_self, ret)));
  ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, _unity_self, ret);
}
// Autogenerated method: UnityEngine.Matrix4x4.TRS_Injected
void UnityEngine::Matrix4x4::TRS_Injected(UnityEngine::Vector3& pos, UnityEngine::Quaternion& q, UnityEngine::Vector3& s, UnityEngine::Matrix4x4& ret) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("UnityEngine").WithContext("Matrix4x4").WithContext("TRS_Injected");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("UnityEngine", "Matrix4x4", "TRS_Injected", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(pos, q, s, ret)));
  ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, pos, q, s, ret);
}
// Autogenerated method: UnityEngine.Matrix4x4.Inverse_Injected
void UnityEngine::Matrix4x4::Inverse_Injected(UnityEngine::Matrix4x4& m, UnityEngine::Matrix4x4& ret) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("UnityEngine").WithContext("Matrix4x4").WithContext("Inverse_Injected");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("UnityEngine", "Matrix4x4", "Inverse_Injected", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(m, ret)));
  ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, m, ret);
}
// Autogenerated method: UnityEngine.Matrix4x4.Ortho_Injected
void UnityEngine::Matrix4x4::Ortho_Injected(float left, float right, float bottom, float top, float zNear, float zFar, UnityEngine::Matrix4x4& ret) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("UnityEngine").WithContext("Matrix4x4").WithContext("Ortho_Injected");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("UnityEngine", "Matrix4x4", "Ortho_Injected", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(left, right, bottom, top, zNear, zFar, ret)));
  ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, left, right, bottom, top, zNear, zFar, ret);
}
// Autogenerated method: UnityEngine.Matrix4x4.GetHashCode
int UnityEngine::Matrix4x4::GetHashCode() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("UnityEngine").WithContext("Matrix4x4").WithContext("GetHashCode");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(*this, "GetHashCode", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<int, false>(*this, ___internal__method);
}
// Autogenerated method: UnityEngine.Matrix4x4.Equals
bool UnityEngine::Matrix4x4::Equals(::Il2CppObject* other) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("UnityEngine").WithContext("Matrix4x4").WithContext("Equals");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(*this, "Equals", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(other)));
  return ::il2cpp_utils::RunMethodThrow<bool, false>(*this, ___internal__method, other);
}
// Autogenerated method: UnityEngine.Matrix4x4.Equals
bool UnityEngine::Matrix4x4::Equals(UnityEngine::Matrix4x4 other) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("UnityEngine").WithContext("Matrix4x4").WithContext("Equals");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(*this, "Equals", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(other)));
  return ::il2cpp_utils::RunMethodThrow<bool, false>(*this, ___internal__method, other);
}
// Autogenerated method: UnityEngine.Matrix4x4.ToString
::Il2CppString* UnityEngine::Matrix4x4::ToString() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("UnityEngine").WithContext("Matrix4x4").WithContext("ToString");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(*this, "ToString", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<::Il2CppString*, false>(*this, ___internal__method);
}
// Autogenerated method: UnityEngine.Matrix4x4.op_Multiply
UnityEngine::Matrix4x4 UnityEngine::operator*(const UnityEngine::Matrix4x4& lhs, const UnityEngine::Matrix4x4& rhs) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("UnityEngine").WithContext("Matrix4x4").WithContext("op_Multiply");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("UnityEngine", "Matrix4x4", "op_Multiply", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(lhs, rhs)));
  return ::il2cpp_utils::RunMethodThrow<UnityEngine::Matrix4x4, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, lhs, rhs);
}
// Autogenerated method: UnityEngine.Matrix4x4.op_Multiply
UnityEngine::Vector4 UnityEngine::operator*(const UnityEngine::Matrix4x4& lhs, const UnityEngine::Vector4& vector) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("UnityEngine").WithContext("Matrix4x4").WithContext("op_Multiply");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("UnityEngine", "Matrix4x4", "op_Multiply", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(lhs, vector)));
  return ::il2cpp_utils::RunMethodThrow<UnityEngine::Vector4, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, lhs, vector);
}
