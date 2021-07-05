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
  class LeaderboardScoreUploader::ScoreData : public ::Il2CppObject {
    public:
    // [CompilerGeneratedAttribute] Offset: 0xE29CF8
    // private System.String <playerId>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* playerId;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xE29D08
    // private IDifficultyBeatmap <beatmap>k__BackingField
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::IDifficultyBeatmap* beatmap;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IDifficultyBeatmap*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xE29D18
    // private GameplayModifiers <gameplayModifiers>k__BackingField
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::GameplayModifiers* gameplayModifiers;
    // Field size check
    static_assert(sizeof(GlobalNamespace::GameplayModifiers*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xE29D28
    // private System.Int32 <rawScore>k__BackingField
    // Size: 0x4
    // Offset: 0x28
    int rawScore;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // [CompilerGeneratedAttribute] Offset: 0xE29D38
    // private System.Int32 <modifiedScore>k__BackingField
    // Size: 0x4
    // Offset: 0x2C
    int modifiedScore;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // [CompilerGeneratedAttribute] Offset: 0xE29D48
    // private System.Boolean <fullCombo>k__BackingField
    // Size: 0x1
    // Offset: 0x30
    bool fullCombo;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: fullCombo and: goodCutsCount
    char __padding5[0x3] = {};
    // [CompilerGeneratedAttribute] Offset: 0xE29D58
    // private System.Int32 <goodCutsCount>k__BackingField
    // Size: 0x4
    // Offset: 0x34
    int goodCutsCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // [CompilerGeneratedAttribute] Offset: 0xE29D68
    // private System.Int32 <badCutsCount>k__BackingField
    // Size: 0x4
    // Offset: 0x38
    int badCutsCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // [CompilerGeneratedAttribute] Offset: 0xE29D78
    // private System.Int32 <missedCount>k__BackingField
    // Size: 0x4
    // Offset: 0x3C
    int missedCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // [CompilerGeneratedAttribute] Offset: 0xE29D88
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
    // Offset: 0x10C748C
    ::Il2CppString* get_playerId();
    // private System.Void set_playerId(System.String value)
    // Offset: 0x10C7494
    void set_playerId(::Il2CppString* value);
    // public IDifficultyBeatmap get_beatmap()
    // Offset: 0x10C749C
    GlobalNamespace::IDifficultyBeatmap* get_beatmap();
    // private System.Void set_beatmap(IDifficultyBeatmap value)
    // Offset: 0x10C74A4
    void set_beatmap(GlobalNamespace::IDifficultyBeatmap* value);
    // public GameplayModifiers get_gameplayModifiers()
    // Offset: 0x10C74AC
    GlobalNamespace::GameplayModifiers* get_gameplayModifiers();
    // private System.Void set_gameplayModifiers(GameplayModifiers value)
    // Offset: 0x10C74B4
    void set_gameplayModifiers(GlobalNamespace::GameplayModifiers* value);
    // public System.Int32 get_rawScore()
    // Offset: 0x10C74BC
    int get_rawScore();
    // private System.Void set_rawScore(System.Int32 value)
    // Offset: 0x10C74C4
    void set_rawScore(int value);
    // public System.Int32 get_modifiedScore()
    // Offset: 0x10C74CC
    int get_modifiedScore();
    // private System.Void set_modifiedScore(System.Int32 value)
    // Offset: 0x10C74D4
    void set_modifiedScore(int value);
    // public System.Boolean get_fullCombo()
    // Offset: 0x10C74DC
    bool get_fullCombo();
    // private System.Void set_fullCombo(System.Boolean value)
    // Offset: 0x10C74E4
    void set_fullCombo(bool value);
    // public System.Int32 get_goodCutsCount()
    // Offset: 0x10C74F0
    int get_goodCutsCount();
    // private System.Void set_goodCutsCount(System.Int32 value)
    // Offset: 0x10C74F8
    void set_goodCutsCount(int value);
    // public System.Int32 get_badCutsCount()
    // Offset: 0x10C7500
    int get_badCutsCount();
    // private System.Void set_badCutsCount(System.Int32 value)
    // Offset: 0x10C7508
    void set_badCutsCount(int value);
    // public System.Int32 get_missedCount()
    // Offset: 0x10C7510
    int get_missedCount();
    // private System.Void set_missedCount(System.Int32 value)
    // Offset: 0x10C7518
    void set_missedCount(int value);
    // public System.Int32 get_maxCombo()
    // Offset: 0x10C7520
    int get_maxCombo();
    // private System.Void set_maxCombo(System.Int32 value)
    // Offset: 0x10C7528
    void set_maxCombo(int value);
    // public System.Void .ctor(System.String playerId, IDifficultyBeatmap beatmap, System.Int32 rawScore, System.Int32 modifiedScore, System.Boolean fullCombo, System.Int32 goodCutsCount, System.Int32 badCutsCount, System.Int32 missedCount, System.Int32 maxCombo, GameplayModifiers gameplayModifiers)
    // Offset: 0x10C7530
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LeaderboardScoreUploader::ScoreData* New_ctor(::Il2CppString* playerId, GlobalNamespace::IDifficultyBeatmap* beatmap, int rawScore, int modifiedScore, bool fullCombo, int goodCutsCount, int badCutsCount, int missedCount, int maxCombo, GlobalNamespace::GameplayModifiers* gameplayModifiers) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::LeaderboardScoreUploader::ScoreData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LeaderboardScoreUploader::ScoreData*, creationType>(playerId, beatmap, rawScore, modifiedScore, fullCombo, goodCutsCount, badCutsCount, missedCount, maxCombo, gameplayModifiers)));
    }
  }; // LeaderboardScoreUploader/ScoreData
  #pragma pack(pop)
  static check_size<sizeof(LeaderboardScoreUploader::ScoreData), 72 + sizeof(int)> __GlobalNamespace_LeaderboardScoreUploader_ScoreDataSizeCheck;
  static_assert(sizeof(LeaderboardScoreUploader::ScoreData) == 0x4C);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LeaderboardScoreUploader::ScoreData*, "", "LeaderboardScoreUploader/ScoreData");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::LeaderboardScoreUploader::ScoreData::get_playerId
