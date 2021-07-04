// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Int32
#include "System/Int32.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net::Sockets
namespace System::Net::Sockets {
  // Forward declaring type: Socket
  class Socket;
  // Forward declaring type: SocketError
  struct SocketError;
}
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: Thread
  class Thread;
  // Forward declaring type: ThreadPriority
  struct ThreadPriority;
}
// Forward declaring namespace: LiteNetLib
namespace LiteNetLib {
  // Forward declaring type: INetSocketListener
  class INetSocketListener;
}
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: IPAddress
  class IPAddress;
  // Forward declaring type: IPEndPoint
  class IPEndPoint;
}
// Completed forward declares
// Type namespace: LiteNetLib
namespace LiteNetLib {
  // Size: 0x3D
  #pragma pack(push, 1)
  // Autogenerated type: LiteNetLib.NetSocket
  class NetSocket : public ::Il2CppObject {
    public:
    // private System.Net.Sockets.Socket _udpSocketv4
    // Size: 0x8
    // Offset: 0x10
    System::Net::Sockets::Socket* udpSocketv4;
    // Field size check
    static_assert(sizeof(System::Net::Sockets::Socket*) == 0x8);
    // private System.Net.Sockets.Socket _udpSocketv6
    // Size: 0x8
    // Offset: 0x18
    System::Net::Sockets::Socket* udpSocketv6;
    // Field size check
    static_assert(sizeof(System::Net::Sockets::Socket*) == 0x8);
    // private System.Threading.Thread _threadv4
    // Size: 0x8
    // Offset: 0x20
    System::Threading::Thread* threadv4;
    // Field size check
    static_assert(sizeof(System::Threading::Thread*) == 0x8);
    // private System.Threading.Thread _threadv6
    // Size: 0x8
    // Offset: 0x28
    System::Threading::Thread* threadv6;
    // Field size check
    static_assert(sizeof(System::Threading::Thread*) == 0x8);
    // private readonly LiteNetLib.INetSocketListener _listener
    // Size: 0x8
    // Offset: 0x30
    LiteNetLib::INetSocketListener* listener;
    // Field size check
    static_assert(sizeof(LiteNetLib::INetSocketListener*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDCC588
    // private System.Int32 <LocalPort>k__BackingField
    // Size: 0x4
    // Offset: 0x38
    int LocalPort;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Boolean IsRunning
    // Size: 0x1
    // Offset: 0x3C
    bool IsRunning;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: NetSocket
    NetSocket(System::Net::Sockets::Socket* udpSocketv4_ = {}, System::Net::Sockets::Socket* udpSocketv6_ = {}, System::Threading::Thread* threadv4_ = {}, System::Threading::Thread* threadv6_ = {}, LiteNetLib::INetSocketListener* listener_ = {}, int LocalPort_ = {}, bool IsRunning_ = {}) noexcept : udpSocketv4{udpSocketv4_}, udpSocketv6{udpSocketv6_}, threadv4{threadv4_}, threadv6{threadv6_}, listener{listener_}, LocalPort{LocalPort_}, IsRunning{IsRunning_} {}
    // static field const value: static public System.Int32 ReceivePollingTime
    static constexpr const int ReceivePollingTime = 500000;
    // Get static field: static public System.Int32 ReceivePollingTime
    static int _get_ReceivePollingTime();
    // Set static field: static public System.Int32 ReceivePollingTime
    static void _set_ReceivePollingTime(int value);
    // static field const value: static private System.Int32 SioUdpConnreset
    static constexpr const int SioUdpConnreset = -1744830452;
    // Get static field: static private System.Int32 SioUdpConnreset
    static int _get_SioUdpConnreset();
    // Set static field: static private System.Int32 SioUdpConnreset
    static void _set_SioUdpConnreset(int value);
    // Get static field: static private readonly System.Net.IPAddress MulticastAddressV6
    static System::Net::IPAddress* _get_MulticastAddressV6();
    // Set static field: static private readonly System.Net.IPAddress MulticastAddressV6
    static void _set_MulticastAddressV6(System::Net::IPAddress* value);
    // Get static field: static readonly System.Boolean IPv6Support
    static bool _get_IPv6Support();
    // Set static field: static readonly System.Boolean IPv6Support
    static void _set_IPv6Support(bool value);
    // public System.Int32 get_LocalPort()
    // Offset: 0x1B481D4
    int get_LocalPort();
    // private System.Void set_LocalPort(System.Int32 value)
    // Offset: 0x1B481DC
    void set_LocalPort(int value);
    // public System.Int16 get_Ttl()
    // Offset: 0x1B481E4
    int16_t get_Ttl();
    // public System.Void set_Ttl(System.Int16 value)
    // Offset: 0x1B3EB64
    void set_Ttl(int16_t value);
    // static private System.Void .cctor()
    // Offset: 0x1B48200
    static void _cctor();
    // public System.Void .ctor(LiteNetLib.INetSocketListener listener)
    // Offset: 0x1B406A0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NetSocket* New_ctor(LiteNetLib::INetSocketListener* listener) {
      static auto ___internal__logger = ::Logger::get().WithContext("LiteNetLib::NetSocket::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NetSocket*, creationType>(listener)));
    }
    // private System.Boolean IsActive()
    // Offset: 0x1B482BC
    bool IsActive();
    // private System.Void ReceiveLogic(System.Object state)
    // Offset: 0x1B482E0
    void ReceiveLogic(::Il2CppObject* state);
    // public System.Boolean Bind(System.Net.IPAddress addressIPv4, System.Net.IPAddress addressIPv6, System.Int32 port, System.Boolean reuseAddress, System.Boolean ipv6, System.Threading.ThreadPriority priority)
    // Offset: 0x1B441E0
    bool Bind(System::Net::IPAddress* addressIPv4, System::Net::IPAddress* addressIPv6, int port, bool reuseAddress, bool ipv6, System::Threading::ThreadPriority priority);
    // private System.Boolean BindSocket(System.Net.Sockets.Socket socket, System.Net.IPEndPoint ep, System.Boolean reuseAddress)
    // Offset: 0x1B48848
    bool BindSocket(System::Net::Sockets::Socket* socket, System::Net::IPEndPoint* ep, bool reuseAddress);
    // public System.Boolean SendBroadcast(System.Byte[] data, System.Int32 offset, System.Int32 size, System.Int32 port)
    // Offset: 0x1B44B98
    bool SendBroadcast(::Array<uint8_t>* data, int offset, int size, int port);
    // public System.Int32 SendTo(System.Byte[] data, System.Int32 offset, System.Int32 size, System.Net.IPEndPoint remoteEndPoint, ref System.Net.Sockets.SocketError errorCode)
    // Offset: 0x1B3EB80
    int SendTo(::Array<uint8_t>* data, int offset, int size, System::Net::IPEndPoint* remoteEndPoint, System::Net::Sockets::SocketError& errorCode);
    // public System.Void Close(System.Boolean suspend)
    // Offset: 0x1B459D8
    void Close(bool suspend);
  }; // LiteNetLib.NetSocket
  #pragma pack(pop)
  static check_size<sizeof(NetSocket), 60 + sizeof(bool)> __LiteNetLib_NetSocketSizeCheck;
  static_assert(sizeof(NetSocket) == 0x3D);
}
DEFINE_IL2CPP_ARG_TYPE(LiteNetLib::NetSocket*, "LiteNetLib", "NetSocket");
// Writing MetadataGetter for method: LiteNetLib::NetSocket::get_LocalPort
// Il2CppName: get_LocalPort
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: LiteNetLib::NetSocket::set_LocalPort
// Il2CppName: set_LocalPort
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: LiteNetLib::NetSocket::get_Ttl
// Il2CppName: get_Ttl
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: LiteNetLib::NetSocket::set_Ttl
// Il2CppName: set_Ttl
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: LiteNetLib::NetSocket::_cctor
// Il2CppName: .cctor
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: LiteNetLib::NetSocket::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: LiteNetLib::NetSocket::IsActive
// Il2CppName: IsActive
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: LiteNetLib::NetSocket::ReceiveLogic
// Il2CppName: ReceiveLogic
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: LiteNetLib::NetSocket::Bind
// Il2CppName: Bind
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: LiteNetLib::NetSocket::BindSocket
// Il2CppName: BindSocket
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: LiteNetLib::NetSocket::SendBroadcast
// Il2CppName: SendBroadcast
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: LiteNetLib::NetSocket::SendTo
// Il2CppName: SendTo
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: LiteNetLib::NetSocket::Close
// Il2CppName: Close
// Cannot perform method pointer template specialization from operators!
