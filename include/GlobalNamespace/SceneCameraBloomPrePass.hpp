// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: CameraRenderCallbacksManager/ICameraRenderCallbacks
#include "GlobalNamespace/CameraRenderCallbacksManager_ICameraRenderCallbacks.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BloomPrePassRendererSO
  class BloomPrePassRendererSO;
  // Forward declaring type: BloomPrePassEffectContainerSO
  class BloomPrePassEffectContainerSO;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: RenderTexture
  class RenderTexture;
  // Forward declaring type: Camera
  class Camera;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: SceneCameraBloomPrePass
  class SceneCameraBloomPrePass : public UnityEngine::MonoBehaviour/*, public GlobalNamespace::CameraRenderCallbacksManager::ICameraRenderCallbacks*/ {
    public:
    // private BloomPrePassRendererSO _bloomPrepassRenderer
    // Offset: 0x18
    GlobalNamespace::BloomPrePassRendererSO* bloomPrepassRenderer;
    // private BloomPrePassEffectContainerSO _bloomPrePassEffectContainer
    // Offset: 0x20
    GlobalNamespace::BloomPrePassEffectContainerSO* bloomPrePassEffectContainer;
    // private UnityEngine.RenderTexture _bloomPrePassRenderTexture
    // Offset: 0x28
    UnityEngine::RenderTexture* bloomPrePassRenderTexture;
    // Creating interface conversion operator: operator GlobalNamespace::CameraRenderCallbacksManager::ICameraRenderCallbacks
    operator GlobalNamespace::CameraRenderCallbacksManager::ICameraRenderCallbacks() noexcept {
      return *reinterpret_cast<GlobalNamespace::CameraRenderCallbacksManager::ICameraRenderCallbacks*>(this);
    }
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Void OnCameraPreRender(UnityEngine.Camera camera)
    // Offset: 0x1D037D8
    // Implemented from: CameraRenderCallbacksManager/ICameraRenderCallbacks
    // Base method: System.Void ICameraRenderCallbacks::OnCameraPreRender(UnityEngine.Camera camera)
    void OnCameraPreRender(UnityEngine::Camera* camera);
    // public System.Void OnCameraPostRender(UnityEngine.Camera camera)
    // Offset: 0x1D037DC
    // Implemented from: CameraRenderCallbacksManager/ICameraRenderCallbacks
    // Base method: System.Void ICameraRenderCallbacks::OnCameraPostRender(UnityEngine.Camera camera)
    void OnCameraPostRender(UnityEngine::Camera* camera);
    // public System.Void .ctor()
    // Offset: 0x1D037E0
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static SceneCameraBloomPrePass* New_ctor();
  }; // SceneCameraBloomPrePass
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SceneCameraBloomPrePass*, "", "SceneCameraBloomPrePass");
#pragma pack(pop)
