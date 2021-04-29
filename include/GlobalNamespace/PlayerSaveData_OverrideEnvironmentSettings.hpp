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
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: PlayerSaveData/OverrideEnvironmentSettings
  class PlayerSaveData::OverrideEnvironmentSettings : public ::Il2CppObject {
    public:
    // public System.Boolean overrideEnvironments
    // Size: 0x1
    // Offset: 0x10
    bool overrideEnvironments;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: overrideEnvironments and: overrideNormalEnvironmentName
    char __padding0[0x7] = {};
    // public System.String overrideNormalEnvironmentName
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* overrideNormalEnvironmentName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public System.String override360EnvironmentName
    // Size: 0x8
    // Offset: 0x20
    ::Il2CppString* override360EnvironmentName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: OverrideEnvironmentSettings
    OverrideEnvironmentSettings(bool overrideEnvironments_ = {}, ::Il2CppString* overrideNormalEnvironmentName_ = {}, ::Il2CppString* override360EnvironmentName_ = {}) noexcept : overrideEnvironments{overrideEnvironments_}, overrideNormalEnvironmentName{overrideNormalEnvironmentName_}, override360EnvironmentName{override360EnvironmentName_} {}
    // public System.Void .ctor()
    // Offset: 0xF78A74
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PlayerSaveData::OverrideEnvironmentSettings* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::PlayerSaveData::OverrideEnvironmentSettings::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PlayerSaveData::OverrideEnvironmentSettings*, creationType>()));
    }
  }; // PlayerSaveData/OverrideEnvironmentSettings
  #pragma pack(pop)
  static check_size<sizeof(PlayerSaveData::OverrideEnvironmentSettings), 32 + sizeof(::Il2CppString*)> __GlobalNamespace_PlayerSaveData_OverrideEnvironmentSettingsSizeCheck;
  static_assert(sizeof(PlayerSaveData::OverrideEnvironmentSettings) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PlayerSaveData::OverrideEnvironmentSettings*, "", "PlayerSaveData/OverrideEnvironmentSettings");
