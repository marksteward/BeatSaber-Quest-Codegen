// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVRInput/OVRControllerGamepadMac
#include "GlobalNamespace/OVRInput_OVRControllerGamepadMac.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: OVRInput/OVRControllerGamepadMac/AxisGPC
  // [] Offset: FFFFFFFF
  struct OVRInput::OVRControllerGamepadMac::AxisGPC/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: AxisGPC
    constexpr AxisGPC(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public OVRInput/OVRControllerGamepadMac/AxisGPC None
    static constexpr const int None = -1;
    // Get static field: static public OVRInput/OVRControllerGamepadMac/AxisGPC None
    static GlobalNamespace::OVRInput::OVRControllerGamepadMac::AxisGPC _get_None();
    // Set static field: static public OVRInput/OVRControllerGamepadMac/AxisGPC None
    static void _set_None(GlobalNamespace::OVRInput::OVRControllerGamepadMac::AxisGPC value);
    // static field const value: static public OVRInput/OVRControllerGamepadMac/AxisGPC LeftXAxis
    static constexpr const int LeftXAxis = 0;
    // Get static field: static public OVRInput/OVRControllerGamepadMac/AxisGPC LeftXAxis
    static GlobalNamespace::OVRInput::OVRControllerGamepadMac::AxisGPC _get_LeftXAxis();
    // Set static field: static public OVRInput/OVRControllerGamepadMac/AxisGPC LeftXAxis
    static void _set_LeftXAxis(GlobalNamespace::OVRInput::OVRControllerGamepadMac::AxisGPC value);
    // static field const value: static public OVRInput/OVRControllerGamepadMac/AxisGPC LeftYAxis
    static constexpr const int LeftYAxis = 1;
    // Get static field: static public OVRInput/OVRControllerGamepadMac/AxisGPC LeftYAxis
    static GlobalNamespace::OVRInput::OVRControllerGamepadMac::AxisGPC _get_LeftYAxis();
    // Set static field: static public OVRInput/OVRControllerGamepadMac/AxisGPC LeftYAxis
    static void _set_LeftYAxis(GlobalNamespace::OVRInput::OVRControllerGamepadMac::AxisGPC value);
    // static field const value: static public OVRInput/OVRControllerGamepadMac/AxisGPC RightXAxis
    static constexpr const int RightXAxis = 2;
    // Get static field: static public OVRInput/OVRControllerGamepadMac/AxisGPC RightXAxis
    static GlobalNamespace::OVRInput::OVRControllerGamepadMac::AxisGPC _get_RightXAxis();
    // Set static field: static public OVRInput/OVRControllerGamepadMac/AxisGPC RightXAxis
    static void _set_RightXAxis(GlobalNamespace::OVRInput::OVRControllerGamepadMac::AxisGPC value);
    // static field const value: static public OVRInput/OVRControllerGamepadMac/AxisGPC RightYAxis
    static constexpr const int RightYAxis = 3;
    // Get static field: static public OVRInput/OVRControllerGamepadMac/AxisGPC RightYAxis
    static GlobalNamespace::OVRInput::OVRControllerGamepadMac::AxisGPC _get_RightYAxis();
    // Set static field: static public OVRInput/OVRControllerGamepadMac/AxisGPC RightYAxis
    static void _set_RightYAxis(GlobalNamespace::OVRInput::OVRControllerGamepadMac::AxisGPC value);
    // static field const value: static public OVRInput/OVRControllerGamepadMac/AxisGPC LeftTrigger
    static constexpr const int LeftTrigger = 4;
    // Get static field: static public OVRInput/OVRControllerGamepadMac/AxisGPC LeftTrigger
    static GlobalNamespace::OVRInput::OVRControllerGamepadMac::AxisGPC _get_LeftTrigger();
    // Set static field: static public OVRInput/OVRControllerGamepadMac/AxisGPC LeftTrigger
    static void _set_LeftTrigger(GlobalNamespace::OVRInput::OVRControllerGamepadMac::AxisGPC value);
    // static field const value: static public OVRInput/OVRControllerGamepadMac/AxisGPC RightTrigger
    static constexpr const int RightTrigger = 5;
    // Get static field: static public OVRInput/OVRControllerGamepadMac/AxisGPC RightTrigger
    static GlobalNamespace::OVRInput::OVRControllerGamepadMac::AxisGPC _get_RightTrigger();
    // Set static field: static public OVRInput/OVRControllerGamepadMac/AxisGPC RightTrigger
    static void _set_RightTrigger(GlobalNamespace::OVRInput::OVRControllerGamepadMac::AxisGPC value);
    // static field const value: static public OVRInput/OVRControllerGamepadMac/AxisGPC DPad_X_Axis
    static constexpr const int DPad_X_Axis = 6;
    // Get static field: static public OVRInput/OVRControllerGamepadMac/AxisGPC DPad_X_Axis
    static GlobalNamespace::OVRInput::OVRControllerGamepadMac::AxisGPC _get_DPad_X_Axis();
    // Set static field: static public OVRInput/OVRControllerGamepadMac/AxisGPC DPad_X_Axis
    static void _set_DPad_X_Axis(GlobalNamespace::OVRInput::OVRControllerGamepadMac::AxisGPC value);
    // static field const value: static public OVRInput/OVRControllerGamepadMac/AxisGPC DPad_Y_Axis
    static constexpr const int DPad_Y_Axis = 7;
    // Get static field: static public OVRInput/OVRControllerGamepadMac/AxisGPC DPad_Y_Axis
    static GlobalNamespace::OVRInput::OVRControllerGamepadMac::AxisGPC _get_DPad_Y_Axis();
    // Set static field: static public OVRInput/OVRControllerGamepadMac/AxisGPC DPad_Y_Axis
    static void _set_DPad_Y_Axis(GlobalNamespace::OVRInput::OVRControllerGamepadMac::AxisGPC value);
    // static field const value: static public OVRInput/OVRControllerGamepadMac/AxisGPC Max
    static constexpr const int Max = 8;
    // Get static field: static public OVRInput/OVRControllerGamepadMac/AxisGPC Max
    static GlobalNamespace::OVRInput::OVRControllerGamepadMac::AxisGPC _get_Max();
    // Set static field: static public OVRInput/OVRControllerGamepadMac/AxisGPC Max
    static void _set_Max(GlobalNamespace::OVRInput::OVRControllerGamepadMac::AxisGPC value);
  }; // OVRInput/OVRControllerGamepadMac/AxisGPC
  static check_size<sizeof(OVRInput::OVRControllerGamepadMac::AxisGPC), 0 + sizeof(int)> __GlobalNamespace_OVRInput_OVRControllerGamepadMac_AxisGPCSizeCheck;
  static_assert(sizeof(OVRInput::OVRControllerGamepadMac::AxisGPC) == 0x4);
}
#pragma pack(pop)
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRInput::OVRControllerGamepadMac::AxisGPC, "", "OVRInput/OVRControllerGamepadMac/AxisGPC");
