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
  // Size: 0x8
  #pragma pack(push, 1)
  // Autogenerated type: System.UInt64Enum
  // [] Offset: FFFFFFFF
  struct UInt64Enum/*, public System::Enum*/ {
    public:
    // public System.UInt64 value__
    // Size: 0x8
    // Offset: 0x0
    uint64_t value;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // Creating value type constructor for type: UInt64Enum
    constexpr UInt64Enum(uint64_t value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator uint64_t
    constexpr operator uint64_t() const noexcept {
      return value;
    }
  }; // System.UInt64Enum
  static check_size<sizeof(UInt64Enum), 0 + sizeof(uint64_t)> __System_UInt64EnumSizeCheck;
  static_assert(sizeof(UInt64Enum) == 0x8);
}
#pragma pack(pop)
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::UInt64Enum, "System", "UInt64Enum");
