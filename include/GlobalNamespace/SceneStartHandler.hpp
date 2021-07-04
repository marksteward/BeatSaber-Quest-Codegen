// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
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
  // Forward declaring type: IGameplayRpcManager
  class IGameplayRpcManager;
  // Forward declaring type: PlayersSpecificSettingsAtGameStartModel
  class PlayersSpecificSettingsAtGameStartModel;
  // Forward declaring type: PlayerSpecificSettingsNetSerializable
  class PlayerSpecificSettingsNetSerializable;
  // Forward declaring type: PlayerSpecificSettingsAtStartNetSerializable
  class PlayerSpecificSettingsAtStartNetSerializable;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: HashSet`1<T>
  template<typename T>
  class HashSet_1;
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
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
  // Size: 0x58
  #pragma pack(push, 1)
  // Autogenerated type: SceneStartHandler
  class SceneStartHandler : public ::Il2CppObject/*, public System::IDisposable*/ {
    public:
    // private readonly IMultiplayerSessionManager _multiplayerSessionManager
    // Size: 0x8
    // Offset: 0x10
    GlobalNamespace::IMultiplayerSessionManager* multiplayerSessionManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IMultiplayerSessionManager*) == 0x8);
    // private readonly IGameplayRpcManager _gameplayRpcManager
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::IGameplayRpcManager* gameplayRpcManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IGameplayRpcManager*) == 0x8);
    // private readonly PlayersSpecificSettingsAtGameStartModel _playersAtGameStartModel
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::PlayersSpecificSettingsAtGameStartModel* playersAtGameStartModel;
    // Field size check
    static_assert(sizeof(GlobalNamespace::PlayersSpecificSettingsAtGameStartModel*) == 0x8);
    // private readonly System.Collections.Generic.HashSet`1<System.String> _readyPlayers
    // Size: 0x8
    // Offset: 0x28
    System::Collections::Generic::HashSet_1<::Il2CppString*>* readyPlayers;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::HashSet_1<::Il2CppString*>*) == 0x8);
    // private readonly System.Collections.Generic.Dictionary`2<System.String,PlayerSpecificSettingsNetSerializable> _playersSpecificSettings
    // Size: 0x8
    // Offset: 0x30
    System::Collections::Generic::Dictionary_2<::Il2CppString*, GlobalNamespace::PlayerSpecificSettingsNetSerializable*>* playersSpecificSettings;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::Dictionary_2<::Il2CppString*, GlobalNamespace::PlayerSpecificSettingsNetSerializable*>*) == 0x8);
    // private System.Boolean _started
    // Size: 0x1
    // Offset: 0x38
    bool started;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: started and: sessionGameId
    char __padding5[0x7] = {};
    // private System.String _sessionGameId
    // Size: 0x8
    // Offset: 0x40
    ::Il2CppString* sessionGameId;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDF0FB0
    // private System.Action`1<System.String> sceneSetupDidFinishEvent
    // Size: 0x8
    // Offset: 0x48
    System::Action_1<::Il2CppString*>* sceneSetupDidFinishEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<::Il2CppString*>*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDF0FC0
    // private System.Action`1<System.String> sceneSetupDidReceiveTooLateEvent
    // Size: 0x8
    // Offset: 0x50
    System::Action_1<::Il2CppString*>* sceneSetupDidReceiveTooLateEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<::Il2CppString*>*) == 0x8);
    // Creating value type constructor for type: SceneStartHandler
    SceneStartHandler(GlobalNamespace::IMultiplayerSessionManager* multiplayerSessionManager_ = {}, GlobalNamespace::IGameplayRpcManager* gameplayRpcManager_ = {}, GlobalNamespace::PlayersSpecificSettingsAtGameStartModel* playersAtGameStartModel_ = {}, System::Collections::Generic::HashSet_1<::Il2CppString*>* readyPlayers_ = {}, System::Collections::Generic::Dictionary_2<::Il2CppString*, GlobalNamespace::PlayerSpecificSettingsNetSerializable*>* playersSpecificSettings_ = {}, bool started_ = {}, ::Il2CppString* sessionGameId_ = {}, System::Action_1<::Il2CppString*>* sceneSetupDidFinishEvent_ = {}, System::Action_1<::Il2CppString*>* sceneSetupDidReceiveTooLateEvent_ = {}) noexcept : multiplayerSessionManager{multiplayerSessionManager_}, gameplayRpcManager{gameplayRpcManager_}, playersAtGameStartModel{playersAtGameStartModel_}, readyPlayers{readyPlayers_}, playersSpecificSettings{playersSpecificSettings_}, started{started_}, sessionGameId{sessionGameId_}, sceneSetupDidFinishEvent{sceneSetupDidFinishEvent_}, sceneSetupDidReceiveTooLateEvent{sceneSetupDidReceiveTooLateEvent_} {}
    // Creating interface conversion operator: operator System::IDisposable
    operator System::IDisposable() noexcept {
      return *reinterpret_cast<System::IDisposable*>(this);
    }
    // public System.Void add_sceneSetupDidFinishEvent(System.Action`1<System.String> value)
    // Offset: 0x2378A54
    void add_sceneSetupDidFinishEvent(System::Action_1<::Il2CppString*>* value);
    // public System.Void remove_sceneSetupDidFinishEvent(System.Action`1<System.String> value)
    // Offset: 0x2378AF8
    void remove_sceneSetupDidFinishEvent(System::Action_1<::Il2CppString*>* value);
    // public System.Void add_sceneSetupDidReceiveTooLateEvent(System.Action`1<System.String> value)
    // Offset: 0x2378B9C
    void add_sceneSetupDidReceiveTooLateEvent(System::Action_1<::Il2CppString*>* value);
    // public System.Void remove_sceneSetupDidReceiveTooLateEvent(System.Action`1<System.String> value)
    // Offset: 0x2378C40
    void remove_sceneSetupDidReceiveTooLateEvent(System::Action_1<::Il2CppString*>* value);
    // public System.Void .ctor(IMultiplayerSessionManager multiplayerSessionManager, IGameplayRpcManager gameplayRpcManager, PlayersSpecificSettingsAtGameStartModel playersAtGameStartModel)
    // Offset: 0x2378CE4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SceneStartHandler* New_ctor(GlobalNamespace::IMultiplayerSessionManager* multiplayerSessionManager, GlobalNamespace::IGameplayRpcManager* gameplayRpcManager, GlobalNamespace::PlayersSpecificSettingsAtGameStartModel* playersAtGameStartModel) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::SceneStartHandler::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SceneStartHandler*, creationType>(multiplayerSessionManager, gameplayRpcManager, playersAtGameStartModel)));
    }
    // public System.Void Dispose()
    // Offset: 0x2378DA4
    void Dispose();
    // public System.Void GetSceneLoadStatus()
    // Offset: 0x23790E4
    void GetSceneLoadStatus();
    // public System.Void ForceStart()
    // Offset: 0x2379A74
    void ForceStart();
    // private System.Void HandleSetGameplaySceneReady(System.String userId, PlayerSpecificSettingsNetSerializable playerSpecificSettings)
    // Offset: 0x237A0C4
    void HandleSetGameplaySceneReady(::Il2CppString* userId, GlobalNamespace::PlayerSpecificSettingsNetSerializable* playerSpecificSettings);
    // private System.Void HandleGetGameplaySceneReady(System.String userId)
    // Offset: 0x237A48C
    void HandleGetGameplaySceneReady(::Il2CppString* userId);
    // private System.Void HandleSetGameplaySceneSyncFinished(System.String userId, PlayerSpecificSettingsAtStartNetSerializable playersAtGameStart, System.String sessionId)
    // Offset: 0x237A550
    void HandleSetGameplaySceneSyncFinished(::Il2CppString* userId, GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable* playersAtGameStart, ::Il2CppString* sessionId);
    // private System.Void HandleSetPlayerDidConnectLate(System.String userId, System.String failedUserId, PlayerSpecificSettingsAtStartNetSerializable playersAtGameStart, System.String sessionId)
    // Offset: 0x237A5F4
    void HandleSetPlayerDidConnectLate(::Il2CppString* userId, ::Il2CppString* failedUserId, GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable* playersAtGameStart, ::Il2CppString* sessionId);
    // private System.Void AddPlayerSpecificSettingsToDictionary(PlayerSpecificSettingsNetSerializable playerSpecificSettingsNetSerializable)
    // Offset: 0x23797C4
    void AddPlayerSpecificSettingsToDictionary(GlobalNamespace::PlayerSpecificSettingsNetSerializable* playerSpecificSettingsNetSerializable);
    // private PlayerSpecificSettingsAtStartNetSerializable CreatePlayersSpecificSettingsAtGameStartData()
    // Offset: 0x2379844
    GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable* CreatePlayersSpecificSettingsAtGameStartData();
  }; // SceneStartHandler
  #pragma pack(pop)
  static check_size<sizeof(SceneStartHandler), 80 + sizeof(System::Action_1<::Il2CppString*>*)> __GlobalNamespace_SceneStartHandlerSizeCheck;
  static_assert(sizeof(SceneStartHandler) == 0x58);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SceneStartHandler*, "", "SceneStartHandler");
