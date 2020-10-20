// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
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
// Including type: System.Runtime.CompilerServices.TaskAwaiter
#include "System/Runtime/CompilerServices/TaskAwaiter.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: MasterServer
namespace MasterServer {
  // Forward declaring type: IMasterServerReliableRequest
  class IMasterServerReliableRequest;
  // Forward declaring type: IMasterServerReliableResponse
  class IMasterServerReliableResponse;
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
  // Autogenerated type: MasterServer.MessageHandler/<GetAndSendResponse>d__81`2
  template<typename TRequest, typename TResponse>
  struct MessageHandler::$GetAndSendResponse$d__81_2 : public System::ValueType/*, public System::Runtime::CompilerServices::IAsyncStateMachine*/ {
    public:
    // public System.Int32 <>1__state
    // Offset: 0x0
    int $$1__state;
    // public System.Runtime.CompilerServices.AsyncVoidMethodBuilder <>t__builder
    // Offset: 0x0
    System::Runtime::CompilerServices::AsyncVoidMethodBuilder $$t__builder;
    // public MasterServer.MessageHandler <>4__this
    // Offset: 0x0
    MasterServer::MessageHandler* $$4__this;
    // public TRequest request
    // Offset: 0x0
    TRequest request;
    // public MasterServer.MessageHandler/MessageOrigin origin
    // Offset: 0x0
    MasterServer::MessageHandler::MessageOrigin origin;
    // public System.Func`3<TRequest,MasterServer.MessageHandler/MessageOrigin,System.Threading.Tasks.Task`1<TResponse>> tryGetResponse
    // Offset: 0x0
    System::Func_3<TRequest, MasterServer::MessageHandler::MessageOrigin, System::Threading::Tasks::Task_1<TResponse>*>* tryGetResponse;
    // public System.Func`1<TResponse> getFailureResponse
    // Offset: 0x0
    System::Func_1<TResponse>* getFailureResponse;
    // private System.Runtime.CompilerServices.TaskAwaiter <>u__1
    // Offset: 0x0
    System::Runtime::CompilerServices::TaskAwaiter $$u__1;
    // Creating value type constructor for type: $GetAndSendResponse$d__81_2
    constexpr $GetAndSendResponse$d__81_2(int $$1__state_ = {}, System::Runtime::CompilerServices::AsyncVoidMethodBuilder $$t__builder_ = {}, MasterServer::MessageHandler* $$4__this_ = {}, TRequest request_ = {}, MasterServer::MessageHandler::MessageOrigin origin_ = {}, System::Func_3<TRequest, MasterServer::MessageHandler::MessageOrigin, System::Threading::Tasks::Task_1<TResponse>*>* tryGetResponse_ = {}, System::Func_1<TResponse>* getFailureResponse_ = {}, System::Runtime::CompilerServices::TaskAwaiter $$u__1_ = {}) noexcept : $$1__state{$$1__state_}, $$t__builder{$$t__builder_}, $$4__this{$$4__this_}, request{request_}, origin{origin_}, tryGetResponse{tryGetResponse_}, getFailureResponse{getFailureResponse_}, $$u__1{$$u__1_} {}
    // Creating interface conversion operator: operator System::Runtime::CompilerServices::IAsyncStateMachine
    operator System::Runtime::CompilerServices::IAsyncStateMachine() noexcept {
      return *reinterpret_cast<System::Runtime::CompilerServices::IAsyncStateMachine*>(this);
    }
    // private System.Void MoveNext()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Runtime.CompilerServices.IAsyncStateMachine
    // Base method: System.Void IAsyncStateMachine::MoveNext()
    void MoveNext() {
      THROW_UNLESS(il2cpp_utils::RunMethod(*this, "MoveNext"));
    }
    // private System.Void SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Runtime.CompilerServices.IAsyncStateMachine
    // Base method: System.Void IAsyncStateMachine::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
      THROW_UNLESS(il2cpp_utils::RunMethod(*this, "SetStateMachine", stateMachine));
    }
  }; // MasterServer.MessageHandler/<GetAndSendResponse>d__81`2
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(MasterServer::MessageHandler::$GetAndSendResponse$d__81_2, "MasterServer", "MessageHandler/<GetAndSendResponse>d__81`2");
#pragma pack(pop)
