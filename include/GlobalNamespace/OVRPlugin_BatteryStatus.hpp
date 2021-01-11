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
  // Autogenerated type: OVRPlugin/BatteryStatus
  // [] Offset: FFFFFFFF
  struct OVRPlugin::BatteryStatus/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: BatteryStatus
    constexpr BatteryStatus(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public OVRPlugin/BatteryStatus Charging
    static constexpr const int Charging = 0;
    // Get static field: static public OVRPlugin/BatteryStatus Charging
    static GlobalNamespace::OVRPlugin::BatteryStatus _get_Charging();
    // Set static field: static public OVRPlugin/BatteryStatus Charging
    static void _set_Charging(GlobalNamespace::OVRPlugin::BatteryStatus value);
    // static field const value: static public OVRPlugin/BatteryStatus Discharging
    static constexpr const int Discharging = 1;
    // Get static field: static public OVRPlugin/BatteryStatus Discharging
    static GlobalNamespace::OVRPlugin::BatteryStatus _get_Discharging();
    // Set static field: static public OVRPlugin/BatteryStatus Discharging
    static void _set_Discharging(GlobalNamespace::OVRPlugin::BatteryStatus value);
    // static field const value: static public OVRPlugin/BatteryStatus Full
    static constexpr const int Full = 2;
    // Get static field: static public OVRPlugin/BatteryStatus Full
    static GlobalNamespace::OVRPlugin::BatteryStatus _get_Full();
    // Set static field: static public OVRPlugin/BatteryStatus Full
    static void _set_Full(GlobalNamespace::OVRPlugin::BatteryStatus value);
    // static field const value: static public OVRPlugin/BatteryStatus NotCharging
    static constexpr const int NotCharging = 3;
    // Get static field: static public OVRPlugin/BatteryStatus NotCharging
    static GlobalNamespace::OVRPlugin::BatteryStatus _get_NotCharging();
    // Set static field: static public OVRPlugin/BatteryStatus NotCharging
    static void _set_NotCharging(GlobalNamespace::OVRPlugin::BatteryStatus value);
    // static field const value: static public OVRPlugin/BatteryStatus Unknown
    static constexpr const int Unknown = 4;
    // Get static field: static public OVRPlugin/BatteryStatus Unknown
    static GlobalNamespace::OVRPlugin::BatteryStatus _get_Unknown();
    // Set static field: static public OVRPlugin/BatteryStatus Unknown
    static void _set_Unknown(GlobalNamespace::OVRPlugin::BatteryStatus value);
  }; // OVRPlugin/BatteryStatus
  static check_size<sizeof(OVRPlugin::BatteryStatus), 0 + sizeof(int)> __GlobalNamespace_OVRPlugin_BatteryStatusSizeCheck;
  static_assert(sizeof(OVRPlugin::BatteryStatus) == 0x4);
}
#pragma pack(pop)
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRPlugin::BatteryStatus, "", "OVRPlugin/BatteryStatus");
