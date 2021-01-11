// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
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
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: RenderTextureFromPostEffect
  // [] Offset: FFFFFFFF
  class RenderTextureFromPostEffect : public UnityEngine::MonoBehaviour {
    public:
    // public UnityEngine.RenderTexture _targetTexture
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::RenderTexture* targetTexture;
    // Field size check
    static_assert(sizeof(UnityEngine::RenderTexture*) == 0x8);
    // private UnityEngine.Camera _camera
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::Camera* camera;
    // Field size check
    static_assert(sizeof(UnityEngine::Camera*) == 0x8);
    // Creating value type constructor for type: RenderTextureFromPostEffect
    RenderTextureFromPostEffect(UnityEngine::RenderTexture* targetTexture_ = {}, UnityEngine::Camera* camera_ = {}) noexcept : targetTexture{targetTexture_}, camera{camera_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public UnityEngine.RenderTexture get_targetTexture()
    // Offset: 0x198D0F8
    UnityEngine::RenderTexture* get_targetTexture();
    // protected System.Void Awake()
    // Offset: 0x198D100
    void Awake();
    // private System.Void OnRenderImage(UnityEngine.RenderTexture src, UnityEngine.RenderTexture dst)
    // Offset: 0x198D160
    void OnRenderImage(UnityEngine::RenderTexture* src, UnityEngine::RenderTexture* dst);
    // public System.Void .ctor()
    // Offset: 0x198D384
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RenderTextureFromPostEffect* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::RenderTextureFromPostEffect::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RenderTextureFromPostEffect*, creationType>()));
    }
  }; // RenderTextureFromPostEffect
  static check_size<sizeof(RenderTextureFromPostEffect), 32 + sizeof(UnityEngine::Camera*)> __GlobalNamespace_RenderTextureFromPostEffectSizeCheck;
  static_assert(sizeof(RenderTextureFromPostEffect) == 0x28);
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::RenderTextureFromPostEffect*, "", "RenderTextureFromPostEffect");
