// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: IUnifiedNetworkPlayerModel
#include "GlobalNamespace/IUnifiedNetworkPlayerModel.hpp"
// Including type: GameplayServerConfiguration
#include "GlobalNamespace/GameplayServerConfiguration.hpp"
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
  // Forward declaring type: MockPlayersModel
  class MockPlayersModel;
  // Forward declaring type: MockMultiplayerSessionManager
  class MockMultiplayerSessionManager;
  // Forward declaring type: ConnectedPlayerManager
  class ConnectedPlayerManager;
  // Skipping declaration: INetworkPlayerModel because it is already included!
  // Forward declaring type: INetworkPlayer
  class INetworkPlayer;
  // Forward declaring type: DiscoveryPolicy
  struct DiscoveryPolicy;
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
  // Size: 0xB8
  #pragma pack(push, 1)
  // Autogenerated type: MockNetworkPlayerModel
  class MockNetworkPlayerModel : public ::Il2CppObject/*, public GlobalNamespace::IUnifiedNetworkPlayerModel*/ {
    public:
    // [InjectAttribute] Offset: 0xE1D73C
    // private readonly MockPlayersModel _playersModel
    // Size: 0x8
    // Offset: 0x10
    GlobalNamespace::MockPlayersModel* playersModel;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MockPlayersModel*) == 0x8);
    // [InjectAttribute] Offset: 0xE1D74C
    // private readonly MockMultiplayerSessionManager _multiplayerSessionManager
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::MockMultiplayerSessionManager* multiplayerSessionManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MockMultiplayerSessionManager*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xE1D75C
    // private System.Boolean <discoveryEnabled>k__BackingField
    // Size: 0x1
    // Offset: 0x20
    bool discoveryEnabled;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // [CompilerGeneratedAttribute] Offset: 0xE1D76C
    // private readonly System.Boolean <localPlayerIsPartyOwner>k__BackingField
    // Size: 0x1
    // Offset: 0x21
    bool localPlayerIsPartyOwner;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: localPlayerIsPartyOwner and: maxPartySize
    char __padding3[0x2] = {};
    // [CompilerGeneratedAttribute] Offset: 0xE1D77C
    // private System.Int32 <maxPartySize>k__BackingField
    // Size: 0x4
    // Offset: 0x24
    int maxPartySize;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // [CompilerGeneratedAttribute] Offset: 0xE1D78C
    // private GameplayServerConfiguration <configuration>k__BackingField
    // Size: 0x18
    // Offset: 0x28
    GlobalNamespace::GameplayServerConfiguration configuration;
    // Field size check
    static_assert(sizeof(GlobalNamespace::GameplayServerConfiguration) == 0x18);
    // [CompilerGeneratedAttribute] Offset: 0xE1D79C
    // private readonly System.Int32 <currentPartySize>k__BackingField
    // Size: 0x4
    // Offset: 0x40
    int currentPartySize;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: currentPartySize and: connectedPlayerManager
    char __padding6[0x4] = {};
    // [CompilerGeneratedAttribute] Offset: 0xE1D7AC
    // private readonly ConnectedPlayerManager <connectedPlayerManager>k__BackingField
    // Size: 0x8
    // Offset: 0x48
    GlobalNamespace::ConnectedPlayerManager* connectedPlayerManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ConnectedPlayerManager*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xE1D7BC
    // private System.Boolean <enableLocalNetwork>k__BackingField
    // Size: 0x1
    // Offset: 0x50
    bool enableLocalNetwork;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: enableLocalNetwork and: serverFilter
    char __padding8[0x7] = {};
    // [CompilerGeneratedAttribute] Offset: 0xE1D7CC
    // private GameplayServerFilter <serverFilter>k__BackingField
    // Size: 0x28
    // Offset: 0x58
    GlobalNamespace::GameplayServerFilter serverFilter;
    // Field size check
    static_assert(sizeof(GlobalNamespace::GameplayServerFilter) == 0x28);
    // [CompilerGeneratedAttribute] Offset: 0xE1D7DC
    // private System.Action`1<INetworkPlayerModel> connectedPlayerManagerCreatedEvent
    // Size: 0x8
    // Offset: 0x80
    System::Action_1<GlobalNamespace::INetworkPlayerModel*>* connectedPlayerManagerCreatedEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<GlobalNamespace::INetworkPlayerModel*>*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xE1D7EC
    // private System.Action`1<INetworkPlayerModel> connectedPlayerManagerDestroyedEvent
    // Size: 0x8
    // Offset: 0x88
    System::Action_1<GlobalNamespace::INetworkPlayerModel*>* connectedPlayerManagerDestroyedEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<GlobalNamespace::INetworkPlayerModel*>*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xE1D7FC
    // private System.Action partyRefreshingEvent
    // Size: 0x8
    // Offset: 0x90
    System::Action* partyRefreshingEvent;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xE1D80C
    // private System.Action`1<INetworkPlayerModel> partyChangedEvent
    // Size: 0x8
    // Offset: 0x98
    System::Action_1<GlobalNamespace::INetworkPlayerModel*>* partyChangedEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<GlobalNamespace::INetworkPlayerModel*>*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xE1D81C
    // private System.Action`1<System.Int32> partySizeChangedEvent
    // Size: 0x8
    // Offset: 0xA0
    System::Action_1<int>* partySizeChangedEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<int>*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xE1D82C
    // private System.Action`1<INetworkPlayer> joinRequestedEvent
    // Size: 0x8
    // Offset: 0xA8
    System::Action_1<GlobalNamespace::INetworkPlayer*>* joinRequestedEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<GlobalNamespace::INetworkPlayer*>*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xE1D83C
    // private System.Action`1<INetworkPlayer> inviteRequestedEvent
    // Size: 0x8
    // Offset: 0xB0
    System::Action_1<GlobalNamespace::INetworkPlayer*>* inviteRequestedEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<GlobalNamespace::INetworkPlayer*>*) == 0x8);
    // Creating value type constructor for type: MockNetworkPlayerModel
    MockNetworkPlayerModel(GlobalNamespace::MockPlayersModel* playersModel_ = {}, GlobalNamespace::MockMultiplayerSessionManager* multiplayerSessionManager_ = {}, bool discoveryEnabled_ = {}, bool localPlayerIsPartyOwner_ = {}, int maxPartySize_ = {}, GlobalNamespace::GameplayServerConfiguration configuration_ = {}, int currentPartySize_ = {}, GlobalNamespace::ConnectedPlayerManager* connectedPlayerManager_ = {}, bool enableLocalNetwork_ = {}, GlobalNamespace::GameplayServerFilter serverFilter_ = {}, System::Action_1<GlobalNamespace::INetworkPlayerModel*>* connectedPlayerManagerCreatedEvent_ = {}, System::Action_1<GlobalNamespace::INetworkPlayerModel*>* connectedPlayerManagerDestroyedEvent_ = {}, System::Action* partyRefreshingEvent_ = {}, System::Action_1<GlobalNamespace::INetworkPlayerModel*>* partyChangedEvent_ = {}, System::Action_1<int>* partySizeChangedEvent_ = {}, System::Action_1<GlobalNamespace::INetworkPlayer*>* joinRequestedEvent_ = {}, System::Action_1<GlobalNamespace::INetworkPlayer*>* inviteRequestedEvent_ = {}) noexcept : playersModel{playersModel_}, multiplayerSessionManager{multiplayerSessionManager_}, discoveryEnabled{discoveryEnabled_}, localPlayerIsPartyOwner{localPlayerIsPartyOwner_}, maxPartySize{maxPartySize_}, configuration{configuration_}, currentPartySize{currentPartySize_}, connectedPlayerManager{connectedPlayerManager_}, enableLocalNetwork{enableLocalNetwork_}, serverFilter{serverFilter_}, connectedPlayerManagerCreatedEvent{connectedPlayerManagerCreatedEvent_}, connectedPlayerManagerDestroyedEvent{connectedPlayerManagerDestroyedEvent_}, partyRefreshingEvent{partyRefreshingEvent_}, partyChangedEvent{partyChangedEvent_}, partySizeChangedEvent{partySizeChangedEvent_}, joinRequestedEvent{joinRequestedEvent_}, inviteRequestedEvent{inviteRequestedEvent_} {}
    // Creating interface conversion operator: operator GlobalNamespace::IUnifiedNetworkPlayerModel
    operator GlobalNamespace::IUnifiedNetworkPlayerModel() noexcept {
      return *reinterpret_cast<GlobalNamespace::IUnifiedNetworkPlayerModel*>(this);
    }
    // public DiscoveryPolicy get_discoveryPolicy()
    // Offset: 0x10A1D38
    GlobalNamespace::DiscoveryPolicy get_discoveryPolicy();
    // public System.Boolean get_discoveryEnabled()
    // Offset: 0x10A1D40
    bool get_discoveryEnabled();
    // public System.Void set_discoveryEnabled(System.Boolean value)
    // Offset: 0x10A1D48
    void set_discoveryEnabled(bool value);
    // public System.Boolean get_localPlayerIsPartyOwner()
    // Offset: 0x10A1D54
    bool get_localPlayerIsPartyOwner();
    // public System.Int32 get_maxPartySize()
    // Offset: 0x10A1D5C
    int get_maxPartySize();
    // private System.Void set_maxPartySize(System.Int32 value)
    // Offset: 0x10A1D64
    void set_maxPartySize(int value);
    // public GameplayServerConfiguration get_configuration()
    // Offset: 0x10A1D6C
    GlobalNamespace::GameplayServerConfiguration get_configuration();
    // public System.Void set_configuration(GameplayServerConfiguration value)
    // Offset: 0x10A1D80
    void set_configuration(GlobalNamespace::GameplayServerConfiguration value);
    // public System.Int32 get_currentPartySize()
    // Offset: 0x10A1D94
    int get_currentPartySize();
    // public System.Collections.Generic.IEnumerable`1<INetworkPlayer> get_partyPlayers()
    // Offset: 0x10A1D9C
    System::Collections::Generic::IEnumerable_1<GlobalNamespace::INetworkPlayer*>* get_partyPlayers();
    // public System.Collections.Generic.IEnumerable`1<INetworkPlayer> get_otherPlayers()
    // Offset: 0x10A1DFC
    System::Collections::Generic::IEnumerable_1<GlobalNamespace::INetworkPlayer*>* get_otherPlayers();
    // public ConnectedPlayerManager get_connectedPlayerManager()
    // Offset: 0x10A1E18
    GlobalNamespace::ConnectedPlayerManager* get_connectedPlayerManager();
    // public INetworkPlayer get_localPlayer()
    // Offset: 0x10A1E20
    GlobalNamespace::INetworkPlayer* get_localPlayer();
    // public System.Boolean get_enableLocalNetwork()
    // Offset: 0x10A1E3C
    bool get_enableLocalNetwork();
    // public System.Void set_enableLocalNetwork(System.Boolean value)
    // Offset: 0x10A1E44
    void set_enableLocalNetwork(bool value);
    // public System.Collections.Generic.IEnumerable`1<INetworkPlayer> get_publicServers()
    // Offset: 0x10A1E50
    System::Collections::Generic::IEnumerable_1<GlobalNamespace::INetworkPlayer*>* get_publicServers();
    // public System.Collections.Generic.IEnumerable`1<INetworkPlayer> get_localNetworkPlayers()
    // Offset: 0x10A1E6C
    System::Collections::Generic::IEnumerable_1<GlobalNamespace::INetworkPlayer*>* get_localNetworkPlayers();
    // public GameplayServerFilter get_serverFilter()
    // Offset: 0x10A1E88
    GlobalNamespace::GameplayServerFilter get_serverFilter();
    // private System.Void set_serverFilter(GameplayServerFilter value)
    // Offset: 0x10A1EA0
    void set_serverFilter(GlobalNamespace::GameplayServerFilter value);
    // public System.String get_userId()
    // Offset: 0x10A1EB8
    ::Il2CppString* get_userId();
    // public System.String get_userName()
    // Offset: 0x10A1F00
    ::Il2CppString* get_userName();
    // public System.String get_secret()
    // Offset: 0x10A1F48
    ::Il2CppString* get_secret();
    // public System.String get_code()
    // Offset: 0x10A1F90
    ::Il2CppString* get_code();
    // public System.Void add_connectedPlayerManagerCreatedEvent(System.Action`1<INetworkPlayerModel> value)
    // Offset: 0x10A1FD8
    void add_connectedPlayerManagerCreatedEvent(System::Action_1<GlobalNamespace::INetworkPlayerModel*>* value);
    // public System.Void remove_connectedPlayerManagerCreatedEvent(System.Action`1<INetworkPlayerModel> value)
    // Offset: 0x10A207C
    void remove_connectedPlayerManagerCreatedEvent(System::Action_1<GlobalNamespace::INetworkPlayerModel*>* value);
    // public System.Void add_connectedPlayerManagerDestroyedEvent(System.Action`1<INetworkPlayerModel> value)
    // Offset: 0x10A2120
    void add_connectedPlayerManagerDestroyedEvent(System::Action_1<GlobalNamespace::INetworkPlayerModel*>* value);
    // public System.Void remove_connectedPlayerManagerDestroyedEvent(System.Action`1<INetworkPlayerModel> value)
    // Offset: 0x10A21C4
    void remove_connectedPlayerManagerDestroyedEvent(System::Action_1<GlobalNamespace::INetworkPlayerModel*>* value);
    // public System.Void add_partyRefreshingEvent(System.Action value)
    // Offset: 0x10A2268
    void add_partyRefreshingEvent(System::Action* value);
    // public System.Void remove_partyRefreshingEvent(System.Action value)
    // Offset: 0x10A230C
    void remove_partyRefreshingEvent(System::Action* value);
    // public System.Void add_partyChangedEvent(System.Action`1<INetworkPlayerModel> value)
    // Offset: 0x10A23B0
    void add_partyChangedEvent(System::Action_1<GlobalNamespace::INetworkPlayerModel*>* value);
    // public System.Void remove_partyChangedEvent(System.Action`1<INetworkPlayerModel> value)
    // Offset: 0x10A2454
    void remove_partyChangedEvent(System::Action_1<GlobalNamespace::INetworkPlayerModel*>* value);
    // public System.Void add_partySizeChangedEvent(System.Action`1<System.Int32> value)
    // Offset: 0x10A24F8
    void add_partySizeChangedEvent(System::Action_1<int>* value);
    // public System.Void remove_partySizeChangedEvent(System.Action`1<System.Int32> value)
    // Offset: 0x10A259C
    void remove_partySizeChangedEvent(System::Action_1<int>* value);
    // public System.Void add_joinRequestedEvent(System.Action`1<INetworkPlayer> value)
    // Offset: 0x10A2640
    void add_joinRequestedEvent(System::Action_1<GlobalNamespace::INetworkPlayer*>* value);
    // public System.Void remove_joinRequestedEvent(System.Action`1<INetworkPlayer> value)
    // Offset: 0x10A26E4
    void remove_joinRequestedEvent(System::Action_1<GlobalNamespace::INetworkPlayer*>* value);
    // public System.Void add_inviteRequestedEvent(System.Action`1<INetworkPlayer> value)
    // Offset: 0x10A2788
    void add_inviteRequestedEvent(System::Action_1<GlobalNamespace::INetworkPlayer*>* value);
    // public System.Void remove_inviteRequestedEvent(System.Action`1<INetworkPlayer> value)
    // Offset: 0x10A282C
    void remove_inviteRequestedEvent(System::Action_1<GlobalNamespace::INetworkPlayer*>* value);
    // public System.Boolean CreateParty(INetworkPlayerModelPartyConfig`1<T> config)
    // Offset: 0xFFFFFFFF
    template<class T>
    bool CreateParty(GlobalNamespace::INetworkPlayerModelPartyConfig_1<T>* config) {
      static_assert(std::is_base_of_v<GlobalNamespace::INetworkPlayerModel, std::remove_pointer_t<T>>);
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MockNetworkPlayerModel::CreateParty");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "CreateParty", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(config)})));
      auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___generic__method, config);
    }
    // public System.Void DestroyParty()
    // Offset: 0x10A28D0
    void DestroyParty();
    // public System.Void Disconnect()
    // Offset: 0x10A28EC
    void Disconnect();
    // public System.Void Refresh(System.Boolean clearCurrentList)
    // Offset: 0x10A292C
    void Refresh(bool clearCurrentList);
    // public System.Void SetServerFilter(GameplayServerFilter filter)
    // Offset: 0x10A2930
    void SetServerFilter(GlobalNamespace::GameplayServerFilter filter);
    // public System.Void JoinMatchmaking(GameplayServerConfiguration configuration, DiscoveryPolicy discoveryPolicy, System.String secret, System.String code)
    // Offset: 0x10A2948
    void JoinMatchmaking(GlobalNamespace::GameplayServerConfiguration configuration, GlobalNamespace::DiscoveryPolicy discoveryPolicy, ::Il2CppString* secret, ::Il2CppString* code);
    // public System.Void ConnectToServerWithCode(System.String serverCode, System.String serverPassword)
    // Offset: 0x10A2A00
    void ConnectToServerWithCode(::Il2CppString* serverCode, ::Il2CppString* serverPassword);
    // public System.Void ConnectToServerWithSecret(System.String serverSecret)
    // Offset: 0x10A2A70
    void ConnectToServerWithSecret(::Il2CppString* serverSecret);
    // public System.Void ResetMasterServerReachability()
    // Offset: 0x10A2AE0
    void ResetMasterServerReachability();
    // public System.Void .ctor()
    // Offset: 0x10A2AE4
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MockNetworkPlayerModel* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MockNetworkPlayerModel::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MockNetworkPlayerModel*, creationType>()));
    }
  }; // MockNetworkPlayerModel
  #pragma pack(pop)
  static check_size<sizeof(MockNetworkPlayerModel), 176 + sizeof(System::Action_1<GlobalNamespace::INetworkPlayer*>*)> __GlobalNamespace_MockNetworkPlayerModelSizeCheck;
  static_assert(sizeof(MockNetworkPlayerModel) == 0xB8);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MockNetworkPlayerModel*, "", "MockNetworkPlayerModel");
