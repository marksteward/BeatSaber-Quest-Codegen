// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: MasterServer.UserMessageHandler
#include "MasterServer/UserMessageHandler.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Runtime.CompilerServices.IAsyncStateMachine
#include "System/Runtime/CompilerServices/IAsyncStateMachine.hpp"
// Including type: System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1
#include "System/Runtime/CompilerServices/AsyncTaskMethodBuilder_1.hpp"
// Including type: System.Runtime.CompilerServices.TaskAwaiter`1
#include "System/Runtime/CompilerServices/TaskAwaiter_1.hpp"
// Including type: AuthenticationToken
#include "GlobalNamespace/AuthenticationToken.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: MasterServer
namespace MasterServer {
  // Forward declaring type: IMasterServerAuthenticateRequest
  class IMasterServerAuthenticateRequest;
}
// Completed forward declares
// Type namespace: MasterServer
namespace MasterServer {
  // Autogenerated type: MasterServer.UserMessageHandler/<GetAuthenticationRequest>d__28
  struct UserMessageHandler::$GetAuthenticationRequest$d__28 : public System::ValueType/*, public System::Runtime::CompilerServices::IAsyncStateMachine*/ {
    public:
    // public System.Int32 <>1__state
    // Offset: 0x0
    int $$1__state;
    // public System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<MasterServer.IMasterServerAuthenticateRequest> <>t__builder
    // Offset: 0x8
    System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<MasterServer::IMasterServerAuthenticateRequest*> $$t__builder;
    // public MasterServer.UserMessageHandler <>4__this
    // Offset: 0x20
    MasterServer::UserMessageHandler* $$4__this;
    // private System.Runtime.CompilerServices.TaskAwaiter`1<AuthenticationToken> <>u__1
    // Offset: 0x28
    System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::AuthenticationToken> $$u__1;
    // Creating value type constructor for type: $GetAuthenticationRequest$d__28
    constexpr $GetAuthenticationRequest$d__28(int $$1__state_ = {}, System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<MasterServer::IMasterServerAuthenticateRequest*> $$t__builder_ = {}, MasterServer::UserMessageHandler* $$4__this_ = {}, System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::AuthenticationToken> $$u__1_ = {}) noexcept : $$1__state{$$1__state_}, $$t__builder{$$t__builder_}, $$4__this{$$4__this_}, $$u__1{$$u__1_} {}
    // Creating interface conversion operator: operator System::Runtime::CompilerServices::IAsyncStateMachine
    operator System::Runtime::CompilerServices::IAsyncStateMachine() noexcept {
      return *reinterpret_cast<System::Runtime::CompilerServices::IAsyncStateMachine*>(this);
    }
    // private System.Void MoveNext()
    // Offset: 0xE4ECDC
    // Implemented from: System.Runtime.CompilerServices.IAsyncStateMachine
    // Base method: System.Void IAsyncStateMachine::MoveNext()
    void MoveNext();
    // private System.Void SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    // Offset: 0xE4ECE4
    // Implemented from: System.Runtime.CompilerServices.IAsyncStateMachine
    // Base method: System.Void IAsyncStateMachine::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);
  }; // MasterServer.UserMessageHandler/<GetAuthenticationRequest>d__28
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(MasterServer::UserMessageHandler::$GetAuthenticationRequest$d__28, "MasterServer", "UserMessageHandler/<GetAuthenticationRequest>d__28");
#pragma pack(pop)
