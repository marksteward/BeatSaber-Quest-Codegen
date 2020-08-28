// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: StandardLevelDetailViewController
#include "GlobalNamespace/StandardLevelDetailViewController.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Runtime.CompilerServices.IAsyncStateMachine
#include "System/Runtime/CompilerServices/IAsyncStateMachine.hpp"
// Including type: System.Runtime.CompilerServices.AsyncVoidMethodBuilder
#include "System/Runtime/CompilerServices/AsyncVoidMethodBuilder.hpp"
// Including type: System.Threading.CancellationToken
#include "System/Threading/CancellationToken.hpp"
// Including type: System.Runtime.CompilerServices.TaskAwaiter`1
#include "System/Runtime/CompilerServices/TaskAwaiter_1.hpp"
// Including type: BeatmapLevelsModel/GetBeatmapLevelResult
#include "GlobalNamespace/BeatmapLevelsModel.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: StandardLevelDetailViewController/<LoadBeatmapLevelAsync>d__47
  struct StandardLevelDetailViewController::$LoadBeatmapLevelAsync$d__47 : public System::ValueType, public System::Runtime::CompilerServices::IAsyncStateMachine {
    public:
    // public System.Int32 <>1__state
    // Offset: 0x0
    int $$1__state;
    // public System.Runtime.CompilerServices.AsyncVoidMethodBuilder <>t__builder
    // Offset: 0x8
    System::Runtime::CompilerServices::AsyncVoidMethodBuilder $$t__builder;
    // public StandardLevelDetailViewController <>4__this
    // Offset: 0x28
    GlobalNamespace::StandardLevelDetailViewController* $$4__this;
    // private System.Threading.CancellationToken <cancellationToken>5__2
    // Offset: 0x30
    System::Threading::CancellationToken $cancellationToken$5__2;
    // private System.Runtime.CompilerServices.TaskAwaiter`1<BeatmapLevelsModel/GetBeatmapLevelResult> <>u__1
    // Offset: 0x38
    System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::BeatmapLevelsModel::GetBeatmapLevelResult> $$u__1;
    // private System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean> <>u__2
    // Offset: 0x40
    System::Runtime::CompilerServices::TaskAwaiter_1<bool> $$u__2;
    // Creating value type constructor for type: $LoadBeatmapLevelAsync$d__47
    constexpr $LoadBeatmapLevelAsync$d__47(int $$1__state_ = {}, System::Runtime::CompilerServices::AsyncVoidMethodBuilder $$t__builder_ = {}, GlobalNamespace::StandardLevelDetailViewController* $$4__this_ = {}, System::Threading::CancellationToken $cancellationToken$5__2_ = {}, System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::BeatmapLevelsModel::GetBeatmapLevelResult> $$u__1_ = {}, System::Runtime::CompilerServices::TaskAwaiter_1<bool> $$u__2_ = {}) : $$1__state{$$1__state_}, $$t__builder{$$t__builder_}, $$4__this{$$4__this_}, $cancellationToken$5__2{$cancellationToken$5__2_}, $$u__1{$$u__1_}, $$u__2{$$u__2_} {}
    // private System.Void MoveNext()
    // Offset: 0xA2BE80
    // Implemented from: System.Runtime.CompilerServices.IAsyncStateMachine
    // Base method: System.Void IAsyncStateMachine::MoveNext()
    void MoveNext();
    // private System.Void SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    // Offset: 0xA2BE88
    // Implemented from: System.Runtime.CompilerServices.IAsyncStateMachine
    // Base method: System.Void IAsyncStateMachine::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);
  }; // StandardLevelDetailViewController/<LoadBeatmapLevelAsync>d__47
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::StandardLevelDetailViewController::$LoadBeatmapLevelAsync$d__47, "", "StandardLevelDetailViewController/<LoadBeatmapLevelAsync>d__47");
#pragma pack(pop)
