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
}
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: PanelAnimationSO
  class PanelAnimationSO;
  // Forward declaring type: ButtonBinder
  class ButtonBinder;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
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
  // Forward declaring type: Action
  class Action;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x50
  #pragma pack(push, 1)
  // Autogenerated type: DisconnectPromptView
  class DisconnectPromptView : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::DisconnectPromptView::$$c__DisplayClass12_0
    class $$c__DisplayClass12_0;
    // private HMUI.PanelAnimationSO _presentPanelAnimation
    // Size: 0x8
    // Offset: 0x18
    HMUI::PanelAnimationSO* presentPanelAnimation;
    // Field size check
    static_assert(sizeof(HMUI::PanelAnimationSO*) == 0x8);
    // private HMUI.PanelAnimationSO _dismissPanelAnimation
    // Size: 0x8
    // Offset: 0x20
    HMUI::PanelAnimationSO* dismissPanelAnimation;
    // Field size check
    static_assert(sizeof(HMUI::PanelAnimationSO*) == 0x8);
    // [SpaceAttribute] Offset: 0xE26E38
    // private UnityEngine.GameObject _promptGameObject
    // Size: 0x8
    // Offset: 0x28
    UnityEngine::GameObject* promptGameObject;
    // Field size check
    static_assert(sizeof(UnityEngine::GameObject*) == 0x8);
    // private UnityEngine.UI.Button _okButton
    // Size: 0x8
    // Offset: 0x30
    UnityEngine::UI::Button* okButton;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Button*) == 0x8);
    // private UnityEngine.UI.Button _cancelButton
    // Size: 0x8
    // Offset: 0x38
    UnityEngine::UI::Button* cancelButton;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Button*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xE26E90
    // private System.Action`1<System.Boolean> didViewFinishEvent
    // Size: 0x8
    // Offset: 0x40
    System::Action_1<bool>* didViewFinishEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<bool>*) == 0x8);
    // private readonly HMUI.ButtonBinder _buttonBinder
    // Size: 0x8
    // Offset: 0x48
    HMUI::ButtonBinder* buttonBinder;
    // Field size check
    static_assert(sizeof(HMUI::ButtonBinder*) == 0x8);
    // Creating value type constructor for type: DisconnectPromptView
    DisconnectPromptView(HMUI::PanelAnimationSO* presentPanelAnimation_ = {}, HMUI::PanelAnimationSO* dismissPanelAnimation_ = {}, UnityEngine::GameObject* promptGameObject_ = {}, UnityEngine::UI::Button* okButton_ = {}, UnityEngine::UI::Button* cancelButton_ = {}, System::Action_1<bool>* didViewFinishEvent_ = {}, HMUI::ButtonBinder* buttonBinder_ = {}) noexcept : presentPanelAnimation{presentPanelAnimation_}, dismissPanelAnimation{dismissPanelAnimation_}, promptGameObject{promptGameObject_}, okButton{okButton_}, cancelButton{cancelButton_}, didViewFinishEvent{didViewFinishEvent_}, buttonBinder{buttonBinder_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Void add_didViewFinishEvent(System.Action`1<System.Boolean> value)
    // Offset: 0x1035C40
    void add_didViewFinishEvent(System::Action_1<bool>* value);
    // public System.Void remove_didViewFinishEvent(System.Action`1<System.Boolean> value)
    // Offset: 0x1035CE4
    void remove_didViewFinishEvent(System::Action_1<bool>* value);
    // private System.Void OnEnable()
    // Offset: 0x1035D88
    void OnEnable();
    // private System.Void OnDisable()
    // Offset: 0x1035E68
    void OnDisable();
    // public System.Void Show()
    // Offset: 0x1035E84
    void Show();
    // public System.Void Hide(System.Action finishedCallback)
    // Offset: 0x1035EC8
    void Hide(System::Action* finishedCallback);
    // private System.Void <OnEnable>b__9_0()
    // Offset: 0x1035FF0
    void $OnEnable$b__9_0();
    // private System.Void <OnEnable>b__9_1()
    // Offset: 0x1036054
    void $OnEnable$b__9_1();
    // public System.Void .ctor()
    // Offset: 0x1035F88
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DisconnectPromptView* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::DisconnectPromptView::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DisconnectPromptView*, creationType>()));
    }
  }; // DisconnectPromptView
  #pragma pack(pop)
  static check_size<sizeof(DisconnectPromptView), 72 + sizeof(HMUI::ButtonBinder*)> __GlobalNamespace_DisconnectPromptViewSizeCheck;
  static_assert(sizeof(DisconnectPromptView) == 0x50);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::DisconnectPromptView*, "", "DisconnectPromptView");
// Writing MetadataGetter for method: GlobalNamespace::DisconnectPromptView::add_didViewFinishEvent
// Il2CppName: add_didViewFinishEvent
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::DisconnectPromptView::remove_didViewFinishEvent
// Il2CppName: remove_didViewFinishEvent
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::DisconnectPromptView::OnEnable
// Il2CppName: OnEnable
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::DisconnectPromptView::OnDisable
// Il2CppName: OnDisable
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::DisconnectPromptView::Show
// Il2CppName: Show
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::DisconnectPromptView::Hide
// Il2CppName: Hide
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::DisconnectPromptView::$OnEnable$b__9_0
// Il2CppName: <OnEnable>b__9_0
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::DisconnectPromptView::$OnEnable$b__9_1
// Il2CppName: <OnEnable>b__9_1
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::DisconnectPromptView::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
