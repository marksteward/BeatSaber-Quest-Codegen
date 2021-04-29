// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Platform.PermissionGrantStatus
  struct PermissionGrantStatus/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: PermissionGrantStatus
    constexpr PermissionGrantStatus(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // [DescriptionAttribute] Offset: 0xD201D4
    // static field const value: static public Oculus.Platform.PermissionGrantStatus Unknown
    static constexpr const int Unknown = 0;
    // Get static field: static public Oculus.Platform.PermissionGrantStatus Unknown
    static Oculus::Platform::PermissionGrantStatus _get_Unknown();
    // Set static field: static public Oculus.Platform.PermissionGrantStatus Unknown
    static void _set_Unknown(Oculus::Platform::PermissionGrantStatus value);
    // [DescriptionAttribute] Offset: 0xD2020C
    // static field const value: static public Oculus.Platform.PermissionGrantStatus Granted
    static constexpr const int Granted = 1;
    // Get static field: static public Oculus.Platform.PermissionGrantStatus Granted
    static Oculus::Platform::PermissionGrantStatus _get_Granted();
    // Set static field: static public Oculus.Platform.PermissionGrantStatus Granted
    static void _set_Granted(Oculus::Platform::PermissionGrantStatus value);
    // [DescriptionAttribute] Offset: 0xD20244
    // static field const value: static public Oculus.Platform.PermissionGrantStatus Denied
    static constexpr const int Denied = 2;
    // Get static field: static public Oculus.Platform.PermissionGrantStatus Denied
    static Oculus::Platform::PermissionGrantStatus _get_Denied();
    // Set static field: static public Oculus.Platform.PermissionGrantStatus Denied
    static void _set_Denied(Oculus::Platform::PermissionGrantStatus value);
    // [DescriptionAttribute] Offset: 0xD2027C
    // static field const value: static public Oculus.Platform.PermissionGrantStatus Blocked
    static constexpr const int Blocked = 3;
    // Get static field: static public Oculus.Platform.PermissionGrantStatus Blocked
    static Oculus::Platform::PermissionGrantStatus _get_Blocked();
    // Set static field: static public Oculus.Platform.PermissionGrantStatus Blocked
    static void _set_Blocked(Oculus::Platform::PermissionGrantStatus value);
  }; // Oculus.Platform.PermissionGrantStatus
  #pragma pack(pop)
  static check_size<sizeof(PermissionGrantStatus), 0 + sizeof(int)> __Oculus_Platform_PermissionGrantStatusSizeCheck;
  static_assert(sizeof(PermissionGrantStatus) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::PermissionGrantStatus, "Oculus.Platform", "PermissionGrantStatus");
