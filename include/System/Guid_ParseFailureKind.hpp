// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Guid
#include "System/Guid.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: System
namespace System {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.Guid/ParseFailureKind
  // [] Offset: FFFFFFFF
  struct Guid::ParseFailureKind/*, public System::Enum*/ {
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
    // static field const value: static public System.Guid/ParseFailureKind None
    static constexpr const int None = 0;
    // Get static field: static public System.Guid/ParseFailureKind None
    static System::Guid::ParseFailureKind _get_None();
    // Set static field: static public System.Guid/ParseFailureKind None
    static void _set_None(System::Guid::ParseFailureKind value);
    // static field const value: static public System.Guid/ParseFailureKind ArgumentNull
    static constexpr const int ArgumentNull = 1;
    // Get static field: static public System.Guid/ParseFailureKind ArgumentNull
    static System::Guid::ParseFailureKind _get_ArgumentNull();
    // Set static field: static public System.Guid/ParseFailureKind ArgumentNull
    static void _set_ArgumentNull(System::Guid::ParseFailureKind value);
    // static field const value: static public System.Guid/ParseFailureKind Format
    static constexpr const int Format = 2;
    // Get static field: static public System.Guid/ParseFailureKind Format
    static System::Guid::ParseFailureKind _get_Format();
    // Set static field: static public System.Guid/ParseFailureKind Format
    static void _set_Format(System::Guid::ParseFailureKind value);
    // static field const value: static public System.Guid/ParseFailureKind FormatWithParameter
    static constexpr const int FormatWithParameter = 3;
    // Get static field: static public System.Guid/ParseFailureKind FormatWithParameter
    static System::Guid::ParseFailureKind _get_FormatWithParameter();
    // Set static field: static public System.Guid/ParseFailureKind FormatWithParameter
    static void _set_FormatWithParameter(System::Guid::ParseFailureKind value);
    // static field const value: static public System.Guid/ParseFailureKind NativeException
    static constexpr const int NativeException = 4;
    // Get static field: static public System.Guid/ParseFailureKind NativeException
    static System::Guid::ParseFailureKind _get_NativeException();
    // Set static field: static public System.Guid/ParseFailureKind NativeException
    static void _set_NativeException(System::Guid::ParseFailureKind value);
    // static field const value: static public System.Guid/ParseFailureKind FormatWithInnerException
    static constexpr const int FormatWithInnerException = 5;
    // Get static field: static public System.Guid/ParseFailureKind FormatWithInnerException
    static System::Guid::ParseFailureKind _get_FormatWithInnerException();
    // Set static field: static public System.Guid/ParseFailureKind FormatWithInnerException
    static void _set_FormatWithInnerException(System::Guid::ParseFailureKind value);
  }; // System.Guid/ParseFailureKind
  static check_size<sizeof(Guid::ParseFailureKind), 0 + sizeof(int)> __System_Guid_ParseFailureKindSizeCheck;
  static_assert(sizeof(Guid::ParseFailureKind) == 0x4);
}
#pragma pack(pop)
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Guid::ParseFailureKind, "System", "Guid/ParseFailureKind");
