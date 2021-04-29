// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: System.Security.Cryptography
namespace System::Security::Cryptography {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.Security.Cryptography.PaddingMode
  // [ComVisibleAttribute] Offset: CA8550
  struct PaddingMode/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: PaddingMode
    constexpr PaddingMode(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.Security.Cryptography.PaddingMode None
    static constexpr const int None = 1;
    // Get static field: static public System.Security.Cryptography.PaddingMode None
    static System::Security::Cryptography::PaddingMode _get_None();
    // Set static field: static public System.Security.Cryptography.PaddingMode None
    static void _set_None(System::Security::Cryptography::PaddingMode value);
    // static field const value: static public System.Security.Cryptography.PaddingMode PKCS7
    static constexpr const int PKCS7 = 2;
    // Get static field: static public System.Security.Cryptography.PaddingMode PKCS7
    static System::Security::Cryptography::PaddingMode _get_PKCS7();
    // Set static field: static public System.Security.Cryptography.PaddingMode PKCS7
    static void _set_PKCS7(System::Security::Cryptography::PaddingMode value);
    // static field const value: static public System.Security.Cryptography.PaddingMode Zeros
    static constexpr const int Zeros = 3;
    // Get static field: static public System.Security.Cryptography.PaddingMode Zeros
    static System::Security::Cryptography::PaddingMode _get_Zeros();
    // Set static field: static public System.Security.Cryptography.PaddingMode Zeros
    static void _set_Zeros(System::Security::Cryptography::PaddingMode value);
    // static field const value: static public System.Security.Cryptography.PaddingMode ANSIX923
    static constexpr const int ANSIX923 = 4;
    // Get static field: static public System.Security.Cryptography.PaddingMode ANSIX923
    static System::Security::Cryptography::PaddingMode _get_ANSIX923();
    // Set static field: static public System.Security.Cryptography.PaddingMode ANSIX923
    static void _set_ANSIX923(System::Security::Cryptography::PaddingMode value);
    // static field const value: static public System.Security.Cryptography.PaddingMode ISO10126
    static constexpr const int ISO10126 = 5;
    // Get static field: static public System.Security.Cryptography.PaddingMode ISO10126
    static System::Security::Cryptography::PaddingMode _get_ISO10126();
    // Set static field: static public System.Security.Cryptography.PaddingMode ISO10126
    static void _set_ISO10126(System::Security::Cryptography::PaddingMode value);
  }; // System.Security.Cryptography.PaddingMode
  #pragma pack(pop)
  static check_size<sizeof(PaddingMode), 0 + sizeof(int)> __System_Security_Cryptography_PaddingModeSizeCheck;
  static_assert(sizeof(PaddingMode) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Security::Cryptography::PaddingMode, "System.Security.Cryptography", "PaddingMode");
