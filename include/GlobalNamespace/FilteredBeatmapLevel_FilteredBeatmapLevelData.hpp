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
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AudioClip
  class AudioClip;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: HashSet`1<T>
  template<typename T>
  class HashSet_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: FilteredBeatmapLevel/FilteredBeatmapLevelData
  class FilteredBeatmapLevel::FilteredBeatmapLevelData : public ::Il2CppObject/*, public GlobalNamespace::IBeatmapLevelData*/ {
    public:
    // [CompilerGeneratedAttribute] Offset: 0xD48B54
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
    // public UnityEngine.AudioClip get_audioClip()
    // Offset: 0xF54BD4
    UnityEngine::AudioClip* get_audioClip();
    // public IDifficultyBeatmapSet[] get_difficultyBeatmapSets()
    // Offset: 0xF54C84
    ::Array<GlobalNamespace::IDifficultyBeatmapSet*>* get_difficultyBeatmapSets();
    // private System.Void set_difficultyBeatmapSets(IDifficultyBeatmapSet[] value)
    // Offset: 0xF54C8C
    void set_difficultyBeatmapSets(::Array<GlobalNamespace::IDifficultyBeatmapSet*>* value);
    // public System.Void .ctor(IBeatmapLevelData beatmapLevelData, BeatmapDifficultyMask allowedBeatmapDifficultyMask, System.Collections.Generic.HashSet`1<BeatmapCharacteristicSO> notAllowedCharacteristics)
    // Offset: 0xF54778
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FilteredBeatmapLevel::FilteredBeatmapLevelData* New_ctor(GlobalNamespace::IBeatmapLevelData* beatmapLevelData, GlobalNamespace::BeatmapDifficultyMask allowedBeatmapDifficultyMask, System::Collections::Generic::HashSet_1<GlobalNamespace::BeatmapCharacteristicSO*>* notAllowedCharacteristics) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::FilteredBeatmapLevel::FilteredBeatmapLevelData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FilteredBeatmapLevel::FilteredBeatmapLevelData*, creationType>(beatmapLevelData, allowedBeatmapDifficultyMask, notAllowedCharacteristics)));
    }
  }; // FilteredBeatmapLevel/FilteredBeatmapLevelData
  #pragma pack(pop)
  static check_size<sizeof(FilteredBeatmapLevel::FilteredBeatmapLevelData), 24 + sizeof(GlobalNamespace::IBeatmapLevelData*)> __GlobalNamespace_FilteredBeatmapLevel_FilteredBeatmapLevelDataSizeCheck;
  static_assert(sizeof(FilteredBeatmapLevel::FilteredBeatmapLevelData) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::FilteredBeatmapLevel::FilteredBeatmapLevelData*, "", "FilteredBeatmapLevel/FilteredBeatmapLevelData");
