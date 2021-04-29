// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
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
  // Forward declaring type: BeatmapCharacteristicSO
  class BeatmapCharacteristicSO;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: PreviewDifficultyBeatmapSet
  class PreviewDifficultyBeatmapSet : public ::Il2CppObject {
    public:
    // private BeatmapCharacteristicSO _beatmapCharacteristic
    // Size: 0x8
    // Offset: 0x10
    GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapCharacteristicSO*) == 0x8);
    // private BeatmapDifficulty[] _beatmapDifficulties
    // Size: 0x8
    // Offset: 0x18
    ::Array<GlobalNamespace::BeatmapDifficulty>* beatmapDifficulties;
    // Field size check
    static_assert(sizeof(::Array<GlobalNamespace::BeatmapDifficulty>*) == 0x8);
    // Creating value type constructor for type: PreviewDifficultyBeatmapSet
    PreviewDifficultyBeatmapSet(GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic_ = {}, ::Array<GlobalNamespace::BeatmapDifficulty>* beatmapDifficulties_ = {}) noexcept : beatmapCharacteristic{beatmapCharacteristic_}, beatmapDifficulties{beatmapDifficulties_} {}
    // public BeatmapCharacteristicSO get_beatmapCharacteristic()
    // Offset: 0xF80F04
    GlobalNamespace::BeatmapCharacteristicSO* get_beatmapCharacteristic();
    // public BeatmapDifficulty[] get_beatmapDifficulties()
    // Offset: 0xF80F0C
    ::Array<GlobalNamespace::BeatmapDifficulty>* get_beatmapDifficulties();
    // public System.Void .ctor(BeatmapCharacteristicSO beatmapCharacteristic, BeatmapDifficulty[] beatmapDifficulties)
    // Offset: 0xF80F14
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PreviewDifficultyBeatmapSet* New_ctor(GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic, ::Array<GlobalNamespace::BeatmapDifficulty>* beatmapDifficulties) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::PreviewDifficultyBeatmapSet::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PreviewDifficultyBeatmapSet*, creationType>(beatmapCharacteristic, beatmapDifficulties)));
    }
  }; // PreviewDifficultyBeatmapSet
  #pragma pack(pop)
  static check_size<sizeof(PreviewDifficultyBeatmapSet), 24 + sizeof(::Array<GlobalNamespace::BeatmapDifficulty>*)> __GlobalNamespace_PreviewDifficultyBeatmapSetSizeCheck;
  static_assert(sizeof(PreviewDifficultyBeatmapSet) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PreviewDifficultyBeatmapSet*, "", "PreviewDifficultyBeatmapSet");
