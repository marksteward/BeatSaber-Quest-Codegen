// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVRNetwork/OVRNetworkTcpClient
#include "GlobalNamespace/OVRNetwork_OVRNetworkTcpClient.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: OVRNetwork/OVRNetworkTcpClient/ConnectionState
  // [TokenAttribute] Offset: FFFFFFFF
  struct OVRNetwork::OVRNetworkTcpClient::ConnectionState/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: ConnectionState
    constexpr ConnectionState(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public OVRNetwork/OVRNetworkTcpClient/ConnectionState Disconnected
    static constexpr const int Disconnected = 0;
    // Get static field: static public OVRNetwork/OVRNetworkTcpClient/ConnectionState Disconnected
    static GlobalNamespace::OVRNetwork::OVRNetworkTcpClient::ConnectionState _get_Disconnected();
    // Set static field: static public OVRNetwork/OVRNetworkTcpClient/ConnectionState Disconnected
    static void _set_Disconnected(GlobalNamespace::OVRNetwork::OVRNetworkTcpClient::ConnectionState value);
    // static field const value: static public OVRNetwork/OVRNetworkTcpClient/ConnectionState Connected
    static constexpr const int Connected = 1;
    // Get static field: static public OVRNetwork/OVRNetworkTcpClient/ConnectionState Connected
    static GlobalNamespace::OVRNetwork::OVRNetworkTcpClient::ConnectionState _get_Connected();
    // Set static field: static public OVRNetwork/OVRNetworkTcpClient/ConnectionState Connected
    static void _set_Connected(GlobalNamespace::OVRNetwork::OVRNetworkTcpClient::ConnectionState value);
    // static field const value: static public OVRNetwork/OVRNetworkTcpClient/ConnectionState Connecting
    static constexpr const int Connecting = 2;
    // Get static field: static public OVRNetwork/OVRNetworkTcpClient/ConnectionState Connecting
    static GlobalNamespace::OVRNetwork::OVRNetworkTcpClient::ConnectionState _get_Connecting();
    // Set static field: static public OVRNetwork/OVRNetworkTcpClient/ConnectionState Connecting
    static void _set_Connecting(GlobalNamespace::OVRNetwork::OVRNetworkTcpClient::ConnectionState value);
  }; // OVRNetwork/OVRNetworkTcpClient/ConnectionState
  #pragma pack(pop)
  static check_size<sizeof(OVRNetwork::OVRNetworkTcpClient::ConnectionState), 0 + sizeof(int)> __GlobalNamespace_OVRNetwork_OVRNetworkTcpClient_ConnectionStateSizeCheck;
  static_assert(sizeof(OVRNetwork::OVRNetworkTcpClient::ConnectionState) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRNetwork::OVRNetworkTcpClient::ConnectionState, "", "OVRNetwork/OVRNetworkTcpClient/ConnectionState");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
