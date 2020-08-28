// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: IBeatmapLevelCollection
#include "GlobalNamespace/IBeatmapLevelCollection.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IPreviewBeatmapLevel
  class IPreviewBeatmapLevel;
  // Forward declaring type: BeatmapCharacteristicSO
  class BeatmapCharacteristicSO;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: BeatmapLevelCollection
  class BeatmapLevelCollection : public ::Il2CppObject, public GlobalNamespace::IBeatmapLevelCollection {
    public:
    // private IPreviewBeatmapLevel[] _levels
    // Offset: 0x10
    ::Array<GlobalNamespace::IPreviewBeatmapLevel*>* levels;
    // Creating conversion operator: operator ::Array<GlobalNamespace::IPreviewBeatmapLevel*>*
    constexpr operator ::Array<GlobalNamespace::IPreviewBeatmapLevel*>*() const {
      return levels;
    }
    // public System.Void .ctor(IPreviewBeatmapLevel[] levels)
    // Offset: 0xB95D3C
    static BeatmapLevelCollection* New_ctor(::Array<GlobalNamespace::IPreviewBeatmapLevel*>* levels);
    // static public BeatmapLevelCollection CreateBeatmapLevelCollectionByUsingBeatmapCharacteristicFiltering(IBeatmapLevelCollection beatmapLevelCollection, BeatmapCharacteristicSO beatmapCharacteristic)
    // Offset: 0xB95D70
    static GlobalNamespace::BeatmapLevelCollection* CreateBeatmapLevelCollectionByUsingBeatmapCharacteristicFiltering(GlobalNamespace::IBeatmapLevelCollection* beatmapLevelCollection, GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic);
    // public IPreviewBeatmapLevel[] get_beatmapLevels()
    // Offset: 0xB95D34
    // Implemented from: IBeatmapLevelCollection
    // Base method: IPreviewBeatmapLevel[] IBeatmapLevelCollection::get_beatmapLevels()
    ::Array<GlobalNamespace::IPreviewBeatmapLevel*>* get_beatmapLevels();
  }; // BeatmapLevelCollection
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapLevelCollection*, "", "BeatmapLevelCollection");
#pragma pack(pop)
