// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: GameplayModifierMask
  struct GameplayModifierMask;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: GameplayModifierMaskExtensions
  class GameplayModifierMaskExtensions : public ::Il2CppObject {
    public:
    // static public System.Boolean Contains(GameplayModifierMask mask, GameplayModifierMask other)
    // Offset: 0x1F0D4C4
    static bool Contains(GlobalNamespace::GameplayModifierMask mask, GlobalNamespace::GameplayModifierMask other);
    // static public System.Int32 DifferenceFrom(GameplayModifierMask mask, GameplayModifierMask other)
    // Offset: 0x1F0D4D4
    static int DifferenceFrom(GlobalNamespace::GameplayModifierMask mask, GlobalNamespace::GameplayModifierMask other);
    // static public System.String ToHexString(GameplayModifierMask mask)
    // Offset: 0x1F0D4E4
    static ::Il2CppString* ToHexString(GlobalNamespace::GameplayModifierMask mask);
  }; // GameplayModifierMaskExtensions
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GameplayModifierMaskExtensions*, "", "GameplayModifierMaskExtensions");
#pragma pack(pop)