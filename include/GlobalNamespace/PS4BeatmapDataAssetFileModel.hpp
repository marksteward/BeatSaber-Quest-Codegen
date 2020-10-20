// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: IBeatmapDataAssetFileModel
#include "GlobalNamespace/IBeatmapDataAssetFileModel.hpp"
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
  // Autogenerated type: PS4BeatmapDataAssetFileModel
  class PS4BeatmapDataAssetFileModel : public ::Il2CppObject/*, public GlobalNamespace::IBeatmapDataAssetFileModel*/ {
    public:
    // Nested type: GlobalNamespace::PS4BeatmapDataAssetFileModel::$GetAssetBundleFileForPreviewLevelAsync$d__3
    struct $GetAssetBundleFileForPreviewLevelAsync$d__3;
    // Nested type: GlobalNamespace::PS4BeatmapDataAssetFileModel::$TryDeleteAssetBundleFileForPreviewLevelAsync$d__4
    struct $TryDeleteAssetBundleFileForPreviewLevelAsync$d__4;
    // private System.Action`1<LevelDataAssetDownloadUpdate> levelDataAssetDownloadUpdateEvent
    // Offset: 0x10
    System::Action_1<GlobalNamespace::LevelDataAssetDownloadUpdate>* levelDataAssetDownloadUpdateEvent;
    // Creating interface conversion operator: operator GlobalNamespace::IBeatmapDataAssetFileModel
    operator GlobalNamespace::IBeatmapDataAssetFileModel() noexcept {
      return *reinterpret_cast<GlobalNamespace::IBeatmapDataAssetFileModel*>(this);
    }
    // Creating conversion operator: operator System::Action_1<GlobalNamespace::LevelDataAssetDownloadUpdate>*
    constexpr operator System::Action_1<GlobalNamespace::LevelDataAssetDownloadUpdate>*() const noexcept {
      return levelDataAssetDownloadUpdateEvent;
    }
    // public System.Void add_levelDataAssetDownloadUpdateEvent(System.Action`1<LevelDataAssetDownloadUpdate> value)
    // Offset: 0x1F8E0B8
    // Implemented from: IBeatmapDataAssetFileModel
    // Base method: System.Void IBeatmapDataAssetFileModel::add_levelDataAssetDownloadUpdateEvent(System.Action`1<LevelDataAssetDownloadUpdate> value)
    void add_levelDataAssetDownloadUpdateEvent(System::Action_1<GlobalNamespace::LevelDataAssetDownloadUpdate>* value);
    // public System.Void remove_levelDataAssetDownloadUpdateEvent(System.Action`1<LevelDataAssetDownloadUpdate> value)
    // Offset: 0x1F8E15C
    // Implemented from: IBeatmapDataAssetFileModel
    // Base method: System.Void IBeatmapDataAssetFileModel::remove_levelDataAssetDownloadUpdateEvent(System.Action`1<LevelDataAssetDownloadUpdate> value)
    void remove_levelDataAssetDownloadUpdateEvent(System::Action_1<GlobalNamespace::LevelDataAssetDownloadUpdate>* value);
    // public System.Threading.Tasks.Task`1<GetAssetBundleFileResult> GetAssetBundleFileForPreviewLevelAsync(IPreviewBeatmapLevel previewBeatmapLevel, System.Threading.CancellationToken cancellationToken)
    // Offset: 0x1F8E200
    // Implemented from: IBeatmapDataAssetFileModel
    // Base method: System.Threading.Tasks.Task`1<GetAssetBundleFileResult> IBeatmapDataAssetFileModel::GetAssetBundleFileForPreviewLevelAsync(IPreviewBeatmapLevel previewBeatmapLevel, System.Threading.CancellationToken cancellationToken)
    System::Threading::Tasks::Task_1<GlobalNamespace::GetAssetBundleFileResult>* GetAssetBundleFileForPreviewLevelAsync(GlobalNamespace::IPreviewBeatmapLevel* previewBeatmapLevel, System::Threading::CancellationToken cancellationToken);
    // public System.Threading.Tasks.Task`1<System.Boolean> TryDeleteAssetBundleFileForPreviewLevelAsync(IPreviewBeatmapLevel previewBeatmapLevel, System.Threading.CancellationToken cancellationToken)
    // Offset: 0x1F8E30C
    // Implemented from: IBeatmapDataAssetFileModel
    // Base method: System.Threading.Tasks.Task`1<System.Boolean> IBeatmapDataAssetFileModel::TryDeleteAssetBundleFileForPreviewLevelAsync(IPreviewBeatmapLevel previewBeatmapLevel, System.Threading.CancellationToken cancellationToken)
    System::Threading::Tasks::Task_1<bool>* TryDeleteAssetBundleFileForPreviewLevelAsync(GlobalNamespace::IPreviewBeatmapLevel* previewBeatmapLevel, System::Threading::CancellationToken cancellationToken);
    // public System.Void .ctor()
    // Offset: 0x1F8E418
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static PS4BeatmapDataAssetFileModel* New_ctor();
  }; // PS4BeatmapDataAssetFileModel
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PS4BeatmapDataAssetFileModel*, "", "PS4BeatmapDataAssetFileModel");
#pragma pack(pop)
