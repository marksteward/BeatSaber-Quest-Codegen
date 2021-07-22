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
  // Autogenerated type: OVRPlugin/Controller
  // [TokenAttribute] Offset: FFFFFFFF
  struct OVRPlugin::Controller/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: Controller
    constexpr Controller(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public OVRPlugin/Controller None
    static constexpr const int None = 0;
    // Get static field: static public OVRPlugin/Controller None
    static GlobalNamespace::OVRPlugin::Controller _get_None();
    // Set static field: static public OVRPlugin/Controller None
    static void _set_None(GlobalNamespace::OVRPlugin::Controller value);
    // static field const value: static public OVRPlugin/Controller LTouch
    static constexpr const int LTouch = 1;
    // Get static field: static public OVRPlugin/Controller LTouch
    static GlobalNamespace::OVRPlugin::Controller _get_LTouch();
    // Set static field: static public OVRPlugin/Controller LTouch
    static void _set_LTouch(GlobalNamespace::OVRPlugin::Controller value);
    // static field const value: static public OVRPlugin/Controller RTouch
    static constexpr const int RTouch = 2;
    // Get static field: static public OVRPlugin/Controller RTouch
    static GlobalNamespace::OVRPlugin::Controller _get_RTouch();
    // Set static field: static public OVRPlugin/Controller RTouch
    static void _set_RTouch(GlobalNamespace::OVRPlugin::Controller value);
    // static field const value: static public OVRPlugin/Controller Touch
    static constexpr const int Touch = 3;
    // Get static field: static public OVRPlugin/Controller Touch
    static GlobalNamespace::OVRPlugin::Controller _get_Touch();
    // Set static field: static public OVRPlugin/Controller Touch
    static void _set_Touch(GlobalNamespace::OVRPlugin::Controller value);
    // static field const value: static public OVRPlugin/Controller Remote
    static constexpr const int Remote = 4;
    // Get static field: static public OVRPlugin/Controller Remote
    static GlobalNamespace::OVRPlugin::Controller _get_Remote();
    // Set static field: static public OVRPlugin/Controller Remote
    static void _set_Remote(GlobalNamespace::OVRPlugin::Controller value);
    // static field const value: static public OVRPlugin/Controller Gamepad
    static constexpr const int Gamepad = 16;
    // Get static field: static public OVRPlugin/Controller Gamepad
    static GlobalNamespace::OVRPlugin::Controller _get_Gamepad();
    // Set static field: static public OVRPlugin/Controller Gamepad
    static void _set_Gamepad(GlobalNamespace::OVRPlugin::Controller value);
    // static field const value: static public OVRPlugin/Controller LHand
    static constexpr const int LHand = 32;
    // Get static field: static public OVRPlugin/Controller LHand
    static GlobalNamespace::OVRPlugin::Controller _get_LHand();
    // Set static field: static public OVRPlugin/Controller LHand
    static void _set_LHand(GlobalNamespace::OVRPlugin::Controller value);
    // static field const value: static public OVRPlugin/Controller RHand
    static constexpr const int RHand = 64;
    // Get static field: static public OVRPlugin/Controller RHand
    static GlobalNamespace::OVRPlugin::Controller _get_RHand();
    // Set static field: static public OVRPlugin/Controller RHand
    static void _set_RHand(GlobalNamespace::OVRPlugin::Controller value);
    // static field const value: static public OVRPlugin/Controller Hands
    static constexpr const int Hands = 96;
    // Get static field: static public OVRPlugin/Controller Hands
    static GlobalNamespace::OVRPlugin::Controller _get_Hands();
    // Set static field: static public OVRPlugin/Controller Hands
    static void _set_Hands(GlobalNamespace::OVRPlugin::Controller value);
    // static field const value: static public OVRPlugin/Controller Active
    static constexpr const int Active = -2147483648;
    // Get static field: static public OVRPlugin/Controller Active
    static GlobalNamespace::OVRPlugin::Controller _get_Active();
    // Set static field: static public OVRPlugin/Controller Active
    static void _set_Active(GlobalNamespace::OVRPlugin::Controller value);
    // static field const value: static public OVRPlugin/Controller All
    static constexpr const int All = -1;
    // Get static field: static public OVRPlugin/Controller All
    static GlobalNamespace::OVRPlugin::Controller _get_All();
    // Set static field: static public OVRPlugin/Controller All
    static void _set_All(GlobalNamespace::OVRPlugin::Controller value);
  }; // OVRPlugin/Controller
  #pragma pack(pop)
  static check_size<sizeof(OVRPlugin::Controller), 0 + sizeof(int)> __GlobalNamespace_OVRPlugin_ControllerSizeCheck;
  static_assert(sizeof(OVRPlugin::Controller) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRPlugin::Controller, "", "OVRPlugin/Controller");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
