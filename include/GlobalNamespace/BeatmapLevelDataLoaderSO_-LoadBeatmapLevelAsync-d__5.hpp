// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
// Including type: BeatmapLevelDataLoaderSO
#include "GlobalNamespace/BeatmapLevelDataLoaderSO.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Runtime.CompilerServices.IAsyncStateMachine
#include "System/Runtime/CompilerServices/IAsyncStateMachine.hpp"
// Including type: System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1
#include "System/Runtime/CompilerServices/AsyncTaskMethodBuilder_1.hpp"
// Including type: System.Runtime.CompilerServices.TaskAwaiter`1
#include "System/Runtime/CompilerServices/TaskAwaiter_1.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IBeatmapLevel
  class IBeatmapLevel;
  // Forward declaring type: BeatmapLevelDataSO
  class BeatmapLevelDataSO;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct Il2CppString;
// Completed il2cpp-utils forward declares
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: BeatmapLevelDataLoaderSO/<LoadBeatmapLevelAsync>d__5
  // [CompilerGeneratedAttribute] Offset: E11AA8
  struct BeatmapLevelDataLoaderSO::$LoadBeatmapLevelAsync$d__5/*, public System::ValueType, public System::Runtime::CompilerServices::IAsyncStateMachine*/ {
    public:
    // public System.Int32 <>1__state
    // Size: 0x4
    // Offset: 0x0
    int $$1__state;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<IBeatmapLevel> <>t__builder
    // Size: 0xFFFFFFFF
    // Offset: 0x8
    System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::IBeatmapLevel*> $$t__builder;
    // public BeatmapLevelDataLoaderSO <>4__this
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::BeatmapLevelDataLoaderSO* $$4__this;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapLevelDataLoaderSO*) == 0x8);
    // public System.String levelID
    // Size: 0x8
    // Offset: 0x28
    ::Il2CppString* levelID;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.Runtime.CompilerServices.TaskAwaiter`1<BeatmapLevelDataSO> <>u__1
    // Size: 0xFFFFFFFF
    // Offset: 0x30
    System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::BeatmapLevelDataSO*> $$u__1;
    // Creating value type constructor for type: $LoadBeatmapLevelAsync$d__5
    constexpr $LoadBeatmapLevelAsync$d__5(int $$1__state_ = {}, System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::IBeatmapLevel*> $$t__builder_ = {}, GlobalNamespace::BeatmapLevelDataLoaderSO* $$4__this_ = {}, ::Il2CppString* levelID_ = {}, System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::BeatmapLevelDataSO*> $$u__1_ = {}) noexcept : $$1__state{$$1__state_}, $$t__builder{$$t__builder_}, $$4__this{$$4__this_}, levelID{levelID_}, $$u__1{$$u__1_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator System::Runtime::CompilerServices::IAsyncStateMachine
    operator System::Runtime::CompilerServices::IAsyncStateMachine() noexcept {
      return *reinterpret_cast<System::Runtime::CompilerServices::IAsyncStateMachine*>(this);
    }
    // private System.Void MoveNext()
    // Offset: 0xEE60DC
    void MoveNext();
    // private System.Void SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    // Offset: 0xEE60E4
    void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);
  }; // BeatmapLevelDataLoaderSO/<LoadBeatmapLevelAsync>d__5
  // WARNING Not writing size check since size may be invalid!
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapLevelDataLoaderSO::$LoadBeatmapLevelAsync$d__5, "", "BeatmapLevelDataLoaderSO/<LoadBeatmapLevelAsync>d__5");
// Writing MetadataGetter for method: GlobalNamespace::BeatmapLevelDataLoaderSO::$LoadBeatmapLevelAsync$d__5::MoveNext
// Il2CppName: MoveNext
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::BeatmapLevelDataLoaderSO::$LoadBeatmapLevelAsync$d__5::SetStateMachine
// Il2CppName: SetStateMachine
// Cannot perform method pointer template specialization from operators!
