// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: HMUI.ViewController
#include "HMUI/ViewController.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: VRTextEntryController
  class VRTextEntryController;
}
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TextMeshProUGUI
  class TextMeshProUGUI;
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Button
  class Button;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`2<T1, T2>
  template<typename T1, typename T2>
  class Action_2;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x90
  #pragma pack(push, 1)
  // Autogenerated type: EnterTextViewController
  class EnterTextViewController : public HMUI::ViewController {
    public:
    // private VRTextEntryController _textEntryController
    // Size: 0x8
    // Offset: 0x70
    GlobalNamespace::VRTextEntryController* textEntryController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::VRTextEntryController*) == 0x8);
    // private TMPro.TextMeshProUGUI _titleText
    // Size: 0x8
    // Offset: 0x78
    TMPro::TextMeshProUGUI* titleText;
    // Field size check
    static_assert(sizeof(TMPro::TextMeshProUGUI*) == 0x8);
    // private UnityEngine.UI.Button _okButton
    // Size: 0x8
    // Offset: 0x80
    UnityEngine::UI::Button* okButton;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Button*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xE24934
    // private System.Action`2<EnterTextViewController,System.String> didFinishEvent
    // Size: 0x8
    // Offset: 0x88
    System::Action_2<GlobalNamespace::EnterTextViewController*, ::Il2CppString*>* didFinishEvent;
    // Field size check
    static_assert(sizeof(System::Action_2<GlobalNamespace::EnterTextViewController*, ::Il2CppString*>*) == 0x8);
    // Creating value type constructor for type: EnterTextViewController
    EnterTextViewController(GlobalNamespace::VRTextEntryController* textEntryController_ = {}, TMPro::TextMeshProUGUI* titleText_ = {}, UnityEngine::UI::Button* okButton_ = {}, System::Action_2<GlobalNamespace::EnterTextViewController*, ::Il2CppString*>* didFinishEvent_ = {}) noexcept : textEntryController{textEntryController_}, titleText{titleText_}, okButton{okButton_}, didFinishEvent{didFinishEvent_} {}
    // public System.Void add_didFinishEvent(System.Action`2<EnterTextViewController,System.String> value)
    // Offset: 0x103D28C
    void add_didFinishEvent(System::Action_2<GlobalNamespace::EnterTextViewController*, ::Il2CppString*>* value);
    // public System.Void remove_didFinishEvent(System.Action`2<EnterTextViewController,System.String> value)
    // Offset: 0x103D330
    void remove_didFinishEvent(System::Action_2<GlobalNamespace::EnterTextViewController*, ::Il2CppString*>* value);
    // public System.Void Init(System.String titleText)
    // Offset: 0x103D3D4
    void Init(::Il2CppString* titleText);
    // public System.Void OkButtonPressed()
    // Offset: 0x103D4CC
    void OkButtonPressed();
    // protected override System.Void DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    // Offset: 0x103D3F0
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);
    // public System.Void .ctor()
    // Offset: 0x103D56C
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EnterTextViewController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::EnterTextViewController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EnterTextViewController*, creationType>()));
    }
  }; // EnterTextViewController
  #pragma pack(pop)
  static check_size<sizeof(EnterTextViewController), 136 + sizeof(System::Action_2<GlobalNamespace::EnterTextViewController*, ::Il2CppString*>*)> __GlobalNamespace_EnterTextViewControllerSizeCheck;
  static_assert(sizeof(EnterTextViewController) == 0x90);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::EnterTextViewController*, "", "EnterTextViewController");
// Writing MetadataGetter for method: GlobalNamespace::EnterTextViewController::add_didFinishEvent
// Il2CppName: add_didFinishEvent
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::EnterTextViewController::remove_didFinishEvent
// Il2CppName: remove_didFinishEvent
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::EnterTextViewController::Init
// Il2CppName: Init
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::EnterTextViewController::OkButtonPressed
// Il2CppName: OkButtonPressed
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::EnterTextViewController::DidActivate
// Il2CppName: DidActivate
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::EnterTextViewController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
