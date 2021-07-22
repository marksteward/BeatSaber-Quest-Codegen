// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVRInput
#include "GlobalNamespace/OVRInput.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: OVRInput/RawNearTouch
  // [TokenAttribute] Offset: FFFFFFFF
  // [FlagsAttribute] Offset: FFFFFFFF
  struct OVRInput::RawNearTouch/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: RawNearTouch
    constexpr RawNearTouch(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public OVRInput/RawNearTouch None
    static constexpr const int None = 0;
    // Get static field: static public OVRInput/RawNearTouch None
    static GlobalNamespace::OVRInput::RawNearTouch _get_None();
    // Set static field: static public OVRInput/RawNearTouch None
    static void _set_None(GlobalNamespace::OVRInput::RawNearTouch value);
    // static field const value: static public OVRInput/RawNearTouch LIndexTrigger
    static constexpr const int LIndexTrigger = 1;
    // Get static field: static public OVRInput/RawNearTouch LIndexTrigger
    static GlobalNamespace::OVRInput::RawNearTouch _get_LIndexTrigger();
    // Set static field: static public OVRInput/RawNearTouch LIndexTrigger
    static void _set_LIndexTrigger(GlobalNamespace::OVRInput::RawNearTouch value);
    // static field const value: static public OVRInput/RawNearTouch LThumbButtons
    static constexpr const int LThumbButtons = 2;
    // Get static field: static public OVRInput/RawNearTouch LThumbButtons
    static GlobalNamespace::OVRInput::RawNearTouch _get_LThumbButtons();
    // Set static field: static public OVRInput/RawNearTouch LThumbButtons
    static void _set_LThumbButtons(GlobalNamespace::OVRInput::RawNearTouch value);
    // static field const value: static public OVRInput/RawNearTouch RIndexTrigger
    static constexpr const int RIndexTrigger = 4;
    // Get static field: static public OVRInput/RawNearTouch RIndexTrigger
    static GlobalNamespace::OVRInput::RawNearTouch _get_RIndexTrigger();
    // Set static field: static public OVRInput/RawNearTouch RIndexTrigger
    static void _set_RIndexTrigger(GlobalNamespace::OVRInput::RawNearTouch value);
    // static field const value: static public OVRInput/RawNearTouch RThumbButtons
    static constexpr const int RThumbButtons = 8;
    // Get static field: static public OVRInput/RawNearTouch RThumbButtons
    static GlobalNamespace::OVRInput::RawNearTouch _get_RThumbButtons();
    // Set static field: static public OVRInput/RawNearTouch RThumbButtons
    static void _set_RThumbButtons(GlobalNamespace::OVRInput::RawNearTouch value);
    // static field const value: static public OVRInput/RawNearTouch Any
    static constexpr const int Any = -1;
    // Get static field: static public OVRInput/RawNearTouch Any
    static GlobalNamespace::OVRInput::RawNearTouch _get_Any();
    // Set static field: static public OVRInput/RawNearTouch Any
    static void _set_Any(GlobalNamespace::OVRInput::RawNearTouch value);
  }; // OVRInput/RawNearTouch
  #pragma pack(pop)
  static check_size<sizeof(OVRInput::RawNearTouch), 0 + sizeof(int)> __GlobalNamespace_OVRInput_RawNearTouchSizeCheck;
  static_assert(sizeof(OVRInput::RawNearTouch) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRInput::RawNearTouch, "", "OVRInput/RawNearTouch");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
