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
  // Forward declaring type: PauseMenuManager
  class PauseMenuManager;
  // Forward declaring type: IGamePause
  class IGamePause;
  // Forward declaring type: IMenuButtonTrigger
  class IMenuButtonTrigger;
  // Forward declaring type: BeatmapObjectManager
  class BeatmapObjectManager;
  // Forward declaring type: ILevelRestartController
  class ILevelRestartController;
  // Forward declaring type: IReturnToMenuController
  class IReturnToMenuController;
  // Forward declaring type: IVRPlatformHelper
  class IVRPlatformHelper;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x71
  #pragma pack(push, 1)
  // Autogenerated type: PauseController
  class PauseController : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::PauseController::$$c__DisplayClass20_0
    class $$c__DisplayClass20_0;
    // [InjectAttribute] Offset: 0xD3BA90
    // private readonly PauseMenuManager _pauseMenuManager
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::PauseMenuManager* pauseMenuManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::PauseMenuManager*) == 0x8);
    // [InjectAttribute] Offset: 0xD3BAA0
    // private readonly IGamePause _gamePause
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::IGamePause* gamePause;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IGamePause*) == 0x8);
    // [InjectAttribute] Offset: 0xD3BAB0
    // private readonly IMenuButtonTrigger _menuButtonTrigger
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::IMenuButtonTrigger* menuButtonTrigger;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IMenuButtonTrigger*) == 0x8);
    // [InjectAttribute] Offset: 0xD3BAC0
    // private readonly BeatmapObjectManager _beatmapObjectManager
    // Size: 0x8
    // Offset: 0x30
    GlobalNamespace::BeatmapObjectManager* beatmapObjectManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapObjectManager*) == 0x8);
    // [InjectAttribute] Offset: 0xD3BAD0
    // private readonly ILevelRestartController _levelRestartController
    // Size: 0x8
    // Offset: 0x38
    GlobalNamespace::ILevelRestartController* levelRestartController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ILevelRestartController*) == 0x8);
    // [InjectAttribute] Offset: 0xD3BAE0
    // private readonly IReturnToMenuController _returnToMenuController
    // Size: 0x8
    // Offset: 0x40
    GlobalNamespace::IReturnToMenuController* returnToMenuController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IReturnToMenuController*) == 0x8);
    // [InjectAttribute] Offset: 0xD3BAF0
    // private readonly IVRPlatformHelper _vrPlatformHelper
    // Size: 0x8
    // Offset: 0x48
    GlobalNamespace::IVRPlatformHelper* vrPlatformHelper;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IVRPlatformHelper*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xD3BB00
    // private System.Action didPauseEvent
    // Size: 0x8
    // Offset: 0x50
    System::Action* didPauseEvent;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xD3BB10
    // private System.Action didResumeEvent
    // Size: 0x8
    // Offset: 0x58
    System::Action* didResumeEvent;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xD3BB20
    // private System.Action`1<System.Action`1<System.Boolean>> canPauseEvent
    // Size: 0x8
    // Offset: 0x60
    System::Action_1<System::Action_1<bool>*>* canPauseEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<System::Action_1<bool>*>*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xD3BB30
    // private System.Action didReturnToMenuEvent
    // Size: 0x8
    // Offset: 0x68
    System::Action* didReturnToMenuEvent;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // private System.Boolean _paused
    // Size: 0x1
    // Offset: 0x70
    bool paused;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: PauseController
    PauseController(GlobalNamespace::PauseMenuManager* pauseMenuManager_ = {}, GlobalNamespace::IGamePause* gamePause_ = {}, GlobalNamespace::IMenuButtonTrigger* menuButtonTrigger_ = {}, GlobalNamespace::BeatmapObjectManager* beatmapObjectManager_ = {}, GlobalNamespace::ILevelRestartController* levelRestartController_ = {}, GlobalNamespace::IReturnToMenuController* returnToMenuController_ = {}, GlobalNamespace::IVRPlatformHelper* vrPlatformHelper_ = {}, System::Action* didPauseEvent_ = {}, System::Action* didResumeEvent_ = {}, System::Action_1<System::Action_1<bool>*>* canPauseEvent_ = {}, System::Action* didReturnToMenuEvent_ = {}, bool paused_ = {}) noexcept : pauseMenuManager{pauseMenuManager_}, gamePause{gamePause_}, menuButtonTrigger{menuButtonTrigger_}, beatmapObjectManager{beatmapObjectManager_}, levelRestartController{levelRestartController_}, returnToMenuController{returnToMenuController_}, vrPlatformHelper{vrPlatformHelper_}, didPauseEvent{didPauseEvent_}, didResumeEvent{didResumeEvent_}, canPauseEvent{canPauseEvent_}, didReturnToMenuEvent{didReturnToMenuEvent_}, paused{paused_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Void add_didPauseEvent(System.Action value)
    // Offset: 0xF19C58
    void add_didPauseEvent(System::Action* value);
    // public System.Void remove_didPauseEvent(System.Action value)
    // Offset: 0xF19CFC
    void remove_didPauseEvent(System::Action* value);
    // public System.Void add_didResumeEvent(System.Action value)
    // Offset: 0xF19DA0
    void add_didResumeEvent(System::Action* value);
    // public System.Void remove_didResumeEvent(System.Action value)
    // Offset: 0xF19E44
    void remove_didResumeEvent(System::Action* value);
    // public System.Void add_canPauseEvent(System.Action`1<System.Action`1<System.Boolean>> value)
    // Offset: 0xF19EE8
    void add_canPauseEvent(System::Action_1<System::Action_1<bool>*>* value);
    // public System.Void remove_canPauseEvent(System.Action`1<System.Action`1<System.Boolean>> value)
    // Offset: 0xF19F8C
    void remove_canPauseEvent(System::Action_1<System::Action_1<bool>*>* value);
    // public System.Void add_didReturnToMenuEvent(System.Action value)
    // Offset: 0xF1A030
    void add_didReturnToMenuEvent(System::Action* value);
    // public System.Void remove_didReturnToMenuEvent(System.Action value)
    // Offset: 0xF1A0D4
    void remove_didReturnToMenuEvent(System::Action* value);
    // private System.Boolean get_canPause()
    // Offset: 0xF1A178
    bool get_canPause();
    // public System.Boolean get_wantsToPause()
    // Offset: 0xF1A264
    bool get_wantsToPause();
    // private System.Void Start()
    // Offset: 0xF1A324
    void Start();
    // protected System.Void OnDestroy()
    // Offset: 0xF1A8B0
    void OnDestroy();
    // protected System.Void OnApplicationPause(System.Boolean pauseStatus)
    // Offset: 0xF1AEA0
    void OnApplicationPause(bool pauseStatus);
    // public System.Void Pause()
    // Offset: 0xF1AEAC
    void Pause();
    // private System.Void HandleMenuButtonTriggered()
    // Offset: 0xF1B06C
    void HandleMenuButtonTriggered();
    // private System.Void HandleInputFocusWasCaptured()
    // Offset: 0xF1B070
    void HandleInputFocusWasCaptured();
    // private System.Void HandleHMDUnmounted()
    // Offset: 0xF1B074
    void HandleHMDUnmounted();
    // private System.Void HandlePauseMenuManagerDidFinishResumeAnimation()
    // Offset: 0xF1B078
    void HandlePauseMenuManagerDidFinishResumeAnimation();
    // private System.Void HandlePauseMenuManagerDidPressContinueButton()
    // Offset: 0xF1B160
    void HandlePauseMenuManagerDidPressContinueButton();
    // private System.Void HandlePauseMenuManagerDidPressRestartButton()
    // Offset: 0xF1B28C
    void HandlePauseMenuManagerDidPressRestartButton();
    // private System.Void HandlePauseMenuManagerDidPressMenuButton()
    // Offset: 0xF1B33C
    void HandlePauseMenuManagerDidPressMenuButton();
    // public System.Void .ctor()
    // Offset: 0xF1B3FC
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PauseController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::PauseController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PauseController*, creationType>()));
    }
  }; // PauseController
  #pragma pack(pop)
  static check_size<sizeof(PauseController), 112 + sizeof(bool)> __GlobalNamespace_PauseControllerSizeCheck;
  static_assert(sizeof(PauseController) == 0x71);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PauseController*, "", "PauseController");
