// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
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
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: PauseAnimationController
  class PauseAnimationController;
  // Forward declaring type: LevelBar
  class LevelBar;
  // Forward declaring type: VRControllersInputManager
  class VRControllersInputManager;
  // Forward declaring type: EnvironmentSpawnRotation
  class EnvironmentSpawnRotation;
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Button
  class Button;
}
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TextMeshProUGUI
  class TextMeshProUGUI;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
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
  // Size: 0x94
  #pragma pack(push, 1)
  // Autogenerated type: PauseMenuManager
  // [] Offset: FFFFFFFF
  class PauseMenuManager : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::PauseMenuManager::InitData
    class InitData;
    // private PauseAnimationController _pauseAnimationController
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::PauseAnimationController* pauseAnimationController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::PauseAnimationController*) == 0x8);
    // [NullAllowed] Offset: 0xDC8358
    // private LevelBar _levelBar
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::LevelBar* levelBar;
    // Field size check
    static_assert(sizeof(GlobalNamespace::LevelBar*) == 0x8);
    // private UnityEngine.UI.Button _continueButton
    // Size: 0x8
    // Offset: 0x28
    UnityEngine::UI::Button* continueButton;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Button*) == 0x8);
    // private UnityEngine.UI.Button _restartButton
    // Size: 0x8
    // Offset: 0x30
    UnityEngine::UI::Button* restartButton;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Button*) == 0x8);
    // private UnityEngine.UI.Button _backButton
    // Size: 0x8
    // Offset: 0x38
    UnityEngine::UI::Button* backButton;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Button*) == 0x8);
    // private TMPro.TextMeshProUGUI _backButtonText
    // Size: 0x8
    // Offset: 0x40
    TMPro::TextMeshProUGUI* backButtonText;
    // Field size check
    static_assert(sizeof(TMPro::TextMeshProUGUI*) == 0x8);
    // private UnityEngine.Transform _pauseContainerTransform
    // Size: 0x8
    // Offset: 0x48
    UnityEngine::Transform* pauseContainerTransform;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // [InjectAttribute] Offset: 0xDC83E0
    // private readonly PauseMenuManager/InitData _initData
    // Size: 0x8
    // Offset: 0x50
    GlobalNamespace::PauseMenuManager::InitData* initData;
    // Field size check
    static_assert(sizeof(GlobalNamespace::PauseMenuManager::InitData*) == 0x8);
    // [InjectAttribute] Offset: 0xDC83F0
    // private readonly VRControllersInputManager _vrControllersInputManager
    // Size: 0x8
    // Offset: 0x58
    GlobalNamespace::VRControllersInputManager* vrControllersInputManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::VRControllersInputManager*) == 0x8);
    // [InjectAttribute] Offset: 0xDC8400
    // private readonly EnvironmentSpawnRotation _environmentSpawnRotation
    // Size: 0x8
    // Offset: 0x60
    GlobalNamespace::EnvironmentSpawnRotation* environmentSpawnRotation;
    // Field size check
    static_assert(sizeof(GlobalNamespace::EnvironmentSpawnRotation*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDC8410
    // private System.Action didPressContinueButtonEvent
    // Size: 0x8
    // Offset: 0x68
    System::Action* didPressContinueButtonEvent;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDC8420
    // private System.Action didPressMenuButtonEvent
    // Size: 0x8
    // Offset: 0x70
    System::Action* didPressMenuButtonEvent;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDC8430
    // private System.Action didPressRestartButtonEvent
    // Size: 0x8
    // Offset: 0x78
    System::Action* didPressRestartButtonEvent;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDC8440
    // private System.Action didFinishResumeAnimationEvent
    // Size: 0x8
    // Offset: 0x80
    System::Action* didFinishResumeAnimationEvent;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // private HMUI.ButtonBinder _buttonBinder
    // Size: 0x8
    // Offset: 0x88
    HMUI::ButtonBinder* buttonBinder;
    // Field size check
    static_assert(sizeof(HMUI::ButtonBinder*) == 0x8);
    // private System.Single _disabledInteractionRemainingTime
    // Size: 0x4
    // Offset: 0x90
    float disabledInteractionRemainingTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Creating value type constructor for type: PauseMenuManager
    PauseMenuManager(GlobalNamespace::PauseAnimationController* pauseAnimationController_ = {}, GlobalNamespace::LevelBar* levelBar_ = {}, UnityEngine::UI::Button* continueButton_ = {}, UnityEngine::UI::Button* restartButton_ = {}, UnityEngine::UI::Button* backButton_ = {}, TMPro::TextMeshProUGUI* backButtonText_ = {}, UnityEngine::Transform* pauseContainerTransform_ = {}, GlobalNamespace::PauseMenuManager::InitData* initData_ = {}, GlobalNamespace::VRControllersInputManager* vrControllersInputManager_ = {}, GlobalNamespace::EnvironmentSpawnRotation* environmentSpawnRotation_ = {}, System::Action* didPressContinueButtonEvent_ = {}, System::Action* didPressMenuButtonEvent_ = {}, System::Action* didPressRestartButtonEvent_ = {}, System::Action* didFinishResumeAnimationEvent_ = {}, HMUI::ButtonBinder* buttonBinder_ = {}, float disabledInteractionRemainingTime_ = {}) noexcept : pauseAnimationController{pauseAnimationController_}, levelBar{levelBar_}, continueButton{continueButton_}, restartButton{restartButton_}, backButton{backButton_}, backButtonText{backButtonText_}, pauseContainerTransform{pauseContainerTransform_}, initData{initData_}, vrControllersInputManager{vrControllersInputManager_}, environmentSpawnRotation{environmentSpawnRotation_}, didPressContinueButtonEvent{didPressContinueButtonEvent_}, didPressMenuButtonEvent{didPressMenuButtonEvent_}, didPressRestartButtonEvent{didPressRestartButtonEvent_}, didFinishResumeAnimationEvent{didFinishResumeAnimationEvent_}, buttonBinder{buttonBinder_}, disabledInteractionRemainingTime{disabledInteractionRemainingTime_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // static field const value: static private System.Single kDisabledInteractionDuration
    static constexpr const float kDisabledInteractionDuration = 0.2;
    // Get static field: static private System.Single kDisabledInteractionDuration
    static float _get_kDisabledInteractionDuration();
    // Set static field: static private System.Single kDisabledInteractionDuration
    static void _set_kDisabledInteractionDuration(float value);
    // public System.Void add_didPressContinueButtonEvent(System.Action value)
    // Offset: 0xF06928
    void add_didPressContinueButtonEvent(System::Action* value);
    // public System.Void remove_didPressContinueButtonEvent(System.Action value)
    // Offset: 0xF06F18
    void remove_didPressContinueButtonEvent(System::Action* value);
    // public System.Void add_didPressMenuButtonEvent(System.Action value)
    // Offset: 0xF06A70
    void add_didPressMenuButtonEvent(System::Action* value);
    // public System.Void remove_didPressMenuButtonEvent(System.Action value)
    // Offset: 0xF07060
    void remove_didPressMenuButtonEvent(System::Action* value);
    // public System.Void add_didPressRestartButtonEvent(System.Action value)
    // Offset: 0xF069CC
    void add_didPressRestartButtonEvent(System::Action* value);
    // public System.Void remove_didPressRestartButtonEvent(System.Action value)
    // Offset: 0xF06FBC
    void remove_didPressRestartButtonEvent(System::Action* value);
    // public System.Void add_didFinishResumeAnimationEvent(System.Action value)
    // Offset: 0xF06884
    void add_didFinishResumeAnimationEvent(System::Action* value);
    // public System.Void remove_didFinishResumeAnimationEvent(System.Action value)
    // Offset: 0xF06E74
    void remove_didFinishResumeAnimationEvent(System::Action* value);
    // protected System.Void Awake()
    // Offset: 0xF0766C
    void Awake();
    // protected System.Void Start()
    // Offset: 0xF07804
    void Start();
    // protected System.Void OnDestroy()
    // Offset: 0xF07944
    void OnDestroy();
    // protected System.Void Update()
    // Offset: 0xF07A24
    void Update();
    // public System.Void ShowMenu()
    // Offset: 0xF07238
    void ShowMenu();
    // public System.Void StartResumeAnimation()
    // Offset: 0xF074A8
    void StartResumeAnimation();
    // private System.Void HandleResumeFromPauseAnimationDidFinish()
    // Offset: 0xF07BB0
    void HandleResumeFromPauseAnimationDidFinish();
    // private System.Void MenuButtonPressed()
    // Offset: 0xF07B70
    void MenuButtonPressed();
    // private System.Void RestartButtonPressed()
    // Offset: 0xF07B1C
    void RestartButtonPressed();
    // private System.Void ContinueButtonPressed()
    // Offset: 0xF07ADC
    void ContinueButtonPressed();
    // public System.Void .ctor()
    // Offset: 0xF07BC4
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PauseMenuManager* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::PauseMenuManager::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PauseMenuManager*, creationType>()));
    }
  }; // PauseMenuManager
  static check_size<sizeof(PauseMenuManager), 144 + sizeof(float)> __GlobalNamespace_PauseMenuManagerSizeCheck;
  static_assert(sizeof(PauseMenuManager) == 0x94);
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PauseMenuManager*, "", "PauseMenuManager");
