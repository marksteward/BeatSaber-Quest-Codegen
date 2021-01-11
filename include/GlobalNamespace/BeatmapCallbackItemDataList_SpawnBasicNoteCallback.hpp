// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: BeatmapCallbackItemDataList
#include "GlobalNamespace/BeatmapCallbackItemDataList.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: NoteData
  class NoteData;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: BeatmapCallbackItemDataList/SpawnBasicNoteCallback
  // [] Offset: FFFFFFFF
  class BeatmapCallbackItemDataList::SpawnBasicNoteCallback : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: SpawnBasicNoteCallback
    SpawnBasicNoteCallback() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1A7B410
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BeatmapCallbackItemDataList::SpawnBasicNoteCallback* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BeatmapCallbackItemDataList::SpawnBasicNoteCallback::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BeatmapCallbackItemDataList::SpawnBasicNoteCallback*, creationType>(object, method)));
    }
    // public System.Void Invoke(NoteData noteData, System.Single cutDirectionAngleOffset)
    // Offset: 0x1A7AEC4
    void Invoke(GlobalNamespace::NoteData* noteData, float cutDirectionAngleOffset);
    // public System.IAsyncResult BeginInvoke(NoteData noteData, System.Single cutDirectionAngleOffset, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1A7B424
    System::IAsyncResult* BeginInvoke(GlobalNamespace::NoteData* noteData, float cutDirectionAngleOffset, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x1A7B4C0
    void EndInvoke(System::IAsyncResult* result);
  }; // BeatmapCallbackItemDataList/SpawnBasicNoteCallback
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapCallbackItemDataList::SpawnBasicNoteCallback*, "", "BeatmapCallbackItemDataList/SpawnBasicNoteCallback");
