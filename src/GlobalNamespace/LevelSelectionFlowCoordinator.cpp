// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
// Including type: LevelSelectionFlowCoordinator
#include "GlobalNamespace/LevelSelectionFlowCoordinator.hpp"
// Including type: LevelSelectionFlowCoordinator/<>c__DisplayClass52_0
#include "GlobalNamespace/LevelSelectionFlowCoordinator_--c__DisplayClass52_0.hpp"
// Including type: BeatmapCharacteristicSO
#include "GlobalNamespace/BeatmapCharacteristicSO.hpp"
// Including type: PlayerDataModel
#include "GlobalNamespace/PlayerDataModel.hpp"
// Including type: MenuTransitionsHelper
#include "GlobalNamespace/MenuTransitionsHelper.hpp"
// Including type: LevelSelectionNavigationController
#include "GlobalNamespace/LevelSelectionNavigationController.hpp"
// Including type: PracticeViewController
#include "GlobalNamespace/PracticeViewController.hpp"
// Including type: GameplaySetupViewController
#include "GlobalNamespace/GameplaySetupViewController.hpp"
// Including type: LevelFilteringNavigationController
#include "GlobalNamespace/LevelFilteringNavigationController.hpp"
// Including type: SimpleDialogPromptViewController
#include "GlobalNamespace/SimpleDialogPromptViewController.hpp"
// Including type: VRPlatformHelper
#include "GlobalNamespace/VRPlatformHelper.hpp"
// Including type: AppStaticSettingsSO
#include "GlobalNamespace/AppStaticSettingsSO.hpp"
// Including type: IAnnotatedBeatmapLevelCollection
#include "GlobalNamespace/IAnnotatedBeatmapLevelCollection.hpp"
// Including type: IPreviewBeatmapLevel
#include "GlobalNamespace/IPreviewBeatmapLevel.hpp"
// Including type: LeaderboardViewController
#include "GlobalNamespace/LeaderboardViewController.hpp"
// Including type: System.Action
#include "System/Action.hpp"
// Including type: UnityEngine.GameObject
#include "UnityEngine/GameObject.hpp"
// Including type: IBeatmapLevelPack
#include "GlobalNamespace/IBeatmapLevelPack.hpp"
// Including type: IBeatmapLevel
#include "GlobalNamespace/IBeatmapLevel.hpp"
// Including type: IDifficultyBeatmap
#include "GlobalNamespace/IDifficultyBeatmap.hpp"
// Including type: StandardLevelScenesTransitionSetupDataSO
#include "GlobalNamespace/StandardLevelScenesTransitionSetupDataSO.hpp"
// Including type: LevelCompletionResults
#include "GlobalNamespace/LevelCompletionResults.hpp"
// Including type: GameplayModifiers
#include "GlobalNamespace/GameplayModifiers.hpp"
// Including type: HMUI.FlowCoordinator/ActivationType
#include "HMUI/FlowCoordinator_ActivationType.hpp"
// Including type: HMUI.FlowCoordinator/DeactivationType
#include "HMUI/FlowCoordinator_DeactivationType.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: LevelSelectionFlowCoordinator.LevelSelectionFlowCoordinatorDidActivate
void GlobalNamespace::LevelSelectionFlowCoordinator::LevelSelectionFlowCoordinatorDidActivate(bool firstActivation, HMUI::FlowCoordinator::ActivationType activationType) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "LevelSelectionFlowCoordinatorDidActivate", firstActivation, activationType));
}
// Autogenerated method: LevelSelectionFlowCoordinator.LevelSelectionFlowCoordinatorDidDeactivate
void GlobalNamespace::LevelSelectionFlowCoordinator::LevelSelectionFlowCoordinatorDidDeactivate(HMUI::FlowCoordinator::DeactivationType deactivationType) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "LevelSelectionFlowCoordinatorDidDeactivate", deactivationType));
}
// Autogenerated method: LevelSelectionFlowCoordinator.get_isInPracticeView
bool GlobalNamespace::LevelSelectionFlowCoordinator::get_isInPracticeView() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_isInPracticeView"));
}
// Autogenerated method: LevelSelectionFlowCoordinator.get_menuTransitionsHelper
GlobalNamespace::MenuTransitionsHelper* GlobalNamespace::LevelSelectionFlowCoordinator::get_menuTransitionsHelper() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<GlobalNamespace::MenuTransitionsHelper*>(this, "get_menuTransitionsHelper"));
}
// Autogenerated method: LevelSelectionFlowCoordinator.get_gameplaySetupViewController
GlobalNamespace::GameplaySetupViewController* GlobalNamespace::LevelSelectionFlowCoordinator::get_gameplaySetupViewController() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<GlobalNamespace::GameplaySetupViewController*>(this, "get_gameplaySetupViewController"));
}
// Autogenerated method: LevelSelectionFlowCoordinator.get_levelSelectionNavigationController
GlobalNamespace::LevelSelectionNavigationController* GlobalNamespace::LevelSelectionFlowCoordinator::get_levelSelectionNavigationController() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<GlobalNamespace::LevelSelectionNavigationController*>(this, "get_levelSelectionNavigationController"));
}
// Autogenerated method: LevelSelectionFlowCoordinator.get_topScreenViewController
HMUI::ViewController* GlobalNamespace::LevelSelectionFlowCoordinator::get_topScreenViewController() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<HMUI::ViewController*>(this, "get_topScreenViewController"));
}
// Autogenerated method: LevelSelectionFlowCoordinator.get_hidePacksIfOneOrNone
bool GlobalNamespace::LevelSelectionFlowCoordinator::get_hidePacksIfOneOrNone() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_hidePacksIfOneOrNone"));
}
// Autogenerated method: LevelSelectionFlowCoordinator.get_hideGameplaySetup
bool GlobalNamespace::LevelSelectionFlowCoordinator::get_hideGameplaySetup() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_hideGameplaySetup"));
}
// Autogenerated method: LevelSelectionFlowCoordinator.get_hidePracticeButton
bool GlobalNamespace::LevelSelectionFlowCoordinator::get_hidePracticeButton() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_hidePracticeButton"));
}
// Autogenerated method: LevelSelectionFlowCoordinator.get_showBackButtonForMainViewController
bool GlobalNamespace::LevelSelectionFlowCoordinator::get_showBackButtonForMainViewController() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_showBackButtonForMainViewController"));
}
// Autogenerated method: LevelSelectionFlowCoordinator.get_leaderboardViewController
GlobalNamespace::LeaderboardViewController* GlobalNamespace::LevelSelectionFlowCoordinator::get_leaderboardViewController() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<GlobalNamespace::LeaderboardViewController*>(this, "get_leaderboardViewController"));
}
// Autogenerated method: LevelSelectionFlowCoordinator.get_showPlayerStatsInDetailView
bool GlobalNamespace::LevelSelectionFlowCoordinator::get_showPlayerStatsInDetailView() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_showPlayerStatsInDetailView"));
}
// Autogenerated method: LevelSelectionFlowCoordinator.Setup
void GlobalNamespace::LevelSelectionFlowCoordinator::Setup(GlobalNamespace::IAnnotatedBeatmapLevelCollection* annotatedBeatmapLevelCollectionToBeSelectedAfterPresent, GlobalNamespace::IPreviewBeatmapLevel* beatmapLevelToBeSelectedAfterPresent) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Setup", annotatedBeatmapLevelCollectionToBeSelectedAfterPresent, beatmapLevelToBeSelectedAfterPresent));
}
// Autogenerated method: LevelSelectionFlowCoordinator.ResetSetupParameters
void GlobalNamespace::LevelSelectionFlowCoordinator::ResetSetupParameters() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "ResetSetupParameters"));
}
// Autogenerated method: LevelSelectionFlowCoordinator.DismissPracticeViewController
void GlobalNamespace::LevelSelectionFlowCoordinator::DismissPracticeViewController(System::Action* finishedCallback, bool immediately) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "DismissPracticeViewController", finishedCallback, immediately));
}
// Autogenerated method: LevelSelectionFlowCoordinator.HandleLevelFilteringNavigationControllerDidStartLoading
void GlobalNamespace::LevelSelectionFlowCoordinator::HandleLevelFilteringNavigationControllerDidStartLoading(GlobalNamespace::LevelFilteringNavigationController* controller) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "HandleLevelFilteringNavigationControllerDidStartLoading", controller));
}
// Autogenerated method: LevelSelectionFlowCoordinator.HandleLevelFilteringNavigationControllerDidSelectAnnotatedBeatmapLevelCollection
void GlobalNamespace::LevelSelectionFlowCoordinator::HandleLevelFilteringNavigationControllerDidSelectAnnotatedBeatmapLevelCollection(GlobalNamespace::LevelFilteringNavigationController* controller, GlobalNamespace::IAnnotatedBeatmapLevelCollection* annotatedBeatmapLevelCollection, UnityEngine::GameObject* noDataInfoPrefab, GlobalNamespace::BeatmapCharacteristicSO* preferedBeatmapCharacteristic) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "HandleLevelFilteringNavigationControllerDidSelectAnnotatedBeatmapLevelCollection", controller, annotatedBeatmapLevelCollection, noDataInfoPrefab, preferedBeatmapCharacteristic));
}
// Autogenerated method: LevelSelectionFlowCoordinator.HandleLevelSelectionNavigationControllerDidSelectPack
void GlobalNamespace::LevelSelectionFlowCoordinator::HandleLevelSelectionNavigationControllerDidSelectPack(GlobalNamespace::LevelSelectionNavigationController* viewController, GlobalNamespace::IBeatmapLevelPack* pack) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "HandleLevelSelectionNavigationControllerDidSelectPack", viewController, pack));
}
// Autogenerated method: LevelSelectionFlowCoordinator.HandleLevelSelectionNavigationControllerDidPressPlayButton
void GlobalNamespace::LevelSelectionFlowCoordinator::HandleLevelSelectionNavigationControllerDidPressPlayButton(GlobalNamespace::LevelSelectionNavigationController* viewController) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "HandleLevelSelectionNavigationControllerDidPressPlayButton", viewController));
}
// Autogenerated method: LevelSelectionFlowCoordinator.HandleLevelSelectionNavigationControllerDidPressPracticeButton
void GlobalNamespace::LevelSelectionFlowCoordinator::HandleLevelSelectionNavigationControllerDidPressPracticeButton(GlobalNamespace::LevelSelectionNavigationController* viewController, GlobalNamespace::IBeatmapLevel* level) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "HandleLevelSelectionNavigationControllerDidPressPracticeButton", viewController, level));
}
// Autogenerated method: LevelSelectionFlowCoordinator.HandleLevelSelectionNavigationControllerDidChangeDifficultyBeatmap
void GlobalNamespace::LevelSelectionFlowCoordinator::HandleLevelSelectionNavigationControllerDidChangeDifficultyBeatmap(GlobalNamespace::LevelSelectionNavigationController* viewController, GlobalNamespace::IDifficultyBeatmap* beatmap) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "HandleLevelSelectionNavigationControllerDidChangeDifficultyBeatmap", viewController, beatmap));
}
// Autogenerated method: LevelSelectionFlowCoordinator.HandleLevelSelectionNavigationControllerDidPresentDetailContent
void GlobalNamespace::LevelSelectionFlowCoordinator::HandleLevelSelectionNavigationControllerDidPresentDetailContent(GlobalNamespace::LevelSelectionNavigationController* viewController, GlobalNamespace::StandardLevelDetailViewController::ContentType contentType) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "HandleLevelSelectionNavigationControllerDidPresentDetailContent", viewController, contentType));
}
// Autogenerated method: LevelSelectionFlowCoordinator.HandleLevelSelectionNavigationControllerDidPressOpenPackButton
void GlobalNamespace::LevelSelectionFlowCoordinator::HandleLevelSelectionNavigationControllerDidPressOpenPackButton(GlobalNamespace::LevelSelectionNavigationController* viewController, GlobalNamespace::IBeatmapLevelPack* levelPack) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "HandleLevelSelectionNavigationControllerDidPressOpenPackButton", viewController, levelPack));
}
// Autogenerated method: LevelSelectionFlowCoordinator.HandlePracticeViewControllerDidPressPlayButton
void GlobalNamespace::LevelSelectionFlowCoordinator::HandlePracticeViewControllerDidPressPlayButton() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "HandlePracticeViewControllerDidPressPlayButton"));
}
// Autogenerated method: LevelSelectionFlowCoordinator.StartLevel
void GlobalNamespace::LevelSelectionFlowCoordinator::StartLevel(GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap, System::Action* beforeSceneSwitchCallback, bool practice) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "StartLevel", difficultyBeatmap, beforeSceneSwitchCallback, practice));
}
// Autogenerated method: LevelSelectionFlowCoordinator.StartLevelOrShow360Warning
void GlobalNamespace::LevelSelectionFlowCoordinator::StartLevelOrShow360Warning(System::Action* beforeSceneSwitchCallback, bool practice) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "StartLevelOrShow360Warning", beforeSceneSwitchCallback, practice));
}
// Autogenerated method: LevelSelectionFlowCoordinator.HandleStandardLevelDidFinish
void GlobalNamespace::LevelSelectionFlowCoordinator::HandleStandardLevelDidFinish(GlobalNamespace::StandardLevelScenesTransitionSetupDataSO* standardLevelScenesTransitionSetupData, GlobalNamespace::LevelCompletionResults* levelCompletionResults) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "HandleStandardLevelDidFinish", standardLevelScenesTransitionSetupData, levelCompletionResults));
}
// Autogenerated method: LevelSelectionFlowCoordinator.HandleBasicLevelCompletionResults
bool GlobalNamespace::LevelSelectionFlowCoordinator::HandleBasicLevelCompletionResults(GlobalNamespace::LevelCompletionResults* levelCompletionResults, bool practice) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "HandleBasicLevelCompletionResults", levelCompletionResults, practice));
}
// Autogenerated method: LevelSelectionFlowCoordinator.ProcessLevelCompletionResultsAfterLevelDidFinish
void GlobalNamespace::LevelSelectionFlowCoordinator::ProcessLevelCompletionResultsAfterLevelDidFinish(GlobalNamespace::LevelCompletionResults* levelCompletionResults, GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap, GlobalNamespace::GameplayModifiers* gameplayModifiers, bool practice) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "ProcessLevelCompletionResultsAfterLevelDidFinish", levelCompletionResults, difficultyBeatmap, gameplayModifiers, practice));
}
// Autogenerated method: LevelSelectionFlowCoordinator.DidActivate
void GlobalNamespace::LevelSelectionFlowCoordinator::DidActivate(bool firstActivation, HMUI::FlowCoordinator::ActivationType activationType) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "DidActivate", firstActivation, activationType));
}
// Autogenerated method: LevelSelectionFlowCoordinator.DidDeactivate
void GlobalNamespace::LevelSelectionFlowCoordinator::DidDeactivate(HMUI::FlowCoordinator::DeactivationType deactivationType) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "DidDeactivate", deactivationType));
}
// Autogenerated method: LevelSelectionFlowCoordinator.TopViewControllerWillChange
void GlobalNamespace::LevelSelectionFlowCoordinator::TopViewControllerWillChange(HMUI::ViewController* oldViewController, HMUI::ViewController* newViewController, bool immediately) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "TopViewControllerWillChange", oldViewController, newViewController, immediately));
}
// Autogenerated method: LevelSelectionFlowCoordinator.BackButtonWasPressed
void GlobalNamespace::LevelSelectionFlowCoordinator::BackButtonWasPressed(HMUI::ViewController* topViewController) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "BackButtonWasPressed", topViewController));
}
// Autogenerated method: LevelSelectionFlowCoordinator..ctor
GlobalNamespace::LevelSelectionFlowCoordinator* GlobalNamespace::LevelSelectionFlowCoordinator::New_ctor() {
  return THROW_UNLESS(il2cpp_utils::New<LevelSelectionFlowCoordinator*>());
}
