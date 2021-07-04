// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: PerlinNoise
  class PerlinNoise : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: PerlinNoise
    PerlinNoise() noexcept {}
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0xDE3590
    // Get static field: static private readonly System.Int32[] permutation
    static ::Array<int>* _get_permutation();
    // Set static field: static private readonly System.Int32[] permutation
    static void _set_permutation(::Array<int>* value);
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0xDE35A0
    // Get static field: static private readonly System.Int32[] p
    static ::Array<int>* _get_p();
    // Set static field: static private readonly System.Int32[] p
    static void _set_p(::Array<int>* value);
    // static private System.Void .cctor()
    // Offset: 0x1250DD8
    static void _cctor();
    // static public System.Single OctavePerlin3D(System.Single x, System.Single y, System.Single z, System.Int32 octaves, System.Single persistence, System.Int32 repeat)
    // Offset: 0x1250EE4
    static float OctavePerlin3D(float x, float y, float z, int octaves, float persistence, int repeat);
    // static public System.Single Perlin3D(System.Single x, System.Single y, System.Single z, System.Int32 repeat)
    // Offset: 0x1250FD8
    static float Perlin3D(float x, float y, float z, int repeat);
    // static private System.Int32 Inc(System.Int32 num, System.Int32 repeat)
    // Offset: 0x125154C
    static int Inc(int num, int repeat);
    // static private System.Single Grad3D(System.Int32 hash, System.Single x, System.Single y, System.Single z)
    // Offset: 0x1251564
    static float Grad3D(int hash, float x, float y, float z);
    // static private System.Single Fade(System.Single t)
    // Offset: 0x1251520
    static float Fade(float t);
    // static private System.Single Lerp(System.Single a, System.Single b, System.Single x)
    // Offset: 0x12515E0
    static float Lerp(float a, float b, float x);
    // public System.Void .ctor()
    // Offset: 0x12515F0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PerlinNoise* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::PerlinNoise::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PerlinNoise*, creationType>()));
    }
  }; // PerlinNoise
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PerlinNoise*, "", "PerlinNoise");
// Writing MetadataGetter for method: GlobalNamespace::PerlinNoise::_cctor
// Il2CppName: .cctor
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::PerlinNoise::OctavePerlin3D
// Il2CppName: OctavePerlin3D
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::PerlinNoise::Perlin3D
// Il2CppName: Perlin3D
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::PerlinNoise::Inc
// Il2CppName: Inc
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::PerlinNoise::Grad3D
// Il2CppName: Grad3D
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::PerlinNoise::Fade
// Il2CppName: Fade
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::PerlinNoise::Lerp
// Il2CppName: Lerp
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::PerlinNoise::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
