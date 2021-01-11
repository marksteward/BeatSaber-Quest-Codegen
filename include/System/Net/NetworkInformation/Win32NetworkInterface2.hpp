// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Net.NetworkInformation.NetworkInterface
#include "System/Net/NetworkInformation/NetworkInterface.hpp"
// Including type: System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES
#include "System/Net/NetworkInformation/Win32_IP_ADAPTER_ADDRESSES.hpp"
// Including type: System.Net.NetworkInformation.Win32_MIB_IFROW
#include "System/Net/NetworkInformation/Win32_MIB_IFROW.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net::NetworkInformation
namespace System::Net::NetworkInformation {
  // Forward declaring type: Win32IPv4InterfaceStatistics
  class Win32IPv4InterfaceStatistics;
  // Forward declaring type: IPInterfaceProperties
  class IPInterfaceProperties;
  // Skipping declaration: NetworkInterfaceType because it is already included!
  // Skipping declaration: OperationalStatus because it is already included!
}
// Completed forward declares
// Type namespace: System.Net.NetworkInformation
namespace System::Net::NetworkInformation {
  // Size: 0x208
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.NetworkInformation.Win32NetworkInterface2
  // [] Offset: FFFFFFFF
  class Win32NetworkInterface2 : public System::Net::NetworkInformation::NetworkInterface {
    public:
    // private System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES addr
    // Size: 0x108
    // Offset: 0x10
    System::Net::NetworkInformation::Win32_IP_ADAPTER_ADDRESSES addr;
    // Field size check
    static_assert(sizeof(System::Net::NetworkInformation::Win32_IP_ADAPTER_ADDRESSES) == 0x108);
    // private System.Net.NetworkInformation.Win32_MIB_IFROW mib4
    // Size: 0x70
    // Offset: 0x118
    System::Net::NetworkInformation::Win32_MIB_IFROW mib4;
    // Field size check
    static_assert(sizeof(System::Net::NetworkInformation::Win32_MIB_IFROW) == 0x70);
    // private System.Net.NetworkInformation.Win32_MIB_IFROW mib6
    // Size: 0x70
    // Offset: 0x188
    System::Net::NetworkInformation::Win32_MIB_IFROW mib6;
    // Field size check
    static_assert(sizeof(System::Net::NetworkInformation::Win32_MIB_IFROW) == 0x70);
    // private System.Net.NetworkInformation.Win32IPv4InterfaceStatistics ip4stats
    // Size: 0x8
    // Offset: 0x1F8
    System::Net::NetworkInformation::Win32IPv4InterfaceStatistics* ip4stats;
    // Field size check
    static_assert(sizeof(System::Net::NetworkInformation::Win32IPv4InterfaceStatistics*) == 0x8);
    // private System.Net.NetworkInformation.IPInterfaceProperties ip_if_props
    // Size: 0x8
    // Offset: 0x200
    System::Net::NetworkInformation::IPInterfaceProperties* ip_if_props;
    // Field size check
    static_assert(sizeof(System::Net::NetworkInformation::IPInterfaceProperties*) == 0x8);
    // Creating value type constructor for type: Win32NetworkInterface2
    Win32NetworkInterface2(System::Net::NetworkInformation::Win32_IP_ADAPTER_ADDRESSES addr_ = {}, System::Net::NetworkInformation::Win32_MIB_IFROW mib4_ = {}, System::Net::NetworkInformation::Win32_MIB_IFROW mib6_ = {}, System::Net::NetworkInformation::Win32IPv4InterfaceStatistics* ip4stats_ = {}, System::Net::NetworkInformation::IPInterfaceProperties* ip_if_props_ = {}) noexcept : addr{addr_}, mib4{mib4_}, mib6{mib6_}, ip4stats{ip4stats_}, ip_if_props{ip_if_props_} {}
    // static private System.Int32 GetIfEntry(ref System.Net.NetworkInformation.Win32_MIB_IFROW row)
    // Offset: 0x119E390
    static int GetIfEntry(System::Net::NetworkInformation::Win32_MIB_IFROW& row);
    // System.Void .ctor(System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES addr)
    // Offset: 0x119D0EC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Win32NetworkInterface2* New_ctor(System::Net::NetworkInformation::Win32_IP_ADAPTER_ADDRESSES addr) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::NetworkInformation::Win32NetworkInterface2::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Win32NetworkInterface2*, creationType>(addr)));
    }
    // public override System.Net.NetworkInformation.IPInterfaceProperties GetIPProperties()
    // Offset: 0x119E478
    // Implemented from: System.Net.NetworkInformation.NetworkInterface
    // Base method: System.Net.NetworkInformation.IPInterfaceProperties NetworkInterface::GetIPProperties()
    System::Net::NetworkInformation::IPInterfaceProperties* GetIPProperties();
    // public override System.String get_Name()
    // Offset: 0x119E480
    // Implemented from: System.Net.NetworkInformation.NetworkInterface
    // Base method: System.String NetworkInterface::get_Name()
    ::Il2CppString* get_Name();
    // public override System.Net.NetworkInformation.NetworkInterfaceType get_NetworkInterfaceType()
    // Offset: 0x119E488
    // Implemented from: System.Net.NetworkInformation.NetworkInterface
    // Base method: System.Net.NetworkInformation.NetworkInterfaceType NetworkInterface::get_NetworkInterfaceType()
    System::Net::NetworkInformation::NetworkInterfaceType get_NetworkInterfaceType();
    // public override System.Net.NetworkInformation.OperationalStatus get_OperationalStatus()
    // Offset: 0x119E490
    // Implemented from: System.Net.NetworkInformation.NetworkInterface
    // Base method: System.Net.NetworkInformation.OperationalStatus NetworkInterface::get_OperationalStatus()
    System::Net::NetworkInformation::OperationalStatus get_OperationalStatus();
  }; // System.Net.NetworkInformation.Win32NetworkInterface2
  static check_size<sizeof(Win32NetworkInterface2), 512 + sizeof(System::Net::NetworkInformation::IPInterfaceProperties*)> __System_Net_NetworkInformation_Win32NetworkInterface2SizeCheck;
  static_assert(sizeof(Win32NetworkInterface2) == 0x208);
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(System::Net::NetworkInformation::Win32NetworkInterface2*, "System.Net.NetworkInformation", "Win32NetworkInterface2");
