// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
// Including type: System.ValueType
#include "System/ValueType.hpp"
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
// Begin il2cpp-utils forward declares
struct Il2CppString;
// Completed il2cpp-utils forward declares
// Type namespace: OnlineServices
namespace OnlineServices {
  // Size: 0x30
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: OnlineServices.LevelScoreResultsData
  // [IsReadOnlyAttribute] Offset: FFFFFFFF
  struct LevelScoreResultsData/*, public System::ValueType*/ {
    public:
    // public readonly IDifficultyBeatmap difficultyBeatmap
    // Size: 0x8
    // Offset: 0x0
    GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IDifficultyBeatmap*) == 0x8);
    // public readonly System.Int32 rawScore
    // Size: 0x4
    // Offset: 0x8
    int rawScore;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public readonly System.Int32 modifiedScore
    // Size: 0x4
    // Offset: 0xC
    int modifiedScore;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public readonly System.Boolean fullCombo
    // Size: 0x1
    // Offset: 0x10
    bool fullCombo;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: fullCombo and: goodCutsCount
    char __padding3[0x3] = {};
    // public readonly System.Int32 goodCutsCount
    // Size: 0x4
    // Offset: 0x14
    int goodCutsCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public readonly System.Int32 badCutsCount
    // Size: 0x4
    // Offset: 0x18
    int badCutsCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public readonly System.Int32 missedCount
    // Size: 0x4
    // Offset: 0x1C
    int missedCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public readonly System.Int32 maxCombo
    // Size: 0x4
    // Offset: 0x20
    int maxCombo;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: maxCombo and: gameplayModifiers
    char __padding7[0x4] = {};
    // public readonly GameplayModifiers gameplayModifiers
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::GameplayModifiers* gameplayModifiers;
    // Field size check
    static_assert(sizeof(GlobalNamespace::GameplayModifiers*) == 0x8);
    // Creating value type constructor for type: LevelScoreResultsData
    constexpr LevelScoreResultsData(GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap_ = {}, int rawScore_ = {}, int modifiedScore_ = {}, bool fullCombo_ = {}, int goodCutsCount_ = {}, int badCutsCount_ = {}, int missedCount_ = {}, int maxCombo_ = {}, GlobalNamespace::GameplayModifiers* gameplayModifiers_ = {}) noexcept : difficultyBeatmap{difficultyBeatmap_}, rawScore{rawScore_}, modifiedScore{modifiedScore_}, fullCombo{fullCombo_}, goodCutsCount{goodCutsCount_}, badCutsCount{badCutsCount_}, missedCount{missedCount_}, maxCombo{maxCombo_}, gameplayModifiers{gameplayModifiers_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // public System.Void .ctor(IDifficultyBeatmap difficultyBeatmap, System.Int32 rawScore, System.Int32 modifiedScore, System.Boolean fullCombo, System.Int32 goodCutsCount, System.Int32 badCutsCount, System.Int32 missedCount, System.Int32 maxCombo, GameplayModifiers gameplayModifiers)
    // Offset: 0xEE64E8
    // template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    // ABORTED: conflicts with another method.  LevelScoreResultsData(GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap, int rawScore, int modifiedScore, bool fullCombo, int goodCutsCount, int badCutsCount, int missedCount, int maxCombo, GlobalNamespace::GameplayModifiers* gameplayModifiers)
    // public override System.String ToString()
    // Offset: 0xEE6510
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::Il2CppString* ToString();
  }; // OnlineServices.LevelScoreResultsData
  #pragma pack(pop)
  static check_size<sizeof(LevelScoreResultsData), 40 + sizeof(GlobalNamespace::GameplayModifiers*)> __OnlineServices_LevelScoreResultsDataSizeCheck;
  static_assert(sizeof(LevelScoreResultsData) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(OnlineServices::LevelScoreResultsData, "OnlineServices", "LevelScoreResultsData");
// Writing MetadataGetter for method: OnlineServices::LevelScoreResultsData::LevelScoreResultsData
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: OnlineServices::LevelScoreResultsData::ToString
// Il2CppName: ToString
// Cannot perform method pointer template specialization from operators!
