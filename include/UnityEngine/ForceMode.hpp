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
  // Autogenerated type: UnityEngine.ForceMode
  // [TokenAttribute] Offset: FFFFFFFF
  struct ForceMode/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: ForceMode
    constexpr ForceMode(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.ForceMode Force
    static constexpr const int Force = 0;
    // Get static field: static public UnityEngine.ForceMode Force
    static UnityEngine::ForceMode _get_Force();
    // Set static field: static public UnityEngine.ForceMode Force
    static void _set_Force(UnityEngine::ForceMode value);
    // static field const value: static public UnityEngine.ForceMode Acceleration
    static constexpr const int Acceleration = 5;
    // Get static field: static public UnityEngine.ForceMode Acceleration
    static UnityEngine::ForceMode _get_Acceleration();
    // Set static field: static public UnityEngine.ForceMode Acceleration
    static void _set_Acceleration(UnityEngine::ForceMode value);
    // static field const value: static public UnityEngine.ForceMode Impulse
    static constexpr const int Impulse = 1;
    // Get static field: static public UnityEngine.ForceMode Impulse
    static UnityEngine::ForceMode _get_Impulse();
    // Set static field: static public UnityEngine.ForceMode Impulse
    static void _set_Impulse(UnityEngine::ForceMode value);
    // static field const value: static public UnityEngine.ForceMode VelocityChange
    static constexpr const int VelocityChange = 2;
    // Get static field: static public UnityEngine.ForceMode VelocityChange
    static UnityEngine::ForceMode _get_VelocityChange();
    // Set static field: static public UnityEngine.ForceMode VelocityChange
    static void _set_VelocityChange(UnityEngine::ForceMode value);
  }; // UnityEngine.ForceMode
  #pragma pack(pop)
  static check_size<sizeof(ForceMode), 0 + sizeof(int)> __UnityEngine_ForceModeSizeCheck;
  static_assert(sizeof(ForceMode) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ForceMode, "UnityEngine", "ForceMode");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
