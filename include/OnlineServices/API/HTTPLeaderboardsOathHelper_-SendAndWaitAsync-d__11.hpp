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
// Including type: System.Threading.CancellationToken
#include "System/Threading/CancellationToken.hpp"
// Including type: System.Runtime.CompilerServices.TaskAwaiter
#include "System/Runtime/CompilerServices/TaskAwaiter.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Networking
namespace UnityEngine::Networking {
  // Forward declaring type: UnityWebRequest
  class UnityWebRequest;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AsyncOperation
  class AsyncOperation;
}
// Completed forward declares
// Type namespace: OnlineServices.API
namespace OnlineServices::API {
  // WARNING Size may be invalid!
  // Autogenerated type: OnlineServices.API.HTTPLeaderboardsOathHelper/<SendAndWaitAsync>d__11
  // [CompilerGeneratedAttribute] Offset: E12B68
  struct HTTPLeaderboardsOathHelper::$SendAndWaitAsync$d__11/*, public System::ValueType, public System::Runtime::CompilerServices::IAsyncStateMachine*/ {
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
    // public UnityEngine.Networking.UnityWebRequest webRequest
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::Networking::UnityWebRequest* webRequest;
    // Field size check
    static_assert(sizeof(UnityEngine::Networking::UnityWebRequest*) == 0x8);
    // public System.Threading.CancellationToken cancellationToken
    // Size: 0x8
    // Offset: 0x28
    System::Threading::CancellationToken cancellationToken;
    // Field size check
    static_assert(sizeof(System::Threading::CancellationToken) == 0x8);
    // private UnityEngine.AsyncOperation <asyncOperation>5__2
    // Size: 0x8
    // Offset: 0x30
    UnityEngine::AsyncOperation* $asyncOperation$5__2;
    // Field size check
    static_assert(sizeof(UnityEngine::AsyncOperation*) == 0x8);
    // private System.Runtime.CompilerServices.TaskAwaiter <>u__1
    // Size: 0x8
    // Offset: 0x38
    System::Runtime::CompilerServices::TaskAwaiter $$u__1;
    // Field size check
    static_assert(sizeof(System::Runtime::CompilerServices::TaskAwaiter) == 0x8);
    // Creating value type constructor for type: $SendAndWaitAsync$d__11
    constexpr $SendAndWaitAsync$d__11(int $$1__state_ = {}, System::Runtime::CompilerServices::AsyncTaskMethodBuilder $$t__builder_ = {}, UnityEngine::Networking::UnityWebRequest* webRequest_ = {}, System::Threading::CancellationToken cancellationToken_ = {}, UnityEngine::AsyncOperation* $asyncOperation$5__2_ = {}, System::Runtime::CompilerServices::TaskAwaiter $$u__1_ = {}) noexcept : $$1__state{$$1__state_}, $$t__builder{$$t__builder_}, webRequest{webRequest_}, cancellationToken{cancellationToken_}, $asyncOperation$5__2{$asyncOperation$5__2_}, $$u__1{$$u__1_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator System::Runtime::CompilerServices::IAsyncStateMachine
    operator System::Runtime::CompilerServices::IAsyncStateMachine() noexcept {
      return *reinterpret_cast<System::Runtime::CompilerServices::IAsyncStateMachine*>(this);
    }
    // private System.Void MoveNext()
    // Offset: 0xEE63A4
    void MoveNext();
    // private System.Void SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    // Offset: 0xEE63AC
    void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);
  }; // OnlineServices.API.HTTPLeaderboardsOathHelper/<SendAndWaitAsync>d__11
  // WARNING Not writing size check since size may be invalid!
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(OnlineServices::API::HTTPLeaderboardsOathHelper::$SendAndWaitAsync$d__11, "OnlineServices.API", "HTTPLeaderboardsOathHelper/<SendAndWaitAsync>d__11");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: OnlineServices::API::HTTPLeaderboardsOathHelper::$SendAndWaitAsync$d__11::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OnlineServices::API::HTTPLeaderboardsOathHelper::$SendAndWaitAsync$d__11::*)()>(&OnlineServices::API::HTTPLeaderboardsOathHelper::$SendAndWaitAsync$d__11::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OnlineServices::API::HTTPLeaderboardsOathHelper::$SendAndWaitAsync$d__11), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OnlineServices::API::HTTPLeaderboardsOathHelper::$SendAndWaitAsync$d__11::SetStateMachine
// Il2CppName: SetStateMachine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OnlineServices::API::HTTPLeaderboardsOathHelper::$SendAndWaitAsync$d__11::*)(System::Runtime::CompilerServices::IAsyncStateMachine*)>(&OnlineServices::API::HTTPLeaderboardsOathHelper::$SendAndWaitAsync$d__11::SetStateMachine)> {
  static const MethodInfo* get() {
    static auto* stateMachine = &::il2cpp_utils::GetClassFromName("System.Runtime.CompilerServices", "IAsyncStateMachine")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OnlineServices::API::HTTPLeaderboardsOathHelper::$SendAndWaitAsync$d__11), "SetStateMachine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stateMachine});
  }
};
