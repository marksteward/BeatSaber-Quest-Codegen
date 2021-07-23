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
  // Autogenerated type: Valve.VR.EVRControllerAxisType
  // [TokenAttribute] Offset: FFFFFFFF
  struct EVRControllerAxisType/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: EVRControllerAxisType
    constexpr EVRControllerAxisType(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public Valve.VR.EVRControllerAxisType k_eControllerAxis_None
    static constexpr const int k_eControllerAxis_None = 0;
    // Get static field: static public Valve.VR.EVRControllerAxisType k_eControllerAxis_None
    static Valve::VR::EVRControllerAxisType _get_k_eControllerAxis_None();
    // Set static field: static public Valve.VR.EVRControllerAxisType k_eControllerAxis_None
    static void _set_k_eControllerAxis_None(Valve::VR::EVRControllerAxisType value);
    // static field const value: static public Valve.VR.EVRControllerAxisType k_eControllerAxis_TrackPad
    static constexpr const int k_eControllerAxis_TrackPad = 1;
    // Get static field: static public Valve.VR.EVRControllerAxisType k_eControllerAxis_TrackPad
    static Valve::VR::EVRControllerAxisType _get_k_eControllerAxis_TrackPad();
    // Set static field: static public Valve.VR.EVRControllerAxisType k_eControllerAxis_TrackPad
    static void _set_k_eControllerAxis_TrackPad(Valve::VR::EVRControllerAxisType value);
    // static field const value: static public Valve.VR.EVRControllerAxisType k_eControllerAxis_Joystick
    static constexpr const int k_eControllerAxis_Joystick = 2;
    // Get static field: static public Valve.VR.EVRControllerAxisType k_eControllerAxis_Joystick
    static Valve::VR::EVRControllerAxisType _get_k_eControllerAxis_Joystick();
    // Set static field: static public Valve.VR.EVRControllerAxisType k_eControllerAxis_Joystick
    static void _set_k_eControllerAxis_Joystick(Valve::VR::EVRControllerAxisType value);
    // static field const value: static public Valve.VR.EVRControllerAxisType k_eControllerAxis_Trigger
    static constexpr const int k_eControllerAxis_Trigger = 3;
    // Get static field: static public Valve.VR.EVRControllerAxisType k_eControllerAxis_Trigger
    static Valve::VR::EVRControllerAxisType _get_k_eControllerAxis_Trigger();
    // Set static field: static public Valve.VR.EVRControllerAxisType k_eControllerAxis_Trigger
    static void _set_k_eControllerAxis_Trigger(Valve::VR::EVRControllerAxisType value);
    // Get instance field: public System.Int32 value__
    int _get_value__();
    // Set instance field: public System.Int32 value__
    void _set_value__(int value);
  }; // Valve.VR.EVRControllerAxisType
  #pragma pack(pop)
  static check_size<sizeof(EVRControllerAxisType), 0 + sizeof(int)> __Valve_VR_EVRControllerAxisTypeSizeCheck;
  static_assert(sizeof(EVRControllerAxisType) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::EVRControllerAxisType, "Valve.VR", "EVRControllerAxisType");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
