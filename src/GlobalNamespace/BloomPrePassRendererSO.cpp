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
// [DoesNotRequireDomainReloadInitAttribute] Offset: 0xDA4714
// Autogenerated static field getter
// Get static field: static private readonly System.Int32 _vertexTransformMatrixID
int GlobalNamespace::BloomPrePassRendererSO::_get__vertexTransformMatrixID() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("BloomPrePassRendererSO").WithContext("_get__vertexTransformMatrixID");
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<int>("", "BloomPrePassRendererSO", "_vertexTransformMatrixID"));
}
// Autogenerated static field setter
// Set static field: static private readonly System.Int32 _vertexTransformMatrixID
void GlobalNamespace::BloomPrePassRendererSO::_set__vertexTransformMatrixID(int value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("BloomPrePassRendererSO").WithContext("_set__vertexTransformMatrixID");
  THROW_UNLESS(il2cpp_utils::SetFieldValue("", "BloomPrePassRendererSO", "_vertexTransformMatrixID", value));
}
// [DoesNotRequireDomainReloadInitAttribute] Offset: 0xDA4724
// Autogenerated static field getter
// Get static field: static private readonly System.Int32 _bloomPrePassTextureID
int GlobalNamespace::BloomPrePassRendererSO::_get__bloomPrePassTextureID() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("BloomPrePassRendererSO").WithContext("_get__bloomPrePassTextureID");
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<int>("", "BloomPrePassRendererSO", "_bloomPrePassTextureID"));
}
// Autogenerated static field setter
// Set static field: static private readonly System.Int32 _bloomPrePassTextureID
void GlobalNamespace::BloomPrePassRendererSO::_set__bloomPrePassTextureID(int value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("BloomPrePassRendererSO").WithContext("_set__bloomPrePassTextureID");
  THROW_UNLESS(il2cpp_utils::SetFieldValue("", "BloomPrePassRendererSO", "_bloomPrePassTextureID", value));
}
// [DoesNotRequireDomainReloadInitAttribute] Offset: 0xDA4734
// Autogenerated static field getter
// Get static field: static private readonly System.Int32 _stereoCameraEyeOffsetID
int GlobalNamespace::BloomPrePassRendererSO::_get__stereoCameraEyeOffsetID() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("BloomPrePassRendererSO").WithContext("_get__stereoCameraEyeOffsetID");
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<int>("", "BloomPrePassRendererSO", "_stereoCameraEyeOffsetID"));
}
// Autogenerated static field setter
// Set static field: static private readonly System.Int32 _stereoCameraEyeOffsetID
void GlobalNamespace::BloomPrePassRendererSO::_set__stereoCameraEyeOffsetID(int value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("BloomPrePassRendererSO").WithContext("_set__stereoCameraEyeOffsetID");
  THROW_UNLESS(il2cpp_utils::SetFieldValue("", "BloomPrePassRendererSO", "_stereoCameraEyeOffsetID", value));
}
// [DoesNotRequireDomainReloadInitAttribute] Offset: 0xDA4744
// Autogenerated static field getter
// Get static field: static private readonly System.Int32 _customFogTextureToScreenRatioID
int GlobalNamespace::BloomPrePassRendererSO::_get__customFogTextureToScreenRatioID() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("BloomPrePassRendererSO").WithContext("_get__customFogTextureToScreenRatioID");
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<int>("", "BloomPrePassRendererSO", "_customFogTextureToScreenRatioID"));
}
// Autogenerated static field setter
// Set static field: static private readonly System.Int32 _customFogTextureToScreenRatioID
void GlobalNamespace::BloomPrePassRendererSO::_set__customFogTextureToScreenRatioID(int value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("BloomPrePassRendererSO").WithContext("_set__customFogTextureToScreenRatioID");
  THROW_UNLESS(il2cpp_utils::SetFieldValue("", "BloomPrePassRendererSO", "_customFogTextureToScreenRatioID", value));
}
// Autogenerated method: BloomPrePassRendererSO.OnDisable
void GlobalNamespace::BloomPrePassRendererSO::OnDisable() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("BloomPrePassRendererSO").WithContext("OnDisable");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "OnDisable", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}
// Autogenerated method: BloomPrePassRendererSO.Init
void GlobalNamespace::BloomPrePassRendererSO::Init() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("BloomPrePassRendererSO").WithContext("Init");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "Init", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}
// Autogenerated method: BloomPrePassRendererSO.Cleanup
void GlobalNamespace::BloomPrePassRendererSO::Cleanup() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("BloomPrePassRendererSO").WithContext("Cleanup");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "Cleanup", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}
// Autogenerated method: BloomPrePassRendererSO.RenderAndSetData
void GlobalNamespace::BloomPrePassRendererSO::RenderAndSetData(UnityEngine::Vector3 cameraPos, UnityEngine::Matrix4x4 projectionMatrix, UnityEngine::Matrix4x4 viewMatrix, float stereoCameraEyeOffset, GlobalNamespace::IBloomPrePassParams* bloomPrePassParams, UnityEngine::RenderTexture* dest) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("BloomPrePassRendererSO").WithContext("RenderAndSetData");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "RenderAndSetData", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(cameraPos, projectionMatrix, viewMatrix, stereoCameraEyeOffset, bloomPrePassParams, dest)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, cameraPos, projectionMatrix, viewMatrix, stereoCameraEyeOffset, bloomPrePassParams, dest);
}
// Autogenerated method: BloomPrePassRendererSO.RenderAndSetData
void GlobalNamespace::BloomPrePassRendererSO::RenderAndSetData(UnityEngine::Vector3 cameraPos, UnityEngine::Matrix4x4 projectionMatrix, UnityEngine::Matrix4x4 viewMatrix, float stereoCameraEyeOffset, GlobalNamespace::IBloomPrePassParams* bloomPrePassParams, UnityEngine::RenderTexture* dest, UnityEngine::Vector2& textureToScreenRatio) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("BloomPrePassRendererSO").WithContext("RenderAndSetData");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "RenderAndSetData", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(cameraPos, projectionMatrix, viewMatrix, stereoCameraEyeOffset, bloomPrePassParams, dest, textureToScreenRatio)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, cameraPos, projectionMatrix, viewMatrix, stereoCameraEyeOffset, bloomPrePassParams, dest, textureToScreenRatio);
}
// Autogenerated method: BloomPrePassRendererSO.SetDataToShaders
void GlobalNamespace::BloomPrePassRendererSO::SetDataToShaders(float stereoCameraEyeOffset, UnityEngine::Vector2 textureToScreenRatio, UnityEngine::RenderTexture* renderTexture) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("BloomPrePassRendererSO").WithContext("SetDataToShaders");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("", "BloomPrePassRendererSO", "SetDataToShaders", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(stereoCameraEyeOffset, textureToScreenRatio, renderTexture)));
  ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, stereoCameraEyeOffset, textureToScreenRatio, renderTexture);
}
// Autogenerated method: BloomPrePassRendererSO.SetCustomStereoCameraEyeOffset
void GlobalNamespace::BloomPrePassRendererSO::SetCustomStereoCameraEyeOffset(float stereoCameraEyeOffset) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("BloomPrePassRendererSO").WithContext("SetCustomStereoCameraEyeOffset");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "SetCustomStereoCameraEyeOffset", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(stereoCameraEyeOffset)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, stereoCameraEyeOffset);
}
// Autogenerated method: BloomPrePassRendererSO.CreateBloomPrePassRenderTextureIfNeeded
UnityEngine::RenderTexture* GlobalNamespace::BloomPrePassRendererSO::CreateBloomPrePassRenderTextureIfNeeded(UnityEngine::RenderTexture* renderTexture, GlobalNamespace::IBloomPrePassParams* bloomPrePassParams) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("BloomPrePassRendererSO").WithContext("CreateBloomPrePassRenderTextureIfNeeded");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "CreateBloomPrePassRenderTextureIfNeeded", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(renderTexture, bloomPrePassParams)));
  return ::il2cpp_utils::RunMethodThrow<UnityEngine::RenderTexture*, false>(this, ___internal__method, renderTexture, bloomPrePassParams);
}
// Autogenerated method: BloomPrePassRendererSO.EnableBloomFog
void GlobalNamespace::BloomPrePassRendererSO::EnableBloomFog() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("BloomPrePassRendererSO").WithContext("EnableBloomFog");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "EnableBloomFog", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}
// Autogenerated method: BloomPrePassRendererSO.DisableBloomFog
void GlobalNamespace::BloomPrePassRendererSO::DisableBloomFog() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("BloomPrePassRendererSO").WithContext("DisableBloomFog");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "DisableBloomFog", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}
// Autogenerated method: BloomPrePassRendererSO.UpdateBloomFogParams
void GlobalNamespace::BloomPrePassRendererSO::UpdateBloomFogParams() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("BloomPrePassRendererSO").WithContext("UpdateBloomFogParams");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "UpdateBloomFogParams", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}
// Autogenerated method: BloomPrePassRendererSO.GetCameraParams
void GlobalNamespace::BloomPrePassRendererSO::GetCameraParams(UnityEngine::Camera* camera, UnityEngine::Matrix4x4& projectionMatrix, UnityEngine::Matrix4x4& viewMatrix, float& stereoCameraEyeOffset) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("BloomPrePassRendererSO").WithContext("GetCameraParams");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "GetCameraParams", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(camera, projectionMatrix, viewMatrix, stereoCameraEyeOffset)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, camera, projectionMatrix, viewMatrix, stereoCameraEyeOffset);
}
// Autogenerated method: BloomPrePassRendererSO.RenderAllLights
void GlobalNamespace::BloomPrePassRendererSO::RenderAllLights(UnityEngine::Matrix4x4 viewMatrix, UnityEngine::Matrix4x4 projectionMatrix, float linesWidth) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("BloomPrePassRendererSO").WithContext("RenderAllLights");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "RenderAllLights", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(viewMatrix, projectionMatrix, linesWidth)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, viewMatrix, projectionMatrix, linesWidth);
}
// Autogenerated method: BloomPrePassRendererSO.PrepareLightsMeshRendering
void GlobalNamespace::BloomPrePassRendererSO::PrepareLightsMeshRendering(GlobalNamespace::BloomPrePassRendererSO::LightsRenderingData* data, int numberOfLights) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("BloomPrePassRendererSO").WithContext("PrepareLightsMeshRendering");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "PrepareLightsMeshRendering", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(data, numberOfLights)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, data, numberOfLights);
}
// Autogenerated method: BloomPrePassRendererSO.MatrixLerp
UnityEngine::Matrix4x4 GlobalNamespace::BloomPrePassRendererSO::MatrixLerp(UnityEngine::Matrix4x4 from, UnityEngine::Matrix4x4 to, float t) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("BloomPrePassRendererSO").WithContext("MatrixLerp");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "MatrixLerp", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(from, to, t)));
  return ::il2cpp_utils::RunMethodThrow<UnityEngine::Matrix4x4, false>(this, ___internal__method, from, to, t);
}
// Autogenerated method: BloomPrePassRendererSO.OnEnable
void GlobalNamespace::BloomPrePassRendererSO::OnEnable() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("BloomPrePassRendererSO").WithContext("OnEnable");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "OnEnable", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}
// Autogenerated method: BloomPrePassRendererSO..cctor
void GlobalNamespace::BloomPrePassRendererSO::_cctor() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("BloomPrePassRendererSO").WithContext(".cctor");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("", "BloomPrePassRendererSO", ".cctor", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method);
}
