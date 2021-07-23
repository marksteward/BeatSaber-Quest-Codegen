// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: LiteNetLib
namespace LiteNetLib {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: LiteNetLib.DisconnectReason
  // [TokenAttribute] Offset: FFFFFFFF
  struct DisconnectReason/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: DisconnectReason
    constexpr DisconnectReason(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public LiteNetLib.DisconnectReason ConnectionFailed
    static constexpr const int ConnectionFailed = 0;
    // Get static field: static public LiteNetLib.DisconnectReason ConnectionFailed
    static LiteNetLib::DisconnectReason _get_ConnectionFailed();
    // Set static field: static public LiteNetLib.DisconnectReason ConnectionFailed
    static void _set_ConnectionFailed(LiteNetLib::DisconnectReason value);
    // static field const value: static public LiteNetLib.DisconnectReason Timeout
    static constexpr const int Timeout = 1;
    // Get static field: static public LiteNetLib.DisconnectReason Timeout
    static LiteNetLib::DisconnectReason _get_Timeout();
    // Set static field: static public LiteNetLib.DisconnectReason Timeout
    static void _set_Timeout(LiteNetLib::DisconnectReason value);
    // static field const value: static public LiteNetLib.DisconnectReason HostUnreachable
    static constexpr const int HostUnreachable = 2;
    // Get static field: static public LiteNetLib.DisconnectReason HostUnreachable
    static LiteNetLib::DisconnectReason _get_HostUnreachable();
    // Set static field: static public LiteNetLib.DisconnectReason HostUnreachable
    static void _set_HostUnreachable(LiteNetLib::DisconnectReason value);
    // static field const value: static public LiteNetLib.DisconnectReason NetworkUnreachable
    static constexpr const int NetworkUnreachable = 3;
    // Get static field: static public LiteNetLib.DisconnectReason NetworkUnreachable
    static LiteNetLib::DisconnectReason _get_NetworkUnreachable();
    // Set static field: static public LiteNetLib.DisconnectReason NetworkUnreachable
    static void _set_NetworkUnreachable(LiteNetLib::DisconnectReason value);
    // static field const value: static public LiteNetLib.DisconnectReason RemoteConnectionClose
    static constexpr const int RemoteConnectionClose = 4;
    // Get static field: static public LiteNetLib.DisconnectReason RemoteConnectionClose
    static LiteNetLib::DisconnectReason _get_RemoteConnectionClose();
    // Set static field: static public LiteNetLib.DisconnectReason RemoteConnectionClose
    static void _set_RemoteConnectionClose(LiteNetLib::DisconnectReason value);
    // static field const value: static public LiteNetLib.DisconnectReason DisconnectPeerCalled
    static constexpr const int DisconnectPeerCalled = 5;
    // Get static field: static public LiteNetLib.DisconnectReason DisconnectPeerCalled
    static LiteNetLib::DisconnectReason _get_DisconnectPeerCalled();
    // Set static field: static public LiteNetLib.DisconnectReason DisconnectPeerCalled
    static void _set_DisconnectPeerCalled(LiteNetLib::DisconnectReason value);
    // static field const value: static public LiteNetLib.DisconnectReason ConnectionRejected
    static constexpr const int ConnectionRejected = 6;
    // Get static field: static public LiteNetLib.DisconnectReason ConnectionRejected
    static LiteNetLib::DisconnectReason _get_ConnectionRejected();
    // Set static field: static public LiteNetLib.DisconnectReason ConnectionRejected
    static void _set_ConnectionRejected(LiteNetLib::DisconnectReason value);
    // static field const value: static public LiteNetLib.DisconnectReason InvalidProtocol
    static constexpr const int InvalidProtocol = 7;
    // Get static field: static public LiteNetLib.DisconnectReason InvalidProtocol
    static LiteNetLib::DisconnectReason _get_InvalidProtocol();
    // Set static field: static public LiteNetLib.DisconnectReason InvalidProtocol
    static void _set_InvalidProtocol(LiteNetLib::DisconnectReason value);
    // static field const value: static public LiteNetLib.DisconnectReason UnknownHost
    static constexpr const int UnknownHost = 8;
    // Get static field: static public LiteNetLib.DisconnectReason UnknownHost
    static LiteNetLib::DisconnectReason _get_UnknownHost();
    // Set static field: static public LiteNetLib.DisconnectReason UnknownHost
    static void _set_UnknownHost(LiteNetLib::DisconnectReason value);
    // static field const value: static public LiteNetLib.DisconnectReason Reconnect
    static constexpr const int Reconnect = 9;
    // Get static field: static public LiteNetLib.DisconnectReason Reconnect
    static LiteNetLib::DisconnectReason _get_Reconnect();
    // Set static field: static public LiteNetLib.DisconnectReason Reconnect
    static void _set_Reconnect(LiteNetLib::DisconnectReason value);
    // static field const value: static public LiteNetLib.DisconnectReason PeerToPeerConnection
    static constexpr const int PeerToPeerConnection = 10;
    // Get static field: static public LiteNetLib.DisconnectReason PeerToPeerConnection
    static LiteNetLib::DisconnectReason _get_PeerToPeerConnection();
    // Set static field: static public LiteNetLib.DisconnectReason PeerToPeerConnection
    static void _set_PeerToPeerConnection(LiteNetLib::DisconnectReason value);
    // Get instance field: public System.Int32 value__
    int _get_value__();
    // Set instance field: public System.Int32 value__
    void _set_value__(int value);
  }; // LiteNetLib.DisconnectReason
  #pragma pack(pop)
  static check_size<sizeof(DisconnectReason), 0 + sizeof(int)> __LiteNetLib_DisconnectReasonSizeCheck;
  static_assert(sizeof(DisconnectReason) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(LiteNetLib::DisconnectReason, "LiteNetLib", "DisconnectReason");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
