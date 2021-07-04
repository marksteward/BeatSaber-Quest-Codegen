// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: ILobbyStateDataModel
#include "GlobalNamespace/ILobbyStateDataModel.hpp"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IMultiplayerSessionManager
  class IMultiplayerSessionManager;
  // Forward declaring type: IUnifiedNetworkPlayerModel
  class IUnifiedNetworkPlayerModel;
  // Forward declaring type: IConnectedPlayer
  class IConnectedPlayer;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
  // Forward declaring type: IReadOnlyList`1<T>
  template<typename T>
  class IReadOnlyList_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: LobbyStateDataModel
  class LobbyStateDataModel : public ::Il2CppObject/*, public GlobalNamespace::ILobbyStateDataModel, public System::IDisposable*/ {
    public:
    // [InjectAttribute] Offset: 0xE17B78
    // private readonly IMultiplayerSessionManager _multiplayerSessionManager
    // Size: 0x8
    // Offset: 0x10
    GlobalNamespace::IMultiplayerSessionManager* multiplayerSessionManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IMultiplayerSessionManager*) == 0x8);
    // [InjectAttribute] Offset: 0xE17B88
    // private readonly IUnifiedNetworkPlayerModel _unifiedNetworkPlayerModel
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::IUnifiedNetworkPlayerModel* unifiedNetworkPlayerModel;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IUnifiedNetworkPlayerModel*) == 0x8);
    // private System.Collections.Generic.List`1<IConnectedPlayer> _connectedPlayers
    // Size: 0x8
    // Offset: 0x20
    System::Collections::Generic::List_1<GlobalNamespace::IConnectedPlayer*>* connectedPlayers;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<GlobalNamespace::IConnectedPlayer*>*) == 0x8);
    // private System.Collections.Generic.Dictionary`2<System.String,IConnectedPlayer> _connectedPlayersById
    // Size: 0x8
    // Offset: 0x28
    System::Collections::Generic::Dictionary_2<::Il2CppString*, GlobalNamespace::IConnectedPlayer*>* connectedPlayersById;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::Dictionary_2<::Il2CppString*, GlobalNamespace::IConnectedPlayer*>*) == 0x8);
    // private System.Boolean _isHost
    // Size: 0x1
    // Offset: 0x30
    bool isHost;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: isHost and: playerConnectedEvent
    char __padding4[0x7] = {};
    // [CompilerGeneratedAttribute] Offset: 0xE17B98
    // private System.Action`1<IConnectedPlayer> playerConnectedEvent
    // Size: 0x8
    // Offset: 0x38
    System::Action_1<GlobalNamespace::IConnectedPlayer*>* playerConnectedEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<GlobalNamespace::IConnectedPlayer*>*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xE17BA8
    // private System.Action`1<IConnectedPlayer> playerDisconnectedEvent
    // Size: 0x8
    // Offset: 0x40
    System::Action_1<GlobalNamespace::IConnectedPlayer*>* playerDisconnectedEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<GlobalNamespace::IConnectedPlayer*>*) == 0x8);
    // Creating value type constructor for type: LobbyStateDataModel
    LobbyStateDataModel(GlobalNamespace::IMultiplayerSessionManager* multiplayerSessionManager_ = {}, GlobalNamespace::IUnifiedNetworkPlayerModel* unifiedNetworkPlayerModel_ = {}, System::Collections::Generic::List_1<GlobalNamespace::IConnectedPlayer*>* connectedPlayers_ = {}, System::Collections::Generic::Dictionary_2<::Il2CppString*, GlobalNamespace::IConnectedPlayer*>* connectedPlayersById_ = {}, bool isHost_ = {}, System::Action_1<GlobalNamespace::IConnectedPlayer*>* playerConnectedEvent_ = {}, System::Action_1<GlobalNamespace::IConnectedPlayer*>* playerDisconnectedEvent_ = {}) noexcept : multiplayerSessionManager{multiplayerSessionManager_}, unifiedNetworkPlayerModel{unifiedNetworkPlayerModel_}, connectedPlayers{connectedPlayers_}, connectedPlayersById{connectedPlayersById_}, isHost{isHost_}, playerConnectedEvent{playerConnectedEvent_}, playerDisconnectedEvent{playerDisconnectedEvent_} {}
    // Creating interface conversion operator: operator GlobalNamespace::ILobbyStateDataModel
    operator GlobalNamespace::ILobbyStateDataModel() noexcept {
      return *reinterpret_cast<GlobalNamespace::ILobbyStateDataModel*>(this);
    }
    // Creating interface conversion operator: operator System::IDisposable
    operator System::IDisposable() noexcept {
      return *reinterpret_cast<System::IDisposable*>(this);
    }
    // public System.Void add_playerConnectedEvent(System.Action`1<IConnectedPlayer> value)
    // Offset: 0x23F5CB4
    void add_playerConnectedEvent(System::Action_1<GlobalNamespace::IConnectedPlayer*>* value);
    // public System.Void remove_playerConnectedEvent(System.Action`1<IConnectedPlayer> value)
    // Offset: 0x23F5D58
    void remove_playerConnectedEvent(System::Action_1<GlobalNamespace::IConnectedPlayer*>* value);
    // public System.Void add_playerDisconnectedEvent(System.Action`1<IConnectedPlayer> value)
    // Offset: 0x23F5DFC
    void add_playerDisconnectedEvent(System::Action_1<GlobalNamespace::IConnectedPlayer*>* value);
    // public System.Void remove_playerDisconnectedEvent(System.Action`1<IConnectedPlayer> value)
    // Offset: 0x23F5EA0
    void remove_playerDisconnectedEvent(System::Action_1<GlobalNamespace::IConnectedPlayer*>* value);
    // public System.Boolean get_isConnected()
    // Offset: 0x23F5F44
    bool get_isConnected();
    // public IConnectedPlayer get_localPlayer()
    // Offset: 0x23F5FF8
    GlobalNamespace::IConnectedPlayer* get_localPlayer();
    // public System.Collections.Generic.List`1<IConnectedPlayer> get_connectedPlayers()
    // Offset: 0x23F60A8
    System::Collections::Generic::List_1<GlobalNamespace::IConnectedPlayer*>* get_connectedPlayers();
    // public System.Collections.Generic.IReadOnlyList`1<IConnectedPlayer> get_rawConnectedPlayers()
    // Offset: 0x23F60B0
    System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::IConnectedPlayer*>* get_rawConnectedPlayers();
    // public System.Boolean get_isHost()
    // Offset: 0x23F6164
    bool get_isHost();
    // public System.Int32 get_maxPartySize()
    // Offset: 0x23F616C
    int get_maxPartySize();
    // public System.Void Activate()
    // Offset: 0x23F6220
    void Activate();
    // public System.Void Deactivate()
    // Offset: 0x23F687C
    void Deactivate();
    // public System.Void Dispose()
    // Offset: 0x23F6A0C
    void Dispose();
    // public IConnectedPlayer GetPlayerById(System.String userId)
    // Offset: 0x23F6A10
    GlobalNamespace::IConnectedPlayer* GetPlayerById(::Il2CppString* userId);
    // private System.Void HandleMultiplayerSessionManagerPlayerConnected(IConnectedPlayer player)
    // Offset: 0x23F6AA0
    void HandleMultiplayerSessionManagerPlayerConnected(GlobalNamespace::IConnectedPlayer* player);
    // private System.Void HandleMultiplayerSessionManagerPlayerDisconnected(IConnectedPlayer player)
    // Offset: 0x23F6BC8
    void HandleMultiplayerSessionManagerPlayerDisconnected(GlobalNamespace::IConnectedPlayer* player);
    // public System.Void .ctor()
    // Offset: 0x23F6CEC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LobbyStateDataModel* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::LobbyStateDataModel::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LobbyStateDataModel*, creationType>()));
    }
  }; // LobbyStateDataModel
  #pragma pack(pop)
  static check_size<sizeof(LobbyStateDataModel), 64 + sizeof(System::Action_1<GlobalNamespace::IConnectedPlayer*>*)> __GlobalNamespace_LobbyStateDataModelSizeCheck;
  static_assert(sizeof(LobbyStateDataModel) == 0x48);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LobbyStateDataModel*, "", "LobbyStateDataModel");
