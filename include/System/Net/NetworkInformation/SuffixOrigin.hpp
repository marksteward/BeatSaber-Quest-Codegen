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
  // Autogenerated type: System.Net.NetworkInformation.SuffixOrigin
  // [TokenAttribute] Offset: FFFFFFFF
  struct SuffixOrigin/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: SuffixOrigin
    constexpr SuffixOrigin(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.Net.NetworkInformation.SuffixOrigin Other
    static constexpr const int Other = 0;
    // Get static field: static public System.Net.NetworkInformation.SuffixOrigin Other
    static System::Net::NetworkInformation::SuffixOrigin _get_Other();
    // Set static field: static public System.Net.NetworkInformation.SuffixOrigin Other
    static void _set_Other(System::Net::NetworkInformation::SuffixOrigin value);
    // static field const value: static public System.Net.NetworkInformation.SuffixOrigin Manual
    static constexpr const int Manual = 1;
    // Get static field: static public System.Net.NetworkInformation.SuffixOrigin Manual
    static System::Net::NetworkInformation::SuffixOrigin _get_Manual();
    // Set static field: static public System.Net.NetworkInformation.SuffixOrigin Manual
    static void _set_Manual(System::Net::NetworkInformation::SuffixOrigin value);
    // static field const value: static public System.Net.NetworkInformation.SuffixOrigin WellKnown
    static constexpr const int WellKnown = 2;
    // Get static field: static public System.Net.NetworkInformation.SuffixOrigin WellKnown
    static System::Net::NetworkInformation::SuffixOrigin _get_WellKnown();
    // Set static field: static public System.Net.NetworkInformation.SuffixOrigin WellKnown
    static void _set_WellKnown(System::Net::NetworkInformation::SuffixOrigin value);
    // static field const value: static public System.Net.NetworkInformation.SuffixOrigin OriginDhcp
    static constexpr const int OriginDhcp = 3;
    // Get static field: static public System.Net.NetworkInformation.SuffixOrigin OriginDhcp
    static System::Net::NetworkInformation::SuffixOrigin _get_OriginDhcp();
    // Set static field: static public System.Net.NetworkInformation.SuffixOrigin OriginDhcp
    static void _set_OriginDhcp(System::Net::NetworkInformation::SuffixOrigin value);
    // static field const value: static public System.Net.NetworkInformation.SuffixOrigin LinkLayerAddress
    static constexpr const int LinkLayerAddress = 4;
    // Get static field: static public System.Net.NetworkInformation.SuffixOrigin LinkLayerAddress
    static System::Net::NetworkInformation::SuffixOrigin _get_LinkLayerAddress();
    // Set static field: static public System.Net.NetworkInformation.SuffixOrigin LinkLayerAddress
    static void _set_LinkLayerAddress(System::Net::NetworkInformation::SuffixOrigin value);
    // static field const value: static public System.Net.NetworkInformation.SuffixOrigin Random
    static constexpr const int Random = 5;
    // Get static field: static public System.Net.NetworkInformation.SuffixOrigin Random
    static System::Net::NetworkInformation::SuffixOrigin _get_Random();
    // Set static field: static public System.Net.NetworkInformation.SuffixOrigin Random
    static void _set_Random(System::Net::NetworkInformation::SuffixOrigin value);
  }; // System.Net.NetworkInformation.SuffixOrigin
  #pragma pack(pop)
  static check_size<sizeof(SuffixOrigin), 0 + sizeof(int)> __System_Net_NetworkInformation_SuffixOriginSizeCheck;
  static_assert(sizeof(SuffixOrigin) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Net::NetworkInformation::SuffixOrigin, "System.Net.NetworkInformation", "SuffixOrigin");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
