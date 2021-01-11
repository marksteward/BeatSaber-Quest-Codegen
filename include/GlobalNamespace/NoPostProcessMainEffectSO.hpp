// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: MainEffectSO
#include "GlobalNamespace/MainEffectSO.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Shader
  class Shader;
  // Forward declaring type: Material
  class Material;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: NoPostProcessMainEffectSO
  // [] Offset: FFFFFFFF
  class NoPostProcessMainEffectSO : public GlobalNamespace::MainEffectSO {
    public:
    // private UnityEngine.Shader _fadeShader
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::Shader* fadeShader;
    // Field size check
    static_assert(sizeof(UnityEngine::Shader*) == 0x8);
    // [SpaceAttribute] Offset: 0xDB121C
    // [RangeAttribute] Offset: 0xDB121C
    // private System.Single _baseColorBoost
    // Size: 0x4
    // Offset: 0x20
    float baseColorBoost;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _baseColorBoostThreshold
    // Size: 0x4
    // Offset: 0x24
    float baseColorBoostThreshold;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private UnityEngine.Material _fadeMaterial
    // Size: 0x8
    // Offset: 0x28
    UnityEngine::Material* fadeMaterial;
    // Field size check
    static_assert(sizeof(UnityEngine::Material*) == 0x8);
    // Creating value type constructor for type: NoPostProcessMainEffectSO
    NoPostProcessMainEffectSO(UnityEngine::Shader* fadeShader_ = {}, float baseColorBoost_ = {}, float baseColorBoostThreshold_ = {}, UnityEngine::Material* fadeMaterial_ = {}) noexcept : fadeShader{fadeShader_}, baseColorBoost{baseColorBoost_}, baseColorBoostThreshold{baseColorBoostThreshold_}, fadeMaterial{fadeMaterial_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // protected System.Void OnDisable()
    // Offset: 0x198C40C
    void OnDisable();
    // public System.Void DrawFadeQuad(System.Single alpha)
    // Offset: 0x198C498
    void DrawFadeQuad(float alpha);
    // public override System.Boolean get_hasPostProcessEffect()
    // Offset: 0x198C368
    // Implemented from: MainEffectSO
    // Base method: System.Boolean MainEffectSO::get_hasPostProcessEffect()
    bool get_hasPostProcessEffect();
    // protected override System.Void OnEnable()
    // Offset: 0x198C370
    // Implemented from: PersistentScriptableObject
    // Base method: System.Void PersistentScriptableObject::OnEnable()
    void OnEnable();
    // public override System.Void PreRender()
    // Offset: 0x198C418
    // Implemented from: MainEffectSO
    // Base method: System.Void MainEffectSO::PreRender()
    void PreRender();
    // public override System.Void PostRender(System.Single fade)
    // Offset: 0x198C48C
    // Implemented from: MainEffectSO
    // Base method: System.Void MainEffectSO::PostRender(System.Single fade)
    void PostRender(float fade);
    // public System.Void .ctor()
    // Offset: 0x198C5AC
    // Implemented from: MainEffectSO
    // Base method: System.Void MainEffectSO::.ctor()
    // Base method: System.Void PersistentScriptableObject::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NoPostProcessMainEffectSO* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::NoPostProcessMainEffectSO::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NoPostProcessMainEffectSO*, creationType>()));
    }
  }; // NoPostProcessMainEffectSO
  static check_size<sizeof(NoPostProcessMainEffectSO), 40 + sizeof(UnityEngine::Material*)> __GlobalNamespace_NoPostProcessMainEffectSOSizeCheck;
  static_assert(sizeof(NoPostProcessMainEffectSO) == 0x30);
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::NoPostProcessMainEffectSO*, "", "NoPostProcessMainEffectSO");
