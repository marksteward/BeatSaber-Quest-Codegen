// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OnlineServices.ServerManager
#include "OnlineServices/ServerManager.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Runtime.CompilerServices.IAsyncStateMachine
#include "System/Runtime/CompilerServices/IAsyncStateMachine.hpp"
// Including type: System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1
#include "System/Runtime/CompilerServices/AsyncTaskMethodBuilder_1.hpp"
// Including type: System.Threading.CancellationToken
#include "System/Threading/CancellationToken.hpp"
// Including type: OnlineServices.GetLeaderboardFilterData
#include "OnlineServices/GetLeaderboardFilterData.hpp"
// Including type: System.Runtime.CompilerServices.TaskAwaiter`1
#include "System/Runtime/CompilerServices/TaskAwaiter_1.hpp"
// Including type: OnlineServices.GetLeaderboardEntriesResult
#include "OnlineServices/GetLeaderboardEntriesResult.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: OnlineServices
namespace OnlineServices {
  // Forward declaring type: LeaderboardEntriesResult
  class LeaderboardEntriesResult;
  // Forward declaring type: PlatformServicesAvailabilityInfo
  class PlatformServicesAvailabilityInfo;
}
// Completed forward declares
// Type namespace: OnlineServices
namespace OnlineServices {
  // Autogenerated type: OnlineServices.ServerManager/<GetLeaderboardEntriesAsync>d__13
  struct ServerManager::$GetLeaderboardEntriesAsync$d__13 : public System::ValueType, public System::Runtime::CompilerServices::IAsyncStateMachine {
    public:
    // public System.Int32 <>1__state
    // Offset: 0x0
    int $$1__state;
    // public System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<OnlineServices.LeaderboardEntriesResult> <>t__builder
    // Offset: 0x8
    System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<OnlineServices::LeaderboardEntriesResult*> $$t__builder;
    // public OnlineServices.ServerManager <>4__this
    // Offset: 0x20
    OnlineServices::ServerManager* $$4__this;
    // public System.Threading.CancellationToken cancellationToken
    // Offset: 0x28
    System::Threading::CancellationToken cancellationToken;
    // public OnlineServices.GetLeaderboardFilterData leaderboardFilterData
    // Offset: 0x30
    OnlineServices::GetLeaderboardFilterData leaderboardFilterData;
    // private System.Runtime.CompilerServices.TaskAwaiter`1<OnlineServices.PlatformServicesAvailabilityInfo> <>u__1
    // Offset: 0x48
    System::Runtime::CompilerServices::TaskAwaiter_1<OnlineServices::PlatformServicesAvailabilityInfo*> $$u__1;
    // private System.Runtime.CompilerServices.TaskAwaiter`1<OnlineServices.GetLeaderboardEntriesResult> <>u__2
    // Offset: 0x50
    System::Runtime::CompilerServices::TaskAwaiter_1<OnlineServices::GetLeaderboardEntriesResult> $$u__2;
    // Creating value type constructor for type: $GetLeaderboardEntriesAsync$d__13
    constexpr $GetLeaderboardEntriesAsync$d__13(int $$1__state_ = {}, System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<OnlineServices::LeaderboardEntriesResult*> $$t__builder_ = {}, OnlineServices::ServerManager* $$4__this_ = {}, System::Threading::CancellationToken cancellationToken_ = {}, OnlineServices::GetLeaderboardFilterData leaderboardFilterData_ = {}, System::Runtime::CompilerServices::TaskAwaiter_1<OnlineServices::PlatformServicesAvailabilityInfo*> $$u__1_ = {}, System::Runtime::CompilerServices::TaskAwaiter_1<OnlineServices::GetLeaderboardEntriesResult> $$u__2_ = {}) : $$1__state{$$1__state_}, $$t__builder{$$t__builder_}, $$4__this{$$4__this_}, cancellationToken{cancellationToken_}, leaderboardFilterData{leaderboardFilterData_}, $$u__1{$$u__1_}, $$u__2{$$u__2_} {}
    // private System.Void MoveNext()
    // Offset: 0xA2C1C0
    // Implemented from: System.Runtime.CompilerServices.IAsyncStateMachine
    // Base method: System.Void IAsyncStateMachine::MoveNext()
    void MoveNext();
    // private System.Void SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    // Offset: 0xA2C1C8
    // Implemented from: System.Runtime.CompilerServices.IAsyncStateMachine
    // Base method: System.Void IAsyncStateMachine::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);
  }; // OnlineServices.ServerManager/<GetLeaderboardEntriesAsync>d__13
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(OnlineServices::ServerManager::$GetLeaderboardEntriesAsync$d__13, "OnlineServices", "ServerManager/<GetLeaderboardEntriesAsync>d__13");
#pragma pack(pop)
