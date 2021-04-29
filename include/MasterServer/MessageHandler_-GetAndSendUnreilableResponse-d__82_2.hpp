// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: MasterServer.MessageHandler
#include "MasterServer/MessageHandler.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Runtime.CompilerServices.IAsyncStateMachine
#include "System/Runtime/CompilerServices/IAsyncStateMachine.hpp"
// Including type: System.Runtime.CompilerServices.AsyncVoidMethodBuilder
#include "System/Runtime/CompilerServices/AsyncVoidMethodBuilder.hpp"
// Including type: System.Runtime.CompilerServices.TaskAwaiter`1
#include "System/Runtime/CompilerServices/TaskAwaiter_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: MasterServer
namespace MasterServer {
  // Forward declaring type: IMasterServerUnreliableMessage
  class IMasterServerUnreliableMessage;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`3<T1, T2, TResult>
  template<typename T1, typename T2, typename TResult>
  class Func_3;
  // Forward declaring type: Func`1<TResult>
  template<typename TResult>
  class Func_1;
}
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task`1<TResult>
  template<typename TResult>
  class Task_1;
}
// Completed forward declares
// Type namespace: MasterServer
namespace MasterServer {
  // WARNING Size may be invalid!
  // Autogenerated type: MasterServer.MessageHandler/<GetAndSendUnreilableResponse>d__82`2
  // [CompilerGeneratedAttribute] Offset: D1AAE4
  template<typename TRequest, typename TResponse>
  struct MessageHandler::$GetAndSendUnreilableResponse$d__82_2/*, public System::ValueType, public System::Runtime::CompilerServices::IAsyncStateMachine*/ {
    public:
    // public System.Int32 <>1__state
    // Size: 0x4
    // Offset: 0x0
    int $$1__state;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Runtime.CompilerServices.AsyncVoidMethodBuilder <>t__builder
    // Size: 0x20
    // Offset: 0x0
    System::Runtime::CompilerServices::AsyncVoidMethodBuilder $$t__builder;
    // Field size check
    static_assert(sizeof(System::Runtime::CompilerServices::AsyncVoidMethodBuilder) == 0x20);
    // public System.Func`3<TRequest,MasterServer.MessageHandler/MessageOrigin,System.Threading.Tasks.Task`1<TResponse>> tryGetResponse
    // Size: 0x8
    // Offset: 0x0
    System::Func_3<TRequest, MasterServer::MessageHandler::MessageOrigin, System::Threading::Tasks::Task_1<TResponse>*>* tryGetResponse;
    // Field size check
    static_assert(sizeof(System::Func_3<TRequest, MasterServer::MessageHandler::MessageOrigin, System::Threading::Tasks::Task_1<TResponse>*>*) == 0x8);
    // public TRequest request
    // Size: 0xFFFFFFFF
    // Offset: 0x0
    TRequest request;
    // public MasterServer.MessageHandler/MessageOrigin origin
    // Size: 0xC
    // Offset: 0x0
    MasterServer::MessageHandler::MessageOrigin origin;
    // Field size check
    static_assert(sizeof(MasterServer::MessageHandler::MessageOrigin) == 0xC);
    // public System.Func`1<TResponse> getFailureResponse
    // Size: 0x8
    // Offset: 0x0
    System::Func_1<TResponse>* getFailureResponse;
    // Field size check
    static_assert(sizeof(System::Func_1<TResponse>*) == 0x8);
    // public MasterServer.MessageHandler <>4__this
    // Size: 0x8
    // Offset: 0x0
    MasterServer::MessageHandler* $$4__this;
    // Field size check
    static_assert(sizeof(MasterServer::MessageHandler*) == 0x8);
    // private TResponse <response>5__2
    // Size: 0xFFFFFFFF
    // Offset: 0x0
    TResponse $response$5__2;
    // private System.Runtime.CompilerServices.TaskAwaiter`1<TResponse> <>u__1
    // Size: 0xFFFFFFFF
    // Offset: 0x0
    System::Runtime::CompilerServices::TaskAwaiter_1<TResponse> $$u__1;
    // Creating value type constructor for type: $GetAndSendUnreilableResponse$d__82_2
    constexpr $GetAndSendUnreilableResponse$d__82_2(int $$1__state_ = {}, System::Runtime::CompilerServices::AsyncVoidMethodBuilder $$t__builder_ = {}, System::Func_3<TRequest, MasterServer::MessageHandler::MessageOrigin, System::Threading::Tasks::Task_1<TResponse>*>* tryGetResponse_ = {}, TRequest request_ = {}, MasterServer::MessageHandler::MessageOrigin origin_ = {}, System::Func_1<TResponse>* getFailureResponse_ = {}, MasterServer::MessageHandler* $$4__this_ = {}, TResponse $response$5__2_ = {}, System::Runtime::CompilerServices::TaskAwaiter_1<TResponse> $$u__1_ = {}) noexcept : $$1__state{$$1__state_}, $$t__builder{$$t__builder_}, tryGetResponse{tryGetResponse_}, request{request_}, origin{origin_}, getFailureResponse{getFailureResponse_}, $$4__this{$$4__this_}, $response$5__2{$response$5__2_}, $$u__1{$$u__1_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator System::Runtime::CompilerServices::IAsyncStateMachine
    operator System::Runtime::CompilerServices::IAsyncStateMachine() noexcept {
      return *reinterpret_cast<System::Runtime::CompilerServices::IAsyncStateMachine*>(this);
    }
    // private System.Void MoveNext()
    // Offset: 0xFFFFFFFF
    void MoveNext() {
      static auto ___internal__logger = ::Logger::get().WithContext("MasterServer::MessageHandler::$GetAndSendUnreilableResponse$d__82_2::MoveNext");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "MoveNext", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      ::il2cpp_utils::RunMethodThrow<void, false>(*this, ___internal__method);
    }
    // private System.Void SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    // Offset: 0xFFFFFFFF
    void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
      static auto ___internal__logger = ::Logger::get().WithContext("MasterServer::MessageHandler::$GetAndSendUnreilableResponse$d__82_2::SetStateMachine");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "SetStateMachine", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(stateMachine)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(*this, ___internal__method, stateMachine);
    }
  }; // MasterServer.MessageHandler/<GetAndSendUnreilableResponse>d__82`2
  // Could not write size check! Type: MasterServer.MessageHandler/<GetAndSendUnreilableResponse>d__82`2 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(MasterServer::MessageHandler::$GetAndSendUnreilableResponse$d__82_2, "MasterServer", "MessageHandler/<GetAndSendUnreilableResponse>d__82`2");
