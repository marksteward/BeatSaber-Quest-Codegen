// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: MultiplayerGameState
#include "GlobalNamespace/MultiplayerGameState.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x24
  #pragma pack(push, 1)
  // Autogenerated type: LobbyGameState
  class LobbyGameState : public ::Il2CppObject {
    public:
    // [CompilerGeneratedAttribute] Offset: 0xD37168
    // private System.Action`1<MultiplayerGameState> gameStateDidChangeEvent
    // Size: 0x8
    // Offset: 0x10
    System::Action_1<GlobalNamespace::MultiplayerGameState>* gameStateDidChangeEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<GlobalNamespace::MultiplayerGameState>*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xD37178
    // private System.Action`1<MultiplayerGameState> gameStateDidChangeAlwaysSentEvent
    // Size: 0x8
    // Offset: 0x18
    System::Action_1<GlobalNamespace::MultiplayerGameState>* gameStateDidChangeAlwaysSentEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<GlobalNamespace::MultiplayerGameState>*) == 0x8);
    // private MultiplayerGameState _gameState
    // Size: 0x4
    // Offset: 0x20
    GlobalNamespace::MultiplayerGameState gameState;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MultiplayerGameState) == 0x4);
    // Creating value type constructor for type: LobbyGameState
    LobbyGameState(System::Action_1<GlobalNamespace::MultiplayerGameState>* gameStateDidChangeEvent_ = {}, System::Action_1<GlobalNamespace::MultiplayerGameState>* gameStateDidChangeAlwaysSentEvent_ = {}, GlobalNamespace::MultiplayerGameState gameState_ = {}) noexcept : gameStateDidChangeEvent{gameStateDidChangeEvent_}, gameStateDidChangeAlwaysSentEvent{gameStateDidChangeAlwaysSentEvent_}, gameState{gameState_} {}
    // public MultiplayerGameState get_gameState()
    // Offset: 0x10D13C0
    GlobalNamespace::MultiplayerGameState get_gameState();
    // public System.Void add_gameStateDidChangeEvent(System.Action`1<MultiplayerGameState> value)
    // Offset: 0x10D13C8
    void add_gameStateDidChangeEvent(System::Action_1<GlobalNamespace::MultiplayerGameState>* value);
    // public System.Void remove_gameStateDidChangeEvent(System.Action`1<MultiplayerGameState> value)
    // Offset: 0x10D146C
    void remove_gameStateDidChangeEvent(System::Action_1<GlobalNamespace::MultiplayerGameState>* value);
    // public System.Void add_gameStateDidChangeAlwaysSentEvent(System.Action`1<MultiplayerGameState> value)
    // Offset: 0x10D1510
    void add_gameStateDidChangeAlwaysSentEvent(System::Action_1<GlobalNamespace::MultiplayerGameState>* value);
    // public System.Void remove_gameStateDidChangeAlwaysSentEvent(System.Action`1<MultiplayerGameState> value)
    // Offset: 0x10D15B4
    void remove_gameStateDidChangeAlwaysSentEvent(System::Action_1<GlobalNamespace::MultiplayerGameState>* value);
    // public System.Void SetGameState(MultiplayerGameState newGameState)
    // Offset: 0x10D1658
    void SetGameState(GlobalNamespace::MultiplayerGameState newGameState);
    // public System.Void SetGameStateWithoutNotification(MultiplayerGameState newGameState)
    // Offset: 0x10D1708
    void SetGameStateWithoutNotification(GlobalNamespace::MultiplayerGameState newGameState);
    // private System.Void SetGameState(MultiplayerGameState newGameState, System.Boolean sendNotification)
    // Offset: 0x10D1660
    void SetGameState(GlobalNamespace::MultiplayerGameState newGameState, bool sendNotification);
    // public System.Void .ctor()
    // Offset: 0x10D1710
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LobbyGameState* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::LobbyGameState::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LobbyGameState*, creationType>()));
    }
  }; // LobbyGameState
  #pragma pack(pop)
  static check_size<sizeof(LobbyGameState), 32 + sizeof(GlobalNamespace::MultiplayerGameState)> __GlobalNamespace_LobbyGameStateSizeCheck;
  static_assert(sizeof(LobbyGameState) == 0x24);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LobbyGameState*, "", "LobbyGameState");
