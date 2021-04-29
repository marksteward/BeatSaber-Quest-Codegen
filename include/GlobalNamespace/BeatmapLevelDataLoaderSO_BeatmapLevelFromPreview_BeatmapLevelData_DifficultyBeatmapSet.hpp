// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: BeatmapLevelDataLoaderSO/BeatmapLevelFromPreview/BeatmapLevelData
#include "GlobalNamespace/BeatmapLevelDataLoaderSO_BeatmapLevelFromPreview_BeatmapLevelData.hpp"
// Including type: IDifficultyBeatmapSet
#include "GlobalNamespace/IDifficultyBeatmapSet.hpp"
// Including type: BeatmapLevelSO
#include "GlobalNamespace/BeatmapLevelSO.hpp"
// Including type: BeatmapLevelDataSO
#include "GlobalNamespace/BeatmapLevelDataSO.hpp"
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
  // Forward declaring type: IDifficultyBeatmap
  class IDifficultyBeatmap;
  // Skipping declaration: IBeatmapLevel because it is already included!
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: BeatmapLevelDataLoaderSO/BeatmapLevelFromPreview/BeatmapLevelData/DifficultyBeatmapSet
  class BeatmapLevelDataLoaderSO::BeatmapLevelFromPreview::BeatmapLevelData::DifficultyBeatmapSet : public ::Il2CppObject/*, public GlobalNamespace::IDifficultyBeatmapSet*/ {
    public:
    // private BeatmapCharacteristicSO _beatmapCharacteristic
    // Size: 0x8
    // Offset: 0x10
    GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapCharacteristicSO*) == 0x8);
    // private BeatmapLevelSO/DifficultyBeatmap[] _difficultyBeatmaps
    // Size: 0x8
    // Offset: 0x18
    ::Array<GlobalNamespace::BeatmapLevelSO::DifficultyBeatmap*>* difficultyBeatmaps;
    // Field size check
    static_assert(sizeof(::Array<GlobalNamespace::BeatmapLevelSO::DifficultyBeatmap*>*) == 0x8);
    // private BeatmapLevelDataSO/DifficultyBeatmapSet _difficultyBeatmapSet
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::BeatmapLevelDataSO::DifficultyBeatmapSet* difficultyBeatmapSet;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapLevelDataSO::DifficultyBeatmapSet*) == 0x8);
    // Creating value type constructor for type: DifficultyBeatmapSet
    DifficultyBeatmapSet(GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic_ = {}, ::Array<GlobalNamespace::BeatmapLevelSO::DifficultyBeatmap*>* difficultyBeatmaps_ = {}, GlobalNamespace::BeatmapLevelDataSO::DifficultyBeatmapSet* difficultyBeatmapSet_ = {}) noexcept : beatmapCharacteristic{beatmapCharacteristic_}, difficultyBeatmaps{difficultyBeatmaps_}, difficultyBeatmapSet{difficultyBeatmapSet_} {}
    // Creating interface conversion operator: operator GlobalNamespace::IDifficultyBeatmapSet
    operator GlobalNamespace::IDifficultyBeatmapSet() noexcept {
      return *reinterpret_cast<GlobalNamespace::IDifficultyBeatmapSet*>(this);
    }
    // public BeatmapCharacteristicSO get_beatmapCharacteristic()
    // Offset: 0x10B6820
    GlobalNamespace::BeatmapCharacteristicSO* get_beatmapCharacteristic();
    // public IDifficultyBeatmap[] get_difficultyBeatmaps()
    // Offset: 0x10B6828
    ::Array<GlobalNamespace::IDifficultyBeatmap*>* get_difficultyBeatmaps();
    // public System.Void .ctor(BeatmapLevelDataSO/DifficultyBeatmapSet difficultyBeatmapSet, BeatmapCharacteristicSO beatmapCharacteristicSerializedName, IBeatmapLevel parentLevel)
    // Offset: 0x10B6740
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BeatmapLevelDataLoaderSO::BeatmapLevelFromPreview::BeatmapLevelData::DifficultyBeatmapSet* New_ctor(GlobalNamespace::BeatmapLevelDataSO::DifficultyBeatmapSet* difficultyBeatmapSet, GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristicSerializedName, GlobalNamespace::IBeatmapLevel* parentLevel) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BeatmapLevelDataLoaderSO::BeatmapLevelFromPreview::BeatmapLevelData::DifficultyBeatmapSet::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BeatmapLevelDataLoaderSO::BeatmapLevelFromPreview::BeatmapLevelData::DifficultyBeatmapSet*, creationType>(difficultyBeatmapSet, beatmapCharacteristicSerializedName, parentLevel)));
    }
  }; // BeatmapLevelDataLoaderSO/BeatmapLevelFromPreview/BeatmapLevelData/DifficultyBeatmapSet
  #pragma pack(pop)
  static check_size<sizeof(BeatmapLevelDataLoaderSO::BeatmapLevelFromPreview::BeatmapLevelData::DifficultyBeatmapSet), 32 + sizeof(GlobalNamespace::BeatmapLevelDataSO::DifficultyBeatmapSet*)> __GlobalNamespace_BeatmapLevelDataLoaderSO_BeatmapLevelFromPreview_BeatmapLevelData_DifficultyBeatmapSetSizeCheck;
  static_assert(sizeof(BeatmapLevelDataLoaderSO::BeatmapLevelFromPreview::BeatmapLevelData::DifficultyBeatmapSet) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapLevelDataLoaderSO::BeatmapLevelFromPreview::BeatmapLevelData::DifficultyBeatmapSet*, "", "BeatmapLevelDataLoaderSO/BeatmapLevelFromPreview/BeatmapLevelData/DifficultyBeatmapSet");
