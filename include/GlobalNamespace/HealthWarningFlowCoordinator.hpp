// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: HMUI.FlowCoordinator
#include "HMUI/FlowCoordinator.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: PlayerDataModel
  class PlayerDataModel;
  // Forward declaring type: DlcPromoExperimentModel
  class DlcPromoExperimentModel;
  // Forward declaring type: EulaViewController
  class EulaViewController;
  // Forward declaring type: HealthWarningViewController
  class HealthWarningViewController;
  // Forward declaring type: PrivacyPolicyViewController
  class PrivacyPolicyViewController;
  // Forward declaring type: SelectLanguageViewController
  class SelectLanguageViewController;
  // Forward declaring type: MainSettingsModelSO
  class MainSettingsModelSO;
  // Forward declaring type: AppInitScenesTransitionSetupDataContainerSO
  class AppInitScenesTransitionSetupDataContainerSO;
  // Forward declaring type: SimpleDialogPromptViewController
  class SimpleDialogPromptViewController;
  // Forward declaring type: FadeInOutController
  class FadeInOutController;
  // Forward declaring type: GameScenesManager
  class GameScenesManager;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x110
  #pragma pack(push, 1)
  // Autogenerated type: HealthWarningFlowCoordinator
  class HealthWarningFlowCoordinator : public HMUI::FlowCoordinator {
    public:
    // Nested type: GlobalNamespace::HealthWarningFlowCoordinator::InitData
    class InitData;
    // [InjectAttribute] Offset: 0xE22700
    // private readonly PlayerDataModel _playerDataModel
    // Size: 0x8
    // Offset: 0xA8
    GlobalNamespace::PlayerDataModel* playerDataModel;
    // Field size check
    static_assert(sizeof(GlobalNamespace::PlayerDataModel*) == 0x8);
    // [InjectAttribute] Offset: 0xE22710
    // private readonly DlcPromoExperimentModel _dlcPromoExperimentModel
    // Size: 0x8
    // Offset: 0xB0
    GlobalNamespace::DlcPromoExperimentModel* dlcPromoExperimentModel;
    // Field size check
    static_assert(sizeof(GlobalNamespace::DlcPromoExperimentModel*) == 0x8);
    // [SpaceAttribute] Offset: 0xE22720
    // private EulaViewController _eulaViewController
    // Size: 0x8
    // Offset: 0xB8
    GlobalNamespace::EulaViewController* eulaViewController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::EulaViewController*) == 0x8);
    // private HealthWarningViewController _healthWarningViewController
    // Size: 0x8
    // Offset: 0xC0
    GlobalNamespace::HealthWarningViewController* healthWarningViewController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::HealthWarningViewController*) == 0x8);
    // private PrivacyPolicyViewController _privacyPolicyViewController
    // Size: 0x8
    // Offset: 0xC8
    GlobalNamespace::PrivacyPolicyViewController* privacyPolicyViewController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::PrivacyPolicyViewController*) == 0x8);
    // private SelectLanguageViewController _selectLanguageViewController
    // Size: 0x8
    // Offset: 0xD0
    GlobalNamespace::SelectLanguageViewController* selectLanguageViewController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::SelectLanguageViewController*) == 0x8);
    // private MainSettingsModelSO _mainSettingsModel
    // Size: 0x8
    // Offset: 0xD8
    GlobalNamespace::MainSettingsModelSO* mainSettingsModel;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MainSettingsModelSO*) == 0x8);
    // [SpaceAttribute] Offset: 0xE22798
    // private AppInitScenesTransitionSetupDataContainerSO _appInitScenesTransitionSetupDataContainer
    // Size: 0x8
    // Offset: 0xE0
    GlobalNamespace::AppInitScenesTransitionSetupDataContainerSO* appInitScenesTransitionSetupDataContainer;
    // Field size check
    static_assert(sizeof(GlobalNamespace::AppInitScenesTransitionSetupDataContainerSO*) == 0x8);
    // [InjectAttribute] Offset: 0xE227D0
    // private readonly SimpleDialogPromptViewController _simpleDialogPromptViewController
    // Size: 0x8
    // Offset: 0xE8
    GlobalNamespace::SimpleDialogPromptViewController* simpleDialogPromptViewController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::SimpleDialogPromptViewController*) == 0x8);
    // [InjectAttribute] Offset: 0xE227E0
    // private readonly FadeInOutController _fadeInOut
    // Size: 0x8
    // Offset: 0xF0
    GlobalNamespace::FadeInOutController* fadeInOut;
    // Field size check
    static_assert(sizeof(GlobalNamespace::FadeInOutController*) == 0x8);
    // [InjectAttribute] Offset: 0xE227F0
    // private readonly GameScenesManager _gameScenesManager
    // Size: 0x8
    // Offset: 0xF8
    GlobalNamespace::GameScenesManager* gameScenesManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::GameScenesManager*) == 0x8);
    // [InjectAttribute] Offset: 0xE22800
    // private readonly HealthWarningFlowCoordinator/InitData _initData
    // Size: 0x8
    // Offset: 0x100
    GlobalNamespace::HealthWarningFlowCoordinator::InitData* initData;
    // Field size check
    static_assert(sizeof(GlobalNamespace::HealthWarningFlowCoordinator::InitData*) == 0x8);
    // private System.Collections.Generic.Dictionary`2<HMUI.ViewController,System.String> _viewControllerTitles
    // Size: 0x8
    // Offset: 0x108
    System::Collections::Generic::Dictionary_2<HMUI::ViewController*, ::Il2CppString*>* viewControllerTitles;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::Dictionary_2<HMUI::ViewController*, ::Il2CppString*>*) == 0x8);
    // Creating value type constructor for type: HealthWarningFlowCoordinator
    HealthWarningFlowCoordinator(GlobalNamespace::PlayerDataModel* playerDataModel_ = {}, GlobalNamespace::DlcPromoExperimentModel* dlcPromoExperimentModel_ = {}, GlobalNamespace::EulaViewController* eulaViewController_ = {}, GlobalNamespace::HealthWarningViewController* healthWarningViewController_ = {}, GlobalNamespace::PrivacyPolicyViewController* privacyPolicyViewController_ = {}, GlobalNamespace::SelectLanguageViewController* selectLanguageViewController_ = {}, GlobalNamespace::MainSettingsModelSO* mainSettingsModel_ = {}, GlobalNamespace::AppInitScenesTransitionSetupDataContainerSO* appInitScenesTransitionSetupDataContainer_ = {}, GlobalNamespace::SimpleDialogPromptViewController* simpleDialogPromptViewController_ = {}, GlobalNamespace::FadeInOutController* fadeInOut_ = {}, GlobalNamespace::GameScenesManager* gameScenesManager_ = {}, GlobalNamespace::HealthWarningFlowCoordinator::InitData* initData_ = {}, System::Collections::Generic::Dictionary_2<HMUI::ViewController*, ::Il2CppString*>* viewControllerTitles_ = {}) noexcept : playerDataModel{playerDataModel_}, dlcPromoExperimentModel{dlcPromoExperimentModel_}, eulaViewController{eulaViewController_}, healthWarningViewController{healthWarningViewController_}, privacyPolicyViewController{privacyPolicyViewController_}, selectLanguageViewController{selectLanguageViewController_}, mainSettingsModel{mainSettingsModel_}, appInitScenesTransitionSetupDataContainer{appInitScenesTransitionSetupDataContainer_}, simpleDialogPromptViewController{simpleDialogPromptViewController_}, fadeInOut{fadeInOut_}, gameScenesManager{gameScenesManager_}, initData{initData_}, viewControllerTitles{viewControllerTitles_} {}
    // private HMUI.ViewController GetEulaOrHealthWarningViewController()
    // Offset: 0x10BBE08
    HMUI::ViewController* GetEulaOrHealthWarningViewController();
    // protected System.Void Update()
    // Offset: 0x10BC25C
    void Update();
    // private System.Void HandleSelectLanguageViewControllerDidChangeLanguage()
    // Offset: 0x10BC29C
    void HandleSelectLanguageViewControllerDidChangeLanguage();
    // private System.Void HandleSelectLanguageViewControllerDidPressContinueButton()
    // Offset: 0x10BC324
    void HandleSelectLanguageViewControllerDidPressContinueButton();
    // private System.Void HandleEulaViewControllerDidFinish(System.Boolean agreed)
    // Offset: 0x10BC37C
    void HandleEulaViewControllerDidFinish(bool agreed);
    // private System.Void HandleHealthWarningViewControllerPrivacyPolicyButtonPressed()
    // Offset: 0x10BC3F0
    void HandleHealthWarningViewControllerPrivacyPolicyButtonPressed();
    // private System.Void HandleHealthWarningViewControllerOpenDataPrivacyPolicyButtonPressed()
    // Offset: 0x10BC408
    void HandleHealthWarningViewControllerOpenDataPrivacyPolicyButtonPressed();
    // private System.Void HandleHealthWarningViewControllerDidFinish()
    // Offset: 0x10BC298
    void HandleHealthWarningViewControllerDidFinish();
    // private System.Void GoToNextScene()
    // Offset: 0x10BC4DC
    void GoToNextScene();
    // private System.Void <HandleHealthWarningViewControllerOpenDataPrivacyPolicyButtonPressed>b__23_0(System.Int32 button)
    // Offset: 0x10BC5EC
    void $HandleHealthWarningViewControllerOpenDataPrivacyPolicyButtonPressed$b__23_0(int button);
    // protected override System.Void DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    // Offset: 0x10BB8D4
    // Implemented from: HMUI.FlowCoordinator
    // Base method: System.Void FlowCoordinator::DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);
    // protected override System.Void DidDeactivate(System.Boolean removedFromHierarchy, System.Boolean screenSystemDisabling)
    // Offset: 0x10BBE40
    // Implemented from: HMUI.FlowCoordinator
    // Base method: System.Void FlowCoordinator::DidDeactivate(System.Boolean removedFromHierarchy, System.Boolean screenSystemDisabling)
    void DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling);
    // protected override System.Void TopViewControllerWillChange(HMUI.ViewController oldViewController, HMUI.ViewController newViewController, HMUI.ViewController/AnimationType animationType)
    // Offset: 0x10BC188
    // Implemented from: HMUI.FlowCoordinator
    // Base method: System.Void FlowCoordinator::TopViewControllerWillChange(HMUI.ViewController oldViewController, HMUI.ViewController newViewController, HMUI.ViewController/AnimationType animationType)
    void TopViewControllerWillChange(HMUI::ViewController* oldViewController, HMUI::ViewController* newViewController, HMUI::ViewController::AnimationType animationType);
    // protected override System.Void BackButtonWasPressed(HMUI.ViewController topViewController)
    // Offset: 0x10BC538
    // Implemented from: HMUI.FlowCoordinator
    // Base method: System.Void FlowCoordinator::BackButtonWasPressed(HMUI.ViewController topViewController)
    void BackButtonWasPressed(HMUI::ViewController* topViewController);
    // public System.Void .ctor()
    // Offset: 0x10BC5E4
    // Implemented from: HMUI.FlowCoordinator
    // Base method: System.Void FlowCoordinator::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HealthWarningFlowCoordinator* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::HealthWarningFlowCoordinator::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HealthWarningFlowCoordinator*, creationType>()));
    }
  }; // HealthWarningFlowCoordinator
  #pragma pack(pop)
  static check_size<sizeof(HealthWarningFlowCoordinator), 264 + sizeof(System::Collections::Generic::Dictionary_2<HMUI::ViewController*, ::Il2CppString*>*)> __GlobalNamespace_HealthWarningFlowCoordinatorSizeCheck;
  static_assert(sizeof(HealthWarningFlowCoordinator) == 0x110);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::HealthWarningFlowCoordinator*, "", "HealthWarningFlowCoordinator");
