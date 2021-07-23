// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: MultiplayerLobbyState
  // [TokenAttribute] Offset: FFFFFFFF
  struct MultiplayerLobbyState/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: MultiplayerLobbyState
    constexpr MultiplayerLobbyState(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public MultiplayerLobbyState None
    static constexpr const int None = 0;
    // Get static field: static public MultiplayerLobbyState None
    static GlobalNamespace::MultiplayerLobbyState _get_None();
    // Set static field: static public MultiplayerLobbyState None
    static void _set_None(GlobalNamespace::MultiplayerLobbyState value);
    // static field const value: static public MultiplayerLobbyState LobbySetup
    static constexpr const int LobbySetup = 1;
    // Get static field: static public MultiplayerLobbyState LobbySetup
    static GlobalNamespace::MultiplayerLobbyState _get_LobbySetup();
    // Set static field: static public MultiplayerLobbyState LobbySetup
    static void _set_LobbySetup(GlobalNamespace::MultiplayerLobbyState value);
    // static field const value: static public MultiplayerLobbyState LobbyCountdown
    static constexpr const int LobbyCountdown = 2;
    // Get static field: static public MultiplayerLobbyState LobbyCountdown
    static GlobalNamespace::MultiplayerLobbyState _get_LobbyCountdown();
    // Set static field: static public MultiplayerLobbyState LobbyCountdown
    static void _set_LobbyCountdown(GlobalNamespace::MultiplayerLobbyState value);
    // static field const value: static public MultiplayerLobbyState GameStarting
    static constexpr const int GameStarting = 3;
    // Get static field: static public MultiplayerLobbyState GameStarting
    static GlobalNamespace::MultiplayerLobbyState _get_GameStarting();
    // Set static field: static public MultiplayerLobbyState GameStarting
    static void _set_GameStarting(GlobalNamespace::MultiplayerLobbyState value);
    // static field const value: static public MultiplayerLobbyState GameRunning
    static constexpr const int GameRunning = 4;
    // Get static field: static public MultiplayerLobbyState GameRunning
    static GlobalNamespace::MultiplayerLobbyState _get_GameRunning();
    // Set static field: static public MultiplayerLobbyState GameRunning
    static void _set_GameRunning(GlobalNamespace::MultiplayerLobbyState value);
    // static field const value: static public MultiplayerLobbyState Error
    static constexpr const int Error = 5;
    // Get static field: static public MultiplayerLobbyState Error
    static GlobalNamespace::MultiplayerLobbyState _get_Error();
    // Set static field: static public MultiplayerLobbyState Error
    static void _set_Error(GlobalNamespace::MultiplayerLobbyState value);
    // Get instance field: public System.Int32 value__
    int _get_value__();
    // Set instance field: public System.Int32 value__
    void _set_value__(int value);
  }; // MultiplayerLobbyState
  #pragma pack(pop)
  static check_size<sizeof(MultiplayerLobbyState), 0 + sizeof(int)> __GlobalNamespace_MultiplayerLobbyStateSizeCheck;
  static_assert(sizeof(MultiplayerLobbyState) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerLobbyState, "", "MultiplayerLobbyState");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
