// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: PlatformLeaderboardsHandler
#include "GlobalNamespace/PlatformLeaderboardsHandler.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: HMAsyncRequest
  class HMAsyncRequest;
  // Forward declaring type: IDifficultyBeatmap
  class IDifficultyBeatmap;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: TwoLeaderboardsHandlerWrapper
  class TwoLeaderboardsHandlerWrapper : public GlobalNamespace::PlatformLeaderboardsHandler {
    public:
    // private PlatformLeaderboardsHandler _mainHandler
    // Size: 0x8
    // Offset: 0x10
    GlobalNamespace::PlatformLeaderboardsHandler* mainHandler;
    // Field size check
    static_assert(sizeof(GlobalNamespace::PlatformLeaderboardsHandler*) == 0x8);
    // private PlatformLeaderboardsHandler _shadowHandler
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::PlatformLeaderboardsHandler* shadowHandler;
    // Field size check
    static_assert(sizeof(GlobalNamespace::PlatformLeaderboardsHandler*) == 0x8);
    // private HMAsyncRequest _getScoresShadowAsyncRequest
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::HMAsyncRequest* getScoresShadowAsyncRequest;
    // Field size check
    static_assert(sizeof(GlobalNamespace::HMAsyncRequest*) == 0x8);
    // private HMAsyncRequest _uploadScoreShadowAsyncRequest
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::HMAsyncRequest* uploadScoreShadowAsyncRequest;
    // Field size check
    static_assert(sizeof(GlobalNamespace::HMAsyncRequest*) == 0x8);
    // Creating value type constructor for type: TwoLeaderboardsHandlerWrapper
    TwoLeaderboardsHandlerWrapper(GlobalNamespace::PlatformLeaderboardsHandler* mainHandler_ = {}, GlobalNamespace::PlatformLeaderboardsHandler* shadowHandler_ = {}, GlobalNamespace::HMAsyncRequest* getScoresShadowAsyncRequest_ = {}, GlobalNamespace::HMAsyncRequest* uploadScoreShadowAsyncRequest_ = {}) noexcept : mainHandler{mainHandler_}, shadowHandler{shadowHandler_}, getScoresShadowAsyncRequest{getScoresShadowAsyncRequest_}, uploadScoreShadowAsyncRequest{uploadScoreShadowAsyncRequest_} {}
    // public System.Void .ctor(PlatformLeaderboardsHandler mainHandler, PlatformLeaderboardsHandler shadowHandler)
    // Offset: 0xFADCEC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TwoLeaderboardsHandlerWrapper* New_ctor(GlobalNamespace::PlatformLeaderboardsHandler* mainHandler, GlobalNamespace::PlatformLeaderboardsHandler* shadowHandler) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::TwoLeaderboardsHandlerWrapper::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TwoLeaderboardsHandlerWrapper*, creationType>(mainHandler, shadowHandler)));
    }
    // private System.Void <GetScores>b__5_0(PlatformLeaderboardsModel/GetScoresResult result, PlatformLeaderboardsModel/LeaderboardScore[] scores, System.Int32 referencePlayerScoreIndex)
    // Offset: 0xFADF1C
    void $GetScores$b__5_0(GlobalNamespace::PlatformLeaderboardsModel::GetScoresResult result, ::Array<GlobalNamespace::PlatformLeaderboardsModel::LeaderboardScore*>* scores, int referencePlayerScoreIndex);
    // private System.Void <UploadScore>b__6_0(PlatformLeaderboardsModel/UploadScoreResult result)
    // Offset: 0xFADF24
    void $UploadScore$b__6_0(GlobalNamespace::PlatformLeaderboardsModel::UploadScoreResult result);
    // public override HMAsyncRequest GetScores(IDifficultyBeatmap beatmap, System.Int32 count, System.Int32 fromRank, PlatformLeaderboardsModel/ScoresScope scope, System.String referencePlayerId, PlatformLeaderboardsModel/GetScoresCompletionHandler completionHandler)
    // Offset: 0xFADD24
    // Implemented from: PlatformLeaderboardsHandler
    // Base method: HMAsyncRequest PlatformLeaderboardsHandler::GetScores(IDifficultyBeatmap beatmap, System.Int32 count, System.Int32 fromRank, PlatformLeaderboardsModel/ScoresScope scope, System.String referencePlayerId, PlatformLeaderboardsModel/GetScoresCompletionHandler completionHandler)
    GlobalNamespace::HMAsyncRequest* GetScores(GlobalNamespace::IDifficultyBeatmap* beatmap, int count, int fromRank, GlobalNamespace::PlatformLeaderboardsModel::ScoresScope scope, ::Il2CppString* referencePlayerId, GlobalNamespace::PlatformLeaderboardsModel::GetScoresCompletionHandler* completionHandler);
    // public override HMAsyncRequest UploadScore(LeaderboardScoreUploader/ScoreData scoreData, PlatformLeaderboardsModel/UploadScoreCompletionHandler completionHandler)
    // Offset: 0xFADE44
    // Implemented from: PlatformLeaderboardsHandler
    // Base method: HMAsyncRequest PlatformLeaderboardsHandler::UploadScore(LeaderboardScoreUploader/ScoreData scoreData, PlatformLeaderboardsModel/UploadScoreCompletionHandler completionHandler)
    GlobalNamespace::HMAsyncRequest* UploadScore(GlobalNamespace::LeaderboardScoreUploader::ScoreData* scoreData, GlobalNamespace::PlatformLeaderboardsModel::UploadScoreCompletionHandler* completionHandler);
  }; // TwoLeaderboardsHandlerWrapper
  #pragma pack(pop)
  static check_size<sizeof(TwoLeaderboardsHandlerWrapper), 40 + sizeof(GlobalNamespace::HMAsyncRequest*)> __GlobalNamespace_TwoLeaderboardsHandlerWrapperSizeCheck;
  static_assert(sizeof(TwoLeaderboardsHandlerWrapper) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::TwoLeaderboardsHandlerWrapper*, "", "TwoLeaderboardsHandlerWrapper");
