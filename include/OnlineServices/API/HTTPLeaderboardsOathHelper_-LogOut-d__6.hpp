// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OnlineServices.API.HTTPLeaderboardsOathHelper
#include "OnlineServices/API/HTTPLeaderboardsOathHelper.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Runtime.CompilerServices.IAsyncStateMachine
#include "System/Runtime/CompilerServices/IAsyncStateMachine.hpp"
// Including type: System.Runtime.CompilerServices.AsyncTaskMethodBuilder
#include "System/Runtime/CompilerServices/AsyncTaskMethodBuilder.hpp"
// Including type: System.Runtime.CompilerServices.TaskAwaiter`1
#include "System/Runtime/CompilerServices/TaskAwaiter_1.hpp"
// Completed includes
// Type namespace: OnlineServices.API
namespace OnlineServices::API {
  // WARNING Size may be invalid!
  // Autogenerated type: OnlineServices.API.HTTPLeaderboardsOathHelper/<LogOut>d__6
  // [CompilerGeneratedAttribute] Offset: D3287C
  struct HTTPLeaderboardsOathHelper::$LogOut$d__6/*, public System::ValueType, public System::Runtime::CompilerServices::IAsyncStateMachine*/ {
    public:
    // public System.Int32 <>1__state
    // Size: 0x4
    // Offset: 0x0
    int $$1__state;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Runtime.CompilerServices.AsyncTaskMethodBuilder <>t__builder
    // Size: 0xFFFFFFFF
    // Offset: 0x8
    System::Runtime::CompilerServices::AsyncTaskMethodBuilder $$t__builder;
    // public OnlineServices.API.HTTPLeaderboardsOathHelper <>4__this
    // Size: 0x8
    // Offset: 0x20
    OnlineServices::API::HTTPLeaderboardsOathHelper* $$4__this;
    // Field size check
    static_assert(sizeof(OnlineServices::API::HTTPLeaderboardsOathHelper*) == 0x8);
    // private System.Runtime.CompilerServices.TaskAwaiter`1<System.String> <>u__1
    // Size: 0xFFFFFFFF
    // Offset: 0x28
    System::Runtime::CompilerServices::TaskAwaiter_1<::Il2CppString*> $$u__1;
    // Creating value type constructor for type: $LogOut$d__6
    constexpr $LogOut$d__6(int $$1__state_ = {}, System::Runtime::CompilerServices::AsyncTaskMethodBuilder $$t__builder_ = {}, OnlineServices::API::HTTPLeaderboardsOathHelper* $$4__this_ = {}, System::Runtime::CompilerServices::TaskAwaiter_1<::Il2CppString*> $$u__1_ = {}) noexcept : $$1__state{$$1__state_}, $$t__builder{$$t__builder_}, $$4__this{$$4__this_}, $$u__1{$$u__1_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator System::Runtime::CompilerServices::IAsyncStateMachine
    operator System::Runtime::CompilerServices::IAsyncStateMachine() noexcept {
      return *reinterpret_cast<System::Runtime::CompilerServices::IAsyncStateMachine*>(this);
    }
    // private System.Void MoveNext()
    // Offset: 0xDF342C
    void MoveNext();
    // private System.Void SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    // Offset: 0xDF3434
    void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);
  }; // OnlineServices.API.HTTPLeaderboardsOathHelper/<LogOut>d__6
  // WARNING Not writing size check since size may be invalid!
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(OnlineServices::API::HTTPLeaderboardsOathHelper::$LogOut$d__6, "OnlineServices.API", "HTTPLeaderboardsOathHelper/<LogOut>d__6");
