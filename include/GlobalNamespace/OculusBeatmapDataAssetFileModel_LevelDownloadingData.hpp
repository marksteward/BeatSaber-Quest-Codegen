// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
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
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: OculusBeatmapDataAssetFileModel/LevelDownloadingData
  // [TokenAttribute] Offset: FFFFFFFF
  class OculusBeatmapDataAssetFileModel::LevelDownloadingData : public ::Il2CppObject {
    public:
    // public readonly System.String levelId
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* levelId;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public readonly System.String assetBundlePath
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* assetBundlePath;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public readonly System.Threading.Tasks.TaskCompletionSource`1<GetAssetBundleFileResult> downloadAssetBundleFileTCS
    // Size: 0x8
    // Offset: 0x20
    System::Threading::Tasks::TaskCompletionSource_1<GlobalNamespace::GetAssetBundleFileResult>* downloadAssetBundleFileTCS;
    // Field size check
    static_assert(sizeof(System::Threading::Tasks::TaskCompletionSource_1<GlobalNamespace::GetAssetBundleFileResult>*) == 0x8);
    // Creating value type constructor for type: LevelDownloadingData
    LevelDownloadingData(::Il2CppString* levelId_ = {}, ::Il2CppString* assetBundlePath_ = {}, System::Threading::Tasks::TaskCompletionSource_1<GlobalNamespace::GetAssetBundleFileResult>* downloadAssetBundleFileTCS_ = {}) noexcept : levelId{levelId_}, assetBundlePath{assetBundlePath_}, downloadAssetBundleFileTCS{downloadAssetBundleFileTCS_} {}
    // public System.Void .ctor(System.String levelId, System.String assetBundlePath)
    // Offset: 0x11ECBCC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OculusBeatmapDataAssetFileModel::LevelDownloadingData* New_ctor(::Il2CppString* levelId, ::Il2CppString* assetBundlePath) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::OculusBeatmapDataAssetFileModel::LevelDownloadingData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OculusBeatmapDataAssetFileModel::LevelDownloadingData*, creationType>(levelId, assetBundlePath)));
    }
  }; // OculusBeatmapDataAssetFileModel/LevelDownloadingData
  #pragma pack(pop)
  static check_size<sizeof(OculusBeatmapDataAssetFileModel::LevelDownloadingData), 32 + sizeof(System::Threading::Tasks::TaskCompletionSource_1<GlobalNamespace::GetAssetBundleFileResult>*)> __GlobalNamespace_OculusBeatmapDataAssetFileModel_LevelDownloadingDataSizeCheck;
  static_assert(sizeof(OculusBeatmapDataAssetFileModel::LevelDownloadingData) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OculusBeatmapDataAssetFileModel::LevelDownloadingData*, "", "OculusBeatmapDataAssetFileModel/LevelDownloadingData");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OculusBeatmapDataAssetFileModel::LevelDownloadingData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