// Writing MetadataGetter for method: GlobalNamespace::LobbyStateDataModel::add_playerConnectedEvent
// Il2CppName: add_playerConnectedEvent
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::LobbyStateDataModel::remove_playerConnectedEvent
// Il2CppName: remove_playerConnectedEvent
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::LobbyStateDataModel::add_playerDisconnectedEvent
// Il2CppName: add_playerDisconnectedEvent
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::LobbyStateDataModel::remove_playerDisconnectedEvent
// Il2CppName: remove_playerDisconnectedEvent
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::LobbyStateDataModel::get_isConnected
// Il2CppName: get_isConnected
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::LobbyStateDataModel::get_localPlayer
// Il2CppName: get_localPlayer
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::LobbyStateDataModel::get_connectedPlayers
// Il2CppName: get_connectedPlayers
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::LobbyStateDataModel::get_rawConnectedPlayers
// Il2CppName: get_rawConnectedPlayers
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::LobbyStateDataModel::get_isHost
// Il2CppName: get_isHost
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::LobbyStateDataModel::get_maxPartySize
// Il2CppName: get_maxPartySize
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::LobbyStateDataModel::Activate
// Il2CppName: Activate
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::LobbyStateDataModel::Deactivate
// Il2CppName: Deactivate
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::LobbyStateDataModel::Dispose
// Il2CppName: Dispose
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::LobbyStateDataModel::GetPlayerById
// Il2CppName: GetPlayerById
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::LobbyStateDataModel::HandleMultiplayerSessionManagerPlayerConnected
// Il2CppName: HandleMultiplayerSessionManagerPlayerConnected
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::LobbyStateDataModel::HandleMultiplayerSessionManagerPlayerDisconnected
// Il2CppName: HandleMultiplayerSessionManagerPlayerDisconnected
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::LobbyStateDataModel::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
