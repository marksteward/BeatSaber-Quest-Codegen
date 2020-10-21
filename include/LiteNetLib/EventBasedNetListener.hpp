// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: LiteNetLib.INetEventListener
#include "LiteNetLib/INetEventListener.hpp"
// Including type: LiteNetLib.IDeliveryEventListener
#include "LiteNetLib/IDeliveryEventListener.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: LiteNetLib
namespace LiteNetLib {
  // Forward declaring type: NetPeer
  class NetPeer;
  // Forward declaring type: DisconnectInfo
  struct DisconnectInfo;
  // Forward declaring type: NetPacketReader
  class NetPacketReader;
  // Forward declaring type: DeliveryMethod
  struct DeliveryMethod;
  // Forward declaring type: UnconnectedMessageType
  struct UnconnectedMessageType;
  // Forward declaring type: ConnectionRequest
  class ConnectionRequest;
}
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: IPEndPoint
  class IPEndPoint;
}
// Forward declaring namespace: System::Net::Sockets
namespace System::Net::Sockets {
  // Forward declaring type: SocketError
  struct SocketError;
}
// Completed forward declares
// Type namespace: LiteNetLib
namespace LiteNetLib {
  // Autogenerated type: LiteNetLib.EventBasedNetListener
  class EventBasedNetListener : public ::Il2CppObject/*, public LiteNetLib::INetEventListener, public LiteNetLib::IDeliveryEventListener*/ {
    public:
    // Nested type: LiteNetLib::EventBasedNetListener::OnPeerConnected
    class OnPeerConnected;
    // Nested type: LiteNetLib::EventBasedNetListener::OnPeerDisconnected
    class OnPeerDisconnected;
    // Nested type: LiteNetLib::EventBasedNetListener::OnNetworkError
    class OnNetworkError;
    // Nested type: LiteNetLib::EventBasedNetListener::OnNetworkReceive
    class OnNetworkReceive;
    // Nested type: LiteNetLib::EventBasedNetListener::OnNetworkReceiveUnconnected
    class OnNetworkReceiveUnconnected;
    // Nested type: LiteNetLib::EventBasedNetListener::OnNetworkLatencyUpdate
    class OnNetworkLatencyUpdate;
    // Nested type: LiteNetLib::EventBasedNetListener::OnConnectionRequest
    class OnConnectionRequest;
    // Nested type: LiteNetLib::EventBasedNetListener::OnDeliveryEvent
    class OnDeliveryEvent;
    // private LiteNetLib.EventBasedNetListener/OnPeerConnected PeerConnectedEvent
    // Offset: 0x10
    LiteNetLib::EventBasedNetListener::OnPeerConnected* PeerConnectedEvent;
    // private LiteNetLib.EventBasedNetListener/OnPeerDisconnected PeerDisconnectedEvent
    // Offset: 0x18
    LiteNetLib::EventBasedNetListener::OnPeerDisconnected* PeerDisconnectedEvent;
    // private LiteNetLib.EventBasedNetListener/OnNetworkError NetworkErrorEvent
    // Offset: 0x20
    LiteNetLib::EventBasedNetListener::OnNetworkError* NetworkErrorEvent;
    // private LiteNetLib.EventBasedNetListener/OnNetworkReceive NetworkReceiveEvent
    // Offset: 0x28
    LiteNetLib::EventBasedNetListener::OnNetworkReceive* NetworkReceiveEvent;
    // private LiteNetLib.EventBasedNetListener/OnNetworkReceiveUnconnected NetworkReceiveUnconnectedEvent
    // Offset: 0x30
    LiteNetLib::EventBasedNetListener::OnNetworkReceiveUnconnected* NetworkReceiveUnconnectedEvent;
    // private LiteNetLib.EventBasedNetListener/OnNetworkLatencyUpdate NetworkLatencyUpdateEvent
    // Offset: 0x38
    LiteNetLib::EventBasedNetListener::OnNetworkLatencyUpdate* NetworkLatencyUpdateEvent;
    // private LiteNetLib.EventBasedNetListener/OnConnectionRequest ConnectionRequestEvent
    // Offset: 0x40
    LiteNetLib::EventBasedNetListener::OnConnectionRequest* ConnectionRequestEvent;
    // private LiteNetLib.EventBasedNetListener/OnDeliveryEvent DeliveryEvent
    // Offset: 0x48
    LiteNetLib::EventBasedNetListener::OnDeliveryEvent* DeliveryEvent;
    // Creating interface conversion operator: operator LiteNetLib::INetEventListener
    operator LiteNetLib::INetEventListener() noexcept {
      return *reinterpret_cast<LiteNetLib::INetEventListener*>(this);
    }
    // Creating interface conversion operator: operator LiteNetLib::IDeliveryEventListener
    operator LiteNetLib::IDeliveryEventListener() noexcept {
      return *reinterpret_cast<LiteNetLib::IDeliveryEventListener*>(this);
    }
    // public System.Void add_PeerConnectedEvent(LiteNetLib.EventBasedNetListener/OnPeerConnected value)
    // Offset: 0x1801C94
    void add_PeerConnectedEvent(LiteNetLib::EventBasedNetListener::OnPeerConnected* value);
    // public System.Void remove_PeerConnectedEvent(LiteNetLib.EventBasedNetListener/OnPeerConnected value)
    // Offset: 0x1801D38
    void remove_PeerConnectedEvent(LiteNetLib::EventBasedNetListener::OnPeerConnected* value);
    // public System.Void add_PeerDisconnectedEvent(LiteNetLib.EventBasedNetListener/OnPeerDisconnected value)
    // Offset: 0x1801DDC
    void add_PeerDisconnectedEvent(LiteNetLib::EventBasedNetListener::OnPeerDisconnected* value);
    // public System.Void remove_PeerDisconnectedEvent(LiteNetLib.EventBasedNetListener/OnPeerDisconnected value)
    // Offset: 0x1801E80
    void remove_PeerDisconnectedEvent(LiteNetLib::EventBasedNetListener::OnPeerDisconnected* value);
    // public System.Void add_NetworkErrorEvent(LiteNetLib.EventBasedNetListener/OnNetworkError value)
    // Offset: 0x1801F24
    void add_NetworkErrorEvent(LiteNetLib::EventBasedNetListener::OnNetworkError* value);
    // public System.Void remove_NetworkErrorEvent(LiteNetLib.EventBasedNetListener/OnNetworkError value)
    // Offset: 0x1801FC8
    void remove_NetworkErrorEvent(LiteNetLib::EventBasedNetListener::OnNetworkError* value);
    // public System.Void add_NetworkReceiveEvent(LiteNetLib.EventBasedNetListener/OnNetworkReceive value)
    // Offset: 0x180206C
    void add_NetworkReceiveEvent(LiteNetLib::EventBasedNetListener::OnNetworkReceive* value);
    // public System.Void remove_NetworkReceiveEvent(LiteNetLib.EventBasedNetListener/OnNetworkReceive value)
    // Offset: 0x1802110
    void remove_NetworkReceiveEvent(LiteNetLib::EventBasedNetListener::OnNetworkReceive* value);
    // public System.Void add_NetworkReceiveUnconnectedEvent(LiteNetLib.EventBasedNetListener/OnNetworkReceiveUnconnected value)
    // Offset: 0x18021B4
    void add_NetworkReceiveUnconnectedEvent(LiteNetLib::EventBasedNetListener::OnNetworkReceiveUnconnected* value);
    // public System.Void remove_NetworkReceiveUnconnectedEvent(LiteNetLib.EventBasedNetListener/OnNetworkReceiveUnconnected value)
    // Offset: 0x1802258
    void remove_NetworkReceiveUnconnectedEvent(LiteNetLib::EventBasedNetListener::OnNetworkReceiveUnconnected* value);
    // public System.Void add_NetworkLatencyUpdateEvent(LiteNetLib.EventBasedNetListener/OnNetworkLatencyUpdate value)
    // Offset: 0x18022FC
    void add_NetworkLatencyUpdateEvent(LiteNetLib::EventBasedNetListener::OnNetworkLatencyUpdate* value);
    // public System.Void remove_NetworkLatencyUpdateEvent(LiteNetLib.EventBasedNetListener/OnNetworkLatencyUpdate value)
    // Offset: 0x18023A0
    void remove_NetworkLatencyUpdateEvent(LiteNetLib::EventBasedNetListener::OnNetworkLatencyUpdate* value);
    // public System.Void add_ConnectionRequestEvent(LiteNetLib.EventBasedNetListener/OnConnectionRequest value)
    // Offset: 0x1802444
    void add_ConnectionRequestEvent(LiteNetLib::EventBasedNetListener::OnConnectionRequest* value);
    // public System.Void remove_ConnectionRequestEvent(LiteNetLib.EventBasedNetListener/OnConnectionRequest value)
    // Offset: 0x18024E8
    void remove_ConnectionRequestEvent(LiteNetLib::EventBasedNetListener::OnConnectionRequest* value);
    // public System.Void add_DeliveryEvent(LiteNetLib.EventBasedNetListener/OnDeliveryEvent value)
    // Offset: 0x180258C
    void add_DeliveryEvent(LiteNetLib::EventBasedNetListener::OnDeliveryEvent* value);
    // public System.Void remove_DeliveryEvent(LiteNetLib.EventBasedNetListener/OnDeliveryEvent value)
    // Offset: 0x1802630
    void remove_DeliveryEvent(LiteNetLib::EventBasedNetListener::OnDeliveryEvent* value);
    // public System.Void ClearPeerConnectedEvent()
    // Offset: 0x18026D4
    void ClearPeerConnectedEvent();
    // public System.Void ClearPeerDisconnectedEvent()
    // Offset: 0x18026E0
    void ClearPeerDisconnectedEvent();
    // public System.Void ClearNetworkErrorEvent()
    // Offset: 0x18026EC
    void ClearNetworkErrorEvent();
    // public System.Void ClearNetworkReceiveEvent()
    // Offset: 0x18026F8
    void ClearNetworkReceiveEvent();
    // public System.Void ClearNetworkReceiveUnconnectedEvent()
    // Offset: 0x1802704
    void ClearNetworkReceiveUnconnectedEvent();
    // public System.Void ClearNetworkLatencyUpdateEvent()
    // Offset: 0x1802710
    void ClearNetworkLatencyUpdateEvent();
    // public System.Void ClearConnectionRequestEvent()
    // Offset: 0x180271C
    void ClearConnectionRequestEvent();
    // public System.Void ClearDeliveryEvent()
    // Offset: 0x1802728
    void ClearDeliveryEvent();
    // private System.Void LiteNetLib.INetEventListener.OnPeerConnected(LiteNetLib.NetPeer peer)
    // Offset: 0x1802734
    // Implemented from: LiteNetLib.INetEventListener
    // Base method: System.Void INetEventListener::OnPeerConnected(LiteNetLib.NetPeer peer)
    void LiteNetLib_INetEventListener_OnPeerConnected(LiteNetLib::NetPeer* peer);
    // private System.Void LiteNetLib.INetEventListener.OnPeerDisconnected(LiteNetLib.NetPeer peer, LiteNetLib.DisconnectInfo disconnectInfo)
    // Offset: 0x1802AFC
    // Implemented from: LiteNetLib.INetEventListener
    // Base method: System.Void INetEventListener::OnPeerDisconnected(LiteNetLib.NetPeer peer, LiteNetLib.DisconnectInfo disconnectInfo)
    void LiteNetLib_INetEventListener_OnPeerDisconnected(LiteNetLib::NetPeer* peer, LiteNetLib::DisconnectInfo disconnectInfo);
    // private System.Void LiteNetLib.INetEventListener.OnNetworkError(System.Net.IPEndPoint endPoint, System.Net.Sockets.SocketError socketErrorCode)
    // Offset: 0x1802F4C
    // Implemented from: LiteNetLib.INetEventListener
    // Base method: System.Void INetEventListener::OnNetworkError(System.Net.IPEndPoint endPoint, System.Net.Sockets.SocketError socketErrorCode)
    void LiteNetLib_INetEventListener_OnNetworkError(System::Net::IPEndPoint* endPoint, System::Net::Sockets::SocketError socketErrorCode);
    // private System.Void LiteNetLib.INetEventListener.OnNetworkReceive(LiteNetLib.NetPeer peer, LiteNetLib.NetPacketReader reader, LiteNetLib.DeliveryMethod deliveryMethod)
    // Offset: 0x1803388
    // Implemented from: LiteNetLib.INetEventListener
    // Base method: System.Void INetEventListener::OnNetworkReceive(LiteNetLib.NetPeer peer, LiteNetLib.NetPacketReader reader, LiteNetLib.DeliveryMethod deliveryMethod)
    void LiteNetLib_INetEventListener_OnNetworkReceive(LiteNetLib::NetPeer* peer, LiteNetLib::NetPacketReader* reader, LiteNetLib::DeliveryMethod deliveryMethod);
    // private System.Void LiteNetLib.INetEventListener.OnNetworkReceiveUnconnected(System.Net.IPEndPoint remoteEndPoint, LiteNetLib.NetPacketReader reader, LiteNetLib.UnconnectedMessageType messageType)
    // Offset: 0x18037C0
    // Implemented from: LiteNetLib.INetEventListener
    // Base method: System.Void INetEventListener::OnNetworkReceiveUnconnected(System.Net.IPEndPoint remoteEndPoint, LiteNetLib.NetPacketReader reader, LiteNetLib.UnconnectedMessageType messageType)
    void LiteNetLib_INetEventListener_OnNetworkReceiveUnconnected(System::Net::IPEndPoint* remoteEndPoint, LiteNetLib::NetPacketReader* reader, LiteNetLib::UnconnectedMessageType messageType);
    // private System.Void LiteNetLib.INetEventListener.OnNetworkLatencyUpdate(LiteNetLib.NetPeer peer, System.Int32 latency)
    // Offset: 0x1803BF8
    // Implemented from: LiteNetLib.INetEventListener
    // Base method: System.Void INetEventListener::OnNetworkLatencyUpdate(LiteNetLib.NetPeer peer, System.Int32 latency)
    void LiteNetLib_INetEventListener_OnNetworkLatencyUpdate(LiteNetLib::NetPeer* peer, int latency);
    // private System.Void LiteNetLib.INetEventListener.OnConnectionRequest(LiteNetLib.ConnectionRequest request)
    // Offset: 0x1804034
    // Implemented from: LiteNetLib.INetEventListener
    // Base method: System.Void INetEventListener::OnConnectionRequest(LiteNetLib.ConnectionRequest request)
    void LiteNetLib_INetEventListener_OnConnectionRequest(LiteNetLib::ConnectionRequest* request);
    // private System.Void LiteNetLib.IDeliveryEventListener.OnMessageDelivered(LiteNetLib.NetPeer peer, System.Object userData)
    // Offset: 0x18043FC
    // Implemented from: LiteNetLib.IDeliveryEventListener
    // Base method: System.Void IDeliveryEventListener::OnMessageDelivered(LiteNetLib.NetPeer peer, System.Object userData)
    void LiteNetLib_IDeliveryEventListener_OnMessageDelivered(LiteNetLib::NetPeer* peer, ::Il2CppObject* userData);
    // public System.Void .ctor()
    // Offset: 0x1804810
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static EventBasedNetListener* New_ctor();
  }; // LiteNetLib.EventBasedNetListener
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(LiteNetLib::EventBasedNetListener*, "LiteNetLib", "EventBasedNetListener");
#pragma pack(pop)