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
    // Offset: 0x10AE1CC
    static ::Il2CppString* BeatmapLevelDataAssetNameForBeatmapLevel(::Il2CppString* levelID);
    // static public System.String AssetBundleNameForBeatmapLevel(System.String levelID)
    // Offset: 0x10AE220
    static ::Il2CppString* AssetBundleNameForBeatmapLevel(::Il2CppString* levelID);
  }; // BeatmapDataAssetsModel
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapDataAssetsModel*, "", "BeatmapDataAssetsModel");
