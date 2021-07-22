// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: CameraRenderCallbacksManager
#include "GlobalNamespace/CameraRenderCallbacksManager.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Camera
  class Camera;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: CameraRenderCallbacksManager/ICameraRenderCallbacks
  // [TokenAttribute] Offset: FFFFFFFF
  class CameraRenderCallbacksManager::ICameraRenderCallbacks : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: ICameraRenderCallbacks
    ICameraRenderCallbacks() noexcept {}
    // public System.Void OnCameraPostRender(UnityEngine.Camera camera)
    // Offset: 0xFFFFFFFF
    void OnCameraPostRender(UnityEngine::Camera* camera);
    // public System.Void OnCameraPreRender(UnityEngine.Camera camera)
    // Offset: 0xFFFFFFFF
    void OnCameraPreRender(UnityEngine::Camera* camera);
  }; // CameraRenderCallbacksManager/ICameraRenderCallbacks
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::CameraRenderCallbacksManager::ICameraRenderCallbacks*, "", "CameraRenderCallbacksManager/ICameraRenderCallbacks");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::CameraRenderCallbacksManager::ICameraRenderCallbacks::OnCameraPostRender
// Il2CppName: OnCameraPostRender
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CameraRenderCallbacksManager::ICameraRenderCallbacks::*)(UnityEngine::Camera*)>(&GlobalNamespace::CameraRenderCallbacksManager::ICameraRenderCallbacks::OnCameraPostRender)> {
  static const MethodInfo* get() {
    static auto* camera = &::il2cpp_utils::GetClassFromName("UnityEngine", "Camera")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CameraRenderCallbacksManager::ICameraRenderCallbacks*), "OnCameraPostRender", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{camera});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CameraRenderCallbacksManager::ICameraRenderCallbacks::OnCameraPreRender
// Il2CppName: OnCameraPreRender
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CameraRenderCallbacksManager::ICameraRenderCallbacks::*)(UnityEngine::Camera*)>(&GlobalNamespace::CameraRenderCallbacksManager::ICameraRenderCallbacks::OnCameraPreRender)> {
  static const MethodInfo* get() {
    static auto* camera = &::il2cpp_utils::GetClassFromName("UnityEngine", "Camera")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CameraRenderCallbacksManager::ICameraRenderCallbacks*), "OnCameraPreRender", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{camera});
  }
};
