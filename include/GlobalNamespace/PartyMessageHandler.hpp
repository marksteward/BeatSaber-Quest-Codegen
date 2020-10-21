// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IConnectedPlayer
  class IConnectedPlayer;
  // Forward declaring type: NetworkPacketSerializer`2<TType, TData>
  template<typename TType, typename TData>
  class NetworkPacketSerializer_2;
  // Forward declaring type: ConnectedPlayerManager
  class ConnectedPlayerManager;
  // Forward declaring type: DiscoveryPolicy
  struct DiscoveryPolicy;
  // Forward declaring type: InvitePolicy
  struct InvitePolicy;
  // Forward declaring type: GameplayServerConfiguration
  struct GameplayServerConfiguration;
}
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: IPEndPoint
  class IPEndPoint;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: PartyMessageHandler
  class PartyMessageHandler : public ::Il2CppObject/*, public System::IDisposable*/ {
    public:
    // Nested type: GlobalNamespace::PartyMessageHandler::MessageType
    struct MessageType;
    // Nested type: GlobalNamespace::PartyMessageHandler::ServerStatusUpdatedDelegate
    class ServerStatusUpdatedDelegate;
    // Nested type: GlobalNamespace::PartyMessageHandler::ConnectToMasterServerDelegate
    class ConnectToMasterServerDelegate;
    // Nested type: GlobalNamespace::PartyMessageHandler::ServerStatusUpdateMessage
    class ServerStatusUpdateMessage;
    // Nested type: GlobalNamespace::PartyMessageHandler::ConnectToMasterServerMessage
    class ConnectToMasterServerMessage;
    // Autogenerated type: PartyMessageHandler/MessageType
    struct MessageType : public System::Enum {
      public:
      // public System.Int32 value__
      // Offset: 0x0
      int value;
      // Creating value type constructor for type: MessageType
      constexpr MessageType(int value_ = {}) noexcept : value{value_} {}
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public PartyMessageHandler/MessageType ServerStatusUpdate
      static constexpr const int ServerStatusUpdate = 0;
      // Get static field: static public PartyMessageHandler/MessageType ServerStatusUpdate
      static GlobalNamespace::PartyMessageHandler::MessageType _get_ServerStatusUpdate();
      // Set static field: static public PartyMessageHandler/MessageType ServerStatusUpdate
      static void _set_ServerStatusUpdate(GlobalNamespace::PartyMessageHandler::MessageType value);
      // static field const value: static public PartyMessageHandler/MessageType ConnectToMasterServer
      static constexpr const int ConnectToMasterServer = 1;
      // Get static field: static public PartyMessageHandler/MessageType ConnectToMasterServer
      static GlobalNamespace::PartyMessageHandler::MessageType _get_ConnectToMasterServer();
      // Set static field: static public PartyMessageHandler/MessageType ConnectToMasterServer
      static void _set_ConnectToMasterServer(GlobalNamespace::PartyMessageHandler::MessageType value);
    }; // PartyMessageHandler/MessageType
    // private readonly NetworkPacketSerializer`2<PartyMessageHandler/MessageType,IConnectedPlayer> _serializer
    // Offset: 0x10
    GlobalNamespace::NetworkPacketSerializer_2<GlobalNamespace::PartyMessageHandler::MessageType, GlobalNamespace::IConnectedPlayer*>* serializer;
    // private readonly ConnectedPlayerManager _connectedPlayerManager
    // Offset: 0x18
    GlobalNamespace::ConnectedPlayerManager* connectedPlayerManager;
    // private PartyMessageHandler/ServerStatusUpdatedDelegate serverStatusUpdatedEvent
    // Offset: 0x20
    GlobalNamespace::PartyMessageHandler::ServerStatusUpdatedDelegate* serverStatusUpdatedEvent;
    // private PartyMessageHandler/ConnectToMasterServerDelegate connectToMasterServerEvent
    // Offset: 0x28
    GlobalNamespace::PartyMessageHandler::ConnectToMasterServerDelegate* connectToMasterServerEvent;
    // Creating interface conversion operator: operator System::IDisposable
    operator System::IDisposable() noexcept {
      return *reinterpret_cast<System::IDisposable*>(this);
    }
    // public System.Void .ctor(ConnectedPlayerManager connectedPlayerManager)
    // Offset: 0x21F6D7C
    static PartyMessageHandler* New_ctor(GlobalNamespace::ConnectedPlayerManager* connectedPlayerManager);
    // public System.Void add_serverStatusUpdatedEvent(PartyMessageHandler/ServerStatusUpdatedDelegate value)
    // Offset: 0x21F7038
    void add_serverStatusUpdatedEvent(GlobalNamespace::PartyMessageHandler::ServerStatusUpdatedDelegate* value);
    // public System.Void remove_serverStatusUpdatedEvent(PartyMessageHandler/ServerStatusUpdatedDelegate value)
    // Offset: 0x21F70DC
    void remove_serverStatusUpdatedEvent(GlobalNamespace::PartyMessageHandler::ServerStatusUpdatedDelegate* value);
    // public System.Void SetServerStatus(System.String serverName, System.String password, DiscoveryPolicy discoveryPolicy, InvitePolicy invitePolicy, System.Int32 maxPlayerCount, GameplayServerConfiguration configuration)
    // Offset: 0x21F7180
    void SetServerStatus(::Il2CppString* serverName, ::Il2CppString* password, GlobalNamespace::DiscoveryPolicy discoveryPolicy, GlobalNamespace::InvitePolicy invitePolicy, int maxPlayerCount, GlobalNamespace::GameplayServerConfiguration configuration);
    // private System.Void HandleServerStatusUpdate(PartyMessageHandler/ServerStatusUpdateMessage packet)
    // Offset: 0x21F72F8
    void HandleServerStatusUpdate(GlobalNamespace::PartyMessageHandler::ServerStatusUpdateMessage* packet);
    // public System.Void add_connectToMasterServerEvent(PartyMessageHandler/ConnectToMasterServerDelegate value)
    // Offset: 0x21F79C0
    void add_connectToMasterServerEvent(GlobalNamespace::PartyMessageHandler::ConnectToMasterServerDelegate* value);
    // public System.Void remove_connectToMasterServerEvent(PartyMessageHandler/ConnectToMasterServerDelegate value)
    // Offset: 0x21F7A64
    void remove_connectToMasterServerEvent(GlobalNamespace::PartyMessageHandler::ConnectToMasterServerDelegate* value);
    // public System.Void ConnectToMasterServer(System.Net.IPEndPoint endPoint, System.String serverName, System.String password, System.String secret, System.String userId, System.String userName, DiscoveryPolicy discoveryPolicy, InvitePolicy invitePolicy, System.Int32 maxPlayerCount, GameplayServerConfiguration configuration)
    // Offset: 0x21F7B08
    void ConnectToMasterServer(System::Net::IPEndPoint* endPoint, ::Il2CppString* serverName, ::Il2CppString* password, ::Il2CppString* secret, ::Il2CppString* userId, ::Il2CppString* userName, GlobalNamespace::DiscoveryPolicy discoveryPolicy, GlobalNamespace::InvitePolicy invitePolicy, int maxPlayerCount, GlobalNamespace::GameplayServerConfiguration configuration);
    // private System.Void HandleConnectToMasterServer(PartyMessageHandler/ConnectToMasterServerMessage packet)
    // Offset: 0x21F7D00
    void HandleConnectToMasterServer(GlobalNamespace::PartyMessageHandler::ConnectToMasterServerMessage* packet);
    // public System.Void Dispose()
    // Offset: 0x21F7010
    // Implemented from: System.IDisposable
    // Base method: System.Void IDisposable::Dispose()
    void Dispose();
    // Creating proxy method: System_IDisposable_Dispose
    // Maps to method: Dispose
    void System_IDisposable_Dispose();
  }; // PartyMessageHandler
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PartyMessageHandler*, "", "PartyMessageHandler");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PartyMessageHandler::MessageType, "", "PartyMessageHandler/MessageType");
#pragma pack(pop)