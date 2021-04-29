// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: DisconnectedReason
#include "GlobalNamespace/DisconnectedReason.hpp"
// Including type: TutorialScenesTransitionSetupDataSO
#include "GlobalNamespace/TutorialScenesTransitionSetupDataSO.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: AppInitScenesTransitionSetupDataContainerSO
  class AppInitScenesTransitionSetupDataContainerSO;
  // Forward declaring type: StandardLevelScenesTransitionSetupDataSO
  class StandardLevelScenesTransitionSetupDataSO;
  // Forward declaring type: MultiplayerLevelScenesTransitionSetupDataSO
  class MultiplayerLevelScenesTransitionSetupDataSO;
  // Forward declaring type: MissionLevelScenesTransitionSetupDataSO
  class MissionLevelScenesTransitionSetupDataSO;
  // Forward declaring type: CreditsScenesTransitionSetupDataSO
  class CreditsScenesTransitionSetupDataSO;
  // Forward declaring type: BeatmapEditorScenesTransitionSetupDataSO
  class BeatmapEditorScenesTransitionSetupDataSO;
  // Forward declaring type: MainSettingsModelSO
  class MainSettingsModelSO;
  // Forward declaring type: GameScenesManager
  class GameScenesManager;
  // Forward declaring type: LevelCompletionResults
  class LevelCompletionResults;
  // Forward declaring type: MultiplayerResultsData
  class MultiplayerResultsData;
  // Forward declaring type: MissionCompletionResults
  class MissionCompletionResults;
  // Forward declaring type: IDifficultyBeatmap
  class IDifficultyBeatmap;
  // Forward declaring type: IPreviewBeatmapLevel
  class IPreviewBeatmapLevel;
  // Forward declaring type: OverrideEnvironmentSettings
  class OverrideEnvironmentSettings;
  // Forward declaring type: ColorScheme
  class ColorScheme;
  // Forward declaring type: GameplayModifiers
  class GameplayModifiers;
  // Forward declaring type: PlayerSpecificSettings
  class PlayerSpecificSettings;
  // Forward declaring type: PracticeSettings
  class PracticeSettings;
  // Forward declaring type: MissionObjective
  class MissionObjective;
  // Forward declaring type: BeatmapDifficulty
  struct BeatmapDifficulty;
  // Forward declaring type: BeatmapCharacteristicSO
  class BeatmapCharacteristicSO;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`2<T1, T2>
  template<typename T1, typename T2>
  class Action_2;
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
  // Forward declaring type: Action
  class Action;
}
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: DiContainer
  class DiContainer;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x88
  #pragma pack(push, 1)
  // Autogenerated type: MenuTransitionsHelper
  class MenuTransitionsHelper : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::MenuTransitionsHelper::$$c
    class $$c;
    // Nested type: GlobalNamespace::MenuTransitionsHelper::$$c__DisplayClass23_0
    class $$c__DisplayClass23_0;
    // Nested type: GlobalNamespace::MenuTransitionsHelper::$$c__DisplayClass24_0
    class $$c__DisplayClass24_0;
    // Nested type: GlobalNamespace::MenuTransitionsHelper::$$c__DisplayClass25_0
    class $$c__DisplayClass25_0;
    // Nested type: GlobalNamespace::MenuTransitionsHelper::$$c__DisplayClass26_0
    class $$c__DisplayClass26_0;
    // Nested type: GlobalNamespace::MenuTransitionsHelper::$$c__DisplayClass27_0
    class $$c__DisplayClass27_0;
    // private AppInitScenesTransitionSetupDataContainerSO _appInitScenesTransitionSetupDataContainer
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::AppInitScenesTransitionSetupDataContainerSO* appInitScenesTransitionSetupDataContainer;
    // Field size check
    static_assert(sizeof(GlobalNamespace::AppInitScenesTransitionSetupDataContainerSO*) == 0x8);
    // private StandardLevelScenesTransitionSetupDataSO _standardLevelScenesTransitionSetupData
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::StandardLevelScenesTransitionSetupDataSO* standardLevelScenesTransitionSetupData;
    // Field size check
    static_assert(sizeof(GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*) == 0x8);
    // private MultiplayerLevelScenesTransitionSetupDataSO _multiplayerLevelScenesTransitionSetupData
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO* multiplayerLevelScenesTransitionSetupData;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO*) == 0x8);
    // private MissionLevelScenesTransitionSetupDataSO _missionLevelScenesTransitionSetupData
    // Size: 0x8
    // Offset: 0x30
    GlobalNamespace::MissionLevelScenesTransitionSetupDataSO* missionLevelScenesTransitionSetupData;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MissionLevelScenesTransitionSetupDataSO*) == 0x8);
    // private TutorialScenesTransitionSetupDataSO _tutorialScenesTransitionSetupData
    // Size: 0x8
    // Offset: 0x38
    GlobalNamespace::TutorialScenesTransitionSetupDataSO* tutorialScenesTransitionSetupData;
    // Field size check
    static_assert(sizeof(GlobalNamespace::TutorialScenesTransitionSetupDataSO*) == 0x8);
    // private CreditsScenesTransitionSetupDataSO _creditsScenesTransitionSetupData
    // Size: 0x8
    // Offset: 0x40
    GlobalNamespace::CreditsScenesTransitionSetupDataSO* creditsScenesTransitionSetupData;
    // Field size check
    static_assert(sizeof(GlobalNamespace::CreditsScenesTransitionSetupDataSO*) == 0x8);
    // private BeatmapEditorScenesTransitionSetupDataSO _beatmapEditorScenesTransitionSetupData
    // Size: 0x8
    // Offset: 0x48
    GlobalNamespace::BeatmapEditorScenesTransitionSetupDataSO* beatmapEditorScenesTransitionSetupData;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapEditorScenesTransitionSetupDataSO*) == 0x8);
    // private MainSettingsModelSO _mainSettingsModel
    // Size: 0x8
    // Offset: 0x50
    GlobalNamespace::MainSettingsModelSO* mainSettingsModel;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MainSettingsModelSO*) == 0x8);
    // [InjectAttribute] Offset: 0xD479F4
    // private readonly GameScenesManager _gameScenesManager
    // Size: 0x8
    // Offset: 0x58
    GlobalNamespace::GameScenesManager* gameScenesManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::GameScenesManager*) == 0x8);
    // private System.Action`2<StandardLevelScenesTransitionSetupDataSO,LevelCompletionResults> _standardLevelFinishedCallback
    // Size: 0x8
    // Offset: 0x60
    System::Action_2<GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*, GlobalNamespace::LevelCompletionResults*>* standardLevelFinishedCallback;
    // Field size check
    static_assert(sizeof(System::Action_2<GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*, GlobalNamespace::LevelCompletionResults*>*) == 0x8);
    // private System.Action`2<MultiplayerLevelScenesTransitionSetupDataSO,MultiplayerResultsData> _multiplayerLevelFinishedCallback
    // Size: 0x8
    // Offset: 0x68
    System::Action_2<GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO*, GlobalNamespace::MultiplayerResultsData*>* multiplayerLevelFinishedCallback;
    // Field size check
    static_assert(sizeof(System::Action_2<GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO*, GlobalNamespace::MultiplayerResultsData*>*) == 0x8);
    // private System.Action`1<DisconnectedReason> _multiplayerDidDisconnectCallback
    // Size: 0x8
    // Offset: 0x70
    System::Action_1<GlobalNamespace::DisconnectedReason>* multiplayerDidDisconnectCallback;
    // Field size check
    static_assert(sizeof(System::Action_1<GlobalNamespace::DisconnectedReason>*) == 0x8);
    // private System.Action`2<MissionLevelScenesTransitionSetupDataSO,MissionCompletionResults> _missionLevelFinishedCallback
    // Size: 0x8
    // Offset: 0x78
    System::Action_2<GlobalNamespace::MissionLevelScenesTransitionSetupDataSO*, GlobalNamespace::MissionCompletionResults*>* missionLevelFinishedCallback;
    // Field size check
    static_assert(sizeof(System::Action_2<GlobalNamespace::MissionLevelScenesTransitionSetupDataSO*, GlobalNamespace::MissionCompletionResults*>*) == 0x8);
    // private System.Action _beatmapEditorFinishedCallback
    // Size: 0x8
    // Offset: 0x80
    System::Action* beatmapEditorFinishedCallback;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // Creating value type constructor for type: MenuTransitionsHelper
    MenuTransitionsHelper(GlobalNamespace::AppInitScenesTransitionSetupDataContainerSO* appInitScenesTransitionSetupDataContainer_ = {}, GlobalNamespace::StandardLevelScenesTransitionSetupDataSO* standardLevelScenesTransitionSetupData_ = {}, GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO* multiplayerLevelScenesTransitionSetupData_ = {}, GlobalNamespace::MissionLevelScenesTransitionSetupDataSO* missionLevelScenesTransitionSetupData_ = {}, GlobalNamespace::TutorialScenesTransitionSetupDataSO* tutorialScenesTransitionSetupData_ = {}, GlobalNamespace::CreditsScenesTransitionSetupDataSO* creditsScenesTransitionSetupData_ = {}, GlobalNamespace::BeatmapEditorScenesTransitionSetupDataSO* beatmapEditorScenesTransitionSetupData_ = {}, GlobalNamespace::MainSettingsModelSO* mainSettingsModel_ = {}, GlobalNamespace::GameScenesManager* gameScenesManager_ = {}, System::Action_2<GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*, GlobalNamespace::LevelCompletionResults*>* standardLevelFinishedCallback_ = {}, System::Action_2<GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO*, GlobalNamespace::MultiplayerResultsData*>* multiplayerLevelFinishedCallback_ = {}, System::Action_1<GlobalNamespace::DisconnectedReason>* multiplayerDidDisconnectCallback_ = {}, System::Action_2<GlobalNamespace::MissionLevelScenesTransitionSetupDataSO*, GlobalNamespace::MissionCompletionResults*>* missionLevelFinishedCallback_ = {}, System::Action* beatmapEditorFinishedCallback_ = {}) noexcept : appInitScenesTransitionSetupDataContainer{appInitScenesTransitionSetupDataContainer_}, standardLevelScenesTransitionSetupData{standardLevelScenesTransitionSetupData_}, multiplayerLevelScenesTransitionSetupData{multiplayerLevelScenesTransitionSetupData_}, missionLevelScenesTransitionSetupData{missionLevelScenesTransitionSetupData_}, tutorialScenesTransitionSetupData{tutorialScenesTransitionSetupData_}, creditsScenesTransitionSetupData{creditsScenesTransitionSetupData_}, beatmapEditorScenesTransitionSetupData{beatmapEditorScenesTransitionSetupData_}, mainSettingsModel{mainSettingsModel_}, gameScenesManager{gameScenesManager_}, standardLevelFinishedCallback{standardLevelFinishedCallback_}, multiplayerLevelFinishedCallback{multiplayerLevelFinishedCallback_}, multiplayerDidDisconnectCallback{multiplayerDidDisconnectCallback_}, missionLevelFinishedCallback{missionLevelFinishedCallback_}, beatmapEditorFinishedCallback{beatmapEditorFinishedCallback_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Void StartStandardLevel(System.String gameMode, IDifficultyBeatmap difficultyBeatmap, IPreviewBeatmapLevel previewBeatmapLevel, OverrideEnvironmentSettings overrideEnvironmentSettings, ColorScheme overrideColorScheme, GameplayModifiers gameplayModifiers, PlayerSpecificSettings playerSpecificSettings, PracticeSettings practiceSettings, System.String backButtonText, System.Boolean useTestNoteCutSoundEffects, System.Action beforeSceneSwitchCallback, System.Action`2<StandardLevelScenesTransitionSetupDataSO,LevelCompletionResults> levelFinishedCallback)
    // Offset: 0xF40268
    void StartStandardLevel(::Il2CppString* gameMode, GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap, GlobalNamespace::IPreviewBeatmapLevel* previewBeatmapLevel, GlobalNamespace::OverrideEnvironmentSettings* overrideEnvironmentSettings, GlobalNamespace::ColorScheme* overrideColorScheme, GlobalNamespace::GameplayModifiers* gameplayModifiers, GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings, GlobalNamespace::PracticeSettings* practiceSettings, ::Il2CppString* backButtonText, bool useTestNoteCutSoundEffects, System::Action* beforeSceneSwitchCallback, System::Action_2<GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*, GlobalNamespace::LevelCompletionResults*>* levelFinishedCallback);
    // public System.Void StartStandardLevel(System.String gameMode, IDifficultyBeatmap difficultyBeatmap, IPreviewBeatmapLevel previewBeatmapLevel, OverrideEnvironmentSettings overrideEnvironmentSettings, ColorScheme overrideColorScheme, GameplayModifiers gameplayModifiers, PlayerSpecificSettings playerSpecificSettings, PracticeSettings practiceSettings, System.String backButtonText, System.Boolean useTestNoteCutSoundEffects, System.Action beforeSceneSwitchCallback, System.Action`1<Zenject.DiContainer> afterSceneSwitchCallback, System.Action`2<StandardLevelScenesTransitionSetupDataSO,LevelCompletionResults> levelFinishedCallback)
    // Offset: 0xF402A4
    void StartStandardLevel(::Il2CppString* gameMode, GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap, GlobalNamespace::IPreviewBeatmapLevel* previewBeatmapLevel, GlobalNamespace::OverrideEnvironmentSettings* overrideEnvironmentSettings, GlobalNamespace::ColorScheme* overrideColorScheme, GlobalNamespace::GameplayModifiers* gameplayModifiers, GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings, GlobalNamespace::PracticeSettings* practiceSettings, ::Il2CppString* backButtonText, bool useTestNoteCutSoundEffects, System::Action* beforeSceneSwitchCallback, System::Action_1<Zenject::DiContainer*>* afterSceneSwitchCallback, System::Action_2<GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*, GlobalNamespace::LevelCompletionResults*>* levelFinishedCallback);
    // public System.Void StartMissionLevel(System.String missionId, IDifficultyBeatmap difficultyBeatmap, IPreviewBeatmapLevel previewBeatmapLevel, ColorScheme overrideColorScheme, GameplayModifiers gameplayModifiers, MissionObjective[] missionObjectives, PlayerSpecificSettings playerSpecificSettings, System.Action beforeSceneSwitchCallback, System.Action`2<MissionLevelScenesTransitionSetupDataSO,MissionCompletionResults> levelFinishedCallback)
    // Offset: 0xF40404
    void StartMissionLevel(::Il2CppString* missionId, GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap, GlobalNamespace::IPreviewBeatmapLevel* previewBeatmapLevel, GlobalNamespace::ColorScheme* overrideColorScheme, GlobalNamespace::GameplayModifiers* gameplayModifiers, ::Array<GlobalNamespace::MissionObjective*>* missionObjectives, GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings, System::Action* beforeSceneSwitchCallback, System::Action_2<GlobalNamespace::MissionLevelScenesTransitionSetupDataSO*, GlobalNamespace::MissionCompletionResults*>* levelFinishedCallback);
    // public System.Void StartMultiplayerLevel(System.String gameMode, IPreviewBeatmapLevel previewBeatmapLevel, BeatmapDifficulty beatmapDifficulty, BeatmapCharacteristicSO beatmapCharacteristic, IDifficultyBeatmap difficultyBeatmap, ColorScheme overrideColorScheme, GameplayModifiers gameplayModifiers, PlayerSpecificSettings playerSpecificSettings, PracticeSettings practiceSettings, System.String backButtonText, System.Boolean useTestNoteCutSoundEffects, System.Action beforeSceneSwitchCallback, System.Action`2<MultiplayerLevelScenesTransitionSetupDataSO,MultiplayerResultsData> levelFinishedCallback, System.Action`1<DisconnectedReason> didDisconnectCallback)
    // Offset: 0xF40BA8
    void StartMultiplayerLevel(::Il2CppString* gameMode, GlobalNamespace::IPreviewBeatmapLevel* previewBeatmapLevel, GlobalNamespace::BeatmapDifficulty beatmapDifficulty, GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic, GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap, GlobalNamespace::ColorScheme* overrideColorScheme, GlobalNamespace::GameplayModifiers* gameplayModifiers, GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings, GlobalNamespace::PracticeSettings* practiceSettings, ::Il2CppString* backButtonText, bool useTestNoteCutSoundEffects, System::Action* beforeSceneSwitchCallback, System::Action_2<GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO*, GlobalNamespace::MultiplayerResultsData*>* levelFinishedCallback, System::Action_1<GlobalNamespace::DisconnectedReason>* didDisconnectCallback);
    // private System.Void StartMultiplayerLevel(System.String gameMode, IPreviewBeatmapLevel previewBeatmapLevel, BeatmapDifficulty beatmapDifficulty, BeatmapCharacteristicSO beatmapCharacteristic, IDifficultyBeatmap difficultyBeatmap, ColorScheme overrideColorScheme, GameplayModifiers gameplayModifiers, PlayerSpecificSettings playerSpecificSettings, PracticeSettings practiceSettings, System.String backButtonText, System.Boolean useTestNoteCutSoundEffects, System.Action beforeSceneSwitchCallback, System.Action`1<Zenject.DiContainer> afterSceneSwitchCallback, System.Action`2<MultiplayerLevelScenesTransitionSetupDataSO,MultiplayerResultsData> levelFinishedCallback, System.Action`1<DisconnectedReason> didDisconnectCallback)
    // Offset: 0xF40BE8
    void StartMultiplayerLevel(::Il2CppString* gameMode, GlobalNamespace::IPreviewBeatmapLevel* previewBeatmapLevel, GlobalNamespace::BeatmapDifficulty beatmapDifficulty, GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic, GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap, GlobalNamespace::ColorScheme* overrideColorScheme, GlobalNamespace::GameplayModifiers* gameplayModifiers, GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings, GlobalNamespace::PracticeSettings* practiceSettings, ::Il2CppString* backButtonText, bool useTestNoteCutSoundEffects, System::Action* beforeSceneSwitchCallback, System::Action_1<Zenject::DiContainer*>* afterSceneSwitchCallback, System::Action_2<GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO*, GlobalNamespace::MultiplayerResultsData*>* levelFinishedCallback, System::Action_1<GlobalNamespace::DisconnectedReason>* didDisconnectCallback);
    // public System.Void StartTutorial(System.Action beforeSceneSwitchCallback)
    // Offset: 0xF40DD4
    void StartTutorial(System::Action* beforeSceneSwitchCallback);
    // public System.Void ShowCredits()
    // Offset: 0xF40EE4
    void ShowCredits();
    // public System.Void StartBeatmapEditor(System.Action beatmapEditorFinishedCallback)
    // Offset: 0xF40FE8
    void StartBeatmapEditor(System::Action* beatmapEditorFinishedCallback);
    // public System.Void RestartGame(System.Action`1<Zenject.DiContainer> finishCallback)
    // Offset: 0xF3AD98
    void RestartGame(System::Action_1<Zenject::DiContainer*>* finishCallback);
    // private System.Void HandleMainGameSceneDidFinish(StandardLevelScenesTransitionSetupDataSO standardLevelScenesTransitionSetupData, LevelCompletionResults levelCompletionResults)
    // Offset: 0xF41184
    void HandleMainGameSceneDidFinish(GlobalNamespace::StandardLevelScenesTransitionSetupDataSO* standardLevelScenesTransitionSetupData, GlobalNamespace::LevelCompletionResults* levelCompletionResults);
    // private System.Void HandleMultiplayerLevelDidFinish(MultiplayerLevelScenesTransitionSetupDataSO multiplayerLevelScenesTransitionSetupData, MultiplayerResultsData multiplayerResultsData)
    // Offset: 0xF412C0
    void HandleMultiplayerLevelDidFinish(GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO* multiplayerLevelScenesTransitionSetupData, GlobalNamespace::MultiplayerResultsData* multiplayerResultsData);
    // private System.Void HandleMultiplayerLevelDidDisconnect(MultiplayerLevelScenesTransitionSetupDataSO multiplayerLevelScenesTransitionSetupData, DisconnectedReason disconnectedReason)
    // Offset: 0xF41458
    void HandleMultiplayerLevelDidDisconnect(GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO* multiplayerLevelScenesTransitionSetupData, GlobalNamespace::DisconnectedReason disconnectedReason);
    // private System.Void HandleMissionLevelSceneDidFinish(MissionLevelScenesTransitionSetupDataSO missionLevelScenesTransitionSetupData, MissionCompletionResults missionCompletionResults)
    // Offset: 0xF415BC
    void HandleMissionLevelSceneDidFinish(GlobalNamespace::MissionLevelScenesTransitionSetupDataSO* missionLevelScenesTransitionSetupData, GlobalNamespace::MissionCompletionResults* missionCompletionResults);
    // private System.Void HandleTutorialSceneDidFinish(TutorialScenesTransitionSetupDataSO tutorialSceneTransitionSetupData, TutorialScenesTransitionSetupDataSO/TutorialEndStateType endState)
    // Offset: 0xF416F8
    void HandleTutorialSceneDidFinish(GlobalNamespace::TutorialScenesTransitionSetupDataSO* tutorialSceneTransitionSetupData, GlobalNamespace::TutorialScenesTransitionSetupDataSO::TutorialEndStateType endState);
    // private System.Void HandleCreditsSceneDidFinish(CreditsScenesTransitionSetupDataSO creditsSceneTransitionSetupData)
    // Offset: 0xF41828
    void HandleCreditsSceneDidFinish(GlobalNamespace::CreditsScenesTransitionSetupDataSO* creditsSceneTransitionSetupData);
    // private System.Void HandleBeatmapEditorSceneDidFinish(BeatmapEditorScenesTransitionSetupDataSO beatmapEditorScenesTransitionSetupData)
    // Offset: 0xF418DC
    void HandleBeatmapEditorSceneDidFinish(GlobalNamespace::BeatmapEditorScenesTransitionSetupDataSO* beatmapEditorScenesTransitionSetupData);
    // private System.Void <HandleBeatmapEditorSceneDidFinish>b__29_0(Zenject.DiContainer container)
    // Offset: 0xF419F8
    void $HandleBeatmapEditorSceneDidFinish$b__29_0(Zenject::DiContainer* container);
    // public System.Void .ctor()
    // Offset: 0xF419F0
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MenuTransitionsHelper* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MenuTransitionsHelper::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MenuTransitionsHelper*, creationType>()));
    }
  }; // MenuTransitionsHelper
  #pragma pack(pop)
  static check_size<sizeof(MenuTransitionsHelper), 128 + sizeof(System::Action*)> __GlobalNamespace_MenuTransitionsHelperSizeCheck;
  static_assert(sizeof(MenuTransitionsHelper) == 0x88);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MenuTransitionsHelper*, "", "MenuTransitionsHelper");