// Writing MetadataGetter for method: GlobalNamespace::HealthWarningFlowCoordinator::GetEulaOrHealthWarningViewController
// Il2CppName: GetEulaOrHealthWarningViewController
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<HMUI::ViewController* (GlobalNamespace::HealthWarningFlowCoordinator::*)()>(&GlobalNamespace::HealthWarningFlowCoordinator::GetEulaOrHealthWarningViewController)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::HealthWarningFlowCoordinator*), "GetEulaOrHealthWarningViewController", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::HealthWarningFlowCoordinator::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::HealthWarningFlowCoordinator::*)()>(&GlobalNamespace::HealthWarningFlowCoordinator::Update)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::HealthWarningFlowCoordinator*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::HealthWarningFlowCoordinator::HandleSelectLanguageViewControllerDidChangeLanguage
// Il2CppName: HandleSelectLanguageViewControllerDidChangeLanguage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::HealthWarningFlowCoordinator::*)()>(&GlobalNamespace::HealthWarningFlowCoordinator::HandleSelectLanguageViewControllerDidChangeLanguage)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::HealthWarningFlowCoordinator*), "HandleSelectLanguageViewControllerDidChangeLanguage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::HealthWarningFlowCoordinator::HandleSelectLanguageViewControllerDidPressContinueButton
// Il2CppName: HandleSelectLanguageViewControllerDidPressContinueButton
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::HealthWarningFlowCoordinator::*)()>(&GlobalNamespace::HealthWarningFlowCoordinator::HandleSelectLanguageViewControllerDidPressContinueButton)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::HealthWarningFlowCoordinator*), "HandleSelectLanguageViewControllerDidPressContinueButton", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::HealthWarningFlowCoordinator::HandleEulaViewControllerDidFinish
// Il2CppName: HandleEulaViewControllerDidFinish
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::HealthWarningFlowCoordinator::*)(bool)>(&GlobalNamespace::HealthWarningFlowCoordinator::HandleEulaViewControllerDidFinish)> {
  const MethodInfo* get() {
    static auto* agreed = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::HealthWarningFlowCoordinator*), "HandleEulaViewControllerDidFinish", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{agreed});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::HealthWarningFlowCoordinator::HandleHealthWarningViewControllerPrivacyPolicyButtonPressed
