// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: LevelSelectionFlowCoordinator
#include "GlobalNamespace/LevelSelectionFlowCoordinator.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BeatmapCharacteristicSO
  class BeatmapCharacteristicSO;
  // Forward declaring type: PracticeViewController
  class PracticeViewController;
  // Forward declaring type: GameplaySetupViewController
  class GameplaySetupViewController;
  // Forward declaring type: MenuTransitionsHelper
  class MenuTransitionsHelper;
  // Forward declaring type: IVRPlatformHelper
  class IVRPlatformHelper;
  // Forward declaring type: AppStaticSettingsSO
  class AppStaticSettingsSO;
  // Forward declaring type: SimpleDialogPromptViewController
  class SimpleDialogPromptViewController;
  // Forward declaring type: PlayerSpecificSettings
  class PlayerSpecificSettings;
  // Forward declaring type: GameplayModifiers
  class GameplayModifiers;
  // Forward declaring type: LeaderboardViewController
  class LeaderboardViewController;
  // Forward declaring type: LevelCompletionResults
  class LevelCompletionResults;
  // Forward declaring type: IDifficultyBeatmap
  class IDifficultyBeatmap;
  // Forward declaring type: StandardLevelScenesTransitionSetupDataSO
  class StandardLevelScenesTransitionSetupDataSO;
  // Forward declaring type: IBeatmapLevelPack
  class IBeatmapLevelPack;
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
  // Size: 0x110
  #pragma pack(push, 1)
  // Autogenerated type: SinglePlayerLevelSelectionFlowCoordinator
  class SinglePlayerLevelSelectionFlowCoordinator : public GlobalNamespace::LevelSelectionFlowCoordinator {
    public:
    // Nested type: GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::$$c__DisplayClass37_0
    class $$c__DisplayClass37_0;
    // private BeatmapCharacteristicSO _degree360BeatmapCharacteristic
    // Size: 0x8
    // Offset: 0xD0
    GlobalNamespace::BeatmapCharacteristicSO* degree360BeatmapCharacteristic;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapCharacteristicSO*) == 0x8);
    // [InjectAttribute] Offset: 0xE23298
    // private readonly PracticeViewController _practiceViewController
    // Size: 0x8
    // Offset: 0xD8
    GlobalNamespace::PracticeViewController* practiceViewController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::PracticeViewController*) == 0x8);
    // [InjectAttribute] Offset: 0xE232A8
    // private readonly GameplaySetupViewController _gameplaySetupViewController
    // Size: 0x8
    // Offset: 0xE0
    GlobalNamespace::GameplaySetupViewController* gameplaySetupViewController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::GameplaySetupViewController*) == 0x8);
    // [InjectAttribute] Offset: 0xE232B8
    // private readonly MenuTransitionsHelper _menuTransitionsHelper
    // Size: 0x8
    // Offset: 0xE8
    GlobalNamespace::MenuTransitionsHelper* menuTransitionsHelper;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MenuTransitionsHelper*) == 0x8);
    // [InjectAttribute] Offset: 0xE232C8
    // private readonly IVRPlatformHelper _vrPlatformHelper
    // Size: 0x8
    // Offset: 0xF0
    GlobalNamespace::IVRPlatformHelper* vrPlatformHelper;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IVRPlatformHelper*) == 0x8);
    // [InjectAttribute] Offset: 0xE232D8
    // private readonly AppStaticSettingsSO _appStaticSettings
    // Size: 0x8
    // Offset: 0xF8
    GlobalNamespace::AppStaticSettingsSO* appStaticSettings;
    // Field size check
    static_assert(sizeof(GlobalNamespace::AppStaticSettingsSO*) == 0x8);
    // [InjectAttribute] Offset: 0xE232E8
    // private readonly SimpleDialogPromptViewController _simpleDialogPromptViewController
    // Size: 0x8
    // Offset: 0x100
    GlobalNamespace::SimpleDialogPromptViewController* simpleDialogPromptViewController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::SimpleDialogPromptViewController*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xE232F8
    // private System.Action`1<SinglePlayerLevelSelectionFlowCoordinator> didFinishEvent
    // Size: 0x8
    // Offset: 0x108
    System::Action_1<GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator*>* didFinishEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator*>*) == 0x8);
    // Creating value type constructor for type: SinglePlayerLevelSelectionFlowCoordinator
    SinglePlayerLevelSelectionFlowCoordinator(GlobalNamespace::BeatmapCharacteristicSO* degree360BeatmapCharacteristic_ = {}, GlobalNamespace::PracticeViewController* practiceViewController_ = {}, GlobalNamespace::GameplaySetupViewController* gameplaySetupViewController_ = {}, GlobalNamespace::MenuTransitionsHelper* menuTransitionsHelper_ = {}, GlobalNamespace::IVRPlatformHelper* vrPlatformHelper_ = {}, GlobalNamespace::AppStaticSettingsSO* appStaticSettings_ = {}, GlobalNamespace::SimpleDialogPromptViewController* simpleDialogPromptViewController_ = {}, System::Action_1<GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator*>* didFinishEvent_ = {}) noexcept : degree360BeatmapCharacteristic{degree360BeatmapCharacteristic_}, practiceViewController{practiceViewController_}, gameplaySetupViewController{gameplaySetupViewController_}, menuTransitionsHelper{menuTransitionsHelper_}, vrPlatformHelper{vrPlatformHelper_}, appStaticSettings{appStaticSettings_}, simpleDialogPromptViewController{simpleDialogPromptViewController_}, didFinishEvent{didFinishEvent_} {}
    // protected System.String get_gameMode()
    // Offset: 0xFFFFFFFF
    ::Il2CppString* get_gameMode();
    // protected System.Boolean get_isInPracticeView()
    // Offset: 0x10DE638
    bool get_isInPracticeView();
    // protected PlayerSpecificSettings get_playerSettings()
    // Offset: 0x10E1450
    GlobalNamespace::PlayerSpecificSettings* get_playerSettings();
    // private GameplayModifiers get_gameplayModifiers()
    // Offset: 0x10E1488
    GlobalNamespace::GameplayModifiers* get_gameplayModifiers();
    // protected System.Boolean get_hideGameplaySetup()
    // Offset: 0x10E14A4
    bool get_hideGameplaySetup();
    // protected LeaderboardViewController get_leaderboardViewController()
    // Offset: 0x10E14AC
    GlobalNamespace::LeaderboardViewController* get_leaderboardViewController();
    // protected System.Void SinglePlayerLevelSelectionFlowCoordinatorDidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy)
    // Offset: 0x10E14F8
    void SinglePlayerLevelSelectionFlowCoordinatorDidActivate(bool firstActivation, bool addedToHierarchy);
    // protected System.Void SinglePlayerLevelSelectionFlowCoordinatorDidDeactivate(System.Boolean removedFromHierarchy)
    // Offset: 0x10E14FC
    void SinglePlayerLevelSelectionFlowCoordinatorDidDeactivate(bool removedFromHierarchy);
    // protected System.Void ProcessLevelCompletionResultsAfterLevelDidFinish(LevelCompletionResults levelCompletionResults, IDifficultyBeatmap difficultyBeatmap, GameplayModifiers gameplayModifiers, System.Boolean practice)
    // Offset: 0x10E1500
    void ProcessLevelCompletionResultsAfterLevelDidFinish(GlobalNamespace::LevelCompletionResults* levelCompletionResults, GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap, GlobalNamespace::GameplayModifiers* gameplayModifiers, bool practice);
    // public System.Void add_didFinishEvent(System.Action`1<SinglePlayerLevelSelectionFlowCoordinator> value)
    // Offset: 0x10E1504
    void add_didFinishEvent(System::Action_1<GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator*>* value);
    // public System.Void remove_didFinishEvent(System.Action`1<SinglePlayerLevelSelectionFlowCoordinator> value)
    // Offset: 0x10E15AC
    void remove_didFinishEvent(System::Action_1<GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator*>* value);
    // private System.Void StartLevelOrShow360Prompt(System.Action beforeSceneSwitchCallback, System.Boolean practice)
    // Offset: 0x10E19F8
    void StartLevelOrShow360Prompt(System::Action* beforeSceneSwitchCallback, bool practice);
    // public System.Void StartLevel(System.Action beforeSceneSwitchCallback, System.Boolean practice)
    // Offset: 0x10DE39C
    void StartLevel(System::Action* beforeSceneSwitchCallback, bool practice);
    // private System.Void HandlePracticeViewControllerDidPressPlayButton()
    // Offset: 0x10E2068
    void HandlePracticeViewControllerDidPressPlayButton();
    // private System.Void HandleStandardLevelDidFinish(StandardLevelScenesTransitionSetupDataSO standardLevelScenesTransitionSetupData, LevelCompletionResults levelCompletionResults)
    // Offset: 0x10E2074
    void HandleStandardLevelDidFinish(GlobalNamespace::StandardLevelScenesTransitionSetupDataSO* standardLevelScenesTransitionSetupData, GlobalNamespace::LevelCompletionResults* levelCompletionResults);
    // protected System.Void SetupGameplaySetupViewController(System.Boolean showModifiers, System.Boolean showEnvironmentOverrideSettings, System.Boolean showColorSchemesSettings)
    // Offset: 0x10DDD54
    void SetupGameplaySetupViewController(bool showModifiers, bool showEnvironmentOverrideSettings, bool showColorSchemesSettings);
    // protected System.Boolean HandleBasicLevelCompletionResults(LevelCompletionResults levelCompletionResults, System.Boolean practice)
    // Offset: 0x10DE110
    bool HandleBasicLevelCompletionResults(GlobalNamespace::LevelCompletionResults* levelCompletionResults, bool practice);
    // protected System.Void DismissPracticeViewController(System.Action finishedCallback, System.Boolean immediately)
    // Offset: 0x10DE6BC
    void DismissPracticeViewController(System::Action* finishedCallback, bool immediately);
    // protected override System.Boolean get_enableCustomLevels()
    // Offset: 0x10E146C
    // Implemented from: LevelSelectionFlowCoordinator
    // Base method: System.Boolean LevelSelectionFlowCoordinator::get_enableCustomLevels()
    bool get_enableCustomLevels();
    // protected override HMUI.ViewController get_initialTopScreenViewController()
    // Offset: 0x10E14B4
    // Implemented from: LevelSelectionFlowCoordinator
    // Base method: HMUI.ViewController LevelSelectionFlowCoordinator::get_initialTopScreenViewController()
    HMUI::ViewController* get_initialTopScreenViewController();
    // protected override HMUI.ViewController get_initialLeftScreenViewController()
    // Offset: 0x10E14BC
    // Implemented from: LevelSelectionFlowCoordinator
    // Base method: HMUI.ViewController LevelSelectionFlowCoordinator::get_initialLeftScreenViewController()
    HMUI::ViewController* get_initialLeftScreenViewController();
    // protected override System.Void LevelSelectionFlowCoordinatorDidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy)
    // Offset: 0x10E1654
    // Implemented from: LevelSelectionFlowCoordinator
    // Base method: System.Void LevelSelectionFlowCoordinator::LevelSelectionFlowCoordinatorDidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy)
    void LevelSelectionFlowCoordinatorDidActivate(bool firstActivation, bool addedToHierarchy);
    // protected override System.Void LevelSelectionFlowCoordinatorDidDeactivate(System.Boolean removedFromHierarchy)
    // Offset: 0x10E1710
    // Implemented from: LevelSelectionFlowCoordinator
    // Base method: System.Void LevelSelectionFlowCoordinator::LevelSelectionFlowCoordinatorDidDeactivate(System.Boolean removedFromHierarchy)
    void LevelSelectionFlowCoordinatorDidDeactivate(bool removedFromHierarchy);
    // protected override System.Void LevelSelectionFlowCoordinatorTopViewControllerWillChange(HMUI.ViewController oldViewController, HMUI.ViewController newViewController, HMUI.ViewController/AnimationType animationType)
    // Offset: 0x10E17BC
    // Implemented from: LevelSelectionFlowCoordinator
    // Base method: System.Void LevelSelectionFlowCoordinator::LevelSelectionFlowCoordinatorTopViewControllerWillChange(HMUI.ViewController oldViewController, HMUI.ViewController newViewController, HMUI.ViewController/AnimationType animationType)
    void LevelSelectionFlowCoordinatorTopViewControllerWillChange(HMUI::ViewController* oldViewController, HMUI::ViewController* newViewController, HMUI::ViewController::AnimationType animationType);
    // protected override System.Void ActionButtonWasPressed()
    // Offset: 0x10E19EC
    // Implemented from: LevelSelectionFlowCoordinator
    // Base method: System.Void LevelSelectionFlowCoordinator::ActionButtonWasPressed()
    void ActionButtonWasPressed();
    // protected override System.Void PracticeButtonWasPressed()
    // Offset: 0x10E1D6C
    // Implemented from: LevelSelectionFlowCoordinator
    // Base method: System.Void LevelSelectionFlowCoordinator::PracticeButtonWasPressed()
    void PracticeButtonWasPressed();
    // protected override System.Void SelectionDidChange(IBeatmapLevelPack pack, IDifficultyBeatmap beatmap)
    // Offset: 0x10E1FDC
    // Implemented from: LevelSelectionFlowCoordinator
    // Base method: System.Void LevelSelectionFlowCoordinator::SelectionDidChange(IBeatmapLevelPack pack, IDifficultyBeatmap beatmap)
    void SelectionDidChange(GlobalNamespace::IBeatmapLevelPack* pack, GlobalNamespace::IDifficultyBeatmap* beatmap);
    // protected override System.Void BackButtonWasPressed(HMUI.ViewController topViewController)
    // Offset: 0x10E2120
    // Implemented from: HMUI.FlowCoordinator
    // Base method: System.Void FlowCoordinator::BackButtonWasPressed(HMUI.ViewController topViewController)
    void BackButtonWasPressed(HMUI::ViewController* topViewController);
    // protected System.Void .ctor()
    // Offset: 0x10DE794
    // Implemented from: LevelSelectionFlowCoordinator
    // Base method: System.Void LevelSelectionFlowCoordinator::.ctor()
    // Base method: System.Void FlowCoordinator::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SinglePlayerLevelSelectionFlowCoordinator* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SinglePlayerLevelSelectionFlowCoordinator*, creationType>()));
    }
  }; // SinglePlayerLevelSelectionFlowCoordinator
  #pragma pack(pop)
  static check_size<sizeof(SinglePlayerLevelSelectionFlowCoordinator), 264 + sizeof(System::Action_1<GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator*>*)> __GlobalNamespace_SinglePlayerLevelSelectionFlowCoordinatorSizeCheck;
  static_assert(sizeof(SinglePlayerLevelSelectionFlowCoordinator) == 0x110);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator*, "", "SinglePlayerLevelSelectionFlowCoordinator");
