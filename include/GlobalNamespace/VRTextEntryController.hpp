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
  // Forward declaring type: UIKeyboard
  class UIKeyboard;
}
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TextMeshProUGUI
  class TextMeshProUGUI;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
  // Forward declaring type: Action
  class Action;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x51
  #pragma pack(push, 1)
  // Autogenerated type: VRTextEntryController
  // [TokenAttribute] Offset: FFFFFFFF
  class VRTextEntryController : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::VRTextEntryController::$BlinkCursor$d__23
    class $BlinkCursor$d__23;
    // private UIKeyboard _uiKeyboard
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::UIKeyboard* uiKeyboard;
    // Field size check
    static_assert(sizeof(GlobalNamespace::UIKeyboard*) == 0x8);
    // private TMPro.TextMeshProUGUI _text
    // Size: 0x8
    // Offset: 0x20
    TMPro::TextMeshProUGUI* text;
    // Field size check
    static_assert(sizeof(TMPro::TextMeshProUGUI*) == 0x8);
    // private TMPro.TextMeshProUGUI _cursorText
    // Size: 0x8
    // Offset: 0x28
    TMPro::TextMeshProUGUI* cursorText;
    // Field size check
    static_assert(sizeof(TMPro::TextMeshProUGUI*) == 0x8);
    // private System.Int32 _maxLength
    // Size: 0x4
    // Offset: 0x30
    int maxLength;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Boolean _allowBlank
    // Size: 0x1
    // Offset: 0x34
    bool allowBlank;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: allowBlank and: textDidChangeEvent
    char __padding4[0x3] = {};
    // private System.Action`1<System.String> textDidChangeEvent
    // Size: 0x8
    // Offset: 0x38
    System::Action_1<::Il2CppString*>* textDidChangeEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<::Il2CppString*>*) == 0x8);
    // private System.Action okButtonWasPressedEvent
    // Size: 0x8
    // Offset: 0x40
    System::Action* okButtonWasPressedEvent;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // private System.Action cancelButtonWasPressedEvent
    // Size: 0x8
    // Offset: 0x48
    System::Action* cancelButtonWasPressedEvent;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // private System.Boolean _stopBlinkingCursor
    // Size: 0x1
    // Offset: 0x50
    bool stopBlinkingCursor;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: VRTextEntryController
    VRTextEntryController(GlobalNamespace::UIKeyboard* uiKeyboard_ = {}, TMPro::TextMeshProUGUI* text_ = {}, TMPro::TextMeshProUGUI* cursorText_ = {}, int maxLength_ = {}, bool allowBlank_ = {}, System::Action_1<::Il2CppString*>* textDidChangeEvent_ = {}, System::Action* okButtonWasPressedEvent_ = {}, System::Action* cancelButtonWasPressedEvent_ = {}, bool stopBlinkingCursor_ = {}) noexcept : uiKeyboard{uiKeyboard_}, text{text_}, cursorText{cursorText_}, maxLength{maxLength_}, allowBlank{allowBlank_}, textDidChangeEvent{textDidChangeEvent_}, okButtonWasPressedEvent{okButtonWasPressedEvent_}, cancelButtonWasPressedEvent{cancelButtonWasPressedEvent_}, stopBlinkingCursor{stopBlinkingCursor_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field: private UIKeyboard _uiKeyboard
    GlobalNamespace::UIKeyboard* _get__uiKeyboard();
    // Set instance field: private UIKeyboard _uiKeyboard
    void _set__uiKeyboard(GlobalNamespace::UIKeyboard* value);
    // Get instance field: private TMPro.TextMeshProUGUI _text
    TMPro::TextMeshProUGUI* _get__text();
    // Set instance field: private TMPro.TextMeshProUGUI _text
    void _set__text(TMPro::TextMeshProUGUI* value);
    // Get instance field: private TMPro.TextMeshProUGUI _cursorText
    TMPro::TextMeshProUGUI* _get__cursorText();
    // Set instance field: private TMPro.TextMeshProUGUI _cursorText
    void _set__cursorText(TMPro::TextMeshProUGUI* value);
    // Get instance field: private System.Int32 _maxLength
    int _get__maxLength();
    // Set instance field: private System.Int32 _maxLength
    void _set__maxLength(int value);
    // Get instance field: private System.Boolean _allowBlank
    bool _get__allowBlank();
    // Set instance field: private System.Boolean _allowBlank
    void _set__allowBlank(bool value);
    // Get instance field: private System.Action`1<System.String> textDidChangeEvent
    System::Action_1<::Il2CppString*>* _get_textDidChangeEvent();
    // Set instance field: private System.Action`1<System.String> textDidChangeEvent
    void _set_textDidChangeEvent(System::Action_1<::Il2CppString*>* value);
    // Get instance field: private System.Action okButtonWasPressedEvent
    System::Action* _get_okButtonWasPressedEvent();
    // Set instance field: private System.Action okButtonWasPressedEvent
    void _set_okButtonWasPressedEvent(System::Action* value);
    // Get instance field: private System.Action cancelButtonWasPressedEvent
    System::Action* _get_cancelButtonWasPressedEvent();
    // Set instance field: private System.Action cancelButtonWasPressedEvent
    void _set_cancelButtonWasPressedEvent(System::Action* value);
    // Get instance field: private System.Boolean _stopBlinkingCursor
    bool _get__stopBlinkingCursor();
    // Set instance field: private System.Boolean _stopBlinkingCursor
    void _set__stopBlinkingCursor(bool value);
    // public System.Void set_hideCancelButton(System.Boolean value)
    // Offset: 0x127A844
    void set_hideCancelButton(bool value);
    // public System.String get_text()
    // Offset: 0x127A860
    ::Il2CppString* get_text();
    // public System.Void set_text(System.String value)
    // Offset: 0x127A87C
    void set_text(::Il2CppString* value);
    // public System.Void add_textDidChangeEvent(System.Action`1<System.String> value)
    // Offset: 0x127A46C
    void add_textDidChangeEvent(System::Action_1<::Il2CppString*>* value);
    // public System.Void remove_textDidChangeEvent(System.Action`1<System.String> value)
    // Offset: 0x127A510
    void remove_textDidChangeEvent(System::Action_1<::Il2CppString*>* value);
    // public System.Void add_okButtonWasPressedEvent(System.Action value)
    // Offset: 0x127A5B4
    void add_okButtonWasPressedEvent(System::Action* value);
    // public System.Void remove_okButtonWasPressedEvent(System.Action value)
    // Offset: 0x127A658
    void remove_okButtonWasPressedEvent(System::Action* value);
    // public System.Void add_cancelButtonWasPressedEvent(System.Action value)
    // Offset: 0x127A6FC
    void add_cancelButtonWasPressedEvent(System::Action* value);
    // public System.Void remove_cancelButtonWasPressedEvent(System.Action value)
    // Offset: 0x127A7A0
    void remove_cancelButtonWasPressedEvent(System::Action* value);
    // protected System.Void Awake()
    // Offset: 0x127A940
    void Awake();
    // protected System.Void OnEnable()
    // Offset: 0x127AA90
    void OnEnable();
    // protected System.Void OnDisable()
    // Offset: 0x127AB30
    void OnDisable();
    // private System.Collections.IEnumerator BlinkCursor()
    // Offset: 0x127AAC0
    System::Collections::IEnumerator* BlinkCursor();
    // private System.Void HandleUIKeyboardTextKeyWasPressed(System.Char key)
    // Offset: 0x127AB68
    void HandleUIKeyboardTextKeyWasPressed(::Il2CppChar key);
    // private System.Void HandleUIKeyboardDeleteButtonWasPressed()
    // Offset: 0x127AC44
    void HandleUIKeyboardDeleteButtonWasPressed();
    // private System.Void <Awake>b__20_0()
    // Offset: 0x127AD28
    void $Awake$b__20_0();
    // private System.Void <Awake>b__20_1()
    // Offset: 0x127AD3C
    void $Awake$b__20_1();
    // public System.Void .ctor()
    // Offset: 0x127AD18
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static VRTextEntryController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::VRTextEntryController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<VRTextEntryController*, creationType>()));
    }
  }; // VRTextEntryController
  #pragma pack(pop)
  static check_size<sizeof(VRTextEntryController), 80 + sizeof(bool)> __GlobalNamespace_VRTextEntryControllerSizeCheck;
  static_assert(sizeof(VRTextEntryController) == 0x51);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::VRTextEntryController*, "", "VRTextEntryController");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::VRTextEntryController::set_hideCancelButton
