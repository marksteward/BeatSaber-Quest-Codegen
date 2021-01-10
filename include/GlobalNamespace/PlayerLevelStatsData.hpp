// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: RankModel/Rank
#include "GlobalNamespace/RankModel_Rank.hpp"
// Including type: BeatmapDifficulty
#include "GlobalNamespace/BeatmapDifficulty.hpp"
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
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x40
  // Autogenerated type: PlayerLevelStatsData
  // [] Offset: FFFFFFFF
  class PlayerLevelStatsData : public ::Il2CppObject {
    public:
    // private System.Int32 _highScore
    // Size: 0x4
    // Offset: 0x10
    int highScore;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 _maxCombo
    // Size: 0x4
    // Offset: 0x14
    int maxCombo;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Boolean _fullCombo
    // Size: 0x1
    // Offset: 0x18
    bool fullCombo;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: fullCombo and: maxRank
    char __padding2[0x3] = {};
    // private RankModel/Rank _maxRank
    // Size: 0x4
    // Offset: 0x1C
    GlobalNamespace::RankModel::Rank maxRank;
    // Field size check
    static_assert(sizeof(GlobalNamespace::RankModel::Rank) == 0x4);
    // private System.Boolean _validScore
    // Size: 0x1
    // Offset: 0x20
    bool validScore;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: validScore and: playCount
    char __padding4[0x3] = {};
    // private System.Int32 _playCount
    // Size: 0x4
    // Offset: 0x24
    int playCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.String _levelID
    // Size: 0x8
    // Offset: 0x28
    ::Il2CppString* levelID;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private BeatmapDifficulty _difficulty
    // Size: 0x4
    // Offset: 0x30
    GlobalNamespace::BeatmapDifficulty difficulty;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapDifficulty) == 0x4);
    // Padding between fields: difficulty and: beatmapCharacteristic
    char __padding7[0x4] = {};
    // private BeatmapCharacteristicSO _beatmapCharacteristic
    // Size: 0x8
    // Offset: 0x38
    GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapCharacteristicSO*) == 0x8);
    // Creating value type constructor for type: PlayerLevelStatsData
    PlayerLevelStatsData(int highScore_ = {}, int maxCombo_ = {}, bool fullCombo_ = {}, GlobalNamespace::RankModel::Rank maxRank_ = {}, bool validScore_ = {}, int playCount_ = {}, ::Il2CppString* levelID_ = {}, GlobalNamespace::BeatmapDifficulty difficulty_ = {}, GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic_ = {}) noexcept : highScore{highScore_}, maxCombo{maxCombo_}, fullCombo{fullCombo_}, maxRank{maxRank_}, validScore{validScore_}, playCount{playCount_}, levelID{levelID_}, difficulty{difficulty_}, beatmapCharacteristic{beatmapCharacteristic_} {}
    // public System.String get_levelID()
    // Offset: 0xF288E0
    ::Il2CppString* get_levelID();
    // public BeatmapDifficulty get_difficulty()
    // Offset: 0xF288E8
    GlobalNamespace::BeatmapDifficulty get_difficulty();
    // public BeatmapCharacteristicSO get_beatmapCharacteristic()
    // Offset: 0xF288F0
    GlobalNamespace::BeatmapCharacteristicSO* get_beatmapCharacteristic();
    // public System.Int32 get_highScore()
    // Offset: 0xF288F8
    int get_highScore();
    // public System.Int32 get_maxCombo()
    // Offset: 0xF28900
    int get_maxCombo();
    // public System.Boolean get_fullCombo()
    // Offset: 0xF28908
    bool get_fullCombo();
    // public RankModel/Rank get_maxRank()
    // Offset: 0xF28910
    GlobalNamespace::RankModel::Rank get_maxRank();
    // public System.Boolean get_validScore()
    // Offset: 0xF28918
    bool get_validScore();
    // public System.Int32 get_playCount()
    // Offset: 0xF28920
    int get_playCount();
    // public System.Void .ctor(System.String levelID, BeatmapDifficulty difficulty, BeatmapCharacteristicSO beatmapCharacteristic)
    // Offset: 0xF28928
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PlayerLevelStatsData* New_ctor(::Il2CppString* levelID, GlobalNamespace::BeatmapDifficulty difficulty, GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::PlayerLevelStatsData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PlayerLevelStatsData*, creationType>(levelID, difficulty, beatmapCharacteristic)));
    }
    // public System.Void .ctor(System.String levelID, BeatmapDifficulty difficulty, BeatmapCharacteristicSO beatmapCharacteristic, System.Int32 highScore, System.Int32 maxCombo, System.Boolean fullCombo, RankModel/Rank maxRank, System.Boolean validScore, System.Int32 playCount)
    // Offset: 0xF26D3C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PlayerLevelStatsData* New_ctor(::Il2CppString* levelID, GlobalNamespace::BeatmapDifficulty difficulty, GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic, int highScore, int maxCombo, bool fullCombo, GlobalNamespace::RankModel::Rank maxRank, bool validScore, int playCount) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::PlayerLevelStatsData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PlayerLevelStatsData*, creationType>(levelID, difficulty, beatmapCharacteristic, highScore, maxCombo, fullCombo, maxRank, validScore, playCount)));
    }
    // public System.Void UpdateScoreData(System.Int32 score, System.Int32 maxCombo, System.Boolean fullCombo, RankModel/Rank rank)
    // Offset: 0xF28980
    void UpdateScoreData(int score, int maxCombo, bool fullCombo, GlobalNamespace::RankModel::Rank rank);
    // public System.Void IncreaseNumberOfGameplays()
    // Offset: 0xF28A64
    void IncreaseNumberOfGameplays();
  }; // PlayerLevelStatsData
  static check_size<sizeof(PlayerLevelStatsData), 56 + sizeof(GlobalNamespace::BeatmapCharacteristicSO*)> __GlobalNamespace_PlayerLevelStatsDataSizeCheck;
  static_assert(sizeof(PlayerLevelStatsData) == 0x40);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PlayerLevelStatsData*, "", "PlayerLevelStatsData");
#pragma pack(pop)
