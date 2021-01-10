// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
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
  // Size: 0x170
  // Autogenerated type: HMUI.InputFieldView
  // [] Offset: FFFFFFFF
  class InputFieldView : public UnityEngine::UI::Selectable {
    public:
    // Nested type: HMUI::InputFieldView::SelectionState
    struct SelectionState;
    // Nested type: HMUI::InputFieldView::InputFieldChanged
    class InputFieldChanged;
    // Nested type: HMUI::InputFieldView::$BlinkingCaretCoroutine$d__43
    class $BlinkingCaretCoroutine$d__43;
    // Size: 0x4
    // Autogenerated type: HMUI.InputFieldView/SelectionState
    // [] Offset: FFFFFFFF
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
      // static field const value: static public HMUI.InputFieldView/SelectionState Normal
      static constexpr const int Normal = 0;
      // Get static field: static public HMUI.InputFieldView/SelectionState Normal
      static HMUI::InputFieldView::SelectionState _get_Normal();
      // Set static field: static public HMUI.InputFieldView/SelectionState Normal
      static void _set_Normal(HMUI::InputFieldView::SelectionState value);
      // static field const value: static public HMUI.InputFieldView/SelectionState Highlighted
      static constexpr const int Highlighted = 1;
      // Get static field: static public HMUI.InputFieldView/SelectionState Highlighted
      static HMUI::InputFieldView::SelectionState _get_Highlighted();
      // Set static field: static public HMUI.InputFieldView/SelectionState Highlighted
      static void _set_Highlighted(HMUI::InputFieldView::SelectionState value);
      // static field const value: static public HMUI.InputFieldView/SelectionState Pressed
      static constexpr const int Pressed = 2;
      // Get static field: static public HMUI.InputFieldView/SelectionState Pressed
      static HMUI::InputFieldView::SelectionState _get_Pressed();
      // Set static field: static public HMUI.InputFieldView/SelectionState Pressed
      static void _set_Pressed(HMUI::InputFieldView::SelectionState value);
      // static field const value: static public HMUI.InputFieldView/SelectionState Disabled
      static constexpr const int Disabled = 3;
      // Get static field: static public HMUI.InputFieldView/SelectionState Disabled
      static HMUI::InputFieldView::SelectionState _get_Disabled();
      // Set static field: static public HMUI.InputFieldView/SelectionState Disabled
      static void _set_Disabled(HMUI::InputFieldView::SelectionState value);
      // static field const value: static public HMUI.InputFieldView/SelectionState Selected
      static constexpr const int Selected = 4;
      // Get static field: static public HMUI.InputFieldView/SelectionState Selected
      static HMUI::InputFieldView::SelectionState _get_Selected();
      // Set static field: static public HMUI.InputFieldView/SelectionState Selected
      static void _set_Selected(HMUI::InputFieldView::SelectionState value);
    }; // HMUI.InputFieldView/SelectionState
    static check_size<sizeof(InputFieldView::SelectionState), 0 + sizeof(int)> __HMUI_InputFieldView_SelectionStateSizeCheck;
    static_assert(sizeof(InputFieldView::SelectionState) == 0x4);
    // private TMPro.TextMeshProUGUI _textView
    // Size: 0x8
    // Offset: 0xF0
    TMPro::TextMeshProUGUI* textView;
    // Field size check
    static_assert(sizeof(TMPro::TextMeshProUGUI*) == 0x8);
    // [NullAllowed] Offset: 0xDA76F8
    // private UnityEngine.CanvasGroup _textViewCanvasGroup
    // Size: 0x8
    // Offset: 0xF8
    UnityEngine::CanvasGroup* textViewCanvasGroup;
    // Field size check
    static_assert(sizeof(UnityEngine::CanvasGroup*) == 0x8);
    // private HMUI.ImageView _blinkingCaret
    // Size: 0x8
    // Offset: 0x100
    HMUI::ImageView* blinkingCaret;
    // Field size check
    static_assert(sizeof(HMUI::ImageView*) == 0x8);
    // private UnityEngine.GameObject _placeholderText
    // Size: 0x8
    // Offset: 0x108
    UnityEngine::GameObject* placeholderText;
    // Field size check
    static_assert(sizeof(UnityEngine::GameObject*) == 0x8);
    // private UnityEngine.UI.Button _clearSearchButton
    // Size: 0x8
    // Offset: 0x110
    UnityEngine::UI::Button* clearSearchButton;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Button*) == 0x8);
    // [HeaderAttribute] Offset: 0xDA7760
    // private System.Boolean _useGlobalKeyboard
    // Size: 0x1
    // Offset: 0x118
    bool useGlobalKeyboard;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: useGlobalKeyboard and: keyboardPositionOffset
    char __padding5[0x3] = {};
    // private UnityEngine.Vector3 _keyboardPositionOffset
    // Size: 0xC
    // Offset: 0x11C
    UnityEngine::Vector3 keyboardPositionOffset;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // [HeaderAttribute] Offset: 0xDA77BC
    // private System.Boolean _useUppercase
    // Size: 0x1
    // Offset: 0x128
    bool useUppercase;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: useUppercase and: textLengthLimit
    char __padding7[0x3] = {};
    // private System.Int32 _textLengthLimit
    // Size: 0x4
    // Offset: 0x12C
    int textLengthLimit;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Single _caretOffset
    // Size: 0x4
    // Offset: 0x130
    float caretOffset;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: caretOffset and: selectionStateDidChangeEvent
    char __padding9[0x4] = {};
    // [CompilerGeneratedAttribute] Offset: 0xDA7828
    // private System.Action`1<HMUI.InputFieldView/SelectionState> selectionStateDidChangeEvent
    // Size: 0x8
    // Offset: 0x138
    System::Action_1<HMUI::InputFieldView::SelectionState>* selectionStateDidChangeEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<HMUI::InputFieldView::SelectionState>*) == 0x8);
    // private HMUI.InputFieldView/SelectionState _selectionState
    // Size: 0x4
    // Offset: 0x140
    HMUI::InputFieldView::SelectionState selectionState;
    // Field size check
    static_assert(sizeof(HMUI::InputFieldView::SelectionState) == 0x4);
    // Padding between fields: selectionState and: text
    char __padding11[0x4] = {};
    // private System.String _text
    // Size: 0x8
    // Offset: 0x148
    ::Il2CppString* text;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.Boolean _hasKeyboardAssigned
    // Size: 0x1
    // Offset: 0x150
    bool hasKeyboardAssigned;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: hasKeyboardAssigned and: buttonBinder
    char __padding13[0x7] = {};
    // private HMUI.ButtonBinder _buttonBinder
    // Size: 0x8
    // Offset: 0x158
    HMUI::ButtonBinder* buttonBinder;
    // Field size check
    static_assert(sizeof(HMUI::ButtonBinder*) == 0x8);
    // private HMUI.InputFieldView/InputFieldChanged _onValueChanged
    // Size: 0x8
    // Offset: 0x160
    HMUI::InputFieldView::InputFieldChanged* onValueChanged;
    // Field size check
    static_assert(sizeof(HMUI::InputFieldView::InputFieldChanged*) == 0x8);
    // private readonly UnityEngine.YieldInstruction _blinkWaitYieldInstruction
    // Size: 0x8
    // Offset: 0x168
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
    // public HMUI.InputFieldView/SelectionState get_selectionState()
    // Offset: 0x107945C
    HMUI::InputFieldView::SelectionState get_selectionState();
    // public UnityEngine.Vector3 get_keyboardPositionOffset()
    // Offset: 0x1079464
    UnityEngine::Vector3 get_keyboardPositionOffset();
    // public System.Void add_selectionStateDidChangeEvent(System.Action`1<HMUI.InputFieldView/SelectionState> value)
    // Offset: 0x1079474
    void add_selectionStateDidChangeEvent(System::Action_1<HMUI::InputFieldView::SelectionState>* value);
    // public System.Void remove_selectionStateDidChangeEvent(System.Action`1<HMUI.InputFieldView/SelectionState> value)
    // Offset: 0x107951C
    void remove_selectionStateDidChangeEvent(System::Action_1<HMUI::InputFieldView::SelectionState>* value);
    // public HMUI.InputFieldView/InputFieldChanged get_onValueChanged()
    // Offset: 0x10795C4
    HMUI::InputFieldView::InputFieldChanged* get_onValueChanged();
    // public System.Void set_onValueChanged(HMUI.InputFieldView/InputFieldChanged value)
    // Offset: 0x10795CC
    void set_onValueChanged(HMUI::InputFieldView::InputFieldChanged* value);
    // public System.Boolean get_useGlobalKeyboard()
    // Offset: 0x10795DC
    bool get_useGlobalKeyboard();
    // public System.String get_text()
    // Offset: 0x10795E4
    ::Il2CppString* get_text();
    // private System.Void set_text(System.String value)
    // Offset: 0x10795EC
    void set_text(::Il2CppString* value);
    // public System.Void ActivateKeyboard(HMUI.UIKeyboard keyboard)
    // Offset: 0x1079938
    void ActivateKeyboard(HMUI::UIKeyboard* keyboard);
    // public System.Void DeactivateKeyboard(HMUI.UIKeyboard keyboard)
    // Offset: 0x1079B60
    void DeactivateKeyboard(HMUI::UIKeyboard* keyboard);
    // public System.Void SetText(System.String value)
    // Offset: 0x1079D20
    void SetText(::Il2CppString* value);
    // public System.Void ClearInput()
    // Offset: 0x1079D44
    void ClearInput();
    // private System.Void KeyboardKeyPressed(System.Char letter)
    // Offset: 0x1079D9C
    void KeyboardKeyPressed(::Il2CppChar letter);
    // private System.Void KeyboardDeletePressed()
    // Offset: 0x1079EC8
    void KeyboardDeletePressed();
    // private System.Collections.IEnumerator BlinkingCaretCoroutine()
    // Offset: 0x1079AE4
    System::Collections::IEnumerator* BlinkingCaretCoroutine();
    // private System.Void UpdateCaretPosition()
    // Offset: 0x1079654
    void UpdateCaretPosition();
    // private System.Void UpdatePlaceholder()
    // Offset: 0x1079764
    void UpdatePlaceholder();
    // private System.Void UpdateClearButton()
    // Offset: 0x1079CE0
    void UpdateClearButton();
    // private System.Void <Awake>b__34_0()
    // Offset: 0x107A140
    void $Awake$b__34_0();
    // protected override System.Void Awake()
    // Offset: 0x10797A0
    // Implemented from: UnityEngine.UI.Selectable
    // Base method: System.Void Selectable::Awake()
    void Awake();
    // protected override System.Void OnDestroy()
    // Offset: 0x1079888
    // Implemented from: UnityEngine.EventSystems.UIBehaviour
    // Base method: System.Void UIBehaviour::OnDestroy()
    void OnDestroy();
    // protected override System.Void DoStateTransition(UnityEngine.UI.Selectable/SelectionState state, System.Boolean instant)
    // Offset: 0x107989C
    // Implemented from: UnityEngine.UI.Selectable
    // Base method: System.Void Selectable::DoStateTransition(UnityEngine.UI.Selectable/SelectionState state, System.Boolean instant)
    void DoStateTransition(UnityEngine::UI::Selectable::SelectionState state, bool instant);
    // public System.Void .ctor()
    // Offset: 0x1079FCC
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
  }; // HMUI.InputFieldView
  static check_size<sizeof(InputFieldView), 360 + sizeof(UnityEngine::YieldInstruction*)> __HMUI_InputFieldViewSizeCheck;
  static_assert(sizeof(InputFieldView) == 0x170);
}
DEFINE_IL2CPP_ARG_TYPE(HMUI::InputFieldView*, "HMUI", "InputFieldView");
DEFINE_IL2CPP_ARG_TYPE(HMUI::InputFieldView::SelectionState, "HMUI", "InputFieldView/SelectionState");
#pragma pack(pop)
