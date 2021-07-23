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
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
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
    // Get instance field: public System.Int32 <>1__state
    int _get_$$1__state();
    // Set instance field: public System.Int32 <>1__state
    void _set_$$1__state(int value);
    // Get instance field: public System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<GetAssetBundleFileResult> <>t__builder
    System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GetAssetBundleFileResult> _get_$$t__builder();
    // Set instance field: public System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<GetAssetBundleFileResult> <>t__builder
    void _set_$$t__builder(System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GetAssetBundleFileResult> value);
    // Get instance field: public IPreviewBeatmapLevel previewBeatmapLevel
    GlobalNamespace::IPreviewBeatmapLevel* _get_previewBeatmapLevel();
    // Set instance field: public IPreviewBeatmapLevel previewBeatmapLevel
    void _set_previewBeatmapLevel(GlobalNamespace::IPreviewBeatmapLevel* value);
    // Get instance field: public TestBeatmapDataAssetFileModel <>4__this
    GlobalNamespace::TestBeatmapDataAssetFileModel* _get_$$4__this();
    // Set instance field: public TestBeatmapDataAssetFileModel <>4__this
    void _set_$$4__this(GlobalNamespace::TestBeatmapDataAssetFileModel* value);
    // Get instance field: public System.Threading.CancellationToken cancellationToken
    System::Threading::CancellationToken _get_cancellationToken();
    // Set instance field: public System.Threading.CancellationToken cancellationToken
    void _set_cancellationToken(System::Threading::CancellationToken value);
    // Get instance field: private System.String <path>5__2
    ::Il2CppString* _get_$path$5__2();
    // Set instance field: private System.String <path>5__2
    void _set_$path$5__2(::Il2CppString* value);
    // Get instance field: private System.Runtime.CompilerServices.TaskAwaiter <>u__1
    System::Runtime::CompilerServices::TaskAwaiter _get_$$u__1();
    // Set instance field: private System.Runtime.CompilerServices.TaskAwaiter <>u__1
    void _set_$$u__1(System::Runtime::CompilerServices::TaskAwaiter value);
    // Get instance field: private System.UInt32 <i>5__3
    uint _get_$i$5__3();
    // Set instance field: private System.UInt32 <i>5__3
    void _set_$i$5__3(uint value);
    // Get instance field: private System.Runtime.CompilerServices.TaskAwaiter`1<GetAssetBundleFileResult> <>u__2
    System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GetAssetBundleFileResult> _get_$$u__2();
    // Set instance field: private System.Runtime.CompilerServices.TaskAwaiter`1<GetAssetBundleFileResult> <>u__2
    void _set_$$u__2(System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GetAssetBundleFileResult> value);
    // private System.Void MoveNext()
    // Offset: 0xECFBC4
    void MoveNext();
    // private System.Void SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    // Offset: 0xECFBCC
    void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);
  }; // TestBeatmapDataAssetFileModel/<GetAssetBundleFileForPreviewLevelAsync>d__4
  // WARNING Not writing size check since size may be invalid!
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::TestBeatmapDataAssetFileModel::$GetAssetBundleFileForPreviewLevelAsync$d__4, "", "TestBeatmapDataAssetFileModel/<GetAssetBundleFileForPreviewLevelAsync>d__4");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::TestBeatmapDataAssetFileModel::$GetAssetBundleFileForPreviewLevelAsync$d__4::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TestBeatmapDataAssetFileModel::$GetAssetBundleFileForPreviewLevelAsync$d__4::*)()>(&GlobalNamespace::TestBeatmapDataAssetFileModel::$GetAssetBundleFileForPreviewLevelAsync$d__4::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TestBeatmapDataAssetFileModel::$GetAssetBundleFileForPreviewLevelAsync$d__4), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TestBeatmapDataAssetFileModel::$GetAssetBundleFileForPreviewLevelAsync$d__4::SetStateMachine
// Il2CppName: SetStateMachine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TestBeatmapDataAssetFileModel::$GetAssetBundleFileForPreviewLevelAsync$d__4::*)(System::Runtime::CompilerServices::IAsyncStateMachine*)>(&GlobalNamespace::TestBeatmapDataAssetFileModel::$GetAssetBundleFileForPreviewLevelAsync$d__4::SetStateMachine)> {
  static const MethodInfo* get() {
    static auto* stateMachine = &::il2cpp_utils::GetClassFromName("System.Runtime.CompilerServices", "IAsyncStateMachine")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TestBeatmapDataAssetFileModel::$GetAssetBundleFileForPreviewLevelAsync$d__4), "SetStateMachine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stateMachine});
  }
};
