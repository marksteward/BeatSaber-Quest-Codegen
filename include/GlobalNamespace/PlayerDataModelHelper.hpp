// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: PlayerSaveData
#include "GlobalNamespace/PlayerSaveData.hpp"
// Including type: PlayerSaveDataV1_0_1
#include "GlobalNamespace/PlayerSaveDataV1_0_1.hpp"
// Including type: PlayerAllOverallStatsData
#include "GlobalNamespace/PlayerAllOverallStatsData.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: PlayerDataModelHelper
  // [ExtensionAttribute] Offset: FFFFFFFF
  class PlayerDataModelHelper : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: PlayerDataModelHelper
    PlayerDataModelHelper() noexcept {}
    // static public PlayerAllOverallStatsData ToPlayerAllOverallStatsData(PlayerSaveData/PlayerAllOverallStatsData playerAllOverallStatsData)
    // Offset: 0x1057124
    static GlobalNamespace::PlayerAllOverallStatsData* ToPlayerAllOverallStatsData(GlobalNamespace::PlayerSaveData::PlayerAllOverallStatsData* playerAllOverallStatsData);
    // static public PlayerAllOverallStatsData ToPlayerAllOverallStatsData(PlayerSaveDataV1_0_1/PlayerAllOverallStatsData playerAllOverallStatsData)
    // Offset: 0x1057308
    static GlobalNamespace::PlayerAllOverallStatsData* ToPlayerAllOverallStatsData(GlobalNamespace::PlayerSaveDataV1_0_1::PlayerAllOverallStatsData* playerAllOverallStatsData);
    // static public PlayerAllOverallStatsData/PlayerOverallStatsData ToPlayerOverallStats(PlayerSaveData/PlayerOverallStatsData playerAllOverallStatsData)
    // Offset: 0x1057738
    static GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData* ToPlayerOverallStats(GlobalNamespace::PlayerSaveData::PlayerOverallStatsData* playerAllOverallStatsData);
    // static public PlayerAllOverallStatsData/PlayerOverallStatsData ToPlayerOverallStats(PlayerSaveDataV1_0_1/PlayerOverallStatsData playerAllOverallStatsData)
    // Offset: 0x1057814
    static GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData* ToPlayerOverallStats(GlobalNamespace::PlayerSaveDataV1_0_1::PlayerOverallStatsData* playerAllOverallStatsData);
    // static public PlayerSaveData/PlayerAllOverallStatsData ToPlayerAllOverallStatsData(PlayerAllOverallStatsData playerAllOverallStatsData)
    // Offset: 0x10558F8
    static GlobalNamespace::PlayerSaveData::PlayerAllOverallStatsData* ToPlayerAllOverallStatsData(GlobalNamespace::PlayerAllOverallStatsData* playerAllOverallStatsData);
    // static public PlayerSaveData/PlayerOverallStatsData ToPlayerOverallStatsData(PlayerAllOverallStatsData/PlayerOverallStatsData playerOverallStatsData)
    // Offset: 0x10579AC
    static GlobalNamespace::PlayerSaveData::PlayerOverallStatsData* ToPlayerOverallStatsData(GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData* playerOverallStatsData);
  }; // PlayerDataModelHelper
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PlayerDataModelHelper*, "", "PlayerDataModelHelper");
// Writing MetadataGetter for method: GlobalNamespace::PlayerDataModelHelper::ToPlayerAllOverallStatsData
// Il2CppName: ToPlayerAllOverallStatsData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::PlayerAllOverallStatsData* (*)(GlobalNamespace::PlayerSaveData::PlayerAllOverallStatsData*)>(&GlobalNamespace::PlayerDataModelHelper::ToPlayerAllOverallStatsData)> {
  const MethodInfo* get() {
    static auto* playerAllOverallStatsData = &::il2cpp_utils::GetClassFromName("", "PlayerSaveData/PlayerAllOverallStatsData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerDataModelHelper*), "ToPlayerAllOverallStatsData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{playerAllOverallStatsData});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerDataModelHelper::ToPlayerAllOverallStatsData
// Il2CppName: ToPlayerAllOverallStatsData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::PlayerAllOverallStatsData* (*)(GlobalNamespace::PlayerSaveDataV1_0_1::PlayerAllOverallStatsData*)>(&GlobalNamespace::PlayerDataModelHelper::ToPlayerAllOverallStatsData)> {
  const MethodInfo* get() {
    static auto* playerAllOverallStatsData = &::il2cpp_utils::GetClassFromName("", "PlayerSaveDataV1_0_1/PlayerAllOverallStatsData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerDataModelHelper*), "ToPlayerAllOverallStatsData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{playerAllOverallStatsData});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerDataModelHelper::ToPlayerOverallStats
// Il2CppName: ToPlayerOverallStats
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData* (*)(GlobalNamespace::PlayerSaveData::PlayerOverallStatsData*)>(&GlobalNamespace::PlayerDataModelHelper::ToPlayerOverallStats)> {
  const MethodInfo* get() {
    static auto* playerAllOverallStatsData = &::il2cpp_utils::GetClassFromName("", "PlayerSaveData/PlayerOverallStatsData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerDataModelHelper*), "ToPlayerOverallStats", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{playerAllOverallStatsData});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerDataModelHelper::ToPlayerOverallStats
// Il2CppName: ToPlayerOverallStats
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData* (*)(GlobalNamespace::PlayerSaveDataV1_0_1::PlayerOverallStatsData*)>(&GlobalNamespace::PlayerDataModelHelper::ToPlayerOverallStats)> {
  const MethodInfo* get() {
    static auto* playerAllOverallStatsData = &::il2cpp_utils::GetClassFromName("", "PlayerSaveDataV1_0_1/PlayerOverallStatsData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerDataModelHelper*), "ToPlayerOverallStats", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{playerAllOverallStatsData});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerDataModelHelper::ToPlayerAllOverallStatsData
// Il2CppName: ToPlayerAllOverallStatsData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::PlayerSaveData::PlayerAllOverallStatsData* (*)(GlobalNamespace::PlayerAllOverallStatsData*)>(&GlobalNamespace::PlayerDataModelHelper::ToPlayerAllOverallStatsData)> {
  const MethodInfo* get() {
    static auto* playerAllOverallStatsData = &::il2cpp_utils::GetClassFromName("", "PlayerAllOverallStatsData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerDataModelHelper*), "ToPlayerAllOverallStatsData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{playerAllOverallStatsData});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerDataModelHelper::ToPlayerOverallStatsData
// Il2CppName: ToPlayerOverallStatsData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::PlayerSaveData::PlayerOverallStatsData* (*)(GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData*)>(&GlobalNamespace::PlayerDataModelHelper::ToPlayerOverallStatsData)> {
  const MethodInfo* get() {
    static auto* playerOverallStatsData = &::il2cpp_utils::GetClassFromName("", "PlayerAllOverallStatsData/PlayerOverallStatsData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerDataModelHelper*), "ToPlayerOverallStatsData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{playerOverallStatsData});
  }
};
