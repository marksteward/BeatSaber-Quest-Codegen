// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: StandaloneMonobehavior
#include "GlobalNamespace/StandaloneMonobehavior.hpp"
// Including type: INetworkPlayerModel
#include "GlobalNamespace/INetworkPlayerModel.hpp"
// Including type: GameplayServerConfiguration
#include "GlobalNamespace/GameplayServerConfiguration.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: ConnectedPlayerManager
  class ConnectedPlayerManager;
  // Forward declaring type: INetworkPlayer
  class INetworkPlayer;
  // Forward declaring type: ConnectionFailedReason
  struct ConnectionFailedReason;
  // Forward declaring type: IConnectedPlayer
  class IConnectedPlayer;
  // Forward declaring type: DisconnectedReason
  struct DisconnectedReason;
  // Forward declaring type: IConnectionManager
  class IConnectionManager;
  // Forward declaring type: IConnectionInitParams`1<T>
  template<typename T>
  class IConnectionInitParams_1;
  // Forward declaring type: INetworkPlayerModelPartyConfig`1<T>
  template<typename T>
  class INetworkPlayerModelPartyConfig_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: BaseNetworkPlayerModel
  class BaseNetworkPlayerModel : public GlobalNamespace::StandaloneMonobehavior/*, public GlobalNamespace::INetworkPlayerModel*/ {
    public:
    // Nested type: GlobalNamespace::BaseNetworkPlayerModel::PartyConfig
    class PartyConfig;
    // Nested type: GlobalNamespace::BaseNetworkPlayerModel::$GetPartyPlayers$d__55
    class $GetPartyPlayers$d__55;
    // Nested type: GlobalNamespace::BaseNetworkPlayerModel::$GetOtherPlayers$d__56
    class $GetOtherPlayers$d__56;
    // private ConnectedPlayerManager _connectedPlayerManager
    // Offset: 0x20
    GlobalNamespace::ConnectedPlayerManager* connectedPlayerManager;
    // private INetworkPlayerModel _partyManager
    // Offset: 0x28
    GlobalNamespace::INetworkPlayerModel* partyManager;
    // private System.Int32 _maxPartySize
    // Offset: 0x30
    int maxPartySize;
    // private GameplayServerConfiguration _configuration
    // Offset: 0x38
    GlobalNamespace::GameplayServerConfiguration configuration;
    // private System.Boolean <discoveryEnabled>k__BackingField
    // Offset: 0x50
    bool discoveryEnabled;
    // private System.Action`1<INetworkPlayerModel> connectedPlayerManagerCreatedEvent
    // Offset: 0x58
    System::Action_1<GlobalNamespace::INetworkPlayerModel*>* connectedPlayerManagerCreatedEvent;
    // private System.Action`1<INetworkPlayerModel> connectedPlayerManagerDestroyedEvent
    // Offset: 0x60
    System::Action_1<GlobalNamespace::INetworkPlayerModel*>* connectedPlayerManagerDestroyedEvent;
    // Creating interface conversion operator: operator GlobalNamespace::INetworkPlayerModel
    operator GlobalNamespace::INetworkPlayerModel() noexcept {
      return *reinterpret_cast<GlobalNamespace::INetworkPlayerModel*>(this);
    }
    // public INetworkPlayerModel get_partyManager()
    // Offset: 0x20389B8
    GlobalNamespace::INetworkPlayerModel* get_partyManager();
    // protected System.Boolean get_isConnectedOrConnecting()
    // Offset: 0x20389C8
    bool get_isConnectedOrConnecting();
    // protected System.Boolean get_isConnectionOwner()
    // Offset: 0x20389DC
    bool get_isConnectionOwner();
    // public INetworkPlayer get_localPlayer()
    // Offset: 0x20389F0
    GlobalNamespace::INetworkPlayer* get_localPlayer();
    // protected System.Boolean get_isServer()
    // Offset: 0x2038D08
    bool get_isServer();
    // protected System.Boolean get_isClient()
    // Offset: 0x2038D54
    bool get_isClient();
    // protected System.Collections.Generic.IEnumerable`1<INetworkPlayer> GetPartyPlayers()
    // Offset: 0x2039058
    System::Collections::Generic::IEnumerable_1<GlobalNamespace::INetworkPlayer*>* GetPartyPlayers();
    // protected System.Collections.Generic.IEnumerable`1<INetworkPlayer> GetOtherPlayers()
    // Offset: 0x2039100
    System::Collections::Generic::IEnumerable_1<GlobalNamespace::INetworkPlayer*>* GetOtherPlayers();
    // protected System.Void ConnectionFailed(ConnectionFailedReason reason)
    // Offset: 0x20391A8
    void ConnectionFailed(GlobalNamespace::ConnectionFailedReason reason);
    // protected System.Void PlayerConnected(IConnectedPlayer player)
    // Offset: 0x20391AC
    void PlayerConnected(GlobalNamespace::IConnectedPlayer* player);
    // protected System.Void PlayerDisconnected(IConnectedPlayer player)
    // Offset: 0x20391B0
    void PlayerDisconnected(GlobalNamespace::IConnectedPlayer* player);
    // protected System.Void PlayerStateChanged(IConnectedPlayer player)
    // Offset: 0x20391B4
    void PlayerStateChanged(GlobalNamespace::IConnectedPlayer* player);
    // protected System.Void ConnectedPlayerManagerChanged()
    // Offset: 0x20391B8
    void ConnectedPlayerManagerChanged();
    // protected System.Void PlayerOrderChanged(IConnectedPlayer player)
    // Offset: 0x20391BC
    void PlayerOrderChanged(GlobalNamespace::IConnectedPlayer* player);
    // protected System.Void PartySizeChanged(System.Int32 currentPartySize)
    // Offset: 0x20391C0
    void PartySizeChanged(int currentPartySize);
    // protected System.Void Disconnected(DisconnectedReason disconnectedReason)
    // Offset: 0x20391C4
    void Disconnected(GlobalNamespace::DisconnectedReason disconnectedReason);
    // protected System.Void DestroyConnectedPlayerManager()
    // Offset: 0x2038DB0
    void DestroyConnectedPlayerManager();
    // protected System.Void CreateConnectedPlayerManager(IConnectionInitParams`1<T> initParams)
    // Offset: 0xFFFFFFFF
    template<class T>
    void CreateConnectedPlayerManager(GlobalNamespace::IConnectionInitParams_1<T>* initParams) {
      static_assert(std::is_base_of_v<GlobalNamespace::IConnectionManager, std::remove_pointer_t<T>>);
      THROW_UNLESS(il2cpp_utils::RunGenericMethod(this, "CreateConnectedPlayerManager", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, initParams));
    }
    // protected System.Void Log(System.String message)
    // Offset: 0x20392E4
    void Log(::Il2CppString* message);
    // public ConnectedPlayerManager get_connectedPlayerManager()
    // Offset: 0x20389B0
    // Implemented from: INetworkPlayerModel
    // Base method: ConnectedPlayerManager INetworkPlayerModel::get_connectedPlayerManager()
    GlobalNamespace::ConnectedPlayerManager* get_connectedPlayerManager();
    // public System.Boolean get_discoveryEnabled()
    // Offset: 0x20389F8
    // Implemented from: INetworkPlayerModel
    // Base method: System.Boolean INetworkPlayerModel::get_discoveryEnabled()
    bool get_discoveryEnabled();
    // public System.Void set_discoveryEnabled(System.Boolean value)
    // Offset: 0x2038A00
    // Implemented from: INetworkPlayerModel
    // Base method: System.Void INetworkPlayerModel::set_discoveryEnabled(System.Boolean value)
    void set_discoveryEnabled(bool value);
    // public System.Int32 get_currentPartySize()
    // Offset: 0x2038A0C
    // Implemented from: INetworkPlayerModel
    // Base method: System.Int32 INetworkPlayerModel::get_currentPartySize()
    int get_currentPartySize();
    // public System.Int32 get_maxPartySize()
    // Offset: 0x2038A14
    // Implemented from: INetworkPlayerModel
    // Base method: System.Int32 INetworkPlayerModel::get_maxPartySize()
    int get_maxPartySize();
    // public GameplayServerConfiguration get_configuration()
    // Offset: 0x2038A1C
    // Implemented from: INetworkPlayerModel
    // Base method: GameplayServerConfiguration INetworkPlayerModel::get_configuration()
    GlobalNamespace::GameplayServerConfiguration get_configuration();
    // public System.Void add_connectedPlayerManagerCreatedEvent(System.Action`1<INetworkPlayerModel> value)
    // Offset: 0x2038A30
    // Implemented from: INetworkPlayerModel
    // Base method: System.Void INetworkPlayerModel::add_connectedPlayerManagerCreatedEvent(System.Action`1<INetworkPlayerModel> value)
    void add_connectedPlayerManagerCreatedEvent(System::Action_1<GlobalNamespace::INetworkPlayerModel*>* value);
    // public System.Void remove_connectedPlayerManagerCreatedEvent(System.Action`1<INetworkPlayerModel> value)
    // Offset: 0x2038AD4
    // Implemented from: INetworkPlayerModel
    // Base method: System.Void INetworkPlayerModel::remove_connectedPlayerManagerCreatedEvent(System.Action`1<INetworkPlayerModel> value)
    void remove_connectedPlayerManagerCreatedEvent(System::Action_1<GlobalNamespace::INetworkPlayerModel*>* value);
    // public System.Void add_connectedPlayerManagerDestroyedEvent(System.Action`1<INetworkPlayerModel> value)
    // Offset: 0x2038B78
    // Implemented from: INetworkPlayerModel
    // Base method: System.Void INetworkPlayerModel::add_connectedPlayerManagerDestroyedEvent(System.Action`1<INetworkPlayerModel> value)
    void add_connectedPlayerManagerDestroyedEvent(System::Action_1<GlobalNamespace::INetworkPlayerModel*>* value);
    // public System.Void remove_connectedPlayerManagerDestroyedEvent(System.Action`1<INetworkPlayerModel> value)
    // Offset: 0x2038C1C
    // Implemented from: INetworkPlayerModel
    // Base method: System.Void INetworkPlayerModel::remove_connectedPlayerManagerDestroyedEvent(System.Action`1<INetworkPlayerModel> value)
    void remove_connectedPlayerManagerDestroyedEvent(System::Action_1<GlobalNamespace::INetworkPlayerModel*>* value);
    // public System.Void add_partyChangedEvent(System.Action`1<INetworkPlayerModel> value)
    // Offset: 0x2038CC0
    // Implemented from: INetworkPlayerModel
    // Base method: System.Void INetworkPlayerModel::add_partyChangedEvent(System.Action`1<INetworkPlayerModel> value)
    void add_partyChangedEvent(System::Action_1<GlobalNamespace::INetworkPlayerModel*>* value);
    // public System.Void remove_partyChangedEvent(System.Action`1<INetworkPlayerModel> value)
    // Offset: 0x2038CC4
    // Implemented from: INetworkPlayerModel
    // Base method: System.Void INetworkPlayerModel::remove_partyChangedEvent(System.Action`1<INetworkPlayerModel> value)
    void remove_partyChangedEvent(System::Action_1<GlobalNamespace::INetworkPlayerModel*>* value);
    // public System.Void add_partySizeChangedEvent(System.Action`1<System.Int32> value)
    // Offset: 0x2038CC8
    // Implemented from: INetworkPlayerModel
    // Base method: System.Void INetworkPlayerModel::add_partySizeChangedEvent(System.Action`1<System.Int32> value)
    void add_partySizeChangedEvent(System::Action_1<int>* value);
    // public System.Void remove_partySizeChangedEvent(System.Action`1<System.Int32> value)
    // Offset: 0x2038CCC
    // Implemented from: INetworkPlayerModel
    // Base method: System.Void INetworkPlayerModel::remove_partySizeChangedEvent(System.Action`1<System.Int32> value)
    void remove_partySizeChangedEvent(System::Action_1<int>* value);
    // public System.Void add_joinRequestedEvent(System.Action`1<INetworkPlayer> value)
    // Offset: 0x2038CD0
    // Implemented from: INetworkPlayerModel
    // Base method: System.Void INetworkPlayerModel::add_joinRequestedEvent(System.Action`1<INetworkPlayer> value)
    void add_joinRequestedEvent(System::Action_1<GlobalNamespace::INetworkPlayer*>* value);
    // public System.Void remove_joinRequestedEvent(System.Action`1<INetworkPlayer> value)
    // Offset: 0x2038CD4
    // Implemented from: INetworkPlayerModel
    // Base method: System.Void INetworkPlayerModel::remove_joinRequestedEvent(System.Action`1<INetworkPlayer> value)
    void remove_joinRequestedEvent(System::Action_1<GlobalNamespace::INetworkPlayer*>* value);
    // public System.Void add_inviteRequestedEvent(System.Action`1<INetworkPlayer> value)
    // Offset: 0x2038CD8
    // Implemented from: INetworkPlayerModel
    // Base method: System.Void INetworkPlayerModel::add_inviteRequestedEvent(System.Action`1<INetworkPlayer> value)
    void add_inviteRequestedEvent(System::Action_1<GlobalNamespace::INetworkPlayer*>* value);
    // public System.Void remove_inviteRequestedEvent(System.Action`1<INetworkPlayer> value)
    // Offset: 0x2038CDC
    // Implemented from: INetworkPlayerModel
    // Base method: System.Void INetworkPlayerModel::remove_inviteRequestedEvent(System.Action`1<INetworkPlayer> value)
    void remove_inviteRequestedEvent(System::Action_1<GlobalNamespace::INetworkPlayer*>* value);
    // public System.Collections.Generic.IEnumerable`1<INetworkPlayer> get_partyPlayers()
    // Offset: 0x2038CE0
    // Implemented from: INetworkPlayerModel
    // Base method: System.Collections.Generic.IEnumerable`1<INetworkPlayer> INetworkPlayerModel::get_partyPlayers()
    System::Collections::Generic::IEnumerable_1<GlobalNamespace::INetworkPlayer*>* get_partyPlayers();
    // private System.Collections.Generic.IEnumerable`1<INetworkPlayer> INetworkPlayerModel.get_otherPlayers()
    // Offset: 0x2038CF0
    // Implemented from: INetworkPlayerModel
    // Base method: System.Collections.Generic.IEnumerable`1<INetworkPlayer> INetworkPlayerModel::get_otherPlayers()
    System::Collections::Generic::IEnumerable_1<GlobalNamespace::INetworkPlayer*>* GlobalNamespace_INetworkPlayerModel_get_otherPlayers();
    // public System.Boolean get_localPlayerIsPartyOwner()
    // Offset: 0x2038D00
    // Implemented from: INetworkPlayerModel
    // Base method: System.Boolean INetworkPlayerModel::get_localPlayerIsPartyOwner()
    bool get_localPlayerIsPartyOwner();
    // protected override System.Void OnDestroy()
    // Offset: 0x2038DAC
    // Implemented from: StandaloneMonobehavior
    // Base method: System.Void StandaloneMonobehavior::OnDestroy()
    void OnDestroy();
    // protected override System.Void Update()
    // Offset: 0x2039044
    // Implemented from: StandaloneMonobehavior
    // Base method: System.Void StandaloneMonobehavior::Update()
    void Update();
    // public System.Void Disconnect()
    // Offset: 0x20391D4
    // Implemented from: INetworkPlayerModel
    // Base method: System.Void INetworkPlayerModel::Disconnect()
    void Disconnect();
    // public System.Boolean CreateParty(INetworkPlayerModelPartyConfig`1<T> createConfig)
    // Offset: 0xFFFFFFFF
    // Implemented from: INetworkPlayerModel
    // Base method: System.Boolean INetworkPlayerModel::CreateParty(INetworkPlayerModelPartyConfig`1<T> createConfig)
    template<class T>
    bool CreateParty(GlobalNamespace::INetworkPlayerModelPartyConfig_1<T>* createConfig) {
      static_assert(std::is_base_of_v<GlobalNamespace::INetworkPlayerModel, std::remove_pointer_t<T>>);
      return THROW_UNLESS((il2cpp_utils::RunGenericMethod<bool>(this, "CreateParty", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, createConfig)));
    }
    // public System.Void DestroyParty()
    // Offset: 0x20391D8
    // Implemented from: INetworkPlayerModel
    // Base method: System.Void INetworkPlayerModel::DestroyParty()
    void DestroyParty();
    // protected System.Void .ctor()
    // Offset: 0x20393AC
    // Implemented from: StandaloneMonobehavior
    // Base method: System.Void StandaloneMonobehavior::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static BaseNetworkPlayerModel* New_ctor();
  }; // BaseNetworkPlayerModel
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BaseNetworkPlayerModel*, "", "BaseNetworkPlayerModel");
#pragma pack(pop)
