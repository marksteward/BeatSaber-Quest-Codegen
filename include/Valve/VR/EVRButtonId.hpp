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
  // Autogenerated type: Valve.VR.EVRButtonId
  // [] Offset: FFFFFFFF
  struct EVRButtonId/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: EVRButtonId
    constexpr EVRButtonId(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public Valve.VR.EVRButtonId k_EButton_System
    static constexpr const int k_EButton_System = 0;
    // Get static field: static public Valve.VR.EVRButtonId k_EButton_System
    static Valve::VR::EVRButtonId _get_k_EButton_System();
    // Set static field: static public Valve.VR.EVRButtonId k_EButton_System
    static void _set_k_EButton_System(Valve::VR::EVRButtonId value);
    // static field const value: static public Valve.VR.EVRButtonId k_EButton_ApplicationMenu
    static constexpr const int k_EButton_ApplicationMenu = 1;
    // Get static field: static public Valve.VR.EVRButtonId k_EButton_ApplicationMenu
    static Valve::VR::EVRButtonId _get_k_EButton_ApplicationMenu();
    // Set static field: static public Valve.VR.EVRButtonId k_EButton_ApplicationMenu
    static void _set_k_EButton_ApplicationMenu(Valve::VR::EVRButtonId value);
    // static field const value: static public Valve.VR.EVRButtonId k_EButton_Grip
    static constexpr const int k_EButton_Grip = 2;
    // Get static field: static public Valve.VR.EVRButtonId k_EButton_Grip
    static Valve::VR::EVRButtonId _get_k_EButton_Grip();
    // Set static field: static public Valve.VR.EVRButtonId k_EButton_Grip
    static void _set_k_EButton_Grip(Valve::VR::EVRButtonId value);
    // static field const value: static public Valve.VR.EVRButtonId k_EButton_DPad_Left
    static constexpr const int k_EButton_DPad_Left = 3;
    // Get static field: static public Valve.VR.EVRButtonId k_EButton_DPad_Left
    static Valve::VR::EVRButtonId _get_k_EButton_DPad_Left();
    // Set static field: static public Valve.VR.EVRButtonId k_EButton_DPad_Left
    static void _set_k_EButton_DPad_Left(Valve::VR::EVRButtonId value);
    // static field const value: static public Valve.VR.EVRButtonId k_EButton_DPad_Up
    static constexpr const int k_EButton_DPad_Up = 4;
    // Get static field: static public Valve.VR.EVRButtonId k_EButton_DPad_Up
    static Valve::VR::EVRButtonId _get_k_EButton_DPad_Up();
    // Set static field: static public Valve.VR.EVRButtonId k_EButton_DPad_Up
    static void _set_k_EButton_DPad_Up(Valve::VR::EVRButtonId value);
    // static field const value: static public Valve.VR.EVRButtonId k_EButton_DPad_Right
    static constexpr const int k_EButton_DPad_Right = 5;
    // Get static field: static public Valve.VR.EVRButtonId k_EButton_DPad_Right
    static Valve::VR::EVRButtonId _get_k_EButton_DPad_Right();
    // Set static field: static public Valve.VR.EVRButtonId k_EButton_DPad_Right
    static void _set_k_EButton_DPad_Right(Valve::VR::EVRButtonId value);
    // static field const value: static public Valve.VR.EVRButtonId k_EButton_DPad_Down
    static constexpr const int k_EButton_DPad_Down = 6;
    // Get static field: static public Valve.VR.EVRButtonId k_EButton_DPad_Down
    static Valve::VR::EVRButtonId _get_k_EButton_DPad_Down();
    // Set static field: static public Valve.VR.EVRButtonId k_EButton_DPad_Down
    static void _set_k_EButton_DPad_Down(Valve::VR::EVRButtonId value);
    // static field const value: static public Valve.VR.EVRButtonId k_EButton_A
    static constexpr const int k_EButton_A = 7;
    // Get static field: static public Valve.VR.EVRButtonId k_EButton_A
    static Valve::VR::EVRButtonId _get_k_EButton_A();
    // Set static field: static public Valve.VR.EVRButtonId k_EButton_A
    static void _set_k_EButton_A(Valve::VR::EVRButtonId value);
    // static field const value: static public Valve.VR.EVRButtonId k_EButton_ProximitySensor
    static constexpr const int k_EButton_ProximitySensor = 31;
    // Get static field: static public Valve.VR.EVRButtonId k_EButton_ProximitySensor
    static Valve::VR::EVRButtonId _get_k_EButton_ProximitySensor();
    // Set static field: static public Valve.VR.EVRButtonId k_EButton_ProximitySensor
    static void _set_k_EButton_ProximitySensor(Valve::VR::EVRButtonId value);
    // static field const value: static public Valve.VR.EVRButtonId k_EButton_Axis0
    static constexpr const int k_EButton_Axis0 = 32;
    // Get static field: static public Valve.VR.EVRButtonId k_EButton_Axis0
    static Valve::VR::EVRButtonId _get_k_EButton_Axis0();
    // Set static field: static public Valve.VR.EVRButtonId k_EButton_Axis0
    static void _set_k_EButton_Axis0(Valve::VR::EVRButtonId value);
    // static field const value: static public Valve.VR.EVRButtonId k_EButton_Axis1
    static constexpr const int k_EButton_Axis1 = 33;
    // Get static field: static public Valve.VR.EVRButtonId k_EButton_Axis1
    static Valve::VR::EVRButtonId _get_k_EButton_Axis1();
    // Set static field: static public Valve.VR.EVRButtonId k_EButton_Axis1
    static void _set_k_EButton_Axis1(Valve::VR::EVRButtonId value);
    // static field const value: static public Valve.VR.EVRButtonId k_EButton_Axis2
    static constexpr const int k_EButton_Axis2 = 34;
    // Get static field: static public Valve.VR.EVRButtonId k_EButton_Axis2
    static Valve::VR::EVRButtonId _get_k_EButton_Axis2();
    // Set static field: static public Valve.VR.EVRButtonId k_EButton_Axis2
    static void _set_k_EButton_Axis2(Valve::VR::EVRButtonId value);
    // static field const value: static public Valve.VR.EVRButtonId k_EButton_Axis3
    static constexpr const int k_EButton_Axis3 = 35;
    // Get static field: static public Valve.VR.EVRButtonId k_EButton_Axis3
    static Valve::VR::EVRButtonId _get_k_EButton_Axis3();
    // Set static field: static public Valve.VR.EVRButtonId k_EButton_Axis3
    static void _set_k_EButton_Axis3(Valve::VR::EVRButtonId value);
    // static field const value: static public Valve.VR.EVRButtonId k_EButton_Axis4
    static constexpr const int k_EButton_Axis4 = 36;
    // Get static field: static public Valve.VR.EVRButtonId k_EButton_Axis4
    static Valve::VR::EVRButtonId _get_k_EButton_Axis4();
    // Set static field: static public Valve.VR.EVRButtonId k_EButton_Axis4
    static void _set_k_EButton_Axis4(Valve::VR::EVRButtonId value);
    // static field const value: static public Valve.VR.EVRButtonId k_EButton_SteamVR_Touchpad
    static constexpr const int k_EButton_SteamVR_Touchpad = 32;
    // Get static field: static public Valve.VR.EVRButtonId k_EButton_SteamVR_Touchpad
    static Valve::VR::EVRButtonId _get_k_EButton_SteamVR_Touchpad();
    // Set static field: static public Valve.VR.EVRButtonId k_EButton_SteamVR_Touchpad
    static void _set_k_EButton_SteamVR_Touchpad(Valve::VR::EVRButtonId value);
    // static field const value: static public Valve.VR.EVRButtonId k_EButton_SteamVR_Trigger
    static constexpr const int k_EButton_SteamVR_Trigger = 33;
    // Get static field: static public Valve.VR.EVRButtonId k_EButton_SteamVR_Trigger
    static Valve::VR::EVRButtonId _get_k_EButton_SteamVR_Trigger();
    // Set static field: static public Valve.VR.EVRButtonId k_EButton_SteamVR_Trigger
    static void _set_k_EButton_SteamVR_Trigger(Valve::VR::EVRButtonId value);
    // static field const value: static public Valve.VR.EVRButtonId k_EButton_Dashboard_Back
    static constexpr const int k_EButton_Dashboard_Back = 2;
    // Get static field: static public Valve.VR.EVRButtonId k_EButton_Dashboard_Back
    static Valve::VR::EVRButtonId _get_k_EButton_Dashboard_Back();
    // Set static field: static public Valve.VR.EVRButtonId k_EButton_Dashboard_Back
    static void _set_k_EButton_Dashboard_Back(Valve::VR::EVRButtonId value);
    // static field const value: static public Valve.VR.EVRButtonId k_EButton_Max
    static constexpr const int k_EButton_Max = 64;
    // Get static field: static public Valve.VR.EVRButtonId k_EButton_Max
    static Valve::VR::EVRButtonId _get_k_EButton_Max();
    // Set static field: static public Valve.VR.EVRButtonId k_EButton_Max
    static void _set_k_EButton_Max(Valve::VR::EVRButtonId value);
  }; // Valve.VR.EVRButtonId
  static check_size<sizeof(EVRButtonId), 0 + sizeof(int)> __Valve_VR_EVRButtonIdSizeCheck;
  static_assert(sizeof(EVRButtonId) == 0x4);
}
#pragma pack(pop)
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::EVRButtonId, "Valve.VR", "EVRButtonId");
