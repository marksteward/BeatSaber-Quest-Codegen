// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: TMPro.TMP_MeshInfo
#include "TMPro/TMP_MeshInfo.hpp"
// Including type: UnityEngine.Mesh
#include "UnityEngine/Mesh.hpp"
// Including type: System.Collections.Generic.IList`1
#include "System/Collections/Generic/IList_1.hpp"
// Including type: TMPro.VertexSortingOrder
#include "TMPro/VertexSortingOrder.hpp"
// Including type: UnityEngine.Vector2
#include "UnityEngine/Vector2.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static private readonly UnityEngine.Color32 s_DefaultColor
UnityEngine::Color32 TMPro::TMP_MeshInfo::_get_s_DefaultColor() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<UnityEngine::Color32>("TMPro", "TMP_MeshInfo", "s_DefaultColor"));
}
// Autogenerated static field setter
// Set static field: static private readonly UnityEngine.Color32 s_DefaultColor
void TMPro::TMP_MeshInfo::_set_s_DefaultColor(UnityEngine::Color32 value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("TMPro", "TMP_MeshInfo", "s_DefaultColor", value));
}
// Autogenerated static field getter
// Get static field: static private readonly UnityEngine.Vector3 s_DefaultNormal
UnityEngine::Vector3 TMPro::TMP_MeshInfo::_get_s_DefaultNormal() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<UnityEngine::Vector3>("TMPro", "TMP_MeshInfo", "s_DefaultNormal"));
}
// Autogenerated static field setter
// Set static field: static private readonly UnityEngine.Vector3 s_DefaultNormal
void TMPro::TMP_MeshInfo::_set_s_DefaultNormal(UnityEngine::Vector3 value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("TMPro", "TMP_MeshInfo", "s_DefaultNormal", value));
}
// Autogenerated static field getter
// Get static field: static private readonly UnityEngine.Vector4 s_DefaultTangent
UnityEngine::Vector4 TMPro::TMP_MeshInfo::_get_s_DefaultTangent() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<UnityEngine::Vector4>("TMPro", "TMP_MeshInfo", "s_DefaultTangent"));
}
// Autogenerated static field setter
// Set static field: static private readonly UnityEngine.Vector4 s_DefaultTangent
void TMPro::TMP_MeshInfo::_set_s_DefaultTangent(UnityEngine::Vector4 value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("TMPro", "TMP_MeshInfo", "s_DefaultTangent", value));
}
// Autogenerated static field getter
// Get static field: static private readonly UnityEngine.Bounds s_DefaultBounds
UnityEngine::Bounds TMPro::TMP_MeshInfo::_get_s_DefaultBounds() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<UnityEngine::Bounds>("TMPro", "TMP_MeshInfo", "s_DefaultBounds"));
}
// Autogenerated static field setter
// Set static field: static private readonly UnityEngine.Bounds s_DefaultBounds
void TMPro::TMP_MeshInfo::_set_s_DefaultBounds(UnityEngine::Bounds value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("TMPro", "TMP_MeshInfo", "s_DefaultBounds", value));
}
// Autogenerated method: TMPro.TMP_MeshInfo..ctor
TMPro::TMP_MeshInfo::TMP_MeshInfo(UnityEngine::Mesh* mesh, int size) {
  THROW_UNLESS(il2cpp_utils::RunMethod(*this, ".ctor", mesh, size));
}
// Autogenerated method: TMPro.TMP_MeshInfo..ctor
TMPro::TMP_MeshInfo::TMP_MeshInfo(UnityEngine::Mesh* mesh, int size, bool isVolumetric) {
  THROW_UNLESS(il2cpp_utils::RunMethod(*this, ".ctor", mesh, size, isVolumetric));
}
// Autogenerated method: TMPro.TMP_MeshInfo.ResizeMeshInfo
void TMPro::TMP_MeshInfo::ResizeMeshInfo(int size) {
  THROW_UNLESS(il2cpp_utils::RunMethod(*this, "ResizeMeshInfo", size));
}
// Autogenerated method: TMPro.TMP_MeshInfo.ResizeMeshInfo
void TMPro::TMP_MeshInfo::ResizeMeshInfo(int size, bool isVolumetric) {
  THROW_UNLESS(il2cpp_utils::RunMethod(*this, "ResizeMeshInfo", size, isVolumetric));
}
// Autogenerated method: TMPro.TMP_MeshInfo.Clear
void TMPro::TMP_MeshInfo::Clear() {
  THROW_UNLESS(il2cpp_utils::RunMethod(*this, "Clear"));
}
// Autogenerated method: TMPro.TMP_MeshInfo.Clear
void TMPro::TMP_MeshInfo::Clear(bool uploadChanges) {
  THROW_UNLESS(il2cpp_utils::RunMethod(*this, "Clear", uploadChanges));
}
// Autogenerated method: TMPro.TMP_MeshInfo.ClearUnusedVertices
void TMPro::TMP_MeshInfo::ClearUnusedVertices() {
  THROW_UNLESS(il2cpp_utils::RunMethod(*this, "ClearUnusedVertices"));
}
// Autogenerated method: TMPro.TMP_MeshInfo.ClearUnusedVertices
void TMPro::TMP_MeshInfo::ClearUnusedVertices(int startIndex) {
  THROW_UNLESS(il2cpp_utils::RunMethod(*this, "ClearUnusedVertices", startIndex));
}
// Autogenerated method: TMPro.TMP_MeshInfo.ClearUnusedVertices
void TMPro::TMP_MeshInfo::ClearUnusedVertices(int startIndex, bool updateMesh) {
  THROW_UNLESS(il2cpp_utils::RunMethod(*this, "ClearUnusedVertices", startIndex, updateMesh));
}
// Autogenerated method: TMPro.TMP_MeshInfo.SortGeometry
void TMPro::TMP_MeshInfo::SortGeometry(TMPro::VertexSortingOrder order) {
  THROW_UNLESS(il2cpp_utils::RunMethod(*this, "SortGeometry", order));
}
// Autogenerated method: TMPro.TMP_MeshInfo.SortGeometry
void TMPro::TMP_MeshInfo::SortGeometry(System::Collections::Generic::IList_1<int>* sortingOrder) {
  THROW_UNLESS(il2cpp_utils::RunMethod(*this, "SortGeometry", sortingOrder));
}
// Autogenerated method: TMPro.TMP_MeshInfo.SwapVertexData
void TMPro::TMP_MeshInfo::SwapVertexData(int src, int dst) {
  THROW_UNLESS(il2cpp_utils::RunMethod(*this, "SwapVertexData", src, dst));
}
// Autogenerated method: TMPro.TMP_MeshInfo..cctor
void TMPro::TMP_MeshInfo::_cctor() {
  THROW_UNLESS(il2cpp_utils::RunMethod("TMPro", "TMP_MeshInfo", ".cctor"));
}
