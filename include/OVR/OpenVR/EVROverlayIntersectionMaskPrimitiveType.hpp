// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: OVR.OpenVR.EVROverlayIntersectionMaskPrimitiveType
  // [] Offset: FFFFFFFF
  struct EVROverlayIntersectionMaskPrimitiveType/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: EVROverlayIntersectionMaskPrimitiveType
    constexpr EVROverlayIntersectionMaskPrimitiveType(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public OVR.OpenVR.EVROverlayIntersectionMaskPrimitiveType OverlayIntersectionPrimitiveType_Rectangle
    static constexpr const int OverlayIntersectionPrimitiveType_Rectangle = 0;
    // Get static field: static public OVR.OpenVR.EVROverlayIntersectionMaskPrimitiveType OverlayIntersectionPrimitiveType_Rectangle
    static OVR::OpenVR::EVROverlayIntersectionMaskPrimitiveType _get_OverlayIntersectionPrimitiveType_Rectangle();
    // Set static field: static public OVR.OpenVR.EVROverlayIntersectionMaskPrimitiveType OverlayIntersectionPrimitiveType_Rectangle
    static void _set_OverlayIntersectionPrimitiveType_Rectangle(OVR::OpenVR::EVROverlayIntersectionMaskPrimitiveType value);
    // static field const value: static public OVR.OpenVR.EVROverlayIntersectionMaskPrimitiveType OverlayIntersectionPrimitiveType_Circle
    static constexpr const int OverlayIntersectionPrimitiveType_Circle = 1;
    // Get static field: static public OVR.OpenVR.EVROverlayIntersectionMaskPrimitiveType OverlayIntersectionPrimitiveType_Circle
    static OVR::OpenVR::EVROverlayIntersectionMaskPrimitiveType _get_OverlayIntersectionPrimitiveType_Circle();
    // Set static field: static public OVR.OpenVR.EVROverlayIntersectionMaskPrimitiveType OverlayIntersectionPrimitiveType_Circle
    static void _set_OverlayIntersectionPrimitiveType_Circle(OVR::OpenVR::EVROverlayIntersectionMaskPrimitiveType value);
  }; // OVR.OpenVR.EVROverlayIntersectionMaskPrimitiveType
  static check_size<sizeof(EVROverlayIntersectionMaskPrimitiveType), 0 + sizeof(int)> __OVR_OpenVR_EVROverlayIntersectionMaskPrimitiveTypeSizeCheck;
  static_assert(sizeof(EVROverlayIntersectionMaskPrimitiveType) == 0x4);
}
#pragma pack(pop)
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::EVROverlayIntersectionMaskPrimitiveType, "OVR.OpenVR", "EVROverlayIntersectionMaskPrimitiveType");
