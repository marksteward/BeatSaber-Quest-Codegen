// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: PlayerSaveDataV1_0_1
#include "GlobalNamespace/PlayerSaveDataV1_0_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: PlayerSaveDataV1_0_1/AchievementsData
  // [TokenAttribute] Offset: FFFFFFFF
  class PlayerSaveDataV1_0_1::AchievementsData : public ::Il2CppObject {
    public:
    // public System.String[] unlockedAchievements
    // Size: 0x8
    // Offset: 0x10
    ::Array<::Il2CppString*>* unlockedAchievements;
    // Field size check
    static_assert(sizeof(::Array<::Il2CppString*>*) == 0x8);
    // public System.String[] unlockedAchievementsToUpload
    // Size: 0x8
    // Offset: 0x18
    ::Array<::Il2CppString*>* unlockedAchievementsToUpload;
    // Field size check
    static_assert(sizeof(::Array<::Il2CppString*>*) == 0x8);
    // Creating value type constructor for type: AchievementsData
    AchievementsData(::Array<::Il2CppString*>* unlockedAchievements_ = {}, ::Array<::Il2CppString*>* unlockedAchievementsToUpload_ = {}) noexcept : unlockedAchievements{unlockedAchievements_}, unlockedAchievementsToUpload{unlockedAchievementsToUpload_} {}
    // public System.Void .ctor()
    // Offset: 0x1105FA0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PlayerSaveDataV1_0_1::AchievementsData* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::PlayerSaveDataV1_0_1::AchievementsData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PlayerSaveDataV1_0_1::AchievementsData*, creationType>()));
    }
  }; // PlayerSaveDataV1_0_1/AchievementsData
  #pragma pack(pop)
  static check_size<sizeof(PlayerSaveDataV1_0_1::AchievementsData), 24 + sizeof(::Array<::Il2CppString*>*)> __GlobalNamespace_PlayerSaveDataV1_0_1_AchievementsDataSizeCheck;
  static_assert(sizeof(PlayerSaveDataV1_0_1::AchievementsData) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PlayerSaveDataV1_0_1::AchievementsData*, "", "PlayerSaveDataV1_0_1/AchievementsData");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::PlayerSaveDataV1_0_1::AchievementsData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
