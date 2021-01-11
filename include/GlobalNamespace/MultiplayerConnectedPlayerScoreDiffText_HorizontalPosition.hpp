// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: MultiplayerConnectedPlayerScoreDiffText
#include "GlobalNamespace/MultiplayerConnectedPlayerScoreDiffText.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: MultiplayerConnectedPlayerScoreDiffText/HorizontalPosition
  // [] Offset: FFFFFFFF
  struct MultiplayerConnectedPlayerScoreDiffText::HorizontalPosition/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: HorizontalPosition
    constexpr HorizontalPosition(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public MultiplayerConnectedPlayerScoreDiffText/HorizontalPosition Left
    static constexpr const int Left = 0;
    // Get static field: static public MultiplayerConnectedPlayerScoreDiffText/HorizontalPosition Left
    static GlobalNamespace::MultiplayerConnectedPlayerScoreDiffText::HorizontalPosition _get_Left();
    // Set static field: static public MultiplayerConnectedPlayerScoreDiffText/HorizontalPosition Left
    static void _set_Left(GlobalNamespace::MultiplayerConnectedPlayerScoreDiffText::HorizontalPosition value);
    // static field const value: static public MultiplayerConnectedPlayerScoreDiffText/HorizontalPosition Right
    static constexpr const int Right = 1;
    // Get static field: static public MultiplayerConnectedPlayerScoreDiffText/HorizontalPosition Right
    static GlobalNamespace::MultiplayerConnectedPlayerScoreDiffText::HorizontalPosition _get_Right();
    // Set static field: static public MultiplayerConnectedPlayerScoreDiffText/HorizontalPosition Right
    static void _set_Right(GlobalNamespace::MultiplayerConnectedPlayerScoreDiffText::HorizontalPosition value);
  }; // MultiplayerConnectedPlayerScoreDiffText/HorizontalPosition
  static check_size<sizeof(MultiplayerConnectedPlayerScoreDiffText::HorizontalPosition), 0 + sizeof(int)> __GlobalNamespace_MultiplayerConnectedPlayerScoreDiffText_HorizontalPositionSizeCheck;
  static_assert(sizeof(MultiplayerConnectedPlayerScoreDiffText::HorizontalPosition) == 0x4);
}
#pragma pack(pop)
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerConnectedPlayerScoreDiffText::HorizontalPosition, "", "MultiplayerConnectedPlayerScoreDiffText/HorizontalPosition");
