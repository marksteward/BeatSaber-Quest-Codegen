// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OculusPlatformAdditionalContentModel
#include "GlobalNamespace/OculusPlatformAdditionalContentModel.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Runtime.CompilerServices.IAsyncStateMachine
#include "System/Runtime/CompilerServices/IAsyncStateMachine.hpp"
// Including type: System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1
#include "System/Runtime/CompilerServices/AsyncTaskMethodBuilder_1.hpp"
// Including type: AdditionalContentModel/OpenProductStoreResult
#include "GlobalNamespace/AdditionalContentModel.hpp"
// Including type: System.Threading.CancellationToken
#include "System/Threading/CancellationToken.hpp"
// Including type: System.Runtime.CompilerServices.TaskAwaiter`1
#include "System/Runtime/CompilerServices/TaskAwaiter_1.hpp"
// Including type: System.Runtime.CompilerServices.TaskAwaiter
#include "System/Runtime/CompilerServices/TaskAwaiter.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Oculus::Platform
namespace Oculus::Platform {
  // Forward declaring type: Message`1<T>
  template<typename T>
  class Message_1;
}
// Forward declaring namespace: Oculus::Platform::Models
namespace Oculus::Platform::Models {
  // Forward declaring type: Purchase
  class Purchase;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: OculusPlatformAdditionalContentModel/<OpenLevelPackProductStoreAsync>d__9
  struct OculusPlatformAdditionalContentModel::$OpenLevelPackProductStoreAsync$d__9 : public System::ValueType, public System::Runtime::CompilerServices::IAsyncStateMachine {
    public:
    // public System.Int32 <>1__state
    // Offset: 0x0
    int $$1__state;
    // public System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<AdditionalContentModel/OpenProductStoreResult> <>t__builder
    // Offset: 0x8
    System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::AdditionalContentModel::OpenProductStoreResult> $$t__builder;
    // public OculusPlatformAdditionalContentModel <>4__this
    // Offset: 0x20
    GlobalNamespace::OculusPlatformAdditionalContentModel* $$4__this;
    // public System.String levelPackId
    // Offset: 0x28
    ::Il2CppString* levelPackId;
    // public System.Threading.CancellationToken cancellationToken
    // Offset: 0x30
    System::Threading::CancellationToken cancellationToken;
    // private System.Runtime.CompilerServices.TaskAwaiter`1<Oculus.Platform.Message`1<Oculus.Platform.Models.Purchase>> <>u__1
    // Offset: 0x38
    System::Runtime::CompilerServices::TaskAwaiter_1<Oculus::Platform::Message_1<Oculus::Platform::Models::Purchase*>*> $$u__1;
    // private System.Runtime.CompilerServices.TaskAwaiter <>u__2
    // Offset: 0x40
    System::Runtime::CompilerServices::TaskAwaiter $$u__2;
    // Creating value type constructor for type: $OpenLevelPackProductStoreAsync$d__9
    constexpr $OpenLevelPackProductStoreAsync$d__9(int $$1__state_ = {}, System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::AdditionalContentModel::OpenProductStoreResult> $$t__builder_ = {}, GlobalNamespace::OculusPlatformAdditionalContentModel* $$4__this_ = {}, ::Il2CppString* levelPackId_ = {}, System::Threading::CancellationToken cancellationToken_ = {}, System::Runtime::CompilerServices::TaskAwaiter_1<Oculus::Platform::Message_1<Oculus::Platform::Models::Purchase*>*> $$u__1_ = {}, System::Runtime::CompilerServices::TaskAwaiter $$u__2_ = {}) : $$1__state{$$1__state_}, $$t__builder{$$t__builder_}, $$4__this{$$4__this_}, levelPackId{levelPackId_}, cancellationToken{cancellationToken_}, $$u__1{$$u__1_}, $$u__2{$$u__2_} {}
    // private System.Void MoveNext()
    // Offset: 0xA2C8F0
    // Implemented from: System.Runtime.CompilerServices.IAsyncStateMachine
    // Base method: System.Void IAsyncStateMachine::MoveNext()
    void MoveNext();
    // private System.Void SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    // Offset: 0xA2C8F8
    // Implemented from: System.Runtime.CompilerServices.IAsyncStateMachine
    // Base method: System.Void IAsyncStateMachine::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);
  }; // OculusPlatformAdditionalContentModel/<OpenLevelPackProductStoreAsync>d__9
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OculusPlatformAdditionalContentModel::$OpenLevelPackProductStoreAsync$d__9, "", "OculusPlatformAdditionalContentModel/<OpenLevelPackProductStoreAsync>d__9");
#pragma pack(pop)
