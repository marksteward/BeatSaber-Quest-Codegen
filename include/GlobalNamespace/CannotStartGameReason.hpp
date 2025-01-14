// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: CannotStartGameReason
  // [TokenAttribute] Offset: FFFFFFFF
  struct CannotStartGameReason/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: CannotStartGameReason
    constexpr CannotStartGameReason(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public CannotStartGameReason None
    static constexpr const int None = 1;
    // Get static field: static public CannotStartGameReason None
    static GlobalNamespace::CannotStartGameReason _get_None();
    // Set static field: static public CannotStartGameReason None
    static void _set_None(GlobalNamespace::CannotStartGameReason value);
    // static field const value: static public CannotStartGameReason AllPlayersSpectating
    static constexpr const int AllPlayersSpectating = 2;
    // Get static field: static public CannotStartGameReason AllPlayersSpectating
    static GlobalNamespace::CannotStartGameReason _get_AllPlayersSpectating();
    // Set static field: static public CannotStartGameReason AllPlayersSpectating
    static void _set_AllPlayersSpectating(GlobalNamespace::CannotStartGameReason value);
    // static field const value: static public CannotStartGameReason NoSongSelected
    static constexpr const int NoSongSelected = 3;
    // Get static field: static public CannotStartGameReason NoSongSelected
    static GlobalNamespace::CannotStartGameReason _get_NoSongSelected();
    // Set static field: static public CannotStartGameReason NoSongSelected
    static void _set_NoSongSelected(GlobalNamespace::CannotStartGameReason value);
    // static field const value: static public CannotStartGameReason AllPlayersNotInLobby
    static constexpr const int AllPlayersNotInLobby = 4;
    // Get static field: static public CannotStartGameReason AllPlayersNotInLobby
    static GlobalNamespace::CannotStartGameReason _get_AllPlayersNotInLobby();
    // Set static field: static public CannotStartGameReason AllPlayersNotInLobby
    static void _set_AllPlayersNotInLobby(GlobalNamespace::CannotStartGameReason value);
    // static field const value: static public CannotStartGameReason DoNotOwnSong
    static constexpr const int DoNotOwnSong = 5;
    // Get static field: static public CannotStartGameReason DoNotOwnSong
    static GlobalNamespace::CannotStartGameReason _get_DoNotOwnSong();
    // Set static field: static public CannotStartGameReason DoNotOwnSong
    static void _set_DoNotOwnSong(GlobalNamespace::CannotStartGameReason value);
    // Get instance field: public System.Int32 value__
    int _get_value__();
    // Set instance field: public System.Int32 value__
    void _set_value__(int value);
  }; // CannotStartGameReason
  #pragma pack(pop)
  static check_size<sizeof(CannotStartGameReason), 0 + sizeof(int)> __GlobalNamespace_CannotStartGameReasonSizeCheck;
  static_assert(sizeof(CannotStartGameReason) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::CannotStartGameReason, "", "CannotStartGameReason");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
