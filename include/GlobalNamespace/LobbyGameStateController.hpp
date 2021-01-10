// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: ILobbyHostGameStateController
#include "GlobalNamespace/ILobbyHostGameStateController.hpp"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
// Including type: MultiplayerGameState
#include "GlobalNamespace/MultiplayerGameState.hpp"
// Including type: MultiplayerLobbyState
#include "GlobalNamespace/MultiplayerLobbyState.hpp"
// Including type: MultiplayerGameType
#include "GlobalNamespace/MultiplayerGameType.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: ILobbyPlayersDataModel
  class ILobbyPlayersDataModel;
  // Forward declaring type: PlayerDataModel
  class PlayerDataModel;
  // Forward declaring type: IMenuRpcManager
  class IMenuRpcManager;
  // Forward declaring type: IMultiplayerSessionManager
  class IMultiplayerSessionManager;
  // Forward declaring type: MultiplayerLevelLoader
  class MultiplayerLevelLoader;
  // Forward declaring type: MenuTransitionsHelper
  class MenuTransitionsHelper;
  // Forward declaring type: LobbyGameState
  class LobbyGameState;
  // Forward declaring type: MultiplayerLevelScenesTransitionSetupDataSO
  class MultiplayerLevelScenesTransitionSetupDataSO;
  // Forward declaring type: LevelCompletionResults
  class LevelCompletionResults;
  // Forward declaring type: BeatmapIdentifierNetSerializable
  class BeatmapIdentifierNetSerializable;
  // Forward declaring type: GameplayModifiers
  class GameplayModifiers;
  // Forward declaring type: IPreviewBeatmapLevel
  class IPreviewBeatmapLevel;
  // Forward declaring type: BeatmapDifficulty
  struct BeatmapDifficulty;
  // Forward declaring type: BeatmapCharacteristicSO
  class BeatmapCharacteristicSO;
  // Forward declaring type: IDifficultyBeatmap
  class IDifficultyBeatmap;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
  // Forward declaring type: Action`3<T1, T2, T3>
  template<typename T1, typename T2, typename T3>
  class Action_3;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0xCD
  // Autogenerated type: LobbyGameStateController
  // [] Offset: FFFFFFFF
  class LobbyGameStateController : public ::Il2CppObject/*, public GlobalNamespace::ILobbyHostGameStateController, public System::IDisposable*/ {
    public:
    // [InjectAttribute] Offset: 0xDC416C
    // private readonly ILobbyPlayersDataModel _lobbyPlayersDataModel
    // Size: 0x8
    // Offset: 0x10
    GlobalNamespace::ILobbyPlayersDataModel* lobbyPlayersDataModel;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ILobbyPlayersDataModel*) == 0x8);
    // [InjectAttribute] Offset: 0xDC417C
    // private readonly PlayerDataModel _playerDataModel
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::PlayerDataModel* playerDataModel;
    // Field size check
    static_assert(sizeof(GlobalNamespace::PlayerDataModel*) == 0x8);
    // [InjectAttribute] Offset: 0xDC418C
    // private readonly IMenuRpcManager _menuRpcManager
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::IMenuRpcManager* menuRpcManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IMenuRpcManager*) == 0x8);
    // [InjectAttribute] Offset: 0xDC419C
    // private readonly IMultiplayerSessionManager _multiplayerSessionManager
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::IMultiplayerSessionManager* multiplayerSessionManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IMultiplayerSessionManager*) == 0x8);
    // [InjectAttribute] Offset: 0xDC41AC
    // private readonly MultiplayerLevelLoader _multiplayerLevelLoader
    // Size: 0x8
    // Offset: 0x30
    GlobalNamespace::MultiplayerLevelLoader* multiplayerLevelLoader;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MultiplayerLevelLoader*) == 0x8);
    // [InjectAttribute] Offset: 0xDC41BC
    // private readonly MenuTransitionsHelper _menuTransitionsHelper
    // Size: 0x8
    // Offset: 0x38
    GlobalNamespace::MenuTransitionsHelper* menuTransitionsHelper;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MenuTransitionsHelper*) == 0x8);
    // [InjectAttribute] Offset: 0xDC41CC
    // private readonly LobbyGameState _lobbyGameState
    // Size: 0x8
    // Offset: 0x40
    GlobalNamespace::LobbyGameState* lobbyGameState;
    // Field size check
    static_assert(sizeof(GlobalNamespace::LobbyGameState*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDC41DC
    // private System.Action gameStartedEvent
    // Size: 0x8
    // Offset: 0x48
    System::Action* gameStartedEvent;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDC41EC
    // private System.Action gameStartCancelledEvent
    // Size: 0x8
    // Offset: 0x50
    System::Action* gameStartCancelledEvent;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDC41FC
    // private System.Action countdownStartedEvent
    // Size: 0x8
    // Offset: 0x58
    System::Action* countdownStartedEvent;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDC420C
    // private System.Action countdownCancelledEvent
    // Size: 0x8
    // Offset: 0x60
    System::Action* countdownCancelledEvent;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDC421C
    // private System.Action songStillDownloadingEvent
    // Size: 0x8
    // Offset: 0x68
    System::Action* songStillDownloadingEvent;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDC422C
    // private System.Action startTimeChangedEvent
    // Size: 0x8
    // Offset: 0x70
    System::Action* startTimeChangedEvent;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDC423C
    // private System.Action`1<MultiplayerGameState> multiplayerGameStateChangedEvent
    // Size: 0x8
    // Offset: 0x78
    System::Action_1<GlobalNamespace::MultiplayerGameState>* multiplayerGameStateChangedEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<GlobalNamespace::MultiplayerGameState>*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDC424C
    // private System.Action`3<MultiplayerLevelScenesTransitionSetupDataSO,LevelCompletionResults,System.Collections.Generic.Dictionary`2<System.String,LevelCompletionResults>> levelFinishedEvent
    // Size: 0x8
    // Offset: 0x80
    System::Action_3<GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO*, GlobalNamespace::LevelCompletionResults*, System::Collections::Generic::Dictionary_2<::Il2CppString*, GlobalNamespace::LevelCompletionResults*>*>* levelFinishedEvent;
    // Field size check
    static_assert(sizeof(System::Action_3<GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO*, GlobalNamespace::LevelCompletionResults*, System::Collections::Generic::Dictionary_2<::Il2CppString*, GlobalNamespace::LevelCompletionResults*>*>*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDC425C
    // private System.Action`1<DisconnectedReason> levelDidGetDisconnectedEvent
    // Size: 0x8
    // Offset: 0x88
    System::Action_1<GlobalNamespace::DisconnectedReason>* levelDidGetDisconnectedEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<GlobalNamespace::DisconnectedReason>*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDC426C
    // private System.Action lobbyDisconnectedEvent
    // Size: 0x8
    // Offset: 0x90
    System::Action* lobbyDisconnectedEvent;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDC427C
    // private System.Action beforeSceneSwitchCallback
    // Size: 0x8
    // Offset: 0x98
    System::Action* beforeSceneSwitchCallback;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDC428C
    // private System.Boolean <levelStartInitiated>k__BackingField
    // Size: 0x1
    // Offset: 0xA0
    bool levelStartInitiated;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: levelStartInitiated and: startedBeatmapId
    char __padding18[0x7] = {};
    // [CompilerGeneratedAttribute] Offset: 0xDC429C
    // private BeatmapIdentifierNetSerializable <startedBeatmapId>k__BackingField
    // Size: 0x8
    // Offset: 0xA8
    GlobalNamespace::BeatmapIdentifierNetSerializable* startedBeatmapId;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapIdentifierNetSerializable*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDC42AC
    // private System.Boolean <countdownStarted>k__BackingField
    // Size: 0x1
    // Offset: 0xB0
    bool countdownStarted;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: countdownStarted and: countdownEndTime
    char __padding20[0x3] = {};
    // [CompilerGeneratedAttribute] Offset: 0xDC42BC
    // private System.Single <countdownEndTime>k__BackingField
    // Size: 0x4
    // Offset: 0xB4
    float countdownEndTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [CompilerGeneratedAttribute] Offset: 0xDC42CC
    // private MultiplayerLobbyState <state>k__BackingField
    // Size: 0x4
    // Offset: 0xB8
    GlobalNamespace::MultiplayerLobbyState state;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MultiplayerLobbyState) == 0x4);
    // [CompilerGeneratedAttribute] Offset: 0xDC42DC
    // private MultiplayerGameType <gameType>k__BackingField
    // Size: 0x4
    // Offset: 0xBC
    GlobalNamespace::MultiplayerGameType gameType;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MultiplayerGameType) == 0x4);
    // [CompilerGeneratedAttribute] Offset: 0xDC42EC
    // private System.Boolean <isDisconnected>k__BackingField
    // Size: 0x1
    // Offset: 0xC0
    bool isDisconnected;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: isDisconnected and: disconnectedReason
    char __padding24[0x3] = {};
    // [CompilerGeneratedAttribute] Offset: 0xDC42FC
    // private DisconnectedReason <disconnectedReason>k__BackingField
    // Size: 0x4
    // Offset: 0xC4
    GlobalNamespace::DisconnectedReason disconnectedReason;
    // Field size check
    static_assert(sizeof(GlobalNamespace::DisconnectedReason) == 0x4);
    // private System.Single _startTime
    // Size: 0x4
    // Offset: 0xC8
    float startTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Boolean _levelStartedOnTime
    // Size: 0x1
    // Offset: 0xCC
    bool levelStartedOnTime;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: LobbyGameStateController
    LobbyGameStateController(GlobalNamespace::ILobbyPlayersDataModel* lobbyPlayersDataModel_ = {}, GlobalNamespace::PlayerDataModel* playerDataModel_ = {}, GlobalNamespace::IMenuRpcManager* menuRpcManager_ = {}, GlobalNamespace::IMultiplayerSessionManager* multiplayerSessionManager_ = {}, GlobalNamespace::MultiplayerLevelLoader* multiplayerLevelLoader_ = {}, GlobalNamespace::MenuTransitionsHelper* menuTransitionsHelper_ = {}, GlobalNamespace::LobbyGameState* lobbyGameState_ = {}, System::Action* gameStartedEvent_ = {}, System::Action* gameStartCancelledEvent_ = {}, System::Action* countdownStartedEvent_ = {}, System::Action* countdownCancelledEvent_ = {}, System::Action* songStillDownloadingEvent_ = {}, System::Action* startTimeChangedEvent_ = {}, System::Action_1<GlobalNamespace::MultiplayerGameState>* multiplayerGameStateChangedEvent_ = {}, System::Action_3<GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO*, GlobalNamespace::LevelCompletionResults*, System::Collections::Generic::Dictionary_2<::Il2CppString*, GlobalNamespace::LevelCompletionResults*>*>* levelFinishedEvent_ = {}, System::Action_1<GlobalNamespace::DisconnectedReason>* levelDidGetDisconnectedEvent_ = {}, System::Action* lobbyDisconnectedEvent_ = {}, System::Action* beforeSceneSwitchCallback_ = {}, bool levelStartInitiated_ = {}, GlobalNamespace::BeatmapIdentifierNetSerializable* startedBeatmapId_ = {}, bool countdownStarted_ = {}, float countdownEndTime_ = {}, GlobalNamespace::MultiplayerLobbyState state_ = {}, GlobalNamespace::MultiplayerGameType gameType_ = {}, bool isDisconnected_ = {}, GlobalNamespace::DisconnectedReason disconnectedReason_ = {}, float startTime_ = {}, bool levelStartedOnTime_ = {}) noexcept : lobbyPlayersDataModel{lobbyPlayersDataModel_}, playerDataModel{playerDataModel_}, menuRpcManager{menuRpcManager_}, multiplayerSessionManager{multiplayerSessionManager_}, multiplayerLevelLoader{multiplayerLevelLoader_}, menuTransitionsHelper{menuTransitionsHelper_}, lobbyGameState{lobbyGameState_}, gameStartedEvent{gameStartedEvent_}, gameStartCancelledEvent{gameStartCancelledEvent_}, countdownStartedEvent{countdownStartedEvent_}, countdownCancelledEvent{countdownCancelledEvent_}, songStillDownloadingEvent{songStillDownloadingEvent_}, startTimeChangedEvent{startTimeChangedEvent_}, multiplayerGameStateChangedEvent{multiplayerGameStateChangedEvent_}, levelFinishedEvent{levelFinishedEvent_}, levelDidGetDisconnectedEvent{levelDidGetDisconnectedEvent_}, lobbyDisconnectedEvent{lobbyDisconnectedEvent_}, beforeSceneSwitchCallback{beforeSceneSwitchCallback_}, levelStartInitiated{levelStartInitiated_}, startedBeatmapId{startedBeatmapId_}, countdownStarted{countdownStarted_}, countdownEndTime{countdownEndTime_}, state{state_}, gameType{gameType_}, isDisconnected{isDisconnected_}, disconnectedReason{disconnectedReason_}, startTime{startTime_}, levelStartedOnTime{levelStartedOnTime_} {}
    // Creating interface conversion operator: operator GlobalNamespace::ILobbyHostGameStateController
    operator GlobalNamespace::ILobbyHostGameStateController() noexcept {
      return *reinterpret_cast<GlobalNamespace::ILobbyHostGameStateController*>(this);
    }
    // Creating interface conversion operator: operator System::IDisposable
    operator System::IDisposable() noexcept {
      return *reinterpret_cast<System::IDisposable*>(this);
    }
    // public System.Void add_multiplayerGameStateChangedEvent(System.Action`1<MultiplayerGameState> value)
    // Offset: 0x1AC9C38
    void add_multiplayerGameStateChangedEvent(System::Action_1<GlobalNamespace::MultiplayerGameState>* value);
    // public System.Void remove_multiplayerGameStateChangedEvent(System.Action`1<MultiplayerGameState> value)
    // Offset: 0x1AC9CDC
    void remove_multiplayerGameStateChangedEvent(System::Action_1<GlobalNamespace::MultiplayerGameState>* value);
    // private System.Void set_levelStartInitiated(System.Boolean value)
    // Offset: 0x1ACA414
    void set_levelStartInitiated(bool value);
    // private System.Void set_startedBeatmapId(BeatmapIdentifierNetSerializable value)
    // Offset: 0x1ACA428
    void set_startedBeatmapId(GlobalNamespace::BeatmapIdentifierNetSerializable* value);
    // private System.Void set_countdownStarted(System.Boolean value)
    // Offset: 0x1ACA438
    void set_countdownStarted(bool value);
    // private System.Void set_countdownEndTime(System.Single value)
    // Offset: 0x1ACA44C
    void set_countdownEndTime(float value);
    // private System.Void set_state(MultiplayerLobbyState value)
    // Offset: 0x1ACA45C
    void set_state(GlobalNamespace::MultiplayerLobbyState value);
    // private System.Void set_gameType(MultiplayerGameType value)
    // Offset: 0x1ACA46C
    void set_gameType(GlobalNamespace::MultiplayerGameType value);
    // private System.Void set_isDisconnected(System.Boolean value)
    // Offset: 0x1ACA47C
    void set_isDisconnected(bool value);
    // private System.Void set_disconnectedReason(DisconnectedReason value)
    // Offset: 0x1ACA490
    void set_disconnectedReason(GlobalNamespace::DisconnectedReason value);
    // private System.Void HandleMultiplayerSessionManagerDisconnected(DisconnectedReason disconnectedReason)
    // Offset: 0x1ACC004
    void HandleMultiplayerSessionManagerDisconnected(GlobalNamespace::DisconnectedReason disconnectedReason);
    // private System.Void HandleGameStateDidChange(MultiplayerGameState newGameState)
    // Offset: 0x1ACC028
    void HandleGameStateDidChange(GlobalNamespace::MultiplayerGameState newGameState);
    // private System.Void HandleMenuRpcManagerGetMultiplayerGameState(System.String userId)
    // Offset: 0x1ACC124
    void HandleMenuRpcManagerGetMultiplayerGameState(::Il2CppString* userId);
    // private System.Void HandleMenuRpcManagerSetMultiplayerGameState(System.String userId, MultiplayerGameState newGameState)
    // Offset: 0x1ACC26C
    void HandleMenuRpcManagerSetMultiplayerGameState(::Il2CppString* userId, GlobalNamespace::MultiplayerGameState newGameState);
    // private System.Void StopListeningToGameStart()
    // Offset: 0x1ACC2FC
    void StopListeningToGameStart();
    // private System.Void HandleMenuRpcManagerGetStartedLevel(System.String userId)
    // Offset: 0x1ACC540
    void HandleMenuRpcManagerGetStartedLevel(::Il2CppString* userId);
    // private System.Void HandleMenuRpcManagerStartedLevel(System.String userId, BeatmapIdentifierNetSerializable beatmapId, GameplayModifiers gameplayModifiers, System.Single startTime)
    // Offset: 0x1ACC804
    void HandleMenuRpcManagerStartedLevel(::Il2CppString* userId, GlobalNamespace::BeatmapIdentifierNetSerializable* beatmapId, GlobalNamespace::GameplayModifiers* gameplayModifiers, float startTime);
    // private System.Void HandleMenuRpcManagerCancelledLevelStart(System.String userId)
    // Offset: 0x1ACCA00
    void HandleMenuRpcManagerCancelledLevelStart(::Il2CppString* userId);
    // private System.Void HandleMenuRpcManagerSetCountdownEndTime(System.String userId, System.Single countdownTime)
    // Offset: 0x1ACCA64
    void HandleMenuRpcManagerSetCountdownEndTime(::Il2CppString* userId, float countdownTime);
    // private System.Void HandleMenuRpcManagerCancelCountdown(System.String userId)
    // Offset: 0x1ACCC54
    void HandleMenuRpcManagerCancelCountdown(::Il2CppString* userId);
    // private System.Void HandleMenuRpcManagerSetStartGameTime(System.String userId, System.Single startTime)
    // Offset: 0x1ACCE34
    void HandleMenuRpcManagerSetStartGameTime(::Il2CppString* userId, float startTime);
    // private System.Void HandleStartTimeChanged()
    // Offset: 0x1ACCE70
    void HandleStartTimeChanged();
    // private System.Void HandleMultiplayerLevelLoaderStillDownloadingSong()
    // Offset: 0x1ACCE90
    void HandleMultiplayerLevelLoaderStillDownloadingSong();
    // private System.Void HandleMultiplayerLevelLoaderCountdownFinished(IPreviewBeatmapLevel previewBeatmapLevel, BeatmapDifficulty beatmapDifficulty, BeatmapCharacteristicSO beatmapCharacteristic, IDifficultyBeatmap difficultyBeatmap, GameplayModifiers gameplayModifiers)
    // Offset: 0x1ACCEA4
    void HandleMultiplayerLevelLoaderCountdownFinished(GlobalNamespace::IPreviewBeatmapLevel* previewBeatmapLevel, GlobalNamespace::BeatmapDifficulty beatmapDifficulty, GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic, GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap, GlobalNamespace::GameplayModifiers* gameplayModifiers);
    // private System.Void StartMultiplayerLevel(IPreviewBeatmapLevel previewBeatmapLevel, BeatmapDifficulty beatmapDifficulty, BeatmapCharacteristicSO beatmapCharacteristic, IDifficultyBeatmap difficultyBeatmap, GameplayModifiers gameplayModifiers, System.Action beforeSceneSwitchCallback)
    // Offset: 0x1ACD284
    void StartMultiplayerLevel(GlobalNamespace::IPreviewBeatmapLevel* previewBeatmapLevel, GlobalNamespace::BeatmapDifficulty beatmapDifficulty, GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic, GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap, GlobalNamespace::GameplayModifiers* gameplayModifiers, System::Action* beforeSceneSwitchCallback);
    // private System.Void HandleMultiplayerLevelDidFinish(MultiplayerLevelScenesTransitionSetupDataSO multiplayerLevelScenesTransitionSetupData, LevelCompletionResults myCompletionResults, System.Collections.Generic.Dictionary`2<System.String,LevelCompletionResults> othersCompletionResults)
    // Offset: 0x1ACD41C
    void HandleMultiplayerLevelDidFinish(GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO* multiplayerLevelScenesTransitionSetupData, GlobalNamespace::LevelCompletionResults* myCompletionResults, System::Collections::Generic::Dictionary_2<::Il2CppString*, GlobalNamespace::LevelCompletionResults*>* othersCompletionResults);
    // private System.Void HandleMultiplayerLevelDidDisconnect(DisconnectedReason disconnectedReason)
    // Offset: 0x1ACD4CC
    void HandleMultiplayerLevelDidDisconnect(GlobalNamespace::DisconnectedReason disconnectedReason);
    // private System.Void StopLoading()
    // Offset: 0x1ACBF1C
    void StopLoading();
    // public System.Void add_gameStartedEvent(System.Action value)
    // Offset: 0x1AC9488
    // Implemented from: ILobbyGameStateController
    // Base method: System.Void ILobbyGameStateController::add_gameStartedEvent(System.Action value)
    void add_gameStartedEvent(System::Action* value);
    // public System.Void remove_gameStartedEvent(System.Action value)
    // Offset: 0x1AC952C
    // Implemented from: ILobbyGameStateController
    // Base method: System.Void ILobbyGameStateController::remove_gameStartedEvent(System.Action value)
    void remove_gameStartedEvent(System::Action* value);
    // public System.Void add_gameStartCancelledEvent(System.Action value)
    // Offset: 0x1AC95D0
    // Implemented from: ILobbyGameStateController
    // Base method: System.Void ILobbyGameStateController::add_gameStartCancelledEvent(System.Action value)
    void add_gameStartCancelledEvent(System::Action* value);
    // public System.Void remove_gameStartCancelledEvent(System.Action value)
    // Offset: 0x1AC9674
    // Implemented from: ILobbyGameStateController
    // Base method: System.Void ILobbyGameStateController::remove_gameStartCancelledEvent(System.Action value)
    void remove_gameStartCancelledEvent(System::Action* value);
    // public System.Void add_countdownStartedEvent(System.Action value)
    // Offset: 0x1AC9718
    // Implemented from: ILobbyGameStateController
    // Base method: System.Void ILobbyGameStateController::add_countdownStartedEvent(System.Action value)
    void add_countdownStartedEvent(System::Action* value);
    // public System.Void remove_countdownStartedEvent(System.Action value)
    // Offset: 0x1AC97BC
    // Implemented from: ILobbyGameStateController
    // Base method: System.Void ILobbyGameStateController::remove_countdownStartedEvent(System.Action value)
    void remove_countdownStartedEvent(System::Action* value);
    // public System.Void add_countdownCancelledEvent(System.Action value)
    // Offset: 0x1AC9860
    // Implemented from: ILobbyGameStateController
    // Base method: System.Void ILobbyGameStateController::add_countdownCancelledEvent(System.Action value)
    void add_countdownCancelledEvent(System::Action* value);
    // public System.Void remove_countdownCancelledEvent(System.Action value)
    // Offset: 0x1AC9904
    // Implemented from: ILobbyGameStateController
    // Base method: System.Void ILobbyGameStateController::remove_countdownCancelledEvent(System.Action value)
    void remove_countdownCancelledEvent(System::Action* value);
    // public System.Void add_songStillDownloadingEvent(System.Action value)
    // Offset: 0x1AC99A8
    // Implemented from: ILobbyGameStateController
    // Base method: System.Void ILobbyGameStateController::add_songStillDownloadingEvent(System.Action value)
    void add_songStillDownloadingEvent(System::Action* value);
    // public System.Void remove_songStillDownloadingEvent(System.Action value)
    // Offset: 0x1AC9A4C
    // Implemented from: ILobbyGameStateController
    // Base method: System.Void ILobbyGameStateController::remove_songStillDownloadingEvent(System.Action value)
    void remove_songStillDownloadingEvent(System::Action* value);
    // public System.Void add_startTimeChangedEvent(System.Action value)
    // Offset: 0x1AC9AF0
    // Implemented from: ILobbyGameStateController
    // Base method: System.Void ILobbyGameStateController::add_startTimeChangedEvent(System.Action value)
    void add_startTimeChangedEvent(System::Action* value);
    // public System.Void remove_startTimeChangedEvent(System.Action value)
    // Offset: 0x1AC9B94
    // Implemented from: ILobbyGameStateController
    // Base method: System.Void ILobbyGameStateController::remove_startTimeChangedEvent(System.Action value)
    void remove_startTimeChangedEvent(System::Action* value);
    // public System.Void add_levelFinishedEvent(System.Action`3<MultiplayerLevelScenesTransitionSetupDataSO,LevelCompletionResults,System.Collections.Generic.Dictionary`2<System.String,LevelCompletionResults>> value)
    // Offset: 0x1AC9D80
    // Implemented from: ILobbyGameStateController
    // Base method: System.Void ILobbyGameStateController::add_levelFinishedEvent(System.Action`3<MultiplayerLevelScenesTransitionSetupDataSO,LevelCompletionResults,System.Collections.Generic.Dictionary`2<System.String,LevelCompletionResults>> value)
    void add_levelFinishedEvent(System::Action_3<GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO*, GlobalNamespace::LevelCompletionResults*, System::Collections::Generic::Dictionary_2<::Il2CppString*, GlobalNamespace::LevelCompletionResults*>*>* value);
    // public System.Void remove_levelFinishedEvent(System.Action`3<MultiplayerLevelScenesTransitionSetupDataSO,LevelCompletionResults,System.Collections.Generic.Dictionary`2<System.String,LevelCompletionResults>> value)
    // Offset: 0x1AC9E24
    // Implemented from: ILobbyGameStateController
    // Base method: System.Void ILobbyGameStateController::remove_levelFinishedEvent(System.Action`3<MultiplayerLevelScenesTransitionSetupDataSO,LevelCompletionResults,System.Collections.Generic.Dictionary`2<System.String,LevelCompletionResults>> value)
    void remove_levelFinishedEvent(System::Action_3<GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO*, GlobalNamespace::LevelCompletionResults*, System::Collections::Generic::Dictionary_2<::Il2CppString*, GlobalNamespace::LevelCompletionResults*>*>* value);
    // public System.Void add_levelDidGetDisconnectedEvent(System.Action`1<DisconnectedReason> value)
    // Offset: 0x1AC9EC8
    // Implemented from: ILobbyGameStateController
    // Base method: System.Void ILobbyGameStateController::add_levelDidGetDisconnectedEvent(System.Action`1<DisconnectedReason> value)
    void add_levelDidGetDisconnectedEvent(System::Action_1<GlobalNamespace::DisconnectedReason>* value);
    // public System.Void remove_levelDidGetDisconnectedEvent(System.Action`1<DisconnectedReason> value)
    // Offset: 0x1AC9F6C
    // Implemented from: ILobbyGameStateController
    // Base method: System.Void ILobbyGameStateController::remove_levelDidGetDisconnectedEvent(System.Action`1<DisconnectedReason> value)
    void remove_levelDidGetDisconnectedEvent(System::Action_1<GlobalNamespace::DisconnectedReason>* value);
    // public System.Void add_lobbyDisconnectedEvent(System.Action value)
    // Offset: 0x1ACA010
    // Implemented from: ILobbyGameStateController
    // Base method: System.Void ILobbyGameStateController::add_lobbyDisconnectedEvent(System.Action value)
    void add_lobbyDisconnectedEvent(System::Action* value);
    // public System.Void remove_lobbyDisconnectedEvent(System.Action value)
    // Offset: 0x1ACA0B4
    // Implemented from: ILobbyGameStateController
    // Base method: System.Void ILobbyGameStateController::remove_lobbyDisconnectedEvent(System.Action value)
    void remove_lobbyDisconnectedEvent(System::Action* value);
    // public System.Void add_beforeSceneSwitchCallback(System.Action value)
    // Offset: 0x1ACA158
    // Implemented from: ILobbyGameStateController
    // Base method: System.Void ILobbyGameStateController::add_beforeSceneSwitchCallback(System.Action value)
    void add_beforeSceneSwitchCallback(System::Action* value);
    // public System.Void remove_beforeSceneSwitchCallback(System.Action value)
    // Offset: 0x1ACA1FC
    // Implemented from: ILobbyGameStateController
    // Base method: System.Void ILobbyGameStateController::remove_beforeSceneSwitchCallback(System.Action value)
    void remove_beforeSceneSwitchCallback(System::Action* value);
    // public System.Single get_startTime()
    // Offset: 0x1ACA2A0
    // Implemented from: ILobbyGameStateController
    // Base method: System.Single ILobbyGameStateController::get_startTime()
    float get_startTime();
    // public System.Void set_startTime(System.Single value)
    // Offset: 0x1ACA2A8
    // Implemented from: ILobbyGameStateController
    // Base method: System.Void ILobbyGameStateController::set_startTime(System.Single value)
    void set_startTime(float value);
    // public System.Boolean get_levelStartInitiated()
    // Offset: 0x1ACA40C
    // Implemented from: ILobbyGameStateController
    // Base method: System.Boolean ILobbyGameStateController::get_levelStartInitiated()
    bool get_levelStartInitiated();
    // public BeatmapIdentifierNetSerializable get_startedBeatmapId()
    // Offset: 0x1ACA420
    // Implemented from: ILobbyGameStateController
    // Base method: BeatmapIdentifierNetSerializable ILobbyGameStateController::get_startedBeatmapId()
    GlobalNamespace::BeatmapIdentifierNetSerializable* get_startedBeatmapId();
    // public System.Boolean get_countdownStarted()
    // Offset: 0x1ACA430
    // Implemented from: ILobbyGameStateController
    // Base method: System.Boolean ILobbyGameStateController::get_countdownStarted()
    bool get_countdownStarted();
    // public System.Single get_countdownEndTime()
    // Offset: 0x1ACA444
    // Implemented from: ILobbyGameStateController
    // Base method: System.Single ILobbyGameStateController::get_countdownEndTime()
    float get_countdownEndTime();
    // public MultiplayerLobbyState get_state()
    // Offset: 0x1ACA454
    // Implemented from: ILobbyGameStateController
    // Base method: MultiplayerLobbyState ILobbyGameStateController::get_state()
    GlobalNamespace::MultiplayerLobbyState get_state();
    // public MultiplayerGameType get_gameType()
    // Offset: 0x1ACA464
    // Implemented from: ILobbyGameStateController
    // Base method: MultiplayerGameType ILobbyGameStateController::get_gameType()
    GlobalNamespace::MultiplayerGameType get_gameType();
    // public System.Boolean get_isDisconnected()
    // Offset: 0x1ACA474
    // Implemented from: ILobbyGameStateController
    // Base method: System.Boolean ILobbyGameStateController::get_isDisconnected()
    bool get_isDisconnected();
    // public DisconnectedReason get_disconnectedReason()
    // Offset: 0x1ACA488
    // Implemented from: ILobbyGameStateController
    // Base method: DisconnectedReason ILobbyGameStateController::get_disconnectedReason()
    GlobalNamespace::DisconnectedReason get_disconnectedReason();
    // public System.Void Activate()
    // Offset: 0x1ACA498
    // Implemented from: ILobbyGameStateController
    // Base method: System.Void ILobbyGameStateController::Activate()
    void Activate();
    // public System.Void Deactivate()
    // Offset: 0x1ACA944
    // Implemented from: ILobbyGameStateController
    // Base method: System.Void ILobbyGameStateController::Deactivate()
    void Deactivate();
    // public System.Void Dispose()
    // Offset: 0x1ACAFEC
    // Implemented from: System.IDisposable
    // Base method: System.Void IDisposable::Dispose()
    void Dispose();
    // Creating proxy method: System_IDisposable_Dispose
    // Maps to method: Dispose
    void System_IDisposable_Dispose();
    // public System.Void StartListeningToGameStart()
    // Offset: 0x1ACAFF0
    // Implemented from: ILobbyGameStateController
    // Base method: System.Void ILobbyGameStateController::StartListeningToGameStart()
    void StartListeningToGameStart();
    // public System.Void GetCurrentLevelIfGameStarted()
    // Offset: 0x1ACB738
    // Implemented from: ILobbyGameStateController
    // Base method: System.Void ILobbyGameStateController::GetCurrentLevelIfGameStarted()
    void GetCurrentLevelIfGameStarted();
    // public System.Void SetMultiplayerGameType(MultiplayerGameType multiplayerGameType)
    // Offset: 0x1ACB7EC
    // Implemented from: ILobbyGameStateController
    // Base method: System.Void ILobbyGameStateController::SetMultiplayerGameType(MultiplayerGameType multiplayerGameType)
    void SetMultiplayerGameType(GlobalNamespace::MultiplayerGameType multiplayerGameType);
    // public System.Void ClearDisconnectedState()
    // Offset: 0x1ACAFDC
    // Implemented from: ILobbyGameStateController
    // Base method: System.Void ILobbyGameStateController::ClearDisconnectedState()
    void ClearDisconnectedState();
    // public System.Void StartGame()
    // Offset: 0x1ACB7F4
    // Implemented from: ILobbyHostGameStateController
    // Base method: System.Void ILobbyHostGameStateController::StartGame()
    void StartGame();
    // public System.Void CancelGame()
    // Offset: 0x1ACBDD0
    // Implemented from: ILobbyHostGameStateController
    // Base method: System.Void ILobbyHostGameStateController::CancelGame()
    void CancelGame();
    // public System.Void .ctor()
    // Offset: 0x1ACD560
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LobbyGameStateController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::LobbyGameStateController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LobbyGameStateController*, creationType>()));
    }
  }; // LobbyGameStateController
  static check_size<sizeof(LobbyGameStateController), 204 + sizeof(bool)> __GlobalNamespace_LobbyGameStateControllerSizeCheck;
  static_assert(sizeof(LobbyGameStateController) == 0xCD);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LobbyGameStateController*, "", "LobbyGameStateController");
#pragma pack(pop)