// Writing MetadataGetter for method: GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::get_gameMode
// Il2CppName: get_gameMode
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::get_isInPracticeView
// Il2CppName: get_isInPracticeView
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::get_playerSettings
// Il2CppName: get_playerSettings
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::get_gameplayModifiers
// Il2CppName: get_gameplayModifiers
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::get_hideGameplaySetup
// Il2CppName: get_hideGameplaySetup
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::get_leaderboardViewController
// Il2CppName: get_leaderboardViewController
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::SinglePlayerLevelSelectionFlowCoordinatorDidActivate
// Il2CppName: SinglePlayerLevelSelectionFlowCoordinatorDidActivate
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::SinglePlayerLevelSelectionFlowCoordinatorDidDeactivate
// Il2CppName: SinglePlayerLevelSelectionFlowCoordinatorDidDeactivate
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::ProcessLevelCompletionResultsAfterLevelDidFinish
// Il2CppName: ProcessLevelCompletionResultsAfterLevelDidFinish
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::add_didFinishEvent
// Il2CppName: add_didFinishEvent
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::remove_didFinishEvent
// Il2CppName: remove_didFinishEvent
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::StartLevelOrShow360Prompt
// Il2CppName: StartLevelOrShow360Prompt
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::StartLevel
// Il2CppName: StartLevel
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::HandlePracticeViewControllerDidPressPlayButton
// Il2CppName: HandlePracticeViewControllerDidPressPlayButton
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::HandleStandardLevelDidFinish
// Il2CppName: HandleStandardLevelDidFinish
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::SetupGameplaySetupViewController
// Il2CppName: SetupGameplaySetupViewController
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::HandleBasicLevelCompletionResults
// Il2CppName: HandleBasicLevelCompletionResults
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::DismissPracticeViewController
// Il2CppName: DismissPracticeViewController
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::get_enableCustomLevels
// Il2CppName: get_enableCustomLevels
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::get_initialTopScreenViewController
// Il2CppName: get_initialTopScreenViewController
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::get_initialLeftScreenViewController
// Il2CppName: get_initialLeftScreenViewController
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::LevelSelectionFlowCoordinatorDidActivate
// Il2CppName: LevelSelectionFlowCoordinatorDidActivate
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::LevelSelectionFlowCoordinatorDidDeactivate
// Il2CppName: LevelSelectionFlowCoordinatorDidDeactivate
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::LevelSelectionFlowCoordinatorTopViewControllerWillChange
// Il2CppName: LevelSelectionFlowCoordinatorTopViewControllerWillChange
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::ActionButtonWasPressed
// Il2CppName: ActionButtonWasPressed
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::PracticeButtonWasPressed
// Il2CppName: PracticeButtonWasPressed
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::SelectionDidChange
// Il2CppName: SelectionDidChange
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::BackButtonWasPressed
// Il2CppName: BackButtonWasPressed
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
