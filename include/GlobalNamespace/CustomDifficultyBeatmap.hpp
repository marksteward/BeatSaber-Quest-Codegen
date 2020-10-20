// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: IDifficultyBeatmap
#include "GlobalNamespace/IDifficultyBeatmap.hpp"
// Including type: BeatmapDifficulty
#include "GlobalNamespace/BeatmapDifficulty.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IBeatmapLevel
  class IBeatmapLevel;
  // Forward declaring type: IDifficultyBeatmapSet
  class IDifficultyBeatmapSet;
  // Forward declaring type: BeatmapData
  class BeatmapData;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: CustomDifficultyBeatmap
  class CustomDifficultyBeatmap : public ::Il2CppObject/*, public GlobalNamespace::IDifficultyBeatmap*/ {
    public:
    // private IBeatmapLevel _level
    // Offset: 0x10
    GlobalNamespace::IBeatmapLevel* level;
    // private IDifficultyBeatmapSet _parentDifficultyBeatmapSet
    // Offset: 0x18
    GlobalNamespace::IDifficultyBeatmapSet* parentDifficultyBeatmapSet;
    // private BeatmapDifficulty _difficulty
    // Offset: 0x20
    GlobalNamespace::BeatmapDifficulty difficulty;
    // private System.Int32 _difficultyRank
    // Offset: 0x24
    int difficultyRank;
    // private System.Single _noteJumpMovementSpeed
    // Offset: 0x28
    float noteJumpMovementSpeed;
    // private System.Single _noteJumpStartBeatOffset
    // Offset: 0x2C
    float noteJumpStartBeatOffset;
    // private BeatmapData _beatmapData
    // Offset: 0x30
    GlobalNamespace::BeatmapData* beatmapData;
    // Creating interface conversion operator: operator GlobalNamespace::IDifficultyBeatmap
    operator GlobalNamespace::IDifficultyBeatmap() noexcept {
      return *reinterpret_cast<GlobalNamespace::IDifficultyBeatmap*>(this);
    }
    // public System.Void .ctor(IBeatmapLevel level, IDifficultyBeatmapSet parentDifficultyBeatmapSet, BeatmapDifficulty difficulty, System.Int32 difficultyRank, System.Single noteJumpMovementSpeed, System.Single noteJumpStartBeatOffset, BeatmapData beatmapData)
    // Offset: 0x1FBE088
    static CustomDifficultyBeatmap* New_ctor(GlobalNamespace::IBeatmapLevel* level, GlobalNamespace::IDifficultyBeatmapSet* parentDifficultyBeatmapSet, GlobalNamespace::BeatmapDifficulty difficulty, int difficultyRank, float noteJumpMovementSpeed, float noteJumpStartBeatOffset, GlobalNamespace::BeatmapData* beatmapData);
    // public IBeatmapLevel get_level()
    // Offset: 0x1FBE050
    // Implemented from: IDifficultyBeatmap
    // Base method: IBeatmapLevel IDifficultyBeatmap::get_level()
    GlobalNamespace::IBeatmapLevel* get_level();
    // public IDifficultyBeatmapSet get_parentDifficultyBeatmapSet()
    // Offset: 0x1FBE058
    // Implemented from: IDifficultyBeatmap
    // Base method: IDifficultyBeatmapSet IDifficultyBeatmap::get_parentDifficultyBeatmapSet()
    GlobalNamespace::IDifficultyBeatmapSet* get_parentDifficultyBeatmapSet();
    // public BeatmapDifficulty get_difficulty()
    // Offset: 0x1FBE060
    // Implemented from: IDifficultyBeatmap
    // Base method: BeatmapDifficulty IDifficultyBeatmap::get_difficulty()
    GlobalNamespace::BeatmapDifficulty get_difficulty();
    // public System.Int32 get_difficultyRank()
    // Offset: 0x1FBE068
    // Implemented from: IDifficultyBeatmap
    // Base method: System.Int32 IDifficultyBeatmap::get_difficultyRank()
    int get_difficultyRank();
    // public System.Single get_noteJumpMovementSpeed()
    // Offset: 0x1FBE070
    // Implemented from: IDifficultyBeatmap
    // Base method: System.Single IDifficultyBeatmap::get_noteJumpMovementSpeed()
    float get_noteJumpMovementSpeed();
    // public System.Single get_noteJumpStartBeatOffset()
    // Offset: 0x1FBE078
    // Implemented from: IDifficultyBeatmap
    // Base method: System.Single IDifficultyBeatmap::get_noteJumpStartBeatOffset()
    float get_noteJumpStartBeatOffset();
    // public BeatmapData get_beatmapData()
    // Offset: 0x1FBE080
    // Implemented from: IDifficultyBeatmap
    // Base method: BeatmapData IDifficultyBeatmap::get_beatmapData()
    GlobalNamespace::BeatmapData* get_beatmapData();
  }; // CustomDifficultyBeatmap
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::CustomDifficultyBeatmap*, "", "CustomDifficultyBeatmap");
#pragma pack(pop)
