// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: BaseNetworkPlayerModel
#include "GlobalNamespace/BaseNetworkPlayerModel.hpp"
// Including type: IUnifiedNetworkPlayerModel
#include "GlobalNamespace/IUnifiedNetworkPlayerModel.hpp"
// Including type: GameplayServerFilter
#include "GlobalNamespace/GameplayServerFilter.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: PlatformNetworkPlayerModel
  class PlatformNetworkPlayerModel;
  // Forward declaring type: LocalNetworkPlayerModel
  class LocalNetworkPlayerModel;
  // Forward declaring type: IPlatformUserModel
  class IPlatformUserModel;
  // Forward declaring type: INetworkConfig
  class INetworkConfig;
  // Forward declaring type: IAuthenticationTokenProvider
  class IAuthenticationTokenProvider;
  // Skipping declaration: INetworkPlayerModel because it is already included!
  // Forward declaring type: INetworkPlayer
  class INetworkPlayer;
  // Forward declaring type: PartyMessageHandler
  class PartyMessageHandler;
  // Forward declaring type: MasterServerConnectionManager
  class MasterServerConnectionManager;
  // Forward declaring type: DiscoveryPolicy
  struct DiscoveryPolicy;
  // Forward declaring type: InvitePolicy
  struct InvitePolicy;
  // Forward declaring type: IConnectedPlayer
  class IConnectedPlayer;
  // Skipping declaration: GameplayServerConfiguration because it is already included!
  // Forward declaring type: DisconnectedReason
  struct DisconnectedReason;
  // Forward declaring type: ConnectionFailedReason
  struct ConnectionFailedReason;
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
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: IPEndPoint
  class IPEndPoint;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x130
  // Autogenerated type: UnifiedNetworkPlayerModel
  // [] Offset: FFFFFFFF
  class UnifiedNetworkPlayerModel : public GlobalNamespace::BaseNetworkPlayerModel/*, public GlobalNamespace::IUnifiedNetworkPlayerModel*/ {
    public:
    // Nested type: GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer
    class UnifiedNetworkPlayer;
    // Nested type: GlobalNamespace::UnifiedNetworkPlayerModel::CreatePartyConfig
    class CreatePartyConfig;
    // Nested type: GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkServer
    class UnifiedNetworkServer;
    // Nested type: GlobalNamespace::UnifiedNetworkPlayerModel::$get_friends$d__80
    class $get_friends$d__80;
    // Nested type: GlobalNamespace::UnifiedNetworkPlayerModel::$get_localNetworkPlayers$d__82
    class $get_localNetworkPlayers$d__82;
    // Nested type: GlobalNamespace::UnifiedNetworkPlayerModel::$Start$d__89
    struct $Start$d__89;
    // Nested type: GlobalNamespace::UnifiedNetworkPlayerModel::$GetPartyPlayers$d__91
    class $GetPartyPlayers$d__91;
    // Nested type: GlobalNamespace::UnifiedNetworkPlayerModel::$GetOtherPlayers$d__92
    class $GetOtherPlayers$d__92;
    // Nested type: GlobalNamespace::UnifiedNetworkPlayerModel::$$c__DisplayClass94_0
    class $$c__DisplayClass94_0;
    // Nested type: GlobalNamespace::UnifiedNetworkPlayerModel::$$c
    class $$c;
    // [InjectAttribute] Offset: 0xDC47DC
    // private readonly PlatformNetworkPlayerModel _platformNetworkPlayerModel
    // Size: 0x8
    // Offset: 0x78
    GlobalNamespace::PlatformNetworkPlayerModel* platformNetworkPlayerModel;
    // Field size check
    static_assert(sizeof(GlobalNamespace::PlatformNetworkPlayerModel*) == 0x8);
    // [InjectAttribute] Offset: 0xDC47EC
    // private readonly LocalNetworkPlayerModel _localNetworkPlayerModel
    // Size: 0x8
    // Offset: 0x80
    GlobalNamespace::LocalNetworkPlayerModel* localNetworkPlayerModel;
    // Field size check
    static_assert(sizeof(GlobalNamespace::LocalNetworkPlayerModel*) == 0x8);
    // [InjectAttribute] Offset: 0xDC47FC
    // private readonly IPlatformUserModel _platformUserModel
    // Size: 0x8
    // Offset: 0x88
    GlobalNamespace::IPlatformUserModel* platformUserModel;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IPlatformUserModel*) == 0x8);
    // [InjectAttribute] Offset: 0xDC480C
    // private readonly INetworkConfig _networkConfig
    // Size: 0x8
    // Offset: 0x90
    GlobalNamespace::INetworkConfig* networkConfig;
    // Field size check
    static_assert(sizeof(GlobalNamespace::INetworkConfig*) == 0x8);
    // private IAuthenticationTokenProvider _authenticationTokenProvider
    // Size: 0x8
    // Offset: 0x98
    GlobalNamespace::IAuthenticationTokenProvider* authenticationTokenProvider;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IAuthenticationTokenProvider*) == 0x8);
    // private UnifiedNetworkPlayerModel/UnifiedNetworkPlayer _localPlayer
    // Size: 0x8
    // Offset: 0xA0
    GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer* localPlayer;
    // Field size check
    static_assert(sizeof(GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer*) == 0x8);
    // private System.Boolean _networkingFailed
    // Size: 0x1
    // Offset: 0xA8
    bool networkingFailed;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _masterServerUnreachable
    // Size: 0x1
    // Offset: 0xA9
    bool masterServerUnreachable;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: masterServerUnreachable and: currentPlayerCount
    char __padding7[0x2] = {};
    // private System.Int32 _currentPlayerCount
    // Size: 0x4
    // Offset: 0xAC
    int currentPlayerCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // [CompilerGeneratedAttribute] Offset: 0xDC481C
    // private System.Action`1<System.Int32> partySizeChangedEvent
    // Size: 0x8
    // Offset: 0xB0
    System::Action_1<int>* partySizeChangedEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<int>*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDC482C
    // private System.Action partyRefreshingEvent
    // Size: 0x8
    // Offset: 0xB8
    System::Action* partyRefreshingEvent;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDC483C
    // private System.Action`1<INetworkPlayerModel> partyChangedEvent
    // Size: 0x8
    // Offset: 0xC0
    System::Action_1<GlobalNamespace::INetworkPlayerModel*>* partyChangedEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<GlobalNamespace::INetworkPlayerModel*>*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDC484C
    // private System.Action`1<INetworkPlayer> joinRequestedEvent
    // Size: 0x8
    // Offset: 0xC8
    System::Action_1<GlobalNamespace::INetworkPlayer*>* joinRequestedEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<GlobalNamespace::INetworkPlayer*>*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDC485C
    // private System.Action`1<INetworkPlayer> inviteRequestedEvent
    // Size: 0x8
    // Offset: 0xD0
    System::Action_1<GlobalNamespace::INetworkPlayer*>* inviteRequestedEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<GlobalNamespace::INetworkPlayer*>*) == 0x8);
    // private readonly System.Collections.Generic.List`1<UnifiedNetworkPlayerModel/UnifiedNetworkPlayer> _partyPlayers
    // Size: 0x8
    // Offset: 0xD8
    System::Collections::Generic::List_1<GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer*>* partyPlayers;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer*>*) == 0x8);
    // private readonly System.Collections.Generic.List`1<UnifiedNetworkPlayerModel/UnifiedNetworkServer> _publicServers
    // Size: 0x8
    // Offset: 0xE0
    System::Collections::Generic::List_1<GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkServer*>* publicServers;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkServer*>*) == 0x8);
    // private PartyMessageHandler _partyMessageHandler
    // Size: 0x8
    // Offset: 0xE8
    GlobalNamespace::PartyMessageHandler* partyMessageHandler;
    // Field size check
    static_assert(sizeof(GlobalNamespace::PartyMessageHandler*) == 0x8);
    // private PartyMessageHandler _friendPartyMessageHandler
    // Size: 0x8
    // Offset: 0xF0
    GlobalNamespace::PartyMessageHandler* friendPartyMessageHandler;
    // Field size check
    static_assert(sizeof(GlobalNamespace::PartyMessageHandler*) == 0x8);
    // private PartyMessageHandler _localNetworkPartyMessageHandler
    // Size: 0x8
    // Offset: 0xF8
    GlobalNamespace::PartyMessageHandler* localNetworkPartyMessageHandler;
    // Field size check
    static_assert(sizeof(GlobalNamespace::PartyMessageHandler*) == 0x8);
    // private System.Single _lastServerRefresh
    // Size: 0x4
    // Offset: 0x100
    float lastServerRefresh;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Boolean _isRefreshing
    // Size: 0x1
    // Offset: 0x104
    bool isRefreshing;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _filterChanged
    // Size: 0x1
    // Offset: 0x105
    bool filterChanged;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: filterChanged and: serverFilter
    char __padding21[0x2] = {};
    // private GameplayServerFilter _serverFilter
    // Size: 0x28
    // Offset: 0x108
    GlobalNamespace::GameplayServerFilter serverFilter;
    // Field size check
    static_assert(sizeof(GlobalNamespace::GameplayServerFilter) == 0x28);
    // Creating value type constructor for type: UnifiedNetworkPlayerModel
    UnifiedNetworkPlayerModel(GlobalNamespace::PlatformNetworkPlayerModel* platformNetworkPlayerModel_ = {}, GlobalNamespace::LocalNetworkPlayerModel* localNetworkPlayerModel_ = {}, GlobalNamespace::IPlatformUserModel* platformUserModel_ = {}, GlobalNamespace::INetworkConfig* networkConfig_ = {}, GlobalNamespace::IAuthenticationTokenProvider* authenticationTokenProvider_ = {}, GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer* localPlayer_ = {}, bool networkingFailed_ = {}, bool masterServerUnreachable_ = {}, int currentPlayerCount_ = {}, System::Action_1<int>* partySizeChangedEvent_ = {}, System::Action* partyRefreshingEvent_ = {}, System::Action_1<GlobalNamespace::INetworkPlayerModel*>* partyChangedEvent_ = {}, System::Action_1<GlobalNamespace::INetworkPlayer*>* joinRequestedEvent_ = {}, System::Action_1<GlobalNamespace::INetworkPlayer*>* inviteRequestedEvent_ = {}, System::Collections::Generic::List_1<GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer*>* partyPlayers_ = {}, System::Collections::Generic::List_1<GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkServer*>* publicServers_ = {}, GlobalNamespace::PartyMessageHandler* partyMessageHandler_ = {}, GlobalNamespace::PartyMessageHandler* friendPartyMessageHandler_ = {}, GlobalNamespace::PartyMessageHandler* localNetworkPartyMessageHandler_ = {}, float lastServerRefresh_ = {}, bool isRefreshing_ = {}, bool filterChanged_ = {}, GlobalNamespace::GameplayServerFilter serverFilter_ = {}) noexcept : platformNetworkPlayerModel{platformNetworkPlayerModel_}, localNetworkPlayerModel{localNetworkPlayerModel_}, platformUserModel{platformUserModel_}, networkConfig{networkConfig_}, authenticationTokenProvider{authenticationTokenProvider_}, localPlayer{localPlayer_}, networkingFailed{networkingFailed_}, masterServerUnreachable{masterServerUnreachable_}, currentPlayerCount{currentPlayerCount_}, partySizeChangedEvent{partySizeChangedEvent_}, partyRefreshingEvent{partyRefreshingEvent_}, partyChangedEvent{partyChangedEvent_}, joinRequestedEvent{joinRequestedEvent_}, inviteRequestedEvent{inviteRequestedEvent_}, partyPlayers{partyPlayers_}, publicServers{publicServers_}, partyMessageHandler{partyMessageHandler_}, friendPartyMessageHandler{friendPartyMessageHandler_}, localNetworkPartyMessageHandler{localNetworkPartyMessageHandler_}, lastServerRefresh{lastServerRefresh_}, isRefreshing{isRefreshing_}, filterChanged{filterChanged_}, serverFilter{serverFilter_} {}
    // Creating interface conversion operator: operator GlobalNamespace::IUnifiedNetworkPlayerModel
    operator GlobalNamespace::IUnifiedNetworkPlayerModel() noexcept {
      return *reinterpret_cast<GlobalNamespace::IUnifiedNetworkPlayerModel*>(this);
    }
    // static field const value: static private System.Single kServerRefreshFrequency
    static constexpr const float kServerRefreshFrequency = 10;
    // Get static field: static private System.Single kServerRefreshFrequency
    static float _get_kServerRefreshFrequency();
    // Set static field: static private System.Single kServerRefreshFrequency
    static void _set_kServerRefreshFrequency(float value);
    // static field const value: static private System.Single kServerTimeoutPeriod
    static constexpr const float kServerTimeoutPeriod = 21;
    // Get static field: static private System.Single kServerTimeoutPeriod
    static float _get_kServerTimeoutPeriod();
    // Set static field: static private System.Single kServerTimeoutPeriod
    static void _set_kServerTimeoutPeriod(float value);
    // public System.Boolean get_hasNetworkingFailed()
    // Offset: 0xFF7D0C
    bool get_hasNetworkingFailed();
    // public System.Boolean get_isMasterServerReachable()
    // Offset: 0xFF7D14
    bool get_isMasterServerReachable();
    // private MasterServerConnectionManager get_masterServerConnectionManager()
    // Offset: 0xFF7D24
    GlobalNamespace::MasterServerConnectionManager* get_masterServerConnectionManager();
    // public System.Net.IPEndPoint get_endPoint()
    // Offset: 0xFF7D7C
    System::Net::IPEndPoint* get_endPoint();
    // public System.String get_serverName()
    // Offset: 0xFF7E08
    ::Il2CppString* get_serverName();
    // public System.String get_password()
    // Offset: 0xFF7E24
    ::Il2CppString* get_password();
    // public System.String get_serverUserId()
    // Offset: 0xFF7E40
    ::Il2CppString* get_serverUserId();
    // public System.String get_serverUserName()
    // Offset: 0xFF7E5C
    ::Il2CppString* get_serverUserName();
    // public DiscoveryPolicy get_discoveryPolicy()
    // Offset: 0xFF7E78
    GlobalNamespace::DiscoveryPolicy get_discoveryPolicy();
    // public InvitePolicy get_invitePolicy()
    // Offset: 0xFF7E94
    GlobalNamespace::InvitePolicy get_invitePolicy();
    // public System.Collections.Generic.IEnumerable`1<INetworkPlayer> get_friends()
    // Offset: 0xFF7F58
    System::Collections::Generic::IEnumerable_1<GlobalNamespace::INetworkPlayer*>* get_friends();
    // public System.Boolean get_enableFriends()
    // Offset: 0xFF80E0
    bool get_enableFriends();
    // public System.Void set_enableFriends(System.Boolean value)
    // Offset: 0xFF8104
    void set_enableFriends(bool value);
    // private System.Void Refresh()
    // Offset: 0xFF8690
    void Refresh();
    // private System.Void RefreshParties()
    // Offset: 0xFF8144
    void RefreshParties();
    // private System.Void HandlePlayersChanged()
    // Offset: 0xFF8B78
    void HandlePlayersChanged();
    // private System.Void HandleInviteRequested(INetworkPlayer player)
    // Offset: 0xFF8CFC
    void HandleInviteRequested(GlobalNamespace::INetworkPlayer* player);
    // private System.Void HandleJoinRequested(INetworkPlayer player)
    // Offset: 0xFF8D70
    void HandleJoinRequested(GlobalNamespace::INetworkPlayer* player);
    // private System.Void HandlePartyChanged(INetworkPlayerModel playerModel)
    // Offset: 0xFF8DE4
    void HandlePartyChanged(GlobalNamespace::INetworkPlayerModel* playerModel);
    // private System.Void HandleLocalPlayerConnnected(IConnectedPlayer player)
    // Offset: 0xFF8E48
    void HandleLocalPlayerConnnected(GlobalNamespace::IConnectedPlayer* player);
    // private System.Void HandleFriendConnected(IConnectedPlayer player)
    // Offset: 0xFF8FE0
    void HandleFriendConnected(GlobalNamespace::IConnectedPlayer* player);
    // private System.Void HandleLocalPlayerConnectToMasterServer(System.Net.IPEndPoint endPoint, System.String serverName, System.String password, System.String secret, System.String serverUserId, System.String serverUserName, DiscoveryPolicy discoveryPolicy, InvitePolicy invitePolicy, System.Int32 maxPlayerCount, GameplayServerConfiguration configuration)
    // Offset: 0xFF9178
    void HandleLocalPlayerConnectToMasterServer(System::Net::IPEndPoint* endPoint, ::Il2CppString* serverName, ::Il2CppString* password, ::Il2CppString* secret, ::Il2CppString* serverUserId, ::Il2CppString* serverUserName, GlobalNamespace::DiscoveryPolicy discoveryPolicy, GlobalNamespace::InvitePolicy invitePolicy, int maxPlayerCount, GlobalNamespace::GameplayServerConfiguration configuration);
    // private System.Void HandleFriendConnectToMasterServer(System.Net.IPEndPoint endPoint, System.String serverName, System.String password, System.String secret, System.String serverUserId, System.String serverUserName, DiscoveryPolicy discoveryPolicy, InvitePolicy invitePolicy, System.Int32 maxPlayerCount, GameplayServerConfiguration configuration)
    // Offset: 0xFF938C
    void HandleFriendConnectToMasterServer(System::Net::IPEndPoint* endPoint, ::Il2CppString* serverName, ::Il2CppString* password, ::Il2CppString* secret, ::Il2CppString* serverUserId, ::Il2CppString* serverUserName, GlobalNamespace::DiscoveryPolicy discoveryPolicy, GlobalNamespace::InvitePolicy invitePolicy, int maxPlayerCount, GlobalNamespace::GameplayServerConfiguration configuration);
    // private System.Void HandleServerStatusChanged(System.String serverName, System.String password, DiscoveryPolicy discoveryPolicy, InvitePolicy invitePolicy, System.Int32 maxPlayerCount, GameplayServerConfiguration configuration)
    // Offset: 0xFF95A0
    void HandleServerStatusChanged(::Il2CppString* serverName, ::Il2CppString* password, GlobalNamespace::DiscoveryPolicy discoveryPolicy, GlobalNamespace::InvitePolicy invitePolicy, int maxPlayerCount, GlobalNamespace::GameplayServerConfiguration configuration);
    // private System.Void HandleConnectedPlayerManagerCreated(INetworkPlayerModel networkPlayerModel)
    // Offset: 0xFF9634
    void HandleConnectedPlayerManagerCreated(GlobalNamespace::INetworkPlayerModel* networkPlayerModel);
    // private System.Void HandleConnectedPlayerManagerDestroyed(INetworkPlayerModel networkPlayerModel)
    // Offset: 0xFF9930
    void HandleConnectedPlayerManagerDestroyed(GlobalNamespace::INetworkPlayerModel* networkPlayerModel);
    // public System.Void ConnectToServerWithSecret(System.String serverSecret)
    // Offset: 0xFF9D0C
    void ConnectToServerWithSecret(::Il2CppString* serverSecret);
    // private UnifiedNetworkPlayerModel/UnifiedNetworkPlayer GetPlayer(System.String userId)
    // Offset: 0xFFA7E0
    GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayer* GetPlayer(::Il2CppString* userId);
    // private UnifiedNetworkPlayerModel/UnifiedNetworkServer GetServer(System.String code)
    // Offset: 0xFFAB64
    GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkServer* GetServer(::Il2CppString* code);
    // public override System.Void add_partySizeChangedEvent(System.Action`1<System.Int32> value)
    // Offset: 0xFF7680
    // Implemented from: BaseNetworkPlayerModel
    // Base method: System.Void BaseNetworkPlayerModel::add_partySizeChangedEvent(System.Action`1<System.Int32> value)
    void add_partySizeChangedEvent(System::Action_1<int>* value);
    // public override System.Void remove_partySizeChangedEvent(System.Action`1<System.Int32> value)
    // Offset: 0xFF7724
    // Implemented from: BaseNetworkPlayerModel
    // Base method: System.Void BaseNetworkPlayerModel::remove_partySizeChangedEvent(System.Action`1<System.Int32> value)
    void remove_partySizeChangedEvent(System::Action_1<int>* value);
    // public System.Void add_partyRefreshingEvent(System.Action value)
    // Offset: 0xFF77C8
    // Implemented from: IUnifiedNetworkPlayerModel
    // Base method: System.Void IUnifiedNetworkPlayerModel::add_partyRefreshingEvent(System.Action value)
    void add_partyRefreshingEvent(System::Action* value);
    // public System.Void remove_partyRefreshingEvent(System.Action value)
    // Offset: 0xFF786C
    // Implemented from: IUnifiedNetworkPlayerModel
    // Base method: System.Void IUnifiedNetworkPlayerModel::remove_partyRefreshingEvent(System.Action value)
    void remove_partyRefreshingEvent(System::Action* value);
    // public override System.Void add_partyChangedEvent(System.Action`1<INetworkPlayerModel> value)
    // Offset: 0xFF7910
    // Implemented from: BaseNetworkPlayerModel
    // Base method: System.Void BaseNetworkPlayerModel::add_partyChangedEvent(System.Action`1<INetworkPlayerModel> value)
    void add_partyChangedEvent(System::Action_1<GlobalNamespace::INetworkPlayerModel*>* value);
    // public override System.Void remove_partyChangedEvent(System.Action`1<INetworkPlayerModel> value)
    // Offset: 0xFF79B4
    // Implemented from: BaseNetworkPlayerModel
    // Base method: System.Void BaseNetworkPlayerModel::remove_partyChangedEvent(System.Action`1<INetworkPlayerModel> value)
    void remove_partyChangedEvent(System::Action_1<GlobalNamespace::INetworkPlayerModel*>* value);
    // public override System.Void add_joinRequestedEvent(System.Action`1<INetworkPlayer> value)
    // Offset: 0xFF7A58
    // Implemented from: BaseNetworkPlayerModel
    // Base method: System.Void BaseNetworkPlayerModel::add_joinRequestedEvent(System.Action`1<INetworkPlayer> value)
    void add_joinRequestedEvent(System::Action_1<GlobalNamespace::INetworkPlayer*>* value);
    // public override System.Void remove_joinRequestedEvent(System.Action`1<INetworkPlayer> value)
    // Offset: 0xFF7AFC
    // Implemented from: BaseNetworkPlayerModel
    // Base method: System.Void BaseNetworkPlayerModel::remove_joinRequestedEvent(System.Action`1<INetworkPlayer> value)
    void remove_joinRequestedEvent(System::Action_1<GlobalNamespace::INetworkPlayer*>* value);
    // public override System.Void add_inviteRequestedEvent(System.Action`1<INetworkPlayer> value)
    // Offset: 0xFF7BA0
    // Implemented from: BaseNetworkPlayerModel
    // Base method: System.Void BaseNetworkPlayerModel::add_inviteRequestedEvent(System.Action`1<INetworkPlayer> value)
    void add_inviteRequestedEvent(System::Action_1<GlobalNamespace::INetworkPlayer*>* value);
    // public override System.Void remove_inviteRequestedEvent(System.Action`1<INetworkPlayer> value)
    // Offset: 0xFF7C44
    // Implemented from: BaseNetworkPlayerModel
    // Base method: System.Void BaseNetworkPlayerModel::remove_inviteRequestedEvent(System.Action`1<INetworkPlayer> value)
    void remove_inviteRequestedEvent(System::Action_1<GlobalNamespace::INetworkPlayer*>* value);
    // public override System.Boolean get_localPlayerIsPartyOwner()
    // Offset: 0xFF7CE8
    // Implemented from: BaseNetworkPlayerModel
    // Base method: System.Boolean BaseNetworkPlayerModel::get_localPlayerIsPartyOwner()
    bool get_localPlayerIsPartyOwner();
    // public override INetworkPlayer get_localPlayer()
    // Offset: 0xFF7D04
    // Implemented from: BaseNetworkPlayerModel
    // Base method: INetworkPlayer BaseNetworkPlayerModel::get_localPlayer()
    GlobalNamespace::INetworkPlayer* get_localPlayer();
    // public System.String get_userId()
    // Offset: 0xFF7D98
    // Implemented from: IUnifiedNetworkPlayerModel
    // Base method: System.String IUnifiedNetworkPlayerModel::get_userId()
    ::Il2CppString* get_userId();
    // public System.String get_userName()
    // Offset: 0xFF7DB0
    // Implemented from: IUnifiedNetworkPlayerModel
    // Base method: System.String IUnifiedNetworkPlayerModel::get_userName()
    ::Il2CppString* get_userName();
    // public System.String get_secret()
    // Offset: 0xFF7DC8
    // Implemented from: IUnifiedNetworkPlayerModel
    // Base method: System.String IUnifiedNetworkPlayerModel::get_secret()
    ::Il2CppString* get_secret();
    // public System.String get_code()
    // Offset: 0xFF7DEC
    // Implemented from: IUnifiedNetworkPlayerModel
    // Base method: System.String IUnifiedNetworkPlayerModel::get_code()
    ::Il2CppString* get_code();
    // public override System.Int32 get_maxPartySize()
    // Offset: 0xFF7EB0
    // Implemented from: BaseNetworkPlayerModel
    // Base method: System.Int32 BaseNetworkPlayerModel::get_maxPartySize()
    int get_maxPartySize();
    // public override GameplayServerConfiguration get_configuration()
    // Offset: 0xFF7EE4
    // Implemented from: BaseNetworkPlayerModel
    // Base method: GameplayServerConfiguration BaseNetworkPlayerModel::get_configuration()
    GlobalNamespace::GameplayServerConfiguration get_configuration();
    // public GameplayServerFilter get_serverFilter()
    // Offset: 0xFF7F28
    // Implemented from: IUnifiedNetworkPlayerModel
    // Base method: GameplayServerFilter IUnifiedNetworkPlayerModel::get_serverFilter()
    GlobalNamespace::GameplayServerFilter get_serverFilter();
    // public override System.Int32 get_currentPartySize()
    // Offset: 0xFF7F48
    // Implemented from: BaseNetworkPlayerModel
    // Base method: System.Int32 BaseNetworkPlayerModel::get_currentPartySize()
    int get_currentPartySize();
    // public System.Collections.Generic.IEnumerable`1<INetworkPlayer> get_publicServers()
    // Offset: 0xFF7F50
    // Implemented from: IUnifiedNetworkPlayerModel
    // Base method: System.Collections.Generic.IEnumerable`1<INetworkPlayer> IUnifiedNetworkPlayerModel::get_publicServers()
    System::Collections::Generic::IEnumerable_1<GlobalNamespace::INetworkPlayer*>* get_publicServers();
    // public System.Collections.Generic.IEnumerable`1<INetworkPlayer> get_localNetworkPlayers()
    // Offset: 0xFF801C
    // Implemented from: IUnifiedNetworkPlayerModel
    // Base method: System.Collections.Generic.IEnumerable`1<INetworkPlayer> IUnifiedNetworkPlayerModel::get_localNetworkPlayers()
    System::Collections::Generic::IEnumerable_1<GlobalNamespace::INetworkPlayer*>* get_localNetworkPlayers();
    // public System.Boolean get_enableLocalNetwork()
    // Offset: 0xFF83D8
    // Implemented from: IUnifiedNetworkPlayerModel
    // Base method: System.Boolean IUnifiedNetworkPlayerModel::get_enableLocalNetwork()
    bool get_enableLocalNetwork();
    // public System.Void set_enableLocalNetwork(System.Boolean value)
    // Offset: 0xFF83FC
    // Implemented from: IUnifiedNetworkPlayerModel
    // Base method: System.Void IUnifiedNetworkPlayerModel::set_enableLocalNetwork(System.Boolean value)
    void set_enableLocalNetwork(bool value);
    // protected override System.Void Start()
    // Offset: 0xFF843C
    // Implemented from: StandaloneMonobehavior
    // Base method: System.Void StandaloneMonobehavior::Start()
    void Start();
    // protected override System.Void Update()
    // Offset: 0xFF8518
    // Implemented from: BaseNetworkPlayerModel
    // Base method: System.Void BaseNetworkPlayerModel::Update()
    void Update();
    // protected override System.Collections.Generic.IEnumerable`1<INetworkPlayer> GetPartyPlayers()
    // Offset: 0xFF8978
    // Implemented from: BaseNetworkPlayerModel
    // Base method: System.Collections.Generic.IEnumerable`1<INetworkPlayer> BaseNetworkPlayerModel::GetPartyPlayers()
    System::Collections::Generic::IEnumerable_1<GlobalNamespace::INetworkPlayer*>* GetPartyPlayers();
    // protected override System.Collections.Generic.IEnumerable`1<INetworkPlayer> GetOtherPlayers()
    // Offset: 0xFF8A3C
    // Implemented from: BaseNetworkPlayerModel
    // Base method: System.Collections.Generic.IEnumerable`1<INetworkPlayer> BaseNetworkPlayerModel::GetOtherPlayers()
    System::Collections::Generic::IEnumerable_1<GlobalNamespace::INetworkPlayer*>* GetOtherPlayers();
    // public System.Void SetServerFilter(GameplayServerFilter filter)
    // Offset: 0xFF8B00
    // Implemented from: IUnifiedNetworkPlayerModel
    // Base method: System.Void IUnifiedNetworkPlayerModel::SetServerFilter(GameplayServerFilter filter)
    void SetServerFilter(GlobalNamespace::GameplayServerFilter filter);
    // public System.Void ResetMasterServerReachability()
    // Offset: 0xFF99C0
    // Implemented from: IUnifiedNetworkPlayerModel
    // Base method: System.Void IUnifiedNetworkPlayerModel::ResetMasterServerReachability()
    void ResetMasterServerReachability();
    // public override System.Void Disconnect()
    // Offset: 0xFF99D8
    // Implemented from: BaseNetworkPlayerModel
    // Base method: System.Void BaseNetworkPlayerModel::Disconnect()
    void Disconnect();
    // protected override System.Void Disconnected(DisconnectedReason disconnectedReason)
    // Offset: 0xFF9A0C
    // Implemented from: BaseNetworkPlayerModel
    // Base method: System.Void BaseNetworkPlayerModel::Disconnected(DisconnectedReason disconnectedReason)
    void Disconnected(GlobalNamespace::DisconnectedReason disconnectedReason);
    // protected override System.Void ConnectionFailed(ConnectionFailedReason reason)
    // Offset: 0xFF9A48
    // Implemented from: BaseNetworkPlayerModel
    // Base method: System.Void BaseNetworkPlayerModel::ConnectionFailed(ConnectionFailedReason reason)
    void ConnectionFailed(GlobalNamespace::ConnectionFailedReason reason);
    // protected override System.Void ConnectedPlayerManagerChanged()
    // Offset: 0xFF9A68
    // Implemented from: BaseNetworkPlayerModel
    // Base method: System.Void BaseNetworkPlayerModel::ConnectedPlayerManagerChanged()
    void ConnectedPlayerManagerChanged();
    // public override System.Boolean CreateParty(INetworkPlayerModelPartyConfig`1<T> createConfig)
    // Offset: 0xFFFFFFFF
    // Implemented from: BaseNetworkPlayerModel
    // Base method: System.Boolean BaseNetworkPlayerModel::CreateParty(INetworkPlayerModelPartyConfig`1<T> createConfig)
    template<class T>
    bool CreateParty(GlobalNamespace::INetworkPlayerModelPartyConfig_1<T>* createConfig) {
      static_assert(std::is_base_of_v<GlobalNamespace::INetworkPlayerModel, std::remove_pointer_t<T>>);
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::UnifiedNetworkPlayerModel::CreateParty");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "CreateParty", std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::il2cpp_utils::ExtractTypes(createConfig)));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___generic__method, createConfig);
    }
    // public override System.Void DestroyParty()
    // Offset: 0xFF9B60
    // Implemented from: BaseNetworkPlayerModel
    // Base method: System.Void BaseNetworkPlayerModel::DestroyParty()
    void DestroyParty();
    // public System.Void ConnectToServerWithCode(System.String serverCode, System.String serverPassword)
    // Offset: 0xFF9B94
    // Implemented from: IUnifiedNetworkPlayerModel
    // Base method: System.Void IUnifiedNetworkPlayerModel::ConnectToServerWithCode(System.String serverCode, System.String serverPassword)
    void ConnectToServerWithCode(::Il2CppString* serverCode, ::Il2CppString* serverPassword);
    // public System.Void JoinMatchmaking(GameplayServerConfiguration configuration, System.String secret)
    // Offset: 0xFF9E68
    // Implemented from: IUnifiedNetworkPlayerModel
    // Base method: System.Void IUnifiedNetworkPlayerModel::JoinMatchmaking(GameplayServerConfiguration configuration, System.String secret)
    void JoinMatchmaking(GlobalNamespace::GameplayServerConfiguration configuration, ::Il2CppString* secret);
    // protected override System.Void PlayerConnected(IConnectedPlayer player)
    // Offset: 0xFF9FE0
    // Implemented from: BaseNetworkPlayerModel
    // Base method: System.Void BaseNetworkPlayerModel::PlayerConnected(IConnectedPlayer player)
    void PlayerConnected(GlobalNamespace::IConnectedPlayer* player);
    // protected override System.Void PlayerDisconnected(IConnectedPlayer player)
    // Offset: 0xFFA3D8
    // Implemented from: BaseNetworkPlayerModel
    // Base method: System.Void BaseNetworkPlayerModel::PlayerDisconnected(IConnectedPlayer player)
    void PlayerDisconnected(GlobalNamespace::IConnectedPlayer* player);
    // protected override System.Void PlayerStateChanged(IConnectedPlayer connectedPlayer)
    // Offset: 0xFFA51C
    // Implemented from: BaseNetworkPlayerModel
    // Base method: System.Void BaseNetworkPlayerModel::PlayerStateChanged(IConnectedPlayer connectedPlayer)
    void PlayerStateChanged(GlobalNamespace::IConnectedPlayer* connectedPlayer);
    // protected override System.Void PlayerOrderChanged(IConnectedPlayer connectedPlayer)
    // Offset: 0xFFA8C0
    // Implemented from: BaseNetworkPlayerModel
    // Base method: System.Void BaseNetworkPlayerModel::PlayerOrderChanged(IConnectedPlayer connectedPlayer)
    void PlayerOrderChanged(GlobalNamespace::IConnectedPlayer* connectedPlayer);
    // public System.Void .ctor()
    // Offset: 0xFFAC44
    // Implemented from: BaseNetworkPlayerModel
    // Base method: System.Void BaseNetworkPlayerModel::.ctor()
    // Base method: System.Void StandaloneMonobehavior::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UnifiedNetworkPlayerModel* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::UnifiedNetworkPlayerModel::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UnifiedNetworkPlayerModel*, creationType>()));
    }
  }; // UnifiedNetworkPlayerModel
  static check_size<sizeof(UnifiedNetworkPlayerModel), 264 + sizeof(GlobalNamespace::GameplayServerFilter)> __GlobalNamespace_UnifiedNetworkPlayerModelSizeCheck;
  static_assert(sizeof(UnifiedNetworkPlayerModel) == 0x130);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::UnifiedNetworkPlayerModel*, "", "UnifiedNetworkPlayerModel");
#pragma pack(pop)
