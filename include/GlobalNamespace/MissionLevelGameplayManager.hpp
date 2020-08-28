// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: ILevelEndActions
#include "GlobalNamespace/ILevelEndActions.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MissionObjectiveCheckersManager
  class MissionObjectiveCheckersManager;
  // Forward declaring type: GameScenesManager
  class GameScenesManager;
  // Forward declaring type: GameSongController
  class GameSongController;
  // Forward declaring type: GameEnergyCounter
  class GameEnergyCounter;
  // Forward declaring type: PauseController
  class PauseController;
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
  // Autogenerated type: MissionLevelGameplayManager
  class MissionLevelGameplayManager : public UnityEngine::MonoBehaviour, public GlobalNamespace::ILevelEndActions {
    public:
    // Nested type: GlobalNamespace::MissionLevelGameplayManager::GameState
    struct GameState;
    // Nested type: GlobalNamespace::MissionLevelGameplayManager::$Start$d__14
    class $Start$d__14;
    // Autogenerated type: MissionLevelGameplayManager/GameState
    struct GameState : public System::Enum {
      public:
      // public System.Int32 value__
      // Offset: 0x0
      int value;
      // Creating value type constructor for type: GameState
      constexpr GameState(int value_ = {}) : value{value_} {}
      // Creating conversion operator: operator int
      constexpr operator int() const {
        return value;
      }
      // static field const value: static public MissionLevelGameplayManager/GameState Intro
      static constexpr const int Intro = 0;
      // Get static field: static public MissionLevelGameplayManager/GameState Intro
      static GlobalNamespace::MissionLevelGameplayManager::GameState _get_Intro();
      // Set static field: static public MissionLevelGameplayManager/GameState Intro
      static void _set_Intro(GlobalNamespace::MissionLevelGameplayManager::GameState value);
      // static field const value: static public MissionLevelGameplayManager/GameState Playing
      static constexpr const int Playing = 1;
      // Get static field: static public MissionLevelGameplayManager/GameState Playing
      static GlobalNamespace::MissionLevelGameplayManager::GameState _get_Playing();
      // Set static field: static public MissionLevelGameplayManager/GameState Playing
      static void _set_Playing(GlobalNamespace::MissionLevelGameplayManager::GameState value);
      // static field const value: static public MissionLevelGameplayManager/GameState Paused
      static constexpr const int Paused = 2;
      // Get static field: static public MissionLevelGameplayManager/GameState Paused
      static GlobalNamespace::MissionLevelGameplayManager::GameState _get_Paused();
      // Set static field: static public MissionLevelGameplayManager/GameState Paused
      static void _set_Paused(GlobalNamespace::MissionLevelGameplayManager::GameState value);
      // static field const value: static public MissionLevelGameplayManager/GameState Finished
      static constexpr const int Finished = 3;
      // Get static field: static public MissionLevelGameplayManager/GameState Finished
      static GlobalNamespace::MissionLevelGameplayManager::GameState _get_Finished();
      // Set static field: static public MissionLevelGameplayManager/GameState Finished
      static void _set_Finished(GlobalNamespace::MissionLevelGameplayManager::GameState value);
      // static field const value: static public MissionLevelGameplayManager/GameState Failed
      static constexpr const int Failed = 4;
      // Get static field: static public MissionLevelGameplayManager/GameState Failed
      static GlobalNamespace::MissionLevelGameplayManager::GameState _get_Failed();
      // Set static field: static public MissionLevelGameplayManager/GameState Failed
      static void _set_Failed(GlobalNamespace::MissionLevelGameplayManager::GameState value);
    }; // MissionLevelGameplayManager/GameState
    // private MissionObjectiveCheckersManager _missionObjectiveCheckersManager
    // Offset: 0x18
    GlobalNamespace::MissionObjectiveCheckersManager* missionObjectiveCheckersManager;
    // private GameScenesManager _gameScenesManager
    // Offset: 0x20
    GlobalNamespace::GameScenesManager* gameScenesManager;
    // private GameSongController _gameSongController
    // Offset: 0x28
    GlobalNamespace::GameSongController* gameSongController;
    // private GameEnergyCounter _gameEnergyCounter
    // Offset: 0x30
    GlobalNamespace::GameEnergyCounter* gameEnergyCounter;
    // private PauseController _pauseController
    // Offset: 0x38
    GlobalNamespace::PauseController* pauseController;
    // private System.Action levelFailedEvent
    // Offset: 0x40
    System::Action* levelFailedEvent;
    // private System.Action levelFinishedEvent
    // Offset: 0x48
    System::Action* levelFinishedEvent;
    // private MissionLevelGameplayManager/GameState _gameState
    // Offset: 0x50
    GlobalNamespace::MissionLevelGameplayManager::GameState gameState;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const = delete;
    // protected System.Void Awake()
    // Offset: 0xC05D80
    void Awake();
    // private System.Collections.IEnumerator Start()
    // Offset: 0xC05D88
    System::Collections::IEnumerator* Start();
    // protected System.Void OnDestroy()
    // Offset: 0xC05E30
    void OnDestroy();
    // private System.Void HandleGameEnergyDidReach0()
    // Offset: 0xC060E8
    void HandleGameEnergyDidReach0();
    // private System.Void HandleMissionObjectiveCheckersManagerObjectiveDidFail()
    // Offset: 0xC06118
    void HandleMissionObjectiveCheckersManagerObjectiveDidFail();
    // private System.Void HandleSongDidFinish()
    // Offset: 0xC06148
    void HandleSongDidFinish();
    // private System.Void HandlePauseControllerCanPause(System.Action`1<System.Boolean> canPause)
    // Offset: 0xC06178
    void HandlePauseControllerCanPause(System::Action_1<bool>* canPause);
    // private System.Void HandlePauseControllerDidPause()
    // Offset: 0xC061F4
    void HandlePauseControllerDidPause();
    // private System.Void HandlePauseControllerDidResume()
    // Offset: 0xC0620C
    void HandlePauseControllerDidResume();
    // public System.Void add_levelFailedEvent(System.Action value)
    // Offset: 0xC05AF0
    // Implemented from: ILevelEndActions
    // Base method: System.Void ILevelEndActions::add_levelFailedEvent(System.Action value)
    void add_levelFailedEvent(System::Action* value);
    // public System.Void remove_levelFailedEvent(System.Action value)
    // Offset: 0xC05B94
    // Implemented from: ILevelEndActions
    // Base method: System.Void ILevelEndActions::remove_levelFailedEvent(System.Action value)
    void remove_levelFailedEvent(System::Action* value);
    // public System.Void add_levelFinishedEvent(System.Action value)
    // Offset: 0xC05C38
    // Implemented from: ILevelEndActions
    // Base method: System.Void ILevelEndActions::add_levelFinishedEvent(System.Action value)
    void add_levelFinishedEvent(System::Action* value);
    // public System.Void remove_levelFinishedEvent(System.Action value)
    // Offset: 0xC05CDC
    // Implemented from: ILevelEndActions
    // Base method: System.Void ILevelEndActions::remove_levelFinishedEvent(System.Action value)
    void remove_levelFinishedEvent(System::Action* value);
    // public System.Void .ctor()
    // Offset: 0xC06224
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static MissionLevelGameplayManager* New_ctor();
  }; // MissionLevelGameplayManager
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MissionLevelGameplayManager*, "", "MissionLevelGameplayManager");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MissionLevelGameplayManager::GameState, "", "MissionLevelGameplayManager/GameState");
#pragma pack(pop)
