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
  // Autogenerated type: System.Int64Enum
  struct Int64Enum : public System::Enum {
    public:
    // public System.Int64 value__
    // Offset: 0x0
    int64_t value;
    // Creating value type constructor for type: Int64Enum
    constexpr Int64Enum(int64_t value_ = {}) : value{value_} {}
    // Creating conversion operator: operator int64_t
    constexpr operator int64_t() const {
      return value;
    }
  }; // System.Int64Enum
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Int64Enum, "System", "Int64Enum");
#pragma pack(pop)
