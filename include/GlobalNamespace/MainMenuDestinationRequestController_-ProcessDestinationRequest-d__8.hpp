// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: MainMenuDestinationRequestController
#include "GlobalNamespace/MainMenuDestinationRequestController.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Runtime.CompilerServices.IAsyncStateMachine
#include "System/Runtime/CompilerServices/IAsyncStateMachine.hpp"
// Including type: System.Runtime.CompilerServices.AsyncVoidMethodBuilder
#include "System/Runtime/CompilerServices/AsyncVoidMethodBuilder.hpp"
// Including type: System.Threading.CancellationToken
#include "System/Threading/CancellationToken.hpp"
// Including type: System.Runtime.CompilerServices.TaskAwaiter
#include "System/Runtime/CompilerServices/TaskAwaiter.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MenuDestination
  class MenuDestination;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x50
  #pragma pack(push, 1)
  // Autogenerated type: MainMenuDestinationRequestController/<ProcessDestinationRequest>d__8
  // [] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: D30BC0
  struct MainMenuDestinationRequestController::$ProcessDestinationRequest$d__8/*, public System::ValueType, public System::Runtime::CompilerServices::IAsyncStateMachine*/ {
    public:
    // public System.Int32 <>1__state
    // Size: 0x4
    // Offset: 0x0
    int $$1__state;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: $$1__state and: $$t__builder
    char __padding0[0x4] = {};
    // public System.Runtime.CompilerServices.AsyncVoidMethodBuilder <>t__builder
    // Size: 0x20
    // Offset: 0x8
    System::Runtime::CompilerServices::AsyncVoidMethodBuilder $$t__builder;
    // Field size check
    static_assert(sizeof(System::Runtime::CompilerServices::AsyncVoidMethodBuilder) == 0x20);
    // public MenuDestination menuDestination
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::MenuDestination* menuDestination;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MenuDestination*) == 0x8);
    // public MainMenuDestinationRequestController <>4__this
    // Size: 0x8
    // Offset: 0x30
    GlobalNamespace::MainMenuDestinationRequestController* $$4__this;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MainMenuDestinationRequestController*) == 0x8);
    // private MainMenuDestinationRequestController/<>c__DisplayClass8_0 <>8__1
    // Size: 0x8
    // Offset: 0x38
    GlobalNamespace::MainMenuDestinationRequestController::$$c__DisplayClass8_0* $$8__1;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MainMenuDestinationRequestController::$$c__DisplayClass8_0*) == 0x8);
    // private System.Threading.CancellationToken <cancellationToken>5__2
    // Size: 0x8
    // Offset: 0x40
    System::Threading::CancellationToken $cancellationToken$5__2;
    // Field size check
    static_assert(sizeof(System::Threading::CancellationToken) == 0x8);
    // private System.Runtime.CompilerServices.TaskAwaiter <>u__1
    // Size: 0x8
    // Offset: 0x48
    System::Runtime::CompilerServices::TaskAwaiter $$u__1;
    // Field size check
    static_assert(sizeof(System::Runtime::CompilerServices::TaskAwaiter) == 0x8);
    // Creating value type constructor for type: $ProcessDestinationRequest$d__8
    constexpr $ProcessDestinationRequest$d__8(int $$1__state_ = {}, System::Runtime::CompilerServices::AsyncVoidMethodBuilder $$t__builder_ = {}, GlobalNamespace::MenuDestination* menuDestination_ = {}, GlobalNamespace::MainMenuDestinationRequestController* $$4__this_ = {}, GlobalNamespace::MainMenuDestinationRequestController::$$c__DisplayClass8_0* $$8__1_ = {}, System::Threading::CancellationToken $cancellationToken$5__2_ = {}, System::Runtime::CompilerServices::TaskAwaiter $$u__1_ = {}) noexcept : $$1__state{$$1__state_}, $$t__builder{$$t__builder_}, menuDestination{menuDestination_}, $$4__this{$$4__this_}, $$8__1{$$8__1_}, $cancellationToken$5__2{$cancellationToken$5__2_}, $$u__1{$$u__1_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator System::Runtime::CompilerServices::IAsyncStateMachine
    operator System::Runtime::CompilerServices::IAsyncStateMachine() noexcept {
      return *reinterpret_cast<System::Runtime::CompilerServices::IAsyncStateMachine*>(this);
    }
    // private System.Void MoveNext()
    // Offset: 0xDF3D30
    // Implemented from: System.Runtime.CompilerServices.IAsyncStateMachine
    // Base method: System.Void IAsyncStateMachine::MoveNext()
    void MoveNext();
    // private System.Void SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    // Offset: 0xDF3D38
    // Implemented from: System.Runtime.CompilerServices.IAsyncStateMachine
    // Base method: System.Void IAsyncStateMachine::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);
  }; // MainMenuDestinationRequestController/<ProcessDestinationRequest>d__8
  #pragma pack(pop)
  static check_size<sizeof(MainMenuDestinationRequestController::$ProcessDestinationRequest$d__8), 72 + sizeof(System::Runtime::CompilerServices::TaskAwaiter)> __GlobalNamespace_MainMenuDestinationRequestController_$ProcessDestinationRequest$d__8SizeCheck;
  static_assert(sizeof(MainMenuDestinationRequestController::$ProcessDestinationRequest$d__8) == 0x50);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MainMenuDestinationRequestController::$ProcessDestinationRequest$d__8, "", "MainMenuDestinationRequestController/<ProcessDestinationRequest>d__8");