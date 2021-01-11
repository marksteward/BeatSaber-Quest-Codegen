// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: KawaseBlurRendererSO
#include "GlobalNamespace/KawaseBlurRendererSO.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: KawaseBlurRendererSO/WeightsType
  // [] Offset: FFFFFFFF
  struct KawaseBlurRendererSO::WeightsType/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: WeightsType
    constexpr WeightsType(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public KawaseBlurRendererSO/WeightsType None
    static constexpr const int None = 0;
    // Get static field: static public KawaseBlurRendererSO/WeightsType None
    static GlobalNamespace::KawaseBlurRendererSO::WeightsType _get_None();
    // Set static field: static public KawaseBlurRendererSO/WeightsType None
    static void _set_None(GlobalNamespace::KawaseBlurRendererSO::WeightsType value);
    // static field const value: static public KawaseBlurRendererSO/WeightsType AlphaWeights
    static constexpr const int AlphaWeights = 1;
    // Get static field: static public KawaseBlurRendererSO/WeightsType AlphaWeights
    static GlobalNamespace::KawaseBlurRendererSO::WeightsType _get_AlphaWeights();
    // Set static field: static public KawaseBlurRendererSO/WeightsType AlphaWeights
    static void _set_AlphaWeights(GlobalNamespace::KawaseBlurRendererSO::WeightsType value);
    // static field const value: static public KawaseBlurRendererSO/WeightsType AlphaAndDepthWeights
    static constexpr const int AlphaAndDepthWeights = 2;
    // Get static field: static public KawaseBlurRendererSO/WeightsType AlphaAndDepthWeights
    static GlobalNamespace::KawaseBlurRendererSO::WeightsType _get_AlphaAndDepthWeights();
    // Set static field: static public KawaseBlurRendererSO/WeightsType AlphaAndDepthWeights
    static void _set_AlphaAndDepthWeights(GlobalNamespace::KawaseBlurRendererSO::WeightsType value);
  }; // KawaseBlurRendererSO/WeightsType
  static check_size<sizeof(KawaseBlurRendererSO::WeightsType), 0 + sizeof(int)> __GlobalNamespace_KawaseBlurRendererSO_WeightsTypeSizeCheck;
  static_assert(sizeof(KawaseBlurRendererSO::WeightsType) == 0x4);
}
#pragma pack(pop)
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::KawaseBlurRendererSO::WeightsType, "", "KawaseBlurRendererSO/WeightsType");
