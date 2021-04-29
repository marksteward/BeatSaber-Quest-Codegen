// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: HMUI.ViewController
#include "HMUI/ViewController.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: PlayerSettingsPanelController
  class PlayerSettingsPanelController;
  // Forward declaring type: PlayerDataModel
  class PlayerDataModel;
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Button
  class Button;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x90
  #pragma pack(push, 1)
  // Autogenerated type: PlayerOptionsViewController
  class PlayerOptionsViewController : public HMUI::ViewController {
    public:
    // private PlayerSettingsPanelController _playerSettingsPanelController
    // Size: 0x8
    // Offset: 0x70
    GlobalNamespace::PlayerSettingsPanelController* playerSettingsPanelController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::PlayerSettingsPanelController*) == 0x8);
    // private UnityEngine.UI.Button _okButton
    // Size: 0x8
    // Offset: 0x78
    UnityEngine::UI::Button* okButton;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Button*) == 0x8);
    // [InjectAttribute] Offset: 0xD43F3C
    // private readonly PlayerDataModel _playerDataModel
    // Size: 0x8
    // Offset: 0x80
    GlobalNamespace::PlayerDataModel* playerDataModel;
    // Field size check
    static_assert(sizeof(GlobalNamespace::PlayerDataModel*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xD43F4C
    // private System.Action`1<HMUI.ViewController> didFinishEvent
    // Size: 0x8
    // Offset: 0x88
    System::Action_1<HMUI::ViewController*>* didFinishEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<HMUI::ViewController*>*) == 0x8);
    // Creating value type constructor for type: PlayerOptionsViewController
    PlayerOptionsViewController(GlobalNamespace::PlayerSettingsPanelController* playerSettingsPanelController_ = {}, UnityEngine::UI::Button* okButton_ = {}, GlobalNamespace::PlayerDataModel* playerDataModel_ = {}, System::Action_1<HMUI::ViewController*>* didFinishEvent_ = {}) noexcept : playerSettingsPanelController{playerSettingsPanelController_}, okButton{okButton_}, playerDataModel{playerDataModel_}, didFinishEvent{didFinishEvent_} {}
    // public System.Void add_didFinishEvent(System.Action`1<HMUI.ViewController> value)
    // Offset: 0xF7BFB8
    void add_didFinishEvent(System::Action_1<HMUI::ViewController*>* value);
    // public System.Void remove_didFinishEvent(System.Action`1<HMUI.ViewController> value)
    // Offset: 0xF7C05C
    void remove_didFinishEvent(System::Action_1<HMUI::ViewController*>* value);
    // private System.Void <DidActivate>b__6_0()
    // Offset: 0xF7C784
    void $DidActivate$b__6_0();
    // protected override System.Void DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    // Offset: 0xF7C100
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);
    // protected override System.Void DidDeactivate(System.Boolean removedFromHierarchy, System.Boolean screenSystemDisabling)
    // Offset: 0xF7C428
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::DidDeactivate(System.Boolean removedFromHierarchy, System.Boolean screenSystemDisabling)
    void DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling);
    // public System.Void .ctor()
    // Offset: 0xF7C77C
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PlayerOptionsViewController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::PlayerOptionsViewController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PlayerOptionsViewController*, creationType>()));
    }
  }; // PlayerOptionsViewController
  #pragma pack(pop)
  static check_size<sizeof(PlayerOptionsViewController), 136 + sizeof(System::Action_1<HMUI::ViewController*>*)> __GlobalNamespace_PlayerOptionsViewControllerSizeCheck;
  static_assert(sizeof(PlayerOptionsViewController) == 0x90);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PlayerOptionsViewController*, "", "PlayerOptionsViewController");
