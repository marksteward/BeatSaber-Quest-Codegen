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
  // Autogenerated type: System.DateTimeKind
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: D67C94
  struct DateTimeKind/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: DateTimeKind
    constexpr DateTimeKind(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.DateTimeKind Unspecified
    static constexpr const int Unspecified = 0;
    // Get static field: static public System.DateTimeKind Unspecified
    static System::DateTimeKind _get_Unspecified();
    // Set static field: static public System.DateTimeKind Unspecified
    static void _set_Unspecified(System::DateTimeKind value);
    // static field const value: static public System.DateTimeKind Utc
    static constexpr const int Utc = 1;
    // Get static field: static public System.DateTimeKind Utc
    static System::DateTimeKind _get_Utc();
    // Set static field: static public System.DateTimeKind Utc
    static void _set_Utc(System::DateTimeKind value);
    // static field const value: static public System.DateTimeKind Local
    static constexpr const int Local = 2;
    // Get static field: static public System.DateTimeKind Local
    static System::DateTimeKind _get_Local();
    // Set static field: static public System.DateTimeKind Local
    static void _set_Local(System::DateTimeKind value);
  }; // System.DateTimeKind
  #pragma pack(pop)
  static check_size<sizeof(DateTimeKind), 0 + sizeof(int)> __System_DateTimeKindSizeCheck;
  static_assert(sizeof(DateTimeKind) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::DateTimeKind, "System", "DateTimeKind");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
