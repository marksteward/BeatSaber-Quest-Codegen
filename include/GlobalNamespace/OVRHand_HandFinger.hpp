// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVRHand
#include "GlobalNamespace/OVRHand.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: OVRHand/HandFinger
  // [TokenAttribute] Offset: FFFFFFFF
  struct OVRHand::HandFinger/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: HandFinger
    constexpr HandFinger(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public OVRHand/HandFinger Thumb
    static constexpr const int Thumb = 0;
    // Get static field: static public OVRHand/HandFinger Thumb
    static GlobalNamespace::OVRHand::HandFinger _get_Thumb();
    // Set static field: static public OVRHand/HandFinger Thumb
    static void _set_Thumb(GlobalNamespace::OVRHand::HandFinger value);
    // static field const value: static public OVRHand/HandFinger Index
    static constexpr const int Index = 1;
    // Get static field: static public OVRHand/HandFinger Index
    static GlobalNamespace::OVRHand::HandFinger _get_Index();
    // Set static field: static public OVRHand/HandFinger Index
    static void _set_Index(GlobalNamespace::OVRHand::HandFinger value);
    // static field const value: static public OVRHand/HandFinger Middle
    static constexpr const int Middle = 2;
    // Get static field: static public OVRHand/HandFinger Middle
    static GlobalNamespace::OVRHand::HandFinger _get_Middle();
    // Set static field: static public OVRHand/HandFinger Middle
    static void _set_Middle(GlobalNamespace::OVRHand::HandFinger value);
    // static field const value: static public OVRHand/HandFinger Ring
    static constexpr const int Ring = 3;
    // Get static field: static public OVRHand/HandFinger Ring
    static GlobalNamespace::OVRHand::HandFinger _get_Ring();
    // Set static field: static public OVRHand/HandFinger Ring
    static void _set_Ring(GlobalNamespace::OVRHand::HandFinger value);
    // static field const value: static public OVRHand/HandFinger Pinky
    static constexpr const int Pinky = 4;
    // Get static field: static public OVRHand/HandFinger Pinky
    static GlobalNamespace::OVRHand::HandFinger _get_Pinky();
    // Set static field: static public OVRHand/HandFinger Pinky
    static void _set_Pinky(GlobalNamespace::OVRHand::HandFinger value);
    // static field const value: static public OVRHand/HandFinger Max
    static constexpr const int Max = 5;
    // Get static field: static public OVRHand/HandFinger Max
    static GlobalNamespace::OVRHand::HandFinger _get_Max();
    // Set static field: static public OVRHand/HandFinger Max
    static void _set_Max(GlobalNamespace::OVRHand::HandFinger value);
    // Get instance field: public System.Int32 value__
    int _get_value__();
    // Set instance field: public System.Int32 value__
    void _set_value__(int value);
  }; // OVRHand/HandFinger
  #pragma pack(pop)
  static check_size<sizeof(OVRHand::HandFinger), 0 + sizeof(int)> __GlobalNamespace_OVRHand_HandFingerSizeCheck;
  static_assert(sizeof(OVRHand::HandFinger) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRHand::HandFinger, "", "OVRHand/HandFinger");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
