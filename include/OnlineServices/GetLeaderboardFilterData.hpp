// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// WARNING Layout: Sequential may not be correctly taken into account!
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: OnlineServices.ScoresScope
#include "OnlineServices/ScoresScope.hpp"
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
// Type namespace: OnlineServices
namespace OnlineServices {
  // Size: 0x20
  // Autogenerated type: OnlineServices.GetLeaderboardFilterData
  // [] Offset: FFFFFFFF
  // [IsReadOnlyAttribute] Offset: FFFFFFFF
  struct GetLeaderboardFilterData/*, public System::ValueType*/ {
    public:
    // public readonly IDifficultyBeatmap beatmap
    // Size: 0x8
    // Offset: 0x0
    GlobalNamespace::IDifficultyBeatmap* beatmap;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IDifficultyBeatmap*) == 0x8);
    // public readonly System.Int32 count
    // Size: 0x4
    // Offset: 0x8
    int count;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public readonly System.Int32 fromRank
    // Size: 0x4
    // Offset: 0xC
    int fromRank;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public readonly OnlineServices.ScoresScope scope
    // Size: 0x4
    // Offset: 0x10
    OnlineServices::ScoresScope scope;
    // Field size check
    static_assert(sizeof(OnlineServices::ScoresScope) == 0x4);
    // Padding between fields: scope and: gameplayModifiers
    char __padding3[0x4] = {};
    // public readonly GameplayModifiers gameplayModifiers
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::GameplayModifiers* gameplayModifiers;
    // Field size check
    static_assert(sizeof(GlobalNamespace::GameplayModifiers*) == 0x8);
    // Creating value type constructor for type: GetLeaderboardFilterData
    constexpr GetLeaderboardFilterData(GlobalNamespace::IDifficultyBeatmap* beatmap_ = {}, int count_ = {}, int fromRank_ = {}, OnlineServices::ScoresScope scope_ = {}, GlobalNamespace::GameplayModifiers* gameplayModifiers_ = {}) noexcept : beatmap{beatmap_}, count{count_}, fromRank{fromRank_}, scope{scope_}, gameplayModifiers{gameplayModifiers_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // public System.Void .ctor(IDifficultyBeatmap beatmap, System.Int32 count, System.Int32 fromRank, OnlineServices.ScoresScope scope, GameplayModifiers gameplayModifiers)
    // Offset: 0xC91E50
    // template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    // ABORTED: conflicts with another method.  GetLeaderboardFilterData(GlobalNamespace::IDifficultyBeatmap* beatmap, int count, int fromRank, OnlineServices::ScoresScope scope, GlobalNamespace::GameplayModifiers* gameplayModifiers)
  }; // OnlineServices.GetLeaderboardFilterData
  static check_size<sizeof(GetLeaderboardFilterData), 24 + sizeof(GlobalNamespace::GameplayModifiers*)> __OnlineServices_GetLeaderboardFilterDataSizeCheck;
  static_assert(sizeof(GetLeaderboardFilterData) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(OnlineServices::GetLeaderboardFilterData, "OnlineServices", "GetLeaderboardFilterData");
#pragma pack(pop)
