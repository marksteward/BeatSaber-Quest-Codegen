// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: HMUI.ViewController
#include "HMUI/ViewController.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: GameplayModifiersPanelController
  class GameplayModifiersPanelController;
  // Forward declaring type: GameplayModifiers
  class GameplayModifiers;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: SelectModifiersViewController
  class SelectModifiersViewController : public HMUI::ViewController {
    public:
    // private GameplayModifiersPanelController _gameplayModifiersPanelController
    // Offset: 0x70
    GlobalNamespace::GameplayModifiersPanelController* gameplayModifiersPanelController;
    // public GameplayModifiers get_gameplayModifiers()
    // Offset: 0x1FE9FB4
    GlobalNamespace::GameplayModifiers* get_gameplayModifiers();
    // public System.Void Setup(GameplayModifiers gameplayModifiers)
    // Offset: 0x1FE9FD0
    void Setup(GlobalNamespace::GameplayModifiers* gameplayModifiers);
    // protected override System.Void DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    // Offset: 0x1FE9FEC
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);
    // public System.Void .ctor()
    // Offset: 0x1FEA09C
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static SelectModifiersViewController* New_ctor();
  }; // SelectModifiersViewController
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SelectModifiersViewController*, "", "SelectModifiersViewController");
#pragma pack(pop)