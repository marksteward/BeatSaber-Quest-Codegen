// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: HMUI.ViewController
#include "HMUI/ViewController.hpp"
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
  // Autogenerated type: JoiningLobbyViewController
  class JoiningLobbyViewController : public HMUI::ViewController {
    public:
    // private UnityEngine.UI.Button _cancelJoiningButton
    // Offset: 0x70
    UnityEngine::UI::Button* cancelJoiningButton;
    // private LoadingControl _loadingControl
    // Offset: 0x78
    GlobalNamespace::LoadingControl* loadingControl;
    // private System.String _text
    // Offset: 0x80
    ::Il2CppString* text;
    // private System.Action didFinishEvent
    // Offset: 0x88
    System::Action* didFinishEvent;
    // public System.Void add_didFinishEvent(System.Action value)
    // Offset: 0x20B0A20
    void add_didFinishEvent(System::Action* value);
    // public System.Void remove_didFinishEvent(System.Action value)
    // Offset: 0x20B0AC4
    void remove_didFinishEvent(System::Action* value);
    // public System.Void Init(System.String text)
    // Offset: 0x20B0B68
    void Init(::Il2CppString* text);
    // public System.Void HideLoading()
    // Offset: 0x20B0BB0
    void HideLoading();
    // private System.Void <DidActivate>b__8_0()
    // Offset: 0x20B0CC4
    void $DidActivate$b__8_0();
    // protected override System.Void DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    // Offset: 0x20B0BFC
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);
    // public System.Void .ctor()
    // Offset: 0x20B0CBC
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static JoiningLobbyViewController* New_ctor();
  }; // JoiningLobbyViewController
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::JoiningLobbyViewController*, "", "JoiningLobbyViewController");
#pragma pack(pop)