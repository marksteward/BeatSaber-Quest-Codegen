// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: TestBeatmapDataAssetFileModel
#include "GlobalNamespace/TestBeatmapDataAssetFileModel.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Runtime.CompilerServices.IAsyncStateMachine
#include "System/Runtime/CompilerServices/IAsyncStateMachine.hpp"
// Including type: System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1
#include "System/Runtime/CompilerServices/AsyncTaskMethodBuilder_1.hpp"
// Including type: GetAssetBundleFileResult
#include "GlobalNamespace/GetAssetBundleFileResult.hpp"
// Including type: System.Threading.CancellationToken
#include "System/Threading/CancellationToken.hpp"
// Including type: System.Runtime.CompilerServices.TaskAwaiter
#include "System/Runtime/CompilerServices/TaskAwaiter.hpp"
// Including type: System.Runtime.CompilerServices.TaskAwaiter`1
#include "System/Runtime/CompilerServices/TaskAwaiter_1.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IPreviewBeatmapLevel
  class IPreviewBeatmapLevel;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: TestBeatmapDataAssetFileModel/<GetAssetBundleFileForPreviewLevelAsync>d__4
  // [CompilerGeneratedAttribute] Offset: D3194C
  struct TestBeatmapDataAssetFileModel::$GetAssetBundleFileForPreviewLevelAsync$d__4/*, public System::ValueType, public System::Runtime::CompilerServices::IAsyncStateMachine*/ {
    public:
    // public System.Int32 <>1__state
    // Size: 0x4
    // Offset: 0x0
    int $$1__state;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<GetAssetBundleFileResult> <>t__builder
    // Size: 0xFFFFFFFF
    // Offset: 0x8
    System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GetAssetBundleFileResult> $$t__builder;
    // public IPreviewBeatmapLevel previewBeatmapLevel
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::IPreviewBeatmapLevel* previewBeatmapLevel;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IPreviewBeatmapLevel*) == 0x8);
    // public TestBeatmapDataAssetFileModel <>4__this
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::TestBeatmapDataAssetFileModel* $$4__this;
    // Field size check
    static_assert(sizeof(GlobalNamespace::TestBeatmapDataAssetFileModel*) == 0x8);
    // public System.Threading.CancellationToken cancellationToken
    // Size: 0x8
    // Offset: 0x30
    System::Threading::CancellationToken cancellationToken;
    // Field size check
    static_assert(sizeof(System::Threading::CancellationToken) == 0x8);
    // private System.String <path>5__2
    // Size: 0x8
    // Offset: 0x38
    ::Il2CppString* $path$5__2;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.Runtime.CompilerServices.TaskAwaiter <>u__1
    // Size: 0x8
    // Offset: 0x40
    System::Runtime::CompilerServices::TaskAwaiter $$u__1;
    // Field size check
    static_assert(sizeof(System::Runtime::CompilerServices::TaskAwaiter) == 0x8);
    // private System.UInt32 <i>5__3
    // Size: 0x4
    // Offset: 0x48
    uint $i$5__3;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // private System.Runtime.CompilerServices.TaskAwaiter`1<GetAssetBundleFileResult> <>u__2
    // Size: 0xFFFFFFFF
    // Offset: 0x50
    System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GetAssetBundleFileResult> $$u__2;
    // Creating value type constructor for type: $GetAssetBundleFileForPreviewLevelAsync$d__4
    constexpr $GetAssetBundleFileForPreviewLevelAsync$d__4(int $$1__state_ = {}, System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GetAssetBundleFileResult> $$t__builder_ = {}, GlobalNamespace::IPreviewBeatmapLevel* previewBeatmapLevel_ = {}, GlobalNamespace::TestBeatmapDataAssetFileModel* $$4__this_ = {}, System::Threading::CancellationToken cancellationToken_ = {}, ::Il2CppString* $path$5__2_ = {}, System::Runtime::CompilerServices::TaskAwaiter $$u__1_ = {}, uint $i$5__3_ = {}, System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GetAssetBundleFileResult> $$u__2_ = {}) noexcept : $$1__state{$$1__state_}, $$t__builder{$$t__builder_}, previewBeatmapLevel{previewBeatmapLevel_}, $$4__this{$$4__this_}, cancellationToken{cancellationToken_}, $path$5__2{$path$5__2_}, $$u__1{$$u__1_}, $i$5__3{$i$5__3_}, $$u__2{$$u__2_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator System::Runtime::CompilerServices::IAsyncStateMachine
    operator System::Runtime::CompilerServices::IAsyncStateMachine() noexcept {
      return *reinterpret_cast<System::Runtime::CompilerServices::IAsyncStateMachine*>(this);
    }
    // private System.Void MoveNext()
    // Offset: 0xDF3F98
    void MoveNext();
    // private System.Void SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    // Offset: 0xDF3FA0
    void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);
  }; // TestBeatmapDataAssetFileModel/<GetAssetBundleFileForPreviewLevelAsync>d__4
  // WARNING Not writing size check since size may be invalid!
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::TestBeatmapDataAssetFileModel::$GetAssetBundleFileForPreviewLevelAsync$d__4, "", "TestBeatmapDataAssetFileModel/<GetAssetBundleFileForPreviewLevelAsync>d__4");
