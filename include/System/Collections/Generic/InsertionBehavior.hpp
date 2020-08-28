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
// Type namespace: System.Collections.Generic
namespace System::Collections::Generic {
  // Autogenerated type: System.Collections.Generic.InsertionBehavior
  struct InsertionBehavior : public System::Enum {
    public:
    // public System.Byte value__
    // Offset: 0x0
    uint8_t value;
    // Creating value type constructor for type: InsertionBehavior
    constexpr InsertionBehavior(uint8_t value_ = {}) : value{value_} {}
    // Creating conversion operator: operator uint8_t
    constexpr operator uint8_t() const {
      return value;
    }
    // static field const value: static public System.Collections.Generic.InsertionBehavior None
    static constexpr const uint8_t None = 0u;
    // Get static field: static public System.Collections.Generic.InsertionBehavior None
    static System::Collections::Generic::InsertionBehavior _get_None();
    // Set static field: static public System.Collections.Generic.InsertionBehavior None
    static void _set_None(System::Collections::Generic::InsertionBehavior value);
    // static field const value: static public System.Collections.Generic.InsertionBehavior OverwriteExisting
    static constexpr const uint8_t OverwriteExisting = 1u;
    // Get static field: static public System.Collections.Generic.InsertionBehavior OverwriteExisting
    static System::Collections::Generic::InsertionBehavior _get_OverwriteExisting();
    // Set static field: static public System.Collections.Generic.InsertionBehavior OverwriteExisting
    static void _set_OverwriteExisting(System::Collections::Generic::InsertionBehavior value);
    // static field const value: static public System.Collections.Generic.InsertionBehavior ThrowOnExisting
    static constexpr const uint8_t ThrowOnExisting = 2u;
    // Get static field: static public System.Collections.Generic.InsertionBehavior ThrowOnExisting
    static System::Collections::Generic::InsertionBehavior _get_ThrowOnExisting();
    // Set static field: static public System.Collections.Generic.InsertionBehavior ThrowOnExisting
    static void _set_ThrowOnExisting(System::Collections::Generic::InsertionBehavior value);
  }; // System.Collections.Generic.InsertionBehavior
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Collections::Generic::InsertionBehavior, "System.Collections.Generic", "InsertionBehavior");
#pragma pack(pop)
