// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.SkinQuality
  // [TokenAttribute] Offset: FFFFFFFF
  struct SkinQuality/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: SkinQuality
    constexpr SkinQuality(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.SkinQuality Auto
    static constexpr const int Auto = 0;
    // Get static field: static public UnityEngine.SkinQuality Auto
    static UnityEngine::SkinQuality _get_Auto();
    // Set static field: static public UnityEngine.SkinQuality Auto
    static void _set_Auto(UnityEngine::SkinQuality value);
    // static field const value: static public UnityEngine.SkinQuality Bone1
    static constexpr const int Bone1 = 1;
    // Get static field: static public UnityEngine.SkinQuality Bone1
    static UnityEngine::SkinQuality _get_Bone1();
    // Set static field: static public UnityEngine.SkinQuality Bone1
    static void _set_Bone1(UnityEngine::SkinQuality value);
    // static field const value: static public UnityEngine.SkinQuality Bone2
    static constexpr const int Bone2 = 2;
    // Get static field: static public UnityEngine.SkinQuality Bone2
    static UnityEngine::SkinQuality _get_Bone2();
    // Set static field: static public UnityEngine.SkinQuality Bone2
    static void _set_Bone2(UnityEngine::SkinQuality value);
    // static field const value: static public UnityEngine.SkinQuality Bone4
    static constexpr const int Bone4 = 4;
    // Get static field: static public UnityEngine.SkinQuality Bone4
    static UnityEngine::SkinQuality _get_Bone4();
    // Set static field: static public UnityEngine.SkinQuality Bone4
    static void _set_Bone4(UnityEngine::SkinQuality value);
  }; // UnityEngine.SkinQuality
  #pragma pack(pop)
  static check_size<sizeof(SkinQuality), 0 + sizeof(int)> __UnityEngine_SkinQualitySizeCheck;
  static_assert(sizeof(SkinQuality) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::SkinQuality, "UnityEngine", "SkinQuality");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
