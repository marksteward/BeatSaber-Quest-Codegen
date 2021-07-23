// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: System.Net.NetworkInformation
namespace System::Net::NetworkInformation {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.NetworkInformation.PrefixOrigin
  // [TokenAttribute] Offset: FFFFFFFF
  struct PrefixOrigin/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: PrefixOrigin
    constexpr PrefixOrigin(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.Net.NetworkInformation.PrefixOrigin Other
    static constexpr const int Other = 0;
    // Get static field: static public System.Net.NetworkInformation.PrefixOrigin Other
    static System::Net::NetworkInformation::PrefixOrigin _get_Other();
    // Set static field: static public System.Net.NetworkInformation.PrefixOrigin Other
    static void _set_Other(System::Net::NetworkInformation::PrefixOrigin value);
    // static field const value: static public System.Net.NetworkInformation.PrefixOrigin Manual
    static constexpr const int Manual = 1;
    // Get static field: static public System.Net.NetworkInformation.PrefixOrigin Manual
    static System::Net::NetworkInformation::PrefixOrigin _get_Manual();
    // Set static field: static public System.Net.NetworkInformation.PrefixOrigin Manual
    static void _set_Manual(System::Net::NetworkInformation::PrefixOrigin value);
    // static field const value: static public System.Net.NetworkInformation.PrefixOrigin WellKnown
    static constexpr const int WellKnown = 2;
    // Get static field: static public System.Net.NetworkInformation.PrefixOrigin WellKnown
    static System::Net::NetworkInformation::PrefixOrigin _get_WellKnown();
    // Set static field: static public System.Net.NetworkInformation.PrefixOrigin WellKnown
    static void _set_WellKnown(System::Net::NetworkInformation::PrefixOrigin value);
    // static field const value: static public System.Net.NetworkInformation.PrefixOrigin Dhcp
    static constexpr const int Dhcp = 3;
    // Get static field: static public System.Net.NetworkInformation.PrefixOrigin Dhcp
    static System::Net::NetworkInformation::PrefixOrigin _get_Dhcp();
    // Set static field: static public System.Net.NetworkInformation.PrefixOrigin Dhcp
    static void _set_Dhcp(System::Net::NetworkInformation::PrefixOrigin value);
    // static field const value: static public System.Net.NetworkInformation.PrefixOrigin RouterAdvertisement
    static constexpr const int RouterAdvertisement = 4;
    // Get static field: static public System.Net.NetworkInformation.PrefixOrigin RouterAdvertisement
    static System::Net::NetworkInformation::PrefixOrigin _get_RouterAdvertisement();
    // Set static field: static public System.Net.NetworkInformation.PrefixOrigin RouterAdvertisement
    static void _set_RouterAdvertisement(System::Net::NetworkInformation::PrefixOrigin value);
    // Get instance field: public System.Int32 value__
    int _get_value__();
    // Set instance field: public System.Int32 value__
    void _set_value__(int value);
  }; // System.Net.NetworkInformation.PrefixOrigin
  #pragma pack(pop)
  static check_size<sizeof(PrefixOrigin), 0 + sizeof(int)> __System_Net_NetworkInformation_PrefixOriginSizeCheck;
  static_assert(sizeof(PrefixOrigin) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Net::NetworkInformation::PrefixOrigin, "System.Net.NetworkInformation", "PrefixOrigin");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
