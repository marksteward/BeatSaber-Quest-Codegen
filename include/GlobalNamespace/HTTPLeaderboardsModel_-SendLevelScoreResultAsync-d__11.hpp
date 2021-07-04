// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: HTTPLeaderboardsModel
#include "GlobalNamespace/HTTPLeaderboardsModel.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Runtime.CompilerServices.IAsyncStateMachine
#include "System/Runtime/CompilerServices/IAsyncStateMachine.hpp"
// Including type: System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1
#include "System/Runtime/CompilerServices/AsyncTaskMethodBuilder_1.hpp"
// Including type: OnlineServices.SendLeaderboardEntryResult
#include "OnlineServices/SendLeaderboardEntryResult.hpp"
// Including type: OnlineServices.LevelScoreResultsData
#include "OnlineServices/LevelScoreResultsData.hpp"
// Including type: System.Threading.CancellationToken
#include "System/Threading/CancellationToken.hpp"
// Including type: System.Runtime.CompilerServices.TaskAwaiter`1
#include "System/Runtime/CompilerServices/TaskAwaiter_1.hpp"
// Including type: OnlineServices.API.Response
#include "OnlineServices/API/Response.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: HTTPLeaderboardsModel/<SendLevelScoreResultAsync>d__11
  // [CompilerGeneratedAttribute] Offset: E11E28
  struct HTTPLeaderboardsModel::$SendLevelScoreResultAsync$d__11/*, public System::ValueType, public System::Runtime::CompilerServices::IAsyncStateMachine*/ {
    public:
    // public System.Int32 <>1__state
    // Size: 0x4
    // Offset: 0x0
    int $$1__state;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<OnlineServices.SendLeaderboardEntryResult> <>t__builder
    // Size: 0xFFFFFFFF
    // Offset: 0x8
    System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<OnlineServices::SendLeaderboardEntryResult> $$t__builder;
    // public HTTPLeaderboardsModel <>4__this
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::HTTPLeaderboardsModel* $$4__this;
    // Field size check
    static_assert(sizeof(GlobalNamespace::HTTPLeaderboardsModel*) == 0x8);
    // public OnlineServices.LevelScoreResultsData levelResultsData
    // Size: 0x30
    // Offset: 0x28
    OnlineServices::LevelScoreResultsData levelResultsData;
    // Field size check
    static_assert(sizeof(OnlineServices::LevelScoreResultsData) == 0x30);
    // public System.Threading.CancellationToken cancellationToken
    // Size: 0x8
    // Offset: 0x58
    System::Threading::CancellationToken cancellationToken;
    // Field size check
    static_assert(sizeof(System::Threading::CancellationToken) == 0x8);
    // private System.String <leaderboardId>5__2
    // Size: 0x8
    // Offset: 0x60
    ::Il2CppString* $leaderboardId$5__2;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.Runtime.CompilerServices.TaskAwaiter`1<OnlineServices.API.Response> <>u__1
    // Size: 0xFFFFFFFF
    // Offset: 0x68
    System::Runtime::CompilerServices::TaskAwaiter_1<OnlineServices::API::Response> $$u__1;
    // Creating value type constructor for type: $SendLevelScoreResultAsync$d__11
    constexpr $SendLevelScoreResultAsync$d__11(int $$1__state_ = {}, System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<OnlineServices::SendLeaderboardEntryResult> $$t__builder_ = {}, GlobalNamespace::HTTPLeaderboardsModel* $$4__this_ = {}, OnlineServices::LevelScoreResultsData levelResultsData_ = {}, System::Threading::CancellationToken cancellationToken_ = {}, ::Il2CppString* $leaderboardId$5__2_ = {}, System::Runtime::CompilerServices::TaskAwaiter_1<OnlineServices::API::Response> $$u__1_ = {}) noexcept : $$1__state{$$1__state_}, $$t__builder{$$t__builder_}, $$4__this{$$4__this_}, levelResultsData{levelResultsData_}, cancellationToken{cancellationToken_}, $leaderboardId$5__2{$leaderboardId$5__2_}, $$u__1{$$u__1_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator System::Runtime::CompilerServices::IAsyncStateMachine
    operator System::Runtime::CompilerServices::IAsyncStateMachine() noexcept {
      return *reinterpret_cast<System::Runtime::CompilerServices::IAsyncStateMachine*>(this);
    }
    // private System.Void MoveNext()
    // Offset: 0xEE4BF8
    void MoveNext();
    // private System.Void SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    // Offset: 0xEE4C00
    void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);
  }; // HTTPLeaderboardsModel/<SendLevelScoreResultAsync>d__11
  // WARNING Not writing size check since size may be invalid!
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::HTTPLeaderboardsModel::$SendLevelScoreResultAsync$d__11, "", "HTTPLeaderboardsModel/<SendLevelScoreResultAsync>d__11");
// Writing MetadataGetter for method: GlobalNamespace::HTTPLeaderboardsModel::$SendLevelScoreResultAsync$d__11::MoveNext
// Il2CppName: MoveNext
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::HTTPLeaderboardsModel::$SendLevelScoreResultAsync$d__11::SetStateMachine
// Il2CppName: SetStateMachine
// Cannot perform method pointer template specialization from operators!
