// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Net.NetworkInformation.NetworkInterfaceFactory
#include "System/Net/NetworkInformation/NetworkInterfaceFactory.hpp"
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
// Completed forward declares
// Type namespace: System.Net.NetworkInformation
namespace System::Net::NetworkInformation {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.NetworkInformation.NetworkInterfaceFactory/System.Net.NetworkInformation.UnixNetworkInterfaceAPI
  // [TokenAttribute] Offset: FFFFFFFF
  class NetworkInterfaceFactory::UnixNetworkInterfaceAPI : public System::Net::NetworkInformation::NetworkInterfaceFactory {
    public:
    // Creating value type constructor for type: UnixNetworkInterfaceAPI
    UnixNetworkInterfaceAPI() noexcept {}
    // static protected System.Int32 getifaddrs(out System.IntPtr ifap)
    // Offset: 0x1462A88
    static int getifaddrs(System::IntPtr& ifap);
    // static protected System.Void freeifaddrs(System.IntPtr ifap)
    // Offset: 0x1462A04
    static void freeifaddrs(System::IntPtr ifap);
    // protected System.Void .ctor()
    // Offset: 0x14634B4
    // Implemented from: System.Net.NetworkInformation.NetworkInterfaceFactory
    // Base method: System.Void NetworkInterfaceFactory::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NetworkInterfaceFactory::UnixNetworkInterfaceAPI* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::NetworkInformation::NetworkInterfaceFactory::UnixNetworkInterfaceAPI::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NetworkInterfaceFactory::UnixNetworkInterfaceAPI*, creationType>()));
    }
  }; // System.Net.NetworkInformation.NetworkInterfaceFactory/System.Net.NetworkInformation.UnixNetworkInterfaceAPI
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(System::Net::NetworkInformation::NetworkInterfaceFactory::UnixNetworkInterfaceAPI*, "System.Net.NetworkInformation", "NetworkInterfaceFactory/UnixNetworkInterfaceAPI");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::NetworkInformation::NetworkInterfaceFactory::UnixNetworkInterfaceAPI::getifaddrs
// Il2CppName: getifaddrs
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(System::IntPtr&)>(&System::Net::NetworkInformation::NetworkInterfaceFactory::UnixNetworkInterfaceAPI::getifaddrs)> {
  static const MethodInfo* get() {
    static auto* ifap = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::NetworkInformation::NetworkInterfaceFactory::UnixNetworkInterfaceAPI*), "getifaddrs", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ifap});
  }
};
// Writing MetadataGetter for method: System::Net::NetworkInformation::NetworkInterfaceFactory::UnixNetworkInterfaceAPI::freeifaddrs
// Il2CppName: freeifaddrs
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::IntPtr)>(&System::Net::NetworkInformation::NetworkInterfaceFactory::UnixNetworkInterfaceAPI::freeifaddrs)> {
  static const MethodInfo* get() {
    static auto* ifap = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::NetworkInformation::NetworkInterfaceFactory::UnixNetworkInterfaceAPI*), "freeifaddrs", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ifap});
  }
};
// Writing MetadataGetter for method: System::Net::NetworkInformation::NetworkInterfaceFactory::UnixNetworkInterfaceAPI::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
