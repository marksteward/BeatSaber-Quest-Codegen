// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: SteamLevelProductsModelSO
#include "GlobalNamespace/SteamLevelProductsModelSO.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: SteamLevelProductsModelSO/LevelProductData
  // [] Offset: FFFFFFFF
  class SteamLevelProductsModelSO::LevelProductData : public ::Il2CppObject {
    public:
    // private System.UInt32 _appId
    // Size: 0x4
    // Offset: 0x10
    uint appId;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // Padding between fields: appId and: levelId
    char __padding0[0x4] = {};
    // private System.String _levelId
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* levelId;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: LevelProductData
    LevelProductData(uint appId_ = {}, ::Il2CppString* levelId_ = {}) noexcept : appId{appId_}, levelId{levelId_} {}
    // public System.UInt32 get_appId()
    // Offset: 0xF45B50
    uint get_appId();
    // public System.String get_levelId()
    // Offset: 0xF45B58
    ::Il2CppString* get_levelId();
    // public System.Void .ctor()
    // Offset: 0xF45B60
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SteamLevelProductsModelSO::LevelProductData* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::SteamLevelProductsModelSO::LevelProductData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SteamLevelProductsModelSO::LevelProductData*, creationType>()));
    }
  }; // SteamLevelProductsModelSO/LevelProductData
  static check_size<sizeof(SteamLevelProductsModelSO::LevelProductData), 24 + sizeof(::Il2CppString*)> __GlobalNamespace_SteamLevelProductsModelSO_LevelProductDataSizeCheck;
  static_assert(sizeof(SteamLevelProductsModelSO::LevelProductData) == 0x20);
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SteamLevelProductsModelSO::LevelProductData*, "", "SteamLevelProductsModelSO/LevelProductData");
