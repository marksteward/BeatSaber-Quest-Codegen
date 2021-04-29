// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
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
  // Size: 0x19
  #pragma pack(push, 1)
  // Autogenerated type: PlayerSaveData/PlayerMissionStatsData
  class PlayerSaveData::PlayerMissionStatsData : public ::Il2CppObject {
    public:
    // public System.String missionId
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* missionId;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public System.Boolean cleared
    // Size: 0x1
    // Offset: 0x18
    bool cleared;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: PlayerMissionStatsData
    PlayerMissionStatsData(::Il2CppString* missionId_ = {}, bool cleared_ = {}) noexcept : missionId{missionId_}, cleared{cleared_} {}
    // public System.Void .ctor()
    // Offset: 0xF7896C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PlayerSaveData::PlayerMissionStatsData* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::PlayerSaveData::PlayerMissionStatsData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PlayerSaveData::PlayerMissionStatsData*, creationType>()));
    }
  }; // PlayerSaveData/PlayerMissionStatsData
  #pragma pack(pop)
  static check_size<sizeof(PlayerSaveData::PlayerMissionStatsData), 24 + sizeof(bool)> __GlobalNamespace_PlayerSaveData_PlayerMissionStatsDataSizeCheck;
  static_assert(sizeof(PlayerSaveData::PlayerMissionStatsData) == 0x19);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PlayerSaveData::PlayerMissionStatsData*, "", "PlayerSaveData/PlayerMissionStatsData");
