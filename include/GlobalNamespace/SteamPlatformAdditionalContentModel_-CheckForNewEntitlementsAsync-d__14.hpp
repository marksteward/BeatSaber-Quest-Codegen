// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: SteamPlatformAdditionalContentModel
#include "GlobalNamespace/SteamPlatformAdditionalContentModel.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Runtime.CompilerServices.IAsyncStateMachine
#include "System/Runtime/CompilerServices/IAsyncStateMachine.hpp"
// Including type: System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1
#include "System/Runtime/CompilerServices/AsyncTaskMethodBuilder_1.hpp"
// Including type: AdditionalContentModel/UpdateEntitlementsResult
#include "GlobalNamespace/AdditionalContentModel_UpdateEntitlementsResult.hpp"
// Including type: System.Runtime.CompilerServices.TaskAwaiter`1
#include "System/Runtime/CompilerServices/TaskAwaiter_1.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: SteamPlatformAdditionalContentModel/<CheckForNewEntitlementsAsync>d__14
  // [CompilerGeneratedAttribute] Offset: D3166C
  struct SteamPlatformAdditionalContentModel::$CheckForNewEntitlementsAsync$d__14/*, public System::ValueType, public System::Runtime::CompilerServices::IAsyncStateMachine*/ {
    public:
    // public System.Int32 <>1__state
    // Size: 0x4
    // Offset: 0x0
    int $$1__state;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<AdditionalContentModel/UpdateEntitlementsResult> <>t__builder
    // Size: 0xFFFFFFFF
    // Offset: 0x8
    System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::AdditionalContentModel::UpdateEntitlementsResult> $$t__builder;
    // private System.Runtime.CompilerServices.TaskAwaiter`1<AdditionalContentModel/UpdateEntitlementsResult> <>u__1
    // Size: 0xFFFFFFFF
    // Offset: 0x20
    System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::AdditionalContentModel::UpdateEntitlementsResult> $$u__1;
    // Creating value type constructor for type: $CheckForNewEntitlementsAsync$d__14
    constexpr $CheckForNewEntitlementsAsync$d__14(int $$1__state_ = {}, System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::AdditionalContentModel::UpdateEntitlementsResult> $$t__builder_ = {}, System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::AdditionalContentModel::UpdateEntitlementsResult> $$u__1_ = {}) noexcept : $$1__state{$$1__state_}, $$t__builder{$$t__builder_}, $$u__1{$$u__1_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator System::Runtime::CompilerServices::IAsyncStateMachine
    operator System::Runtime::CompilerServices::IAsyncStateMachine() noexcept {
      return *reinterpret_cast<System::Runtime::CompilerServices::IAsyncStateMachine*>(this);
    }
    // private System.Void MoveNext()
    // Offset: 0xDF3F38
    void MoveNext();
    // private System.Void SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    // Offset: 0xDF3F40
    void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);
  }; // SteamPlatformAdditionalContentModel/<CheckForNewEntitlementsAsync>d__14
  // WARNING Not writing size check since size may be invalid!
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SteamPlatformAdditionalContentModel::$CheckForNewEntitlementsAsync$d__14, "", "SteamPlatformAdditionalContentModel/<CheckForNewEntitlementsAsync>d__14");