// Writing MetadataGetter for method: GlobalNamespace::MockNetworkPlayerModel::get_discoveryPolicy
// Il2CppName: get_discoveryPolicy
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::MockNetworkPlayerModel::get_discoveryEnabled
// Il2CppName: get_discoveryEnabled
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::MockNetworkPlayerModel::set_discoveryEnabled
// Il2CppName: set_discoveryEnabled
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::MockNetworkPlayerModel::get_localPlayerIsPartyOwner
// Il2CppName: get_localPlayerIsPartyOwner
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::MockNetworkPlayerModel::get_maxPartySize
// Il2CppName: get_maxPartySize
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::MockNetworkPlayerModel::set_maxPartySize
// Il2CppName: set_maxPartySize
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::MockNetworkPlayerModel::get_configuration
// Il2CppName: get_configuration
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::MockNetworkPlayerModel::set_configuration
// Il2CppName: set_configuration
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::MockNetworkPlayerModel::get_currentPartySize
// Il2CppName: get_currentPartySize
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::MockNetworkPlayerModel::get_partyPlayers
// Il2CppName: get_partyPlayers
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::MockNetworkPlayerModel::get_otherPlayers
// Il2CppName: get_otherPlayers
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::MockNetworkPlayerModel::get_connectedPlayerManager
// Il2CppName: get_connectedPlayerManager
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::MockNetworkPlayerModel::get_localPlayer
// Il2CppName: get_localPlayer
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::MockNetworkPlayerModel::get_enableLocalNetwork
// Il2CppName: get_enableLocalNetwork
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::MockNetworkPlayerModel::set_enableLocalNetwork
// Il2CppName: set_enableLocalNetwork
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::MockNetworkPlayerModel::get_publicServers
// Il2CppName: get_publicServers
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::MockNetworkPlayerModel::get_localNetworkPlayers
// Il2CppName: get_localNetworkPlayers
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::MockNetworkPlayerModel::get_serverFilter
// Il2CppName: get_serverFilter
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::MockNetworkPlayerModel::set_serverFilter
// Il2CppName: set_serverFilter
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::MockNetworkPlayerModel::get_userId
// Il2CppName: get_userId
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::MockNetworkPlayerModel::get_userName
// Il2CppName: get_userName
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::MockNetworkPlayerModel::get_secret
// Il2CppName: get_secret
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::MockNetworkPlayerModel::get_code
// Il2CppName: get_code
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::MockNetworkPlayerModel::add_connectedPlayerManagerCreatedEvent
// Il2CppName: add_connectedPlayerManagerCreatedEvent
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::MockNetworkPlayerModel::remove_connectedPlayerManagerCreatedEvent
// Il2CppName: remove_connectedPlayerManagerCreatedEvent
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::MockNetworkPlayerModel::add_connectedPlayerManagerDestroyedEvent
// Il2CppName: add_connectedPlayerManagerDestroyedEvent
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::MockNetworkPlayerModel::remove_connectedPlayerManagerDestroyedEvent
// Il2CppName: remove_connectedPlayerManagerDestroyedEvent
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::MockNetworkPlayerModel::add_partyRefreshingEvent
// Il2CppName: add_partyRefreshingEvent
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::MockNetworkPlayerModel::remove_partyRefreshingEvent
// Il2CppName: remove_partyRefreshingEvent
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::MockNetworkPlayerModel::add_partyChangedEvent
// Il2CppName: add_partyChangedEvent
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::MockNetworkPlayerModel::remove_partyChangedEvent
// Il2CppName: remove_partyChangedEvent
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::MockNetworkPlayerModel::add_partySizeChangedEvent
// Il2CppName: add_partySizeChangedEvent
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::MockNetworkPlayerModel::remove_partySizeChangedEvent
// Il2CppName: remove_partySizeChangedEvent
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::MockNetworkPlayerModel::add_joinRequestedEvent
// Il2CppName: add_joinRequestedEvent
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::MockNetworkPlayerModel::remove_joinRequestedEvent
// Il2CppName: remove_joinRequestedEvent
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::MockNetworkPlayerModel::add_inviteRequestedEvent
// Il2CppName: add_inviteRequestedEvent
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::MockNetworkPlayerModel::remove_inviteRequestedEvent
// Il2CppName: remove_inviteRequestedEvent
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::MockNetworkPlayerModel::CreateParty
// Il2CppName: CreateParty
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: GlobalNamespace::MockNetworkPlayerModel::DestroyParty
// Il2CppName: DestroyParty
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::MockNetworkPlayerModel::Disconnect
// Il2CppName: Disconnect
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::MockNetworkPlayerModel::Refresh
// Il2CppName: Refresh
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::MockNetworkPlayerModel::SetServerFilter
// Il2CppName: SetServerFilter
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::MockNetworkPlayerModel::JoinMatchmaking
// Il2CppName: JoinMatchmaking
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::MockNetworkPlayerModel::ConnectToServerWithCode
// Il2CppName: ConnectToServerWithCode
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::MockNetworkPlayerModel::ConnectToServerWithSecret
// Il2CppName: ConnectToServerWithSecret
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::MockNetworkPlayerModel::ResetMasterServerReachability
// Il2CppName: ResetMasterServerReachability
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::MockNetworkPlayerModel::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
