// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: LevelPackDetailViewController
#include "GlobalNamespace/LevelPackDetailViewController.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Runtime.CompilerServices.IAsyncStateMachine
#include "System/Runtime/CompilerServices/IAsyncStateMachine.hpp"
// Including type: System.Runtime.CompilerServices.AsyncVoidMethodBuilder
#include "System/Runtime/CompilerServices/AsyncVoidMethodBuilder.hpp"
// Including type: System.Runtime.CompilerServices.TaskAwaiter`1
#include "System/Runtime/CompilerServices/TaskAwaiter_1.hpp"
// Including type: AdditionalContentModel/EntitlementStatus
#include "GlobalNamespace/AdditionalContentModel.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: LevelPackDetailViewController/<RefreshAvailabilityAsync>d__17
  struct LevelPackDetailViewController::$RefreshAvailabilityAsync$d__17 : public System::ValueType, public System::Runtime::CompilerServices::IAsyncStateMachine {
    public:
    // public System.Int32 <>1__state
    // Offset: 0x0
    int $$1__state;
    // public System.Runtime.CompilerServices.AsyncVoidMethodBuilder <>t__builder
    // Offset: 0x8
    System::Runtime::CompilerServices::AsyncVoidMethodBuilder $$t__builder;
    // public LevelPackDetailViewController <>4__this
    // Offset: 0x28
    GlobalNamespace::LevelPackDetailViewController* $$4__this;
    // private System.Runtime.CompilerServices.TaskAwaiter`1<AdditionalContentModel/EntitlementStatus> <>u__1
    // Offset: 0x30
    System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::AdditionalContentModel::EntitlementStatus> $$u__1;
    // Creating value type constructor for type: $RefreshAvailabilityAsync$d__17
    constexpr $RefreshAvailabilityAsync$d__17(int $$1__state_ = {}, System::Runtime::CompilerServices::AsyncVoidMethodBuilder $$t__builder_ = {}, GlobalNamespace::LevelPackDetailViewController* $$4__this_ = {}, System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::AdditionalContentModel::EntitlementStatus> $$u__1_ = {}) : $$1__state{$$1__state_}, $$t__builder{$$t__builder_}, $$4__this{$$4__this_}, $$u__1{$$u__1_} {}
    // private System.Void MoveNext()
    // Offset: 0xA2C5B4
    // Implemented from: System.Runtime.CompilerServices.IAsyncStateMachine
    // Base method: System.Void IAsyncStateMachine::MoveNext()
    void MoveNext();
    // private System.Void SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    // Offset: 0xA2C5BC
    // Implemented from: System.Runtime.CompilerServices.IAsyncStateMachine
    // Base method: System.Void IAsyncStateMachine::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);
  }; // LevelPackDetailViewController/<RefreshAvailabilityAsync>d__17
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LevelPackDetailViewController::$RefreshAvailabilityAsync$d__17, "", "LevelPackDetailViewController/<RefreshAvailabilityAsync>d__17");
#pragma pack(pop)
