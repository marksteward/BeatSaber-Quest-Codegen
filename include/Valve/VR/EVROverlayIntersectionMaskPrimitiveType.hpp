// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: Valve.VR
namespace Valve::VR {
  // Autogenerated type: Valve.VR.EVROverlayIntersectionMaskPrimitiveType
  struct EVROverlayIntersectionMaskPrimitiveType : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // Creating value type constructor for type: EVROverlayIntersectionMaskPrimitiveType
    constexpr EVROverlayIntersectionMaskPrimitiveType(int value_ = {}) : value{value_} {}
    // Creating conversion operator: operator int
    constexpr operator int() const {
      return value;
    }
    // static field const value: static public Valve.VR.EVROverlayIntersectionMaskPrimitiveType OverlayIntersectionPrimitiveType_Rectangle
    static constexpr const int OverlayIntersectionPrimitiveType_Rectangle = 0;
    // Get static field: static public Valve.VR.EVROverlayIntersectionMaskPrimitiveType OverlayIntersectionPrimitiveType_Rectangle
    static Valve::VR::EVROverlayIntersectionMaskPrimitiveType _get_OverlayIntersectionPrimitiveType_Rectangle();
    // Set static field: static public Valve.VR.EVROverlayIntersectionMaskPrimitiveType OverlayIntersectionPrimitiveType_Rectangle
    static void _set_OverlayIntersectionPrimitiveType_Rectangle(Valve::VR::EVROverlayIntersectionMaskPrimitiveType value);
    // static field const value: static public Valve.VR.EVROverlayIntersectionMaskPrimitiveType OverlayIntersectionPrimitiveType_Circle
    static constexpr const int OverlayIntersectionPrimitiveType_Circle = 1;
    // Get static field: static public Valve.VR.EVROverlayIntersectionMaskPrimitiveType OverlayIntersectionPrimitiveType_Circle
    static Valve::VR::EVROverlayIntersectionMaskPrimitiveType _get_OverlayIntersectionPrimitiveType_Circle();
    // Set static field: static public Valve.VR.EVROverlayIntersectionMaskPrimitiveType OverlayIntersectionPrimitiveType_Circle
    static void _set_OverlayIntersectionPrimitiveType_Circle(Valve::VR::EVROverlayIntersectionMaskPrimitiveType value);
  }; // Valve.VR.EVROverlayIntersectionMaskPrimitiveType
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::EVROverlayIntersectionMaskPrimitiveType, "Valve.VR", "EVROverlayIntersectionMaskPrimitiveType");
#pragma pack(pop)
