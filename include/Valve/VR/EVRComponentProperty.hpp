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
  // Autogenerated type: Valve.VR.EVRComponentProperty
  // [] Offset: FFFFFFFF
  struct EVRComponentProperty/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: EVRComponentProperty
    constexpr EVRComponentProperty(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public Valve.VR.EVRComponentProperty IsStatic
    static constexpr const int IsStatic = 1;
    // Get static field: static public Valve.VR.EVRComponentProperty IsStatic
    static Valve::VR::EVRComponentProperty _get_IsStatic();
    // Set static field: static public Valve.VR.EVRComponentProperty IsStatic
    static void _set_IsStatic(Valve::VR::EVRComponentProperty value);
    // static field const value: static public Valve.VR.EVRComponentProperty IsVisible
    static constexpr const int IsVisible = 2;
    // Get static field: static public Valve.VR.EVRComponentProperty IsVisible
    static Valve::VR::EVRComponentProperty _get_IsVisible();
    // Set static field: static public Valve.VR.EVRComponentProperty IsVisible
    static void _set_IsVisible(Valve::VR::EVRComponentProperty value);
    // static field const value: static public Valve.VR.EVRComponentProperty IsTouched
    static constexpr const int IsTouched = 4;
    // Get static field: static public Valve.VR.EVRComponentProperty IsTouched
    static Valve::VR::EVRComponentProperty _get_IsTouched();
    // Set static field: static public Valve.VR.EVRComponentProperty IsTouched
    static void _set_IsTouched(Valve::VR::EVRComponentProperty value);
    // static field const value: static public Valve.VR.EVRComponentProperty IsPressed
    static constexpr const int IsPressed = 8;
    // Get static field: static public Valve.VR.EVRComponentProperty IsPressed
    static Valve::VR::EVRComponentProperty _get_IsPressed();
    // Set static field: static public Valve.VR.EVRComponentProperty IsPressed
    static void _set_IsPressed(Valve::VR::EVRComponentProperty value);
    // static field const value: static public Valve.VR.EVRComponentProperty IsScrolled
    static constexpr const int IsScrolled = 16;
    // Get static field: static public Valve.VR.EVRComponentProperty IsScrolled
    static Valve::VR::EVRComponentProperty _get_IsScrolled();
    // Set static field: static public Valve.VR.EVRComponentProperty IsScrolled
    static void _set_IsScrolled(Valve::VR::EVRComponentProperty value);
  }; // Valve.VR.EVRComponentProperty
  static check_size<sizeof(EVRComponentProperty), 0 + sizeof(int)> __Valve_VR_EVRComponentPropertySizeCheck;
  static_assert(sizeof(EVRComponentProperty) == 0x4);
}
#pragma pack(pop)
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::EVRComponentProperty, "Valve.VR", "EVRComponentProperty");
