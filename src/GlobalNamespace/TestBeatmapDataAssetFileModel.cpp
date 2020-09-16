// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: TestBeatmapDataAssetFileModel
#include "GlobalNamespace/TestBeatmapDataAssetFileModel.hpp"
// Including type: TestBeatmapDataAssetFileModel/<GetAssetBundleFileForPreviewLevelAsync>d__4
#include "GlobalNamespace/TestBeatmapDataAssetFileModel_-GetAssetBundleFileForPreviewLevelAsync-d__4.hpp"
// Including type: TestBeatmapDataAssetFileModel/<TryDeleteAssetBundleFileForPreviewLevelAsync>d__5
#include "GlobalNamespace/TestBeatmapDataAssetFileModel_-TryDeleteAssetBundleFileForPreviewLevelAsync-d__5.hpp"
// Including type: System.Action`1
#include "System/Action_1.hpp"
// Including type: System.String
#include "System/String.hpp"
// Including type: System.Threading.Tasks.Task`1
#include "System/Threading/Tasks/Task_1.hpp"
// Including type: IPreviewBeatmapLevel
#include "GlobalNamespace/IPreviewBeatmapLevel.hpp"
// Including type: System.Threading.CancellationToken
#include "System/Threading/CancellationToken.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static private System.String kAssetsDir
::Il2CppString* GlobalNamespace::TestBeatmapDataAssetFileModel::_get_kAssetsDir() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<::Il2CppString*>("", "TestBeatmapDataAssetFileModel", "kAssetsDir"));
}
// Autogenerated static field setter
// Set static field: static private System.String kAssetsDir
void GlobalNamespace::TestBeatmapDataAssetFileModel::_set_kAssetsDir(::Il2CppString* value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("", "TestBeatmapDataAssetFileModel", "kAssetsDir", value));
}
// Autogenerated method: TestBeatmapDataAssetFileModel.add_levelDataAssetDownloadUpdateEvent
void GlobalNamespace::TestBeatmapDataAssetFileModel::add_levelDataAssetDownloadUpdateEvent(System::Action_1<GlobalNamespace::LevelDataAssetDownloadUpdate>* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "add_levelDataAssetDownloadUpdateEvent", value));
}
// Autogenerated method: TestBeatmapDataAssetFileModel.remove_levelDataAssetDownloadUpdateEvent
void GlobalNamespace::TestBeatmapDataAssetFileModel::remove_levelDataAssetDownloadUpdateEvent(System::Action_1<GlobalNamespace::LevelDataAssetDownloadUpdate>* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "remove_levelDataAssetDownloadUpdateEvent", value));
}
// Autogenerated method: TestBeatmapDataAssetFileModel.GetAssetBundleFileForPreviewLevelAsync
System::Threading::Tasks::Task_1<GlobalNamespace::GetAssetBundleFileResult>* GlobalNamespace::TestBeatmapDataAssetFileModel::GetAssetBundleFileForPreviewLevelAsync(GlobalNamespace::IPreviewBeatmapLevel* previewBeatmapLevel, System::Threading::CancellationToken cancellationToken) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Threading::Tasks::Task_1<GlobalNamespace::GetAssetBundleFileResult>*>(this, "GetAssetBundleFileForPreviewLevelAsync", previewBeatmapLevel, cancellationToken));
}
// Autogenerated method: TestBeatmapDataAssetFileModel.TryDeleteAssetBundleFileForPreviewLevelAsync
System::Threading::Tasks::Task_1<bool>* GlobalNamespace::TestBeatmapDataAssetFileModel::TryDeleteAssetBundleFileForPreviewLevelAsync(GlobalNamespace::IPreviewBeatmapLevel* previewBeatmapLevel, System::Threading::CancellationToken cancellationToken) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Threading::Tasks::Task_1<bool>*>(this, "TryDeleteAssetBundleFileForPreviewLevelAsync", previewBeatmapLevel, cancellationToken));
}
// Autogenerated method: TestBeatmapDataAssetFileModel..ctor
GlobalNamespace::TestBeatmapDataAssetFileModel* GlobalNamespace::TestBeatmapDataAssetFileModel::New_ctor() {
  return THROW_UNLESS(il2cpp_utils::New<TestBeatmapDataAssetFileModel*>());
}
