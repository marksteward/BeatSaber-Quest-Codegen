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
  // Forward declaring type: TextMeshProButton
  class TextMeshProButton;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
  // Forward declaring type: Action
  class Action;
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Button
  class Button;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x52
  #pragma pack(push, 1)
  // Autogenerated type: UIKeyboard
  class UIKeyboard : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::UIKeyboard::$$c__DisplayClass21_0
    class $$c__DisplayClass21_0;
    // private TextMeshProButton _keyButtonPrefab
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::TextMeshProButton* keyButtonPrefab;
    // Field size check
    static_assert(sizeof(GlobalNamespace::TextMeshProButton*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xD41638
    // private System.Action`1<System.Char> textKeyWasPressedEvent
    // Size: 0x8
    // Offset: 0x20
    System::Action_1<::Il2CppChar>* textKeyWasPressedEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<::Il2CppChar>*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xD41648
    // private System.Action deleteButtonWasPressedEvent
    // Size: 0x8
    // Offset: 0x28
    System::Action* deleteButtonWasPressedEvent;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xD41658
    // private System.Action okButtonWasPressedEvent
    // Size: 0x8
    // Offset: 0x30
    System::Action* okButtonWasPressedEvent;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xD41668
    // private System.Action cancelButtonWasPressedEvent
    // Size: 0x8
    // Offset: 0x38
    System::Action* cancelButtonWasPressedEvent;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // private UnityEngine.UI.Button _okButton
    // Size: 0x8
    // Offset: 0x40
    UnityEngine::UI::Button* okButton;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Button*) == 0x8);
    // private UnityEngine.UI.Button _cancelButton
    // Size: 0x8
    // Offset: 0x48
    UnityEngine::UI::Button* cancelButton;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Button*) == 0x8);
    // private System.Boolean _okButtonInteractivity
    // Size: 0x1
    // Offset: 0x50
    bool okButtonInteractivity;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _hideCancelButton
    // Size: 0x1
    // Offset: 0x51
    bool hideCancelButton;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: UIKeyboard
    UIKeyboard(GlobalNamespace::TextMeshProButton* keyButtonPrefab_ = {}, System::Action_1<::Il2CppChar>* textKeyWasPressedEvent_ = {}, System::Action* deleteButtonWasPressedEvent_ = {}, System::Action* okButtonWasPressedEvent_ = {}, System::Action* cancelButtonWasPressedEvent_ = {}, UnityEngine::UI::Button* okButton_ = {}, UnityEngine::UI::Button* cancelButton_ = {}, bool okButtonInteractivity_ = {}, bool hideCancelButton_ = {}) noexcept : keyButtonPrefab{keyButtonPrefab_}, textKeyWasPressedEvent{textKeyWasPressedEvent_}, deleteButtonWasPressedEvent{deleteButtonWasPressedEvent_}, okButtonWasPressedEvent{okButtonWasPressedEvent_}, cancelButtonWasPressedEvent{cancelButtonWasPressedEvent_}, okButton{okButton_}, cancelButton{cancelButton_}, okButtonInteractivity{okButtonInteractivity_}, hideCancelButton{hideCancelButton_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Void add_textKeyWasPressedEvent(System.Action`1<System.Char> value)
    // Offset: 0xFADF2C
    void add_textKeyWasPressedEvent(System::Action_1<::Il2CppChar>* value);
    // public System.Void remove_textKeyWasPressedEvent(System.Action`1<System.Char> value)
    // Offset: 0xFADFD0
    void remove_textKeyWasPressedEvent(System::Action_1<::Il2CppChar>* value);
    // public System.Void add_deleteButtonWasPressedEvent(System.Action value)
    // Offset: 0xFAE074
    void add_deleteButtonWasPressedEvent(System::Action* value);
    // public System.Void remove_deleteButtonWasPressedEvent(System.Action value)
    // Offset: 0xFAE118
    void remove_deleteButtonWasPressedEvent(System::Action* value);
    // public System.Void add_okButtonWasPressedEvent(System.Action value)
    // Offset: 0xFAE1BC
    void add_okButtonWasPressedEvent(System::Action* value);
    // public System.Void remove_okButtonWasPressedEvent(System.Action value)
    // Offset: 0xFAE260
    void remove_okButtonWasPressedEvent(System::Action* value);
    // public System.Void add_cancelButtonWasPressedEvent(System.Action value)
    // Offset: 0xFAE304
    void add_cancelButtonWasPressedEvent(System::Action* value);
    // public System.Void remove_cancelButtonWasPressedEvent(System.Action value)
    // Offset: 0xFAE3A8
    void remove_cancelButtonWasPressedEvent(System::Action* value);
    // public System.Void set_enableOkButtonInteractivity(System.Boolean value)
    // Offset: 0xFAE44C
    void set_enableOkButtonInteractivity(bool value);
    // public System.Void set_hideCancelButton(System.Boolean value)
    // Offset: 0xFAE4FC
    void set_hideCancelButton(bool value);
    // protected System.Void Awake()
    // Offset: 0xFAE5BC
    void Awake();
    // private System.Void <Awake>b__21_0()
    // Offset: 0xFAF08C
    void $Awake$b__21_0();
    // private System.Void <Awake>b__21_1()
    // Offset: 0xFAF0A0
    void $Awake$b__21_1();
    // private System.Void <Awake>b__21_2()
    // Offset: 0xFAF0BC
    void $Awake$b__21_2();
    // private System.Void <Awake>b__21_3()
    // Offset: 0xFAF0D8
    void $Awake$b__21_3();
    // public System.Void .ctor()
    // Offset: 0xFAF084
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UIKeyboard* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::UIKeyboard::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UIKeyboard*, creationType>()));
    }
  }; // UIKeyboard
  #pragma pack(pop)
  static check_size<sizeof(UIKeyboard), 81 + sizeof(bool)> __GlobalNamespace_UIKeyboardSizeCheck;
  static_assert(sizeof(UIKeyboard) == 0x52);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::UIKeyboard*, "", "UIKeyboard");
