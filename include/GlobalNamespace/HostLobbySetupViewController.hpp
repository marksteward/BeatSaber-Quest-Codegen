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
  // Forward declaring type: EditableBeatmapSelectionView
  class EditableBeatmapSelectionView;
  // Forward declaring type: EditableModifiersSelectionView
  class EditableModifiersSelectionView;
  // Forward declaring type: ILobbyPlayerDataModel
  class ILobbyPlayerDataModel;
  // Forward declaring type: MultiplayerLobbyState
  struct MultiplayerLobbyState;
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Button
  class Button;
}
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: HoverHint
  class HoverHint;
  // Forward declaring type: ToggleBinder
  class ToggleBinder;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0xD8
  #pragma pack(push, 1)
  // Autogenerated type: HostLobbySetupViewController
  class HostLobbySetupViewController : public HMUI::ViewController {
    public:
    // Nested type: GlobalNamespace::HostLobbySetupViewController::CannotStartGameReason
    struct CannotStartGameReason;
    // private UnityEngine.UI.Button _startGameButton
    // Size: 0x8
    // Offset: 0x70
    UnityEngine::UI::Button* startGameButton;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Button*) == 0x8);
    // private UnityEngine.UI.Button _cancelStartGameButton
    // Size: 0x8
    // Offset: 0x78
    UnityEngine::UI::Button* cancelStartGameButton;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Button*) == 0x8);
    // [SpaceAttribute] Offset: 0xD452F4
    // private EditableBeatmapSelectionView _beatmapSelectionView
    // Size: 0x8
    // Offset: 0x80
    GlobalNamespace::EditableBeatmapSelectionView* beatmapSelectionView;
    // Field size check
    static_assert(sizeof(GlobalNamespace::EditableBeatmapSelectionView*) == 0x8);
    // private EditableModifiersSelectionView _modifiersSelectionView
    // Size: 0x8
    // Offset: 0x88
    GlobalNamespace::EditableModifiersSelectionView* modifiersSelectionView;
    // Field size check
    static_assert(sizeof(GlobalNamespace::EditableModifiersSelectionView*) == 0x8);
    // private HMUI.HoverHint _cantStartGameHoverHint
    // Size: 0x8
    // Offset: 0x90
    HMUI::HoverHint* cantStartGameHoverHint;
    // Field size check
    static_assert(sizeof(HMUI::HoverHint*) == 0x8);
    // private UnityEngine.GameObject _playerMissingLevelHoverHintWrapper
    // Size: 0x8
    // Offset: 0x98
    UnityEngine::GameObject* playerMissingLevelHoverHintWrapper;
    // Field size check
    static_assert(sizeof(UnityEngine::GameObject*) == 0x8);
    // private HMUI.HoverHint _playersMissingLevelHoverHint
    // Size: 0x8
    // Offset: 0xA0
    HMUI::HoverHint* playersMissingLevelHoverHint;
    // Field size check
    static_assert(sizeof(HMUI::HoverHint*) == 0x8);
    // private UnityEngine.GameObject _spectatorWarningTextWrapper
    // Size: 0x8
    // Offset: 0xA8
    UnityEngine::GameObject* spectatorWarningTextWrapper;
    // Field size check
    static_assert(sizeof(UnityEngine::GameObject*) == 0x8);
    // private readonly HMUI.ToggleBinder _toggleBinder
    // Size: 0x8
    // Offset: 0xB0
    HMUI::ToggleBinder* toggleBinder;
    // Field size check
    static_assert(sizeof(HMUI::ToggleBinder*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xD4537C
    // private System.Action selectBeatmapEvent
    // Size: 0x8
    // Offset: 0xB8
    System::Action* selectBeatmapEvent;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xD4538C
    // private System.Action selectModifiersEvent
    // Size: 0x8
    // Offset: 0xC0
    System::Action* selectModifiersEvent;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xD4539C
    // private System.Action startGameEvent
    // Size: 0x8
    // Offset: 0xC8
    System::Action* startGameEvent;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xD453AC
    // private System.Action cancelStartGameEvent
    // Size: 0x8
    // Offset: 0xD0
    System::Action* cancelStartGameEvent;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // Creating value type constructor for type: HostLobbySetupViewController
    HostLobbySetupViewController(UnityEngine::UI::Button* startGameButton_ = {}, UnityEngine::UI::Button* cancelStartGameButton_ = {}, GlobalNamespace::EditableBeatmapSelectionView* beatmapSelectionView_ = {}, GlobalNamespace::EditableModifiersSelectionView* modifiersSelectionView_ = {}, HMUI::HoverHint* cantStartGameHoverHint_ = {}, UnityEngine::GameObject* playerMissingLevelHoverHintWrapper_ = {}, HMUI::HoverHint* playersMissingLevelHoverHint_ = {}, UnityEngine::GameObject* spectatorWarningTextWrapper_ = {}, HMUI::ToggleBinder* toggleBinder_ = {}, System::Action* selectBeatmapEvent_ = {}, System::Action* selectModifiersEvent_ = {}, System::Action* startGameEvent_ = {}, System::Action* cancelStartGameEvent_ = {}) noexcept : startGameButton{startGameButton_}, cancelStartGameButton{cancelStartGameButton_}, beatmapSelectionView{beatmapSelectionView_}, modifiersSelectionView{modifiersSelectionView_}, cantStartGameHoverHint{cantStartGameHoverHint_}, playerMissingLevelHoverHintWrapper{playerMissingLevelHoverHintWrapper_}, playersMissingLevelHoverHint{playersMissingLevelHoverHint_}, spectatorWarningTextWrapper{spectatorWarningTextWrapper_}, toggleBinder{toggleBinder_}, selectBeatmapEvent{selectBeatmapEvent_}, selectModifiersEvent{selectModifiersEvent_}, startGameEvent{startGameEvent_}, cancelStartGameEvent{cancelStartGameEvent_} {}
    // public System.Void add_selectBeatmapEvent(System.Action value)
    // Offset: 0xF704D4
    void add_selectBeatmapEvent(System::Action* value);
    // public System.Void remove_selectBeatmapEvent(System.Action value)
    // Offset: 0xF71898
    void remove_selectBeatmapEvent(System::Action* value);
    // public System.Void add_selectModifiersEvent(System.Action value)
    // Offset: 0xF70578
    void add_selectModifiersEvent(System::Action* value);
    // public System.Void remove_selectModifiersEvent(System.Action value)
    // Offset: 0xF7193C
    void remove_selectModifiersEvent(System::Action* value);
    // public System.Void add_startGameEvent(System.Action value)
    // Offset: 0xF7061C
    void add_startGameEvent(System::Action* value);
    // public System.Void remove_startGameEvent(System.Action value)
    // Offset: 0xF719E0
    void remove_startGameEvent(System::Action* value);
    // public System.Void add_cancelStartGameEvent(System.Action value)
    // Offset: 0xF706C0
    void add_cancelStartGameEvent(System::Action* value);
    // public System.Void remove_cancelStartGameEvent(System.Action value)
    // Offset: 0xF71A84
    void remove_cancelStartGameEvent(System::Action* value);
    // public System.Void SetLobbyPlayerData(ILobbyPlayerDataModel lobbyPlayerDataModel)
    // Offset: 0xF72694
    void SetLobbyPlayerData(GlobalNamespace::ILobbyPlayerDataModel* lobbyPlayerDataModel);
    // public System.Void SetPlayersMissingLevelText(System.String playersMissingLevelText)
    // Offset: 0xF73CF0
    void SetPlayersMissingLevelText(::Il2CppString* playersMissingLevelText);
    // public System.Void SetPlayerActiveState(System.Boolean isActive)
    // Offset: 0xF73760
    void SetPlayerActiveState(bool isActive);
    // public System.Void SetStartGameEnabled(System.Boolean startGameEnabled, HostLobbySetupViewController/CannotStartGameReason cannotStartGameReason)
    // Offset: 0xF73BF4
    void SetStartGameEnabled(bool startGameEnabled, GlobalNamespace::HostLobbySetupViewController::CannotStartGameReason cannotStartGameReason);
    // public System.Void SetLobbyState(MultiplayerLobbyState lobbyState)
    // Offset: 0xF70F14
    void SetLobbyState(GlobalNamespace::MultiplayerLobbyState lobbyState);
    // private System.Void <DidActivate>b__27_0()
    // Offset: 0xF7514C
    void $DidActivate$b__27_0();
    // private System.Void <DidActivate>b__27_1()
    // Offset: 0xF75160
    void $DidActivate$b__27_1();
    // private System.Void <DidActivate>b__27_2()
    // Offset: 0xF75174
    void $DidActivate$b__27_2();
    // private System.Void <DidActivate>b__27_3()
    // Offset: 0xF75188
    void $DidActivate$b__27_3();
    // protected override System.Void DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    // Offset: 0xF74F14
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);
    // protected override System.Void OnDestroy()
    // Offset: 0xF750C8
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::OnDestroy()
    void OnDestroy();
    // public System.Void .ctor()
    // Offset: 0xF750E4
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HostLobbySetupViewController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::HostLobbySetupViewController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HostLobbySetupViewController*, creationType>()));
    }
  }; // HostLobbySetupViewController
  #pragma pack(pop)
  static check_size<sizeof(HostLobbySetupViewController), 208 + sizeof(System::Action*)> __GlobalNamespace_HostLobbySetupViewControllerSizeCheck;
  static_assert(sizeof(HostLobbySetupViewController) == 0xD8);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::HostLobbySetupViewController*, "", "HostLobbySetupViewController");
