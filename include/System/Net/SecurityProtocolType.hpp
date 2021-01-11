// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.SecurityProtocolType
  // [] Offset: FFFFFFFF
  // [FlagsAttribute] Offset: FFFFFFFF
  struct SecurityProtocolType/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: SecurityProtocolType
    constexpr SecurityProtocolType(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.Net.SecurityProtocolType SystemDefault
    static constexpr const int SystemDefault = 0;
    // Get static field: static public System.Net.SecurityProtocolType SystemDefault
    static System::Net::SecurityProtocolType _get_SystemDefault();
    // Set static field: static public System.Net.SecurityProtocolType SystemDefault
    static void _set_SystemDefault(System::Net::SecurityProtocolType value);
    // static field const value: static public System.Net.SecurityProtocolType Ssl3
    static constexpr const int Ssl3 = 48;
    // Get static field: static public System.Net.SecurityProtocolType Ssl3
    static System::Net::SecurityProtocolType _get_Ssl3();
    // Set static field: static public System.Net.SecurityProtocolType Ssl3
    static void _set_Ssl3(System::Net::SecurityProtocolType value);
    // static field const value: static public System.Net.SecurityProtocolType Tls
    static constexpr const int Tls = 192;
    // Get static field: static public System.Net.SecurityProtocolType Tls
    static System::Net::SecurityProtocolType _get_Tls();
    // Set static field: static public System.Net.SecurityProtocolType Tls
    static void _set_Tls(System::Net::SecurityProtocolType value);
    // static field const value: static public System.Net.SecurityProtocolType Tls11
    static constexpr const int Tls11 = 768;
    // Get static field: static public System.Net.SecurityProtocolType Tls11
    static System::Net::SecurityProtocolType _get_Tls11();
    // Set static field: static public System.Net.SecurityProtocolType Tls11
    static void _set_Tls11(System::Net::SecurityProtocolType value);
    // static field const value: static public System.Net.SecurityProtocolType Tls12
    static constexpr const int Tls12 = 3072;
    // Get static field: static public System.Net.SecurityProtocolType Tls12
    static System::Net::SecurityProtocolType _get_Tls12();
    // Set static field: static public System.Net.SecurityProtocolType Tls12
    static void _set_Tls12(System::Net::SecurityProtocolType value);
  }; // System.Net.SecurityProtocolType
  static check_size<sizeof(SecurityProtocolType), 0 + sizeof(int)> __System_Net_SecurityProtocolTypeSizeCheck;
  static_assert(sizeof(SecurityProtocolType) == 0x4);
}
#pragma pack(pop)
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Net::SecurityProtocolType, "System.Net", "SecurityProtocolType");
