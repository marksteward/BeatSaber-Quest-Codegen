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
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Button
  class Button;
  // Forward declaring type: Toggle
  class Toggle;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: AutoSetupData
  class AutoSetupData;
}
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: ButtonBinder
  class ButtonBinder;
  // Forward declaring type: ToggleBinder
  class ToggleBinder;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x60
  #pragma pack(push, 1)
  // Autogenerated type: AutoSetupController
  class AutoSetupController : public UnityEngine::MonoBehaviour {
    public:
    // private UnityEngine.UI.Button _closeButton
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::UI::Button* closeButton;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Button*) == 0x8);
    // [HeaderAttribute] Offset: 0xE23A90
    // private UnityEngine.UI.Toggle _selectBasedOnSuggestionsToggle
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::UI::Toggle* selectBasedOnSuggestionsToggle;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Toggle*) == 0x8);
    // private UnityEngine.UI.Toggle _autoStartWhenAllReadyToggle
    // Size: 0x8
    // Offset: 0x28
    UnityEngine::UI::Toggle* autoStartWhenAllReadyToggle;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Toggle*) == 0x8);
    // private UnityEngine.UI.Toggle _forceAutoStartAfterSongSelectionToggle
    // Size: 0x8
    // Offset: 0x30
    UnityEngine::UI::Toggle* forceAutoStartAfterSongSelectionToggle;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Toggle*) == 0x8);
    // private UnityEngine.UI.Toggle _randomSongIfNoneSuggestedToggle
    // Size: 0x8
    // Offset: 0x38
    UnityEngine::UI::Toggle* randomSongIfNoneSuggestedToggle;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Toggle*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xE23B0C
    // private System.Action`1<AutoSetupData> didFinishEvent
    // Size: 0x8
    // Offset: 0x40
    System::Action_1<GlobalNamespace::AutoSetupData*>* didFinishEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<GlobalNamespace::AutoSetupData*>*) == 0x8);
    // private readonly HMUI.ButtonBinder _buttonBinder
    // Size: 0x8
    // Offset: 0x48
    HMUI::ButtonBinder* buttonBinder;
    // Field size check
    static_assert(sizeof(HMUI::ButtonBinder*) == 0x8);
    // private readonly HMUI.ToggleBinder _toggleBinder
    // Size: 0x8
    // Offset: 0x50
    HMUI::ToggleBinder* toggleBinder;
    // Field size check
    static_assert(sizeof(HMUI::ToggleBinder*) == 0x8);
    // private AutoSetupData _autoSetupData
    // Size: 0x8
    // Offset: 0x58
    GlobalNamespace::AutoSetupData* autoSetupData;
    // Field size check
    static_assert(sizeof(GlobalNamespace::AutoSetupData*) == 0x8);
    // Creating value type constructor for type: AutoSetupController
    AutoSetupController(UnityEngine::UI::Button* closeButton_ = {}, UnityEngine::UI::Toggle* selectBasedOnSuggestionsToggle_ = {}, UnityEngine::UI::Toggle* autoStartWhenAllReadyToggle_ = {}, UnityEngine::UI::Toggle* forceAutoStartAfterSongSelectionToggle_ = {}, UnityEngine::UI::Toggle* randomSongIfNoneSuggestedToggle_ = {}, System::Action_1<GlobalNamespace::AutoSetupData*>* didFinishEvent_ = {}, HMUI::ButtonBinder* buttonBinder_ = {}, HMUI::ToggleBinder* toggleBinder_ = {}, GlobalNamespace::AutoSetupData* autoSetupData_ = {}) noexcept : closeButton{closeButton_}, selectBasedOnSuggestionsToggle{selectBasedOnSuggestionsToggle_}, autoStartWhenAllReadyToggle{autoStartWhenAllReadyToggle_}, forceAutoStartAfterSongSelectionToggle{forceAutoStartAfterSongSelectionToggle_}, randomSongIfNoneSuggestedToggle{randomSongIfNoneSuggestedToggle_}, didFinishEvent{didFinishEvent_}, buttonBinder{buttonBinder_}, toggleBinder{toggleBinder_}, autoSetupData{autoSetupData_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Void add_didFinishEvent(System.Action`1<AutoSetupData> value)
    // Offset: 0x1132F68
    void add_didFinishEvent(System::Action_1<GlobalNamespace::AutoSetupData*>* value);
    // public System.Void remove_didFinishEvent(System.Action`1<AutoSetupData> value)
    // Offset: 0x113300C
    void remove_didFinishEvent(System::Action_1<GlobalNamespace::AutoSetupData*>* value);
    // public System.Void Setup(AutoSetupData autoSetupData)
    // Offset: 0x11330B0
    void Setup(GlobalNamespace::AutoSetupData* autoSetupData);
    // protected System.Void OnEnable()
    // Offset: 0x11330B8
    void OnEnable();
    // protected System.Void OnDisable()
    // Offset: 0x1133274
    void OnDisable();
    // private System.Void <OnEnable>b__12_0()
    // Offset: 0x1133340
    void $OnEnable$b__12_0();
    // private System.Void <OnEnable>b__12_1(System.Boolean isOn)
    // Offset: 0x11333A4
    void $OnEnable$b__12_1(bool isOn);
    // private System.Void <OnEnable>b__12_2(System.Boolean isOn)
    // Offset: 0x11333C4
    void $OnEnable$b__12_2(bool isOn);
    // private System.Void <OnEnable>b__12_3(System.Boolean isOn)
    // Offset: 0x11333E4
    void $OnEnable$b__12_3(bool isOn);
    // private System.Void <OnEnable>b__12_4(System.Boolean isOn)
    // Offset: 0x1133404
    void $OnEnable$b__12_4(bool isOn);
    // public System.Void .ctor()
    // Offset: 0x1133290
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AutoSetupController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::AutoSetupController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AutoSetupController*, creationType>()));
    }
  }; // AutoSetupController
  #pragma pack(pop)
  static check_size<sizeof(AutoSetupController), 88 + sizeof(GlobalNamespace::AutoSetupData*)> __GlobalNamespace_AutoSetupControllerSizeCheck;
  static_assert(sizeof(AutoSetupController) == 0x60);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::AutoSetupController*, "", "AutoSetupController");
// Writing MetadataGetter for method: GlobalNamespace::AutoSetupController::add_didFinishEvent
// Il2CppName: add_didFinishEvent
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::AutoSetupController::remove_didFinishEvent
// Il2CppName: remove_didFinishEvent
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::AutoSetupController::Setup
// Il2CppName: Setup
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::AutoSetupController::OnEnable
// Il2CppName: OnEnable
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::AutoSetupController::OnDisable
// Il2CppName: OnDisable
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::AutoSetupController::$OnEnable$b__12_0
// Il2CppName: <OnEnable>b__12_0
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::AutoSetupController::$OnEnable$b__12_1
// Il2CppName: <OnEnable>b__12_1
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::AutoSetupController::$OnEnable$b__12_2
// Il2CppName: <OnEnable>b__12_2
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::AutoSetupController::$OnEnable$b__12_3
// Il2CppName: <OnEnable>b__12_3
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::AutoSetupController::$OnEnable$b__12_4
// Il2CppName: <OnEnable>b__12_4
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::AutoSetupController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
