// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: Valve.VR
namespace Valve::VR {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: Valve.VR.EVRTrackedCameraFrameType
  // [] Offset: FFFFFFFF
  struct EVRTrackedCameraFrameType/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: EVRTrackedCameraFrameType
    constexpr EVRTrackedCameraFrameType(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public Valve.VR.EVRTrackedCameraFrameType Distorted
    static constexpr const int Distorted = 0;
    // Get static field: static public Valve.VR.EVRTrackedCameraFrameType Distorted
    static Valve::VR::EVRTrackedCameraFrameType _get_Distorted();
    // Set static field: static public Valve.VR.EVRTrackedCameraFrameType Distorted
    static void _set_Distorted(Valve::VR::EVRTrackedCameraFrameType value);
    // static field const value: static public Valve.VR.EVRTrackedCameraFrameType Undistorted
    static constexpr const int Undistorted = 1;
    // Get static field: static public Valve.VR.EVRTrackedCameraFrameType Undistorted
    static Valve::VR::EVRTrackedCameraFrameType _get_Undistorted();
    // Set static field: static public Valve.VR.EVRTrackedCameraFrameType Undistorted
    static void _set_Undistorted(Valve::VR::EVRTrackedCameraFrameType value);
    // static field const value: static public Valve.VR.EVRTrackedCameraFrameType MaximumUndistorted
    static constexpr const int MaximumUndistorted = 2;
    // Get static field: static public Valve.VR.EVRTrackedCameraFrameType MaximumUndistorted
    static Valve::VR::EVRTrackedCameraFrameType _get_MaximumUndistorted();
    // Set static field: static public Valve.VR.EVRTrackedCameraFrameType MaximumUndistorted
    static void _set_MaximumUndistorted(Valve::VR::EVRTrackedCameraFrameType value);
    // static field const value: static public Valve.VR.EVRTrackedCameraFrameType MAX_CAMERA_FRAME_TYPES
    static constexpr const int MAX_CAMERA_FRAME_TYPES = 3;
    // Get static field: static public Valve.VR.EVRTrackedCameraFrameType MAX_CAMERA_FRAME_TYPES
    static Valve::VR::EVRTrackedCameraFrameType _get_MAX_CAMERA_FRAME_TYPES();
    // Set static field: static public Valve.VR.EVRTrackedCameraFrameType MAX_CAMERA_FRAME_TYPES
    static void _set_MAX_CAMERA_FRAME_TYPES(Valve::VR::EVRTrackedCameraFrameType value);
  }; // Valve.VR.EVRTrackedCameraFrameType
  static check_size<sizeof(EVRTrackedCameraFrameType), 0 + sizeof(int)> __Valve_VR_EVRTrackedCameraFrameTypeSizeCheck;
  static_assert(sizeof(EVRTrackedCameraFrameType) == 0x4);
}
#pragma pack(pop)
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::EVRTrackedCameraFrameType, "Valve.VR", "EVRTrackedCameraFrameType");
