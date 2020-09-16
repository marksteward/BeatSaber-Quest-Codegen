// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
// Including type: AchievementsEvaluationHandler
#include "GlobalNamespace/AchievementsEvaluationHandler.hpp"
// Including type: AchievementsModelSO
#include "GlobalNamespace/AchievementsModelSO.hpp"
// Including type: AchievementSO
#include "GlobalNamespace/AchievementSO.hpp"
// Including type: PlayerDataModel
#include "GlobalNamespace/PlayerDataModel.hpp"
// Including type: MissionNodesManager
#include "GlobalNamespace/MissionNodesManager.hpp"
// Including type: LevelCompletionResults
#include "GlobalNamespace/LevelCompletionResults.hpp"
// Including type: IDifficultyBeatmap
#include "GlobalNamespace/IDifficultyBeatmap.hpp"
// Including type: MissionCompletionResults
#include "GlobalNamespace/MissionCompletionResults.hpp"
// Including type: MissionNode
#include "GlobalNamespace/MissionNode.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: AchievementsEvaluationHandler.Start
void GlobalNamespace::AchievementsEvaluationHandler::Start() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Start"));
}
// Autogenerated method: AchievementsEvaluationHandler.OnDestroy
void GlobalNamespace::AchievementsEvaluationHandler::OnDestroy() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "OnDestroy"));
}
// Autogenerated method: AchievementsEvaluationHandler.HandleSoloFreePlayOverallStatsDataDidUpdate
void GlobalNamespace::AchievementsEvaluationHandler::HandleSoloFreePlayOverallStatsDataDidUpdate(GlobalNamespace::LevelCompletionResults* levelCompletionResults, GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "HandleSoloFreePlayOverallStatsDataDidUpdate", levelCompletionResults, difficultyBeatmap));
}
// Autogenerated method: AchievementsEvaluationHandler.HandlePartyFreePlayOverallStatsDataDidUpdate
void GlobalNamespace::AchievementsEvaluationHandler::HandlePartyFreePlayOverallStatsDataDidUpdate(GlobalNamespace::LevelCompletionResults* levelCompletionResults, GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "HandlePartyFreePlayOverallStatsDataDidUpdate", levelCompletionResults, difficultyBeatmap));
}
// Autogenerated method: AchievementsEvaluationHandler.HandleCampaignOverallStatsDataDidUpdate
void GlobalNamespace::AchievementsEvaluationHandler::HandleCampaignOverallStatsDataDidUpdate(GlobalNamespace::MissionCompletionResults* missionCompletionResults, GlobalNamespace::MissionNode* missionNode) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "HandleCampaignOverallStatsDataDidUpdate", missionCompletionResults, missionNode));
}
// Autogenerated method: AchievementsEvaluationHandler.ProcessMissionFinishData
void GlobalNamespace::AchievementsEvaluationHandler::ProcessMissionFinishData(GlobalNamespace::MissionNode* missionNode, GlobalNamespace::MissionCompletionResults* missionCompletionResults) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "ProcessMissionFinishData", missionNode, missionCompletionResults));
}
// Autogenerated method: AchievementsEvaluationHandler.ProcessSoloFreePlayLevelFinishData
void GlobalNamespace::AchievementsEvaluationHandler::ProcessSoloFreePlayLevelFinishData(GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap, GlobalNamespace::LevelCompletionResults* levelCompletionResults) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "ProcessSoloFreePlayLevelFinishData", difficultyBeatmap, levelCompletionResults));
}
// Autogenerated method: AchievementsEvaluationHandler.ProcessLevelFinishData
void GlobalNamespace::AchievementsEvaluationHandler::ProcessLevelFinishData(GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap, GlobalNamespace::LevelCompletionResults* levelCompletionResults) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "ProcessLevelFinishData", difficultyBeatmap, levelCompletionResults));
}
// Autogenerated method: AchievementsEvaluationHandler..ctor
GlobalNamespace::AchievementsEvaluationHandler* GlobalNamespace::AchievementsEvaluationHandler::New_ctor() {
  return THROW_UNLESS(il2cpp_utils::New<AchievementsEvaluationHandler*>());
}
