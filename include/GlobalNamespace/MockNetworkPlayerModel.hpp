// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: IUnifiedNetworkPlayerModel
#include "GlobalNamespace/IUnifiedNetworkPlayerModel.hpp"
// Including type: GameplayServerConfiguration
#include "GlobalNamespace/GameplayServerConfiguration.hpp"
// Including type: GameplayServerFilter
#include "GlobalNamespace/GameplayServerFilter.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MultiplayerMockSettings
  class MultiplayerMockSettings;
  // Forward declaring type: MockMultiplayerSessionManager
  class MockMultiplayerSessionManager;
  // Forward declaring type: ConnectedPlayerManager
  class ConnectedPlayerManager;
  // Skipping declaration: INetworkPlayerModel because it is already included!
  // Forward declaring type: INetworkPlayer
  class INetworkPlayer;
  // Forward declaring type: INetworkPlayerModelPartyConfig`1<T>
  template<typename T>
  class INetworkPlayerModelPartyConfig_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
  // Forward declaring type: Action
  class Action;
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
  // Autogenerated type: MockNetworkPlayerModel
  class MockNetworkPlayerModel : public ::Il2CppObject/*, public GlobalNamespace::IUnifiedNetworkPlayerModel*/ {
    public:
    // private readonly MultiplayerMockSettings _mockSettings
    // Offset: 0x10
    GlobalNamespace::MultiplayerMockSettings* mockSettings;
    // private readonly MockMultiplayerSessionManager _mockMultiplayerSessionManager
    // Offset: 0x18
    GlobalNamespace::MockMultiplayerSessionManager* mockMultiplayerSessionManager;
    // private System.Boolean <discoveryEnabled>k__BackingField
    // Offset: 0x20
    bool discoveryEnabled;
    // private readonly System.Boolean <localPlayerIsPartyOwner>k__BackingField
    // Offset: 0x21
    bool localPlayerIsPartyOwner;
    // private System.Int32 <maxPartySize>k__BackingField
    // Offset: 0x24
    int maxPartySize;
    // private GameplayServerConfiguration <configuration>k__BackingField
    // Offset: 0x28
    GlobalNamespace::GameplayServerConfiguration configuration;
    // private readonly System.Int32 <currentPartySize>k__BackingField
    // Offset: 0x40
    int currentPartySize;
    // private readonly ConnectedPlayerManager <connectedPlayerManager>k__BackingField
    // Offset: 0x48
    GlobalNamespace::ConnectedPlayerManager* connectedPlayerManager;
    // private System.Boolean <enableLocalNetwork>k__BackingField
    // Offset: 0x50
    bool enableLocalNetwork;
    // private GameplayServerFilter <serverFilter>k__BackingField
    // Offset: 0x58
    GlobalNamespace::GameplayServerFilter serverFilter;
    // private System.Action`1<INetworkPlayerModel> connectedPlayerManagerCreatedEvent
    // Offset: 0x80
    System::Action_1<GlobalNamespace::INetworkPlayerModel*>* connectedPlayerManagerCreatedEvent;
    // private System.Action`1<INetworkPlayerModel> connectedPlayerManagerDestroyedEvent
    // Offset: 0x88
    System::Action_1<GlobalNamespace::INetworkPlayerModel*>* connectedPlayerManagerDestroyedEvent;
    // private System.Action partyRefreshingEvent
    // Offset: 0x90
    System::Action* partyRefreshingEvent;
    // private System.Action`1<INetworkPlayerModel> partyChangedEvent
    // Offset: 0x98
    System::Action_1<GlobalNamespace::INetworkPlayerModel*>* partyChangedEvent;
    // private System.Action`1<System.Int32> partySizeChangedEvent
    // Offset: 0xA0
    System::Action_1<int>* partySizeChangedEvent;
    // private System.Action`1<INetworkPlayer> joinRequestedEvent
    // Offset: 0xA8
    System::Action_1<GlobalNamespace::INetworkPlayer*>* joinRequestedEvent;
    // private System.Action`1<INetworkPlayer> inviteRequestedEvent
    // Offset: 0xB0
    System::Action_1<GlobalNamespace::INetworkPlayer*>* inviteRequestedEvent;
    // Creating interface conversion operator: operator GlobalNamespace::IUnifiedNetworkPlayerModel
    operator GlobalNamespace::IUnifiedNetworkPlayerModel() noexcept {
      return *reinterpret_cast<GlobalNamespace::IUnifiedNetworkPlayerModel*>(this);
    }
    // private System.Void set_maxPartySize(System.Int32 value)
    // Offset: 0x2057E78
    void set_maxPartySize(int value);
    // public System.Void set_configuration(GameplayServerConfiguration value)
    // Offset: 0x2057E94
    void set_configuration(GlobalNamespace::GameplayServerConfiguration value);
    // private System.Void set_serverFilter(GameplayServerFilter value)
    // Offset: 0x2057FC0
    void set_serverFilter(GlobalNamespace::GameplayServerFilter value);
    // public System.Void Refresh(System.Boolean clearCurrentList)
    // Offset: 0x2058A04
    void Refresh(bool clearCurrentList);
    // public System.Boolean get_discoveryEnabled()
    // Offset: 0x2057E54
    // Implemented from: INetworkPlayerModel
    // Base method: System.Boolean INetworkPlayerModel::get_discoveryEnabled()
    bool get_discoveryEnabled();
    // public System.Void set_discoveryEnabled(System.Boolean value)
    // Offset: 0x2057E5C
    // Implemented from: INetworkPlayerModel
    // Base method: System.Void INetworkPlayerModel::set_discoveryEnabled(System.Boolean value)
    void set_discoveryEnabled(bool value);
    // public System.Boolean get_localPlayerIsPartyOwner()
    // Offset: 0x2057E68
    // Implemented from: INetworkPlayerModel
    // Base method: System.Boolean INetworkPlayerModel::get_localPlayerIsPartyOwner()
    bool get_localPlayerIsPartyOwner();
    // public System.Int32 get_maxPartySize()
    // Offset: 0x2057E70
    // Implemented from: INetworkPlayerModel
    // Base method: System.Int32 INetworkPlayerModel::get_maxPartySize()
    int get_maxPartySize();
    // public GameplayServerConfiguration get_configuration()
    // Offset: 0x2057E80
    // Implemented from: INetworkPlayerModel
    // Base method: GameplayServerConfiguration INetworkPlayerModel::get_configuration()
    GlobalNamespace::GameplayServerConfiguration get_configuration();
    // public System.Int32 get_currentPartySize()
    // Offset: 0x2057EA8
    // Implemented from: INetworkPlayerModel
    // Base method: System.Int32 INetworkPlayerModel::get_currentPartySize()
    int get_currentPartySize();
    // public System.Collections.Generic.IEnumerable`1<INetworkPlayer> get_partyPlayers()
    // Offset: 0x2057EB0
    // Implemented from: INetworkPlayerModel
    // Base method: System.Collections.Generic.IEnumerable`1<INetworkPlayer> INetworkPlayerModel::get_partyPlayers()
    System::Collections::Generic::IEnumerable_1<GlobalNamespace::INetworkPlayer*>* get_partyPlayers();
    // public System.Collections.Generic.IEnumerable`1<INetworkPlayer> get_otherPlayers()
    // Offset: 0x2057F1C
    // Implemented from: INetworkPlayerModel
    // Base method: System.Collections.Generic.IEnumerable`1<INetworkPlayer> INetworkPlayerModel::get_otherPlayers()
    System::Collections::Generic::IEnumerable_1<GlobalNamespace::INetworkPlayer*>* get_otherPlayers();
    // Creating proxy method: GlobalNamespace_INetworkPlayerModel_get_otherPlayers
    // Maps to method: get_otherPlayers
    System::Collections::Generic::IEnumerable_1<GlobalNamespace::INetworkPlayer*>* GlobalNamespace_INetworkPlayerModel_get_otherPlayers();
    // public ConnectedPlayerManager get_connectedPlayerManager()
    // Offset: 0x2057F38
    // Implemented from: INetworkPlayerModel
    // Base method: ConnectedPlayerManager INetworkPlayerModel::get_connectedPlayerManager()
    GlobalNamespace::ConnectedPlayerManager* get_connectedPlayerManager();
    // public INetworkPlayer get_localPlayer()
    // Offset: 0x2057F40
    // Implemented from: IUnifiedNetworkPlayerModel
    // Base method: INetworkPlayer IUnifiedNetworkPlayerModel::get_localPlayer()
    GlobalNamespace::INetworkPlayer* get_localPlayer();
    // public System.Boolean get_enableLocalNetwork()
    // Offset: 0x2057F5C
    // Implemented from: IUnifiedNetworkPlayerModel
    // Base method: System.Boolean IUnifiedNetworkPlayerModel::get_enableLocalNetwork()
    bool get_enableLocalNetwork();
    // public System.Void set_enableLocalNetwork(System.Boolean value)
    // Offset: 0x2057F64
    // Implemented from: IUnifiedNetworkPlayerModel
    // Base method: System.Void IUnifiedNetworkPlayerModel::set_enableLocalNetwork(System.Boolean value)
    void set_enableLocalNetwork(bool value);
    // public System.Collections.Generic.IEnumerable`1<INetworkPlayer> get_publicServers()
    // Offset: 0x2057F70
    // Implemented from: IUnifiedNetworkPlayerModel
    // Base method: System.Collections.Generic.IEnumerable`1<INetworkPlayer> IUnifiedNetworkPlayerModel::get_publicServers()
    System::Collections::Generic::IEnumerable_1<GlobalNamespace::INetworkPlayer*>* get_publicServers();
    // public System.Collections.Generic.IEnumerable`1<INetworkPlayer> get_localNetworkPlayers()
    // Offset: 0x2057F8C
    // Implemented from: IUnifiedNetworkPlayerModel
    // Base method: System.Collections.Generic.IEnumerable`1<INetworkPlayer> IUnifiedNetworkPlayerModel::get_localNetworkPlayers()
    System::Collections::Generic::IEnumerable_1<GlobalNamespace::INetworkPlayer*>* get_localNetworkPlayers();
    // public GameplayServerFilter get_serverFilter()
    // Offset: 0x2057FA8
    // Implemented from: IUnifiedNetworkPlayerModel
    // Base method: GameplayServerFilter IUnifiedNetworkPlayerModel::get_serverFilter()
    GlobalNamespace::GameplayServerFilter get_serverFilter();
    // public System.String get_userId()
    // Offset: 0x2057FE4
    // Implemented from: IUnifiedNetworkPlayerModel
    // Base method: System.String IUnifiedNetworkPlayerModel::get_userId()
    ::Il2CppString* get_userId();
    // public System.String get_userName()
    // Offset: 0x205802C
    // Implemented from: IUnifiedNetworkPlayerModel
    // Base method: System.String IUnifiedNetworkPlayerModel::get_userName()
    ::Il2CppString* get_userName();
    // public System.String get_secret()
    // Offset: 0x2058074
    // Implemented from: IUnifiedNetworkPlayerModel
    // Base method: System.String IUnifiedNetworkPlayerModel::get_secret()
    ::Il2CppString* get_secret();
    // public System.String get_code()
    // Offset: 0x20580BC
    // Implemented from: IUnifiedNetworkPlayerModel
    // Base method: System.String IUnifiedNetworkPlayerModel::get_code()
    ::Il2CppString* get_code();
    // public System.Void add_connectedPlayerManagerCreatedEvent(System.Action`1<INetworkPlayerModel> value)
    // Offset: 0x2058104
    // Implemented from: INetworkPlayerModel
    // Base method: System.Void INetworkPlayerModel::add_connectedPlayerManagerCreatedEvent(System.Action`1<INetworkPlayerModel> value)
    void add_connectedPlayerManagerCreatedEvent(System::Action_1<GlobalNamespace::INetworkPlayerModel*>* value);
    // public System.Void remove_connectedPlayerManagerCreatedEvent(System.Action`1<INetworkPlayerModel> value)
    // Offset: 0x20581A8
    // Implemented from: INetworkPlayerModel
    // Base method: System.Void INetworkPlayerModel::remove_connectedPlayerManagerCreatedEvent(System.Action`1<INetworkPlayerModel> value)
    void remove_connectedPlayerManagerCreatedEvent(System::Action_1<GlobalNamespace::INetworkPlayerModel*>* value);
    // public System.Void add_connectedPlayerManagerDestroyedEvent(System.Action`1<INetworkPlayerModel> value)
    // Offset: 0x205824C
    // Implemented from: INetworkPlayerModel
    // Base method: System.Void INetworkPlayerModel::add_connectedPlayerManagerDestroyedEvent(System.Action`1<INetworkPlayerModel> value)
    void add_connectedPlayerManagerDestroyedEvent(System::Action_1<GlobalNamespace::INetworkPlayerModel*>* value);
    // public System.Void remove_connectedPlayerManagerDestroyedEvent(System.Action`1<INetworkPlayerModel> value)
    // Offset: 0x20582F0
    // Implemented from: INetworkPlayerModel
    // Base method: System.Void INetworkPlayerModel::remove_connectedPlayerManagerDestroyedEvent(System.Action`1<INetworkPlayerModel> value)
    void remove_connectedPlayerManagerDestroyedEvent(System::Action_1<GlobalNamespace::INetworkPlayerModel*>* value);
    // public System.Void add_partyRefreshingEvent(System.Action value)
    // Offset: 0x2058394
    // Implemented from: IUnifiedNetworkPlayerModel
    // Base method: System.Void IUnifiedNetworkPlayerModel::add_partyRefreshingEvent(System.Action value)
    void add_partyRefreshingEvent(System::Action* value);
    // public System.Void remove_partyRefreshingEvent(System.Action value)
    // Offset: 0x2058438
    // Implemented from: IUnifiedNetworkPlayerModel
    // Base method: System.Void IUnifiedNetworkPlayerModel::remove_partyRefreshingEvent(System.Action value)
    void remove_partyRefreshingEvent(System::Action* value);
    // public System.Void add_partyChangedEvent(System.Action`1<INetworkPlayerModel> value)
    // Offset: 0x20584DC
    // Implemented from: INetworkPlayerModel
    // Base method: System.Void INetworkPlayerModel::add_partyChangedEvent(System.Action`1<INetworkPlayerModel> value)
    void add_partyChangedEvent(System::Action_1<GlobalNamespace::INetworkPlayerModel*>* value);
    // public System.Void remove_partyChangedEvent(System.Action`1<INetworkPlayerModel> value)
    // Offset: 0x2058580
    // Implemented from: INetworkPlayerModel
    // Base method: System.Void INetworkPlayerModel::remove_partyChangedEvent(System.Action`1<INetworkPlayerModel> value)
    void remove_partyChangedEvent(System::Action_1<GlobalNamespace::INetworkPlayerModel*>* value);
    // public System.Void add_partySizeChangedEvent(System.Action`1<System.Int32> value)
    // Offset: 0x2058624
    // Implemented from: INetworkPlayerModel
    // Base method: System.Void INetworkPlayerModel::add_partySizeChangedEvent(System.Action`1<System.Int32> value)
    void add_partySizeChangedEvent(System::Action_1<int>* value);
    // public System.Void remove_partySizeChangedEvent(System.Action`1<System.Int32> value)
    // Offset: 0x20586C8
    // Implemented from: INetworkPlayerModel
    // Base method: System.Void INetworkPlayerModel::remove_partySizeChangedEvent(System.Action`1<System.Int32> value)
    void remove_partySizeChangedEvent(System::Action_1<int>* value);
    // public System.Void add_joinRequestedEvent(System.Action`1<INetworkPlayer> value)
    // Offset: 0x205876C
    // Implemented from: INetworkPlayerModel
    // Base method: System.Void INetworkPlayerModel::add_joinRequestedEvent(System.Action`1<INetworkPlayer> value)
    void add_joinRequestedEvent(System::Action_1<GlobalNamespace::INetworkPlayer*>* value);
    // public System.Void remove_joinRequestedEvent(System.Action`1<INetworkPlayer> value)
    // Offset: 0x2058810
    // Implemented from: INetworkPlayerModel
    // Base method: System.Void INetworkPlayerModel::remove_joinRequestedEvent(System.Action`1<INetworkPlayer> value)
    void remove_joinRequestedEvent(System::Action_1<GlobalNamespace::INetworkPlayer*>* value);
    // public System.Void add_inviteRequestedEvent(System.Action`1<INetworkPlayer> value)
    // Offset: 0x20588B4
    // Implemented from: INetworkPlayerModel
    // Base method: System.Void INetworkPlayerModel::add_inviteRequestedEvent(System.Action`1<INetworkPlayer> value)
    void add_inviteRequestedEvent(System::Action_1<GlobalNamespace::INetworkPlayer*>* value);
    // public System.Void remove_inviteRequestedEvent(System.Action`1<INetworkPlayer> value)
    // Offset: 0x2058958
    // Implemented from: INetworkPlayerModel
    // Base method: System.Void INetworkPlayerModel::remove_inviteRequestedEvent(System.Action`1<INetworkPlayer> value)
    void remove_inviteRequestedEvent(System::Action_1<GlobalNamespace::INetworkPlayer*>* value);
    // public System.Boolean CreateParty(INetworkPlayerModelPartyConfig`1<T> config)
    // Offset: 0xFFFFFFFF
    // Implemented from: INetworkPlayerModel
    // Base method: System.Boolean INetworkPlayerModel::CreateParty(INetworkPlayerModelPartyConfig`1<T> config)
    template<class T>
    bool CreateParty(GlobalNamespace::INetworkPlayerModelPartyConfig_1<T>* config) {
      static_assert(std::is_base_of_v<GlobalNamespace::INetworkPlayerModel, std::remove_pointer_t<T>>);
      return THROW_UNLESS((il2cpp_utils::RunGenericMethod<bool>(this, "CreateParty", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, config)));
    }
    // public System.Void DestroyParty()
    // Offset: 0x20589FC
    // Implemented from: INetworkPlayerModel
    // Base method: System.Void INetworkPlayerModel::DestroyParty()
    void DestroyParty();
    // public System.Void Disconnect()
    // Offset: 0x2058A00
    // Implemented from: INetworkPlayerModel
    // Base method: System.Void INetworkPlayerModel::Disconnect()
    void Disconnect();
    // public System.Void SetServerFilter(GameplayServerFilter filter)
    // Offset: 0x2058A08
    // Implemented from: IUnifiedNetworkPlayerModel
    // Base method: System.Void IUnifiedNetworkPlayerModel::SetServerFilter(GameplayServerFilter filter)
    void SetServerFilter(GlobalNamespace::GameplayServerFilter filter);
    // public System.Void JoinMatchmaking(GameplayServerConfiguration configuration, System.String secret)
    // Offset: 0x2058A2C
    // Implemented from: IUnifiedNetworkPlayerModel
    // Base method: System.Void IUnifiedNetworkPlayerModel::JoinMatchmaking(GameplayServerConfiguration configuration, System.String secret)
    void JoinMatchmaking(GlobalNamespace::GameplayServerConfiguration configuration, ::Il2CppString* secret);
    // public System.Void ConnectToServerWithCode(System.String serverCode, System.String serverPassword)
    // Offset: 0x2058AA0
    // Implemented from: IUnifiedNetworkPlayerModel
    // Base method: System.Void IUnifiedNetworkPlayerModel::ConnectToServerWithCode(System.String serverCode, System.String serverPassword)
    void ConnectToServerWithCode(::Il2CppString* serverCode, ::Il2CppString* serverPassword);
    // public System.Void ResetMasterServerReachability()
    // Offset: 0x2058AA4
    // Implemented from: IUnifiedNetworkPlayerModel
    // Base method: System.Void IUnifiedNetworkPlayerModel::ResetMasterServerReachability()
    void ResetMasterServerReachability();
    // public System.Void .ctor()
    // Offset: 0x2058AA8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static MockNetworkPlayerModel* New_ctor();
  }; // MockNetworkPlayerModel
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MockNetworkPlayerModel*, "", "MockNetworkPlayerModel");
#pragma pack(pop)
