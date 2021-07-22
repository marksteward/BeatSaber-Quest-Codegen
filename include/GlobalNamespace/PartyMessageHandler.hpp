// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
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
  // Forward declaring type: BeatmapLevelSelectionMask
  struct BeatmapLevelSelectionMask;
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
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: PartyMessageHandler
  // [TokenAttribute] Offset: FFFFFFFF
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
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: PartyMessageHandler/MessageType
    // [TokenAttribute] Offset: FFFFFFFF
    struct MessageType/*, public System::Enum*/ {
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // Creating value type constructor for type: MessageType
      constexpr MessageType(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator System::Enum
      operator System::Enum() noexcept {
        return *reinterpret_cast<System::Enum*>(this);
      }
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
    #pragma pack(pop)
    static check_size<sizeof(PartyMessageHandler::MessageType), 0 + sizeof(int)> __GlobalNamespace_PartyMessageHandler_MessageTypeSizeCheck;
    static_assert(sizeof(PartyMessageHandler::MessageType) == 0x4);
    // private readonly NetworkPacketSerializer`2<PartyMessageHandler/MessageType,IConnectedPlayer> _serializer
    // Size: 0x8
    // Offset: 0x10
    GlobalNamespace::NetworkPacketSerializer_2<GlobalNamespace::PartyMessageHandler::MessageType, GlobalNamespace::IConnectedPlayer*>* serializer;
    // Field size check
    static_assert(sizeof(GlobalNamespace::NetworkPacketSerializer_2<GlobalNamespace::PartyMessageHandler::MessageType, GlobalNamespace::IConnectedPlayer*>*) == 0x8);
    // private readonly ConnectedPlayerManager _connectedPlayerManager
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::ConnectedPlayerManager* connectedPlayerManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ConnectedPlayerManager*) == 0x8);
    // private PartyMessageHandler/ServerStatusUpdatedDelegate serverStatusUpdatedEvent
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::PartyMessageHandler::ServerStatusUpdatedDelegate* serverStatusUpdatedEvent;
    // Field size check
    static_assert(sizeof(GlobalNamespace::PartyMessageHandler::ServerStatusUpdatedDelegate*) == 0x8);
    // private PartyMessageHandler/ConnectToMasterServerDelegate connectToMasterServerEvent
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::PartyMessageHandler::ConnectToMasterServerDelegate* connectToMasterServerEvent;
    // Field size check
    static_assert(sizeof(GlobalNamespace::PartyMessageHandler::ConnectToMasterServerDelegate*) == 0x8);
    // Creating value type constructor for type: PartyMessageHandler
    PartyMessageHandler(GlobalNamespace::NetworkPacketSerializer_2<GlobalNamespace::PartyMessageHandler::MessageType, GlobalNamespace::IConnectedPlayer*>* serializer_ = {}, GlobalNamespace::ConnectedPlayerManager* connectedPlayerManager_ = {}, GlobalNamespace::PartyMessageHandler::ServerStatusUpdatedDelegate* serverStatusUpdatedEvent_ = {}, GlobalNamespace::PartyMessageHandler::ConnectToMasterServerDelegate* connectToMasterServerEvent_ = {}) noexcept : serializer{serializer_}, connectedPlayerManager{connectedPlayerManager_}, serverStatusUpdatedEvent{serverStatusUpdatedEvent_}, connectToMasterServerEvent{connectToMasterServerEvent_} {}
    // Creating interface conversion operator: operator System::IDisposable
    operator System::IDisposable() noexcept {
      return *reinterpret_cast<System::IDisposable*>(this);
    }
    // public System.Void add_serverStatusUpdatedEvent(PartyMessageHandler/ServerStatusUpdatedDelegate value)
    // Offset: 0x153C6C8
    void add_serverStatusUpdatedEvent(GlobalNamespace::PartyMessageHandler::ServerStatusUpdatedDelegate* value);
    // public System.Void remove_serverStatusUpdatedEvent(PartyMessageHandler/ServerStatusUpdatedDelegate value)
    // Offset: 0x153C76C
    void remove_serverStatusUpdatedEvent(GlobalNamespace::PartyMessageHandler::ServerStatusUpdatedDelegate* value);
    // public System.Void add_connectToMasterServerEvent(PartyMessageHandler/ConnectToMasterServerDelegate value)
    // Offset: 0x153C9F8
    void add_connectToMasterServerEvent(GlobalNamespace::PartyMessageHandler::ConnectToMasterServerDelegate* value);
    // public System.Void remove_connectToMasterServerEvent(PartyMessageHandler/ConnectToMasterServerDelegate value)
    // Offset: 0x153CA9C
    void remove_connectToMasterServerEvent(GlobalNamespace::PartyMessageHandler::ConnectToMasterServerDelegate* value);
    // public System.Void .ctor(ConnectedPlayerManager connectedPlayerManager)
    // Offset: 0x153C434
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PartyMessageHandler* New_ctor(GlobalNamespace::ConnectedPlayerManager* connectedPlayerManager) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::PartyMessageHandler::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PartyMessageHandler*, creationType>(connectedPlayerManager)));
    }
    // public System.Void Dispose()
    // Offset: 0x153C6A0
    void Dispose();
    // public System.Void SetServerStatus(System.String serverName, System.String password, BeatmapLevelSelectionMask selectionMask, GameplayServerConfiguration configuration)
    // Offset: 0x153C810
    void SetServerStatus(::Il2CppString* serverName, ::Il2CppString* password, GlobalNamespace::BeatmapLevelSelectionMask selectionMask, GlobalNamespace::GameplayServerConfiguration configuration);
    // private System.Void HandleServerStatusUpdate(PartyMessageHandler/ServerStatusUpdateMessage packet)
    // Offset: 0x153C924
    void HandleServerStatusUpdate(GlobalNamespace::PartyMessageHandler::ServerStatusUpdateMessage* packet);
    // public System.Void ConnectToMasterServer(System.Net.IPEndPoint endPoint, System.String serverName, System.String password, System.String secret, System.String userId, System.String userName, BeatmapLevelSelectionMask selectionMask, GameplayServerConfiguration configuration)
    // Offset: 0x153CB40
    void ConnectToMasterServer(System::Net::IPEndPoint* endPoint, ::Il2CppString* serverName, ::Il2CppString* password, ::Il2CppString* secret, ::Il2CppString* userId, ::Il2CppString* userName, GlobalNamespace::BeatmapLevelSelectionMask selectionMask, GlobalNamespace::GameplayServerConfiguration configuration);
    // private System.Void HandleConnectToMasterServer(PartyMessageHandler/ConnectToMasterServerMessage packet)
    // Offset: 0x153CC88
    void HandleConnectToMasterServer(GlobalNamespace::PartyMessageHandler::ConnectToMasterServerMessage* packet);
  }; // PartyMessageHandler
  #pragma pack(pop)
  static check_size<sizeof(PartyMessageHandler), 40 + sizeof(GlobalNamespace::PartyMessageHandler::ConnectToMasterServerDelegate*)> __GlobalNamespace_PartyMessageHandlerSizeCheck;
  static_assert(sizeof(PartyMessageHandler) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PartyMessageHandler*, "", "PartyMessageHandler");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PartyMessageHandler::MessageType, "", "PartyMessageHandler/MessageType");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::PartyMessageHandler::add_serverStatusUpdatedEvent
