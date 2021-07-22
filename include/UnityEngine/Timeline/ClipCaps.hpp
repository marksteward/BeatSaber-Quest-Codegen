// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: UnityEngine.Timeline
namespace UnityEngine::Timeline {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Timeline.ClipCaps
  // [TokenAttribute] Offset: FFFFFFFF
  // [FlagsAttribute] Offset: FFFFFFFF
  struct ClipCaps/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: ClipCaps
    constexpr ClipCaps(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.Timeline.ClipCaps None
    static constexpr const int None = 0;
    // Get static field: static public UnityEngine.Timeline.ClipCaps None
    static UnityEngine::Timeline::ClipCaps _get_None();
    // Set static field: static public UnityEngine.Timeline.ClipCaps None
    static void _set_None(UnityEngine::Timeline::ClipCaps value);
    // static field const value: static public UnityEngine.Timeline.ClipCaps Looping
    static constexpr const int Looping = 1;
    // Get static field: static public UnityEngine.Timeline.ClipCaps Looping
    static UnityEngine::Timeline::ClipCaps _get_Looping();
    // Set static field: static public UnityEngine.Timeline.ClipCaps Looping
    static void _set_Looping(UnityEngine::Timeline::ClipCaps value);
    // static field const value: static public UnityEngine.Timeline.ClipCaps Extrapolation
    static constexpr const int Extrapolation = 2;
    // Get static field: static public UnityEngine.Timeline.ClipCaps Extrapolation
    static UnityEngine::Timeline::ClipCaps _get_Extrapolation();
    // Set static field: static public UnityEngine.Timeline.ClipCaps Extrapolation
    static void _set_Extrapolation(UnityEngine::Timeline::ClipCaps value);
    // static field const value: static public UnityEngine.Timeline.ClipCaps ClipIn
    static constexpr const int ClipIn = 4;
    // Get static field: static public UnityEngine.Timeline.ClipCaps ClipIn
    static UnityEngine::Timeline::ClipCaps _get_ClipIn();
    // Set static field: static public UnityEngine.Timeline.ClipCaps ClipIn
    static void _set_ClipIn(UnityEngine::Timeline::ClipCaps value);
    // static field const value: static public UnityEngine.Timeline.ClipCaps SpeedMultiplier
    static constexpr const int SpeedMultiplier = 8;
    // Get static field: static public UnityEngine.Timeline.ClipCaps SpeedMultiplier
    static UnityEngine::Timeline::ClipCaps _get_SpeedMultiplier();
    // Set static field: static public UnityEngine.Timeline.ClipCaps SpeedMultiplier
    static void _set_SpeedMultiplier(UnityEngine::Timeline::ClipCaps value);
    // static field const value: static public UnityEngine.Timeline.ClipCaps Blending
    static constexpr const int Blending = 16;
    // Get static field: static public UnityEngine.Timeline.ClipCaps Blending
    static UnityEngine::Timeline::ClipCaps _get_Blending();
    // Set static field: static public UnityEngine.Timeline.ClipCaps Blending
    static void _set_Blending(UnityEngine::Timeline::ClipCaps value);
    // static field const value: static public UnityEngine.Timeline.ClipCaps AutoScale
    static constexpr const int AutoScale = 40;
    // Get static field: static public UnityEngine.Timeline.ClipCaps AutoScale
    static UnityEngine::Timeline::ClipCaps _get_AutoScale();
    // Set static field: static public UnityEngine.Timeline.ClipCaps AutoScale
    static void _set_AutoScale(UnityEngine::Timeline::ClipCaps value);
    // static field const value: static public UnityEngine.Timeline.ClipCaps All
    static constexpr const int All = -1;
    // Get static field: static public UnityEngine.Timeline.ClipCaps All
    static UnityEngine::Timeline::ClipCaps _get_All();
    // Set static field: static public UnityEngine.Timeline.ClipCaps All
    static void _set_All(UnityEngine::Timeline::ClipCaps value);
  }; // UnityEngine.Timeline.ClipCaps
  #pragma pack(pop)
  static check_size<sizeof(ClipCaps), 0 + sizeof(int)> __UnityEngine_Timeline_ClipCapsSizeCheck;
  static_assert(sizeof(ClipCaps) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Timeline::ClipCaps, "UnityEngine.Timeline", "ClipCaps");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
