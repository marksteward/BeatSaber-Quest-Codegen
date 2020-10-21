// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IMultiplayerSessionManager
  class IMultiplayerSessionManager;
  // Forward declaring type: IGameplayRpcManager
  class IGameplayRpcManager;
  // Forward declaring type: PlayersAtGameStartModel
  class PlayersAtGameStartModel;
  // Forward declaring type: SceneStartHandler
  class SceneStartHandler;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: SceneStartSyncController
  class SceneStartSyncController : public UnityEngine::MonoBehaviour {
    public:
    // private readonly IMultiplayerSessionManager _multiplayerSessionManager
    // Offset: 0x18
    GlobalNamespace::IMultiplayerSessionManager* multiplayerSessionManager;
    // private readonly IGameplayRpcManager _gameplayRpcManager
    // Offset: 0x20
    GlobalNamespace::IGameplayRpcManager* gameplayRpcManager;
    // private readonly PlayersAtGameStartModel _playersAtGameStartModel
    // Offset: 0x28
    GlobalNamespace::PlayersAtGameStartModel* playersAtGameStartModel;
    // private System.Action syncStartDidSuccessEvent
    // Offset: 0x30
    System::Action* syncStartDidSuccessEvent;
    // private System.Action syncStartDidReceiveTooLateEvent
    // Offset: 0x38
    System::Action* syncStartDidReceiveTooLateEvent;
    // private System.Action syncStartDidFailEvent
    // Offset: 0x40
    System::Action* syncStartDidFailEvent;
    // private SceneStartHandler _sceneStartHandler
    // Offset: 0x48
    GlobalNamespace::SceneStartHandler* sceneStartHandler;
    // private System.Single _waitStartTime
    // Offset: 0x50
    float waitStartTime;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // static field const value: static private System.Single kLoadOtherTimeout
    static constexpr const float kLoadOtherTimeout = 15;
    // Get static field: static private System.Single kLoadOtherTimeout
    static float _get_kLoadOtherTimeout();
    // Set static field: static private System.Single kLoadOtherTimeout
    static void _set_kLoadOtherTimeout(float value);
    // static field const value: static private System.Single kLoadSelfTimeout
    static constexpr const float kLoadSelfTimeout = 20;
    // Get static field: static private System.Single kLoadSelfTimeout
    static float _get_kLoadSelfTimeout();
    // Set static field: static private System.Single kLoadSelfTimeout
    static void _set_kLoadSelfTimeout(float value);
    // public System.Void add_syncStartDidSuccessEvent(System.Action value)
    // Offset: 0x207C030
    void add_syncStartDidSuccessEvent(System::Action* value);
    // public System.Void remove_syncStartDidSuccessEvent(System.Action value)
    // Offset: 0x207C0D4
    void remove_syncStartDidSuccessEvent(System::Action* value);
    // public System.Void add_syncStartDidReceiveTooLateEvent(System.Action value)
    // Offset: 0x207C178
    void add_syncStartDidReceiveTooLateEvent(System::Action* value);
    // public System.Void remove_syncStartDidReceiveTooLateEvent(System.Action value)
    // Offset: 0x207C21C
    void remove_syncStartDidReceiveTooLateEvent(System::Action* value);
    // public System.Void add_syncStartDidFailEvent(System.Action value)
    // Offset: 0x207C2C0
    void add_syncStartDidFailEvent(System::Action* value);
    // public System.Void remove_syncStartDidFailEvent(System.Action value)
    // Offset: 0x207C364
    void remove_syncStartDidFailEvent(System::Action* value);
    // public System.Void StartSceneLoadSync()
    // Offset: 0x207C408
    void StartSceneLoadSync();
    // protected System.Void Update()
    // Offset: 0x207C538
    void Update();
    // protected System.Void OnDestroy()
    // Offset: 0x207C6F0
    void OnDestroy();
    // private System.Void HandleSceneSetupDidFinish()
    // Offset: 0x207C7D8
    void HandleSceneSetupDidFinish();
    // private System.Void HandleSceneSetupDidReceiveTooLate()
    // Offset: 0x207C818
    void HandleSceneSetupDidReceiveTooLate();
    // public System.Void .ctor()
    // Offset: 0x207C858
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static SceneStartSyncController* New_ctor();
  }; // SceneStartSyncController
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SceneStartSyncController*, "", "SceneStartSyncController");
#pragma pack(pop)