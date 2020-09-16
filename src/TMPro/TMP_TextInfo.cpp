// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: TMPro.TMP_TextInfo
#include "TMPro/TMP_TextInfo.hpp"
// Including type: TMPro.TMP_Text
#include "TMPro/TMP_Text.hpp"
// Including type: TMPro.TMP_CharacterInfo
#include "TMPro/TMP_CharacterInfo.hpp"
// Including type: TMPro.TMP_WordInfo
#include "TMPro/TMP_WordInfo.hpp"
// Including type: TMPro.TMP_LinkInfo
#include "TMPro/TMP_LinkInfo.hpp"
// Including type: TMPro.TMP_LineInfo
#include "TMPro/TMP_LineInfo.hpp"
// Including type: TMPro.TMP_PageInfo
#include "TMPro/TMP_PageInfo.hpp"
// Including type: TMPro.TMP_MeshInfo
#include "TMPro/TMP_MeshInfo.hpp"
// Including type: TMPro.MaterialReference
#include "TMPro/MaterialReference.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static private UnityEngine.Vector2 k_InfinityVectorPositive
UnityEngine::Vector2 TMPro::TMP_TextInfo::_get_k_InfinityVectorPositive() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<UnityEngine::Vector2>("TMPro", "TMP_TextInfo", "k_InfinityVectorPositive"));
}
// Autogenerated static field setter
// Set static field: static private UnityEngine.Vector2 k_InfinityVectorPositive
void TMPro::TMP_TextInfo::_set_k_InfinityVectorPositive(UnityEngine::Vector2 value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("TMPro", "TMP_TextInfo", "k_InfinityVectorPositive", value));
}
// Autogenerated static field getter
// Get static field: static private UnityEngine.Vector2 k_InfinityVectorNegative
UnityEngine::Vector2 TMPro::TMP_TextInfo::_get_k_InfinityVectorNegative() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<UnityEngine::Vector2>("TMPro", "TMP_TextInfo", "k_InfinityVectorNegative"));
}
// Autogenerated static field setter
// Set static field: static private UnityEngine.Vector2 k_InfinityVectorNegative
void TMPro::TMP_TextInfo::_set_k_InfinityVectorNegative(UnityEngine::Vector2 value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("TMPro", "TMP_TextInfo", "k_InfinityVectorNegative", value));
}
// Autogenerated method: TMPro.TMP_TextInfo..ctor
TMPro::TMP_TextInfo* TMPro::TMP_TextInfo::New_ctor(TMPro::TMP_Text* textComponent) {
  return THROW_UNLESS(il2cpp_utils::New<TMP_TextInfo*>(textComponent));
}
// Autogenerated method: TMPro.TMP_TextInfo.Clear
void TMPro::TMP_TextInfo::Clear() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Clear"));
}
// Autogenerated method: TMPro.TMP_TextInfo.ClearMeshInfo
void TMPro::TMP_TextInfo::ClearMeshInfo(bool updateMesh) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "ClearMeshInfo", updateMesh));
}
// Autogenerated method: TMPro.TMP_TextInfo.ClearAllMeshInfo
void TMPro::TMP_TextInfo::ClearAllMeshInfo() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "ClearAllMeshInfo"));
}
// Autogenerated method: TMPro.TMP_TextInfo.ResetVertexLayout
void TMPro::TMP_TextInfo::ResetVertexLayout(bool isVolumetric) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "ResetVertexLayout", isVolumetric));
}
// Autogenerated method: TMPro.TMP_TextInfo.ClearUnusedVertices
void TMPro::TMP_TextInfo::ClearUnusedVertices(::Array<TMPro::MaterialReference>* materials) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "ClearUnusedVertices", materials));
}
// Autogenerated method: TMPro.TMP_TextInfo.ClearLineInfo
void TMPro::TMP_TextInfo::ClearLineInfo() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "ClearLineInfo"));
}
// Autogenerated method: TMPro.TMP_TextInfo.CopyMeshInfoVertexData
::Array<TMPro::TMP_MeshInfo>* TMPro::TMP_TextInfo::CopyMeshInfoVertexData() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Array<TMPro::TMP_MeshInfo>*>(this, "CopyMeshInfoVertexData"));
}
// Autogenerated method: TMPro.TMP_TextInfo..cctor
void TMPro::TMP_TextInfo::_cctor() {
  THROW_UNLESS(il2cpp_utils::RunMethod("TMPro", "TMP_TextInfo", ".cctor"));
}
// Autogenerated method: TMPro.TMP_TextInfo..ctor
TMPro::TMP_TextInfo* TMPro::TMP_TextInfo::New_ctor() {
  return THROW_UNLESS(il2cpp_utils::New<TMP_TextInfo*>());
}
