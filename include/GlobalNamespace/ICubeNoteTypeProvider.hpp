// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: GameNoteType
  struct GameNoteController_GameNoteType;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: ICubeNoteTypeProvider
  class ICubeNoteTypeProvider {
    public:
    // Creating value type constructor for type: ICubeNoteTypeProvider
    ICubeNoteTypeProvider() noexcept {}
    // public GameNoteController/GameNoteType get_gameNoteType()
    // Offset: 0xFFFFFFFF
    GlobalNamespace::GameNoteController_GameNoteType get_gameNoteType();
  }; // ICubeNoteTypeProvider
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ICubeNoteTypeProvider*, "", "ICubeNoteTypeProvider");