// Il2CppName: add_serverStatusUpdatedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PartyMessageHandler::*)(GlobalNamespace::PartyMessageHandler::ServerStatusUpdatedDelegate*)>(&GlobalNamespace::PartyMessageHandler::add_serverStatusUpdatedEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("", "PartyMessageHandler/ServerStatusUpdatedDelegate")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PartyMessageHandler*), "add_serverStatusUpdatedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PartyMessageHandler::remove_serverStatusUpdatedEvent
// Il2CppName: remove_serverStatusUpdatedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PartyMessageHandler::*)(GlobalNamespace::PartyMessageHandler::ServerStatusUpdatedDelegate*)>(&GlobalNamespace::PartyMessageHandler::remove_serverStatusUpdatedEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("", "PartyMessageHandler/ServerStatusUpdatedDelegate")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PartyMessageHandler*), "remove_serverStatusUpdatedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PartyMessageHandler::add_connectToMasterServerEvent
// Il2CppName: add_connectToMasterServerEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PartyMessageHandler::*)(GlobalNamespace::PartyMessageHandler::ConnectToMasterServerDelegate*)>(&GlobalNamespace::PartyMessageHandler::add_connectToMasterServerEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("", "PartyMessageHandler/ConnectToMasterServerDelegate")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PartyMessageHandler*), "add_connectToMasterServerEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PartyMessageHandler::remove_connectToMasterServerEvent
// Il2CppName: remove_connectToMasterServerEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PartyMessageHandler::*)(GlobalNamespace::PartyMessageHandler::ConnectToMasterServerDelegate*)>(&GlobalNamespace::PartyMessageHandler::remove_connectToMasterServerEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("", "PartyMessageHandler/ConnectToMasterServerDelegate")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PartyMessageHandler*), "remove_connectToMasterServerEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PartyMessageHandler::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::PartyMessageHandler::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PartyMessageHandler::*)()>(&GlobalNamespace::PartyMessageHandler::Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PartyMessageHandler*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PartyMessageHandler::SetServerStatus
// Il2CppName: SetServerStatus
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PartyMessageHandler::*)(::Il2CppString*, ::Il2CppString*, GlobalNamespace::BeatmapLevelSelectionMask, GlobalNamespace::GameplayServerConfiguration)>(&GlobalNamespace::PartyMessageHandler::SetServerStatus)> {
  static const MethodInfo* get() {
    static auto* serverName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* password = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* selectionMask = &::il2cpp_utils::GetClassFromName("", "BeatmapLevelSelectionMask")->byval_arg;
    static auto* configuration = &::il2cpp_utils::GetClassFromName("", "GameplayServerConfiguration")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PartyMessageHandler*), "SetServerStatus", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{serverName, password, selectionMask, configuration});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PartyMessageHandler::HandleServerStatusUpdate
