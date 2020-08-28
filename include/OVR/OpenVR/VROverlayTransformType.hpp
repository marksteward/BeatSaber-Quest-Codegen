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
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Autogenerated type: OVR.OpenVR.VROverlayTransformType
  struct VROverlayTransformType : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // Creating value type constructor for type: VROverlayTransformType
    constexpr VROverlayTransformType(int value_ = {}) : value{value_} {}
    // Creating conversion operator: operator int
    constexpr operator int() const {
      return value;
    }
    // static field const value: static public OVR.OpenVR.VROverlayTransformType VROverlayTransform_Absolute
    static constexpr const int VROverlayTransform_Absolute = 0;
    // Get static field: static public OVR.OpenVR.VROverlayTransformType VROverlayTransform_Absolute
    static OVR::OpenVR::VROverlayTransformType _get_VROverlayTransform_Absolute();
    // Set static field: static public OVR.OpenVR.VROverlayTransformType VROverlayTransform_Absolute
    static void _set_VROverlayTransform_Absolute(OVR::OpenVR::VROverlayTransformType value);
    // static field const value: static public OVR.OpenVR.VROverlayTransformType VROverlayTransform_TrackedDeviceRelative
    static constexpr const int VROverlayTransform_TrackedDeviceRelative = 1;
    // Get static field: static public OVR.OpenVR.VROverlayTransformType VROverlayTransform_TrackedDeviceRelative
    static OVR::OpenVR::VROverlayTransformType _get_VROverlayTransform_TrackedDeviceRelative();
    // Set static field: static public OVR.OpenVR.VROverlayTransformType VROverlayTransform_TrackedDeviceRelative
    static void _set_VROverlayTransform_TrackedDeviceRelative(OVR::OpenVR::VROverlayTransformType value);
    // static field const value: static public OVR.OpenVR.VROverlayTransformType VROverlayTransform_SystemOverlay
    static constexpr const int VROverlayTransform_SystemOverlay = 2;
    // Get static field: static public OVR.OpenVR.VROverlayTransformType VROverlayTransform_SystemOverlay
    static OVR::OpenVR::VROverlayTransformType _get_VROverlayTransform_SystemOverlay();
    // Set static field: static public OVR.OpenVR.VROverlayTransformType VROverlayTransform_SystemOverlay
    static void _set_VROverlayTransform_SystemOverlay(OVR::OpenVR::VROverlayTransformType value);
    // static field const value: static public OVR.OpenVR.VROverlayTransformType VROverlayTransform_TrackedComponent
    static constexpr const int VROverlayTransform_TrackedComponent = 3;
    // Get static field: static public OVR.OpenVR.VROverlayTransformType VROverlayTransform_TrackedComponent
    static OVR::OpenVR::VROverlayTransformType _get_VROverlayTransform_TrackedComponent();
    // Set static field: static public OVR.OpenVR.VROverlayTransformType VROverlayTransform_TrackedComponent
    static void _set_VROverlayTransform_TrackedComponent(OVR::OpenVR::VROverlayTransformType value);
  }; // OVR.OpenVR.VROverlayTransformType
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::VROverlayTransformType, "OVR.OpenVR", "VROverlayTransformType");
#pragma pack(pop)
