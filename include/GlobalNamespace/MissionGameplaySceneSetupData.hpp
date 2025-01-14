// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: SceneSetupData
#include "GlobalNamespace/SceneSetupData.hpp"
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
  // Forward declaring type: MissionObjective
  class MissionObjective;
  // Forward declaring type: IPreviewBeatmapLevel
  class IPreviewBeatmapLevel;
  // Forward declaring type: BeatmapCharacteristicSO
  class BeatmapCharacteristicSO;
  // Forward declaring type: GameplayModifiers
  class GameplayModifiers;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: MissionGameplaySceneSetupData
  // [TokenAttribute] Offset: FFFFFFFF
  class MissionGameplaySceneSetupData : public GlobalNamespace::SceneSetupData {
    public:
    // public readonly MissionObjective[] missionObjectives
    // Size: 0x8
    // Offset: 0x10
    ::Array<GlobalNamespace::MissionObjective*>* missionObjectives;
    // Field size check
    static_assert(sizeof(::Array<GlobalNamespace::MissionObjective*>*) == 0x8);
    // public readonly System.Boolean autoRestart
    // Size: 0x1
    // Offset: 0x18
    bool autoRestart;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: autoRestart and: previewBeatmapLevel
    char __padding1[0x7] = {};
    // public readonly IPreviewBeatmapLevel previewBeatmapLevel
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::IPreviewBeatmapLevel* previewBeatmapLevel;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IPreviewBeatmapLevel*) == 0x8);
    // public readonly BeatmapDifficulty beatmapDifficulty
    // Size: 0x4
    // Offset: 0x28
    GlobalNamespace::BeatmapDifficulty beatmapDifficulty;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapDifficulty) == 0x4);
    // Padding between fields: beatmapDifficulty and: beatmapCharacteristic
    char __padding3[0x4] = {};
    // public readonly BeatmapCharacteristicSO beatmapCharacteristic
    // Size: 0x8
    // Offset: 0x30
    GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapCharacteristicSO*) == 0x8);
    // public readonly GameplayModifiers gameplayModifiers
    // Size: 0x8
    // Offset: 0x38
    GlobalNamespace::GameplayModifiers* gameplayModifiers;
    // Field size check
    static_assert(sizeof(GlobalNamespace::GameplayModifiers*) == 0x8);
    // public readonly System.String backButtonText
    // Size: 0x8
    // Offset: 0x40
    ::Il2CppString* backButtonText;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: MissionGameplaySceneSetupData
    MissionGameplaySceneSetupData(::Array<GlobalNamespace::MissionObjective*>* missionObjectives_ = {}, bool autoRestart_ = {}, GlobalNamespace::IPreviewBeatmapLevel* previewBeatmapLevel_ = {}, GlobalNamespace::BeatmapDifficulty beatmapDifficulty_ = {}, GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic_ = {}, GlobalNamespace::GameplayModifiers* gameplayModifiers_ = {}, ::Il2CppString* backButtonText_ = {}) noexcept : missionObjectives{missionObjectives_}, autoRestart{autoRestart_}, previewBeatmapLevel{previewBeatmapLevel_}, beatmapDifficulty{beatmapDifficulty_}, beatmapCharacteristic{beatmapCharacteristic_}, gameplayModifiers{gameplayModifiers_}, backButtonText{backButtonText_} {}
    // Get instance field: public readonly MissionObjective[] missionObjectives
    ::Array<GlobalNamespace::MissionObjective*>* _get_missionObjectives();
    // Set instance field: public readonly MissionObjective[] missionObjectives
    void _set_missionObjectives(::Array<GlobalNamespace::MissionObjective*>* value);
    // Get instance field: public readonly System.Boolean autoRestart
    bool _get_autoRestart();
    // Set instance field: public readonly System.Boolean autoRestart
    void _set_autoRestart(bool value);
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
    // Get instance field: public readonly GameplayModifiers gameplayModifiers
    GlobalNamespace::GameplayModifiers* _get_gameplayModifiers();
    // Set instance field: public readonly GameplayModifiers gameplayModifiers
    void _set_gameplayModifiers(GlobalNamespace::GameplayModifiers* value);
    // Get instance field: public readonly System.String backButtonText
    ::Il2CppString* _get_backButtonText();
    // Set instance field: public readonly System.String backButtonText
    void _set_backButtonText(::Il2CppString* value);
    // public System.Void .ctor(MissionObjective[] missionObjectives, System.Boolean autoRestart, IPreviewBeatmapLevel previewBeatmapLevel, BeatmapDifficulty beatmapDifficulty, BeatmapCharacteristicSO beatmapCharacteristic, GameplayModifiers gameplayModifiers, System.String backButtonText)
    // Offset: 0x1F61434
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MissionGameplaySceneSetupData* New_ctor(::Array<GlobalNamespace::MissionObjective*>* missionObjectives, bool autoRestart, GlobalNamespace::IPreviewBeatmapLevel* previewBeatmapLevel, GlobalNamespace::BeatmapDifficulty beatmapDifficulty, GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic, GlobalNamespace::GameplayModifiers* gameplayModifiers, ::Il2CppString* backButtonText) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MissionGameplaySceneSetupData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MissionGameplaySceneSetupData*, creationType>(missionObjectives, autoRestart, previewBeatmapLevel, beatmapDifficulty, beatmapCharacteristic, gameplayModifiers, backButtonText)));
    }
  }; // MissionGameplaySceneSetupData
  #pragma pack(pop)
  static check_size<sizeof(MissionGameplaySceneSetupData), 64 + sizeof(::Il2CppString*)> __GlobalNamespace_MissionGameplaySceneSetupDataSizeCheck;
  static_assert(sizeof(MissionGameplaySceneSetupData) == 0x48);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MissionGameplaySceneSetupData*, "", "MissionGameplaySceneSetupData");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MissionGameplaySceneSetupData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
