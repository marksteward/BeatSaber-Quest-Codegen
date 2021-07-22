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
  // Autogenerated type: UnityEngine.RotationOrder
  // [TokenAttribute] Offset: FFFFFFFF
  struct RotationOrder/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: RotationOrder
    constexpr RotationOrder(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.RotationOrder OrderXYZ
    static constexpr const int OrderXYZ = 0;
    // Get static field: static public UnityEngine.RotationOrder OrderXYZ
    static UnityEngine::RotationOrder _get_OrderXYZ();
    // Set static field: static public UnityEngine.RotationOrder OrderXYZ
    static void _set_OrderXYZ(UnityEngine::RotationOrder value);
    // static field const value: static public UnityEngine.RotationOrder OrderXZY
    static constexpr const int OrderXZY = 1;
    // Get static field: static public UnityEngine.RotationOrder OrderXZY
    static UnityEngine::RotationOrder _get_OrderXZY();
    // Set static field: static public UnityEngine.RotationOrder OrderXZY
    static void _set_OrderXZY(UnityEngine::RotationOrder value);
    // static field const value: static public UnityEngine.RotationOrder OrderYZX
    static constexpr const int OrderYZX = 2;
    // Get static field: static public UnityEngine.RotationOrder OrderYZX
    static UnityEngine::RotationOrder _get_OrderYZX();
    // Set static field: static public UnityEngine.RotationOrder OrderYZX
    static void _set_OrderYZX(UnityEngine::RotationOrder value);
    // static field const value: static public UnityEngine.RotationOrder OrderYXZ
    static constexpr const int OrderYXZ = 3;
    // Get static field: static public UnityEngine.RotationOrder OrderYXZ
    static UnityEngine::RotationOrder _get_OrderYXZ();
    // Set static field: static public UnityEngine.RotationOrder OrderYXZ
    static void _set_OrderYXZ(UnityEngine::RotationOrder value);
    // static field const value: static public UnityEngine.RotationOrder OrderZXY
    static constexpr const int OrderZXY = 4;
    // Get static field: static public UnityEngine.RotationOrder OrderZXY
    static UnityEngine::RotationOrder _get_OrderZXY();
    // Set static field: static public UnityEngine.RotationOrder OrderZXY
    static void _set_OrderZXY(UnityEngine::RotationOrder value);
    // static field const value: static public UnityEngine.RotationOrder OrderZYX
    static constexpr const int OrderZYX = 5;
    // Get static field: static public UnityEngine.RotationOrder OrderZYX
    static UnityEngine::RotationOrder _get_OrderZYX();
    // Set static field: static public UnityEngine.RotationOrder OrderZYX
    static void _set_OrderZYX(UnityEngine::RotationOrder value);
  }; // UnityEngine.RotationOrder
  #pragma pack(pop)
  static check_size<sizeof(RotationOrder), 0 + sizeof(int)> __UnityEngine_RotationOrderSizeCheck;
  static_assert(sizeof(RotationOrder) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::RotationOrder, "UnityEngine", "RotationOrder");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
