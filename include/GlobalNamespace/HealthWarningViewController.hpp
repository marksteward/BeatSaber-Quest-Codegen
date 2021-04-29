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
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IAnalyticsModel
  class IAnalyticsModel;
  // Forward declaring type: AppStaticSettingsSO
  class AppStaticSettingsSO;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0xB8
  #pragma pack(push, 1)
  // Autogenerated type: HealthWarningViewController
  class HealthWarningViewController : public HMUI::ViewController {
    public:
    // private UnityEngine.UI.Button _continueButton
    // Size: 0x8
    // Offset: 0x70
    UnityEngine::UI::Button* continueButton;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Button*) == 0x8);
    // private UnityEngine.UI.Button _privacyPolicyButton
    // Size: 0x8
    // Offset: 0x78
    UnityEngine::UI::Button* privacyPolicyButton;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Button*) == 0x8);
    // private UnityEngine.UI.Button _openDataPrivacyPageButton
    // Size: 0x8
    // Offset: 0x80
    UnityEngine::UI::Button* openDataPrivacyPageButton;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Button*) == 0x8);
    // private UnityEngine.GameObject _privacyAgreeToPrivacyPolicyLabel
    // Size: 0x8
    // Offset: 0x88
    UnityEngine::GameObject* privacyAgreeToPrivacyPolicyLabel;
    // Field size check
    static_assert(sizeof(UnityEngine::GameObject*) == 0x8);
    // [InjectAttribute] Offset: 0xD440C4
    // private IAnalyticsModel _analyticsModel
    // Size: 0x8
    // Offset: 0x90
    GlobalNamespace::IAnalyticsModel* analyticsModel;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IAnalyticsModel*) == 0x8);
    // [InjectAttribute] Offset: 0xD440D4
    // private AppStaticSettingsSO _appStaticSettings
    // Size: 0x8
    // Offset: 0x98
    GlobalNamespace::AppStaticSettingsSO* appStaticSettings;
    // Field size check
    static_assert(sizeof(GlobalNamespace::AppStaticSettingsSO*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xD440E4
    // private System.Action privacyPolicyButtonPressedEvent
    // Size: 0x8
    // Offset: 0xA0
    System::Action* privacyPolicyButtonPressedEvent;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xD440F4
    // private System.Action openDataPrivacyPageButtonPressedEvent
    // Size: 0x8
    // Offset: 0xA8
    System::Action* openDataPrivacyPageButtonPressedEvent;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xD44104
    // private System.Action didFinishEvent
    // Size: 0x8
    // Offset: 0xB0
    System::Action* didFinishEvent;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // Creating value type constructor for type: HealthWarningViewController
    HealthWarningViewController(UnityEngine::UI::Button* continueButton_ = {}, UnityEngine::UI::Button* privacyPolicyButton_ = {}, UnityEngine::UI::Button* openDataPrivacyPageButton_ = {}, UnityEngine::GameObject* privacyAgreeToPrivacyPolicyLabel_ = {}, GlobalNamespace::IAnalyticsModel* analyticsModel_ = {}, GlobalNamespace::AppStaticSettingsSO* appStaticSettings_ = {}, System::Action* privacyPolicyButtonPressedEvent_ = {}, System::Action* openDataPrivacyPageButtonPressedEvent_ = {}, System::Action* didFinishEvent_ = {}) noexcept : continueButton{continueButton_}, privacyPolicyButton{privacyPolicyButton_}, openDataPrivacyPageButton{openDataPrivacyPageButton_}, privacyAgreeToPrivacyPolicyLabel{privacyAgreeToPrivacyPolicyLabel_}, analyticsModel{analyticsModel_}, appStaticSettings{appStaticSettings_}, privacyPolicyButtonPressedEvent{privacyPolicyButtonPressedEvent_}, openDataPrivacyPageButtonPressedEvent{openDataPrivacyPageButtonPressedEvent_}, didFinishEvent{didFinishEvent_} {}
    // public System.Void add_privacyPolicyButtonPressedEvent(System.Action value)
    // Offset: 0xF6DB5C
    void add_privacyPolicyButtonPressedEvent(System::Action* value);
    // public System.Void remove_privacyPolicyButtonPressedEvent(System.Action value)
    // Offset: 0xF6DEDC
    void remove_privacyPolicyButtonPressedEvent(System::Action* value);
    // public System.Void add_openDataPrivacyPageButtonPressedEvent(System.Action value)
    // Offset: 0xF6DC00
    void add_openDataPrivacyPageButtonPressedEvent(System::Action* value);
    // public System.Void remove_openDataPrivacyPageButtonPressedEvent(System.Action value)
    // Offset: 0xF6DF80
    void remove_openDataPrivacyPageButtonPressedEvent(System::Action* value);
    // public System.Void add_didFinishEvent(System.Action value)
    // Offset: 0xF6DAB8
    void add_didFinishEvent(System::Action* value);
    // public System.Void remove_didFinishEvent(System.Action value)
    // Offset: 0xF6DE38
    void remove_didFinishEvent(System::Action* value);
    // private System.Void <DidActivate>b__15_0()
    // Offset: 0xF6EB90
    void $DidActivate$b__15_0();
    // private System.Void <DidActivate>b__15_1()
    // Offset: 0xF6EBA4
    void $DidActivate$b__15_1();
    // private System.Void <DidActivate>b__15_2()
    // Offset: 0xF6EBB8
    void $DidActivate$b__15_2();
    // protected override System.Void DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    // Offset: 0xF6E8F4
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);
    // public System.Void .ctor()
    // Offset: 0xF6EB88
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HealthWarningViewController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::HealthWarningViewController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HealthWarningViewController*, creationType>()));
    }
  }; // HealthWarningViewController
  #pragma pack(pop)
  static check_size<sizeof(HealthWarningViewController), 176 + sizeof(System::Action*)> __GlobalNamespace_HealthWarningViewControllerSizeCheck;
  static_assert(sizeof(HealthWarningViewController) == 0xB8);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::HealthWarningViewController*, "", "HealthWarningViewController");