// Il2CppName: set_hideCancelButton
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::VRTextEntryController::*)(bool)>(&GlobalNamespace::VRTextEntryController::set_hideCancelButton)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::VRTextEntryController*), "set_hideCancelButton", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::VRTextEntryController::get_text
// Il2CppName: get_text
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (GlobalNamespace::VRTextEntryController::*)()>(&GlobalNamespace::VRTextEntryController::get_text)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::VRTextEntryController*), "get_text", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::VRTextEntryController::set_text
// Il2CppName: set_text
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::VRTextEntryController::*)(::Il2CppString*)>(&GlobalNamespace::VRTextEntryController::set_text)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::VRTextEntryController*), "set_text", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::VRTextEntryController::add_textDidChangeEvent
// Il2CppName: add_textDidChangeEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::VRTextEntryController::*)(System::Action_1<::Il2CppString*>*)>(&GlobalNamespace::VRTextEntryController::add_textDidChangeEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "String")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::VRTextEntryController*), "add_textDidChangeEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::VRTextEntryController::remove_textDidChangeEvent
// Il2CppName: remove_textDidChangeEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::VRTextEntryController::*)(System::Action_1<::Il2CppString*>*)>(&GlobalNamespace::VRTextEntryController::remove_textDidChangeEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "String")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::VRTextEntryController*), "remove_textDidChangeEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::VRTextEntryController::add_okButtonWasPressedEvent
// Il2CppName: add_okButtonWasPressedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::VRTextEntryController::*)(System::Action*)>(&GlobalNamespace::VRTextEntryController::add_okButtonWasPressedEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::VRTextEntryController*), "add_okButtonWasPressedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::VRTextEntryController::remove_okButtonWasPressedEvent
// Il2CppName: remove_okButtonWasPressedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::VRTextEntryController::*)(System::Action*)>(&GlobalNamespace::VRTextEntryController::remove_okButtonWasPressedEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::VRTextEntryController*), "remove_okButtonWasPressedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::VRTextEntryController::add_cancelButtonWasPressedEvent
// Il2CppName: add_cancelButtonWasPressedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::VRTextEntryController::*)(System::Action*)>(&GlobalNamespace::VRTextEntryController::add_cancelButtonWasPressedEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::VRTextEntryController*), "add_cancelButtonWasPressedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::VRTextEntryController::remove_cancelButtonWasPressedEvent
// Il2CppName: remove_cancelButtonWasPressedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::VRTextEntryController::*)(System::Action*)>(&GlobalNamespace::VRTextEntryController::remove_cancelButtonWasPressedEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::VRTextEntryController*), "remove_cancelButtonWasPressedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::VRTextEntryController::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::VRTextEntryController::*)()>(&GlobalNamespace::VRTextEntryController::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::VRTextEntryController*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::VRTextEntryController::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::VRTextEntryController::*)()>(&GlobalNamespace::VRTextEntryController::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::VRTextEntryController*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::VRTextEntryController::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::VRTextEntryController::*)()>(&GlobalNamespace::VRTextEntryController::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::VRTextEntryController*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::VRTextEntryController::BlinkCursor
// Il2CppName: BlinkCursor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IEnumerator* (GlobalNamespace::VRTextEntryController::*)()>(&GlobalNamespace::VRTextEntryController::BlinkCursor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::VRTextEntryController*), "BlinkCursor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::VRTextEntryController::HandleUIKeyboardTextKeyWasPressed
// Il2CppName: HandleUIKeyboardTextKeyWasPressed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::VRTextEntryController::*)(::Il2CppChar)>(&GlobalNamespace::VRTextEntryController::HandleUIKeyboardTextKeyWasPressed)> {
  static const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "Char")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::VRTextEntryController*), "HandleUIKeyboardTextKeyWasPressed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::VRTextEntryController::HandleUIKeyboardDeleteButtonWasPressed
// Il2CppName: HandleUIKeyboardDeleteButtonWasPressed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::VRTextEntryController::*)()>(&GlobalNamespace::VRTextEntryController::HandleUIKeyboardDeleteButtonWasPressed)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::VRTextEntryController*), "HandleUIKeyboardDeleteButtonWasPressed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::VRTextEntryController::$Awake$b__20_0
// Il2CppName: <Awake>b__20_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::VRTextEntryController::*)()>(&GlobalNamespace::VRTextEntryController::$Awake$b__20_0)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::VRTextEntryController*), "<Awake>b__20_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::VRTextEntryController::$Awake$b__20_1
// Il2CppName: <Awake>b__20_1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::VRTextEntryController::*)()>(&GlobalNamespace::VRTextEntryController::$Awake$b__20_1)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::VRTextEntryController*), "<Awake>b__20_1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::VRTextEntryController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
