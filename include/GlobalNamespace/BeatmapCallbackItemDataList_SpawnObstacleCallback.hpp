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
  // Forward declaring type: ObstacleData
  class ObstacleData;
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
  // Autogenerated type: BeatmapCallbackItemDataList/SpawnObstacleCallback
  class BeatmapCallbackItemDataList::SpawnObstacleCallback : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: SpawnObstacleCallback
    SpawnObstacleCallback() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x11BF1F4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BeatmapCallbackItemDataList::SpawnObstacleCallback* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BeatmapCallbackItemDataList::SpawnObstacleCallback::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BeatmapCallbackItemDataList::SpawnObstacleCallback*, creationType>(object, method)));
    }
    // public System.Void Invoke(ObstacleData obstacleData)
    // Offset: 0x11BE104
    void Invoke(GlobalNamespace::ObstacleData* obstacleData);
    // public System.IAsyncResult BeginInvoke(ObstacleData obstacleData, System.AsyncCallback callback, System.Object object)
    // Offset: 0x11BF204
    System::IAsyncResult* BeginInvoke(GlobalNamespace::ObstacleData* obstacleData, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x11BF228
    void EndInvoke(System::IAsyncResult* result);
  }; // BeatmapCallbackItemDataList/SpawnObstacleCallback
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapCallbackItemDataList::SpawnObstacleCallback*, "", "BeatmapCallbackItemDataList/SpawnObstacleCallback");
// Writing MetadataGetter for method: GlobalNamespace::BeatmapCallbackItemDataList::SpawnObstacleCallback::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::BeatmapCallbackItemDataList::SpawnObstacleCallback::Invoke
// Il2CppName: Invoke
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::BeatmapCallbackItemDataList::SpawnObstacleCallback::BeginInvoke
// Il2CppName: BeginInvoke
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::BeatmapCallbackItemDataList::SpawnObstacleCallback::EndInvoke
// Il2CppName: EndInvoke
// Cannot perform method pointer template specialization from operators!
