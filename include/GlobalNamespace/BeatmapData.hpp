// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: IReadonlyBeatmapData
#include "GlobalNamespace/IReadonlyBeatmapData.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BeatmapLineData
  class BeatmapLineData;
  // Forward declaring type: BeatmapEventData
  class BeatmapEventData;
  // Forward declaring type: NotesInTimeRowProcessor
  class NotesInTimeRowProcessor;
  // Forward declaring type: BeatmapObjectData
  class BeatmapObjectData;
  // Forward declaring type: IReadonlyBeatmapLineData
  class IReadonlyBeatmapLineData;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: IReadOnlyList`1<T>
  template<typename T>
  class IReadOnlyList_1;
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: BeatmapData
  class BeatmapData : public ::Il2CppObject/*, public GlobalNamespace::IReadonlyBeatmapData*/ {
    public:
    // Nested type: GlobalNamespace::BeatmapData::$get_beatmapObjectsData$d__28
    class $get_beatmapObjectsData$d__28;
    // private System.Int32 <cuttableNotesType>k__BackingField
    // Offset: 0x10
    int cuttableNotesType;
    // private System.Int32 <obstaclesCount>k__BackingField
    // Offset: 0x14
    int obstaclesCount;
    // private System.Int32 <bombsCount>k__BackingField
    // Offset: 0x18
    int bombsCount;
    // private System.Int32 <spawnRotationEventsCount>k__BackingField
    // Offset: 0x1C
    int spawnRotationEventsCount;
    // private readonly BeatmapLineData[] _beatmapLinesData
    // Offset: 0x20
    ::Array<GlobalNamespace::BeatmapLineData*>* beatmapLinesData;
    // private readonly System.Collections.Generic.List`1<BeatmapEventData> _beatmapEventsData
    // Offset: 0x28
    System::Collections::Generic::List_1<GlobalNamespace::BeatmapEventData*>* beatmapEventsData;
    // private readonly NotesInTimeRowProcessor _notesInTimeRowProcessor
    // Offset: 0x30
    GlobalNamespace::NotesInTimeRowProcessor* notesInTimeRowProcessor;
    // private System.Single _prevAddedBeatmapObjectDataTime
    // Offset: 0x38
    float prevAddedBeatmapObjectDataTime;
    // private System.Single _prevAddedBeatmapEventDataTime
    // Offset: 0x3C
    float prevAddedBeatmapEventDataTime;
    // Creating interface conversion operator: operator GlobalNamespace::IReadonlyBeatmapData
    operator GlobalNamespace::IReadonlyBeatmapData() noexcept {
      return *reinterpret_cast<GlobalNamespace::IReadonlyBeatmapData*>(this);
    }
    // private System.Void set_cuttableNotesType(System.Int32 value)
    // Offset: 0x20C6528
    void set_cuttableNotesType(int value);
    // private System.Void set_obstaclesCount(System.Int32 value)
    // Offset: 0x20C6538
    void set_obstaclesCount(int value);
    // private System.Void set_bombsCount(System.Int32 value)
    // Offset: 0x20C6548
    void set_bombsCount(int value);
    // private System.Void set_spawnRotationEventsCount(System.Int32 value)
    // Offset: 0x20C6558
    void set_spawnRotationEventsCount(int value);
    // public System.Void .ctor(System.Int32 numberOfLines)
    // Offset: 0x20C6624
    static BeatmapData* New_ctor(int numberOfLines);
    // public System.Void AddBeatmapObjectData(BeatmapObjectData beatmapObjectData)
    // Offset: 0x20C67B8
    void AddBeatmapObjectData(GlobalNamespace::BeatmapObjectData* beatmapObjectData);
    // public System.Void AddBeatmapEventData(BeatmapEventData beatmapEventData)
    // Offset: 0x20C6904
    void AddBeatmapEventData(GlobalNamespace::BeatmapEventData* beatmapEventData);
    // public System.Void ProcessRemainingData()
    // Offset: 0x20C6998
    void ProcessRemainingData();
    // private System.Void CopyBeatmapEvents(BeatmapData src, BeatmapData dst)
    // Offset: 0x20C6D58
    void CopyBeatmapEvents(GlobalNamespace::BeatmapData* src, GlobalNamespace::BeatmapData* dst);
    // private System.Void CopyBeatmapObjects(BeatmapData src, BeatmapData dst)
    // Offset: 0x20C6A38
    void CopyBeatmapObjects(GlobalNamespace::BeatmapData* src, GlobalNamespace::BeatmapData* dst);
    // public System.Collections.Generic.IReadOnlyList`1<IReadonlyBeatmapLineData> get_beatmapLinesData()
    // Offset: 0x20C64F4
    // Implemented from: IReadonlyBeatmapData
    // Base method: System.Collections.Generic.IReadOnlyList`1<IReadonlyBeatmapLineData> IReadonlyBeatmapData::get_beatmapLinesData()
    System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::IReadonlyBeatmapLineData*>* get_beatmapLinesData();
    // public System.Collections.Generic.IReadOnlyList`1<BeatmapEventData> get_beatmapEventsData()
    // Offset: 0x20C64FC
    // Implemented from: IReadonlyBeatmapData
    // Base method: System.Collections.Generic.IReadOnlyList`1<BeatmapEventData> IReadonlyBeatmapData::get_beatmapEventsData()
    System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::BeatmapEventData*>* get_beatmapEventsData();
    // public System.Int32 get_numberOfLines()
    // Offset: 0x20C6504
    // Implemented from: IReadonlyBeatmapData
    // Base method: System.Int32 IReadonlyBeatmapData::get_numberOfLines()
    int get_numberOfLines();
    // public System.Int32 get_cuttableNotesType()
    // Offset: 0x20C6520
    // Implemented from: IReadonlyBeatmapData
    // Base method: System.Int32 IReadonlyBeatmapData::get_cuttableNotesType()
    int get_cuttableNotesType();
    // public System.Int32 get_obstaclesCount()
    // Offset: 0x20C6530
    // Implemented from: IReadonlyBeatmapData
    // Base method: System.Int32 IReadonlyBeatmapData::get_obstaclesCount()
    int get_obstaclesCount();
    // public System.Int32 get_bombsCount()
    // Offset: 0x20C6540
    // Implemented from: IReadonlyBeatmapData
    // Base method: System.Int32 IReadonlyBeatmapData::get_bombsCount()
    int get_bombsCount();
    // public System.Int32 get_spawnRotationEventsCount()
    // Offset: 0x20C6550
    // Implemented from: IReadonlyBeatmapData
    // Base method: System.Int32 IReadonlyBeatmapData::get_spawnRotationEventsCount()
    int get_spawnRotationEventsCount();
    // public System.Collections.Generic.IEnumerable`1<BeatmapObjectData> get_beatmapObjectsData()
    // Offset: 0x20C6560
    // Implemented from: IReadonlyBeatmapData
    // Base method: System.Collections.Generic.IEnumerable`1<BeatmapObjectData> IReadonlyBeatmapData::get_beatmapObjectsData()
    System::Collections::Generic::IEnumerable_1<GlobalNamespace::BeatmapObjectData*>* get_beatmapObjectsData();
    // public BeatmapData GetCopy()
    // Offset: 0x20C69B4
    // Implemented from: IReadonlyBeatmapData
    // Base method: BeatmapData IReadonlyBeatmapData::GetCopy()
    GlobalNamespace::BeatmapData* GetCopy();
    // public BeatmapData GetCopyWithoutEvents()
    // Offset: 0x20C6FD4
    // Implemented from: IReadonlyBeatmapData
    // Base method: BeatmapData IReadonlyBeatmapData::GetCopyWithoutEvents()
    GlobalNamespace::BeatmapData* GetCopyWithoutEvents();
    // public BeatmapData GetCopyWithoutBeatmapObjects()
    // Offset: 0x20C704C
    // Implemented from: IReadonlyBeatmapData
    // Base method: BeatmapData IReadonlyBeatmapData::GetCopyWithoutBeatmapObjects()
    GlobalNamespace::BeatmapData* GetCopyWithoutBeatmapObjects();
  }; // BeatmapData
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapData*, "", "BeatmapData");
#pragma pack(pop)
