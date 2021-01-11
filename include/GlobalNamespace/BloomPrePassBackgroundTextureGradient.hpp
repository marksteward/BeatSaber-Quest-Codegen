// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: BloomPrePassNonLightPass
#include "GlobalNamespace/BloomPrePassNonLightPass.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
// Including type: UnityEngine.Color32
#include "UnityEngine/Color32.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Texture2D
  class Texture2D;
  // Forward declaring type: Material
  class Material;
  // Forward declaring type: RenderTexture
  class RenderTexture;
  // Forward declaring type: Matrix4x4
  struct Matrix4x4;
}
// Forward declaring namespace: Unity::Collections
namespace Unity::Collections {
  // Forward declaring type: NativeArray`1<T>
  template<typename T>
  struct NativeArray_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: BloomPrePassBackgroundTextureGradient
  // [] Offset: FFFFFFFF
  // [ExecuteAlways] Offset: DA3EE4
  class BloomPrePassBackgroundTextureGradient : public GlobalNamespace::BloomPrePassNonLightPass {
    public:
    // private UnityEngine.Texture2D _texture
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::Texture2D* texture;
    // Field size check
    static_assert(sizeof(UnityEngine::Texture2D*) == 0x8);
    // private UnityEngine.Material _material
    // Size: 0x8
    // Offset: 0x28
    UnityEngine::Material* material;
    // Field size check
    static_assert(sizeof(UnityEngine::Material*) == 0x8);
    // Creating value type constructor for type: BloomPrePassBackgroundTextureGradient
    BloomPrePassBackgroundTextureGradient(UnityEngine::Texture2D* texture_ = {}, UnityEngine::Material* material_ = {}) noexcept : texture{texture_}, material{material_} {}
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0xDA460C
    // Get static field: static private readonly System.Int32 _gradientTexID
    static int _get__gradientTexID();
    // Set static field: static private readonly System.Int32 _gradientTexID
    static void _set__gradientTexID(int value);
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0xDA461C
    // Get static field: static private readonly System.Int32 _inverseProjectionMatrixID
    static int _get__inverseProjectionMatrixID();
    // Set static field: static private readonly System.Int32 _inverseProjectionMatrixID
    static void _set__inverseProjectionMatrixID(int value);
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0xDA462C
    // Get static field: static private readonly System.Int32 _cameraToWorldMatrixID
    static int _get__cameraToWorldMatrixID();
    // Set static field: static private readonly System.Int32 _cameraToWorldMatrixID
    static void _set__cameraToWorldMatrixID(int value);
    // static field const value: static private System.Int32 kTextureWidth
    static constexpr const int kTextureWidth = 128;
    // Get static field: static private System.Int32 kTextureWidth
    static int _get_kTextureWidth();
    // Set static field: static private System.Int32 kTextureWidth
    static void _set_kTextureWidth(int value);
    // private System.Boolean InitIfNeeded()
    // Offset: 0x1875CE4
    bool InitIfNeeded();
    // private System.Void UpdateTexturePixels()
    // Offset: 0x1875ED8
    void UpdateTexturePixels();
    // protected System.Void Start()
    // Offset: 0x1875F64
    void Start();
    // protected System.Void OnDestroy()
    // Offset: 0x1875F68
    void OnDestroy();
    // protected System.Void UpdatePixels(Unity.Collections.NativeArray`1<UnityEngine.Color32> pixels, System.Int32 numberOfPixels)
    // Offset: 0xFFFFFFFF
    void UpdatePixels(Unity::Collections::NativeArray_1<UnityEngine::Color32> pixels, int numberOfPixels);
    // public System.Void UpdateGradientTexture()
    // Offset: 0x18758CC
    void UpdateGradientTexture();
    // protected override System.Void OnValidate()
    // Offset: 0x1875F98
    // Implemented from: BloomPrePassNonLightPass
    // Base method: System.Void BloomPrePassNonLightPass::OnValidate()
    void OnValidate();
    // public override System.Void Render(UnityEngine.RenderTexture dest, UnityEngine.Matrix4x4 viewMatrix, UnityEngine.Matrix4x4 projectionMatrix)
    // Offset: 0x1875FF8
    // Implemented from: BloomPrePassNonLightPass
    // Base method: System.Void BloomPrePassNonLightPass::Render(UnityEngine.RenderTexture dest, UnityEngine.Matrix4x4 viewMatrix, UnityEngine.Matrix4x4 projectionMatrix)
    void Render(UnityEngine::RenderTexture* dest, UnityEngine::Matrix4x4 viewMatrix, UnityEngine::Matrix4x4 projectionMatrix);
    // protected System.Void .ctor()
    // Offset: 0x187565C
    // Implemented from: BloomPrePassNonLightPass
    // Base method: System.Void BloomPrePassNonLightPass::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BloomPrePassBackgroundTextureGradient* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BloomPrePassBackgroundTextureGradient::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BloomPrePassBackgroundTextureGradient*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0x1876150
    // Implemented from: BloomPrePassNonLightPass
    // Base method: System.Void BloomPrePassNonLightPass::.cctor()
    // Base method: System.Void Object::.cctor()
    static void _cctor();
  }; // BloomPrePassBackgroundTextureGradient
  static check_size<sizeof(BloomPrePassBackgroundTextureGradient), 40 + sizeof(UnityEngine::Material*)> __GlobalNamespace_BloomPrePassBackgroundTextureGradientSizeCheck;
  static_assert(sizeof(BloomPrePassBackgroundTextureGradient) == 0x30);
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BloomPrePassBackgroundTextureGradient*, "", "BloomPrePassBackgroundTextureGradient");
