// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Net.NetworkInformation.UnixNetworkInterface
#include "System/Net/NetworkInformation/UnixNetworkInterface.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net::NetworkInformation
namespace System::Net::NetworkInformation {
  // Forward declaring type: OperationalStatus
  struct OperationalStatus;
  // Forward declaring type: IPInterfaceProperties
  class IPInterfaceProperties;
}
// Completed forward declares
// Type namespace: System.Net.NetworkInformation
namespace System::Net::NetworkInformation {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.NetworkInformation.MacOsNetworkInterface
  // [TokenAttribute] Offset: FFFFFFFF
  class MacOsNetworkInterface : public System::Net::NetworkInformation::UnixNetworkInterface {
    public:
    // private System.UInt32 _ifa_flags
    // Size: 0x4
    // Offset: 0x34
    uint ifa_flags;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // Creating value type constructor for type: MacOsNetworkInterface
    MacOsNetworkInterface(uint ifa_flags_ = {}) noexcept : ifa_flags{ifa_flags_} {}
    // Creating conversion operator: operator uint
    constexpr operator uint() const noexcept {
      return ifa_flags;
    }
    // Get instance field: private System.UInt32 _ifa_flags
    uint _get__ifa_flags();
    // Set instance field: private System.UInt32 _ifa_flags
    void _set__ifa_flags(uint value);
    // System.Void .ctor(System.String name, System.UInt32 ifa_flags)
    // Offset: 0x1462158
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MacOsNetworkInterface* New_ctor(::Il2CppString* name, uint ifa_flags) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::NetworkInformation::MacOsNetworkInterface::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MacOsNetworkInterface*, creationType>(name, ifa_flags)));
    }
    // public override System.Net.NetworkInformation.OperationalStatus get_OperationalStatus()
    // Offset: 0x14621FC
    // Implemented from: System.Net.NetworkInformation.NetworkInterface
    // Base method: System.Net.NetworkInformation.OperationalStatus NetworkInterface::get_OperationalStatus()
    System::Net::NetworkInformation::OperationalStatus get_OperationalStatus();
    // public override System.Net.NetworkInformation.IPInterfaceProperties GetIPProperties()
    // Offset: 0x1462180
    // Implemented from: System.Net.NetworkInformation.NetworkInterface
    // Base method: System.Net.NetworkInformation.IPInterfaceProperties NetworkInterface::GetIPProperties()
    System::Net::NetworkInformation::IPInterfaceProperties* GetIPProperties();
  }; // System.Net.NetworkInformation.MacOsNetworkInterface
  #pragma pack(pop)
  static check_size<sizeof(MacOsNetworkInterface), 52 + sizeof(uint)> __System_Net_NetworkInformation_MacOsNetworkInterfaceSizeCheck;
  static_assert(sizeof(MacOsNetworkInterface) == 0x38);
}
DEFINE_IL2CPP_ARG_TYPE(System::Net::NetworkInformation::MacOsNetworkInterface*, "System.Net.NetworkInformation", "MacOsNetworkInterface");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::NetworkInformation::MacOsNetworkInterface::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::NetworkInformation::MacOsNetworkInterface::get_OperationalStatus
// Il2CppName: get_OperationalStatus
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::NetworkInformation::OperationalStatus (System::Net::NetworkInformation::MacOsNetworkInterface::*)()>(&System::Net::NetworkInformation::MacOsNetworkInterface::get_OperationalStatus)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::NetworkInformation::MacOsNetworkInterface*), "get_OperationalStatus", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::NetworkInformation::MacOsNetworkInterface::GetIPProperties
// Il2CppName: GetIPProperties
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::NetworkInformation::IPInterfaceProperties* (System::Net::NetworkInformation::MacOsNetworkInterface::*)()>(&System::Net::NetworkInformation::MacOsNetworkInterface::GetIPProperties)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::NetworkInformation::MacOsNetworkInterface*), "GetIPProperties", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
