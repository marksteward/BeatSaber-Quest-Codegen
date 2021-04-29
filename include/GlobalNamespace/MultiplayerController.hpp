// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: MultiplayerPlayerStartState
#include "GlobalNamespace/MultiplayerPlayerStartState.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MultiplayerResultsData
  class MultiplayerResultsData;
  // Forward declaring type: MultiplayerLevelScenesTransitionSetupDataSO
  class MultiplayerLevelScenesTransitionSetupDataSO;
  // Forward declaring type: GameScenesManager
  class GameScenesManager;
  // Forward declaring type: MultiplayerPlayersManager
  class MultiplayerPlayersManager;
  // Forward declaring type: SceneStartSyncController
  class SceneStartSyncController;
  // Forward declaring type: SongStartSyncController
  class SongStartSyncController;
  // Forward declaring type: MultiplayerLevelFinishedController
  class MultiplayerLevelFinishedController;
  // Forward declaring type: FadeInOutController
  class FadeInOutController;
  // Forward declaring type: IMultiplayerSessionManager
  class IMultiplayerSessionManager;
  // Forward declaring type: LobbyGameState
  class LobbyGameState;
  // Forward declaring type: MultiplayerIntroAnimationController
  class MultiplayerIntroAnimationController;
  // Forward declaring type: MultiplayerOutroAnimationController
  class MultiplayerOutroAnimationController;
  // Forward declaring type: IMenuRpcManager
  class IMenuRpcManager;
  // Forward declaring type: IGameplayRpcManager
  class IGameplayRpcManager;
  // Forward declaring type: GameplayCoreSceneSetupData
  class GameplayCoreSceneSetupData;
  // Forward declaring type: MultiplayerBadgesProvider
  class MultiplayerBadgesProvider;
  // Forward declaring type: PlayersSpecificSettingsAtGameStartModel
  class PlayersSpecificSettingsAtGameStartModel;
  // Skipping declaration: State because it is already included!
  // Forward declaring type: MultiplayerGameState
  struct MultiplayerGameState;
  // Forward declaring type: LevelCompletionResults
  class LevelCompletionResults;
  // Forward declaring type: DisconnectedReason
  struct DisconnectedReason;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
  // Forward declaring type: Coroutine
  class Coroutine;
}
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: DiContainer
  class DiContainer;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
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
  // Size: 0xD8
  #pragma pack(push, 1)
  // Autogenerated type: MultiplayerController
  class MultiplayerController : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::MultiplayerController::State
    struct State;
    // Nested type: GlobalNamespace::MultiplayerController::$PerformSongStartSync$d__38
    class $PerformSongStartSync$d__38;
    // Nested type: GlobalNamespace::MultiplayerController::$$c__DisplayClass43_0
    class $$c__DisplayClass43_0;
    // Nested type: GlobalNamespace::MultiplayerController::$$c
    class $$c;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: MultiplayerController/State
    struct State/*, public System::Enum*/ {
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // Creating value type constructor for type: State
      constexpr State(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator System::Enum
      operator System::Enum() noexcept {
        return *reinterpret_cast<System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public MultiplayerController/State CheckingLobbyState
      static constexpr const int CheckingLobbyState = 0;
      // Get static field: static public MultiplayerController/State CheckingLobbyState
      static GlobalNamespace::MultiplayerController::State _get_CheckingLobbyState();
      // Set static field: static public MultiplayerController/State CheckingLobbyState
      static void _set_CheckingLobbyState(GlobalNamespace::MultiplayerController::State value);
      // static field const value: static public MultiplayerController/State WaitingForPlayers
      static constexpr const int WaitingForPlayers = 1;
      // Get static field: static public MultiplayerController/State WaitingForPlayers
      static GlobalNamespace::MultiplayerController::State _get_WaitingForPlayers();
      // Set static field: static public MultiplayerController/State WaitingForPlayers
      static void _set_WaitingForPlayers(GlobalNamespace::MultiplayerController::State value);
      // static field const value: static public MultiplayerController/State SongStartSync
      static constexpr const int SongStartSync = 2;
      // Get static field: static public MultiplayerController/State SongStartSync
      static GlobalNamespace::MultiplayerController::State _get_SongStartSync();
      // Set static field: static public MultiplayerController/State SongStartSync
      static void _set_SongStartSync(GlobalNamespace::MultiplayerController::State value);
      // static field const value: static public MultiplayerController/State Intro
      static constexpr const int Intro = 3;
      // Get static field: static public MultiplayerController/State Intro
      static GlobalNamespace::MultiplayerController::State _get_Intro();
      // Set static field: static public MultiplayerController/State Intro
      static void _set_Intro(GlobalNamespace::MultiplayerController::State value);
      // static field const value: static public MultiplayerController/State Gameplay
      static constexpr const int Gameplay = 4;
      // Get static field: static public MultiplayerController/State Gameplay
      static GlobalNamespace::MultiplayerController::State _get_Gameplay();
      // Set static field: static public MultiplayerController/State Gameplay
      static void _set_Gameplay(GlobalNamespace::MultiplayerController::State value);
      // static field const value: static public MultiplayerController/State Outro
      static constexpr const int Outro = 5;
      // Get static field: static public MultiplayerController/State Outro
      static GlobalNamespace::MultiplayerController::State _get_Outro();
      // Set static field: static public MultiplayerController/State Outro
      static void _set_Outro(GlobalNamespace::MultiplayerController::State value);
      // static field const value: static public MultiplayerController/State Finished
      static constexpr const int Finished = 6;
      // Get static field: static public MultiplayerController/State Finished
      static GlobalNamespace::MultiplayerController::State _get_Finished();
      // Set static field: static public MultiplayerController/State Finished
      static void _set_Finished(GlobalNamespace::MultiplayerController::State value);
    }; // MultiplayerController/State
    #pragma pack(pop)
    static check_size<sizeof(MultiplayerController::State), 0 + sizeof(int)> __GlobalNamespace_MultiplayerController_StateSizeCheck;
    static_assert(sizeof(MultiplayerController::State) == 0x4);
    // private UnityEngine.GameObject _loadingEnvironment
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::GameObject* loadingEnvironment;
    // Field size check
    static_assert(sizeof(UnityEngine::GameObject*) == 0x8);
    // [SpaceAttribute] Offset: 0xD3D79C
    // private MultiplayerLevelScenesTransitionSetupDataSO _multiplayerLevelSceneSetupData
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO* multiplayerLevelSceneSetupData;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO*) == 0x8);
    // [InjectAttribute] Offset: 0xD3D7D4
    // private readonly GameScenesManager _gameScenesManager
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::GameScenesManager* gameScenesManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::GameScenesManager*) == 0x8);
    // [InjectAttribute] Offset: 0xD3D7E4
    // private readonly MultiplayerPlayersManager _playersManager
    // Size: 0x8
    // Offset: 0x30
    GlobalNamespace::MultiplayerPlayersManager* playersManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MultiplayerPlayersManager*) == 0x8);
    // [InjectAttribute] Offset: 0xD3D7F4
    // private readonly SceneStartSyncController _sceneStartSyncController
    // Size: 0x8
    // Offset: 0x38
    GlobalNamespace::SceneStartSyncController* sceneStartSyncController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::SceneStartSyncController*) == 0x8);
    // [InjectAttribute] Offset: 0xD3D804
    // private readonly SongStartSyncController _songStartSyncController
    // Size: 0x8
    // Offset: 0x40
    GlobalNamespace::SongStartSyncController* songStartSyncController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::SongStartSyncController*) == 0x8);
    // [InjectAttribute] Offset: 0xD3D814
    // private readonly MultiplayerLevelFinishedController _multiplayerLevelFinishedController
    // Size: 0x8
    // Offset: 0x48
    GlobalNamespace::MultiplayerLevelFinishedController* multiplayerLevelFinishedController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MultiplayerLevelFinishedController*) == 0x8);
    // [InjectAttribute] Offset: 0xD3D824
    // private readonly FadeInOutController _fadeInOutController
    // Size: 0x8
    // Offset: 0x50
    GlobalNamespace::FadeInOutController* fadeInOutController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::FadeInOutController*) == 0x8);
    // [InjectAttribute] Offset: 0xD3D834
    // private readonly IMultiplayerSessionManager _multiplayerSessionManager
    // Size: 0x8
    // Offset: 0x58
    GlobalNamespace::IMultiplayerSessionManager* multiplayerSessionManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IMultiplayerSessionManager*) == 0x8);
    // [InjectAttribute] Offset: 0xD3D844
    // private readonly LobbyGameState _lobbyGameState
    // Size: 0x8
    // Offset: 0x60
    GlobalNamespace::LobbyGameState* lobbyGameState;
    // Field size check
    static_assert(sizeof(GlobalNamespace::LobbyGameState*) == 0x8);
    // [InjectAttribute] Offset: 0xD3D854
    // private readonly MultiplayerIntroAnimationController _introAnimationController
    // Size: 0x8
    // Offset: 0x68
    GlobalNamespace::MultiplayerIntroAnimationController* introAnimationController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MultiplayerIntroAnimationController*) == 0x8);
    // [InjectAttribute] Offset: 0xD3D864
    // private readonly MultiplayerOutroAnimationController _outroAnimationController
    // Size: 0x8
    // Offset: 0x70
    GlobalNamespace::MultiplayerOutroAnimationController* outroAnimationController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MultiplayerOutroAnimationController*) == 0x8);
    // [InjectAttribute] Offset: 0xD3D874
    // private readonly IMenuRpcManager _menuRpcManager
    // Size: 0x8
    // Offset: 0x78
    GlobalNamespace::IMenuRpcManager* menuRpcManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IMenuRpcManager*) == 0x8);
    // [InjectAttribute] Offset: 0xD3D884
    // private readonly IGameplayRpcManager _gameplayRpcManager
    // Size: 0x8
    // Offset: 0x80
    GlobalNamespace::IGameplayRpcManager* gameplayRpcManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IGameplayRpcManager*) == 0x8);
    // [InjectAttribute] Offset: 0xD3D894
    // private readonly GameplayCoreSceneSetupData _sceneSetupData
    // Size: 0x8
    // Offset: 0x88
    GlobalNamespace::GameplayCoreSceneSetupData* sceneSetupData;
    // Field size check
    static_assert(sizeof(GlobalNamespace::GameplayCoreSceneSetupData*) == 0x8);
    // [InjectAttribute] Offset: 0xD3D8A4
    // private readonly Zenject.DiContainer _diContainer
    // Size: 0x8
    // Offset: 0x90
    Zenject::DiContainer* diContainer;
    // Field size check
    static_assert(sizeof(Zenject::DiContainer*) == 0x8);
    // [InjectAttribute] Offset: 0xD3D8B4
    // private readonly MultiplayerBadgesProvider _badgesProvider
    // Size: 0x8
    // Offset: 0x98
    GlobalNamespace::MultiplayerBadgesProvider* badgesProvider;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MultiplayerBadgesProvider*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xD3D8C4
    // private System.Action`1<MultiplayerController/State> stateChangedEvent
    // Size: 0x8
    // Offset: 0xA0
    System::Action_1<GlobalNamespace::MultiplayerController::State>* stateChangedEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<GlobalNamespace::MultiplayerController::State>*) == 0x8);
    // private System.Single _startTime
    // Size: 0x4
    // Offset: 0xA8
    float startTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private MultiplayerPlayerStartState _localPlayerSyncStartState
    // Size: 0x4
    // Offset: 0xAC
    GlobalNamespace::MultiplayerPlayerStartState localPlayerSyncStartState;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MultiplayerPlayerStartState) == 0x4);
    // private MultiplayerController/State _state
    // Size: 0x4
    // Offset: 0xB0
    GlobalNamespace::MultiplayerController::State state;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MultiplayerController::State) == 0x4);
    // Padding between fields: state and: sessionGameId
    char __padding20[0x4] = {};
    // private System.String _sessionGameId
    // Size: 0x8
    // Offset: 0xB8
    ::Il2CppString* sessionGameId;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private MultiplayerResultsData _resultsData
    // Size: 0x8
    // Offset: 0xC0
    GlobalNamespace::MultiplayerResultsData* resultsData;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MultiplayerResultsData*) == 0x8);
    // private PlayersSpecificSettingsAtGameStartModel _playersSpecificSettingsAtGameStartModel
    // Size: 0x8
    // Offset: 0xC8
    GlobalNamespace::PlayersSpecificSettingsAtGameStartModel* playersSpecificSettingsAtGameStartModel;
    // Field size check
    static_assert(sizeof(GlobalNamespace::PlayersSpecificSettingsAtGameStartModel*) == 0x8);
    // private UnityEngine.Coroutine _timeoutGetGameStateCoroutine
    // Size: 0x8
    // Offset: 0xD0
    UnityEngine::Coroutine* timeoutGetGameStateCoroutine;
    // Field size check
    static_assert(sizeof(UnityEngine::Coroutine*) == 0x8);
    // Creating value type constructor for type: MultiplayerController
    MultiplayerController(UnityEngine::GameObject* loadingEnvironment_ = {}, GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO* multiplayerLevelSceneSetupData_ = {}, GlobalNamespace::GameScenesManager* gameScenesManager_ = {}, GlobalNamespace::MultiplayerPlayersManager* playersManager_ = {}, GlobalNamespace::SceneStartSyncController* sceneStartSyncController_ = {}, GlobalNamespace::SongStartSyncController* songStartSyncController_ = {}, GlobalNamespace::MultiplayerLevelFinishedController* multiplayerLevelFinishedController_ = {}, GlobalNamespace::FadeInOutController* fadeInOutController_ = {}, GlobalNamespace::IMultiplayerSessionManager* multiplayerSessionManager_ = {}, GlobalNamespace::LobbyGameState* lobbyGameState_ = {}, GlobalNamespace::MultiplayerIntroAnimationController* introAnimationController_ = {}, GlobalNamespace::MultiplayerOutroAnimationController* outroAnimationController_ = {}, GlobalNamespace::IMenuRpcManager* menuRpcManager_ = {}, GlobalNamespace::IGameplayRpcManager* gameplayRpcManager_ = {}, GlobalNamespace::GameplayCoreSceneSetupData* sceneSetupData_ = {}, Zenject::DiContainer* diContainer_ = {}, GlobalNamespace::MultiplayerBadgesProvider* badgesProvider_ = {}, System::Action_1<GlobalNamespace::MultiplayerController::State>* stateChangedEvent_ = {}, float startTime_ = {}, GlobalNamespace::MultiplayerPlayerStartState localPlayerSyncStartState_ = {}, GlobalNamespace::MultiplayerController::State state_ = {}, ::Il2CppString* sessionGameId_ = {}, GlobalNamespace::MultiplayerResultsData* resultsData_ = {}, GlobalNamespace::PlayersSpecificSettingsAtGameStartModel* playersSpecificSettingsAtGameStartModel_ = {}, UnityEngine::Coroutine* timeoutGetGameStateCoroutine_ = {}) noexcept : loadingEnvironment{loadingEnvironment_}, multiplayerLevelSceneSetupData{multiplayerLevelSceneSetupData_}, gameScenesManager{gameScenesManager_}, playersManager{playersManager_}, sceneStartSyncController{sceneStartSyncController_}, songStartSyncController{songStartSyncController_}, multiplayerLevelFinishedController{multiplayerLevelFinishedController_}, fadeInOutController{fadeInOutController_}, multiplayerSessionManager{multiplayerSessionManager_}, lobbyGameState{lobbyGameState_}, introAnimationController{introAnimationController_}, outroAnimationController{outroAnimationController_}, menuRpcManager{menuRpcManager_}, gameplayRpcManager{gameplayRpcManager_}, sceneSetupData{sceneSetupData_}, diContainer{diContainer_}, badgesProvider{badgesProvider_}, stateChangedEvent{stateChangedEvent_}, startTime{startTime_}, localPlayerSyncStartState{localPlayerSyncStartState_}, state{state_}, sessionGameId{sessionGameId_}, resultsData{resultsData_}, playersSpecificSettingsAtGameStartModel{playersSpecificSettingsAtGameStartModel_}, timeoutGetGameStateCoroutine{timeoutGetGameStateCoroutine_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // static field const value: static private System.Single kSongTimeToSongStartSyncTimeOffset
    static constexpr const float kSongTimeToSongStartSyncTimeOffset = -0.6;
    // Get static field: static private System.Single kSongTimeToSongStartSyncTimeOffset
    static float _get_kSongTimeToSongStartSyncTimeOffset();
    // Set static field: static private System.Single kSongTimeToSongStartSyncTimeOffset
    static void _set_kSongTimeToSongStartSyncTimeOffset(float value);
    // static field const value: static private System.Single kMinAnimationDurationPercentage
    static constexpr const float kMinAnimationDurationPercentage = 0.75;
    // Get static field: static private System.Single kMinAnimationDurationPercentage
    static float _get_kMinAnimationDurationPercentage();
    // Set static field: static private System.Single kMinAnimationDurationPercentage
    static void _set_kMinAnimationDurationPercentage(float value);
    // static field const value: static private System.Single kGetMultiplayerGameStateTimeout
    static constexpr const float kGetMultiplayerGameStateTimeout = 20;
    // Get static field: static private System.Single kGetMultiplayerGameStateTimeout
    static float _get_kGetMultiplayerGameStateTimeout();
    // Set static field: static private System.Single kGetMultiplayerGameStateTimeout
    static void _set_kGetMultiplayerGameStateTimeout(float value);
    // public MultiplayerController/State get_state()
    // Offset: 0x107598C
    GlobalNamespace::MultiplayerController::State get_state();
    // public System.Void add_stateChangedEvent(System.Action`1<MultiplayerController/State> value)
    // Offset: 0x1075994
    void add_stateChangedEvent(System::Action_1<GlobalNamespace::MultiplayerController::State>* value);
    // public System.Void remove_stateChangedEvent(System.Action`1<MultiplayerController/State> value)
    // Offset: 0x1075A38
    void remove_stateChangedEvent(System::Action_1<GlobalNamespace::MultiplayerController::State>* value);
    // protected System.Void Start()
    // Offset: 0x1075ADC
    void Start();
    // protected System.Void OnDestroy()
    // Offset: 0x1076488
    void OnDestroy();
    // private System.Void HandleSetMultiplayerGameState(System.String userId, MultiplayerGameState gameState)
    // Offset: 0x1076A80
    void HandleSetMultiplayerGameState(::Il2CppString* userId, GlobalNamespace::MultiplayerGameState gameState);
    // private System.Void CreateAndBindPlayersSpecificSettingsAtGameStartModel()
    // Offset: 0x1075E88
    void CreateAndBindPlayersSpecificSettingsAtGameStartModel();
    // private System.Void StartSceneLoadSync()
    // Offset: 0x107634C
    void StartSceneLoadSync();
    // private System.Collections.IEnumerator PerformSongStartSync(MultiplayerPlayerStartState localPlayerSyncState)
    // Offset: 0x1076CA8
    System::Collections::IEnumerator* PerformSongStartSync(GlobalNamespace::MultiplayerPlayerStartState localPlayerSyncState);
    // private System.Void HandleDidSwitchPlayerToInactive()
    // Offset: 0x1076D54
    void HandleDidSwitchPlayerToInactive();
    // private System.Void HandleSceneStartSyncControllerSyncStartDidSuccess(System.String sessionGameId)
    // Offset: 0x1076FCC
    void HandleSceneStartSyncControllerSyncStartDidSuccess(::Il2CppString* sessionGameId);
    // private System.Void HandleSceneStartSyncControllerSyncStartDidReceiveTooLate(System.String sessionGameId)
    // Offset: 0x1077000
    void HandleSceneStartSyncControllerSyncStartDidReceiveTooLate(::Il2CppString* sessionGameId);
    // private System.Void HandleSceneStartSyncControllerSyncStartDidFail()
    // Offset: 0x1077034
    void HandleSceneStartSyncControllerSyncStartDidFail();
    // private System.Void HandleSongStartSyncControllerSyncStartSuccess(System.Single introAnimationStartSyncTime)
    // Offset: 0x1077310
    void HandleSongStartSyncControllerSyncStartSuccess(float introAnimationStartSyncTime);
    // private System.Void HandleSongStartSyncControllerSyncResume(System.Single introAnimationStartSyncTime)
    // Offset: 0x1078238
    void HandleSongStartSyncControllerSyncResume(float introAnimationStartSyncTime);
    // private System.Void HandleSongStartSyncControllerSyncStartFailed()
    // Offset: 0x1078690
    void HandleSongStartSyncControllerSyncStartFailed();
    // private System.Void StartGameplay(System.Single introAnimationStartSyncTime)
    // Offset: 0x1077A50
    void StartGameplay(float introAnimationStartSyncTime);
    // private System.Void HandleAllResultsCollected(LevelCompletionResults localPlayerResults, System.Collections.Generic.Dictionary`2<System.String,LevelCompletionResults> otherPlayerResults)
    // Offset: 0x1078788
    void HandleAllResultsCollected(GlobalNamespace::LevelCompletionResults* localPlayerResults, System::Collections::Generic::Dictionary_2<::Il2CppString*, GlobalNamespace::LevelCompletionResults*>* otherPlayerResults);
    // private System.Void EndGameplay(LevelCompletionResults localPlayerResults, System.Collections.Generic.Dictionary`2<System.String,LevelCompletionResults> otherPlayerResults)
    // Offset: 0x1077078
    void EndGameplay(GlobalNamespace::LevelCompletionResults* localPlayerResults, System::Collections::Generic::Dictionary_2<::Il2CppString*, GlobalNamespace::LevelCompletionResults*>* otherPlayerResults);
    // private System.Void HandleOutroAnimationDidFinish()
    // Offset: 0x107878C
    void HandleOutroAnimationDidFinish();
    // private System.Void HandleRpcReturnToMenu(System.String userId)
    // Offset: 0x10787C0
    void HandleRpcReturnToMenu(::Il2CppString* userId);
    // private System.Void HandleDisconnected(DisconnectedReason disconnectedReason)
    // Offset: 0x1078888
    void HandleDisconnected(GlobalNamespace::DisconnectedReason disconnectedReason);
    // private System.Void ChangeState(MultiplayerController/State newState)
    // Offset: 0x10762D4
    void ChangeState(GlobalNamespace::MultiplayerController::State newState);
    // private System.Single GetCurrentSongTime(System.Single songStartSyncTime)
    // Offset: 0x1076F04
    float GetCurrentSongTime(float songStartSyncTime);
    // private System.Single GetSongStartSyncTime(System.Single introAnimationStartSyncTime)
    // Offset: 0x1076EC8
    float GetSongStartSyncTime(float introAnimationStartSyncTime);
    // public System.Void .ctor()
    // Offset: 0x1078938
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MultiplayerController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MultiplayerController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MultiplayerController*, creationType>()));
    }
  }; // MultiplayerController
  #pragma pack(pop)
  static check_size<sizeof(MultiplayerController), 208 + sizeof(UnityEngine::Coroutine*)> __GlobalNamespace_MultiplayerControllerSizeCheck;
  static_assert(sizeof(MultiplayerController) == 0xD8);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerController*, "", "MultiplayerController");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerController::State, "", "MultiplayerController/State");