// Il2CppName: HandleHealthWarningViewControllerPrivacyPolicyButtonPressed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::HealthWarningFlowCoordinator::*)()>(&GlobalNamespace::HealthWarningFlowCoordinator::HandleHealthWarningViewControllerPrivacyPolicyButtonPressed)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::HealthWarningFlowCoordinator*), "HandleHealthWarningViewControllerPrivacyPolicyButtonPressed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::HealthWarningFlowCoordinator::HandleHealthWarningViewControllerOpenDataPrivacyPolicyButtonPressed
// Il2CppName: HandleHealthWarningViewControllerOpenDataPrivacyPolicyButtonPressed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::HealthWarningFlowCoordinator::*)()>(&GlobalNamespace::HealthWarningFlowCoordinator::HandleHealthWarningViewControllerOpenDataPrivacyPolicyButtonPressed)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::HealthWarningFlowCoordinator*), "HandleHealthWarningViewControllerOpenDataPrivacyPolicyButtonPressed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::HealthWarningFlowCoordinator::HandleHealthWarningViewControllerDidFinish
// Il2CppName: HandleHealthWarningViewControllerDidFinish
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::HealthWarningFlowCoordinator::*)()>(&GlobalNamespace::HealthWarningFlowCoordinator::HandleHealthWarningViewControllerDidFinish)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::HealthWarningFlowCoordinator*), "HandleHealthWarningViewControllerDidFinish", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::HealthWarningFlowCoordinator::GoToNextScene
// Il2CppName: GoToNextScene
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::HealthWarningFlowCoordinator::*)()>(&GlobalNamespace::HealthWarningFlowCoordinator::GoToNextScene)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::HealthWarningFlowCoordinator*), "GoToNextScene", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::HealthWarningFlowCoordinator::$HandleHealthWarningViewControllerOpenDataPrivacyPolicyButtonPressed$b__23_0
// Il2CppName: <HandleHealthWarningViewControllerOpenDataPrivacyPolicyButtonPressed>b__23_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::HealthWarningFlowCoordinator::*)(int)>(&GlobalNamespace::HealthWarningFlowCoordinator::$HandleHealthWarningViewControllerOpenDataPrivacyPolicyButtonPressed$b__23_0)> {
  const MethodInfo* get() {
    static auto* button = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::HealthWarningFlowCoordinator*), "<HandleHealthWarningViewControllerOpenDataPrivacyPolicyButtonPressed>b__23_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{button});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::HealthWarningFlowCoordinator::DidActivate
