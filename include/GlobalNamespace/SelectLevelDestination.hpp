// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: MenuDestination
#include "GlobalNamespace/MenuDestination.hpp"
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
  // Forward declaring type: IBeatmapLevelPack
  class IBeatmapLevelPack;
  // Forward declaring type: IPreviewBeatmapLevel
  class IPreviewBeatmapLevel;
  // Forward declaring type: BeatmapCharacteristicSO
  class BeatmapCharacteristicSO;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: SelectLevelDestination
  // [TokenAttribute] Offset: FFFFFFFF
  class SelectLevelDestination : public GlobalNamespace::MenuDestination {
    public:
    // public readonly IBeatmapLevelPack beatmapLevelPack
    // Size: 0x8
    // Offset: 0x10
    GlobalNamespace::IBeatmapLevelPack* beatmapLevelPack;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IBeatmapLevelPack*) == 0x8);
    // public readonly IPreviewBeatmapLevel previewBeatmapLevel
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::IPreviewBeatmapLevel* previewBeatmapLevel;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IPreviewBeatmapLevel*) == 0x8);
    // public readonly BeatmapDifficulty beatmapDifficulty
    // Size: 0x4
    // Offset: 0x20
    GlobalNamespace::BeatmapDifficulty beatmapDifficulty;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapDifficulty) == 0x4);
    // Padding between fields: beatmapDifficulty and: beatmapCharacteristic
    char __padding2[0x4] = {};
    // public readonly BeatmapCharacteristicSO beatmapCharacteristic
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapCharacteristicSO*) == 0x8);
    // Creating value type constructor for type: SelectLevelDestination
    SelectLevelDestination(GlobalNamespace::IBeatmapLevelPack* beatmapLevelPack_ = {}, GlobalNamespace::IPreviewBeatmapLevel* previewBeatmapLevel_ = {}, GlobalNamespace::BeatmapDifficulty beatmapDifficulty_ = {}, GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic_ = {}) noexcept : beatmapLevelPack{beatmapLevelPack_}, previewBeatmapLevel{previewBeatmapLevel_}, beatmapDifficulty{beatmapDifficulty_}, beatmapCharacteristic{beatmapCharacteristic_} {}
    // Get instance field: public readonly IBeatmapLevelPack beatmapLevelPack
    GlobalNamespace::IBeatmapLevelPack* _get_beatmapLevelPack();
    // Set instance field: public readonly IBeatmapLevelPack beatmapLevelPack
    void _set_beatmapLevelPack(GlobalNamespace::IBeatmapLevelPack* value);
    // Get instance field: public readonly IPreviewBeatmapLevel previewBeatmapLevel
    GlobalNamespace::IPreviewBeatmapLevel* _get_previewBeatmapLevel();
    // Set instance field: public readonly IPreviewBeatmapLevel previewBeatmapLevel
    void _set_previewBeatmapLevel(GlobalNamespace::IPreviewBeatmapLevel* value);
    // Get instance field: public readonly BeatmapDifficulty beatmapDifficulty
    GlobalNamespace::BeatmapDifficulty _get_beatmapDifficulty();
    // Set instance field: public readonly BeatmapDifficulty beatmapDifficulty
    void _set_beatmapDifficulty(GlobalNamespace::BeatmapDifficulty value);
    // Get instance field: public readonly BeatmapCharacteristicSO beatmapCharacteristic
    GlobalNamespace::BeatmapCharacteristicSO* _get_beatmapCharacteristic();
    // Set instance field: public readonly BeatmapCharacteristicSO beatmapCharacteristic
    void _set_beatmapCharacteristic(GlobalNamespace::BeatmapCharacteristicSO* value);
    // public System.Void .ctor(IBeatmapLevelPack beatmapLevelPack, IPreviewBeatmapLevel previewBeatmapLevel, BeatmapDifficulty beatmapDifficulty, BeatmapCharacteristicSO beatmapCharacteristic)
    // Offset: 0x1155584
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SelectLevelDestination* New_ctor(GlobalNamespace::IBeatmapLevelPack* beatmapLevelPack, GlobalNamespace::IPreviewBeatmapLevel* previewBeatmapLevel, GlobalNamespace::BeatmapDifficulty beatmapDifficulty, GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::SelectLevelDestination::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SelectLevelDestination*, creationType>(beatmapLevelPack, previewBeatmapLevel, beatmapDifficulty, beatmapCharacteristic)));
    }
  }; // SelectLevelDestination
  #pragma pack(pop)
  static check_size<sizeof(SelectLevelDestination), 40 + sizeof(GlobalNamespace::BeatmapCharacteristicSO*)> __GlobalNamespace_SelectLevelDestinationSizeCheck;
  static_assert(sizeof(SelectLevelDestination) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SelectLevelDestination*, "", "SelectLevelDestination");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::SelectLevelDestination::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
