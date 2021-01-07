// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVROverlay
#include "GlobalNamespace/OVROverlay.hpp"
// Including type: UnityEngine.Texture
#include "UnityEngine/Texture.hpp"
// Including type: OVROverlay/ExternalSurfaceObjectCreated
#include "GlobalNamespace/OVROverlay_ExternalSurfaceObjectCreated.hpp"
// Including type: UnityEngine.Renderer
#include "UnityEngine/Renderer.hpp"
// Including type: UnityEngine.Material
#include "UnityEngine/Material.hpp"
// Including type: UnityEngine.XR.XRNode
#include "UnityEngine/XR/XRNode.hpp"
// Including type: OVRPose
#include "GlobalNamespace/OVRPose.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static System.Int32 maxInstances
int GlobalNamespace::OVROverlay::_get_maxInstances() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("OVROverlay").WithContext("_get_maxInstances");
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<int>("", "OVROverlay", "maxInstances"));
}
// Autogenerated static field setter
// Set static field: static System.Int32 maxInstances
void GlobalNamespace::OVROverlay::_set_maxInstances(int value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("OVROverlay").WithContext("_set_maxInstances");
  THROW_UNLESS(il2cpp_utils::SetFieldValue("", "OVROverlay", "maxInstances", value));
}
// Autogenerated static field getter
// Get static field: static public OVROverlay[] instances
::Array<GlobalNamespace::OVROverlay*>* GlobalNamespace::OVROverlay::_get_instances() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("OVROverlay").WithContext("_get_instances");
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<::Array<GlobalNamespace::OVROverlay*>*>("", "OVROverlay", "instances"));
}
// Autogenerated static field setter
// Set static field: static public OVROverlay[] instances
void GlobalNamespace::OVROverlay::_set_instances(::Array<GlobalNamespace::OVROverlay*>* value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("OVROverlay").WithContext("_set_instances");
  THROW_UNLESS(il2cpp_utils::SetFieldValue("", "OVROverlay", "instances", value));
}
// Autogenerated static field getter
// Get static field: static private UnityEngine.Material tex2DMaterial
UnityEngine::Material* GlobalNamespace::OVROverlay::_get_tex2DMaterial() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("OVROverlay").WithContext("_get_tex2DMaterial");
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<UnityEngine::Material*>("", "OVROverlay", "tex2DMaterial"));
}
// Autogenerated static field setter
// Set static field: static private UnityEngine.Material tex2DMaterial
void GlobalNamespace::OVROverlay::_set_tex2DMaterial(UnityEngine::Material* value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("OVROverlay").WithContext("_set_tex2DMaterial");
  THROW_UNLESS(il2cpp_utils::SetFieldValue("", "OVROverlay", "tex2DMaterial", value));
}
// Autogenerated static field getter
// Get static field: static private UnityEngine.Material cubeMaterial
UnityEngine::Material* GlobalNamespace::OVROverlay::_get_cubeMaterial() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("OVROverlay").WithContext("_get_cubeMaterial");
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<UnityEngine::Material*>("", "OVROverlay", "cubeMaterial"));
}
// Autogenerated static field setter
// Set static field: static private UnityEngine.Material cubeMaterial
void GlobalNamespace::OVROverlay::_set_cubeMaterial(UnityEngine::Material* value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("OVROverlay").WithContext("_set_cubeMaterial");
  THROW_UNLESS(il2cpp_utils::SetFieldValue("", "OVROverlay", "cubeMaterial", value));
}
// Autogenerated method: OVROverlay.OverrideOverlayTextureInfo
void GlobalNamespace::OVROverlay::OverrideOverlayTextureInfo(UnityEngine::Texture* srcTexture, System::IntPtr nativePtr, UnityEngine::XR::XRNode node) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("OVROverlay").WithContext("OverrideOverlayTextureInfo");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "OverrideOverlayTextureInfo", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(srcTexture, nativePtr, node)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, srcTexture, nativePtr, node);
}
// Autogenerated method: OVROverlay.get_layout
GlobalNamespace::OVRPlugin::LayerLayout GlobalNamespace::OVROverlay::get_layout() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("OVROverlay").WithContext("get_layout");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "get_layout", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<GlobalNamespace::OVRPlugin::LayerLayout, false>(this, ___internal__method);
}
// Autogenerated method: OVROverlay.get_texturesPerStage
int GlobalNamespace::OVROverlay::get_texturesPerStage() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("OVROverlay").WithContext("get_texturesPerStage");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "get_texturesPerStage", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<int, false>(this, ___internal__method);
}
// Autogenerated method: OVROverlay.CreateLayer
bool GlobalNamespace::OVROverlay::CreateLayer(int mipLevels, int sampleCount, GlobalNamespace::OVRPlugin::EyeTextureFormat etFormat, int flags, GlobalNamespace::OVRPlugin::Sizei size, GlobalNamespace::OVRPlugin::OverlayShape shape) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("OVROverlay").WithContext("CreateLayer");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "CreateLayer", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(mipLevels, sampleCount, etFormat, flags, size, shape)));
  return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method, mipLevels, sampleCount, etFormat, flags, size, shape);
}
// Autogenerated method: OVROverlay.CreateLayerTextures
bool GlobalNamespace::OVROverlay::CreateLayerTextures(bool useMipmaps, GlobalNamespace::OVRPlugin::Sizei size, bool isHdr) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("OVROverlay").WithContext("CreateLayerTextures");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "CreateLayerTextures", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(useMipmaps, size, isHdr)));
  return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method, useMipmaps, size, isHdr);
}
// Autogenerated method: OVROverlay.DestroyLayerTextures
void GlobalNamespace::OVROverlay::DestroyLayerTextures() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("OVROverlay").WithContext("DestroyLayerTextures");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "DestroyLayerTextures", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}
// Autogenerated method: OVROverlay.DestroyLayer
void GlobalNamespace::OVROverlay::DestroyLayer() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("OVROverlay").WithContext("DestroyLayer");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "DestroyLayer", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}
// Autogenerated method: OVROverlay.SetSrcDestRects
void GlobalNamespace::OVROverlay::SetSrcDestRects(UnityEngine::Rect srcLeft, UnityEngine::Rect srcRight, UnityEngine::Rect destLeft, UnityEngine::Rect destRight) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("OVROverlay").WithContext("SetSrcDestRects");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "SetSrcDestRects", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(srcLeft, srcRight, destLeft, destRight)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, srcLeft, srcRight, destLeft, destRight);
}
// Autogenerated method: OVROverlay.UpdateTextureRectMatrix
void GlobalNamespace::OVROverlay::UpdateTextureRectMatrix() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("OVROverlay").WithContext("UpdateTextureRectMatrix");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "UpdateTextureRectMatrix", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}
// Autogenerated method: OVROverlay.SetPerLayerColorScaleAndOffset
void GlobalNamespace::OVROverlay::SetPerLayerColorScaleAndOffset(UnityEngine::Vector4 scale, UnityEngine::Vector4 offset) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("OVROverlay").WithContext("SetPerLayerColorScaleAndOffset");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "SetPerLayerColorScaleAndOffset", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(scale, offset)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, scale, offset);
}
// Autogenerated method: OVROverlay.LatchLayerTextures
bool GlobalNamespace::OVROverlay::LatchLayerTextures() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("OVROverlay").WithContext("LatchLayerTextures");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "LatchLayerTextures", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method);
}
// Autogenerated method: OVROverlay.GetCurrentLayerDesc
GlobalNamespace::OVRPlugin::LayerDesc GlobalNamespace::OVROverlay::GetCurrentLayerDesc() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("OVROverlay").WithContext("GetCurrentLayerDesc");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "GetCurrentLayerDesc", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<GlobalNamespace::OVRPlugin::LayerDesc, false>(this, ___internal__method);
}
// Autogenerated method: OVROverlay.PopulateLayer
bool GlobalNamespace::OVROverlay::PopulateLayer(int mipLevels, bool isHdr, GlobalNamespace::OVRPlugin::Sizei size, int sampleCount, int stage) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("OVROverlay").WithContext("PopulateLayer");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "PopulateLayer", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(mipLevels, isHdr, size, sampleCount, stage)));
  return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method, mipLevels, isHdr, size, sampleCount, stage);
}
// Autogenerated method: OVROverlay.SubmitLayer
bool GlobalNamespace::OVROverlay::SubmitLayer(bool overlay, bool headLocked, bool noDepthBufferTesting, GlobalNamespace::OVRPose pose, UnityEngine::Vector3 scale, int frameIndex) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("OVROverlay").WithContext("SubmitLayer");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "SubmitLayer", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(overlay, headLocked, noDepthBufferTesting, pose, scale, frameIndex)));
  return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method, overlay, headLocked, noDepthBufferTesting, pose, scale, frameIndex);
}
// Autogenerated method: OVROverlay.Awake
void GlobalNamespace::OVROverlay::Awake() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("OVROverlay").WithContext("Awake");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "Awake", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}
// Autogenerated method: OVROverlay.get_OpenVROverlayKey
::Il2CppString* GlobalNamespace::OVROverlay::get_OpenVROverlayKey() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("OVROverlay").WithContext("get_OpenVROverlayKey");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("", "OVROverlay", "get_OpenVROverlayKey", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<::Il2CppString*, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method);
}
// Autogenerated method: OVROverlay.OnEnable
void GlobalNamespace::OVROverlay::OnEnable() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("OVROverlay").WithContext("OnEnable");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "OnEnable", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}
// Autogenerated method: OVROverlay.InitOVROverlay
void GlobalNamespace::OVROverlay::InitOVROverlay() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("OVROverlay").WithContext("InitOVROverlay");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "InitOVROverlay", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}
// Autogenerated method: OVROverlay.OnDisable
void GlobalNamespace::OVROverlay::OnDisable() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("OVROverlay").WithContext("OnDisable");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "OnDisable", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}
// Autogenerated method: OVROverlay.OnDestroy
void GlobalNamespace::OVROverlay::OnDestroy() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("OVROverlay").WithContext("OnDestroy");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "OnDestroy", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}
// Autogenerated method: OVROverlay.ComputeSubmit
bool GlobalNamespace::OVROverlay::ComputeSubmit(GlobalNamespace::OVRPose& pose, UnityEngine::Vector3& scale, bool& overlay, bool& headLocked) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("OVROverlay").WithContext("ComputeSubmit");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "ComputeSubmit", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(pose, scale, overlay, headLocked)));
  return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method, pose, scale, overlay, headLocked);
}
// Autogenerated method: OVROverlay.OpenVROverlayUpdate
void GlobalNamespace::OVROverlay::OpenVROverlayUpdate(UnityEngine::Vector3 scale, GlobalNamespace::OVRPose pose) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("OVROverlay").WithContext("OpenVROverlayUpdate");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "OpenVROverlayUpdate", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(scale, pose)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, scale, pose);
}
// Autogenerated method: OVROverlay.LateUpdate
void GlobalNamespace::OVROverlay::LateUpdate() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("OVROverlay").WithContext("LateUpdate");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "LateUpdate", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}
// Autogenerated method: OVROverlay..cctor
void GlobalNamespace::OVROverlay::_cctor() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("OVROverlay").WithContext(".cctor");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("", "OVROverlay", ".cctor", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method);
}
