// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: System.Collections.Generic
namespace System::Collections::Generic {
  // Size: 0x1
  #pragma pack(push, 1)
  // Autogenerated type: System.Collections.Generic.InsertionBehavior
  // [TokenAttribute] Offset: FFFFFFFF
  struct InsertionBehavior/*, public System::Enum*/ {
    public:
    // public System.Byte value__
    // Size: 0x1
    // Offset: 0x0
    uint8_t value;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    // Creating value type constructor for type: InsertionBehavior
    constexpr InsertionBehavior(uint8_t value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator uint8_t
    constexpr operator uint8_t() const noexcept {
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
  #pragma pack(pop)
  static check_size<sizeof(InsertionBehavior), 0 + sizeof(uint8_t)> __System_Collections_Generic_InsertionBehaviorSizeCheck;
  static_assert(sizeof(InsertionBehavior) == 0x1);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Collections::Generic::InsertionBehavior, "System.Collections.Generic", "InsertionBehavior");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
