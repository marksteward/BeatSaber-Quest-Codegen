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
  // Autogenerated type: System.Enum/System.ParseFailureKind
  // [TokenAttribute] Offset: FFFFFFFF
  struct Enum::ParseFailureKind/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: ParseFailureKind
    constexpr ParseFailureKind(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.Enum/System.ParseFailureKind None
    static constexpr const int None = 0;
    // Get static field: static public System.Enum/System.ParseFailureKind None
    static System::Enum::ParseFailureKind _get_None();
    // Set static field: static public System.Enum/System.ParseFailureKind None
    static void _set_None(System::Enum::ParseFailureKind value);
    // static field const value: static public System.Enum/System.ParseFailureKind Argument
    static constexpr const int Argument = 1;
    // Get static field: static public System.Enum/System.ParseFailureKind Argument
    static System::Enum::ParseFailureKind _get_Argument();
    // Set static field: static public System.Enum/System.ParseFailureKind Argument
    static void _set_Argument(System::Enum::ParseFailureKind value);
    // static field const value: static public System.Enum/System.ParseFailureKind ArgumentNull
    static constexpr const int ArgumentNull = 2;
    // Get static field: static public System.Enum/System.ParseFailureKind ArgumentNull
    static System::Enum::ParseFailureKind _get_ArgumentNull();
    // Set static field: static public System.Enum/System.ParseFailureKind ArgumentNull
    static void _set_ArgumentNull(System::Enum::ParseFailureKind value);
    // static field const value: static public System.Enum/System.ParseFailureKind ArgumentWithParameter
    static constexpr const int ArgumentWithParameter = 3;
    // Get static field: static public System.Enum/System.ParseFailureKind ArgumentWithParameter
    static System::Enum::ParseFailureKind _get_ArgumentWithParameter();
    // Set static field: static public System.Enum/System.ParseFailureKind ArgumentWithParameter
    static void _set_ArgumentWithParameter(System::Enum::ParseFailureKind value);
    // static field const value: static public System.Enum/System.ParseFailureKind UnhandledException
    static constexpr const int UnhandledException = 4;
    // Get static field: static public System.Enum/System.ParseFailureKind UnhandledException
    static System::Enum::ParseFailureKind _get_UnhandledException();
    // Set static field: static public System.Enum/System.ParseFailureKind UnhandledException
    static void _set_UnhandledException(System::Enum::ParseFailureKind value);
    // Get instance field: public System.Int32 value__
    int _get_value__();
    // Set instance field: public System.Int32 value__
    void _set_value__(int value);
  }; // System.Enum/System.ParseFailureKind
  #pragma pack(pop)
  static check_size<sizeof(Enum::ParseFailureKind), 0 + sizeof(int)> __System_Enum_ParseFailureKindSizeCheck;
  static_assert(sizeof(Enum::ParseFailureKind) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Enum::ParseFailureKind, "System", "Enum/ParseFailureKind");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
