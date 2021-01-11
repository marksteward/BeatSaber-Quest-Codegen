// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: System.Reflection
namespace System::Reflection {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.Reflection.GenericParameterAttributes
  // [] Offset: FFFFFFFF
  // [FlagsAttribute] Offset: FFFFFFFF
  struct GenericParameterAttributes/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: GenericParameterAttributes
    constexpr GenericParameterAttributes(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.Reflection.GenericParameterAttributes None
    static constexpr const int None = 0;
    // Get static field: static public System.Reflection.GenericParameterAttributes None
    static System::Reflection::GenericParameterAttributes _get_None();
    // Set static field: static public System.Reflection.GenericParameterAttributes None
    static void _set_None(System::Reflection::GenericParameterAttributes value);
    // static field const value: static public System.Reflection.GenericParameterAttributes VarianceMask
    static constexpr const int VarianceMask = 3;
    // Get static field: static public System.Reflection.GenericParameterAttributes VarianceMask
    static System::Reflection::GenericParameterAttributes _get_VarianceMask();
    // Set static field: static public System.Reflection.GenericParameterAttributes VarianceMask
    static void _set_VarianceMask(System::Reflection::GenericParameterAttributes value);
    // static field const value: static public System.Reflection.GenericParameterAttributes Covariant
    static constexpr const int Covariant = 1;
    // Get static field: static public System.Reflection.GenericParameterAttributes Covariant
    static System::Reflection::GenericParameterAttributes _get_Covariant();
    // Set static field: static public System.Reflection.GenericParameterAttributes Covariant
    static void _set_Covariant(System::Reflection::GenericParameterAttributes value);
    // static field const value: static public System.Reflection.GenericParameterAttributes Contravariant
    static constexpr const int Contravariant = 2;
    // Get static field: static public System.Reflection.GenericParameterAttributes Contravariant
    static System::Reflection::GenericParameterAttributes _get_Contravariant();
    // Set static field: static public System.Reflection.GenericParameterAttributes Contravariant
    static void _set_Contravariant(System::Reflection::GenericParameterAttributes value);
    // static field const value: static public System.Reflection.GenericParameterAttributes SpecialConstraintMask
    static constexpr const int SpecialConstraintMask = 28;
    // Get static field: static public System.Reflection.GenericParameterAttributes SpecialConstraintMask
    static System::Reflection::GenericParameterAttributes _get_SpecialConstraintMask();
    // Set static field: static public System.Reflection.GenericParameterAttributes SpecialConstraintMask
    static void _set_SpecialConstraintMask(System::Reflection::GenericParameterAttributes value);
    // static field const value: static public System.Reflection.GenericParameterAttributes ReferenceTypeConstraint
    static constexpr const int ReferenceTypeConstraint = 4;
    // Get static field: static public System.Reflection.GenericParameterAttributes ReferenceTypeConstraint
    static System::Reflection::GenericParameterAttributes _get_ReferenceTypeConstraint();
    // Set static field: static public System.Reflection.GenericParameterAttributes ReferenceTypeConstraint
    static void _set_ReferenceTypeConstraint(System::Reflection::GenericParameterAttributes value);
    // static field const value: static public System.Reflection.GenericParameterAttributes NotNullableValueTypeConstraint
    static constexpr const int NotNullableValueTypeConstraint = 8;
    // Get static field: static public System.Reflection.GenericParameterAttributes NotNullableValueTypeConstraint
    static System::Reflection::GenericParameterAttributes _get_NotNullableValueTypeConstraint();
    // Set static field: static public System.Reflection.GenericParameterAttributes NotNullableValueTypeConstraint
    static void _set_NotNullableValueTypeConstraint(System::Reflection::GenericParameterAttributes value);
    // static field const value: static public System.Reflection.GenericParameterAttributes DefaultConstructorConstraint
    static constexpr const int DefaultConstructorConstraint = 16;
    // Get static field: static public System.Reflection.GenericParameterAttributes DefaultConstructorConstraint
    static System::Reflection::GenericParameterAttributes _get_DefaultConstructorConstraint();
    // Set static field: static public System.Reflection.GenericParameterAttributes DefaultConstructorConstraint
    static void _set_DefaultConstructorConstraint(System::Reflection::GenericParameterAttributes value);
  }; // System.Reflection.GenericParameterAttributes
  static check_size<sizeof(GenericParameterAttributes), 0 + sizeof(int)> __System_Reflection_GenericParameterAttributesSizeCheck;
  static_assert(sizeof(GenericParameterAttributes) == 0x4);
}
#pragma pack(pop)
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Reflection::GenericParameterAttributes, "System.Reflection", "GenericParameterAttributes");
