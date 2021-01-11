// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: IBeatmapDataAssetFileModel
#include "GlobalNamespace/IBeatmapDataAssetFileModel.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IPreviewBeatmapLevel
  class IPreviewBeatmapLevel;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
  // Forward declaring type: String
  class String;
}
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task`1<TResult>
  template<typename TResult>
  class Task_1;
}
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: CancellationToken
  struct CancellationToken;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: TestBeatmapDataAssetFileModel
  // [] Offset: FFFFFFFF
  class TestBeatmapDataAssetFileModel : public ::Il2CppObject/*, public GlobalNamespace::IBeatmapDataAssetFileModel*/ {
    public:
    // Nested type: GlobalNamespace::TestBeatmapDataAssetFileModel::$GetAssetBundleFileForPreviewLevelAsync$d__4
    struct $GetAssetBundleFileForPreviewLevelAsync$d__4;
    // Nested type: GlobalNamespace::TestBeatmapDataAssetFileModel::$TryDeleteAssetBundleFileForPreviewLevelAsync$d__5
    struct $TryDeleteAssetBundleFileForPreviewLevelAsync$d__5;
    // [CompilerGeneratedAttribute] Offset: 0xDC3774
    // private System.Action`1<LevelDataAssetDownloadUpdate> levelDataAssetDownloadUpdateEvent
    // Size: 0x8
    // Offset: 0x10
    System::Action_1<GlobalNamespace::LevelDataAssetDownloadUpdate>* levelDataAssetDownloadUpdateEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<GlobalNamespace::LevelDataAssetDownloadUpdate>*) == 0x8);
    // Creating value type constructor for type: TestBeatmapDataAssetFileModel
    TestBeatmapDataAssetFileModel(System::Action_1<GlobalNamespace::LevelDataAssetDownloadUpdate>* levelDataAssetDownloadUpdateEvent_ = {}) noexcept : levelDataAssetDownloadUpdateEvent{levelDataAssetDownloadUpdateEvent_} {}
    // Creating interface conversion operator: operator GlobalNamespace::IBeatmapDataAssetFileModel
    operator GlobalNamespace::IBeatmapDataAssetFileModel() noexcept {
      return *reinterpret_cast<GlobalNamespace::IBeatmapDataAssetFileModel*>(this);
    }
    // Creating conversion operator: operator System::Action_1<GlobalNamespace::LevelDataAssetDownloadUpdate>*
    constexpr operator System::Action_1<GlobalNamespace::LevelDataAssetDownloadUpdate>*() const noexcept {
      return levelDataAssetDownloadUpdateEvent;
    }
    // static field const value: static private System.String kAssetsDir
    static constexpr const char* kAssetsDir = "BeatmapDataAssets";
    // Get static field: static private System.String kAssetsDir
    static ::Il2CppString* _get_kAssetsDir();
    // Set static field: static private System.String kAssetsDir
    static void _set_kAssetsDir(::Il2CppString* value);
    // public System.Void add_levelDataAssetDownloadUpdateEvent(System.Action`1<LevelDataAssetDownloadUpdate> value)
    // Offset: 0xF4A1A4
    // Implemented from: IBeatmapDataAssetFileModel
    // Base method: System.Void IBeatmapDataAssetFileModel::add_levelDataAssetDownloadUpdateEvent(System.Action`1<LevelDataAssetDownloadUpdate> value)
    void add_levelDataAssetDownloadUpdateEvent(System::Action_1<GlobalNamespace::LevelDataAssetDownloadUpdate>* value);
    // public System.Void remove_levelDataAssetDownloadUpdateEvent(System.Action`1<LevelDataAssetDownloadUpdate> value)
    // Offset: 0xF4A248
    // Implemented from: IBeatmapDataAssetFileModel
    // Base method: System.Void IBeatmapDataAssetFileModel::remove_levelDataAssetDownloadUpdateEvent(System.Action`1<LevelDataAssetDownloadUpdate> value)
    void remove_levelDataAssetDownloadUpdateEvent(System::Action_1<GlobalNamespace::LevelDataAssetDownloadUpdate>* value);
    // public System.Threading.Tasks.Task`1<GetAssetBundleFileResult> GetAssetBundleFileForPreviewLevelAsync(IPreviewBeatmapLevel previewBeatmapLevel, System.Threading.CancellationToken cancellationToken)
    // Offset: 0xF4A2EC
    // Implemented from: IBeatmapDataAssetFileModel
    // Base method: System.Threading.Tasks.Task`1<GetAssetBundleFileResult> IBeatmapDataAssetFileModel::GetAssetBundleFileForPreviewLevelAsync(IPreviewBeatmapLevel previewBeatmapLevel, System.Threading.CancellationToken cancellationToken)
    System::Threading::Tasks::Task_1<GlobalNamespace::GetAssetBundleFileResult>* GetAssetBundleFileForPreviewLevelAsync(GlobalNamespace::IPreviewBeatmapLevel* previewBeatmapLevel, System::Threading::CancellationToken cancellationToken);
    // public System.Threading.Tasks.Task`1<System.Boolean> TryDeleteAssetBundleFileForPreviewLevelAsync(IPreviewBeatmapLevel previewBeatmapLevel, System.Threading.CancellationToken cancellationToken)
    // Offset: 0xF4A440
    // Implemented from: IBeatmapDataAssetFileModel
    // Base method: System.Threading.Tasks.Task`1<System.Boolean> IBeatmapDataAssetFileModel::TryDeleteAssetBundleFileForPreviewLevelAsync(IPreviewBeatmapLevel previewBeatmapLevel, System.Threading.CancellationToken cancellationToken)
    System::Threading::Tasks::Task_1<bool>* TryDeleteAssetBundleFileForPreviewLevelAsync(GlobalNamespace::IPreviewBeatmapLevel* previewBeatmapLevel, System::Threading::CancellationToken cancellationToken);
    // public System.Void .ctor()
    // Offset: 0xF4A54C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TestBeatmapDataAssetFileModel* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::TestBeatmapDataAssetFileModel::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TestBeatmapDataAssetFileModel*, creationType>()));
    }
  }; // TestBeatmapDataAssetFileModel
  static check_size<sizeof(TestBeatmapDataAssetFileModel), 16 + sizeof(System::Action_1<GlobalNamespace::LevelDataAssetDownloadUpdate>*)> __GlobalNamespace_TestBeatmapDataAssetFileModelSizeCheck;
  static_assert(sizeof(TestBeatmapDataAssetFileModel) == 0x18);
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::TestBeatmapDataAssetFileModel*, "", "TestBeatmapDataAssetFileModel");
