// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: PlayerSaveData
#include "GlobalNamespace/PlayerSaveData.hpp"
// Including type: EnvironmentEffectsFilterPreset
#include "GlobalNamespace/EnvironmentEffectsFilterPreset.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x3C
  #pragma pack(push, 1)
  // Autogenerated type: PlayerSaveData/PlayerSpecificSettings
  // [TokenAttribute] Offset: FFFFFFFF
  class PlayerSaveData::PlayerSpecificSettings : public ::Il2CppObject {
    public:
    // public System.Boolean staticLights
    // Size: 0x1
    // Offset: 0x10
    bool staticLights;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean leftHanded
    // Size: 0x1
    // Offset: 0x11
    bool leftHanded;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: leftHanded and: playerHeight
    char __padding1[0x2] = {};
    // public System.Single playerHeight
    // Size: 0x4
    // Offset: 0x14
    float playerHeight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Boolean automaticPlayerHeight
    // Size: 0x1
    // Offset: 0x18
    bool automaticPlayerHeight;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: automaticPlayerHeight and: sfxVolume
    char __padding3[0x3] = {};
    // public System.Single sfxVolume
    // Size: 0x4
    // Offset: 0x1C
    float sfxVolume;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Boolean reduceDebris
    // Size: 0x1
    // Offset: 0x20
    bool reduceDebris;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean noTextsAndHuds
    // Size: 0x1
    // Offset: 0x21
    bool noTextsAndHuds;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean advancedHud
    // Size: 0x1
    // Offset: 0x22
    bool advancedHud;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: advancedHud and: saberTrailIntensity
    char __padding7[0x1] = {};
    // public System.Single saberTrailIntensity
    // Size: 0x4
    // Offset: 0x24
    float saberTrailIntensity;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Boolean autoRestart
    // Size: 0x1
    // Offset: 0x28
    bool autoRestart;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean noFailEffects
    // Size: 0x1
    // Offset: 0x29
    bool noFailEffects;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: noFailEffects and: noteJumpBeatOffset
    char __padding10[0x2] = {};
    // public System.Single noteJumpBeatOffset
    // Size: 0x4
    // Offset: 0x2C
    float noteJumpBeatOffset;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Boolean hideNoteSpawnEffect
    // Size: 0x1
    // Offset: 0x30
    bool hideNoteSpawnEffect;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean adaptiveSfx
    // Size: 0x1
    // Offset: 0x31
    bool adaptiveSfx;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: adaptiveSfx and: environmentEffectsFilterDefaultPreset
    char __padding13[0x2] = {};
    // public EnvironmentEffectsFilterPreset environmentEffectsFilterDefaultPreset
    // Size: 0x4
    // Offset: 0x34
    GlobalNamespace::EnvironmentEffectsFilterPreset environmentEffectsFilterDefaultPreset;
    // Field size check
    static_assert(sizeof(GlobalNamespace::EnvironmentEffectsFilterPreset) == 0x4);
    // public EnvironmentEffectsFilterPreset environmentEffectsFilterExpertPlusPreset
    // Size: 0x4
    // Offset: 0x38
    GlobalNamespace::EnvironmentEffectsFilterPreset environmentEffectsFilterExpertPlusPreset;
    // Field size check
    static_assert(sizeof(GlobalNamespace::EnvironmentEffectsFilterPreset) == 0x4);
    // Creating value type constructor for type: PlayerSpecificSettings
    PlayerSpecificSettings(bool staticLights_ = {}, bool leftHanded_ = {}, float playerHeight_ = {}, bool automaticPlayerHeight_ = {}, float sfxVolume_ = {}, bool reduceDebris_ = {}, bool noTextsAndHuds_ = {}, bool advancedHud_ = {}, float saberTrailIntensity_ = {}, bool autoRestart_ = {}, bool noFailEffects_ = {}, float noteJumpBeatOffset_ = {}, bool hideNoteSpawnEffect_ = {}, bool adaptiveSfx_ = {}, GlobalNamespace::EnvironmentEffectsFilterPreset environmentEffectsFilterDefaultPreset_ = {}, GlobalNamespace::EnvironmentEffectsFilterPreset environmentEffectsFilterExpertPlusPreset_ = {}) noexcept : staticLights{staticLights_}, leftHanded{leftHanded_}, playerHeight{playerHeight_}, automaticPlayerHeight{automaticPlayerHeight_}, sfxVolume{sfxVolume_}, reduceDebris{reduceDebris_}, noTextsAndHuds{noTextsAndHuds_}, advancedHud{advancedHud_}, saberTrailIntensity{saberTrailIntensity_}, autoRestart{autoRestart_}, noFailEffects{noFailEffects_}, noteJumpBeatOffset{noteJumpBeatOffset_}, hideNoteSpawnEffect{hideNoteSpawnEffect_}, adaptiveSfx{adaptiveSfx_}, environmentEffectsFilterDefaultPreset{environmentEffectsFilterDefaultPreset_}, environmentEffectsFilterExpertPlusPreset{environmentEffectsFilterExpertPlusPreset_} {}
    // Get instance field: public System.Boolean staticLights
    bool _get_staticLights();
    // Set instance field: public System.Boolean staticLights
    void _set_staticLights(bool value);
    // Get instance field: public System.Boolean leftHanded
    bool _get_leftHanded();
    // Set instance field: public System.Boolean leftHanded
    void _set_leftHanded(bool value);
    // Get instance field: public System.Single playerHeight
    float _get_playerHeight();
    // Set instance field: public System.Single playerHeight
    void _set_playerHeight(float value);
    // Get instance field: public System.Boolean automaticPlayerHeight
    bool _get_automaticPlayerHeight();
    // Set instance field: public System.Boolean automaticPlayerHeight
    void _set_automaticPlayerHeight(bool value);
    // Get instance field: public System.Single sfxVolume
    float _get_sfxVolume();
    // Set instance field: public System.Single sfxVolume
    void _set_sfxVolume(float value);
    // Get instance field: public System.Boolean reduceDebris
    bool _get_reduceDebris();
    // Set instance field: public System.Boolean reduceDebris
    void _set_reduceDebris(bool value);
    // Get instance field: public System.Boolean noTextsAndHuds
    bool _get_noTextsAndHuds();
    // Set instance field: public System.Boolean noTextsAndHuds
    void _set_noTextsAndHuds(bool value);
    // Get instance field: public System.Boolean advancedHud
    bool _get_advancedHud();
    // Set instance field: public System.Boolean advancedHud
    void _set_advancedHud(bool value);
    // Get instance field: public System.Single saberTrailIntensity
    float _get_saberTrailIntensity();
    // Set instance field: public System.Single saberTrailIntensity
    void _set_saberTrailIntensity(float value);
    // Get instance field: public System.Boolean autoRestart
    bool _get_autoRestart();
    // Set instance field: public System.Boolean autoRestart
    void _set_autoRestart(bool value);
    // Get instance field: public System.Boolean noFailEffects
    bool _get_noFailEffects();
    // Set instance field: public System.Boolean noFailEffects
    void _set_noFailEffects(bool value);
    // Get instance field: public System.Single noteJumpBeatOffset
    float _get_noteJumpBeatOffset();
    // Set instance field: public System.Single noteJumpBeatOffset
    void _set_noteJumpBeatOffset(float value);
    // Get instance field: public System.Boolean hideNoteSpawnEffect
    bool _get_hideNoteSpawnEffect();
    // Set instance field: public System.Boolean hideNoteSpawnEffect
    void _set_hideNoteSpawnEffect(bool value);
    // Get instance field: public System.Boolean adaptiveSfx
    bool _get_adaptiveSfx();
    // Set instance field: public System.Boolean adaptiveSfx
    void _set_adaptiveSfx(bool value);
    // Get instance field: public EnvironmentEffectsFilterPreset environmentEffectsFilterDefaultPreset
    GlobalNamespace::EnvironmentEffectsFilterPreset _get_environmentEffectsFilterDefaultPreset();
    // Set instance field: public EnvironmentEffectsFilterPreset environmentEffectsFilterDefaultPreset
    void _set_environmentEffectsFilterDefaultPreset(GlobalNamespace::EnvironmentEffectsFilterPreset value);
    // Get instance field: public EnvironmentEffectsFilterPreset environmentEffectsFilterExpertPlusPreset
    GlobalNamespace::EnvironmentEffectsFilterPreset _get_environmentEffectsFilterExpertPlusPreset();
    // Set instance field: public EnvironmentEffectsFilterPreset environmentEffectsFilterExpertPlusPreset
    void _set_environmentEffectsFilterExpertPlusPreset(GlobalNamespace::EnvironmentEffectsFilterPreset value);
    // public System.Void .ctor()
    // Offset: 0x1102188
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PlayerSaveData::PlayerSpecificSettings* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::PlayerSaveData::PlayerSpecificSettings::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PlayerSaveData::PlayerSpecificSettings*, creationType>()));
    }
  }; // PlayerSaveData/PlayerSpecificSettings
  #pragma pack(pop)
  static check_size<sizeof(PlayerSaveData::PlayerSpecificSettings), 56 + sizeof(GlobalNamespace::EnvironmentEffectsFilterPreset)> __GlobalNamespace_PlayerSaveData_PlayerSpecificSettingsSizeCheck;
  static_assert(sizeof(PlayerSaveData::PlayerSpecificSettings) == 0x3C);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PlayerSaveData::PlayerSpecificSettings*, "", "PlayerSaveData/PlayerSpecificSettings");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::PlayerSaveData::PlayerSpecificSettings::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
