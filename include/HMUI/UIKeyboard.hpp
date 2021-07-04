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
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: ButtonBinder
  class ButtonBinder;
  // Forward declaring type: InputFieldView
  class InputFieldView;
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Button
  class Button;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: KeyCode
  struct KeyCode;
}
// Completed forward declares
// Type namespace: HMUI
namespace HMUI {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: HMUI.UIKeyboard
  class UIKeyboard : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: HMUI::UIKeyboard::$$c__DisplayClass12_0
    class $$c__DisplayClass12_0;
    // private UnityEngine.UI.Button _okButton
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::UI::Button* okButton;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Button*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDF8260
    // private System.Action okButtonWasPressedEvent
    // Size: 0x8
    // Offset: 0x20
    System::Action* okButtonWasPressedEvent;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDF8270
    // private System.Action`1<System.Char> keyWasPressedEvent
    // Size: 0x8
    // Offset: 0x28
    System::Action_1<::Il2CppChar>* keyWasPressedEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<::Il2CppChar>*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDF8280
    // private System.Action deleteButtonWasPressedEvent
    // Size: 0x8
    // Offset: 0x30
    System::Action* deleteButtonWasPressedEvent;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // private readonly HMUI.ButtonBinder _buttonBinder
    // Size: 0x8
    // Offset: 0x38
    HMUI::ButtonBinder* buttonBinder;
    // Field size check
    static_assert(sizeof(HMUI::ButtonBinder*) == 0x8);
    // private HMUI.InputFieldView _currentInput
    // Size: 0x8
    // Offset: 0x40
    HMUI::InputFieldView* currentInput;
    // Field size check
    static_assert(sizeof(HMUI::InputFieldView*) == 0x8);
    // Creating value type constructor for type: UIKeyboard
    UIKeyboard(UnityEngine::UI::Button* okButton_ = {}, System::Action* okButtonWasPressedEvent_ = {}, System::Action_1<::Il2CppChar>* keyWasPressedEvent_ = {}, System::Action* deleteButtonWasPressedEvent_ = {}, HMUI::ButtonBinder* buttonBinder_ = {}, HMUI::InputFieldView* currentInput_ = {}) noexcept : okButton{okButton_}, okButtonWasPressedEvent{okButtonWasPressedEvent_}, keyWasPressedEvent{keyWasPressedEvent_}, deleteButtonWasPressedEvent{deleteButtonWasPressedEvent_}, buttonBinder{buttonBinder_}, currentInput{currentInput_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Void add_okButtonWasPressedEvent(System.Action value)
    // Offset: 0x12C2110
    void add_okButtonWasPressedEvent(System::Action* value);
    // public System.Void remove_okButtonWasPressedEvent(System.Action value)
    // Offset: 0x12C21B4
    void remove_okButtonWasPressedEvent(System::Action* value);
    // public System.Void add_keyWasPressedEvent(System.Action`1<System.Char> value)
    // Offset: 0x12AFF20
    void add_keyWasPressedEvent(System::Action_1<::Il2CppChar>* value);
    // public System.Void remove_keyWasPressedEvent(System.Action`1<System.Char> value)
    // Offset: 0x12B0250
    void remove_keyWasPressedEvent(System::Action_1<::Il2CppChar>* value);
    // public System.Void add_deleteButtonWasPressedEvent(System.Action value)
    // Offset: 0x12AFFC4
    void add_deleteButtonWasPressedEvent(System::Action* value);
    // public System.Void remove_deleteButtonWasPressedEvent(System.Action value)
    // Offset: 0x12B02F4
    void remove_deleteButtonWasPressedEvent(System::Action* value);
    // protected System.Void Awake()
    // Offset: 0x12C2258
    void Awake();
    // private System.Void HandleKeyPress(UnityEngine.KeyCode keyCode)
    // Offset: 0x12C2418
    void HandleKeyPress(UnityEngine::KeyCode keyCode);
    // private System.Void <Awake>b__12_0()
    // Offset: 0x12C2544
    void $Awake$b__12_0();
    // private System.Void <Awake>b__12_1()
    // Offset: 0x12C2558
    void $Awake$b__12_1();
    // public System.Void .ctor()
    // Offset: 0x12C24DC
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UIKeyboard* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("HMUI::UIKeyboard::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UIKeyboard*, creationType>()));
    }
  }; // HMUI.UIKeyboard
  #pragma pack(pop)
  static check_size<sizeof(UIKeyboard), 64 + sizeof(HMUI::InputFieldView*)> __HMUI_UIKeyboardSizeCheck;
  static_assert(sizeof(UIKeyboard) == 0x48);
}
DEFINE_IL2CPP_ARG_TYPE(HMUI::UIKeyboard*, "HMUI", "UIKeyboard");
// Writing MetadataGetter for method: HMUI::UIKeyboard::add_okButtonWasPressedEvent
// Il2CppName: add_okButtonWasPressedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::UIKeyboard::*)(System::Action*)>(&HMUI::UIKeyboard::add_okButtonWasPressedEvent)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::UIKeyboard*), "add_okButtonWasPressedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: HMUI::UIKeyboard::remove_okButtonWasPressedEvent
// Il2CppName: remove_okButtonWasPressedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::UIKeyboard::*)(System::Action*)>(&HMUI::UIKeyboard::remove_okButtonWasPressedEvent)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::UIKeyboard*), "remove_okButtonWasPressedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: HMUI::UIKeyboard::add_keyWasPressedEvent
// Il2CppName: add_keyWasPressedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::UIKeyboard::*)(System::Action_1<::Il2CppChar>*)>(&HMUI::UIKeyboard::add_keyWasPressedEvent)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Char")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::UIKeyboard*), "add_keyWasPressedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: HMUI::UIKeyboard::remove_keyWasPressedEvent
// Il2CppName: remove_keyWasPressedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::UIKeyboard::*)(System::Action_1<::Il2CppChar>*)>(&HMUI::UIKeyboard::remove_keyWasPressedEvent)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Char")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::UIKeyboard*), "remove_keyWasPressedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: HMUI::UIKeyboard::add_deleteButtonWasPressedEvent
// Il2CppName: add_deleteButtonWasPressedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::UIKeyboard::*)(System::Action*)>(&HMUI::UIKeyboard::add_deleteButtonWasPressedEvent)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::UIKeyboard*), "add_deleteButtonWasPressedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: HMUI::UIKeyboard::remove_deleteButtonWasPressedEvent
// Il2CppName: remove_deleteButtonWasPressedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::UIKeyboard::*)(System::Action*)>(&HMUI::UIKeyboard::remove_deleteButtonWasPressedEvent)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::UIKeyboard*), "remove_deleteButtonWasPressedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: HMUI::UIKeyboard::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::UIKeyboard::*)()>(&HMUI::UIKeyboard::Awake)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::UIKeyboard*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::UIKeyboard::HandleKeyPress
// Il2CppName: HandleKeyPress
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::UIKeyboard::*)(UnityEngine::KeyCode)>(&HMUI::UIKeyboard::HandleKeyPress)> {
  const MethodInfo* get() {
    static auto* keyCode = &::il2cpp_utils::GetClassFromName("UnityEngine", "KeyCode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::UIKeyboard*), "HandleKeyPress", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{keyCode});
  }
};
// Writing MetadataGetter for method: HMUI::UIKeyboard::$Awake$b__12_0
// Il2CppName: <Awake>b__12_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::UIKeyboard::*)()>(&HMUI::UIKeyboard::$Awake$b__12_0)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::UIKeyboard*), "<Awake>b__12_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::UIKeyboard::$Awake$b__12_1
// Il2CppName: <Awake>b__12_1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::UIKeyboard::*)()>(&HMUI::UIKeyboard::$Awake$b__12_1)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::UIKeyboard*), "<Awake>b__12_1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::UIKeyboard::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
