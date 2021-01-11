// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: LeaderboardScoreUploader
#include "GlobalNamespace/LeaderboardScoreUploader.hpp"
// Including type: PlatformLeaderboardsModel
#include "GlobalNamespace/PlatformLeaderboardsModel.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: LeaderboardScoreUploader/<>c__DisplayClass14_0
  // [] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: DBEDD4
  class LeaderboardScoreUploader::$$c__DisplayClass14_0 : public ::Il2CppObject {
    public:
    // public LeaderboardScoreUploader/ScoreData scoreData
    // Size: 0x8
    // Offset: 0x10
    GlobalNamespace::LeaderboardScoreUploader::ScoreData* scoreData;
    // Field size check
    static_assert(sizeof(GlobalNamespace::LeaderboardScoreUploader::ScoreData*) == 0x8);
    // public LeaderboardScoreUploader <>4__this
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::LeaderboardScoreUploader* $$4__this;
    // Field size check
    static_assert(sizeof(GlobalNamespace::LeaderboardScoreUploader*) == 0x8);
    // Creating value type constructor for type: $$c__DisplayClass14_0
    $$c__DisplayClass14_0(GlobalNamespace::LeaderboardScoreUploader::ScoreData* scoreData_ = {}, GlobalNamespace::LeaderboardScoreUploader* $$4__this_ = {}) noexcept : scoreData{scoreData_}, $$4__this{$$4__this_} {}
    // System.Void <UploadScoresCoroutine>b__0(PlatformLeaderboardsModel/UploadScoreResult result)
    // Offset: 0xF1D99C
    void $UploadScoresCoroutine$b__0(GlobalNamespace::PlatformLeaderboardsModel::UploadScoreResult result);
    // public System.Void .ctor()
    // Offset: 0xF1D994
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LeaderboardScoreUploader::$$c__DisplayClass14_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::LeaderboardScoreUploader::$$c__DisplayClass14_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LeaderboardScoreUploader::$$c__DisplayClass14_0*, creationType>()));
    }
  }; // LeaderboardScoreUploader/<>c__DisplayClass14_0
  static check_size<sizeof(LeaderboardScoreUploader::$$c__DisplayClass14_0), 24 + sizeof(GlobalNamespace::LeaderboardScoreUploader*)> __GlobalNamespace_LeaderboardScoreUploader_$$c__DisplayClass14_0SizeCheck;
  static_assert(sizeof(LeaderboardScoreUploader::$$c__DisplayClass14_0) == 0x20);
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LeaderboardScoreUploader::$$c__DisplayClass14_0*, "", "LeaderboardScoreUploader/<>c__DisplayClass14_0");