// Il2CppName: HandleServerStatusUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PartyMessageHandler::*)(GlobalNamespace::PartyMessageHandler::ServerStatusUpdateMessage*)>(&GlobalNamespace::PartyMessageHandler::HandleServerStatusUpdate)> {
  static const MethodInfo* get() {
    static auto* packet = &::il2cpp_utils::GetClassFromName("", "PartyMessageHandler/ServerStatusUpdateMessage")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PartyMessageHandler*), "HandleServerStatusUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{packet});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PartyMessageHandler::ConnectToMasterServer
// Il2CppName: ConnectToMasterServer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PartyMessageHandler::*)(System::Net::IPEndPoint*, ::Il2CppString*, ::Il2CppString*, ::Il2CppString*, ::Il2CppString*, ::Il2CppString*, GlobalNamespace::BeatmapLevelSelectionMask, GlobalNamespace::GameplayServerConfiguration)>(&GlobalNamespace::PartyMessageHandler::ConnectToMasterServer)> {
  static const MethodInfo* get() {
    static auto* endPoint = &::il2cpp_utils::GetClassFromName("System.Net", "IPEndPoint")->byval_arg;
    static auto* serverName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* password = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* secret = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* userId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* userName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* selectionMask = &::il2cpp_utils::GetClassFromName("", "BeatmapLevelSelectionMask")->byval_arg;
    static auto* configuration = &::il2cpp_utils::GetClassFromName("", "GameplayServerConfiguration")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PartyMessageHandler*), "ConnectToMasterServer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{endPoint, serverName, password, secret, userId, userName, selectionMask, configuration});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PartyMessageHandler::HandleConnectToMasterServer
// Il2CppName: HandleConnectToMasterServer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PartyMessageHandler::*)(GlobalNamespace::PartyMessageHandler::ConnectToMasterServerMessage*)>(&GlobalNamespace::PartyMessageHandler::HandleConnectToMasterServer)> {
  static const MethodInfo* get() {
    static auto* packet = &::il2cpp_utils::GetClassFromName("", "PartyMessageHandler/ConnectToMasterServerMessage")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PartyMessageHandler*), "HandleConnectToMasterServer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{packet});
  }
};
