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
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: KawaseBlurRendererSO
  class KawaseBlurRendererSO;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Shader
  class Shader;
  // Forward declaring type: Material
  class Material;
  // Forward declaring type: RenderTexture
  class RenderTexture;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x60
  #pragma pack(push, 1)
  // Autogenerated type: KawaseBloomMainEffectSO
  // [] Offset: FFFFFFFF
  class KawaseBloomMainEffectSO : public GlobalNamespace::MainEffectSO {
    public:
    // private KawaseBlurRendererSO _kawaseBlurRenderer
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::KawaseBlurRendererSO* kawaseBlurRenderer;
    // Field size check
    static_assert(sizeof(GlobalNamespace::KawaseBlurRendererSO*) == 0x8);
    // private UnityEngine.Shader _fadeShader
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::Shader* fadeShader;
    // Field size check
    static_assert(sizeof(UnityEngine::Shader*) == 0x8);
    // private UnityEngine.Shader _mainEffectShader
    // Size: 0x8
    // Offset: 0x28
    UnityEngine::Shader* mainEffectShader;
    // Field size check
    static_assert(sizeof(UnityEngine::Shader*) == 0x8);
    // [SpaceAttribute] Offset: 0xDB1064
    // [RangeAttribute] Offset: 0xDB1064
    // private System.Single _bloomIntensity
    // Size: 0x4
    // Offset: 0x30
    float bloomIntensity;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Int32 _bloomIterations
    // Size: 0x4
    // Offset: 0x34
    int bloomIterations;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Single _bloomBoost
    // Size: 0x4
    // Offset: 0x38
    float bloomBoost;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _bloomAlphaWeights
    // Size: 0x4
    // Offset: 0x3C
    float bloomAlphaWeights;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [SpaceAttribute] Offset: 0xDB10E4
    // private System.Int32 _bloomTextureWidth
    // Size: 0x4
    // Offset: 0x40
    int bloomTextureWidth;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // [SpaceAttribute] Offset: 0xDB111C
    // [RangeAttribute] Offset: 0xDB111C
    // private System.Single _baseColorBoost
    // Size: 0x4
    // Offset: 0x44
    float baseColorBoost;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _baseColorBoostThreshold
    // Size: 0x4
    // Offset: 0x48
    float baseColorBoostThreshold;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: baseColorBoostThreshold and: fadeMaterial
    char __padding9[0x4] = {};
    // private UnityEngine.Material _fadeMaterial
    // Size: 0x8
    // Offset: 0x50
    UnityEngine::Material* fadeMaterial;
    // Field size check
    static_assert(sizeof(UnityEngine::Material*) == 0x8);
    // private UnityEngine.Material _mainEffectMaterial
    // Size: 0x8
    // Offset: 0x58
    UnityEngine::Material* mainEffectMaterial;
    // Field size check
    static_assert(sizeof(UnityEngine::Material*) == 0x8);
    // Creating value type constructor for type: KawaseBloomMainEffectSO
    KawaseBloomMainEffectSO(GlobalNamespace::KawaseBlurRendererSO* kawaseBlurRenderer_ = {}, UnityEngine::Shader* fadeShader_ = {}, UnityEngine::Shader* mainEffectShader_ = {}, float bloomIntensity_ = {}, int bloomIterations_ = {}, float bloomBoost_ = {}, float bloomAlphaWeights_ = {}, int bloomTextureWidth_ = {}, float baseColorBoost_ = {}, float baseColorBoostThreshold_ = {}, UnityEngine::Material* fadeMaterial_ = {}, UnityEngine::Material* mainEffectMaterial_ = {}) noexcept : kawaseBlurRenderer{kawaseBlurRenderer_}, fadeShader{fadeShader_}, mainEffectShader{mainEffectShader_}, bloomIntensity{bloomIntensity_}, bloomIterations{bloomIterations_}, bloomBoost{bloomBoost_}, bloomAlphaWeights{bloomAlphaWeights_}, bloomTextureWidth{bloomTextureWidth_}, baseColorBoost{baseColorBoost_}, baseColorBoostThreshold{baseColorBoostThreshold_}, fadeMaterial{fadeMaterial_}, mainEffectMaterial{mainEffectMaterial_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0xDB117C
    // Get static field: static private readonly System.Int32 _bloomTexID
    static int _get__bloomTexID();
    // Set static field: static private readonly System.Int32 _bloomTexID
    static void _set__bloomTexID(int value);
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0xDB118C
    // Get static field: static private readonly System.Int32 _bloomIntensityID
    static int _get__bloomIntensityID();
    // Set static field: static private readonly System.Int32 _bloomIntensityID
    static void _set__bloomIntensityID(int value);
    // protected System.Void OnDisable()
    // Offset: 0x1989928
    void OnDisable();
    // private System.Void LazyInitializeMaterials()
    // Offset: 0x19897C4
    void LazyInitializeMaterials();
    // public override System.Boolean get_hasPostProcessEffect()
    // Offset: 0x1989794
    // Implemented from: MainEffectSO
    // Base method: System.Boolean MainEffectSO::get_hasPostProcessEffect()
    bool get_hasPostProcessEffect();
    // protected override System.Void OnEnable()
    // Offset: 0x198979C
    // Implemented from: PersistentScriptableObject
    // Base method: System.Void PersistentScriptableObject::OnEnable()
    void OnEnable();
    // public override System.Void PreRender()
    // Offset: 0x198997C
    // Implemented from: MainEffectSO
    // Base method: System.Void MainEffectSO::PreRender()
    void PreRender();
    // public override System.Void Render(UnityEngine.RenderTexture src, UnityEngine.RenderTexture dest, System.Single fade)
    // Offset: 0x1989A88
    // Implemented from: MainEffectSO
    // Base method: System.Void MainEffectSO::Render(UnityEngine.RenderTexture src, UnityEngine.RenderTexture dest, System.Single fade)
    void Render(UnityEngine::RenderTexture* src, UnityEngine::RenderTexture* dest, float fade);
    // public System.Void .ctor()
    // Offset: 0x1989D04
    // Implemented from: MainEffectSO
    // Base method: System.Void MainEffectSO::.ctor()
    // Base method: System.Void PersistentScriptableObject::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static KawaseBloomMainEffectSO* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::KawaseBloomMainEffectSO::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<KawaseBloomMainEffectSO*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0x1989D34
    // Implemented from: UnityEngine.Object
    // Base method: System.Void Object::.cctor()
    static void _cctor();
  }; // KawaseBloomMainEffectSO
  static check_size<sizeof(KawaseBloomMainEffectSO), 88 + sizeof(UnityEngine::Material*)> __GlobalNamespace_KawaseBloomMainEffectSOSizeCheck;
  static_assert(sizeof(KawaseBloomMainEffectSO) == 0x60);
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::KawaseBloomMainEffectSO*, "", "KawaseBloomMainEffectSO");
