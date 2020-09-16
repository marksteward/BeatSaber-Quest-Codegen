// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: PyramidBloomRendererSO
#include "GlobalNamespace/PyramidBloomRendererSO.hpp"
// Including type: PyramidBloomRendererSO/Pass
#include "GlobalNamespace/PyramidBloomRendererSO_Pass.hpp"
// Including type: PyramidBloomRendererSO/Level
#include "GlobalNamespace/PyramidBloomRendererSO_Level.hpp"
// Including type: UnityEngine.Shader
#include "UnityEngine/Shader.hpp"
// Including type: UnityEngine.Material
#include "UnityEngine/Material.hpp"
// Including type: UnityEngine.RenderTexture
#include "UnityEngine/RenderTexture.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static private System.Int32 kMaxPyramidSize
int GlobalNamespace::PyramidBloomRendererSO::_get_kMaxPyramidSize() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<int>("", "PyramidBloomRendererSO", "kMaxPyramidSize"));
}
// Autogenerated static field setter
// Set static field: static private System.Int32 kMaxPyramidSize
void GlobalNamespace::PyramidBloomRendererSO::_set_kMaxPyramidSize(int value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("", "PyramidBloomRendererSO", "kMaxPyramidSize", value));
}
// Autogenerated static field getter
// Get static field: static private readonly System.Int32 _bloomTexID
int GlobalNamespace::PyramidBloomRendererSO::_get__bloomTexID() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<int>("", "PyramidBloomRendererSO", "_bloomTexID"));
}
// Autogenerated static field setter
// Set static field: static private readonly System.Int32 _bloomTexID
void GlobalNamespace::PyramidBloomRendererSO::_set__bloomTexID(int value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("", "PyramidBloomRendererSO", "_bloomTexID", value));
}
// Autogenerated static field getter
// Get static field: static private readonly System.Int32 _sampleScaleID
int GlobalNamespace::PyramidBloomRendererSO::_get__sampleScaleID() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<int>("", "PyramidBloomRendererSO", "_sampleScaleID"));
}
// Autogenerated static field setter
// Set static field: static private readonly System.Int32 _sampleScaleID
void GlobalNamespace::PyramidBloomRendererSO::_set__sampleScaleID(int value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("", "PyramidBloomRendererSO", "_sampleScaleID", value));
}
// Autogenerated static field getter
// Get static field: static private readonly System.Int32 _combineID
int GlobalNamespace::PyramidBloomRendererSO::_get__combineID() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<int>("", "PyramidBloomRendererSO", "_combineID"));
}
// Autogenerated static field setter
// Set static field: static private readonly System.Int32 _combineID
void GlobalNamespace::PyramidBloomRendererSO::_set__combineID(int value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("", "PyramidBloomRendererSO", "_combineID", value));
}
// Autogenerated static field getter
// Get static field: static private readonly System.Int32 _alphaWeightsID
int GlobalNamespace::PyramidBloomRendererSO::_get__alphaWeightsID() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<int>("", "PyramidBloomRendererSO", "_alphaWeightsID"));
}
// Autogenerated static field setter
// Set static field: static private readonly System.Int32 _alphaWeightsID
void GlobalNamespace::PyramidBloomRendererSO::_set__alphaWeightsID(int value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("", "PyramidBloomRendererSO", "_alphaWeightsID", value));
}
// Autogenerated method: PyramidBloomRendererSO.OnDisable
void GlobalNamespace::PyramidBloomRendererSO::OnDisable() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "OnDisable"));
}
// Autogenerated method: PyramidBloomRendererSO.RenderBloom
void GlobalNamespace::PyramidBloomRendererSO::RenderBloom(UnityEngine::RenderTexture* src, UnityEngine::RenderTexture* dest, float radius, bool alphaWeights, bool betterQuality, bool gammaCorrection) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "RenderBloom", src, dest, radius, alphaWeights, betterQuality, gammaCorrection));
}
// Autogenerated method: PyramidBloomRendererSO.RenderBloom
void GlobalNamespace::PyramidBloomRendererSO::RenderBloom(UnityEngine::RenderTexture* src, UnityEngine::RenderTexture* dest, float radius, float intensity, bool uniformPyramidWeights, bool downsampleOnFirstPass, float pyramidWeightsParam, float alphaWeights, GlobalNamespace::PyramidBloomRendererSO::Pass preFilterPass, GlobalNamespace::PyramidBloomRendererSO::Pass downsamplePass, GlobalNamespace::PyramidBloomRendererSO::Pass upsamplePass, GlobalNamespace::PyramidBloomRendererSO::Pass finalUpsamplePass) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "RenderBloom", src, dest, radius, intensity, uniformPyramidWeights, downsampleOnFirstPass, pyramidWeightsParam, alphaWeights, preFilterPass, downsamplePass, upsamplePass, finalUpsamplePass));
}
// Autogenerated method: PyramidBloomRendererSO.OnEnable
void GlobalNamespace::PyramidBloomRendererSO::OnEnable() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "OnEnable"));
}
// Autogenerated method: PyramidBloomRendererSO..ctor
GlobalNamespace::PyramidBloomRendererSO* GlobalNamespace::PyramidBloomRendererSO::New_ctor() {
  return THROW_UNLESS(il2cpp_utils::New<PyramidBloomRendererSO*>());
}
// Autogenerated method: PyramidBloomRendererSO..cctor
void GlobalNamespace::PyramidBloomRendererSO::_cctor() {
  THROW_UNLESS(il2cpp_utils::RunMethod("", "PyramidBloomRendererSO", ".cctor"));
}
