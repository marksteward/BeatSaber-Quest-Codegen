// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: UnityEngine.ProBuilder
namespace UnityEngine::ProBuilder {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ProBuilder.BezierTangentDirection
  // [TokenAttribute] Offset: FFFFFFFF
  struct BezierTangentDirection/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: BezierTangentDirection
    constexpr BezierTangentDirection(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.ProBuilder.BezierTangentDirection In
    static constexpr const int In = 0;
    // Get static field: static public UnityEngine.ProBuilder.BezierTangentDirection In
    static UnityEngine::ProBuilder::BezierTangentDirection _get_In();
    // Set static field: static public UnityEngine.ProBuilder.BezierTangentDirection In
    static void _set_In(UnityEngine::ProBuilder::BezierTangentDirection value);
    // static field const value: static public UnityEngine.ProBuilder.BezierTangentDirection Out
    static constexpr const int Out = 1;
    // Get static field: static public UnityEngine.ProBuilder.BezierTangentDirection Out
    static UnityEngine::ProBuilder::BezierTangentDirection _get_Out();
    // Set static field: static public UnityEngine.ProBuilder.BezierTangentDirection Out
    static void _set_Out(UnityEngine::ProBuilder::BezierTangentDirection value);
  }; // UnityEngine.ProBuilder.BezierTangentDirection
  #pragma pack(pop)
  static check_size<sizeof(BezierTangentDirection), 0 + sizeof(int)> __UnityEngine_ProBuilder_BezierTangentDirectionSizeCheck;
  static_assert(sizeof(BezierTangentDirection) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::BezierTangentDirection, "UnityEngine.ProBuilder", "BezierTangentDirection");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
