// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Button
  class Button;
}
// Forward declaring namespace: Polyglot
namespace Polyglot {
  // Forward declaring type: LocalizedTextMeshProUGUI
  class LocalizedTextMeshProUGUI;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: DisconnectPromptView
  class DisconnectPromptView;
  // Forward declaring type: LevelBar
  class LevelBar;
  // Forward declaring type: IConnectedPlayer
  class IConnectedPlayer;
  // Forward declaring type: LocalPlayerInGameMenuInitData
  class LocalPlayerInGameMenuInitData;
  // Forward declaring type: VRControllersInputManager
  class VRControllersInputManager;
  // Forward declaring type: MultiplayerLocalPlayerDisconnectHelper
  class MultiplayerLocalPlayerDisconnectHelper;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: ButtonBinder
  class ButtonBinder;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0xA4
  // Autogenerated type: MultiplayerLocalActivePlayerInGameMenuViewController
  // [] Offset: FFFFFFFF
  class MultiplayerLocalActivePlayerInGameMenuViewController : public UnityEngine::MonoBehaviour {
    public:
    // private UnityEngine.UI.Button _disconnectButton
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::UI::Button* disconnectButton;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Button*) == 0x8);
    // private Polyglot.LocalizedTextMeshProUGUI _disconnectButtonLocalizedText
    // Size: 0x8
    // Offset: 0x20
    Polyglot::LocalizedTextMeshProUGUI* disconnectButtonLocalizedText;
    // Field size check
    static_assert(sizeof(Polyglot::LocalizedTextMeshProUGUI*) == 0x8);
    // private UnityEngine.UI.Button _giveUpButton
    // Size: 0x8
    // Offset: 0x28
    UnityEngine::UI::Button* giveUpButton;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Button*) == 0x8);
    // private UnityEngine.UI.Button _resumeButton
    // Size: 0x8
    // Offset: 0x30
    UnityEngine::UI::Button* resumeButton;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Button*) == 0x8);
    // [SpaceAttribute] Offset: 0xDC7FB0
    // private UnityEngine.GameObject _mainBar
    // Size: 0x8
    // Offset: 0x38
    UnityEngine::GameObject* mainBar;
    // Field size check
    static_assert(sizeof(UnityEngine::GameObject*) == 0x8);
    // private DisconnectPromptView _disconnectPromptView
    // Size: 0x8
    // Offset: 0x40
    GlobalNamespace::DisconnectPromptView* disconnectPromptView;
    // Field size check
    static_assert(sizeof(GlobalNamespace::DisconnectPromptView*) == 0x8);
    // [SpaceAttribute] Offset: 0xDC7FF8
    // private LevelBar _levelBar
    // Size: 0x8
    // Offset: 0x48
    GlobalNamespace::LevelBar* levelBar;
    // Field size check
    static_assert(sizeof(GlobalNamespace::LevelBar*) == 0x8);
    // [SpaceAttribute] Offset: 0xDC8030
    // private UnityEngine.GameObject _menuWrapperGameObject
    // Size: 0x8
    // Offset: 0x50
    UnityEngine::GameObject* menuWrapperGameObject;
    // Field size check
    static_assert(sizeof(UnityEngine::GameObject*) == 0x8);
    // private UnityEngine.GameObject _menuControllersGameObject
    // Size: 0x8
    // Offset: 0x58
    UnityEngine::GameObject* menuControllersGameObject;
    // Field size check
    static_assert(sizeof(UnityEngine::GameObject*) == 0x8);
    // [InjectAttribute] Offset: 0xDC8078
    // private readonly IConnectedPlayer _connectedPlayer
    // Size: 0x8
    // Offset: 0x60
    GlobalNamespace::IConnectedPlayer* connectedPlayer;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IConnectedPlayer*) == 0x8);
    // [InjectAttribute] Offset: 0xDC8088
    // private readonly LocalPlayerInGameMenuInitData _localPlayerInGameMenuInitData
    // Size: 0x8
    // Offset: 0x68
    GlobalNamespace::LocalPlayerInGameMenuInitData* localPlayerInGameMenuInitData;
    // Field size check
    static_assert(sizeof(GlobalNamespace::LocalPlayerInGameMenuInitData*) == 0x8);
    // [InjectAttribute] Offset: 0xDC8098
    // private readonly VRControllersInputManager _vrControllersInputManager
    // Size: 0x8
    // Offset: 0x70
    GlobalNamespace::VRControllersInputManager* vrControllersInputManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::VRControllersInputManager*) == 0x8);
    // [InjectAttribute] Offset: 0xDC80A8
    // private readonly MultiplayerLocalPlayerDisconnectHelper _disconnectHelper
    // Size: 0x8
    // Offset: 0x78
    GlobalNamespace::MultiplayerLocalPlayerDisconnectHelper* disconnectHelper;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MultiplayerLocalPlayerDisconnectHelper*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDC80B8
    // private System.Action didPressDisconnectButtonEvent
    // Size: 0x8
    // Offset: 0x80
    System::Action* didPressDisconnectButtonEvent;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDC80C8
    // private System.Action didPressGiveUpButtonEvent
    // Size: 0x8
    // Offset: 0x88
    System::Action* didPressGiveUpButtonEvent;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDC80D8
    // private System.Action didPressResumeButtonEvent
    // Size: 0x8
    // Offset: 0x90
    System::Action* didPressResumeButtonEvent;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // private HMUI.ButtonBinder _buttonBinder
    // Size: 0x8
    // Offset: 0x98
    HMUI::ButtonBinder* buttonBinder;
    // Field size check
    static_assert(sizeof(HMUI::ButtonBinder*) == 0x8);
    // private System.Single _disabledInteractionRemainingTime
    // Size: 0x4
    // Offset: 0xA0
    float disabledInteractionRemainingTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Creating value type constructor for type: MultiplayerLocalActivePlayerInGameMenuViewController
    MultiplayerLocalActivePlayerInGameMenuViewController(UnityEngine::UI::Button* disconnectButton_ = {}, Polyglot::LocalizedTextMeshProUGUI* disconnectButtonLocalizedText_ = {}, UnityEngine::UI::Button* giveUpButton_ = {}, UnityEngine::UI::Button* resumeButton_ = {}, UnityEngine::GameObject* mainBar_ = {}, GlobalNamespace::DisconnectPromptView* disconnectPromptView_ = {}, GlobalNamespace::LevelBar* levelBar_ = {}, UnityEngine::GameObject* menuWrapperGameObject_ = {}, UnityEngine::GameObject* menuControllersGameObject_ = {}, GlobalNamespace::IConnectedPlayer* connectedPlayer_ = {}, GlobalNamespace::LocalPlayerInGameMenuInitData* localPlayerInGameMenuInitData_ = {}, GlobalNamespace::VRControllersInputManager* vrControllersInputManager_ = {}, GlobalNamespace::MultiplayerLocalPlayerDisconnectHelper* disconnectHelper_ = {}, System::Action* didPressDisconnectButtonEvent_ = {}, System::Action* didPressGiveUpButtonEvent_ = {}, System::Action* didPressResumeButtonEvent_ = {}, HMUI::ButtonBinder* buttonBinder_ = {}, float disabledInteractionRemainingTime_ = {}) noexcept : disconnectButton{disconnectButton_}, disconnectButtonLocalizedText{disconnectButtonLocalizedText_}, giveUpButton{giveUpButton_}, resumeButton{resumeButton_}, mainBar{mainBar_}, disconnectPromptView{disconnectPromptView_}, levelBar{levelBar_}, menuWrapperGameObject{menuWrapperGameObject_}, menuControllersGameObject{menuControllersGameObject_}, connectedPlayer{connectedPlayer_}, localPlayerInGameMenuInitData{localPlayerInGameMenuInitData_}, vrControllersInputManager{vrControllersInputManager_}, disconnectHelper{disconnectHelper_}, didPressDisconnectButtonEvent{didPressDisconnectButtonEvent_}, didPressGiveUpButtonEvent{didPressGiveUpButtonEvent_}, didPressResumeButtonEvent{didPressResumeButtonEvent_}, buttonBinder{buttonBinder_}, disabledInteractionRemainingTime{disabledInteractionRemainingTime_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // static field const value: static private System.Single kDisabledInteractionDuration
    static constexpr const float kDisabledInteractionDuration = 0.2;
    // Get static field: static private System.Single kDisabledInteractionDuration
    static float _get_kDisabledInteractionDuration();
    // Set static field: static private System.Single kDisabledInteractionDuration
    static void _set_kDisabledInteractionDuration(float value);
    // public System.Void add_didPressDisconnectButtonEvent(System.Action value)
    // Offset: 0xF6F0F0
    void add_didPressDisconnectButtonEvent(System::Action* value);
    // public System.Void remove_didPressDisconnectButtonEvent(System.Action value)
    // Offset: 0xF6F5EC
    void remove_didPressDisconnectButtonEvent(System::Action* value);
    // public System.Void add_didPressGiveUpButtonEvent(System.Action value)
    // Offset: 0xF6F238
    void add_didPressGiveUpButtonEvent(System::Action* value);
    // public System.Void remove_didPressGiveUpButtonEvent(System.Action value)
    // Offset: 0xF6F734
    void remove_didPressGiveUpButtonEvent(System::Action* value);
    // public System.Void add_didPressResumeButtonEvent(System.Action value)
    // Offset: 0xF6F194
    void add_didPressResumeButtonEvent(System::Action* value);
    // public System.Void remove_didPressResumeButtonEvent(System.Action value)
    // Offset: 0xF6F690
    void remove_didPressResumeButtonEvent(System::Action* value);
    // protected System.Void Awake()
    // Offset: 0xF6FB40
    void Awake();
    // protected System.Void Start()
    // Offset: 0xF6FCE0
    void Start();
    // protected System.Void OnDestroy()
    // Offset: 0xF6FE44
    void OnDestroy();
    // protected System.Void Update()
    // Offset: 0xF6FEE8
    void Update();
    // public System.Void ShowMenu()
    // Offset: 0xF6F860
    void ShowMenu();
    // public System.Void HideMenu()
    // Offset: 0xF6F8BC
    void HideMenu();
    // private System.Void DisconnectButtonPressed()
    // Offset: 0xF6FF98
    void DisconnectButtonPressed();
    // private System.Void HandleDisconnectPromptViewDidViewFinish(System.Boolean disconnect)
    // Offset: 0xF6FFD8
    void HandleDisconnectPromptViewDidViewFinish(bool disconnect);
    // private System.Void GiveUpButtonPressed()
    // Offset: 0xF700A8
    void GiveUpButtonPressed();
    // private System.Void ResumeButtonPressed()
    // Offset: 0xF6FF58
    void ResumeButtonPressed();
    // private System.Void <HandleDisconnectPromptViewDidViewFinish>b__32_0()
    // Offset: 0xF70104
    void $HandleDisconnectPromptViewDidViewFinish$b__32_0();
    // public System.Void .ctor()
    // Offset: 0xF700FC
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MultiplayerLocalActivePlayerInGameMenuViewController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuViewController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MultiplayerLocalActivePlayerInGameMenuViewController*, creationType>()));
    }
  }; // MultiplayerLocalActivePlayerInGameMenuViewController
  static check_size<sizeof(MultiplayerLocalActivePlayerInGameMenuViewController), 160 + sizeof(float)> __GlobalNamespace_MultiplayerLocalActivePlayerInGameMenuViewControllerSizeCheck;
  static_assert(sizeof(MultiplayerLocalActivePlayerInGameMenuViewController) == 0xA4);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuViewController*, "", "MultiplayerLocalActivePlayerInGameMenuViewController");
#pragma pack(pop)
