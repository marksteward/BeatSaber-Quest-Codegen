// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: IPAddress
  class IPAddress;
}
// Completed forward declares
// Type namespace: System.Net.NetworkInformation
namespace System::Net::NetworkInformation {
  // Size: 0xC
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.Net.NetworkInformation.Win32_SOCKET_ADDRESS
  struct Win32_SOCKET_ADDRESS/*, public System::ValueType*/ {
    public:
    // public System.IntPtr Sockaddr
    // Size: 0x8
    // Offset: 0x0
    System::IntPtr Sockaddr;
    // Field size check
    static_assert(sizeof(System::IntPtr) == 0x8);
    // public System.Int32 SockaddrLength
    // Size: 0x4
    // Offset: 0x8
    int SockaddrLength;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: Win32_SOCKET_ADDRESS
    constexpr Win32_SOCKET_ADDRESS(System::IntPtr Sockaddr_ = {}, int SockaddrLength_ = {}) noexcept : Sockaddr{Sockaddr_}, SockaddrLength{SockaddrLength_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // public System.Net.IPAddress GetIPAddress()
    // Offset: 0xEEFCF4
    System::Net::IPAddress* GetIPAddress();
  }; // System.Net.NetworkInformation.Win32_SOCKET_ADDRESS
  #pragma pack(pop)
  static check_size<sizeof(Win32_SOCKET_ADDRESS), 8 + sizeof(int)> __System_Net_NetworkInformation_Win32_SOCKET_ADDRESSSizeCheck;
  static_assert(sizeof(Win32_SOCKET_ADDRESS) == 0xC);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Net::NetworkInformation::Win32_SOCKET_ADDRESS, "System.Net.NetworkInformation", "Win32_SOCKET_ADDRESS");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::NetworkInformation::Win32_SOCKET_ADDRESS::GetIPAddress
// Il2CppName: GetIPAddress
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::IPAddress* (System::Net::NetworkInformation::Win32_SOCKET_ADDRESS::*)()>(&System::Net::NetworkInformation::Win32_SOCKET_ADDRESS::GetIPAddress)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::NetworkInformation::Win32_SOCKET_ADDRESS), "GetIPAddress", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
