// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: PlayerSaveData
#include "GlobalNamespace/PlayerSaveData.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x32
  // Autogenerated type: PlayerSaveData/PlayerSpecificSettings
  // [] Offset: FFFFFFFF
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
    // Creating value type constructor for type: PlayerSpecificSettings
    PlayerSpecificSettings(bool staticLights_ = {}, bool leftHanded_ = {}, float playerHeight_ = {}, bool automaticPlayerHeight_ = {}, float sfxVolume_ = {}, bool reduceDebris_ = {}, bool noTextsAndHuds_ = {}, bool advancedHud_ = {}, float saberTrailIntensity_ = {}, bool autoRestart_ = {}, bool noFailEffects_ = {}, float noteJumpBeatOffset_ = {}, bool hideNoteSpawnEffect_ = {}, bool adaptiveSfx_ = {}) noexcept : staticLights{staticLights_}, leftHanded{leftHanded_}, playerHeight{playerHeight_}, automaticPlayerHeight{automaticPlayerHeight_}, sfxVolume{sfxVolume_}, reduceDebris{reduceDebris_}, noTextsAndHuds{noTextsAndHuds_}, advancedHud{advancedHud_}, saberTrailIntensity{saberTrailIntensity_}, autoRestart{autoRestart_}, noFailEffects{noFailEffects_}, noteJumpBeatOffset{noteJumpBeatOffset_}, hideNoteSpawnEffect{hideNoteSpawnEffect_}, adaptiveSfx{adaptiveSfx_} {}
    // public System.Void .ctor()
    // Offset: 0xF250F4
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PlayerSaveData::PlayerSpecificSettings* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::PlayerSaveData::PlayerSpecificSettings::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PlayerSaveData::PlayerSpecificSettings*, creationType>()));
    }
  }; // PlayerSaveData/PlayerSpecificSettings
  static check_size<sizeof(PlayerSaveData::PlayerSpecificSettings), 49 + sizeof(bool)> __GlobalNamespace_PlayerSaveData_PlayerSpecificSettingsSizeCheck;
  static_assert(sizeof(PlayerSaveData::PlayerSpecificSettings) == 0x32);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PlayerSaveData::PlayerSpecificSettings*, "", "PlayerSaveData/PlayerSpecificSettings");
#pragma pack(pop)
