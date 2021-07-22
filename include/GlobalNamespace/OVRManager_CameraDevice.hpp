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
  // Autogenerated type: OVRManager/CameraDevice
  // [TokenAttribute] Offset: FFFFFFFF
  struct OVRManager_CameraDevice/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: OVRManager_CameraDevice
    constexpr OVRManager_CameraDevice(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public OVRManager/CameraDevice WebCamera0
    static constexpr const int WebCamera0 = 0;
    // Get static field: static public OVRManager/CameraDevice WebCamera0
    static GlobalNamespace::OVRManager_CameraDevice _get_WebCamera0();
    // Set static field: static public OVRManager/CameraDevice WebCamera0
    static void _set_WebCamera0(GlobalNamespace::OVRManager_CameraDevice value);
    // static field const value: static public OVRManager/CameraDevice WebCamera1
    static constexpr const int WebCamera1 = 1;
    // Get static field: static public OVRManager/CameraDevice WebCamera1
    static GlobalNamespace::OVRManager_CameraDevice _get_WebCamera1();
    // Set static field: static public OVRManager/CameraDevice WebCamera1
    static void _set_WebCamera1(GlobalNamespace::OVRManager_CameraDevice value);
    // static field const value: static public OVRManager/CameraDevice ZEDCamera
    static constexpr const int ZEDCamera = 2;
    // Get static field: static public OVRManager/CameraDevice ZEDCamera
    static GlobalNamespace::OVRManager_CameraDevice _get_ZEDCamera();
    // Set static field: static public OVRManager/CameraDevice ZEDCamera
    static void _set_ZEDCamera(GlobalNamespace::OVRManager_CameraDevice value);
  }; // OVRManager/CameraDevice
  #pragma pack(pop)
  static check_size<sizeof(OVRManager_CameraDevice), 0 + sizeof(int)> __GlobalNamespace_OVRManager_CameraDeviceSizeCheck;
  static_assert(sizeof(OVRManager_CameraDevice) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRManager_CameraDevice, "", "OVRManager/CameraDevice");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
