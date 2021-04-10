// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: GameplayModifiersConfiguration
#include "GlobalNamespace/GameplayModifiersConfiguration.hpp"
// Including type: System.Single
#include "System/Single.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: GameplayModifiersConfiguration/NoteUniformScale
  // [] Offset: FFFFFFFF
  class GameplayModifiersConfiguration::NoteUniformScale : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: NoteUniformScale
    NoteUniformScale() noexcept {}
    // static field const value: static public System.Single kDefault
    static constexpr const float kDefault = 1;
    // Get static field: static public System.Single kDefault
    static float _get_kDefault();
    // Set static field: static public System.Single kDefault
    static void _set_kDefault(float value);
    // static field const value: static public System.Single kSmall
    static constexpr const float kSmall = 0.5;
    // Get static field: static public System.Single kSmall
    static float _get_kSmall();
    // Set static field: static public System.Single kSmall
    static void _set_kSmall(float value);
  }; // GameplayModifiersConfiguration/NoteUniformScale
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GameplayModifiersConfiguration::NoteUniformScale*, "", "GameplayModifiersConfiguration/NoteUniformScale");