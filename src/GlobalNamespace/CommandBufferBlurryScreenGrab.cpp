// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
// Including type: CommandBufferBlurryScreenGrab
#include "GlobalNamespace/CommandBufferBlurryScreenGrab.hpp"
// Including type: System.Collections.Generic.Dictionary`2
#include "System/Collections/Generic/Dictionary_2.hpp"
// Including type: UnityEngine.Camera
#include "UnityEngine/Camera.hpp"
// Including type: CommandBufferOwners
#include "GlobalNamespace/CommandBufferOwners.hpp"
// Including type: UnityEngine.Rendering.CommandBuffer
#include "UnityEngine/Rendering/CommandBuffer.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static private System.Collections.Generic.Dictionary`2<UnityEngine.Camera,CommandBufferOwners> _cameras
System::Collections::Generic::Dictionary_2<UnityEngine::Camera*, GlobalNamespace::CommandBufferOwners*>* GlobalNamespace::CommandBufferBlurryScreenGrab::_get__cameras() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("CommandBufferBlurryScreenGrab").WithContext("_get__cameras");
  return THROW_UNLESS((il2cpp_utils::GetFieldValue<System::Collections::Generic::Dictionary_2<UnityEngine::Camera*, GlobalNamespace::CommandBufferOwners*>*>("", "CommandBufferBlurryScreenGrab", "_cameras")));
}
// Autogenerated static field setter
// Set static field: static private System.Collections.Generic.Dictionary`2<UnityEngine.Camera,CommandBufferOwners> _cameras
void GlobalNamespace::CommandBufferBlurryScreenGrab::_set__cameras(System::Collections::Generic::Dictionary_2<UnityEngine::Camera*, GlobalNamespace::CommandBufferOwners*>* value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("CommandBufferBlurryScreenGrab").WithContext("_set__cameras");
  THROW_UNLESS(il2cpp_utils::SetFieldValue("", "CommandBufferBlurryScreenGrab", "_cameras", value));
}
// Autogenerated method: CommandBufferBlurryScreenGrab.NoDomainReloadInit
void GlobalNamespace::CommandBufferBlurryScreenGrab::NoDomainReloadInit() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("CommandBufferBlurryScreenGrab").WithContext("NoDomainReloadInit");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("", "CommandBufferBlurryScreenGrab", "NoDomainReloadInit", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method);
}
// Autogenerated method: CommandBufferBlurryScreenGrab.CreateCommandBuffer
UnityEngine::Rendering::CommandBuffer* GlobalNamespace::CommandBufferBlurryScreenGrab::CreateCommandBuffer(UnityEngine::Camera* camera) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("CommandBufferBlurryScreenGrab").WithContext("CreateCommandBuffer");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "CreateCommandBuffer", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(camera)));
  return ::il2cpp_utils::RunMethodThrow<UnityEngine::Rendering::CommandBuffer*, false>(this, ___internal__method, camera);
}
// Autogenerated method: CommandBufferBlurryScreenGrab.CamerasDict
System::Collections::Generic::Dictionary_2<UnityEngine::Camera*, GlobalNamespace::CommandBufferOwners*>* GlobalNamespace::CommandBufferBlurryScreenGrab::CamerasDict() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("CommandBufferBlurryScreenGrab").WithContext("CamerasDict");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "CamerasDict", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<System::Collections::Generic::Dictionary_2<UnityEngine::Camera*, GlobalNamespace::CommandBufferOwners*>*, false>(this, ___internal__method);
}
// Autogenerated method: CommandBufferBlurryScreenGrab.CommandBufferCameraEvent
UnityEngine::Rendering::CameraEvent GlobalNamespace::CommandBufferBlurryScreenGrab::CommandBufferCameraEvent() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("CommandBufferBlurryScreenGrab").WithContext("CommandBufferCameraEvent");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "CommandBufferCameraEvent", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<UnityEngine::Rendering::CameraEvent, false>(this, ___internal__method);
}
// Autogenerated method: CommandBufferBlurryScreenGrab..cctor
void GlobalNamespace::CommandBufferBlurryScreenGrab::_cctor() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("CommandBufferBlurryScreenGrab").WithContext(".cctor");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("", "CommandBufferBlurryScreenGrab", ".cctor", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method);
}
