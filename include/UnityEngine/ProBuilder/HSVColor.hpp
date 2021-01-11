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
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Color
  struct Color;
}
// Completed forward declares
// Type namespace: UnityEngine.ProBuilder
namespace UnityEngine::ProBuilder {
  // Size: 0x1C
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ProBuilder.HSVColor
  // [] Offset: FFFFFFFF
  class HSVColor : public ::Il2CppObject {
    public:
    // public System.Single h
    // Size: 0x4
    // Offset: 0x10
    float h;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single s
    // Size: 0x4
    // Offset: 0x14
    float s;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single v
    // Size: 0x4
    // Offset: 0x18
    float v;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Creating value type constructor for type: HSVColor
    HSVColor(float h_ = {}, float s_ = {}, float v_ = {}) noexcept : h{h_}, s{s_}, v{v_} {}
    // public System.Void .ctor(System.Single h, System.Single s, System.Single v)
    // Offset: 0x1635E70
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HSVColor* New_ctor(float h, float s, float v) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::HSVColor::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HSVColor*, creationType>(h, s, v)));
    }
    // public System.Void .ctor(System.Single h, System.Single s, System.Single v, System.Single sv_modifier)
    // Offset: 0x1635EB8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HSVColor* New_ctor(float h, float s, float v, float sv_modifier) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::HSVColor::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HSVColor*, creationType>(h, s, v, sv_modifier)));
    }
    // static public UnityEngine.ProBuilder.HSVColor FromRGB(UnityEngine.Color col)
    // Offset: 0x1635F0C
    static UnityEngine::ProBuilder::HSVColor* FromRGB(UnityEngine::Color col);
    // public System.Single SqrDistance(UnityEngine.ProBuilder.HSVColor InColor)
    // Offset: 0x163605C
    float SqrDistance(UnityEngine::ProBuilder::HSVColor* InColor);
    // public override System.String ToString()
    // Offset: 0x1635F9C
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
  }; // UnityEngine.ProBuilder.HSVColor
  static check_size<sizeof(HSVColor), 24 + sizeof(float)> __UnityEngine_ProBuilder_HSVColorSizeCheck;
  static_assert(sizeof(HSVColor) == 0x1C);
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::HSVColor*, "UnityEngine.ProBuilder", "HSVColor");
