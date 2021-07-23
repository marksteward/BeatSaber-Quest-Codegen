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
  // Autogenerated type: MultiplayerGameState
  // [TokenAttribute] Offset: FFFFFFFF
  struct MultiplayerGameState/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: MultiplayerGameState
    constexpr MultiplayerGameState(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public MultiplayerGameState None
    static constexpr const int None = 0;
    // Get static field: static public MultiplayerGameState None
    static GlobalNamespace::MultiplayerGameState _get_None();
    // Set static field: static public MultiplayerGameState None
    static void _set_None(GlobalNamespace::MultiplayerGameState value);
    // static field const value: static public MultiplayerGameState Lobby
    static constexpr const int Lobby = 1;
    // Get static field: static public MultiplayerGameState Lobby
    static GlobalNamespace::MultiplayerGameState _get_Lobby();
    // Set static field: static public MultiplayerGameState Lobby
    static void _set_Lobby(GlobalNamespace::MultiplayerGameState value);
    // static field const value: static public MultiplayerGameState Game
    static constexpr const int Game = 2;
    // Get static field: static public MultiplayerGameState Game
    static GlobalNamespace::MultiplayerGameState _get_Game();
    // Set static field: static public MultiplayerGameState Game
    static void _set_Game(GlobalNamespace::MultiplayerGameState value);
    // Get instance field: public System.Int32 value__
    int _get_value__();
    // Set instance field: public System.Int32 value__
    void _set_value__(int value);
  }; // MultiplayerGameState
  #pragma pack(pop)
  static check_size<sizeof(MultiplayerGameState), 0 + sizeof(int)> __GlobalNamespace_MultiplayerGameStateSizeCheck;
  static_assert(sizeof(MultiplayerGameState) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerGameState, "", "MultiplayerGameState");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
