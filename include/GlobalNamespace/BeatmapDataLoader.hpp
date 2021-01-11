// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: BeatmapSaveData
#include "GlobalNamespace/BeatmapSaveData.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BeatmapData
  class BeatmapData;
  // Forward declaring type: ColorType
  struct ColorType;
  // Forward declaring type: BeatmapEventType
  struct BeatmapEventType;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: BeatmapDataLoader
  // [] Offset: FFFFFFFF
  class BeatmapDataLoader : public ::Il2CppObject {
    public:
    // Nested type: GlobalNamespace::BeatmapDataLoader::BpmChangeData
    struct BpmChangeData;
    // Nested type: GlobalNamespace::BeatmapDataLoader::$$c__DisplayClass2_0
    struct $$c__DisplayClass2_0;
    // Nested type: GlobalNamespace::BeatmapDataLoader::$$c
    class $$c;
    // Creating value type constructor for type: BeatmapDataLoader
    BeatmapDataLoader() noexcept {}
    // private System.Single GetRealTimeFromBPMTime(System.Single bmpTime, System.Single bpm, System.Single shuffle, System.Single shufflePeriod)
    // Offset: 0x1A7F130
    float GetRealTimeFromBPMTime(float bmpTime, float bpm, float shuffle, float shufflePeriod);
    // public BeatmapData GetBeatmapDataFromBeatmapSaveData(System.Collections.Generic.List`1<BeatmapSaveData/NoteData> notesSaveData, System.Collections.Generic.List`1<BeatmapSaveData/WaypointData> waypointsSaveData, System.Collections.Generic.List`1<BeatmapSaveData/ObstacleData> obstaclesSaveData, System.Collections.Generic.List`1<BeatmapSaveData/EventData> eventsSaveData, BeatmapSaveData/SpecialEventKeywordFiltersData environmentSpecialEventFilterData, System.Single startBpm, System.Single shuffle, System.Single shufflePeriod)
    // Offset: 0x1A7F184
    GlobalNamespace::BeatmapData* GetBeatmapDataFromBeatmapSaveData(System::Collections::Generic::List_1<GlobalNamespace::BeatmapSaveData::NoteData*>* notesSaveData, System::Collections::Generic::List_1<GlobalNamespace::BeatmapSaveData::WaypointData*>* waypointsSaveData, System::Collections::Generic::List_1<GlobalNamespace::BeatmapSaveData::ObstacleData*>* obstaclesSaveData, System::Collections::Generic::List_1<GlobalNamespace::BeatmapSaveData::EventData*>* eventsSaveData, GlobalNamespace::BeatmapSaveData::SpecialEventKeywordFiltersData* environmentSpecialEventFilterData, float startBpm, float shuffle, float shufflePeriod);
    // public BeatmapData GetBeatmapDataFromBinary(System.Byte[] data, System.Single startBPM, System.Single shuffle, System.Single shufflePeriod)
    // Offset: 0x1A8032C
    GlobalNamespace::BeatmapData* GetBeatmapDataFromBinary(::Array<uint8_t>* data, float startBPM, float shuffle, float shufflePeriod);
    // public BeatmapData GetBeatmapDataFromJson(System.String json, System.Single startBPM, System.Single shuffle, System.Single shufflePeriod)
    // Offset: 0x1A803A4
    GlobalNamespace::BeatmapData* GetBeatmapDataFromJson(::Il2CppString* json, float startBPM, float shuffle, float shufflePeriod);
    // static private ColorType ConvertFromBeatmapSaveDataNoteType(BeatmapSaveData/NoteType noteType)
    // Offset: 0x1A8030C
    static GlobalNamespace::ColorType ConvertFromBeatmapSaveDataNoteType(GlobalNamespace::BeatmapSaveData::NoteType noteType);
    // static private BeatmapEventType ConvertFromBeatmapSaveDataBeatmapEventType(BeatmapSaveData/BeatmapEventType beatmapEventType)
    // Offset: 0x1A80024
    static GlobalNamespace::BeatmapEventType ConvertFromBeatmapSaveDataBeatmapEventType(GlobalNamespace::BeatmapSaveData::BeatmapEventType beatmapEventType);
    // static BeatmapSaveData/ITime <GetBeatmapDataFromBeatmapSaveData>g__SortBeatmapSaveDataObjects|2_3(BeatmapSaveData/ITime[] data)
    // Offset: 0x1A80028
    static GlobalNamespace::BeatmapSaveData::ITime* $GetBeatmapDataFromBeatmapSaveData$g__SortBeatmapSaveDataObjects_2_3(::Array<GlobalNamespace::BeatmapSaveData::ITime*>* data);
    // private System.Single <GetBeatmapDataFromBeatmapSaveData>g__ProcessTime|2_4(System.Single bpmTime, ref BeatmapDataLoader/<>c__DisplayClass2_0 )
    // Offset: 0x1A801BC
    float $GetBeatmapDataFromBeatmapSaveData$g__ProcessTime_2_4(float bpmTime, GlobalNamespace::BeatmapDataLoader::$$c__DisplayClass2_0& param_1);
    // public System.Void .ctor()
    // Offset: 0x1A8041C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BeatmapDataLoader* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BeatmapDataLoader::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BeatmapDataLoader*, creationType>()));
    }
  }; // BeatmapDataLoader
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapDataLoader*, "", "BeatmapDataLoader");
