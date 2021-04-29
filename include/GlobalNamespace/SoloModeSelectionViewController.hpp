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
  // Skipping declaration: MenuType because it is already included!
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
  // Size: 0x98
  #pragma pack(push, 1)
  // Autogenerated type: SoloModeSelectionViewController
  class SoloModeSelectionViewController : public HMUI::ViewController {
    public:
    // Nested type: GlobalNamespace::SoloModeSelectionViewController::MenuType
    struct MenuType;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: SoloModeSelectionViewController/MenuType
    struct MenuType/*, public System::Enum*/ {
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // Creating value type constructor for type: MenuType
      constexpr MenuType(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator System::Enum
      operator System::Enum() noexcept {
        return *reinterpret_cast<System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public SoloModeSelectionViewController/MenuType FreePlayMode
      static constexpr const int FreePlayMode = 0;
      // Get static field: static public SoloModeSelectionViewController/MenuType FreePlayMode
      static GlobalNamespace::SoloModeSelectionViewController::MenuType _get_FreePlayMode();
      // Set static field: static public SoloModeSelectionViewController/MenuType FreePlayMode
      static void _set_FreePlayMode(GlobalNamespace::SoloModeSelectionViewController::MenuType value);
      // static field const value: static public SoloModeSelectionViewController/MenuType NoArrowsMode
      static constexpr const int NoArrowsMode = 1;
      // Get static field: static public SoloModeSelectionViewController/MenuType NoArrowsMode
      static GlobalNamespace::SoloModeSelectionViewController::MenuType _get_NoArrowsMode();
      // Set static field: static public SoloModeSelectionViewController/MenuType NoArrowsMode
      static void _set_NoArrowsMode(GlobalNamespace::SoloModeSelectionViewController::MenuType value);
      // static field const value: static public SoloModeSelectionViewController/MenuType OneSaberMode
      static constexpr const int OneSaberMode = 2;
      // Get static field: static public SoloModeSelectionViewController/MenuType OneSaberMode
      static GlobalNamespace::SoloModeSelectionViewController::MenuType _get_OneSaberMode();
      // Set static field: static public SoloModeSelectionViewController/MenuType OneSaberMode
      static void _set_OneSaberMode(GlobalNamespace::SoloModeSelectionViewController::MenuType value);
      // static field const value: static public SoloModeSelectionViewController/MenuType Back
      static constexpr const int Back = 3;
      // Get static field: static public SoloModeSelectionViewController/MenuType Back
      static GlobalNamespace::SoloModeSelectionViewController::MenuType _get_Back();
      // Set static field: static public SoloModeSelectionViewController/MenuType Back
      static void _set_Back(GlobalNamespace::SoloModeSelectionViewController::MenuType value);
    }; // SoloModeSelectionViewController/MenuType
    #pragma pack(pop)
    static check_size<sizeof(SoloModeSelectionViewController::MenuType), 0 + sizeof(int)> __GlobalNamespace_SoloModeSelectionViewController_MenuTypeSizeCheck;
    static_assert(sizeof(SoloModeSelectionViewController::MenuType) == 0x4);
    // private UnityEngine.UI.Button _freePlayModeButton
    // Size: 0x8
    // Offset: 0x70
    UnityEngine::UI::Button* freePlayModeButton;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Button*) == 0x8);
    // private UnityEngine.UI.Button _oneSaberModeButton
    // Size: 0x8
    // Offset: 0x78
    UnityEngine::UI::Button* oneSaberModeButton;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Button*) == 0x8);
    // private UnityEngine.UI.Button _noArrowsModeButton
    // Size: 0x8
    // Offset: 0x80
    UnityEngine::UI::Button* noArrowsModeButton;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Button*) == 0x8);
    // private UnityEngine.UI.Button _dismissButton
    // Size: 0x8
    // Offset: 0x88
    UnityEngine::UI::Button* dismissButton;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Button*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xD45EB8
    // private System.Action`2<SoloModeSelectionViewController,SoloModeSelectionViewController/MenuType> didFinishEvent
    // Size: 0x8
    // Offset: 0x90
    System::Action_2<GlobalNamespace::SoloModeSelectionViewController*, GlobalNamespace::SoloModeSelectionViewController::MenuType>* didFinishEvent;
    // Field size check
    static_assert(sizeof(System::Action_2<GlobalNamespace::SoloModeSelectionViewController*, GlobalNamespace::SoloModeSelectionViewController::MenuType>*) == 0x8);
    // Creating value type constructor for type: SoloModeSelectionViewController
    SoloModeSelectionViewController(UnityEngine::UI::Button* freePlayModeButton_ = {}, UnityEngine::UI::Button* oneSaberModeButton_ = {}, UnityEngine::UI::Button* noArrowsModeButton_ = {}, UnityEngine::UI::Button* dismissButton_ = {}, System::Action_2<GlobalNamespace::SoloModeSelectionViewController*, GlobalNamespace::SoloModeSelectionViewController::MenuType>* didFinishEvent_ = {}) noexcept : freePlayModeButton{freePlayModeButton_}, oneSaberModeButton{oneSaberModeButton_}, noArrowsModeButton{noArrowsModeButton_}, dismissButton{dismissButton_}, didFinishEvent{didFinishEvent_} {}
    // public System.Void add_didFinishEvent(System.Action`2<SoloModeSelectionViewController,SoloModeSelectionViewController/MenuType> value)
    // Offset: 0xF8E714
    void add_didFinishEvent(System::Action_2<GlobalNamespace::SoloModeSelectionViewController*, GlobalNamespace::SoloModeSelectionViewController::MenuType>* value);
    // public System.Void remove_didFinishEvent(System.Action`2<SoloModeSelectionViewController,SoloModeSelectionViewController/MenuType> value)
    // Offset: 0xF8E7B8
    void remove_didFinishEvent(System::Action_2<GlobalNamespace::SoloModeSelectionViewController*, GlobalNamespace::SoloModeSelectionViewController::MenuType>* value);
    // private System.Void HandleMenuButton(SoloModeSelectionViewController/MenuType subMenuType)
    // Offset: 0xF8E9E0
    void HandleMenuButton(GlobalNamespace::SoloModeSelectionViewController::MenuType subMenuType);
    // private System.Void <DidActivate>b__8_0()
    // Offset: 0xF8EA60
    void $DidActivate$b__8_0();
    // private System.Void <DidActivate>b__8_1()
    // Offset: 0xF8EA68
    void $DidActivate$b__8_1();
    // private System.Void <DidActivate>b__8_2()
    // Offset: 0xF8EA70
    void $DidActivate$b__8_2();
    // private System.Void <DidActivate>b__8_3()
    // Offset: 0xF8EA78
    void $DidActivate$b__8_3();
    // protected override System.Void DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    // Offset: 0xF8E85C
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);
    // public System.Void .ctor()
    // Offset: 0xF8EA58
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SoloModeSelectionViewController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::SoloModeSelectionViewController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SoloModeSelectionViewController*, creationType>()));
    }
  }; // SoloModeSelectionViewController
  #pragma pack(pop)
  static check_size<sizeof(SoloModeSelectionViewController), 144 + sizeof(System::Action_2<GlobalNamespace::SoloModeSelectionViewController*, GlobalNamespace::SoloModeSelectionViewController::MenuType>*)> __GlobalNamespace_SoloModeSelectionViewControllerSizeCheck;
  static_assert(sizeof(SoloModeSelectionViewController) == 0x98);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SoloModeSelectionViewController*, "", "SoloModeSelectionViewController");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SoloModeSelectionViewController::MenuType, "", "SoloModeSelectionViewController/MenuType");
