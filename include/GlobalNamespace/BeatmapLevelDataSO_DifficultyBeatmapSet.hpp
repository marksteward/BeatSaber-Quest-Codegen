// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: BeatmapLevelDataSO
#include "GlobalNamespace/BeatmapLevelDataSO.hpp"
// Including type: BeatmapLevelSO
#include "GlobalNamespace/BeatmapLevelSO.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  // Autogenerated type: BeatmapLevelDataSO/DifficultyBeatmapSet
  // [] Offset: FFFFFFFF
  class BeatmapLevelDataSO::DifficultyBeatmapSet : public ::Il2CppObject {
    public:
    // private System.String _beatmapCharacteristicSerializedName
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* beatmapCharacteristicSerializedName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private BeatmapLevelSO/DifficultyBeatmap[] _difficultyBeatmaps
    // Size: 0x8
    // Offset: 0x18
    ::Array<GlobalNamespace::BeatmapLevelSO::DifficultyBeatmap*>* difficultyBeatmaps;
    // Field size check
    static_assert(sizeof(::Array<GlobalNamespace::BeatmapLevelSO::DifficultyBeatmap*>*) == 0x8);
    // Creating value type constructor for type: DifficultyBeatmapSet
    DifficultyBeatmapSet(::Il2CppString* beatmapCharacteristicSerializedName_ = {}, ::Array<GlobalNamespace::BeatmapLevelSO::DifficultyBeatmap*>* difficultyBeatmaps_ = {}) noexcept : beatmapCharacteristicSerializedName{beatmapCharacteristicSerializedName_}, difficultyBeatmaps{difficultyBeatmaps_} {}
    // public System.String get_beatmapCharacteristicSerializedName()
    // Offset: 0x1A86E74
    ::Il2CppString* get_beatmapCharacteristicSerializedName();
    // public BeatmapLevelSO/DifficultyBeatmap[] get_difficultyBeatmaps()
    // Offset: 0x1A86E7C
    ::Array<GlobalNamespace::BeatmapLevelSO::DifficultyBeatmap*>* get_difficultyBeatmaps();
    // public System.Void .ctor(System.String beatmapCharacteristicSerializedName, BeatmapLevelSO/DifficultyBeatmap[] difficultyBeatmaps)
    // Offset: 0x1A86E84
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BeatmapLevelDataSO::DifficultyBeatmapSet* New_ctor(::Il2CppString* beatmapCharacteristicSerializedName, ::Array<GlobalNamespace::BeatmapLevelSO::DifficultyBeatmap*>* difficultyBeatmaps) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BeatmapLevelDataSO::DifficultyBeatmapSet::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BeatmapLevelDataSO::DifficultyBeatmapSet*, creationType>(beatmapCharacteristicSerializedName, difficultyBeatmaps)));
    }
  }; // BeatmapLevelDataSO/DifficultyBeatmapSet
  static check_size<sizeof(BeatmapLevelDataSO::DifficultyBeatmapSet), 24 + sizeof(::Array<GlobalNamespace::BeatmapLevelSO::DifficultyBeatmap*>*)> __GlobalNamespace_BeatmapLevelDataSO_DifficultyBeatmapSetSizeCheck;
  static_assert(sizeof(BeatmapLevelDataSO::DifficultyBeatmapSet) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapLevelDataSO::DifficultyBeatmapSet*, "", "BeatmapLevelDataSO/DifficultyBeatmapSet");
#pragma pack(pop)
