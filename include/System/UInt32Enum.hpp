// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: System
namespace System {
  // Autogenerated type: System.UInt32Enum
  struct UInt32Enum : public System::Enum {
    public:
    // public System.UInt32 value__
    // Offset: 0x0
    uint value;
    // Creating value type constructor for type: UInt32Enum
    constexpr UInt32Enum(uint value_ = {}) : value{value_} {}
    // Creating conversion operator: operator uint
    constexpr operator uint() const {
      return value;
    }
  }; // System.UInt32Enum
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::UInt32Enum, "System", "UInt32Enum");
#pragma pack(pop)
