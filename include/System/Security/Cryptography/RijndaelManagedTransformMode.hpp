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
  // Autogenerated type: System.Security.Cryptography.RijndaelManagedTransformMode
  // [TokenAttribute] Offset: FFFFFFFF
  struct RijndaelManagedTransformMode/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: RijndaelManagedTransformMode
    constexpr RijndaelManagedTransformMode(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.Security.Cryptography.RijndaelManagedTransformMode Encrypt
    static constexpr const int Encrypt = 0;
    // Get static field: static public System.Security.Cryptography.RijndaelManagedTransformMode Encrypt
    static System::Security::Cryptography::RijndaelManagedTransformMode _get_Encrypt();
    // Set static field: static public System.Security.Cryptography.RijndaelManagedTransformMode Encrypt
    static void _set_Encrypt(System::Security::Cryptography::RijndaelManagedTransformMode value);
    // static field const value: static public System.Security.Cryptography.RijndaelManagedTransformMode Decrypt
    static constexpr const int Decrypt = 1;
    // Get static field: static public System.Security.Cryptography.RijndaelManagedTransformMode Decrypt
    static System::Security::Cryptography::RijndaelManagedTransformMode _get_Decrypt();
    // Set static field: static public System.Security.Cryptography.RijndaelManagedTransformMode Decrypt
    static void _set_Decrypt(System::Security::Cryptography::RijndaelManagedTransformMode value);
    // Get instance field: public System.Int32 value__
    int _get_value__();
    // Set instance field: public System.Int32 value__
    void _set_value__(int value);
  }; // System.Security.Cryptography.RijndaelManagedTransformMode
  #pragma pack(pop)
  static check_size<sizeof(RijndaelManagedTransformMode), 0 + sizeof(int)> __System_Security_Cryptography_RijndaelManagedTransformModeSizeCheck;
  static_assert(sizeof(RijndaelManagedTransformMode) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Security::Cryptography::RijndaelManagedTransformMode, "System.Security.Cryptography", "RijndaelManagedTransformMode");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
