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
  // Autogenerated type: Valve.VR.EVRInputError
  // [TokenAttribute] Offset: FFFFFFFF
  struct EVRInputError/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: EVRInputError
    constexpr EVRInputError(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public Valve.VR.EVRInputError None
    static constexpr const int None = 0;
    // Get static field: static public Valve.VR.EVRInputError None
    static Valve::VR::EVRInputError _get_None();
    // Set static field: static public Valve.VR.EVRInputError None
    static void _set_None(Valve::VR::EVRInputError value);
    // static field const value: static public Valve.VR.EVRInputError NameNotFound
    static constexpr const int NameNotFound = 1;
    // Get static field: static public Valve.VR.EVRInputError NameNotFound
    static Valve::VR::EVRInputError _get_NameNotFound();
    // Set static field: static public Valve.VR.EVRInputError NameNotFound
    static void _set_NameNotFound(Valve::VR::EVRInputError value);
    // static field const value: static public Valve.VR.EVRInputError WrongType
    static constexpr const int WrongType = 2;
    // Get static field: static public Valve.VR.EVRInputError WrongType
    static Valve::VR::EVRInputError _get_WrongType();
    // Set static field: static public Valve.VR.EVRInputError WrongType
    static void _set_WrongType(Valve::VR::EVRInputError value);
    // static field const value: static public Valve.VR.EVRInputError InvalidHandle
    static constexpr const int InvalidHandle = 3;
    // Get static field: static public Valve.VR.EVRInputError InvalidHandle
    static Valve::VR::EVRInputError _get_InvalidHandle();
    // Set static field: static public Valve.VR.EVRInputError InvalidHandle
    static void _set_InvalidHandle(Valve::VR::EVRInputError value);
    // static field const value: static public Valve.VR.EVRInputError InvalidParam
    static constexpr const int InvalidParam = 4;
    // Get static field: static public Valve.VR.EVRInputError InvalidParam
    static Valve::VR::EVRInputError _get_InvalidParam();
    // Set static field: static public Valve.VR.EVRInputError InvalidParam
    static void _set_InvalidParam(Valve::VR::EVRInputError value);
    // static field const value: static public Valve.VR.EVRInputError NoSteam
    static constexpr const int NoSteam = 5;
    // Get static field: static public Valve.VR.EVRInputError NoSteam
    static Valve::VR::EVRInputError _get_NoSteam();
    // Set static field: static public Valve.VR.EVRInputError NoSteam
    static void _set_NoSteam(Valve::VR::EVRInputError value);
    // static field const value: static public Valve.VR.EVRInputError MaxCapacityReached
    static constexpr const int MaxCapacityReached = 6;
    // Get static field: static public Valve.VR.EVRInputError MaxCapacityReached
    static Valve::VR::EVRInputError _get_MaxCapacityReached();
    // Set static field: static public Valve.VR.EVRInputError MaxCapacityReached
    static void _set_MaxCapacityReached(Valve::VR::EVRInputError value);
    // static field const value: static public Valve.VR.EVRInputError IPCError
    static constexpr const int IPCError = 7;
    // Get static field: static public Valve.VR.EVRInputError IPCError
    static Valve::VR::EVRInputError _get_IPCError();
    // Set static field: static public Valve.VR.EVRInputError IPCError
    static void _set_IPCError(Valve::VR::EVRInputError value);
    // static field const value: static public Valve.VR.EVRInputError NoActiveActionSet
    static constexpr const int NoActiveActionSet = 8;
    // Get static field: static public Valve.VR.EVRInputError NoActiveActionSet
    static Valve::VR::EVRInputError _get_NoActiveActionSet();
    // Set static field: static public Valve.VR.EVRInputError NoActiveActionSet
    static void _set_NoActiveActionSet(Valve::VR::EVRInputError value);
    // static field const value: static public Valve.VR.EVRInputError InvalidDevice
    static constexpr const int InvalidDevice = 9;
    // Get static field: static public Valve.VR.EVRInputError InvalidDevice
    static Valve::VR::EVRInputError _get_InvalidDevice();
    // Set static field: static public Valve.VR.EVRInputError InvalidDevice
    static void _set_InvalidDevice(Valve::VR::EVRInputError value);
  }; // Valve.VR.EVRInputError
  #pragma pack(pop)
  static check_size<sizeof(EVRInputError), 0 + sizeof(int)> __Valve_VR_EVRInputErrorSizeCheck;
  static_assert(sizeof(EVRInputError) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::EVRInputError, "Valve.VR", "EVRInputError");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
