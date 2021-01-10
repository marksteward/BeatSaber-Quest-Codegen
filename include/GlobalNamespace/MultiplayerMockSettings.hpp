// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.ScriptableObject
#include "UnityEngine/ScriptableObject.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MockPlayer
  class MockPlayer;
  // Forward declaring type: MockServer
  class MockServer;
  // Forward declaring type: MasterServerAvailabilityData
  class MasterServerAvailabilityData;
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
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x70
  // Autogenerated type: MultiplayerMockSettings
  // [] Offset: FFFFFFFF
  class MultiplayerMockSettings : public UnityEngine::ScriptableObject {
    public:
    // Nested type: GlobalNamespace::MultiplayerMockSettings::$get_mockServers$d__21
    class $get_mockServers$d__21;
    // private System.Boolean _isEnabled
    // Size: 0x1
    // Offset: 0x18
    bool isEnabled;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: isEnabled and: otherPlayers
    char __padding0[0x7] = {};
    // [FormerlySerializedAsAttribute] Offset: 0xDC9A98
    // private System.Collections.Generic.List`1<MockPlayer> _otherPlayers
    // Size: 0x8
    // Offset: 0x20
    System::Collections::Generic::List_1<GlobalNamespace::MockPlayer*>* otherPlayers;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<GlobalNamespace::MockPlayer*>*) == 0x8);
    // private MockPlayer _localPlayer
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::MockPlayer* localPlayer;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MockPlayer*) == 0x8);
    // private MockServer _mockServer
    // Size: 0x8
    // Offset: 0x30
    GlobalNamespace::MockServer* mockServer;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MockServer*) == 0x8);
    // private System.Single _scoreGainAmount
    // Size: 0x4
    // Offset: 0x38
    float scoreGainAmount;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _scoreGainRepeatInterval
    // Size: 0x4
    // Offset: 0x3C
    float scoreGainRepeatInterval;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _scoreStartDelay
    // Size: 0x4
    // Offset: 0x40
    float scoreStartDelay;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: scoreStartDelay and: masterServerAvailabilityData
    char __padding6[0x4] = {};
    // private MasterServerAvailabilityData _masterServerAvailabilityData
    // Size: 0x8
    // Offset: 0x48
    GlobalNamespace::MasterServerAvailabilityData* masterServerAvailabilityData;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MasterServerAvailabilityData*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDC9B44
    // private System.Action partyCreatedEvent
    // Size: 0x8
    // Offset: 0x50
    System::Action* partyCreatedEvent;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDC9B54
    // private System.Action`1<MockPlayer> playerDidConnectEvent
    // Size: 0x8
    // Offset: 0x58
    System::Action_1<GlobalNamespace::MockPlayer*>* playerDidConnectEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<GlobalNamespace::MockPlayer*>*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDC9B64
    // private System.Action`1<MockPlayer> playerDidDisconnectEvent
    // Size: 0x8
    // Offset: 0x60
    System::Action_1<GlobalNamespace::MockPlayer*>* playerDidDisconnectEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<GlobalNamespace::MockPlayer*>*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDC9B74
    // private System.Action`1<MockPlayer> playerStateChangedEvent
    // Size: 0x8
    // Offset: 0x68
    System::Action_1<GlobalNamespace::MockPlayer*>* playerStateChangedEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<GlobalNamespace::MockPlayer*>*) == 0x8);
    // Creating value type constructor for type: MultiplayerMockSettings
    MultiplayerMockSettings(bool isEnabled_ = {}, System::Collections::Generic::List_1<GlobalNamespace::MockPlayer*>* otherPlayers_ = {}, GlobalNamespace::MockPlayer* localPlayer_ = {}, GlobalNamespace::MockServer* mockServer_ = {}, float scoreGainAmount_ = {}, float scoreGainRepeatInterval_ = {}, float scoreStartDelay_ = {}, GlobalNamespace::MasterServerAvailabilityData* masterServerAvailabilityData_ = {}, System::Action* partyCreatedEvent_ = {}, System::Action_1<GlobalNamespace::MockPlayer*>* playerDidConnectEvent_ = {}, System::Action_1<GlobalNamespace::MockPlayer*>* playerDidDisconnectEvent_ = {}, System::Action_1<GlobalNamespace::MockPlayer*>* playerStateChangedEvent_ = {}) noexcept : isEnabled{isEnabled_}, otherPlayers{otherPlayers_}, localPlayer{localPlayer_}, mockServer{mockServer_}, scoreGainAmount{scoreGainAmount_}, scoreGainRepeatInterval{scoreGainRepeatInterval_}, scoreStartDelay{scoreStartDelay_}, masterServerAvailabilityData{masterServerAvailabilityData_}, partyCreatedEvent{partyCreatedEvent_}, playerDidConnectEvent{playerDidConnectEvent_}, playerDidDisconnectEvent{playerDidDisconnectEvent_}, playerStateChangedEvent{playerStateChangedEvent_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public MockPlayer get_localPlayer()
    // Offset: 0xF73FBC
    GlobalNamespace::MockPlayer* get_localPlayer();
    // public System.Single get_scoreGainAmount()
    // Offset: 0xF740C0
    float get_scoreGainAmount();
    // public System.Single get_scoreGainRepeatInterval()
    // Offset: 0xF740C8
    float get_scoreGainRepeatInterval();
    // public System.Single get_scoreStartDelay()
    // Offset: 0xF740D0
    float get_scoreStartDelay();
    // public MasterServerAvailabilityData get_masterServerAvailabilityData()
    // Offset: 0xF740D8
    GlobalNamespace::MasterServerAvailabilityData* get_masterServerAvailabilityData();
    // public System.Collections.Generic.List`1<MockPlayer> get_otherPlayers()
    // Offset: 0xF740E0
    System::Collections::Generic::List_1<GlobalNamespace::MockPlayer*>* get_otherPlayers();
    // public System.Collections.Generic.IEnumerable`1<MockServer> get_mockServers()
    // Offset: 0xF740E8
    System::Collections::Generic::IEnumerable_1<GlobalNamespace::MockServer*>* get_mockServers();
    // public MockServer get_mockServer()
    // Offset: 0xF741AC
    GlobalNamespace::MockServer* get_mockServer();
    // public System.Void add_partyCreatedEvent(System.Action value)
    // Offset: 0xF741B4
    void add_partyCreatedEvent(System::Action* value);
    // public System.Void remove_partyCreatedEvent(System.Action value)
    // Offset: 0xF74258
    void remove_partyCreatedEvent(System::Action* value);
    // public System.Void add_playerDidConnectEvent(System.Action`1<MockPlayer> value)
    // Offset: 0xF742FC
    void add_playerDidConnectEvent(System::Action_1<GlobalNamespace::MockPlayer*>* value);
    // public System.Void remove_playerDidConnectEvent(System.Action`1<MockPlayer> value)
    // Offset: 0xF743A0
    void remove_playerDidConnectEvent(System::Action_1<GlobalNamespace::MockPlayer*>* value);
    // public System.Void add_playerDidDisconnectEvent(System.Action`1<MockPlayer> value)
    // Offset: 0xF74444
    void add_playerDidDisconnectEvent(System::Action_1<GlobalNamespace::MockPlayer*>* value);
    // public System.Void remove_playerDidDisconnectEvent(System.Action`1<MockPlayer> value)
    // Offset: 0xF744E8
    void remove_playerDidDisconnectEvent(System::Action_1<GlobalNamespace::MockPlayer*>* value);
    // public System.Void add_playerStateChangedEvent(System.Action`1<MockPlayer> value)
    // Offset: 0xF7458C
    void add_playerStateChangedEvent(System::Action_1<GlobalNamespace::MockPlayer*>* value);
    // public System.Void remove_playerStateChangedEvent(System.Action`1<MockPlayer> value)
    // Offset: 0xF74630
    void remove_playerStateChangedEvent(System::Action_1<GlobalNamespace::MockPlayer*>* value);
    // public System.Boolean get_isEnabled()
    // Offset: 0xF746D4
    bool get_isEnabled();
    // public System.Void set_isEnabled(System.Boolean value)
    // Offset: 0xF746DC
    void set_isEnabled(bool value);
    // public System.Void CreateParty()
    // Offset: 0xF746E8
    void CreateParty();
    // public System.Void ConnectPlayer(MockPlayer player)
    // Offset: 0xF746FC
    void ConnectPlayer(GlobalNamespace::MockPlayer* player);
    // public System.Void DisconnectPlayer(MockPlayer player)
    // Offset: 0xF74790
    void DisconnectPlayer(GlobalNamespace::MockPlayer* player);
    // public System.Void ReportPlayerStateChanged(MockPlayer player)
    // Offset: 0xF74828
    void ReportPlayerStateChanged(GlobalNamespace::MockPlayer* player);
    // public System.Void FailPlayer(MockPlayer player)
    // Offset: 0xF7489C
    void FailPlayer(GlobalNamespace::MockPlayer* player);
    // static public MultiplayerMockSettings SharedSettings()
    // Offset: 0xF748DC
    static GlobalNamespace::MultiplayerMockSettings* SharedSettings();
    // public System.Void .ctor()
    // Offset: 0xF748E4
    // Implemented from: UnityEngine.ScriptableObject
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MultiplayerMockSettings* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MultiplayerMockSettings::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MultiplayerMockSettings*, creationType>()));
    }
  }; // MultiplayerMockSettings
  static check_size<sizeof(MultiplayerMockSettings), 104 + sizeof(System::Action_1<GlobalNamespace::MockPlayer*>*)> __GlobalNamespace_MultiplayerMockSettingsSizeCheck;
  static_assert(sizeof(MultiplayerMockSettings) == 0x70);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerMockSettings*, "", "MultiplayerMockSettings");
#pragma pack(pop)
