// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
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
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Button
  class Button;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: LoadingControl
  class LoadingControl;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x90
  // Autogenerated type: JoiningLobbyViewController
  // [] Offset: FFFFFFFF
  class JoiningLobbyViewController : public HMUI::ViewController {
    public:
    // private UnityEngine.UI.Button _cancelJoiningButton
    // Size: 0x8
    // Offset: 0x70
    UnityEngine::UI::Button* cancelJoiningButton;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Button*) == 0x8);
    // private LoadingControl _loadingControl
    // Size: 0x8
    // Offset: 0x78
    GlobalNamespace::LoadingControl* loadingControl;
    // Field size check
    static_assert(sizeof(GlobalNamespace::LoadingControl*) == 0x8);
    // private System.String _text
    // Size: 0x8
    // Offset: 0x80
    ::Il2CppString* text;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDD0D20
    // private System.Action didFinishEvent
    // Size: 0x8
    // Offset: 0x88
    System::Action* didFinishEvent;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // Creating value type constructor for type: JoiningLobbyViewController
    JoiningLobbyViewController(UnityEngine::UI::Button* cancelJoiningButton_ = {}, GlobalNamespace::LoadingControl* loadingControl_ = {}, ::Il2CppString* text_ = {}, System::Action* didFinishEvent_ = {}) noexcept : cancelJoiningButton{cancelJoiningButton_}, loadingControl{loadingControl_}, text{text_}, didFinishEvent{didFinishEvent_} {}
    // public System.Void add_didFinishEvent(System.Action value)
    // Offset: 0xF1CCDC
    void add_didFinishEvent(System::Action* value);
    // public System.Void remove_didFinishEvent(System.Action value)
    // Offset: 0xF1CD80
    void remove_didFinishEvent(System::Action* value);
    // public System.Void Init(System.String text)
    // Offset: 0xF1CE24
    void Init(::Il2CppString* text);
    // public System.Void HideLoading()
    // Offset: 0xF1CE6C
    void HideLoading();
    // private System.Void <DidActivate>b__8_0()
    // Offset: 0xF1CF80
    void $DidActivate$b__8_0();
    // protected override System.Void DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    // Offset: 0xF1CEB8
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);
    // public System.Void .ctor()
    // Offset: 0xF1CF78
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static JoiningLobbyViewController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::JoiningLobbyViewController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<JoiningLobbyViewController*, creationType>()));
    }
  }; // JoiningLobbyViewController
  static check_size<sizeof(JoiningLobbyViewController), 136 + sizeof(System::Action*)> __GlobalNamespace_JoiningLobbyViewControllerSizeCheck;
  static_assert(sizeof(JoiningLobbyViewController) == 0x90);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::JoiningLobbyViewController*, "", "JoiningLobbyViewController");
#pragma pack(pop)
