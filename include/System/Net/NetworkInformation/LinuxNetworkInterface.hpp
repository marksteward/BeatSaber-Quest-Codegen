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
  // Size: 0x50
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.NetworkInformation.LinuxNetworkInterface
  // [TokenAttribute] Offset: FFFFFFFF
  class LinuxNetworkInterface : public System::Net::NetworkInformation::UnixNetworkInterface {
    public:
    // Writing base type padding for base size: 0x34 to desired offset: 0x38
    char ___base_padding[0x4] = {};
    // private System.String iface_path
    // Size: 0x8
    // Offset: 0x38
    ::Il2CppString* iface_path;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String iface_operstate_path
    // Size: 0x8
    // Offset: 0x40
    ::Il2CppString* iface_operstate_path;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String iface_flags_path
    // Size: 0x8
    // Offset: 0x48
    ::Il2CppString* iface_flags_path;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: LinuxNetworkInterface
    LinuxNetworkInterface(::Il2CppString* iface_path_ = {}, ::Il2CppString* iface_operstate_path_ = {}, ::Il2CppString* iface_flags_path_ = {}) noexcept : iface_path{iface_path_}, iface_operstate_path{iface_operstate_path_}, iface_flags_path{iface_flags_path_} {}
    // Get instance field: private System.String iface_path
    ::Il2CppString* _get_iface_path();
    // Set instance field: private System.String iface_path
    void _set_iface_path(::Il2CppString* value);
    // Get instance field: private System.String iface_operstate_path
    ::Il2CppString* _get_iface_operstate_path();
    // Set instance field: private System.String iface_operstate_path
    void _set_iface_operstate_path(::Il2CppString* value);
    // Get instance field: private System.String iface_flags_path
    ::Il2CppString* _get_iface_flags_path();
    // Set instance field: private System.String iface_flags_path
    void _set_iface_flags_path(::Il2CppString* value);
    // System.String get_IfacePath()
    // Offset: 0x1461840
    ::Il2CppString* get_IfacePath();
    // static System.String ReadLine(System.String path)
    // Offset: 0x1461C78
    static ::Il2CppString* ReadLine(::Il2CppString* path);
    // public override System.Net.NetworkInformation.OperationalStatus get_OperationalStatus()
    // Offset: 0x14619FC
    // Implemented from: System.Net.NetworkInformation.NetworkInterface
    // Base method: System.Net.NetworkInformation.OperationalStatus NetworkInterface::get_OperationalStatus()
    System::Net::NetworkInformation::OperationalStatus get_OperationalStatus();
    // System.Void .ctor(System.String name)
    // Offset: 0x1461848
    // Implemented from: System.Net.NetworkInformation.UnixNetworkInterface
    // Base method: System.Void UnixNetworkInterface::.ctor(System.String name)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LinuxNetworkInterface* New_ctor(::Il2CppString* name) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::NetworkInformation::LinuxNetworkInterface::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LinuxNetworkInterface*, creationType>(name)));
    }
    // public override System.Net.NetworkInformation.IPInterfaceProperties GetIPProperties()
    // Offset: 0x1461980
    // Implemented from: System.Net.NetworkInformation.NetworkInterface
    // Base method: System.Net.NetworkInformation.IPInterfaceProperties NetworkInterface::GetIPProperties()
    System::Net::NetworkInformation::IPInterfaceProperties* GetIPProperties();
  }; // System.Net.NetworkInformation.LinuxNetworkInterface
  #pragma pack(pop)
  static check_size<sizeof(LinuxNetworkInterface), 72 + sizeof(::Il2CppString*)> __System_Net_NetworkInformation_LinuxNetworkInterfaceSizeCheck;
  static_assert(sizeof(LinuxNetworkInterface) == 0x50);
}
DEFINE_IL2CPP_ARG_TYPE(System::Net::NetworkInformation::LinuxNetworkInterface*, "System.Net.NetworkInformation", "LinuxNetworkInterface");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::NetworkInformation::LinuxNetworkInterface::get_IfacePath
// Il2CppName: get_IfacePath
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Net::NetworkInformation::LinuxNetworkInterface::*)()>(&System::Net::NetworkInformation::LinuxNetworkInterface::get_IfacePath)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::NetworkInformation::LinuxNetworkInterface*), "get_IfacePath", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::NetworkInformation::LinuxNetworkInterface::ReadLine
// Il2CppName: ReadLine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (*)(::Il2CppString*)>(&System::Net::NetworkInformation::LinuxNetworkInterface::ReadLine)> {
  static const MethodInfo* get() {
    static auto* path = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::NetworkInformation::LinuxNetworkInterface*), "ReadLine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{path});
  }
};
// Writing MetadataGetter for method: System::Net::NetworkInformation::LinuxNetworkInterface::get_OperationalStatus
// Il2CppName: get_OperationalStatus
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::NetworkInformation::OperationalStatus (System::Net::NetworkInformation::LinuxNetworkInterface::*)()>(&System::Net::NetworkInformation::LinuxNetworkInterface::get_OperationalStatus)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::NetworkInformation::LinuxNetworkInterface*), "get_OperationalStatus", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::NetworkInformation::LinuxNetworkInterface::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::NetworkInformation::LinuxNetworkInterface::GetIPProperties
// Il2CppName: GetIPProperties
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::NetworkInformation::IPInterfaceProperties* (System::Net::NetworkInformation::LinuxNetworkInterface::*)()>(&System::Net::NetworkInformation::LinuxNetworkInterface::GetIPProperties)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::NetworkInformation::LinuxNetworkInterface*), "GetIPProperties", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
