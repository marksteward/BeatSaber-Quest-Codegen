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
  // Forward declaring type: BeatmapEventData
  class BeatmapEventData;
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
  // Autogenerated type: BeatmapCallbackItemDataList/ProcessBeatmapEventCallback
  class BeatmapCallbackItemDataList::ProcessBeatmapEventCallback : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: ProcessBeatmapEventCallback
    ProcessBeatmapEventCallback() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x10A99B4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BeatmapCallbackItemDataList::ProcessBeatmapEventCallback* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BeatmapCallbackItemDataList::ProcessBeatmapEventCallback::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BeatmapCallbackItemDataList::ProcessBeatmapEventCallback*, creationType>(object, method)));
    }
    // public System.Void Invoke(BeatmapEventData beatmapEventData)
    // Offset: 0x10A852C
    void Invoke(GlobalNamespace::BeatmapEventData* beatmapEventData);
    // public System.IAsyncResult BeginInvoke(BeatmapEventData beatmapEventData, System.AsyncCallback callback, System.Object object)
    // Offset: 0x10A99C4
    System::IAsyncResult* BeginInvoke(GlobalNamespace::BeatmapEventData* beatmapEventData, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x10A99E8
    void EndInvoke(System::IAsyncResult* result);
  }; // BeatmapCallbackItemDataList/ProcessBeatmapEventCallback
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapCallbackItemDataList::ProcessBeatmapEventCallback*, "", "BeatmapCallbackItemDataList/ProcessBeatmapEventCallback");
