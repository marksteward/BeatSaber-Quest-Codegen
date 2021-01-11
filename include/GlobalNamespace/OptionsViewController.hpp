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
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x90
  #pragma pack(push, 1)
  // Autogenerated type: OptionsViewController
  // [] Offset: FFFFFFFF
  class OptionsViewController : public HMUI::ViewController {
    public:
    // Nested type: GlobalNamespace::OptionsViewController::OptionsButton
    struct OptionsButton;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: OptionsViewController/OptionsButton
    // [] Offset: FFFFFFFF
    struct OptionsButton/*, public System::Enum*/ {
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // Creating value type constructor for type: OptionsButton
      constexpr OptionsButton(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator System::Enum
      operator System::Enum() noexcept {
        return *reinterpret_cast<System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public OptionsViewController/OptionsButton EditAvatar
      static constexpr const int EditAvatar = 0;
      // Get static field: static public OptionsViewController/OptionsButton EditAvatar
      static GlobalNamespace::OptionsViewController::OptionsButton _get_EditAvatar();
      // Set static field: static public OptionsViewController/OptionsButton EditAvatar
      static void _set_EditAvatar(GlobalNamespace::OptionsViewController::OptionsButton value);
      // static field const value: static public OptionsViewController/OptionsButton PlayerOptions
      static constexpr const int PlayerOptions = 1;
      // Get static field: static public OptionsViewController/OptionsButton PlayerOptions
      static GlobalNamespace::OptionsViewController::OptionsButton _get_PlayerOptions();
      // Set static field: static public OptionsViewController/OptionsButton PlayerOptions
      static void _set_PlayerOptions(GlobalNamespace::OptionsViewController::OptionsButton value);
      // static field const value: static public OptionsViewController/OptionsButton Settings
      static constexpr const int Settings = 2;
      // Get static field: static public OptionsViewController/OptionsButton Settings
      static GlobalNamespace::OptionsViewController::OptionsButton _get_Settings();
      // Set static field: static public OptionsViewController/OptionsButton Settings
      static void _set_Settings(GlobalNamespace::OptionsViewController::OptionsButton value);
    }; // OptionsViewController/OptionsButton
    static check_size<sizeof(OptionsViewController::OptionsButton), 0 + sizeof(int)> __GlobalNamespace_OptionsViewController_OptionsButtonSizeCheck;
    static_assert(sizeof(OptionsViewController::OptionsButton) == 0x4);
    // private UnityEngine.UI.Button _editAvatarButton
    // Size: 0x8
    // Offset: 0x70
    UnityEngine::UI::Button* editAvatarButton;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Button*) == 0x8);
    // private UnityEngine.UI.Button _playerOptionsButton
    // Size: 0x8
    // Offset: 0x78
    UnityEngine::UI::Button* playerOptionsButton;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Button*) == 0x8);
    // private UnityEngine.UI.Button _settingsButton
    // Size: 0x8
    // Offset: 0x80
    UnityEngine::UI::Button* settingsButton;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Button*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDD111C
    // private System.Action`1<OptionsViewController/OptionsButton> didFinishEvent
    // Size: 0x8
    // Offset: 0x88
    System::Action_1<GlobalNamespace::OptionsViewController::OptionsButton>* didFinishEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<GlobalNamespace::OptionsViewController::OptionsButton>*) == 0x8);
    // Creating value type constructor for type: OptionsViewController
    OptionsViewController(UnityEngine::UI::Button* editAvatarButton_ = {}, UnityEngine::UI::Button* playerOptionsButton_ = {}, UnityEngine::UI::Button* settingsButton_ = {}, System::Action_1<GlobalNamespace::OptionsViewController::OptionsButton>* didFinishEvent_ = {}) noexcept : editAvatarButton{editAvatarButton_}, playerOptionsButton{playerOptionsButton_}, settingsButton{settingsButton_}, didFinishEvent{didFinishEvent_} {}
    // public System.Void add_didFinishEvent(System.Action`1<OptionsViewController/OptionsButton> value)
    // Offset: 0xF00D7C
    void add_didFinishEvent(System::Action_1<GlobalNamespace::OptionsViewController::OptionsButton>* value);
    // public System.Void remove_didFinishEvent(System.Action`1<OptionsViewController/OptionsButton> value)
    // Offset: 0xF00E20
    void remove_didFinishEvent(System::Action_1<GlobalNamespace::OptionsViewController::OptionsButton>* value);
    // private System.Void <DidActivate>b__7_0()
    // Offset: 0xF0100C
    void $DidActivate$b__7_0();
    // private System.Void <DidActivate>b__7_1()
    // Offset: 0xF01070
    void $DidActivate$b__7_1();
    // private System.Void <DidActivate>b__7_2()
    // Offset: 0xF010D4
    void $DidActivate$b__7_2();
    // protected override System.Void DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    // Offset: 0xF00EC4
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);
    // public System.Void .ctor()
    // Offset: 0xF01004
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OptionsViewController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::OptionsViewController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OptionsViewController*, creationType>()));
    }
  }; // OptionsViewController
  static check_size<sizeof(OptionsViewController), 136 + sizeof(System::Action_1<GlobalNamespace::OptionsViewController::OptionsButton>*)> __GlobalNamespace_OptionsViewControllerSizeCheck;
  static_assert(sizeof(OptionsViewController) == 0x90);
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OptionsViewController*, "", "OptionsViewController");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OptionsViewController::OptionsButton, "", "OptionsViewController/OptionsButton");
