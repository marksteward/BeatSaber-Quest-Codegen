// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Net.NetworkInformation.NetworkInterfaceFactory
#include "System/Net/NetworkInformation/NetworkInterfaceFactory.hpp"
// Including type: System.Net.NetworkInformation.NetworkInterfaceFactory/UnixNetworkInterfaceAPI
#include "System/Net/NetworkInformation/NetworkInterfaceFactory_UnixNetworkInterfaceAPI.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IntPtr
  struct IntPtr;
}
// Forward declaring namespace: System::Net::NetworkInformation
namespace System::Net::NetworkInformation {
  // Forward declaring type: NetworkInterface
  class NetworkInterface;
}
// Completed forward declares
// Type namespace: System.Net.NetworkInformation
namespace System::Net::NetworkInformation {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.NetworkInformation.NetworkInterfaceFactory/LinuxNetworkInterfaceAPI
  // [] Offset: FFFFFFFF
  class NetworkInterfaceFactory::LinuxNetworkInterfaceAPI : public System::Net::NetworkInformation::NetworkInterfaceFactory::UnixNetworkInterfaceAPI {
    public:
    // Creating value type constructor for type: LinuxNetworkInterfaceAPI
    LinuxNetworkInterfaceAPI() noexcept {}
    // static private System.Void FreeInterfaceAddresses(System.IntPtr ifap)
    // Offset: 0x119B87C
    static void FreeInterfaceAddresses(System::IntPtr ifap);
    // static private System.Int32 GetInterfaceAddresses(out System.IntPtr ifap)
    // Offset: 0x119B900
    static int GetInterfaceAddresses(System::IntPtr& ifap);
    // public override System.Net.NetworkInformation.NetworkInterface[] GetAllNetworkInterfaces()
    // Offset: 0x119B984
    // Implemented from: System.Net.NetworkInformation.NetworkInterfaceFactory
    // Base method: System.Net.NetworkInformation.NetworkInterface[] NetworkInterfaceFactory::GetAllNetworkInterfaces()
    ::Array<System::Net::NetworkInformation::NetworkInterface*>* GetAllNetworkInterfaces();
    // public System.Void .ctor()
    // Offset: 0x119B864
    // Implemented from: System.Net.NetworkInformation.NetworkInterfaceFactory/UnixNetworkInterfaceAPI
    // Base method: System.Void UnixNetworkInterfaceAPI::.ctor()
    // Base method: System.Void NetworkInterfaceFactory::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NetworkInterfaceFactory::LinuxNetworkInterfaceAPI* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::NetworkInformation::NetworkInterfaceFactory::LinuxNetworkInterfaceAPI::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NetworkInterfaceFactory::LinuxNetworkInterfaceAPI*, creationType>()));
    }
  }; // System.Net.NetworkInformation.NetworkInterfaceFactory/LinuxNetworkInterfaceAPI
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(System::Net::NetworkInformation::NetworkInterfaceFactory::LinuxNetworkInterfaceAPI*, "System.Net.NetworkInformation", "NetworkInterfaceFactory/LinuxNetworkInterfaceAPI");
