// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: BeatmapSaveData
#include "GlobalNamespace/BeatmapSaveData.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BeatmapData
  class BeatmapData;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: BeatmapDataLoader
  class BeatmapDataLoader : public ::Il2CppObject {
    public:
    // Nested type: GlobalNamespace::BeatmapDataLoader::BPMChangeData
    struct BPMChangeData;
    // Nested type: GlobalNamespace::BeatmapDataLoader::NotesInTimeRowProcessor
    class NotesInTimeRowProcessor;
    // Nested type: GlobalNamespace::BeatmapDataLoader::$$c
    class $$c;
    // private BeatmapDataLoader/NotesInTimeRowProcessor _notesInTimeRowProcessor
    // Offset: 0x10
    GlobalNamespace::BeatmapDataLoader::NotesInTimeRowProcessor* notesInTimeRowProcessor;
    // Creating conversion operator: operator GlobalNamespace::BeatmapDataLoader::NotesInTimeRowProcessor*
    constexpr operator GlobalNamespace::BeatmapDataLoader::NotesInTimeRowProcessor*() const {
      return notesInTimeRowProcessor;
    }
    // private System.Single GetRealTimeFromBPMTime(System.Single bmpTime, System.Single bpm, System.Single shuffle, System.Single shufflePeriod)
    // Offset: 0xB936C8
    float GetRealTimeFromBPMTime(float bmpTime, float bpm, float shuffle, float shufflePeriod);
    // public BeatmapData GetBeatmapDataFromBeatmapSaveData(System.Collections.Generic.List`1<BeatmapSaveData/NoteData> notesSaveData, System.Collections.Generic.List`1<BeatmapSaveData/ObstacleData> obstaclesSaveData, System.Collections.Generic.List`1<BeatmapSaveData/EventData> eventsSaveData, System.Single startBPM, System.Single shuffle, System.Single shufflePeriod)
    // Offset: 0xB9371C
    GlobalNamespace::BeatmapData* GetBeatmapDataFromBeatmapSaveData(System::Collections::Generic::List_1<GlobalNamespace::BeatmapSaveData::NoteData*>* notesSaveData, System::Collections::Generic::List_1<GlobalNamespace::BeatmapSaveData::ObstacleData*>* obstaclesSaveData, System::Collections::Generic::List_1<GlobalNamespace::BeatmapSaveData::EventData*>* eventsSaveData, float startBPM, float shuffle, float shufflePeriod);
    // public BeatmapData GetBeatmapDataFromBinary(System.Byte[] data, System.Single startBPM, System.Single shuffle, System.Single shufflePeriod)
    // Offset: 0xB94938
    GlobalNamespace::BeatmapData* GetBeatmapDataFromBinary(::Array<uint8_t>* data, float startBPM, float shuffle, float shufflePeriod);
    // public BeatmapData GetBeatmapDataFromJson(System.String json, System.Single startBPM, System.Single shuffle, System.Single shufflePeriod)
    // Offset: 0xB949AC
    GlobalNamespace::BeatmapData* GetBeatmapDataFromJson(::Il2CppString* json, float startBPM, float shuffle, float shufflePeriod);
    // public System.Void .ctor()
    // Offset: 0xB94A20
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static BeatmapDataLoader* New_ctor();
  }; // BeatmapDataLoader
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapDataLoader*, "", "BeatmapDataLoader");
#pragma pack(pop)
