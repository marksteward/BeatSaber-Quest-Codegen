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
}
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TextMeshProUGUI
  class TextMeshProUGUI;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: StepValuePicker
  // [] Offset: FFFFFFFF
  class StepValuePicker : public UnityEngine::MonoBehaviour {
    public:
    // private UnityEngine.UI.Button _decButton
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::UI::Button* decButton;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Button*) == 0x8);
    // private UnityEngine.UI.Button _incButton
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::UI::Button* incButton;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Button*) == 0x8);
    // private TMPro.TextMeshProUGUI _valueText
    // Size: 0x8
    // Offset: 0x28
    TMPro::TextMeshProUGUI* valueText;
    // Field size check
    static_assert(sizeof(TMPro::TextMeshProUGUI*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDCD234
    // private System.Action decButtonWasPressedEvent
    // Size: 0x8
    // Offset: 0x30
    System::Action* decButtonWasPressedEvent;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDCD244
    // private System.Action incButtonWasPressedEvent
    // Size: 0x8
    // Offset: 0x38
    System::Action* incButtonWasPressedEvent;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // Creating value type constructor for type: StepValuePicker
    StepValuePicker(UnityEngine::UI::Button* decButton_ = {}, UnityEngine::UI::Button* incButton_ = {}, TMPro::TextMeshProUGUI* valueText_ = {}, System::Action* decButtonWasPressedEvent_ = {}, System::Action* incButtonWasPressedEvent_ = {}) noexcept : decButton{decButton_}, incButton{incButton_}, valueText{valueText_}, decButtonWasPressedEvent{decButtonWasPressedEvent_}, incButtonWasPressedEvent{incButtonWasPressedEvent_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Void add_decButtonWasPressedEvent(System.Action value)
    // Offset: 0xF47778
    void add_decButtonWasPressedEvent(System::Action* value);
    // public System.Void remove_decButtonWasPressedEvent(System.Action value)
    // Offset: 0xF4781C
    void remove_decButtonWasPressedEvent(System::Action* value);
    // public System.Void add_incButtonWasPressedEvent(System.Action value)
    // Offset: 0xF478C0
    void add_incButtonWasPressedEvent(System::Action* value);
    // public System.Void remove_incButtonWasPressedEvent(System.Action value)
    // Offset: 0xF47964
    void remove_incButtonWasPressedEvent(System::Action* value);
    // public System.String get_text()
    // Offset: 0xF47A08
    ::Il2CppString* get_text();
    // public System.Void set_text(System.String value)
    // Offset: 0xF47A24
    void set_text(::Il2CppString* value);
    // public System.Void set_decButtonInteractable(System.Boolean value)
    // Offset: 0xF47A40
    void set_decButtonInteractable(bool value);
    // public System.Void set_incButtonInteractable(System.Boolean value)
    // Offset: 0xF47A60
    void set_incButtonInteractable(bool value);
    // protected System.Void OnEnable()
    // Offset: 0xF47A80
    void OnEnable();
    // protected System.Void OnDisable()
    // Offset: 0xF47B58
    void OnDisable();
    // private System.Void IncButtonPressed()
    // Offset: 0xF47C30
    void IncButtonPressed();
    // private System.Void DecButtonPressed()
    // Offset: 0xF47C44
    void DecButtonPressed();
    // public System.Void .ctor()
    // Offset: 0xF47C58
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static StepValuePicker* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::StepValuePicker::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<StepValuePicker*, creationType>()));
    }
  }; // StepValuePicker
  static check_size<sizeof(StepValuePicker), 56 + sizeof(System::Action*)> __GlobalNamespace_StepValuePickerSizeCheck;
  static_assert(sizeof(StepValuePicker) == 0x40);
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::StepValuePicker*, "", "StepValuePicker");
