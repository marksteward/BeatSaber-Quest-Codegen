// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVRBoundary
#include "GlobalNamespace/OVRBoundary.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: OVRBoundary/BoundaryType
  // [] Offset: FFFFFFFF
  struct OVRBoundary::BoundaryType/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: BoundaryType
    constexpr BoundaryType(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public OVRBoundary/BoundaryType OuterBoundary
    static constexpr const int OuterBoundary = 1;
    // Get static field: static public OVRBoundary/BoundaryType OuterBoundary
    static GlobalNamespace::OVRBoundary::BoundaryType _get_OuterBoundary();
    // Set static field: static public OVRBoundary/BoundaryType OuterBoundary
    static void _set_OuterBoundary(GlobalNamespace::OVRBoundary::BoundaryType value);
    // static field const value: static public OVRBoundary/BoundaryType PlayArea
    static constexpr const int PlayArea = 256;
    // Get static field: static public OVRBoundary/BoundaryType PlayArea
    static GlobalNamespace::OVRBoundary::BoundaryType _get_PlayArea();
    // Set static field: static public OVRBoundary/BoundaryType PlayArea
    static void _set_PlayArea(GlobalNamespace::OVRBoundary::BoundaryType value);
  }; // OVRBoundary/BoundaryType
  static check_size<sizeof(OVRBoundary::BoundaryType), 0 + sizeof(int)> __GlobalNamespace_OVRBoundary_BoundaryTypeSizeCheck;
  static_assert(sizeof(OVRBoundary::BoundaryType) == 0x4);
}
#pragma pack(pop)
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRBoundary::BoundaryType, "", "OVRBoundary/BoundaryType");
