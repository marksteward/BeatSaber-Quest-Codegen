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
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
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
    // Get instance field: public System.Int32 <>1__state
    int _get_$$1__state();
    // Set instance field: public System.Int32 <>1__state
    void _set_$$1__state(int value);
    // Get instance field: public System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<OnlineServices.SendLeaderboardEntryResult> <>t__builder
    System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<OnlineServices::SendLeaderboardEntryResult> _get_$$t__builder();
    // Set instance field: public System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<OnlineServices.SendLeaderboardEntryResult> <>t__builder
    void _set_$$t__builder(System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<OnlineServices::SendLeaderboardEntryResult> value);
    // Get instance field: public HTTPLeaderboardsModel <>4__this
    GlobalNamespace::HTTPLeaderboardsModel* _get_$$4__this();
    // Set instance field: public HTTPLeaderboardsModel <>4__this
    void _set_$$4__this(GlobalNamespace::HTTPLeaderboardsModel* value);
    // Get instance field: public OnlineServices.LevelScoreResultsData levelResultsData
    OnlineServices::LevelScoreResultsData _get_levelResultsData();
    // Set instance field: public OnlineServices.LevelScoreResultsData levelResultsData
    void _set_levelResultsData(OnlineServices::LevelScoreResultsData value);
    // Get instance field: public System.Threading.CancellationToken cancellationToken
    System::Threading::CancellationToken _get_cancellationToken();
    // Set instance field: public System.Threading.CancellationToken cancellationToken
    void _set_cancellationToken(System::Threading::CancellationToken value);
    // Get instance field: private System.String <leaderboardId>5__2
    ::Il2CppString* _get_$leaderboardId$5__2();
    // Set instance field: private System.String <leaderboardId>5__2
    void _set_$leaderboardId$5__2(::Il2CppString* value);
    // Get instance field: private System.Runtime.CompilerServices.TaskAwaiter`1<OnlineServices.API.Response> <>u__1
    System::Runtime::CompilerServices::TaskAwaiter_1<OnlineServices::API::Response> _get_$$u__1();
    // Set instance field: private System.Runtime.CompilerServices.TaskAwaiter`1<OnlineServices.API.Response> <>u__1
    void _set_$$u__1(System::Runtime::CompilerServices::TaskAwaiter_1<OnlineServices::API::Response> value);
    // private System.Void MoveNext()
    // Offset: 0xED0DAC
    void MoveNext();
    // private System.Void SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    // Offset: 0xED0DB4
    void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);
  }; // HTTPLeaderboardsModel/<SendLevelScoreResultAsync>d__11
  // WARNING Not writing size check since size may be invalid!
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::HTTPLeaderboardsModel::$SendLevelScoreResultAsync$d__11, "", "HTTPLeaderboardsModel/<SendLevelScoreResultAsync>d__11");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::HTTPLeaderboardsModel::$SendLevelScoreResultAsync$d__11::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::HTTPLeaderboardsModel::$SendLevelScoreResultAsync$d__11::*)()>(&GlobalNamespace::HTTPLeaderboardsModel::$SendLevelScoreResultAsync$d__11::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::HTTPLeaderboardsModel::$SendLevelScoreResultAsync$d__11), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::HTTPLeaderboardsModel::$SendLevelScoreResultAsync$d__11::SetStateMachine
// Il2CppName: SetStateMachine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::HTTPLeaderboardsModel::$SendLevelScoreResultAsync$d__11::*)(System::Runtime::CompilerServices::IAsyncStateMachine*)>(&GlobalNamespace::HTTPLeaderboardsModel::$SendLevelScoreResultAsync$d__11::SetStateMachine)> {
  static const MethodInfo* get() {
    static auto* stateMachine = &::il2cpp_utils::GetClassFromName("System.Runtime.CompilerServices", "IAsyncStateMachine")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::HTTPLeaderboardsModel::$SendLevelScoreResultAsync$d__11), "SetStateMachine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stateMachine});
  }
};
