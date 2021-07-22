// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.UI.Selectable
#include "UnityEngine/UI/Selectable.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: ButtonBinder
  class ButtonBinder;
  // Forward declaring type: ImageView
  class ImageView;
  // Skipping declaration: SelectionState because it is already included!
  // Forward declaring type: UIKeyboard
  class UIKeyboard;
}
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TextMeshProUGUI
  class TextMeshProUGUI;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: CanvasGroup
  class CanvasGroup;
  // Forward declaring type: GameObject
  class GameObject;
  // Forward declaring type: YieldInstruction
  class YieldInstruction;
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
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: HMUI
namespace HMUI {
  // Size: 0x178
  #pragma pack(push, 1)
  // Autogenerated type: HMUI.InputFieldView
  // [TokenAttribute] Offset: FFFFFFFF
  class InputFieldView : public UnityEngine::UI::Selectable {
    public:
    // Nested type: HMUI::InputFieldView::SelectionState
    struct SelectionState;
    // Nested type: HMUI::InputFieldView::InputFieldChanged
    class InputFieldChanged;
    // Nested type: HMUI::InputFieldView::$BlinkingCaretCoroutine$d__43
    class $BlinkingCaretCoroutine$d__43;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: HMUI.InputFieldView/HMUI.SelectionState
    // [TokenAttribute] Offset: FFFFFFFF
    struct SelectionState/*, public System::Enum*/ {
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // Creating value type constructor for type: SelectionState
      constexpr SelectionState(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator System::Enum
      operator System::Enum() noexcept {
        return *reinterpret_cast<System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public HMUI.InputFieldView/HMUI.SelectionState Normal
      static constexpr const int Normal = 0;
      // Get static field: static public HMUI.InputFieldView/HMUI.SelectionState Normal
      static HMUI::InputFieldView::SelectionState _get_Normal();
      // Set static field: static public HMUI.InputFieldView/HMUI.SelectionState Normal
      static void _set_Normal(HMUI::InputFieldView::SelectionState value);
      // static field const value: static public HMUI.InputFieldView/HMUI.SelectionState Highlighted
      static constexpr const int Highlighted = 1;
      // Get static field: static public HMUI.InputFieldView/HMUI.SelectionState Highlighted
      static HMUI::InputFieldView::SelectionState _get_Highlighted();
      // Set static field: static public HMUI.InputFieldView/HMUI.SelectionState Highlighted
      static void _set_Highlighted(HMUI::InputFieldView::SelectionState value);
      // static field const value: static public HMUI.InputFieldView/HMUI.SelectionState Pressed
      static constexpr const int Pressed = 2;
      // Get static field: static public HMUI.InputFieldView/HMUI.SelectionState Pressed
      static HMUI::InputFieldView::SelectionState _get_Pressed();
      // Set static field: static public HMUI.InputFieldView/HMUI.SelectionState Pressed
      static void _set_Pressed(HMUI::InputFieldView::SelectionState value);
      // static field const value: static public HMUI.InputFieldView/HMUI.SelectionState Disabled
      static constexpr const int Disabled = 3;
      // Get static field: static public HMUI.InputFieldView/HMUI.SelectionState Disabled
      static HMUI::InputFieldView::SelectionState _get_Disabled();
      // Set static field: static public HMUI.InputFieldView/HMUI.SelectionState Disabled
      static void _set_Disabled(HMUI::InputFieldView::SelectionState value);
      // static field const value: static public HMUI.InputFieldView/HMUI.SelectionState Selected
      static constexpr const int Selected = 4;
      // Get static field: static public HMUI.InputFieldView/HMUI.SelectionState Selected
      static HMUI::InputFieldView::SelectionState _get_Selected();
      // Set static field: static public HMUI.InputFieldView/HMUI.SelectionState Selected
      static void _set_Selected(HMUI::InputFieldView::SelectionState value);
    }; // HMUI.InputFieldView/HMUI.SelectionState
    #pragma pack(pop)
    static check_size<sizeof(InputFieldView::SelectionState), 0 + sizeof(int)> __HMUI_InputFieldView_SelectionStateSizeCheck;
    static_assert(sizeof(InputFieldView::SelectionState) == 0x4);
    // private TMPro.TextMeshProUGUI _textView
    // Size: 0x8
    // Offset: 0xF8
    TMPro::TextMeshProUGUI* textView;
    // Field size check
    static_assert(sizeof(TMPro::TextMeshProUGUI*) == 0x8);
    // [NullAllowed] Offset: 0xDE3C68
    // private UnityEngine.CanvasGroup _textViewCanvasGroup
    // Size: 0x8
    // Offset: 0x100
    UnityEngine::CanvasGroup* textViewCanvasGroup;
    // Field size check
    static_assert(sizeof(UnityEngine::CanvasGroup*) == 0x8);
    // private HMUI.ImageView _blinkingCaret
    // Size: 0x8
    // Offset: 0x108
    HMUI::ImageView* blinkingCaret;
    // Field size check
    static_assert(sizeof(HMUI::ImageView*) == 0x8);
    // private UnityEngine.GameObject _placeholderText
    // Size: 0x8
    // Offset: 0x110
    UnityEngine::GameObject* placeholderText;
    // Field size check
    static_assert(sizeof(UnityEngine::GameObject*) == 0x8);
    // private UnityEngine.UI.Button _clearSearchButton
    // Size: 0x8
    // Offset: 0x118
    UnityEngine::UI::Button* clearSearchButton;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Button*) == 0x8);
    // [HeaderAttribute] Offset: 0xDE3CD0
    // private System.Boolean _useGlobalKeyboard
    // Size: 0x1
    // Offset: 0x120
    bool useGlobalKeyboard;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: useGlobalKeyboard and: keyboardPositionOffset
    char __padding5[0x3] = {};
    // private UnityEngine.Vector3 _keyboardPositionOffset
    // Size: 0xC
    // Offset: 0x124
    UnityEngine::Vector3 keyboardPositionOffset;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // [HeaderAttribute] Offset: 0xDE3D2C
    // private System.Boolean _useUppercase
    // Size: 0x1
    // Offset: 0x130
    bool useUppercase;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: useUppercase and: textLengthLimit
    char __padding7[0x3] = {};
    // private System.Int32 _textLengthLimit
    // Size: 0x4
    // Offset: 0x134
    int textLengthLimit;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Single _caretOffset
    // Size: 0x4
    // Offset: 0x138
    float caretOffset;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: caretOffset and: selectionStateDidChangeEvent
    char __padding9[0x4] = {};
    // private System.Action`1<HMUI.InputFieldView/HMUI.SelectionState> selectionStateDidChangeEvent
    // Size: 0x8
    // Offset: 0x140
    System::Action_1<HMUI::InputFieldView::SelectionState>* selectionStateDidChangeEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<HMUI::InputFieldView::SelectionState>*) == 0x8);
    // private HMUI.InputFieldView/HMUI.SelectionState _selectionState
    // Size: 0x4
    // Offset: 0x148
    HMUI::InputFieldView::SelectionState selectionState;
    // Field size check
    static_assert(sizeof(HMUI::InputFieldView::SelectionState) == 0x4);
    // Padding between fields: selectionState and: text
    char __padding11[0x4] = {};
    // private System.String _text
    // Size: 0x8
    // Offset: 0x150
    ::Il2CppString* text;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.Boolean _hasKeyboardAssigned
    // Size: 0x1
    // Offset: 0x158
    bool hasKeyboardAssigned;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: hasKeyboardAssigned and: buttonBinder
    char __padding13[0x7] = {};
    // private HMUI.ButtonBinder _buttonBinder
    // Size: 0x8
    // Offset: 0x160
    HMUI::ButtonBinder* buttonBinder;
    // Field size check
    static_assert(sizeof(HMUI::ButtonBinder*) == 0x8);
    // private HMUI.InputFieldView/HMUI.InputFieldChanged _onValueChanged
    // Size: 0x8
    // Offset: 0x168
    HMUI::InputFieldView::InputFieldChanged* onValueChanged;
    // Field size check
    static_assert(sizeof(HMUI::InputFieldView::InputFieldChanged*) == 0x8);
    // private readonly UnityEngine.YieldInstruction _blinkWaitYieldInstruction
    // Size: 0x8
    // Offset: 0x170
    UnityEngine::YieldInstruction* blinkWaitYieldInstruction;
    // Field size check
    static_assert(sizeof(UnityEngine::YieldInstruction*) == 0x8);
    // Creating value type constructor for type: InputFieldView
    InputFieldView(TMPro::TextMeshProUGUI* textView_ = {}, UnityEngine::CanvasGroup* textViewCanvasGroup_ = {}, HMUI::ImageView* blinkingCaret_ = {}, UnityEngine::GameObject* placeholderText_ = {}, UnityEngine::UI::Button* clearSearchButton_ = {}, bool useGlobalKeyboard_ = {}, UnityEngine::Vector3 keyboardPositionOffset_ = {}, bool useUppercase_ = {}, int textLengthLimit_ = {}, float caretOffset_ = {}, System::Action_1<HMUI::InputFieldView::SelectionState>* selectionStateDidChangeEvent_ = {}, HMUI::InputFieldView::SelectionState selectionState_ = {}, ::Il2CppString* text_ = {}, bool hasKeyboardAssigned_ = {}, HMUI::ButtonBinder* buttonBinder_ = {}, HMUI::InputFieldView::InputFieldChanged* onValueChanged_ = {}, UnityEngine::YieldInstruction* blinkWaitYieldInstruction_ = {}) noexcept : textView{textView_}, textViewCanvasGroup{textViewCanvasGroup_}, blinkingCaret{blinkingCaret_}, placeholderText{placeholderText_}, clearSearchButton{clearSearchButton_}, useGlobalKeyboard{useGlobalKeyboard_}, keyboardPositionOffset{keyboardPositionOffset_}, useUppercase{useUppercase_}, textLengthLimit{textLengthLimit_}, caretOffset{caretOffset_}, selectionStateDidChangeEvent{selectionStateDidChangeEvent_}, selectionState{selectionState_}, text{text_}, hasKeyboardAssigned{hasKeyboardAssigned_}, buttonBinder{buttonBinder_}, onValueChanged{onValueChanged_}, blinkWaitYieldInstruction{blinkWaitYieldInstruction_} {}
    // static field const value: static private System.Single kBlinkingRate
    static constexpr const float kBlinkingRate = 0.4;
    // Get static field: static private System.Single kBlinkingRate
    static float _get_kBlinkingRate();
    // Set static field: static private System.Single kBlinkingRate
    static void _set_kBlinkingRate(float value);
    // public HMUI.InputFieldView/HMUI.SelectionState get_selectionState()
    // Offset: 0x1291004
    HMUI::InputFieldView::SelectionState get_selectionState();
    // public UnityEngine.Vector3 get_keyboardPositionOffset()
    // Offset: 0x129100C
    UnityEngine::Vector3 get_keyboardPositionOffset();
    // public HMUI.InputFieldView/HMUI.InputFieldChanged get_onValueChanged()
    // Offset: 0x129116C
    HMUI::InputFieldView::InputFieldChanged* get_onValueChanged();
    // public System.Void set_onValueChanged(HMUI.InputFieldView/HMUI.InputFieldChanged value)
    // Offset: 0x1291174
    void set_onValueChanged(HMUI::InputFieldView::InputFieldChanged* value);
    // public System.Boolean get_useGlobalKeyboard()
    // Offset: 0x129117C
    bool get_useGlobalKeyboard();
    // public System.String get_text()
    // Offset: 0x1291184
    ::Il2CppString* get_text();
    // private System.Void set_text(System.String value)
    // Offset: 0x129118C
    void set_text(::Il2CppString* value);
    // public System.Void add_selectionStateDidChangeEvent(System.Action`1<HMUI.InputFieldView/HMUI.SelectionState> value)
    // Offset: 0x129101C
    void add_selectionStateDidChangeEvent(System::Action_1<HMUI::InputFieldView::SelectionState>* value);
    // public System.Void remove_selectionStateDidChangeEvent(System.Action`1<HMUI.InputFieldView/HMUI.SelectionState> value)
    // Offset: 0x12910C4
    void remove_selectionStateDidChangeEvent(System::Action_1<HMUI::InputFieldView::SelectionState>* value);
    // public System.Void ActivateKeyboard(HMUI.UIKeyboard keyboard)
    // Offset: 0x12914BC
    void ActivateKeyboard(HMUI::UIKeyboard* keyboard);
    // public System.Void DeactivateKeyboard(HMUI.UIKeyboard keyboard)
    // Offset: 0x1291818
    void DeactivateKeyboard(HMUI::UIKeyboard* keyboard);
    // public System.Void SetText(System.String value)
    // Offset: 0x1291B18
    void SetText(::Il2CppString* value);
    // public System.Void ClearInput()
    // Offset: 0x1291B3C
    void ClearInput();
    // private System.Void KeyboardKeyPressed(System.Char letter)
    // Offset: 0x1291B94
    void KeyboardKeyPressed(::Il2CppChar letter);
    // private System.Void KeyboardDeletePressed()
    // Offset: 0x1291CC0
    void KeyboardDeletePressed();
    // private System.Collections.IEnumerator BlinkingCaretCoroutine()
    // Offset: 0x12917A8
    System::Collections::IEnumerator* BlinkingCaretCoroutine();
    // private System.Void UpdateCaretPosition()
    // Offset: 0x12911E8
    void UpdateCaretPosition();
    // private System.Void UpdatePlaceholder()
    // Offset: 0x12912F8
    void UpdatePlaceholder();
    // private System.Void UpdateClearButton()
    // Offset: 0x1291AD8
    void UpdateClearButton();
    // private System.Void <Awake>b__34_0()
    // Offset: 0x1291F18
    void $Awake$b__34_0();
    // public System.Void .ctor()
    // Offset: 0x1291DC4
    // Implemented from: UnityEngine.UI.Selectable
    // Base method: System.Void Selectable::.ctor()
    // Base method: System.Void UIBehaviour::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static InputFieldView* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("HMUI::InputFieldView::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<InputFieldView*, creationType>()));
    }
    // protected override System.Void Awake()
    // Offset: 0x1291334
    // Implemented from: UnityEngine.UI.Selectable
    // Base method: System.Void Selectable::Awake()
    void Awake();
    // protected override System.Void OnDestroy()
    // Offset: 0x129140C
    // Implemented from: UnityEngine.EventSystems.UIBehaviour
    // Base method: System.Void UIBehaviour::OnDestroy()
    void OnDestroy();
    // protected override System.Void DoStateTransition(UnityEngine.UI.Selectable/UnityEngine.UI.SelectionState state, System.Boolean instant)
    // Offset: 0x1291420
    // Implemented from: UnityEngine.UI.Selectable
    // Base method: System.Void Selectable::DoStateTransition(UnityEngine.UI.Selectable/UnityEngine.UI.SelectionState state, System.Boolean instant)
    void DoStateTransition(UnityEngine::UI::Selectable::SelectionState state, bool instant);
  }; // HMUI.InputFieldView
  #pragma pack(pop)
  static check_size<sizeof(InputFieldView), 368 + sizeof(UnityEngine::YieldInstruction*)> __HMUI_InputFieldViewSizeCheck;
  static_assert(sizeof(InputFieldView) == 0x178);
}
DEFINE_IL2CPP_ARG_TYPE(HMUI::InputFieldView*, "HMUI", "InputFieldView");
DEFINE_IL2CPP_ARG_TYPE(HMUI::InputFieldView::SelectionState, "HMUI", "InputFieldView/SelectionState");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HMUI::InputFieldView::get_selectionState
// Il2CppName: get_selectionState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<HMUI::InputFieldView::SelectionState (HMUI::InputFieldView::*)()>(&HMUI::InputFieldView::get_selectionState)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::InputFieldView*), "get_selectionState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::InputFieldView::get_keyboardPositionOffset
// Il2CppName: get_keyboardPositionOffset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (HMUI::InputFieldView::*)()>(&HMUI::InputFieldView::get_keyboardPositionOffset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::InputFieldView*), "get_keyboardPositionOffset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::InputFieldView::get_onValueChanged
// Il2CppName: get_onValueChanged
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<HMUI::InputFieldView::InputFieldChanged* (HMUI::InputFieldView::*)()>(&HMUI::InputFieldView::get_onValueChanged)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::InputFieldView*), "get_onValueChanged", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::InputFieldView::set_onValueChanged
// Il2CppName: set_onValueChanged
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::InputFieldView::*)(HMUI::InputFieldView::InputFieldChanged*)>(&HMUI::InputFieldView::set_onValueChanged)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("HMUI", "InputFieldView/InputFieldChanged")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::InputFieldView*), "set_onValueChanged", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: HMUI::InputFieldView::get_useGlobalKeyboard
// Il2CppName: get_useGlobalKeyboard
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HMUI::InputFieldView::*)()>(&HMUI::InputFieldView::get_useGlobalKeyboard)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::InputFieldView*), "get_useGlobalKeyboard", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::InputFieldView::get_text
// Il2CppName: get_text
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (HMUI::InputFieldView::*)()>(&HMUI::InputFieldView::get_text)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::InputFieldView*), "get_text", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::InputFieldView::set_text
// Il2CppName: set_text
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::InputFieldView::*)(::Il2CppString*)>(&HMUI::InputFieldView::set_text)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::InputFieldView*), "set_text", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: HMUI::InputFieldView::add_selectionStateDidChangeEvent
// Il2CppName: add_selectionStateDidChangeEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::InputFieldView::*)(System::Action_1<HMUI::InputFieldView::SelectionState>*)>(&HMUI::InputFieldView::add_selectionStateDidChangeEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("HMUI", "InputFieldView/SelectionState")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::InputFieldView*), "add_selectionStateDidChangeEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: HMUI::InputFieldView::remove_selectionStateDidChangeEvent
// Il2CppName: remove_selectionStateDidChangeEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::InputFieldView::*)(System::Action_1<HMUI::InputFieldView::SelectionState>*)>(&HMUI::InputFieldView::remove_selectionStateDidChangeEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("HMUI", "InputFieldView/SelectionState")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::InputFieldView*), "remove_selectionStateDidChangeEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: HMUI::InputFieldView::ActivateKeyboard
// Il2CppName: ActivateKeyboard
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::InputFieldView::*)(HMUI::UIKeyboard*)>(&HMUI::InputFieldView::ActivateKeyboard)> {
  static const MethodInfo* get() {
    static auto* keyboard = &::il2cpp_utils::GetClassFromName("HMUI", "UIKeyboard")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::InputFieldView*), "ActivateKeyboard", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{keyboard});
  }
};
// Writing MetadataGetter for method: HMUI::InputFieldView::DeactivateKeyboard
// Il2CppName: DeactivateKeyboard
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::InputFieldView::*)(HMUI::UIKeyboard*)>(&HMUI::InputFieldView::DeactivateKeyboard)> {
  static const MethodInfo* get() {
    static auto* keyboard = &::il2cpp_utils::GetClassFromName("HMUI", "UIKeyboard")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::InputFieldView*), "DeactivateKeyboard", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{keyboard});
  }
};
// Writing MetadataGetter for method: HMUI::InputFieldView::SetText
// Il2CppName: SetText
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::InputFieldView::*)(::Il2CppString*)>(&HMUI::InputFieldView::SetText)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::InputFieldView*), "SetText", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: HMUI::InputFieldView::ClearInput
// Il2CppName: ClearInput
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::InputFieldView::*)()>(&HMUI::InputFieldView::ClearInput)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::InputFieldView*), "ClearInput", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::InputFieldView::KeyboardKeyPressed
// Il2CppName: KeyboardKeyPressed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::InputFieldView::*)(::Il2CppChar)>(&HMUI::InputFieldView::KeyboardKeyPressed)> {
  static const MethodInfo* get() {
    static auto* letter = &::il2cpp_utils::GetClassFromName("System", "Char")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::InputFieldView*), "KeyboardKeyPressed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{letter});
  }
};
// Writing MetadataGetter for method: HMUI::InputFieldView::KeyboardDeletePressed
// Il2CppName: KeyboardDeletePressed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::InputFieldView::*)()>(&HMUI::InputFieldView::KeyboardDeletePressed)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::InputFieldView*), "KeyboardDeletePressed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::InputFieldView::BlinkingCaretCoroutine
// Il2CppName: BlinkingCaretCoroutine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IEnumerator* (HMUI::InputFieldView::*)()>(&HMUI::InputFieldView::BlinkingCaretCoroutine)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::InputFieldView*), "BlinkingCaretCoroutine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::InputFieldView::UpdateCaretPosition
// Il2CppName: UpdateCaretPosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::InputFieldView::*)()>(&HMUI::InputFieldView::UpdateCaretPosition)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::InputFieldView*), "UpdateCaretPosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::InputFieldView::UpdatePlaceholder
// Il2CppName: UpdatePlaceholder
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::InputFieldView::*)()>(&HMUI::InputFieldView::UpdatePlaceholder)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::InputFieldView*), "UpdatePlaceholder", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::InputFieldView::UpdateClearButton
// Il2CppName: UpdateClearButton
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::InputFieldView::*)()>(&HMUI::InputFieldView::UpdateClearButton)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::InputFieldView*), "UpdateClearButton", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::InputFieldView::$Awake$b__34_0
// Il2CppName: <Awake>b__34_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::InputFieldView::*)()>(&HMUI::InputFieldView::$Awake$b__34_0)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::InputFieldView*), "<Awake>b__34_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::InputFieldView::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: HMUI::InputFieldView::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::InputFieldView::*)()>(&HMUI::InputFieldView::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::InputFieldView*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::InputFieldView::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::InputFieldView::*)()>(&HMUI::InputFieldView::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::InputFieldView*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::InputFieldView::DoStateTransition
// Il2CppName: DoStateTransition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::InputFieldView::*)(UnityEngine::UI::Selectable::SelectionState, bool)>(&HMUI::InputFieldView::DoStateTransition)> {
  static const MethodInfo* get() {
    static auto* state = &::il2cpp_utils::GetClassFromName("UnityEngine.UI", "Selectable/SelectionState")->byval_arg;
    static auto* instant = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::InputFieldView*), "DoStateTransition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{state, instant});
  }
};
