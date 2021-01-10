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
  // Size: 0x18
  // Autogenerated type: PlayerSaveData/PracticeSettings
  // [] Offset: FFFFFFFF
  class PlayerSaveData::PracticeSettings : public ::Il2CppObject {
    public:
    // public System.Single startSongTime
    // Size: 0x4
    // Offset: 0x10
    float startSongTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single songSpeedMul
    // Size: 0x4
    // Offset: 0x14
    float songSpeedMul;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Creating value type constructor for type: PracticeSettings
    PracticeSettings(float startSongTime_ = {}, float songSpeedMul_ = {}) noexcept : startSongTime{startSongTime_}, songSpeedMul{songSpeedMul_} {}
    // public System.Void .ctor()
    // Offset: 0xF2511C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PlayerSaveData::PracticeSettings* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::PlayerSaveData::PracticeSettings::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PlayerSaveData::PracticeSettings*, creationType>()));
    }
  }; // PlayerSaveData/PracticeSettings
  static check_size<sizeof(PlayerSaveData::PracticeSettings), 20 + sizeof(float)> __GlobalNamespace_PlayerSaveData_PracticeSettingsSizeCheck;
  static_assert(sizeof(PlayerSaveData::PracticeSettings) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PlayerSaveData::PracticeSettings*, "", "PlayerSaveData/PracticeSettings");
#pragma pack(pop)
