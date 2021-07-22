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
  // Autogenerated type: GameNoteController/GameNoteType
  // [TokenAttribute] Offset: FFFFFFFF
  struct GameNoteController_GameNoteType/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: GameNoteController_GameNoteType
    constexpr GameNoteController_GameNoteType(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public GameNoteController/GameNoteType Normal
    static constexpr const int Normal = 0;
    // Get static field: static public GameNoteController/GameNoteType Normal
    static GlobalNamespace::GameNoteController_GameNoteType _get_Normal();
    // Set static field: static public GameNoteController/GameNoteType Normal
    static void _set_Normal(GlobalNamespace::GameNoteController_GameNoteType value);
    // static field const value: static public GameNoteController/GameNoteType DisappearingArrow
    static constexpr const int DisappearingArrow = 1;
    // Get static field: static public GameNoteController/GameNoteType DisappearingArrow
    static GlobalNamespace::GameNoteController_GameNoteType _get_DisappearingArrow();
    // Set static field: static public GameNoteController/GameNoteType DisappearingArrow
    static void _set_DisappearingArrow(GlobalNamespace::GameNoteController_GameNoteType value);
    // static field const value: static public GameNoteController/GameNoteType Ghost
    static constexpr const int Ghost = 2;
    // Get static field: static public GameNoteController/GameNoteType Ghost
    static GlobalNamespace::GameNoteController_GameNoteType _get_Ghost();
    // Set static field: static public GameNoteController/GameNoteType Ghost
    static void _set_Ghost(GlobalNamespace::GameNoteController_GameNoteType value);
  }; // GameNoteController/GameNoteType
  #pragma pack(pop)
  static check_size<sizeof(GameNoteController_GameNoteType), 0 + sizeof(int)> __GlobalNamespace_GameNoteController_GameNoteTypeSizeCheck;
  static_assert(sizeof(GameNoteController_GameNoteType) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GameNoteController_GameNoteType, "", "GameNoteController/GameNoteType");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
