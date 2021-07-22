// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: NodeStatePropertyType
  // [TokenAttribute] Offset: FFFFFFFF
  struct NodeStatePropertyType/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: NodeStatePropertyType
    constexpr NodeStatePropertyType(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public NodeStatePropertyType Acceleration
    static constexpr const int Acceleration = 0;
    // Get static field: static public NodeStatePropertyType Acceleration
    static GlobalNamespace::NodeStatePropertyType _get_Acceleration();
    // Set static field: static public NodeStatePropertyType Acceleration
    static void _set_Acceleration(GlobalNamespace::NodeStatePropertyType value);
    // static field const value: static public NodeStatePropertyType AngularAcceleration
    static constexpr const int AngularAcceleration = 1;
    // Get static field: static public NodeStatePropertyType AngularAcceleration
    static GlobalNamespace::NodeStatePropertyType _get_AngularAcceleration();
    // Set static field: static public NodeStatePropertyType AngularAcceleration
    static void _set_AngularAcceleration(GlobalNamespace::NodeStatePropertyType value);
    // static field const value: static public NodeStatePropertyType Velocity
    static constexpr const int Velocity = 2;
    // Get static field: static public NodeStatePropertyType Velocity
    static GlobalNamespace::NodeStatePropertyType _get_Velocity();
    // Set static field: static public NodeStatePropertyType Velocity
    static void _set_Velocity(GlobalNamespace::NodeStatePropertyType value);
    // static field const value: static public NodeStatePropertyType AngularVelocity
    static constexpr const int AngularVelocity = 3;
    // Get static field: static public NodeStatePropertyType AngularVelocity
    static GlobalNamespace::NodeStatePropertyType _get_AngularVelocity();
    // Set static field: static public NodeStatePropertyType AngularVelocity
    static void _set_AngularVelocity(GlobalNamespace::NodeStatePropertyType value);
    // static field const value: static public NodeStatePropertyType Position
    static constexpr const int Position = 4;
    // Get static field: static public NodeStatePropertyType Position
    static GlobalNamespace::NodeStatePropertyType _get_Position();
    // Set static field: static public NodeStatePropertyType Position
    static void _set_Position(GlobalNamespace::NodeStatePropertyType value);
    // static field const value: static public NodeStatePropertyType Orientation
    static constexpr const int Orientation = 5;
    // Get static field: static public NodeStatePropertyType Orientation
    static GlobalNamespace::NodeStatePropertyType _get_Orientation();
    // Set static field: static public NodeStatePropertyType Orientation
    static void _set_Orientation(GlobalNamespace::NodeStatePropertyType value);
  }; // NodeStatePropertyType
  #pragma pack(pop)
  static check_size<sizeof(NodeStatePropertyType), 0 + sizeof(int)> __GlobalNamespace_NodeStatePropertyTypeSizeCheck;
  static_assert(sizeof(NodeStatePropertyType) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::NodeStatePropertyType, "", "NodeStatePropertyType");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
