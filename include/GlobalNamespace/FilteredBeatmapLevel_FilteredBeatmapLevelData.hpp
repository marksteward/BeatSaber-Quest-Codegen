// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: FilteredBeatmapLevel
#include "GlobalNamespace/FilteredBeatmapLevel.hpp"
// Including type: IBeatmapLevelData
#include "GlobalNamespace/IBeatmapLevelData.hpp"
// Including type: BeatmapDifficultyMask
#include "GlobalNamespace/BeatmapDifficultyMask.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IDifficultyBeatmapSet
  class IDifficultyBeatmapSet;
  // Forward declaring type: BeatmapCharacteristicSO
  class BeatmapCharacteristicSO;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: HashSet`1<T>
  template<typename T>
  class HashSet_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AudioClip
  class AudioClip;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: FilteredBeatmapLevel/FilteredBeatmapLevelData
  // [] Offset: FFFFFFFF
  class FilteredBeatmapLevel::FilteredBeatmapLevelData : public ::Il2CppObject/*, public GlobalNamespace::IBeatmapLevelData*/ {
    public:
    // [CompilerGeneratedAttribute] Offset: 0xDD3FBC
    // private IDifficultyBeatmapSet[] <difficultyBeatmapSets>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    ::Array<GlobalNamespace::IDifficultyBeatmapSet*>* difficultyBeatmapSets;
    // Field size check
    static_assert(sizeof(::Array<GlobalNamespace::IDifficultyBeatmapSet*>*) == 0x8);
    // private readonly IBeatmapLevelData _beatmapLevelData
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::IBeatmapLevelData* beatmapLevelData;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IBeatmapLevelData*) == 0x8);
    // Creating value type constructor for type: FilteredBeatmapLevelData
    FilteredBeatmapLevelData(::Array<GlobalNamespace::IDifficultyBeatmapSet*>* difficultyBeatmapSets_ = {}, GlobalNamespace::IBeatmapLevelData* beatmapLevelData_ = {}) noexcept : difficultyBeatmapSets{difficultyBeatmapSets_}, beatmapLevelData{beatmapLevelData_} {}
    // Creating interface conversion operator: operator GlobalNamespace::IBeatmapLevelData
    operator GlobalNamespace::IBeatmapLevelData() noexcept {
      return *reinterpret_cast<GlobalNamespace::IBeatmapLevelData*>(this);
    }
    // private System.Void set_difficultyBeatmapSets(IDifficultyBeatmapSet[] value)
    // Offset: 0x1A128F8
    void set_difficultyBeatmapSets(::Array<GlobalNamespace::IDifficultyBeatmapSet*>* value);
    // public System.Void .ctor(IBeatmapLevelData beatmapLevelData, BeatmapDifficultyMask allowedBeatmapDifficultyMask, System.Collections.Generic.HashSet`1<BeatmapCharacteristicSO> notAllowedCharacteristics)
    // Offset: 0x1A123D0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FilteredBeatmapLevel::FilteredBeatmapLevelData* New_ctor(GlobalNamespace::IBeatmapLevelData* beatmapLevelData, GlobalNamespace::BeatmapDifficultyMask allowedBeatmapDifficultyMask, System::Collections::Generic::HashSet_1<GlobalNamespace::BeatmapCharacteristicSO*>* notAllowedCharacteristics) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::FilteredBeatmapLevel::FilteredBeatmapLevelData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FilteredBeatmapLevel::FilteredBeatmapLevelData*, creationType>(beatmapLevelData, allowedBeatmapDifficultyMask, notAllowedCharacteristics)));
    }
    // public UnityEngine.AudioClip get_audioClip()
    // Offset: 0x1A12840
    // Implemented from: IBeatmapLevelData
    // Base method: UnityEngine.AudioClip IBeatmapLevelData::get_audioClip()
    UnityEngine::AudioClip* get_audioClip();
    // public IDifficultyBeatmapSet[] get_difficultyBeatmapSets()
    // Offset: 0x1A128F0
    // Implemented from: IBeatmapLevelData
    // Base method: IDifficultyBeatmapSet[] IBeatmapLevelData::get_difficultyBeatmapSets()
    ::Array<GlobalNamespace::IDifficultyBeatmapSet*>* get_difficultyBeatmapSets();
  }; // FilteredBeatmapLevel/FilteredBeatmapLevelData
  static check_size<sizeof(FilteredBeatmapLevel::FilteredBeatmapLevelData), 24 + sizeof(GlobalNamespace::IBeatmapLevelData*)> __GlobalNamespace_FilteredBeatmapLevel_FilteredBeatmapLevelDataSizeCheck;
  static_assert(sizeof(FilteredBeatmapLevel::FilteredBeatmapLevelData) == 0x20);
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::FilteredBeatmapLevel::FilteredBeatmapLevelData*, "", "FilteredBeatmapLevel/FilteredBeatmapLevelData");