// Il2CppName: DidActivate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::HealthWarningFlowCoordinator::*)(bool, bool, bool)>(&GlobalNamespace::HealthWarningFlowCoordinator::DidActivate)> {
  const MethodInfo* get() {
    static auto* firstActivation = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* addedToHierarchy = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* screenSystemEnabling = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::HealthWarningFlowCoordinator*), "DidActivate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{firstActivation, addedToHierarchy, screenSystemEnabling});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::HealthWarningFlowCoordinator::DidDeactivate
// Il2CppName: DidDeactivate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::HealthWarningFlowCoordinator::*)(bool, bool)>(&GlobalNamespace::HealthWarningFlowCoordinator::DidDeactivate)> {
  const MethodInfo* get() {
    static auto* removedFromHierarchy = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* screenSystemDisabling = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::HealthWarningFlowCoordinator*), "DidDeactivate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{removedFromHierarchy, screenSystemDisabling});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::HealthWarningFlowCoordinator::TopViewControllerWillChange
// Il2CppName: TopViewControllerWillChange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::HealthWarningFlowCoordinator::*)(HMUI::ViewController*, HMUI::ViewController*, HMUI::ViewController::AnimationType)>(&GlobalNamespace::HealthWarningFlowCoordinator::TopViewControllerWillChange)> {
  const MethodInfo* get() {
    static auto* oldViewController = &::il2cpp_utils::GetClassFromName("HMUI", "ViewController")->byval_arg;
    static auto* newViewController = &::il2cpp_utils::GetClassFromName("HMUI", "ViewController")->byval_arg;
    static auto* animationType = &::il2cpp_utils::GetClassFromName("HMUI", "ViewController/AnimationType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::HealthWarningFlowCoordinator*), "TopViewControllerWillChange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{oldViewController, newViewController, animationType});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::HealthWarningFlowCoordinator::BackButtonWasPressed
// Il2CppName: BackButtonWasPressed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::HealthWarningFlowCoordinator::*)(HMUI::ViewController*)>(&GlobalNamespace::HealthWarningFlowCoordinator::BackButtonWasPressed)> {
  const MethodInfo* get() {
    static auto* topViewController = &::il2cpp_utils::GetClassFromName("HMUI", "ViewController")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::HealthWarningFlowCoordinator*), "BackButtonWasPressed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{topViewController});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::HealthWarningFlowCoordinator::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