// Il2CppName: get_playerId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (GlobalNamespace::LeaderboardScoreUploader::ScoreData::*)()>(&GlobalNamespace::LeaderboardScoreUploader::ScoreData::get_playerId)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LeaderboardScoreUploader::ScoreData*), "get_playerId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LeaderboardScoreUploader::ScoreData::set_playerId
// Il2CppName: set_playerId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LeaderboardScoreUploader::ScoreData::*)(::Il2CppString*)>(&GlobalNamespace::LeaderboardScoreUploader::ScoreData::set_playerId)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LeaderboardScoreUploader::ScoreData*), "set_playerId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LeaderboardScoreUploader::ScoreData::get_beatmap
// Il2CppName: get_beatmap
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::IDifficultyBeatmap* (GlobalNamespace::LeaderboardScoreUploader::ScoreData::*)()>(&GlobalNamespace::LeaderboardScoreUploader::ScoreData::get_beatmap)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LeaderboardScoreUploader::ScoreData*), "get_beatmap", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LeaderboardScoreUploader::ScoreData::set_beatmap
// Il2CppName: set_beatmap
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LeaderboardScoreUploader::ScoreData::*)(GlobalNamespace::IDifficultyBeatmap*)>(&GlobalNamespace::LeaderboardScoreUploader::ScoreData::set_beatmap)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("", "IDifficultyBeatmap")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LeaderboardScoreUploader::ScoreData*), "set_beatmap", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LeaderboardScoreUploader::ScoreData::get_gameplayModifiers
// Il2CppName: get_gameplayModifiers
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::GameplayModifiers* (GlobalNamespace::LeaderboardScoreUploader::ScoreData::*)()>(&GlobalNamespace::LeaderboardScoreUploader::ScoreData::get_gameplayModifiers)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LeaderboardScoreUploader::ScoreData*), "get_gameplayModifiers", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LeaderboardScoreUploader::ScoreData::set_gameplayModifiers
// Il2CppName: set_gameplayModifiers
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LeaderboardScoreUploader::ScoreData::*)(GlobalNamespace::GameplayModifiers*)>(&GlobalNamespace::LeaderboardScoreUploader::ScoreData::set_gameplayModifiers)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("", "GameplayModifiers")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LeaderboardScoreUploader::ScoreData*), "set_gameplayModifiers", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LeaderboardScoreUploader::ScoreData::get_rawScore
// Il2CppName: get_rawScore
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::LeaderboardScoreUploader::ScoreData::*)()>(&GlobalNamespace::LeaderboardScoreUploader::ScoreData::get_rawScore)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LeaderboardScoreUploader::ScoreData*), "get_rawScore", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LeaderboardScoreUploader::ScoreData::set_rawScore
// Il2CppName: set_rawScore
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LeaderboardScoreUploader::ScoreData::*)(int)>(&GlobalNamespace::LeaderboardScoreUploader::ScoreData::set_rawScore)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LeaderboardScoreUploader::ScoreData*), "set_rawScore", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LeaderboardScoreUploader::ScoreData::get_modifiedScore
// Il2CppName: get_modifiedScore
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::LeaderboardScoreUploader::ScoreData::*)()>(&GlobalNamespace::LeaderboardScoreUploader::ScoreData::get_modifiedScore)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LeaderboardScoreUploader::ScoreData*), "get_modifiedScore", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LeaderboardScoreUploader::ScoreData::set_modifiedScore
// Il2CppName: set_modifiedScore
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LeaderboardScoreUploader::ScoreData::*)(int)>(&GlobalNamespace::LeaderboardScoreUploader::ScoreData::set_modifiedScore)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LeaderboardScoreUploader::ScoreData*), "set_modifiedScore", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LeaderboardScoreUploader::ScoreData::get_fullCombo
// Il2CppName: get_fullCombo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::LeaderboardScoreUploader::ScoreData::*)()>(&GlobalNamespace::LeaderboardScoreUploader::ScoreData::get_fullCombo)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LeaderboardScoreUploader::ScoreData*), "get_fullCombo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LeaderboardScoreUploader::ScoreData::set_fullCombo
// Il2CppName: set_fullCombo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LeaderboardScoreUploader::ScoreData::*)(bool)>(&GlobalNamespace::LeaderboardScoreUploader::ScoreData::set_fullCombo)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LeaderboardScoreUploader::ScoreData*), "set_fullCombo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LeaderboardScoreUploader::ScoreData::get_goodCutsCount
// Il2CppName: get_goodCutsCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::LeaderboardScoreUploader::ScoreData::*)()>(&GlobalNamespace::LeaderboardScoreUploader::ScoreData::get_goodCutsCount)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LeaderboardScoreUploader::ScoreData*), "get_goodCutsCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LeaderboardScoreUploader::ScoreData::set_goodCutsCount
// Il2CppName: set_goodCutsCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LeaderboardScoreUploader::ScoreData::*)(int)>(&GlobalNamespace::LeaderboardScoreUploader::ScoreData::set_goodCutsCount)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LeaderboardScoreUploader::ScoreData*), "set_goodCutsCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LeaderboardScoreUploader::ScoreData::get_badCutsCount
// Il2CppName: get_badCutsCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::LeaderboardScoreUploader::ScoreData::*)()>(&GlobalNamespace::LeaderboardScoreUploader::ScoreData::get_badCutsCount)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LeaderboardScoreUploader::ScoreData*), "get_badCutsCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LeaderboardScoreUploader::ScoreData::set_badCutsCount
// Il2CppName: set_badCutsCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LeaderboardScoreUploader::ScoreData::*)(int)>(&GlobalNamespace::LeaderboardScoreUploader::ScoreData::set_badCutsCount)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LeaderboardScoreUploader::ScoreData*), "set_badCutsCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LeaderboardScoreUploader::ScoreData::get_missedCount
// Il2CppName: get_missedCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::LeaderboardScoreUploader::ScoreData::*)()>(&GlobalNamespace::LeaderboardScoreUploader::ScoreData::get_missedCount)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LeaderboardScoreUploader::ScoreData*), "get_missedCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LeaderboardScoreUploader::ScoreData::set_missedCount
// Il2CppName: set_missedCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LeaderboardScoreUploader::ScoreData::*)(int)>(&GlobalNamespace::LeaderboardScoreUploader::ScoreData::set_missedCount)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LeaderboardScoreUploader::ScoreData*), "set_missedCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LeaderboardScoreUploader::ScoreData::get_maxCombo
// Il2CppName: get_maxCombo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::LeaderboardScoreUploader::ScoreData::*)()>(&GlobalNamespace::LeaderboardScoreUploader::ScoreData::get_maxCombo)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LeaderboardScoreUploader::ScoreData*), "get_maxCombo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LeaderboardScoreUploader::ScoreData::set_maxCombo
// Il2CppName: set_maxCombo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LeaderboardScoreUploader::ScoreData::*)(int)>(&GlobalNamespace::LeaderboardScoreUploader::ScoreData::set_maxCombo)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LeaderboardScoreUploader::ScoreData*), "set_maxCombo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LeaderboardScoreUploader::ScoreData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
