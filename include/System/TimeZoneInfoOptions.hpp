// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: System
namespace System {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.TimeZoneInfoOptions
  // [] Offset: FFFFFFFF
  // [FlagsAttribute] Offset: FFFFFFFF
  struct TimeZoneInfoOptions/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: TimeZoneInfoOptions
    constexpr TimeZoneInfoOptions(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.TimeZoneInfoOptions None
    static constexpr const int None = 1;
    // Get static field: static public System.TimeZoneInfoOptions None
    static System::TimeZoneInfoOptions _get_None();
    // Set static field: static public System.TimeZoneInfoOptions None
    static void _set_None(System::TimeZoneInfoOptions value);
    // static field const value: static public System.TimeZoneInfoOptions NoThrowOnInvalidTime
    static constexpr const int NoThrowOnInvalidTime = 2;
    // Get static field: static public System.TimeZoneInfoOptions NoThrowOnInvalidTime
    static System::TimeZoneInfoOptions _get_NoThrowOnInvalidTime();
    // Set static field: static public System.TimeZoneInfoOptions NoThrowOnInvalidTime
    static void _set_NoThrowOnInvalidTime(System::TimeZoneInfoOptions value);
  }; // System.TimeZoneInfoOptions
  static check_size<sizeof(TimeZoneInfoOptions), 0 + sizeof(int)> __System_TimeZoneInfoOptionsSizeCheck;
  static_assert(sizeof(TimeZoneInfoOptions) == 0x4);
}
#pragma pack(pop)
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::TimeZoneInfoOptions, "System", "TimeZoneInfoOptions");
