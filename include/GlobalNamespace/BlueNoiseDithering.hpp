// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: PersistentScriptableObject
#include "GlobalNamespace/PersistentScriptableObject.hpp"
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
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: BlueNoiseDithering
  class BlueNoiseDithering : public GlobalNamespace::PersistentScriptableObject {
    public:
    // private UnityEngine.Texture2D _noiseTexture
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::Texture2D* noiseTexture;
    // Field size check
    static_assert(sizeof(UnityEngine::Texture2D*) == 0x8);
    // Creating value type constructor for type: BlueNoiseDithering
    BlueNoiseDithering(UnityEngine::Texture2D* noiseTexture_ = {}) noexcept : noiseTexture{noiseTexture_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0xDF6518
    // Get static field: static private readonly System.Int32 _noiseParamsID
    static int _get__noiseParamsID();
    // Set static field: static private readonly System.Int32 _noiseParamsID
    static void _set__noiseParamsID(int value);
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0xDF6528
    // Get static field: static private readonly System.Int32 _globalNoiseTextureID
    static int _get__globalNoiseTextureID();
    // Set static field: static private readonly System.Int32 _globalNoiseTextureID
    static void _set__globalNoiseTextureID(int value);
    // public System.Void SetBlueNoiseShaderParams(System.Int32 cameraPixelWidth, System.Int32 cameraPixelHeight)
    // Offset: 0x1D8886C
    void SetBlueNoiseShaderParams(int cameraPixelWidth, int cameraPixelHeight);
    // public System.Void .ctor()
    // Offset: 0x1D8898C
    // Implemented from: PersistentScriptableObject
    // Base method: System.Void PersistentScriptableObject::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BlueNoiseDithering* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BlueNoiseDithering::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BlueNoiseDithering*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0x1D88994
    // Implemented from: UnityEngine.Object
    // Base method: System.Void Object::.cctor()
    static void _cctor();
  }; // BlueNoiseDithering
  #pragma pack(pop)
  static check_size<sizeof(BlueNoiseDithering), 24 + sizeof(UnityEngine::Texture2D*)> __GlobalNamespace_BlueNoiseDitheringSizeCheck;
  static_assert(sizeof(BlueNoiseDithering) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BlueNoiseDithering*, "", "BlueNoiseDithering");
// Writing MetadataGetter for method: GlobalNamespace::BlueNoiseDithering::SetBlueNoiseShaderParams
// Il2CppName: SetBlueNoiseShaderParams
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::BlueNoiseDithering::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::BlueNoiseDithering::_cctor
// Il2CppName: .cctor
// Cannot perform method pointer template specialization from operators!
