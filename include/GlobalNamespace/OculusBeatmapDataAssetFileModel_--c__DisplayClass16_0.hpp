// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OculusBeatmapDataAssetFileModel
#include "GlobalNamespace/OculusBeatmapDataAssetFileModel.hpp"
// Including type: GetAssetBundleFileResult
#include "GlobalNamespace/GetAssetBundleFileResult.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: TaskCompletionSource`1<TResult>
  template<typename TResult>
  class TaskCompletionSource_1;
}
// Forward declaring namespace: Oculus::Platform::Models
namespace Oculus::Platform::Models {
  // Forward declaring type: AssetDetails
  class AssetDetails;
  // Forward declaring type: AssetFileDownloadResult
  class AssetFileDownloadResult;
}
// Forward declaring namespace: Oculus::Platform
namespace Oculus::Platform {
  // Forward declaring type: Message`1<T>
  template<typename T>
  class Message_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  // Autogenerated type: OculusBeatmapDataAssetFileModel/<>c__DisplayClass16_0
  // [] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: DBF394
  class OculusBeatmapDataAssetFileModel::$$c__DisplayClass16_0 : public ::Il2CppObject {
    public:
    // public System.Threading.Tasks.TaskCompletionSource`1<GetAssetBundleFileResult> taskSource
    // Size: 0x8
    // Offset: 0x10
    System::Threading::Tasks::TaskCompletionSource_1<GlobalNamespace::GetAssetBundleFileResult>* taskSource;
    // Field size check
    static_assert(sizeof(System::Threading::Tasks::TaskCompletionSource_1<GlobalNamespace::GetAssetBundleFileResult>*) == 0x8);
    // public OculusBeatmapDataAssetFileModel <>4__this
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::OculusBeatmapDataAssetFileModel* $$4__this;
    // Field size check
    static_assert(sizeof(GlobalNamespace::OculusBeatmapDataAssetFileModel*) == 0x8);
    // public Oculus.Platform.Models.AssetDetails assetDetails
    // Size: 0x8
    // Offset: 0x20
    Oculus::Platform::Models::AssetDetails* assetDetails;
    // Field size check
    static_assert(sizeof(Oculus::Platform::Models::AssetDetails*) == 0x8);
    // Creating value type constructor for type: $$c__DisplayClass16_0
    $$c__DisplayClass16_0(System::Threading::Tasks::TaskCompletionSource_1<GlobalNamespace::GetAssetBundleFileResult>* taskSource_ = {}, GlobalNamespace::OculusBeatmapDataAssetFileModel* $$4__this_ = {}, Oculus::Platform::Models::AssetDetails* assetDetails_ = {}) noexcept : taskSource{taskSource_}, $$4__this{$$4__this_}, assetDetails{assetDetails_} {}
    // System.Void <GetDownloadAssetBundleFileAsync>b__0(Oculus.Platform.Message`1<Oculus.Platform.Models.AssetFileDownloadResult> msg)
    // Offset: 0x1006314
    void $GetDownloadAssetBundleFileAsync$b__0(Oculus::Platform::Message_1<Oculus::Platform::Models::AssetFileDownloadResult*>* msg);
    // public System.Void .ctor()
    // Offset: 0x100630C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OculusBeatmapDataAssetFileModel::$$c__DisplayClass16_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::OculusBeatmapDataAssetFileModel::$$c__DisplayClass16_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OculusBeatmapDataAssetFileModel::$$c__DisplayClass16_0*, creationType>()));
    }
  }; // OculusBeatmapDataAssetFileModel/<>c__DisplayClass16_0
  static check_size<sizeof(OculusBeatmapDataAssetFileModel::$$c__DisplayClass16_0), 32 + sizeof(Oculus::Platform::Models::AssetDetails*)> __GlobalNamespace_OculusBeatmapDataAssetFileModel_$$c__DisplayClass16_0SizeCheck;
  static_assert(sizeof(OculusBeatmapDataAssetFileModel::$$c__DisplayClass16_0) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OculusBeatmapDataAssetFileModel::$$c__DisplayClass16_0*, "", "OculusBeatmapDataAssetFileModel/<>c__DisplayClass16_0");
#pragma pack(pop)
