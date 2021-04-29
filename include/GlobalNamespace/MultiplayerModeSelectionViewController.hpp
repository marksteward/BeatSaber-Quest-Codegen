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
  // Forward declaring type: MasterServerAvailabilityData
  class MasterServerAvailabilityData;
  // Forward declaring type: INetworkConfig
  class INetworkConfig;
  // Skipping declaration: MenuButton because it is already included!
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Button
  class Button;
}
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TextMeshProUGUI
  class TextMeshProUGUI;
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
  // Size: 0xB0
  #pragma pack(push, 1)
  // Autogenerated type: MultiplayerModeSelectionViewController
  class MultiplayerModeSelectionViewController : public HMUI::ViewController {
    public:
    // Nested type: GlobalNamespace::MultiplayerModeSelectionViewController::MenuButton
    struct MenuButton;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: MultiplayerModeSelectionViewController/MenuButton
    struct MenuButton/*, public System::Enum*/ {
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // Creating value type constructor for type: MenuButton
      constexpr MenuButton(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator System::Enum
      operator System::Enum() noexcept {
        return *reinterpret_cast<System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public MultiplayerModeSelectionViewController/MenuButton QuickPlay
      static constexpr const int QuickPlay = 0;
      // Get static field: static public MultiplayerModeSelectionViewController/MenuButton QuickPlay
      static GlobalNamespace::MultiplayerModeSelectionViewController::MenuButton _get_QuickPlay();
      // Set static field: static public MultiplayerModeSelectionViewController/MenuButton QuickPlay
      static void _set_QuickPlay(GlobalNamespace::MultiplayerModeSelectionViewController::MenuButton value);
      // static field const value: static public MultiplayerModeSelectionViewController/MenuButton CreateServer
      static constexpr const int CreateServer = 1;
      // Get static field: static public MultiplayerModeSelectionViewController/MenuButton CreateServer
      static GlobalNamespace::MultiplayerModeSelectionViewController::MenuButton _get_CreateServer();
      // Set static field: static public MultiplayerModeSelectionViewController/MenuButton CreateServer
      static void _set_CreateServer(GlobalNamespace::MultiplayerModeSelectionViewController::MenuButton value);
      // static field const value: static public MultiplayerModeSelectionViewController/MenuButton JoinWithCode
      static constexpr const int JoinWithCode = 2;
      // Get static field: static public MultiplayerModeSelectionViewController/MenuButton JoinWithCode
      static GlobalNamespace::MultiplayerModeSelectionViewController::MenuButton _get_JoinWithCode();
      // Set static field: static public MultiplayerModeSelectionViewController/MenuButton JoinWithCode
      static void _set_JoinWithCode(GlobalNamespace::MultiplayerModeSelectionViewController::MenuButton value);
      // static field const value: static public MultiplayerModeSelectionViewController/MenuButton GameBrowser
      static constexpr const int GameBrowser = 3;
      // Get static field: static public MultiplayerModeSelectionViewController/MenuButton GameBrowser
      static GlobalNamespace::MultiplayerModeSelectionViewController::MenuButton _get_GameBrowser();
      // Set static field: static public MultiplayerModeSelectionViewController/MenuButton GameBrowser
      static void _set_GameBrowser(GlobalNamespace::MultiplayerModeSelectionViewController::MenuButton value);
    }; // MultiplayerModeSelectionViewController/MenuButton
    #pragma pack(pop)
    static check_size<sizeof(MultiplayerModeSelectionViewController::MenuButton), 0 + sizeof(int)> __GlobalNamespace_MultiplayerModeSelectionViewController_MenuButtonSizeCheck;
    static_assert(sizeof(MultiplayerModeSelectionViewController::MenuButton) == 0x4);
    // private UnityEngine.UI.Button _quickPlayButton
    // Size: 0x8
    // Offset: 0x70
    UnityEngine::UI::Button* quickPlayButton;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Button*) == 0x8);
    // private UnityEngine.UI.Button _gameBrowserButton
    // Size: 0x8
    // Offset: 0x78
    UnityEngine::UI::Button* gameBrowserButton;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Button*) == 0x8);
    // private UnityEngine.UI.Button _joinWithCodeButton
    // Size: 0x8
    // Offset: 0x80
    UnityEngine::UI::Button* joinWithCodeButton;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Button*) == 0x8);
    // private UnityEngine.UI.Button _createServerButton
    // Size: 0x8
    // Offset: 0x88
    UnityEngine::UI::Button* createServerButton;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Button*) == 0x8);
    // [SpaceAttribute] Offset: 0xD4547C
    // private TMPro.TextMeshProUGUI _maintenanceMessageText
    // Size: 0x8
    // Offset: 0x90
    TMPro::TextMeshProUGUI* maintenanceMessageText;
    // Field size check
    static_assert(sizeof(TMPro::TextMeshProUGUI*) == 0x8);
    // private TMPro.TextMeshProUGUI _customServerEndPointText
    // Size: 0x8
    // Offset: 0x98
    TMPro::TextMeshProUGUI* customServerEndPointText;
    // Field size check
    static_assert(sizeof(TMPro::TextMeshProUGUI*) == 0x8);
    // [InjectAttribute] Offset: 0xD454C4
    // private readonly INetworkConfig _networkConfig
    // Size: 0x8
    // Offset: 0xA0
    GlobalNamespace::INetworkConfig* networkConfig;
    // Field size check
    static_assert(sizeof(GlobalNamespace::INetworkConfig*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xD454D4
    // private System.Action`2<MultiplayerModeSelectionViewController,MultiplayerModeSelectionViewController/MenuButton> didFinishEvent
    // Size: 0x8
    // Offset: 0xA8
    System::Action_2<GlobalNamespace::MultiplayerModeSelectionViewController*, GlobalNamespace::MultiplayerModeSelectionViewController::MenuButton>* didFinishEvent;
    // Field size check
    static_assert(sizeof(System::Action_2<GlobalNamespace::MultiplayerModeSelectionViewController*, GlobalNamespace::MultiplayerModeSelectionViewController::MenuButton>*) == 0x8);
    // Creating value type constructor for type: MultiplayerModeSelectionViewController
    MultiplayerModeSelectionViewController(UnityEngine::UI::Button* quickPlayButton_ = {}, UnityEngine::UI::Button* gameBrowserButton_ = {}, UnityEngine::UI::Button* joinWithCodeButton_ = {}, UnityEngine::UI::Button* createServerButton_ = {}, TMPro::TextMeshProUGUI* maintenanceMessageText_ = {}, TMPro::TextMeshProUGUI* customServerEndPointText_ = {}, GlobalNamespace::INetworkConfig* networkConfig_ = {}, System::Action_2<GlobalNamespace::MultiplayerModeSelectionViewController*, GlobalNamespace::MultiplayerModeSelectionViewController::MenuButton>* didFinishEvent_ = {}) noexcept : quickPlayButton{quickPlayButton_}, gameBrowserButton{gameBrowserButton_}, joinWithCodeButton{joinWithCodeButton_}, createServerButton{createServerButton_}, maintenanceMessageText{maintenanceMessageText_}, customServerEndPointText{customServerEndPointText_}, networkConfig{networkConfig_}, didFinishEvent{didFinishEvent_} {}
    // public System.Void add_didFinishEvent(System.Action`2<MultiplayerModeSelectionViewController,MultiplayerModeSelectionViewController/MenuButton> value)
    // Offset: 0x1002ADC
    void add_didFinishEvent(System::Action_2<GlobalNamespace::MultiplayerModeSelectionViewController*, GlobalNamespace::MultiplayerModeSelectionViewController::MenuButton>* value);
    // public System.Void remove_didFinishEvent(System.Action`2<MultiplayerModeSelectionViewController,MultiplayerModeSelectionViewController/MenuButton> value)
    // Offset: 0x1002F94
    void remove_didFinishEvent(System::Action_2<GlobalNamespace::MultiplayerModeSelectionViewController*, GlobalNamespace::MultiplayerModeSelectionViewController::MenuButton>* value);
    // public System.Void SetData(MasterServerAvailabilityData masterServerAvailabilityData)
    // Offset: 0x1005BEC
    void SetData(GlobalNamespace::MasterServerAvailabilityData* masterServerAvailabilityData);
    // private System.Void HandleMenuButton(MultiplayerModeSelectionViewController/MenuButton menuButton)
    // Offset: 0x10060D4
    void HandleMenuButton(GlobalNamespace::MultiplayerModeSelectionViewController::MenuButton menuButton);
    // private System.Void <DidActivate>b__11_0()
    // Offset: 0x1006154
    void $DidActivate$b__11_0();
    // private System.Void <DidActivate>b__11_1()
    // Offset: 0x100615C
    void $DidActivate$b__11_1();
    // private System.Void <DidActivate>b__11_2()
    // Offset: 0x1006164
    void $DidActivate$b__11_2();
    // private System.Void <DidActivate>b__11_3()
    // Offset: 0x100616C
    void $DidActivate$b__11_3();
    // protected override System.Void DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    // Offset: 0x1005E3C
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);
    // public System.Void .ctor()
    // Offset: 0x100614C
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MultiplayerModeSelectionViewController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MultiplayerModeSelectionViewController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MultiplayerModeSelectionViewController*, creationType>()));
    }
  }; // MultiplayerModeSelectionViewController
  #pragma pack(pop)
  static check_size<sizeof(MultiplayerModeSelectionViewController), 168 + sizeof(System::Action_2<GlobalNamespace::MultiplayerModeSelectionViewController*, GlobalNamespace::MultiplayerModeSelectionViewController::MenuButton>*)> __GlobalNamespace_MultiplayerModeSelectionViewControllerSizeCheck;
  static_assert(sizeof(MultiplayerModeSelectionViewController) == 0xB0);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerModeSelectionViewController*, "", "MultiplayerModeSelectionViewController");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerModeSelectionViewController::MenuButton, "", "MultiplayerModeSelectionViewController/MenuButton");
