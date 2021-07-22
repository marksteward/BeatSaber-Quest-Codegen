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
  // [TokenAttribute] Offset: FFFFFFFF
  class PauseController : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::PauseController::$$c__DisplayClass20_0
    class $$c__DisplayClass20_0;
    // [InjectAttribute] Offset: 0xE06960
    // private readonly PauseMenuManager _pauseMenuManager
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::PauseMenuManager* pauseMenuManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::PauseMenuManager*) == 0x8);
    // [InjectAttribute] Offset: 0xE06970
    // private readonly IGamePause _gamePause
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::IGamePause* gamePause;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IGamePause*) == 0x8);
    // [InjectAttribute] Offset: 0xE06980
    // private readonly IMenuButtonTrigger _menuButtonTrigger
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::IMenuButtonTrigger* menuButtonTrigger;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IMenuButtonTrigger*) == 0x8);
    // [InjectAttribute] Offset: 0xE06990
    // private readonly BeatmapObjectManager _beatmapObjectManager
    // Size: 0x8
    // Offset: 0x30
    GlobalNamespace::BeatmapObjectManager* beatmapObjectManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapObjectManager*) == 0x8);
    // [InjectAttribute] Offset: 0xE069A0
    // private readonly ILevelRestartController _levelRestartController
    // Size: 0x8
    // Offset: 0x38
    GlobalNamespace::ILevelRestartController* levelRestartController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ILevelRestartController*) == 0x8);
    // [InjectAttribute] Offset: 0xE069B0
    // private readonly IReturnToMenuController _returnToMenuController
    // Size: 0x8
    // Offset: 0x40
    GlobalNamespace::IReturnToMenuController* returnToMenuController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IReturnToMenuController*) == 0x8);
    // [InjectAttribute] Offset: 0xE069C0
    // private readonly IVRPlatformHelper _vrPlatformHelper
    // Size: 0x8
    // Offset: 0x48
    GlobalNamespace::IVRPlatformHelper* vrPlatformHelper;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IVRPlatformHelper*) == 0x8);
    // private System.Action didPauseEvent
    // Size: 0x8
    // Offset: 0x50
    System::Action* didPauseEvent;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // private System.Action didResumeEvent
    // Size: 0x8
    // Offset: 0x58
    System::Action* didResumeEvent;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // private System.Action`1<System.Action`1<System.Boolean>> canPauseEvent
    // Size: 0x8
    // Offset: 0x60
    System::Action_1<System::Action_1<bool>*>* canPauseEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<System::Action_1<bool>*>*) == 0x8);
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
    // private System.Boolean get_canPause()
    // Offset: 0x1000F38
    bool get_canPause();
    // public System.Boolean get_wantsToPause()
    // Offset: 0x1001024
    bool get_wantsToPause();
    // public System.Void add_didPauseEvent(System.Action value)
    // Offset: 0x1000A18
    void add_didPauseEvent(System::Action* value);
    // public System.Void remove_didPauseEvent(System.Action value)
    // Offset: 0x1000ABC
    void remove_didPauseEvent(System::Action* value);
    // public System.Void add_didResumeEvent(System.Action value)
    // Offset: 0x1000B60
    void add_didResumeEvent(System::Action* value);
    // public System.Void remove_didResumeEvent(System.Action value)
    // Offset: 0x1000C04
    void remove_didResumeEvent(System::Action* value);
    // public System.Void add_canPauseEvent(System.Action`1<System.Action`1<System.Boolean>> value)
    // Offset: 0x1000CA8
    void add_canPauseEvent(System::Action_1<System::Action_1<bool>*>* value);
    // public System.Void remove_canPauseEvent(System.Action`1<System.Action`1<System.Boolean>> value)
    // Offset: 0x1000D4C
    void remove_canPauseEvent(System::Action_1<System::Action_1<bool>*>* value);
    // public System.Void add_didReturnToMenuEvent(System.Action value)
    // Offset: 0x1000DF0
    void add_didReturnToMenuEvent(System::Action* value);
    // public System.Void remove_didReturnToMenuEvent(System.Action value)
    // Offset: 0x1000E94
    void remove_didReturnToMenuEvent(System::Action* value);
    // private System.Void Start()
    // Offset: 0x10010E4
    void Start();
    // protected System.Void OnDestroy()
    // Offset: 0x1001670
    void OnDestroy();
    // protected System.Void OnApplicationPause(System.Boolean pauseStatus)
    // Offset: 0x1001C60
    void OnApplicationPause(bool pauseStatus);
    // public System.Void Pause()
    // Offset: 0x1001C6C
    void Pause();
    // private System.Void HandleMenuButtonTriggered()
    // Offset: 0x1001E2C
    void HandleMenuButtonTriggered();
    // private System.Void HandleInputFocusWasCaptured()
    // Offset: 0x1001E30
    void HandleInputFocusWasCaptured();
    // private System.Void HandleHMDUnmounted()
    // Offset: 0x1001E34
    void HandleHMDUnmounted();
    // private System.Void HandlePauseMenuManagerDidFinishResumeAnimation()
    // Offset: 0x1001E38
    void HandlePauseMenuManagerDidFinishResumeAnimation();
    // private System.Void HandlePauseMenuManagerDidPressContinueButton()
    // Offset: 0x1001F20
    void HandlePauseMenuManagerDidPressContinueButton();
    // private System.Void HandlePauseMenuManagerDidPressRestartButton()
    // Offset: 0x100204C
    void HandlePauseMenuManagerDidPressRestartButton();
    // private System.Void HandlePauseMenuManagerDidPressMenuButton()
    // Offset: 0x10020FC
    void HandlePauseMenuManagerDidPressMenuButton();
    // public System.Void .ctor()
    // Offset: 0x10021BC
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
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::PauseController::get_canPause
// Il2CppName: get_canPause
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::PauseController::*)()>(&GlobalNamespace::PauseController::get_canPause)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PauseController*), "get_canPause", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PauseController::get_wantsToPause
// Il2CppName: get_wantsToPause
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::PauseController::*)()>(&GlobalNamespace::PauseController::get_wantsToPause)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PauseController*), "get_wantsToPause", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PauseController::add_didPauseEvent
// Il2CppName: add_didPauseEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PauseController::*)(System::Action*)>(&GlobalNamespace::PauseController::add_didPauseEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PauseController*), "add_didPauseEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PauseController::remove_didPauseEvent
// Il2CppName: remove_didPauseEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PauseController::*)(System::Action*)>(&GlobalNamespace::PauseController::remove_didPauseEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PauseController*), "remove_didPauseEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PauseController::add_didResumeEvent
// Il2CppName: add_didResumeEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PauseController::*)(System::Action*)>(&GlobalNamespace::PauseController::add_didResumeEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PauseController*), "add_didResumeEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PauseController::remove_didResumeEvent
// Il2CppName: remove_didResumeEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PauseController::*)(System::Action*)>(&GlobalNamespace::PauseController::remove_didResumeEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PauseController*), "remove_didResumeEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PauseController::add_canPauseEvent
// Il2CppName: add_canPauseEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PauseController::*)(System::Action_1<System::Action_1<bool>*>*)>(&GlobalNamespace::PauseController::add_canPauseEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Boolean")})})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PauseController*), "add_canPauseEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PauseController::remove_canPauseEvent
// Il2CppName: remove_canPauseEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PauseController::*)(System::Action_1<System::Action_1<bool>*>*)>(&GlobalNamespace::PauseController::remove_canPauseEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Boolean")})})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PauseController*), "remove_canPauseEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PauseController::add_didReturnToMenuEvent
// Il2CppName: add_didReturnToMenuEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PauseController::*)(System::Action*)>(&GlobalNamespace::PauseController::add_didReturnToMenuEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PauseController*), "add_didReturnToMenuEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PauseController::remove_didReturnToMenuEvent
// Il2CppName: remove_didReturnToMenuEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PauseController::*)(System::Action*)>(&GlobalNamespace::PauseController::remove_didReturnToMenuEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PauseController*), "remove_didReturnToMenuEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PauseController::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PauseController::*)()>(&GlobalNamespace::PauseController::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PauseController*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PauseController::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PauseController::*)()>(&GlobalNamespace::PauseController::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PauseController*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PauseController::OnApplicationPause
// Il2CppName: OnApplicationPause
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PauseController::*)(bool)>(&GlobalNamespace::PauseController::OnApplicationPause)> {
  static const MethodInfo* get() {
    static auto* pauseStatus = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PauseController*), "OnApplicationPause", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pauseStatus});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PauseController::Pause
