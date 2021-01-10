// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
// Including type: System.Single
#include "System/Single.hpp"
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
  // Forward declaring type: PlayersAtGameStartModel
  class PlayersAtGameStartModel;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: HashSet`1<T>
  template<typename T>
  class HashSet_1;
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
  // Size: 0x40
  // Autogenerated type: SongStartHandler
  // [] Offset: FFFFFFFF
  class SongStartHandler : public ::Il2CppObject/*, public System::IDisposable*/ {
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
    // private readonly PlayersAtGameStartModel _playersAtGameStartModel
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::PlayersAtGameStartModel* playersAtGameStartModel;
    // Field size check
    static_assert(sizeof(GlobalNamespace::PlayersAtGameStartModel*) == 0x8);
    // private readonly System.Collections.Generic.HashSet`1<System.String> _readyPlayers
    // Size: 0x8
    // Offset: 0x28
    System::Collections::Generic::HashSet_1<::Il2CppString*>* readyPlayers;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::HashSet_1<::Il2CppString*>*) == 0x8);
    // private System.Boolean _started
    // Size: 0x1
    // Offset: 0x30
    bool started;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: started and: startTime
    char __padding4[0x3] = {};
    // private System.Single _startTime
    // Size: 0x4
    // Offset: 0x34
    float startTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [CompilerGeneratedAttribute] Offset: 0xDAA464
    // private System.Action`1<System.Single> setSongStartSyncTimeEvent
    // Size: 0x8
    // Offset: 0x38
    System::Action_1<float>* setSongStartSyncTimeEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<float>*) == 0x8);
    // Creating value type constructor for type: SongStartHandler
    SongStartHandler(GlobalNamespace::IMultiplayerSessionManager* multiplayerSessionManager_ = {}, GlobalNamespace::IGameplayRpcManager* gameplayRpcManager_ = {}, GlobalNamespace::PlayersAtGameStartModel* playersAtGameStartModel_ = {}, System::Collections::Generic::HashSet_1<::Il2CppString*>* readyPlayers_ = {}, bool started_ = {}, float startTime_ = {}, System::Action_1<float>* setSongStartSyncTimeEvent_ = {}) noexcept : multiplayerSessionManager{multiplayerSessionManager_}, gameplayRpcManager{gameplayRpcManager_}, playersAtGameStartModel{playersAtGameStartModel_}, readyPlayers{readyPlayers_}, started{started_}, startTime{startTime_}, setSongStartSyncTimeEvent{setSongStartSyncTimeEvent_} {}
    // Creating interface conversion operator: operator System::IDisposable
    operator System::IDisposable() noexcept {
      return *reinterpret_cast<System::IDisposable*>(this);
    }
    // static field const value: static private System.Single kFixedStartDelay
    static constexpr const float kFixedStartDelay = 0.25;
    // Get static field: static private System.Single kFixedStartDelay
    static float _get_kFixedStartDelay();
    // Set static field: static private System.Single kFixedStartDelay
    static void _set_kFixedStartDelay(float value);
    // public System.Single get_songStartSyncTime()
    // Offset: 0x1E57030
    float get_songStartSyncTime();
    // public System.Void add_setSongStartSyncTimeEvent(System.Action`1<System.Single> value)
    // Offset: 0x1E57038
    void add_setSongStartSyncTimeEvent(System::Action_1<float>* value);
    // public System.Void remove_setSongStartSyncTimeEvent(System.Action`1<System.Single> value)
    // Offset: 0x1E570DC
    void remove_setSongStartSyncTimeEvent(System::Action_1<float>* value);
    // public System.Void .ctor(IMultiplayerSessionManager multiplayerSessionManager, IGameplayRpcManager gameplayRpcManager, PlayersAtGameStartModel playersAtGameStartModel)
    // Offset: 0x1E57180
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SongStartHandler* New_ctor(GlobalNamespace::IMultiplayerSessionManager* multiplayerSessionManager, GlobalNamespace::IGameplayRpcManager* gameplayRpcManager, GlobalNamespace::PlayersAtGameStartModel* playersAtGameStartModel) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::SongStartHandler::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SongStartHandler*, creationType>(multiplayerSessionManager, gameplayRpcManager, playersAtGameStartModel)));
    }
    // public System.Void GetLevelStartTimeOffset()
    // Offset: 0x1E57248
    void GetLevelStartTimeOffset();
    // public System.Void ForceStart()
    // Offset: 0x1E5798C
    void ForceStart();
    // private System.Void StartSong()
    // Offset: 0x1E57FC0
    void StartSong();
    // private System.Void HandleSetGameplaySongReady(System.String user)
    // Offset: 0x1E58280
    void HandleSetGameplaySongReady(::Il2CppString* user);
    // private System.Void HandleGetGameplaySongReady(System.String user)
    // Offset: 0x1E58540
    void HandleGetGameplaySongReady(::Il2CppString* user);
    // private System.Void HandleSetSongStartTime(System.String user, System.Single time)
    // Offset: 0x1E585F4
    void HandleSetSongStartTime(::Il2CppString* user, float time);
    // private System.Void Log(System.String message)
    // Offset: 0x1E58674
    void Log(::Il2CppString* message);
    // public System.Void Dispose()
    // Offset: 0x1E57758
    // Implemented from: System.IDisposable
    // Base method: System.Void IDisposable::Dispose()
    void Dispose();
    // Creating proxy method: System_IDisposable_Dispose
    // Maps to method: Dispose
    void System_IDisposable_Dispose();
  }; // SongStartHandler
  static check_size<sizeof(SongStartHandler), 56 + sizeof(System::Action_1<float>*)> __GlobalNamespace_SongStartHandlerSizeCheck;
  static_assert(sizeof(SongStartHandler) == 0x40);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SongStartHandler*, "", "SongStartHandler");
#pragma pack(pop)
