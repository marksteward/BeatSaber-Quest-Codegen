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
  // Forward declaring type: Material
  class Material;
}
// Forward declaring namespace: UnityEngine::Rendering
namespace UnityEngine::Rendering {
  // Forward declaring type: CommandBuffer
  class CommandBuffer;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: DirectionalESMLight
  // [] Offset: FFFFFFFF
  // [ExecuteInEditMode] Offset: DBE478
  class DirectionalESMLight : public UnityEngine::MonoBehaviour {
    public:
    // [RangeAttribute] Offset: 0xDC0CA8
    // private System.Single _blurSize
    // Size: 0x4
    // Offset: 0x18
    float blurSize;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: blurSize and: esmShadowTexture
    char __padding0[0x4] = {};
    // private UnityEngine.RenderTexture _esmShadowTexture
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::RenderTexture* esmShadowTexture;
    // Field size check
    static_assert(sizeof(UnityEngine::RenderTexture*) == 0x8);
    // private UnityEngine.Rendering.CommandBuffer _copyBuffer
    // Size: 0x8
    // Offset: 0x28
    UnityEngine::Rendering::CommandBuffer* copyBuffer;
    // Field size check
    static_assert(sizeof(UnityEngine::Rendering::CommandBuffer*) == 0x8);
    // private UnityEngine.Material _esmBlitMaterial
    // Size: 0x8
    // Offset: 0x30
    UnityEngine::Material* esmBlitMaterial;
    // Field size check
    static_assert(sizeof(UnityEngine::Material*) == 0x8);
    // Creating value type constructor for type: DirectionalESMLight
    DirectionalESMLight(float blurSize_ = {}, UnityEngine::RenderTexture* esmShadowTexture_ = {}, UnityEngine::Rendering::CommandBuffer* copyBuffer_ = {}, UnityEngine::Material* esmBlitMaterial_ = {}) noexcept : blurSize{blurSize_}, esmShadowTexture{esmShadowTexture_}, copyBuffer{copyBuffer_}, esmBlitMaterial{esmBlitMaterial_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // protected System.Void OnEnable()
    // Offset: 0x1A5B008
    void OnEnable();
    // protected System.Void Update()
    // Offset: 0x1A5B164
    void Update();
    // protected System.Void OnDisable()
    // Offset: 0x1A5B530
    void OnDisable();
    // public System.Void .ctor()
    // Offset: 0x1A5B5E8
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DirectionalESMLight* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::DirectionalESMLight::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DirectionalESMLight*, creationType>()));
    }
  }; // DirectionalESMLight
  static check_size<sizeof(DirectionalESMLight), 48 + sizeof(UnityEngine::Material*)> __GlobalNamespace_DirectionalESMLightSizeCheck;
  static_assert(sizeof(DirectionalESMLight) == 0x38);
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::DirectionalESMLight*, "", "DirectionalESMLight");
