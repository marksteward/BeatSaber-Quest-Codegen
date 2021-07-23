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
  // Autogenerated type: OVR.OpenVR.EVRButtonId
  // [TokenAttribute] Offset: FFFFFFFF
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
    // static field const value: static public OVR.OpenVR.EVRButtonId k_EButton_System
    static constexpr const int k_EButton_System = 0;
    // Get static field: static public OVR.OpenVR.EVRButtonId k_EButton_System
    static OVR::OpenVR::EVRButtonId _get_k_EButton_System();
    // Set static field: static public OVR.OpenVR.EVRButtonId k_EButton_System
    static void _set_k_EButton_System(OVR::OpenVR::EVRButtonId value);
    // static field const value: static public OVR.OpenVR.EVRButtonId k_EButton_ApplicationMenu
    static constexpr const int k_EButton_ApplicationMenu = 1;
    // Get static field: static public OVR.OpenVR.EVRButtonId k_EButton_ApplicationMenu
    static OVR::OpenVR::EVRButtonId _get_k_EButton_ApplicationMenu();
    // Set static field: static public OVR.OpenVR.EVRButtonId k_EButton_ApplicationMenu
    static void _set_k_EButton_ApplicationMenu(OVR::OpenVR::EVRButtonId value);
    // static field const value: static public OVR.OpenVR.EVRButtonId k_EButton_Grip
    static constexpr const int k_EButton_Grip = 2;
    // Get static field: static public OVR.OpenVR.EVRButtonId k_EButton_Grip
    static OVR::OpenVR::EVRButtonId _get_k_EButton_Grip();
    // Set static field: static public OVR.OpenVR.EVRButtonId k_EButton_Grip
    static void _set_k_EButton_Grip(OVR::OpenVR::EVRButtonId value);
    // static field const value: static public OVR.OpenVR.EVRButtonId k_EButton_DPad_Left
    static constexpr const int k_EButton_DPad_Left = 3;
    // Get static field: static public OVR.OpenVR.EVRButtonId k_EButton_DPad_Left
    static OVR::OpenVR::EVRButtonId _get_k_EButton_DPad_Left();
    // Set static field: static public OVR.OpenVR.EVRButtonId k_EButton_DPad_Left
    static void _set_k_EButton_DPad_Left(OVR::OpenVR::EVRButtonId value);
    // static field const value: static public OVR.OpenVR.EVRButtonId k_EButton_DPad_Up
    static constexpr const int k_EButton_DPad_Up = 4;
    // Get static field: static public OVR.OpenVR.EVRButtonId k_EButton_DPad_Up
    static OVR::OpenVR::EVRButtonId _get_k_EButton_DPad_Up();
    // Set static field: static public OVR.OpenVR.EVRButtonId k_EButton_DPad_Up
    static void _set_k_EButton_DPad_Up(OVR::OpenVR::EVRButtonId value);
    // static field const value: static public OVR.OpenVR.EVRButtonId k_EButton_DPad_Right
    static constexpr const int k_EButton_DPad_Right = 5;
    // Get static field: static public OVR.OpenVR.EVRButtonId k_EButton_DPad_Right
    static OVR::OpenVR::EVRButtonId _get_k_EButton_DPad_Right();
    // Set static field: static public OVR.OpenVR.EVRButtonId k_EButton_DPad_Right
    static void _set_k_EButton_DPad_Right(OVR::OpenVR::EVRButtonId value);
    // static field const value: static public OVR.OpenVR.EVRButtonId k_EButton_DPad_Down
    static constexpr const int k_EButton_DPad_Down = 6;
    // Get static field: static public OVR.OpenVR.EVRButtonId k_EButton_DPad_Down
    static OVR::OpenVR::EVRButtonId _get_k_EButton_DPad_Down();
    // Set static field: static public OVR.OpenVR.EVRButtonId k_EButton_DPad_Down
    static void _set_k_EButton_DPad_Down(OVR::OpenVR::EVRButtonId value);
    // static field const value: static public OVR.OpenVR.EVRButtonId k_EButton_A
    static constexpr const int k_EButton_A = 7;
    // Get static field: static public OVR.OpenVR.EVRButtonId k_EButton_A
    static OVR::OpenVR::EVRButtonId _get_k_EButton_A();
    // Set static field: static public OVR.OpenVR.EVRButtonId k_EButton_A
    static void _set_k_EButton_A(OVR::OpenVR::EVRButtonId value);
    // static field const value: static public OVR.OpenVR.EVRButtonId k_EButton_ProximitySensor
    static constexpr const int k_EButton_ProximitySensor = 31;
    // Get static field: static public OVR.OpenVR.EVRButtonId k_EButton_ProximitySensor
    static OVR::OpenVR::EVRButtonId _get_k_EButton_ProximitySensor();
    // Set static field: static public OVR.OpenVR.EVRButtonId k_EButton_ProximitySensor
    static void _set_k_EButton_ProximitySensor(OVR::OpenVR::EVRButtonId value);
    // static field const value: static public OVR.OpenVR.EVRButtonId k_EButton_Axis0
    static constexpr const int k_EButton_Axis0 = 32;
    // Get static field: static public OVR.OpenVR.EVRButtonId k_EButton_Axis0
    static OVR::OpenVR::EVRButtonId _get_k_EButton_Axis0();
    // Set static field: static public OVR.OpenVR.EVRButtonId k_EButton_Axis0
    static void _set_k_EButton_Axis0(OVR::OpenVR::EVRButtonId value);
    // static field const value: static public OVR.OpenVR.EVRButtonId k_EButton_Axis1
    static constexpr const int k_EButton_Axis1 = 33;
    // Get static field: static public OVR.OpenVR.EVRButtonId k_EButton_Axis1
    static OVR::OpenVR::EVRButtonId _get_k_EButton_Axis1();
    // Set static field: static public OVR.OpenVR.EVRButtonId k_EButton_Axis1
    static void _set_k_EButton_Axis1(OVR::OpenVR::EVRButtonId value);
    // static field const value: static public OVR.OpenVR.EVRButtonId k_EButton_Axis2
    static constexpr const int k_EButton_Axis2 = 34;
    // Get static field: static public OVR.OpenVR.EVRButtonId k_EButton_Axis2
    static OVR::OpenVR::EVRButtonId _get_k_EButton_Axis2();
    // Set static field: static public OVR.OpenVR.EVRButtonId k_EButton_Axis2
    static void _set_k_EButton_Axis2(OVR::OpenVR::EVRButtonId value);
    // static field const value: static public OVR.OpenVR.EVRButtonId k_EButton_Axis3
    static constexpr const int k_EButton_Axis3 = 35;
    // Get static field: static public OVR.OpenVR.EVRButtonId k_EButton_Axis3
    static OVR::OpenVR::EVRButtonId _get_k_EButton_Axis3();
    // Set static field: static public OVR.OpenVR.EVRButtonId k_EButton_Axis3
    static void _set_k_EButton_Axis3(OVR::OpenVR::EVRButtonId value);
    // static field const value: static public OVR.OpenVR.EVRButtonId k_EButton_Axis4
    static constexpr const int k_EButton_Axis4 = 36;
    // Get static field: static public OVR.OpenVR.EVRButtonId k_EButton_Axis4
    static OVR::OpenVR::EVRButtonId _get_k_EButton_Axis4();
    // Set static field: static public OVR.OpenVR.EVRButtonId k_EButton_Axis4
    static void _set_k_EButton_Axis4(OVR::OpenVR::EVRButtonId value);
    // static field const value: static public OVR.OpenVR.EVRButtonId k_EButton_SteamVR_Touchpad
    static constexpr const int k_EButton_SteamVR_Touchpad = 32;
    // Get static field: static public OVR.OpenVR.EVRButtonId k_EButton_SteamVR_Touchpad
    static OVR::OpenVR::EVRButtonId _get_k_EButton_SteamVR_Touchpad();
    // Set static field: static public OVR.OpenVR.EVRButtonId k_EButton_SteamVR_Touchpad
    static void _set_k_EButton_SteamVR_Touchpad(OVR::OpenVR::EVRButtonId value);
    // static field const value: static public OVR.OpenVR.EVRButtonId k_EButton_SteamVR_Trigger
    static constexpr const int k_EButton_SteamVR_Trigger = 33;
    // Get static field: static public OVR.OpenVR.EVRButtonId k_EButton_SteamVR_Trigger
    static OVR::OpenVR::EVRButtonId _get_k_EButton_SteamVR_Trigger();
    // Set static field: static public OVR.OpenVR.EVRButtonId k_EButton_SteamVR_Trigger
    static void _set_k_EButton_SteamVR_Trigger(OVR::OpenVR::EVRButtonId value);
    // static field const value: static public OVR.OpenVR.EVRButtonId k_EButton_Dashboard_Back
    static constexpr const int k_EButton_Dashboard_Back = 2;
    // Get static field: static public OVR.OpenVR.EVRButtonId k_EButton_Dashboard_Back
    static OVR::OpenVR::EVRButtonId _get_k_EButton_Dashboard_Back();
    // Set static field: static public OVR.OpenVR.EVRButtonId k_EButton_Dashboard_Back
    static void _set_k_EButton_Dashboard_Back(OVR::OpenVR::EVRButtonId value);
    // static field const value: static public OVR.OpenVR.EVRButtonId k_EButton_Knuckles_A
    static constexpr const int k_EButton_Knuckles_A = 2;
    // Get static field: static public OVR.OpenVR.EVRButtonId k_EButton_Knuckles_A
    static OVR::OpenVR::EVRButtonId _get_k_EButton_Knuckles_A();
    // Set static field: static public OVR.OpenVR.EVRButtonId k_EButton_Knuckles_A
    static void _set_k_EButton_Knuckles_A(OVR::OpenVR::EVRButtonId value);
    // static field const value: static public OVR.OpenVR.EVRButtonId k_EButton_Knuckles_B
    static constexpr const int k_EButton_Knuckles_B = 1;
    // Get static field: static public OVR.OpenVR.EVRButtonId k_EButton_Knuckles_B
    static OVR::OpenVR::EVRButtonId _get_k_EButton_Knuckles_B();
    // Set static field: static public OVR.OpenVR.EVRButtonId k_EButton_Knuckles_B
    static void _set_k_EButton_Knuckles_B(OVR::OpenVR::EVRButtonId value);
    // static field const value: static public OVR.OpenVR.EVRButtonId k_EButton_Knuckles_JoyStick
    static constexpr const int k_EButton_Knuckles_JoyStick = 35;
    // Get static field: static public OVR.OpenVR.EVRButtonId k_EButton_Knuckles_JoyStick
    static OVR::OpenVR::EVRButtonId _get_k_EButton_Knuckles_JoyStick();
    // Set static field: static public OVR.OpenVR.EVRButtonId k_EButton_Knuckles_JoyStick
    static void _set_k_EButton_Knuckles_JoyStick(OVR::OpenVR::EVRButtonId value);
    // static field const value: static public OVR.OpenVR.EVRButtonId k_EButton_Max
    static constexpr const int k_EButton_Max = 64;
    // Get static field: static public OVR.OpenVR.EVRButtonId k_EButton_Max
    static OVR::OpenVR::EVRButtonId _get_k_EButton_Max();
    // Set static field: static public OVR.OpenVR.EVRButtonId k_EButton_Max
    static void _set_k_EButton_Max(OVR::OpenVR::EVRButtonId value);
    // Get instance field: public System.Int32 value__
    int _get_value__();
    // Set instance field: public System.Int32 value__
    void _set_value__(int value);
  }; // OVR.OpenVR.EVRButtonId
  #pragma pack(pop)
  static check_size<sizeof(EVRButtonId), 0 + sizeof(int)> __OVR_OpenVR_EVRButtonIdSizeCheck;
  static_assert(sizeof(EVRButtonId) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::EVRButtonId, "OVR.OpenVR", "EVRButtonId");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
