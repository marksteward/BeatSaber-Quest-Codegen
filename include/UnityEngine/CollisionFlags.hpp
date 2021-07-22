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
  // Autogenerated type: UnityEngine.CollisionFlags
  // [TokenAttribute] Offset: FFFFFFFF
  struct CollisionFlags/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: CollisionFlags
    constexpr CollisionFlags(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.CollisionFlags None
    static constexpr const int None = 0;
    // Get static field: static public UnityEngine.CollisionFlags None
    static UnityEngine::CollisionFlags _get_None();
    // Set static field: static public UnityEngine.CollisionFlags None
    static void _set_None(UnityEngine::CollisionFlags value);
    // static field const value: static public UnityEngine.CollisionFlags Sides
    static constexpr const int Sides = 1;
    // Get static field: static public UnityEngine.CollisionFlags Sides
    static UnityEngine::CollisionFlags _get_Sides();
    // Set static field: static public UnityEngine.CollisionFlags Sides
    static void _set_Sides(UnityEngine::CollisionFlags value);
    // static field const value: static public UnityEngine.CollisionFlags Above
    static constexpr const int Above = 2;
    // Get static field: static public UnityEngine.CollisionFlags Above
    static UnityEngine::CollisionFlags _get_Above();
    // Set static field: static public UnityEngine.CollisionFlags Above
    static void _set_Above(UnityEngine::CollisionFlags value);
    // static field const value: static public UnityEngine.CollisionFlags Below
    static constexpr const int Below = 4;
    // Get static field: static public UnityEngine.CollisionFlags Below
    static UnityEngine::CollisionFlags _get_Below();
    // Set static field: static public UnityEngine.CollisionFlags Below
    static void _set_Below(UnityEngine::CollisionFlags value);
    // static field const value: static public UnityEngine.CollisionFlags CollidedSides
    static constexpr const int CollidedSides = 1;
    // Get static field: static public UnityEngine.CollisionFlags CollidedSides
    static UnityEngine::CollisionFlags _get_CollidedSides();
    // Set static field: static public UnityEngine.CollisionFlags CollidedSides
    static void _set_CollidedSides(UnityEngine::CollisionFlags value);
    // static field const value: static public UnityEngine.CollisionFlags CollidedAbove
    static constexpr const int CollidedAbove = 2;
    // Get static field: static public UnityEngine.CollisionFlags CollidedAbove
    static UnityEngine::CollisionFlags _get_CollidedAbove();
    // Set static field: static public UnityEngine.CollisionFlags CollidedAbove
    static void _set_CollidedAbove(UnityEngine::CollisionFlags value);
    // static field const value: static public UnityEngine.CollisionFlags CollidedBelow
    static constexpr const int CollidedBelow = 4;
    // Get static field: static public UnityEngine.CollisionFlags CollidedBelow
    static UnityEngine::CollisionFlags _get_CollidedBelow();
    // Set static field: static public UnityEngine.CollisionFlags CollidedBelow
    static void _set_CollidedBelow(UnityEngine::CollisionFlags value);
  }; // UnityEngine.CollisionFlags
  #pragma pack(pop)
  static check_size<sizeof(CollisionFlags), 0 + sizeof(int)> __UnityEngine_CollisionFlagsSizeCheck;
  static_assert(sizeof(CollisionFlags) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::CollisionFlags, "UnityEngine", "CollisionFlags");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
