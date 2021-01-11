// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: LeaderboardScoreUploader
#include "GlobalNamespace/LeaderboardScoreUploader.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IDifficultyBeatmap
  class IDifficultyBeatmap;
  // Forward declaring type: GameplayModifiers
  class GameplayModifiers;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x4C
  #pragma pack(push, 1)
  // Autogenerated type: LeaderboardScoreUploader/ScoreData
  // [] Offset: FFFFFFFF
  class LeaderboardScoreUploader::ScoreData : public ::Il2CppObject {
    public:
    // [CompilerGeneratedAttribute] Offset: 0xDD380C
    // private System.String <playerId>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* playerId;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDD381C
    // private IDifficultyBeatmap <beatmap>k__BackingField
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::IDifficultyBeatmap* beatmap;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IDifficultyBeatmap*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDD382C
    // private GameplayModifiers <gameplayModifiers>k__BackingField
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::GameplayModifiers* gameplayModifiers;
    // Field size check
    static_assert(sizeof(GlobalNamespace::GameplayModifiers*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDD383C
    // private System.Int32 <rawScore>k__BackingField
    // Size: 0x4
    // Offset: 0x28
    int rawScore;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // [CompilerGeneratedAttribute] Offset: 0xDD384C
    // private System.Int32 <modifiedScore>k__BackingField
    // Size: 0x4
    // Offset: 0x2C
    int modifiedScore;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // [CompilerGeneratedAttribute] Offset: 0xDD385C
    // private System.Boolean <fullCombo>k__BackingField
    // Size: 0x1
    // Offset: 0x30
    bool fullCombo;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: fullCombo and: goodCutsCount
    char __padding5[0x3] = {};
    // [CompilerGeneratedAttribute] Offset: 0xDD386C
    // private System.Int32 <goodCutsCount>k__BackingField
    // Size: 0x4
    // Offset: 0x34
    int goodCutsCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // [CompilerGeneratedAttribute] Offset: 0xDD387C
    // private System.Int32 <badCutsCount>k__BackingField
    // Size: 0x4
    // Offset: 0x38
    int badCutsCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // [CompilerGeneratedAttribute] Offset: 0xDD388C
    // private System.Int32 <missedCount>k__BackingField
    // Size: 0x4
    // Offset: 0x3C
    int missedCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // [CompilerGeneratedAttribute] Offset: 0xDD389C
    // private System.Int32 <maxCombo>k__BackingField
    // Size: 0x4
    // Offset: 0x40
    int maxCombo;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 uploadAttemptCount
    // Size: 0x4
    // Offset: 0x44
    int uploadAttemptCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 currentUploadAttemptCount
    // Size: 0x4
    // Offset: 0x48
    int currentUploadAttemptCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: ScoreData
    ScoreData(::Il2CppString* playerId_ = {}, GlobalNamespace::IDifficultyBeatmap* beatmap_ = {}, GlobalNamespace::GameplayModifiers* gameplayModifiers_ = {}, int rawScore_ = {}, int modifiedScore_ = {}, bool fullCombo_ = {}, int goodCutsCount_ = {}, int badCutsCount_ = {}, int missedCount_ = {}, int maxCombo_ = {}, int uploadAttemptCount_ = {}, int currentUploadAttemptCount_ = {}) noexcept : playerId{playerId_}, beatmap{beatmap_}, gameplayModifiers{gameplayModifiers_}, rawScore{rawScore_}, modifiedScore{modifiedScore_}, fullCombo{fullCombo_}, goodCutsCount{goodCutsCount_}, badCutsCount{badCutsCount_}, missedCount{missedCount_}, maxCombo{maxCombo_}, uploadAttemptCount{uploadAttemptCount_}, currentUploadAttemptCount{currentUploadAttemptCount_} {}
    // public System.String get_playerId()
    // Offset: 0xF1E140
    ::Il2CppString* get_playerId();
    // private System.Void set_playerId(System.String value)
    // Offset: 0xF1E148
    void set_playerId(::Il2CppString* value);
    // public IDifficultyBeatmap get_beatmap()
    // Offset: 0xF1E150
    GlobalNamespace::IDifficultyBeatmap* get_beatmap();
    // private System.Void set_beatmap(IDifficultyBeatmap value)
    // Offset: 0xF1E158
    void set_beatmap(GlobalNamespace::IDifficultyBeatmap* value);
    // public GameplayModifiers get_gameplayModifiers()
    // Offset: 0xF1E160
    GlobalNamespace::GameplayModifiers* get_gameplayModifiers();
    // private System.Void set_gameplayModifiers(GameplayModifiers value)
    // Offset: 0xF1E168
    void set_gameplayModifiers(GlobalNamespace::GameplayModifiers* value);
    // public System.Int32 get_rawScore()
    // Offset: 0xF1E170
    int get_rawScore();
    // private System.Void set_rawScore(System.Int32 value)
    // Offset: 0xF1E178
    void set_rawScore(int value);
    // public System.Int32 get_modifiedScore()
    // Offset: 0xF1E180
    int get_modifiedScore();
    // private System.Void set_modifiedScore(System.Int32 value)
    // Offset: 0xF1E188
    void set_modifiedScore(int value);
    // public System.Boolean get_fullCombo()
    // Offset: 0xF1E190
    bool get_fullCombo();
    // private System.Void set_fullCombo(System.Boolean value)
    // Offset: 0xF1E198
    void set_fullCombo(bool value);
    // public System.Int32 get_goodCutsCount()
    // Offset: 0xF1E1A4
    int get_goodCutsCount();
    // private System.Void set_goodCutsCount(System.Int32 value)
    // Offset: 0xF1E1AC
    void set_goodCutsCount(int value);
    // public System.Int32 get_badCutsCount()
    // Offset: 0xF1E1B4
    int get_badCutsCount();
    // private System.Void set_badCutsCount(System.Int32 value)
    // Offset: 0xF1E1BC
    void set_badCutsCount(int value);
    // public System.Int32 get_missedCount()
    // Offset: 0xF1E1C4
    int get_missedCount();
    // private System.Void set_missedCount(System.Int32 value)
    // Offset: 0xF1E1CC
    void set_missedCount(int value);
    // public System.Int32 get_maxCombo()
    // Offset: 0xF1E1D4
    int get_maxCombo();
    // private System.Void set_maxCombo(System.Int32 value)
    // Offset: 0xF1E1DC
    void set_maxCombo(int value);
    // public System.Void .ctor(System.String playerId, IDifficultyBeatmap beatmap, System.Int32 rawScore, System.Int32 modifiedScore, System.Boolean fullCombo, System.Int32 goodCutsCount, System.Int32 badCutsCount, System.Int32 missedCount, System.Int32 maxCombo, GameplayModifiers gameplayModifiers)
    // Offset: 0xF1E1E4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LeaderboardScoreUploader::ScoreData* New_ctor(::Il2CppString* playerId, GlobalNamespace::IDifficultyBeatmap* beatmap, int rawScore, int modifiedScore, bool fullCombo, int goodCutsCount, int badCutsCount, int missedCount, int maxCombo, GlobalNamespace::GameplayModifiers* gameplayModifiers) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::LeaderboardScoreUploader::ScoreData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LeaderboardScoreUploader::ScoreData*, creationType>(playerId, beatmap, rawScore, modifiedScore, fullCombo, goodCutsCount, badCutsCount, missedCount, maxCombo, gameplayModifiers)));
    }
  }; // LeaderboardScoreUploader/ScoreData
  static check_size<sizeof(LeaderboardScoreUploader::ScoreData), 72 + sizeof(int)> __GlobalNamespace_LeaderboardScoreUploader_ScoreDataSizeCheck;
  static_assert(sizeof(LeaderboardScoreUploader::ScoreData) == 0x4C);
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LeaderboardScoreUploader::ScoreData*, "", "LeaderboardScoreUploader/ScoreData");
