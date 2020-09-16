// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: BloomPrePassRendererSO
#include "GlobalNamespace/BloomPrePassRendererSO.hpp"
// Including type: BloomPrePassRendererSO/PreallocationData
#include "GlobalNamespace/BloomPrePassRendererSO_PreallocationData.hpp"
// Including type: BloomPrePassRendererSO/LightsRenderingData
#include "GlobalNamespace/BloomPrePassRendererSO_LightsRenderingData.hpp"
// Including type: BloomFogSO
#include "GlobalNamespace/BloomFogSO.hpp"
// Including type: UnityEngine.Shader
#include "UnityEngine/Shader.hpp"
// Including type: UnityEngine.Material
#include "UnityEngine/Material.hpp"
// Including type: System.Collections.Generic.Dictionary`2
#include "System/Collections/Generic/Dictionary_2.hpp"
// Including type: BloomPrePassLightTypeSO
#include "GlobalNamespace/BloomPrePassLightTypeSO.hpp"
// Including type: UnityEngine.Rendering.CommandBuffer
#include "UnityEngine/Rendering/CommandBuffer.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
// Including type: UnityEngine.Matrix4x4
#include "UnityEngine/Matrix4x4.hpp"
// Including type: IBloomPrePassParams
#include "GlobalNamespace/IBloomPrePassParams.hpp"
// Including type: UnityEngine.RenderTexture
#include "UnityEngine/RenderTexture.hpp"
// Including type: UnityEngine.Vector2
#include "UnityEngine/Vector2.hpp"
// Including type: UnityEngine.Camera
#include "UnityEngine/Camera.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static private readonly System.Int32 _vertexTransfromMatrixID
int GlobalNamespace::BloomPrePassRendererSO::_get__vertexTransfromMatrixID() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<int>("", "BloomPrePassRendererSO", "_vertexTransfromMatrixID"));
}
// Autogenerated static field setter
// Set static field: static private readonly System.Int32 _vertexTransfromMatrixID
void GlobalNamespace::BloomPrePassRendererSO::_set__vertexTransfromMatrixID(int value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("", "BloomPrePassRendererSO", "_vertexTransfromMatrixID", value));
}
// Autogenerated static field getter
// Get static field: static private readonly System.Int32 _colorID
int GlobalNamespace::BloomPrePassRendererSO::_get__colorID() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<int>("", "BloomPrePassRendererSO", "_colorID"));
}
// Autogenerated static field setter
// Set static field: static private readonly System.Int32 _colorID
void GlobalNamespace::BloomPrePassRendererSO::_set__colorID(int value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("", "BloomPrePassRendererSO", "_colorID", value));
}
// Autogenerated static field getter
// Get static field: static private readonly System.Int32 _bloomPrePassTextureID
int GlobalNamespace::BloomPrePassRendererSO::_get__bloomPrePassTextureID() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<int>("", "BloomPrePassRendererSO", "_bloomPrePassTextureID"));
}
// Autogenerated static field setter
// Set static field: static private readonly System.Int32 _bloomPrePassTextureID
void GlobalNamespace::BloomPrePassRendererSO::_set__bloomPrePassTextureID(int value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("", "BloomPrePassRendererSO", "_bloomPrePassTextureID", value));
}
// Autogenerated static field getter
// Get static field: static private readonly System.Int32 _stereoCameraEyeOffsetID
int GlobalNamespace::BloomPrePassRendererSO::_get__stereoCameraEyeOffsetID() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<int>("", "BloomPrePassRendererSO", "_stereoCameraEyeOffsetID"));
}
// Autogenerated static field setter
// Set static field: static private readonly System.Int32 _stereoCameraEyeOffsetID
void GlobalNamespace::BloomPrePassRendererSO::_set__stereoCameraEyeOffsetID(int value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("", "BloomPrePassRendererSO", "_stereoCameraEyeOffsetID", value));
}
// Autogenerated static field getter
// Get static field: static private readonly System.Int32 _customFogTextureToScreenRatioID
int GlobalNamespace::BloomPrePassRendererSO::_get__customFogTextureToScreenRatioID() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<int>("", "BloomPrePassRendererSO", "_customFogTextureToScreenRatioID"));
}
// Autogenerated static field setter
// Set static field: static private readonly System.Int32 _customFogTextureToScreenRatioID
void GlobalNamespace::BloomPrePassRendererSO::_set__customFogTextureToScreenRatioID(int value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("", "BloomPrePassRendererSO", "_customFogTextureToScreenRatioID", value));
}
// Autogenerated method: BloomPrePassRendererSO.OnDisable
void GlobalNamespace::BloomPrePassRendererSO::OnDisable() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "OnDisable"));
}
// Autogenerated method: BloomPrePassRendererSO.Init
void GlobalNamespace::BloomPrePassRendererSO::Init() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Init"));
}
// Autogenerated method: BloomPrePassRendererSO.Cleanup
void GlobalNamespace::BloomPrePassRendererSO::Cleanup() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Cleanup"));
}
// Autogenerated method: BloomPrePassRendererSO.RenderAndSetData
void GlobalNamespace::BloomPrePassRendererSO::RenderAndSetData(UnityEngine::Vector3 cameraPos, UnityEngine::Matrix4x4 projectionMatrix, UnityEngine::Matrix4x4 viewMatrix, float stereoCameraEyeOffset, GlobalNamespace::IBloomPrePassParams* bloomPrePassParams, UnityEngine::RenderTexture* dest) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "RenderAndSetData", cameraPos, projectionMatrix, viewMatrix, stereoCameraEyeOffset, bloomPrePassParams, dest));
}
// Autogenerated method: BloomPrePassRendererSO.RenderAndSetData
void GlobalNamespace::BloomPrePassRendererSO::RenderAndSetData(UnityEngine::Vector3 cameraPos, UnityEngine::Matrix4x4 projectionMatrix, UnityEngine::Matrix4x4 viewMatrix, float stereoCameraEyeOffset, GlobalNamespace::IBloomPrePassParams* bloomPrePassParams, UnityEngine::RenderTexture* dest, UnityEngine::Vector2& textureToScreenRatio) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "RenderAndSetData", cameraPos, projectionMatrix, viewMatrix, stereoCameraEyeOffset, bloomPrePassParams, dest, textureToScreenRatio));
}
// Autogenerated method: BloomPrePassRendererSO.SetDataToShaders
void GlobalNamespace::BloomPrePassRendererSO::SetDataToShaders(float stereoCameraEyeOffset, UnityEngine::Vector2 textureToScreenRatio, UnityEngine::RenderTexture* renderTexture) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SetDataToShaders", stereoCameraEyeOffset, textureToScreenRatio, renderTexture));
}
// Autogenerated method: BloomPrePassRendererSO.SetCustomStereoCameraEyeOffset
void GlobalNamespace::BloomPrePassRendererSO::SetCustomStereoCameraEyeOffset(float stereoCameraEyeOffset) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SetCustomStereoCameraEyeOffset", stereoCameraEyeOffset));
}
// Autogenerated method: BloomPrePassRendererSO.CreateBloomPrePassRenderTextureIfNeeded
UnityEngine::RenderTexture* GlobalNamespace::BloomPrePassRendererSO::CreateBloomPrePassRenderTextureIfNeeded(UnityEngine::RenderTexture* renderTexture, GlobalNamespace::IBloomPrePassParams* bloomPrePassParams) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::RenderTexture*>(this, "CreateBloomPrePassRenderTextureIfNeeded", renderTexture, bloomPrePassParams));
}
// Autogenerated method: BloomPrePassRendererSO.EnableBloomFog
void GlobalNamespace::BloomPrePassRendererSO::EnableBloomFog() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "EnableBloomFog"));
}
// Autogenerated method: BloomPrePassRendererSO.DisableBloomFog
void GlobalNamespace::BloomPrePassRendererSO::DisableBloomFog() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "DisableBloomFog"));
}
// Autogenerated method: BloomPrePassRendererSO.UpdateBloomFogParams
void GlobalNamespace::BloomPrePassRendererSO::UpdateBloomFogParams() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "UpdateBloomFogParams"));
}
// Autogenerated method: BloomPrePassRendererSO.GetCameraParams
void GlobalNamespace::BloomPrePassRendererSO::GetCameraParams(UnityEngine::Camera* camera, UnityEngine::Matrix4x4& projectionMatrix, UnityEngine::Matrix4x4& viewMatrix, float& stereoCameraEyeOffset) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "GetCameraParams", camera, projectionMatrix, viewMatrix, stereoCameraEyeOffset));
}
// Autogenerated method: BloomPrePassRendererSO.RenderAllLights
void GlobalNamespace::BloomPrePassRendererSO::RenderAllLights(UnityEngine::Matrix4x4 viewMatrix, UnityEngine::Matrix4x4 projectionMatrix, float linesWidth) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "RenderAllLights", viewMatrix, projectionMatrix, linesWidth));
}
// Autogenerated method: BloomPrePassRendererSO.PrepareLightsMeshRendering
void GlobalNamespace::BloomPrePassRendererSO::PrepareLightsMeshRendering(GlobalNamespace::BloomPrePassRendererSO::LightsRenderingData* data, int numberOfLights) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "PrepareLightsMeshRendering", data, numberOfLights));
}
// Autogenerated method: BloomPrePassRendererSO.MatrixLerp
UnityEngine::Matrix4x4 GlobalNamespace::BloomPrePassRendererSO::MatrixLerp(UnityEngine::Matrix4x4 from, UnityEngine::Matrix4x4 to, float t) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Matrix4x4>(this, "MatrixLerp", from, to, t));
}
// Autogenerated method: BloomPrePassRendererSO.OnEnable
void GlobalNamespace::BloomPrePassRendererSO::OnEnable() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "OnEnable"));
}
// Autogenerated method: BloomPrePassRendererSO..ctor
GlobalNamespace::BloomPrePassRendererSO* GlobalNamespace::BloomPrePassRendererSO::New_ctor() {
  return THROW_UNLESS(il2cpp_utils::New<BloomPrePassRendererSO*>());
}
// Autogenerated method: BloomPrePassRendererSO..cctor
void GlobalNamespace::BloomPrePassRendererSO::_cctor() {
  THROW_UNLESS(il2cpp_utils::RunMethod("", "BloomPrePassRendererSO", ".cctor"));
}
