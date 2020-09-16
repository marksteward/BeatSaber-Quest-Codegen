// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: LeaderboardsModelLegacyWrapper
#include "GlobalNamespace/LeaderboardsModelLegacyWrapper.hpp"
// Including type: LeaderboardsModelLegacyWrapper/HMAsyncRequestWithCancellationToken
#include "GlobalNamespace/LeaderboardsModelLegacyWrapper_HMAsyncRequestWithCancellationToken.hpp"
// Including type: LeaderboardsModelLegacyWrapper/<GetLeaderboardEntriesAsync>d__5
#include "GlobalNamespace/LeaderboardsModelLegacyWrapper_-GetLeaderboardEntriesAsync-d__5.hpp"
// Including type: LeaderboardsModelLegacyWrapper/<SendLevelScoreResutlAsync>d__6
#include "GlobalNamespace/LeaderboardsModelLegacyWrapper_-SendLevelScoreResutlAsync-d__6.hpp"
// Including type: OnlineServices.ILeaderboardsModel
#include "OnlineServices/ILeaderboardsModel.hpp"
// Including type: OnlineServices.GetLeaderboardFilterData
#include "OnlineServices/GetLeaderboardFilterData.hpp"
// Including type: OnlineServices.LevelScoreResultsData
#include "OnlineServices/LevelScoreResultsData.hpp"
// Including type: HMAsyncRequest
#include "GlobalNamespace/HMAsyncRequest.hpp"
// Including type: IDifficultyBeatmap
#include "GlobalNamespace/IDifficultyBeatmap.hpp"
// Including type: PlatformLeaderboardsModel/GetScoresCompletionHandler
#include "GlobalNamespace/PlatformLeaderboardsModel_GetScoresCompletionHandler.hpp"
// Including type: PlatformLeaderboardsModel/UploadScoreCompletionHandler
#include "GlobalNamespace/PlatformLeaderboardsModel_UploadScoreCompletionHandler.hpp"
// Including type: PlatformLeaderboardsModel/ScoresScope
#include "GlobalNamespace/PlatformLeaderboardsModel_ScoresScope.hpp"
// Including type: LeaderboardScoreUploader/ScoreData
#include "GlobalNamespace/LeaderboardScoreUploader_ScoreData.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: LeaderboardsModelLegacyWrapper..ctor
GlobalNamespace::LeaderboardsModelLegacyWrapper* GlobalNamespace::LeaderboardsModelLegacyWrapper::New_ctor(OnlineServices::ILeaderboardsModel* leaderboardsModel) {
  return THROW_UNLESS(il2cpp_utils::New<LeaderboardsModelLegacyWrapper*>(leaderboardsModel));
}
// Autogenerated method: LeaderboardsModelLegacyWrapper.GetLeaderboardEntriesAsync
void GlobalNamespace::LeaderboardsModelLegacyWrapper::GetLeaderboardEntriesAsync(OnlineServices::GetLeaderboardFilterData leaderboardFilterData, GlobalNamespace::LeaderboardsModelLegacyWrapper::HMAsyncRequestWithCancellationToken* asyncRequest, GlobalNamespace::PlatformLeaderboardsModel::GetScoresCompletionHandler* completionHandler) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "GetLeaderboardEntriesAsync", leaderboardFilterData, asyncRequest, completionHandler));
}
// Autogenerated method: LeaderboardsModelLegacyWrapper.SendLevelScoreResutlAsync
void GlobalNamespace::LeaderboardsModelLegacyWrapper::SendLevelScoreResutlAsync(OnlineServices::LevelScoreResultsData levelScoreResultsData, GlobalNamespace::LeaderboardsModelLegacyWrapper::HMAsyncRequestWithCancellationToken* asyncRequest, GlobalNamespace::PlatformLeaderboardsModel::UploadScoreCompletionHandler* completionHandler) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SendLevelScoreResutlAsync", levelScoreResultsData, asyncRequest, completionHandler));
}
// Autogenerated method: LeaderboardsModelLegacyWrapper.GetScores
GlobalNamespace::HMAsyncRequest* GlobalNamespace::LeaderboardsModelLegacyWrapper::GetScores(GlobalNamespace::IDifficultyBeatmap* beatmap, int count, int fromRank, GlobalNamespace::PlatformLeaderboardsModel::ScoresScope scope, ::Il2CppString* referencePlayerId, GlobalNamespace::PlatformLeaderboardsModel::GetScoresCompletionHandler* completionHandler) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<GlobalNamespace::HMAsyncRequest*>(this, "GetScores", beatmap, count, fromRank, scope, referencePlayerId, completionHandler));
}
// Autogenerated method: LeaderboardsModelLegacyWrapper.UploadScore
GlobalNamespace::HMAsyncRequest* GlobalNamespace::LeaderboardsModelLegacyWrapper::UploadScore(GlobalNamespace::LeaderboardScoreUploader::ScoreData* scoreData, GlobalNamespace::PlatformLeaderboardsModel::UploadScoreCompletionHandler* completionHandler) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<GlobalNamespace::HMAsyncRequest*>(this, "UploadScore", scoreData, completionHandler));
}
