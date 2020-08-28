// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: BeatmapDataLoader
#include "GlobalNamespace/BeatmapDataLoader.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: NoteData
  class NoteData;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: BeatmapDataLoader/NotesInTimeRowProcessor
  class BeatmapDataLoader::NotesInTimeRowProcessor : public ::Il2CppObject {
    public:
    // private System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> _numberOfNotesInLines
    // Offset: 0x10
    System::Collections::Generic::Dictionary_2<int, int>* numberOfNotesInLines;
    // Creating conversion operator: operator System::Collections::Generic::Dictionary_2<int, int>*
    constexpr operator System::Collections::Generic::Dictionary_2<int, int>*() const {
      return numberOfNotesInLines;
    }
    // public System.Void ProcessBasicNotesInTimeRow(System.Collections.Generic.List`1<NoteData> basicNotes, System.Single nextBasicNoteTimeSlice)
    // Offset: 0xB946A4
    void ProcessBasicNotesInTimeRow(System::Collections::Generic::List_1<GlobalNamespace::NoteData*>* basicNotes, float nextBasicNoteTimeSlice);
    // public System.Void ProcessNotesInTimeRow(System.Collections.Generic.List`1<NoteData> notes)
    // Offset: 0xB947C8
    void ProcessNotesInTimeRow(System::Collections::Generic::List_1<GlobalNamespace::NoteData*>* notes);
    // public System.Void .ctor()
    // Offset: 0xB94A90
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static BeatmapDataLoader::NotesInTimeRowProcessor* New_ctor();
  }; // BeatmapDataLoader/NotesInTimeRowProcessor
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapDataLoader::NotesInTimeRowProcessor*, "", "BeatmapDataLoader/NotesInTimeRowProcessor");
#pragma pack(pop)