// Writing MetadataGetter for method: GlobalNamespace::SceneStartHandler::add_sceneSetupDidFinishEvent
// Il2CppName: add_sceneSetupDidFinishEvent
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::SceneStartHandler::remove_sceneSetupDidFinishEvent
// Il2CppName: remove_sceneSetupDidFinishEvent
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::SceneStartHandler::add_sceneSetupDidReceiveTooLateEvent
// Il2CppName: add_sceneSetupDidReceiveTooLateEvent
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::SceneStartHandler::remove_sceneSetupDidReceiveTooLateEvent
// Il2CppName: remove_sceneSetupDidReceiveTooLateEvent
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::SceneStartHandler::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::SceneStartHandler::Dispose
// Il2CppName: Dispose
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::SceneStartHandler::GetSceneLoadStatus
// Il2CppName: GetSceneLoadStatus
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::SceneStartHandler::ForceStart
// Il2CppName: ForceStart
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::SceneStartHandler::HandleSetGameplaySceneReady
// Il2CppName: HandleSetGameplaySceneReady
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::SceneStartHandler::HandleGetGameplaySceneReady
// Il2CppName: HandleGetGameplaySceneReady
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::SceneStartHandler::HandleSetGameplaySceneSyncFinished
// Il2CppName: HandleSetGameplaySceneSyncFinished
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::SceneStartHandler::HandleSetPlayerDidConnectLate
// Il2CppName: HandleSetPlayerDidConnectLate
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::SceneStartHandler::AddPlayerSpecificSettingsToDictionary
// Il2CppName: AddPlayerSpecificSettingsToDictionary
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::SceneStartHandler::CreatePlayersSpecificSettingsAtGameStartData
// Il2CppName: CreatePlayersSpecificSettingsAtGameStartData
// Cannot perform method pointer template specialization from operators!
