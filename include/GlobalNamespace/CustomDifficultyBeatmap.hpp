// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: IDifficultyBeatmap
#include "GlobalNamespace/IDifficultyBeatmap.hpp"
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
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: CustomDifficultyBeatmap
  class CustomDifficultyBeatmap : public ::Il2CppObject/*, public GlobalNamespace::IDifficultyBeatmap*/ {
    public:
    // private IBeatmapLevel _level
    // Size: 0x8
    // Offset: 0x10
    GlobalNamespace::IBeatmapLevel* level;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IBeatmapLevel*) == 0x8);
    // private IDifficultyBeatmapSet _parentDifficultyBeatmapSet
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::IDifficultyBeatmapSet* parentDifficultyBeatmapSet;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IDifficultyBeatmapSet*) == 0x8);
    // private BeatmapDifficulty _difficulty
    // Size: 0x4
    // Offset: 0x20
    GlobalNamespace::BeatmapDifficulty difficulty;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapDifficulty) == 0x4);
    // private System.Int32 _difficultyRank
    // Size: 0x4
    // Offset: 0x24
    int difficultyRank;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Single _noteJumpMovementSpeed
    // Size: 0x4
    // Offset: 0x28
    float noteJumpMovementSpeed;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _noteJumpStartBeatOffset
    // Size: 0x4
    // Offset: 0x2C
    float noteJumpStartBeatOffset;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private BeatmapData _beatmapData
    // Size: 0x8
    // Offset: 0x30
    GlobalNamespace::BeatmapData* beatmapData;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapData*) == 0x8);
    // Creating value type constructor for type: CustomDifficultyBeatmap
    CustomDifficultyBeatmap(GlobalNamespace::IBeatmapLevel* level_ = {}, GlobalNamespace::IDifficultyBeatmapSet* parentDifficultyBeatmapSet_ = {}, GlobalNamespace::BeatmapDifficulty difficulty_ = {}, int difficultyRank_ = {}, float noteJumpMovementSpeed_ = {}, float noteJumpStartBeatOffset_ = {}, GlobalNamespace::BeatmapData* beatmapData_ = {}) noexcept : level{level_}, parentDifficultyBeatmapSet{parentDifficultyBeatmapSet_}, difficulty{difficulty_}, difficultyRank{difficultyRank_}, noteJumpMovementSpeed{noteJumpMovementSpeed_}, noteJumpStartBeatOffset{noteJumpStartBeatOffset_}, beatmapData{beatmapData_} {}
    // Creating interface conversion operator: operator GlobalNamespace::IDifficultyBeatmap
    operator GlobalNamespace::IDifficultyBeatmap() noexcept {
      return *reinterpret_cast<GlobalNamespace::IDifficultyBeatmap*>(this);
    }
    // public IBeatmapLevel get_level()
    // Offset: 0x11995AC
    GlobalNamespace::IBeatmapLevel* get_level();
    // public IDifficultyBeatmapSet get_parentDifficultyBeatmapSet()
    // Offset: 0x11995B4
    GlobalNamespace::IDifficultyBeatmapSet* get_parentDifficultyBeatmapSet();
    // public BeatmapDifficulty get_difficulty()
    // Offset: 0x11995BC
    GlobalNamespace::BeatmapDifficulty get_difficulty();
    // public System.Int32 get_difficultyRank()
    // Offset: 0x11995C4
    int get_difficultyRank();
    // public System.Single get_noteJumpMovementSpeed()
    // Offset: 0x11995CC
    float get_noteJumpMovementSpeed();
    // public System.Single get_noteJumpStartBeatOffset()
    // Offset: 0x11995D4
    float get_noteJumpStartBeatOffset();
    // public BeatmapData get_beatmapData()
    // Offset: 0x11995DC
    GlobalNamespace::BeatmapData* get_beatmapData();
    // public System.Void .ctor(IBeatmapLevel level, IDifficultyBeatmapSet parentDifficultyBeatmapSet, BeatmapDifficulty difficulty, System.Int32 difficultyRank, System.Single noteJumpMovementSpeed, System.Single noteJumpStartBeatOffset, BeatmapData beatmapData)
    // Offset: 0x11995E4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CustomDifficultyBeatmap* New_ctor(GlobalNamespace::IBeatmapLevel* level, GlobalNamespace::IDifficultyBeatmapSet* parentDifficultyBeatmapSet, GlobalNamespace::BeatmapDifficulty difficulty, int difficultyRank, float noteJumpMovementSpeed, float noteJumpStartBeatOffset, GlobalNamespace::BeatmapData* beatmapData) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::CustomDifficultyBeatmap::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CustomDifficultyBeatmap*, creationType>(level, parentDifficultyBeatmapSet, difficulty, difficultyRank, noteJumpMovementSpeed, noteJumpStartBeatOffset, beatmapData)));
    }
  }; // CustomDifficultyBeatmap
  #pragma pack(pop)
  static check_size<sizeof(CustomDifficultyBeatmap), 48 + sizeof(GlobalNamespace::BeatmapData*)> __GlobalNamespace_CustomDifficultyBeatmapSizeCheck;
  static_assert(sizeof(CustomDifficultyBeatmap) == 0x38);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::CustomDifficultyBeatmap*, "", "CustomDifficultyBeatmap");
// Writing MetadataGetter for method: GlobalNamespace::CustomDifficultyBeatmap::get_level
// Il2CppName: get_level
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::CustomDifficultyBeatmap::get_parentDifficultyBeatmapSet
// Il2CppName: get_parentDifficultyBeatmapSet
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::CustomDifficultyBeatmap::get_difficulty
// Il2CppName: get_difficulty
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::CustomDifficultyBeatmap::get_difficultyRank
// Il2CppName: get_difficultyRank
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::CustomDifficultyBeatmap::get_noteJumpMovementSpeed
// Il2CppName: get_noteJumpMovementSpeed
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::CustomDifficultyBeatmap::get_noteJumpStartBeatOffset
// Il2CppName: get_noteJumpStartBeatOffset
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::CustomDifficultyBeatmap::get_beatmapData
// Il2CppName: get_beatmapData
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::CustomDifficultyBeatmap::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