// Il2CppName: Pause
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PauseController::*)()>(&GlobalNamespace::PauseController::Pause)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PauseController*), "Pause", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PauseController::HandleMenuButtonTriggered
// Il2CppName: HandleMenuButtonTriggered
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PauseController::*)()>(&GlobalNamespace::PauseController::HandleMenuButtonTriggered)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PauseController*), "HandleMenuButtonTriggered", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PauseController::HandleInputFocusWasCaptured
// Il2CppName: HandleInputFocusWasCaptured
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PauseController::*)()>(&GlobalNamespace::PauseController::HandleInputFocusWasCaptured)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PauseController*), "HandleInputFocusWasCaptured", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PauseController::HandleHMDUnmounted
// Il2CppName: HandleHMDUnmounted
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PauseController::*)()>(&GlobalNamespace::PauseController::HandleHMDUnmounted)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PauseController*), "HandleHMDUnmounted", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PauseController::HandlePauseMenuManagerDidFinishResumeAnimation
// Il2CppName: HandlePauseMenuManagerDidFinishResumeAnimation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PauseController::*)()>(&GlobalNamespace::PauseController::HandlePauseMenuManagerDidFinishResumeAnimation)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PauseController*), "HandlePauseMenuManagerDidFinishResumeAnimation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PauseController::HandlePauseMenuManagerDidPressContinueButton
// Il2CppName: HandlePauseMenuManagerDidPressContinueButton
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PauseController::*)()>(&GlobalNamespace::PauseController::HandlePauseMenuManagerDidPressContinueButton)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PauseController*), "HandlePauseMenuManagerDidPressContinueButton", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PauseController::HandlePauseMenuManagerDidPressRestartButton
// Il2CppName: HandlePauseMenuManagerDidPressRestartButton
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PauseController::*)()>(&GlobalNamespace::PauseController::HandlePauseMenuManagerDidPressRestartButton)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PauseController*), "HandlePauseMenuManagerDidPressRestartButton", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PauseController::HandlePauseMenuManagerDidPressMenuButton
// Il2CppName: HandlePauseMenuManagerDidPressMenuButton
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PauseController::*)()>(&GlobalNamespace::PauseController::HandlePauseMenuManagerDidPressMenuButton)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PauseController*), "HandlePauseMenuManagerDidPressMenuButton", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PauseController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
