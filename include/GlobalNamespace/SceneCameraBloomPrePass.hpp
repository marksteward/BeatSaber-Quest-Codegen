// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: CameraRenderCallbacksManager/ICameraRenderCallbacks
#include "GlobalNamespace/CameraRenderCallbacksManager_ICameraRenderCallbacks.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
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
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: SceneCameraBloomPrePass
  // [RequireComponent] Offset: D1449C
  // [ExecuteInEditMode] Offset: D1449C
  class SceneCameraBloomPrePass : public UnityEngine::MonoBehaviour/*, public GlobalNamespace::CameraRenderCallbacksManager::ICameraRenderCallbacks*/ {
    public:
    // private BloomPrePassRendererSO _bloomPrepassRenderer
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::BloomPrePassRendererSO* bloomPrepassRenderer;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BloomPrePassRendererSO*) == 0x8);
    // private BloomPrePassEffectContainerSO _bloomPrePassEffectContainer
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::BloomPrePassEffectContainerSO* bloomPrePassEffectContainer;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BloomPrePassEffectContainerSO*) == 0x8);
    // private UnityEngine.RenderTexture _bloomPrepassRenderTexture
    // Size: 0x8
    // Offset: 0x28
    UnityEngine::RenderTexture* bloomPrepassRenderTexture;
    // Field size check
    static_assert(sizeof(UnityEngine::RenderTexture*) == 0x8);
    // Creating value type constructor for type: SceneCameraBloomPrePass
    SceneCameraBloomPrePass(GlobalNamespace::BloomPrePassRendererSO* bloomPrepassRenderer_ = {}, GlobalNamespace::BloomPrePassEffectContainerSO* bloomPrePassEffectContainer_ = {}, UnityEngine::RenderTexture* bloomPrepassRenderTexture_ = {}) noexcept : bloomPrepassRenderer{bloomPrepassRenderer_}, bloomPrePassEffectContainer{bloomPrePassEffectContainer_}, bloomPrepassRenderTexture{bloomPrepassRenderTexture_} {}
    // Creating interface conversion operator: operator GlobalNamespace::CameraRenderCallbacksManager::ICameraRenderCallbacks
    operator GlobalNamespace::CameraRenderCallbacksManager::ICameraRenderCallbacks() noexcept {
      return *reinterpret_cast<GlobalNamespace::CameraRenderCallbacksManager::ICameraRenderCallbacks*>(this);
    }
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Void OnCameraPreRender(UnityEngine.Camera camera)
    // Offset: 0x1D18628
    void OnCameraPreRender(UnityEngine::Camera* camera);
    // public System.Void OnCameraPostRender(UnityEngine.Camera camera)
    // Offset: 0x1D1862C
    void OnCameraPostRender(UnityEngine::Camera* camera);
    // public System.Void .ctor()
    // Offset: 0x1D18630
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SceneCameraBloomPrePass* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::SceneCameraBloomPrePass::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SceneCameraBloomPrePass*, creationType>()));
    }
  }; // SceneCameraBloomPrePass
  #pragma pack(pop)
  static check_size<sizeof(SceneCameraBloomPrePass), 40 + sizeof(UnityEngine::RenderTexture*)> __GlobalNamespace_SceneCameraBloomPrePassSizeCheck;
  static_assert(sizeof(SceneCameraBloomPrePass) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SceneCameraBloomPrePass*, "", "SceneCameraBloomPrePass");
