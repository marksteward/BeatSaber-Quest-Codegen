// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: BeatmapDataAssetsModel
  class BeatmapDataAssetsModel : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: BeatmapDataAssetsModel
    BeatmapDataAssetsModel() noexcept {}
    // static public System.String BeatmapLevelDataAssetNameForBeatmapLevel(System.String levelID)
    // Offset: 0x11C341C
    static ::Il2CppString* BeatmapLevelDataAssetNameForBeatmapLevel(::Il2CppString* levelID);
    // static public System.String AssetBundleNameForBeatmapLevel(System.String levelID)
    // Offset: 0x11C3470
    static ::Il2CppString* AssetBundleNameForBeatmapLevel(::Il2CppString* levelID);
  }; // BeatmapDataAssetsModel
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapDataAssetsModel*, "", "BeatmapDataAssetsModel");
// Writing MetadataGetter for method: GlobalNamespace::BeatmapDataAssetsModel::BeatmapLevelDataAssetNameForBeatmapLevel
// Il2CppName: BeatmapLevelDataAssetNameForBeatmapLevel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (*)(::Il2CppString*)>(&GlobalNamespace::BeatmapDataAssetsModel::BeatmapLevelDataAssetNameForBeatmapLevel)> {
  const MethodInfo* get() {
    static auto* levelID = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapDataAssetsModel*), "BeatmapLevelDataAssetNameForBeatmapLevel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{levelID});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapDataAssetsModel::AssetBundleNameForBeatmapLevel
// Il2CppName: AssetBundleNameForBeatmapLevel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (*)(::Il2CppString*)>(&GlobalNamespace::BeatmapDataAssetsModel::AssetBundleNameForBeatmapLevel)> {
  const MethodInfo* get() {
    static auto* levelID = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapDataAssetsModel*), "AssetBundleNameForBeatmapLevel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{levelID});
  }
};
