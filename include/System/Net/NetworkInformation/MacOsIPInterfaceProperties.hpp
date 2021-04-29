// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Net.NetworkInformation.UnixIPInterfaceProperties
#include "System/Net/NetworkInformation/UnixIPInterfaceProperties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net::NetworkInformation
namespace System::Net::NetworkInformation {
  // Forward declaring type: MacOsNetworkInterface
  class MacOsNetworkInterface;
  // Forward declaring type: GatewayIPAddressInformationCollection
  class GatewayIPAddressInformationCollection;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: IPAddress
  class IPAddress;
}
// Completed forward declares
// Type namespace: System.Net.NetworkInformation
namespace System::Net::NetworkInformation {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.NetworkInformation.MacOsIPInterfaceProperties
  class MacOsIPInterfaceProperties : public System::Net::NetworkInformation::UnixIPInterfaceProperties {
    public:
    // Creating value type constructor for type: MacOsIPInterfaceProperties
    MacOsIPInterfaceProperties() noexcept {}
    // public System.Void .ctor(System.Net.NetworkInformation.MacOsNetworkInterface iface, System.Collections.Generic.List`1<System.Net.IPAddress> addresses)
    // Offset: 0x13495E8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MacOsIPInterfaceProperties* New_ctor(System::Net::NetworkInformation::MacOsNetworkInterface* iface, System::Collections::Generic::List_1<System::Net::IPAddress*>* addresses) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::NetworkInformation::MacOsIPInterfaceProperties::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MacOsIPInterfaceProperties*, creationType>(iface, addresses)));
    }
    // static private System.Boolean ParseRouteInfo_internal(System.String iface, out System.String[] gw_addr_list)
    // Offset: 0x1349668
    static bool ParseRouteInfo_internal(::Il2CppString* iface, ::Array<::Il2CppString*>*& gw_addr_list);
    // public override System.Net.NetworkInformation.GatewayIPAddressInformationCollection get_GatewayAddresses()
    // Offset: 0x134966C
    // Implemented from: System.Net.NetworkInformation.IPInterfaceProperties
    // Base method: System.Net.NetworkInformation.GatewayIPAddressInformationCollection IPInterfaceProperties::get_GatewayAddresses()
    System::Net::NetworkInformation::GatewayIPAddressInformationCollection* get_GatewayAddresses();
  }; // System.Net.NetworkInformation.MacOsIPInterfaceProperties
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(System::Net::NetworkInformation::MacOsIPInterfaceProperties*, "System.Net.NetworkInformation", "MacOsIPInterfaceProperties");
