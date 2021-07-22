// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVRPlugin
#include "GlobalNamespace/OVRPlugin.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: OVRPlugin/CameraStatus
  // [TokenAttribute] Offset: FFFFFFFF
  struct OVRPlugin::CameraStatus/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: CameraStatus
    constexpr CameraStatus(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public OVRPlugin/CameraStatus CameraStatus_None
    static constexpr const int CameraStatus_None = 0;
    // Get static field: static public OVRPlugin/CameraStatus CameraStatus_None
    static GlobalNamespace::OVRPlugin::CameraStatus _get_CameraStatus_None();
    // Set static field: static public OVRPlugin/CameraStatus CameraStatus_None
    static void _set_CameraStatus_None(GlobalNamespace::OVRPlugin::CameraStatus value);
    // static field const value: static public OVRPlugin/CameraStatus CameraStatus_Connected
    static constexpr const int CameraStatus_Connected = 1;
    // Get static field: static public OVRPlugin/CameraStatus CameraStatus_Connected
    static GlobalNamespace::OVRPlugin::CameraStatus _get_CameraStatus_Connected();
    // Set static field: static public OVRPlugin/CameraStatus CameraStatus_Connected
    static void _set_CameraStatus_Connected(GlobalNamespace::OVRPlugin::CameraStatus value);
    // static field const value: static public OVRPlugin/CameraStatus CameraStatus_Calibrating
    static constexpr const int CameraStatus_Calibrating = 2;
    // Get static field: static public OVRPlugin/CameraStatus CameraStatus_Calibrating
    static GlobalNamespace::OVRPlugin::CameraStatus _get_CameraStatus_Calibrating();
    // Set static field: static public OVRPlugin/CameraStatus CameraStatus_Calibrating
    static void _set_CameraStatus_Calibrating(GlobalNamespace::OVRPlugin::CameraStatus value);
    // static field const value: static public OVRPlugin/CameraStatus CameraStatus_CalibrationFailed
    static constexpr const int CameraStatus_CalibrationFailed = 3;
    // Get static field: static public OVRPlugin/CameraStatus CameraStatus_CalibrationFailed
    static GlobalNamespace::OVRPlugin::CameraStatus _get_CameraStatus_CalibrationFailed();
    // Set static field: static public OVRPlugin/CameraStatus CameraStatus_CalibrationFailed
    static void _set_CameraStatus_CalibrationFailed(GlobalNamespace::OVRPlugin::CameraStatus value);
    // static field const value: static public OVRPlugin/CameraStatus CameraStatus_Calibrated
    static constexpr const int CameraStatus_Calibrated = 4;
    // Get static field: static public OVRPlugin/CameraStatus CameraStatus_Calibrated
    static GlobalNamespace::OVRPlugin::CameraStatus _get_CameraStatus_Calibrated();
    // Set static field: static public OVRPlugin/CameraStatus CameraStatus_Calibrated
    static void _set_CameraStatus_Calibrated(GlobalNamespace::OVRPlugin::CameraStatus value);
    // static field const value: static public OVRPlugin/CameraStatus CameraStatus_ThirdPerson
    static constexpr const int CameraStatus_ThirdPerson = 5;
    // Get static field: static public OVRPlugin/CameraStatus CameraStatus_ThirdPerson
    static GlobalNamespace::OVRPlugin::CameraStatus _get_CameraStatus_ThirdPerson();
    // Set static field: static public OVRPlugin/CameraStatus CameraStatus_ThirdPerson
    static void _set_CameraStatus_ThirdPerson(GlobalNamespace::OVRPlugin::CameraStatus value);
    // static field const value: static public OVRPlugin/CameraStatus CameraStatus_EnumSize
    static constexpr const int CameraStatus_EnumSize = 2147483647;
    // Get static field: static public OVRPlugin/CameraStatus CameraStatus_EnumSize
    static GlobalNamespace::OVRPlugin::CameraStatus _get_CameraStatus_EnumSize();
    // Set static field: static public OVRPlugin/CameraStatus CameraStatus_EnumSize
    static void _set_CameraStatus_EnumSize(GlobalNamespace::OVRPlugin::CameraStatus value);
  }; // OVRPlugin/CameraStatus
  #pragma pack(pop)
  static check_size<sizeof(OVRPlugin::CameraStatus), 0 + sizeof(int)> __GlobalNamespace_OVRPlugin_CameraStatusSizeCheck;
  static_assert(sizeof(OVRPlugin::CameraStatus) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRPlugin::CameraStatus, "", "OVRPlugin/CameraStatus");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
