// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Net.NetworkInformation.UnicastIPAddressInformation
#include "System/Net/NetworkInformation/UnicastIPAddressInformation.hpp"
// Including type: System.Net.NetworkInformation.Win32_IP_ADAPTER_UNICAST_ADDRESS
#include "System/Net/NetworkInformation/Win32_IP_ADAPTER_UNICAST_ADDRESS.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: IPAddress
  class IPAddress;
}
// Forward declaring namespace: System::Net::Sockets
namespace System::Net::Sockets {
  // Forward declaring type: AddressFamily
  struct AddressFamily;
}
// Completed forward declares
// Type namespace: System.Net.NetworkInformation
namespace System::Net::NetworkInformation {
  // Size: 0x58
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.NetworkInformation.Win32UnicastIPAddressInformation
  // [] Offset: FFFFFFFF
  class Win32UnicastIPAddressInformation : public System::Net::NetworkInformation::UnicastIPAddressInformation {
    public:
    // private System.Net.NetworkInformation.Win32_IP_ADAPTER_UNICAST_ADDRESS info
    // Size: 0x39
    // Offset: 0x10
    System::Net::NetworkInformation::Win32_IP_ADAPTER_UNICAST_ADDRESS info;
    // Field size check
    static_assert(sizeof(System::Net::NetworkInformation::Win32_IP_ADAPTER_UNICAST_ADDRESS) == 0x39);
    // Padding between fields: info and: ipv4Mask
    char __padding0[0x7] = {};
    // private System.Net.IPAddress ipv4Mask
    // Size: 0x8
    // Offset: 0x50
    System::Net::IPAddress* ipv4Mask;
    // Field size check
    static_assert(sizeof(System::Net::IPAddress*) == 0x8);
    // Creating value type constructor for type: Win32UnicastIPAddressInformation
    Win32UnicastIPAddressInformation(System::Net::NetworkInformation::Win32_IP_ADAPTER_UNICAST_ADDRESS info_ = {}, System::Net::IPAddress* ipv4Mask_ = {}) noexcept : info{info_}, ipv4Mask{ipv4Mask_} {}
    // public System.Void .ctor(System.Net.NetworkInformation.Win32_IP_ADAPTER_UNICAST_ADDRESS info)
    // Offset: 0x119E23C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Win32UnicastIPAddressInformation* New_ctor(System::Net::NetworkInformation::Win32_IP_ADAPTER_UNICAST_ADDRESS info) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::NetworkInformation::Win32UnicastIPAddressInformation::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Win32UnicastIPAddressInformation*, creationType>(info)));
    }
    // static private System.Net.IPAddress PrefixLengthToSubnetMask(System.Byte prefixLength, System.Net.Sockets.AddressFamily family)
    // Offset: 0x119E498
    static System::Net::IPAddress* PrefixLengthToSubnetMask(uint8_t prefixLength, System::Net::Sockets::AddressFamily family);
    // public override System.Net.IPAddress get_Address()
    // Offset: 0x119E584
    // Implemented from: System.Net.NetworkInformation.IPAddressInformation
    // Base method: System.Net.IPAddress IPAddressInformation::get_Address()
    System::Net::IPAddress* get_Address();
  }; // System.Net.NetworkInformation.Win32UnicastIPAddressInformation
  static check_size<sizeof(Win32UnicastIPAddressInformation), 80 + sizeof(System::Net::IPAddress*)> __System_Net_NetworkInformation_Win32UnicastIPAddressInformationSizeCheck;
  static_assert(sizeof(Win32UnicastIPAddressInformation) == 0x58);
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(System::Net::NetworkInformation::Win32UnicastIPAddressInformation*, "System.Net.NetworkInformation", "Win32UnicastIPAddressInformation");
