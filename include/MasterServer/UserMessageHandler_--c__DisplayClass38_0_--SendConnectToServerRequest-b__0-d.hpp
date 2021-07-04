// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: MasterServer.UserMessageHandler/<>c__DisplayClass38_0
#include "MasterServer/UserMessageHandler_--c__DisplayClass38_0.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Runtime.CompilerServices.IAsyncStateMachine
#include "System/Runtime/CompilerServices/IAsyncStateMachine.hpp"
// Including type: System.Runtime.CompilerServices.AsyncTaskMethodBuilder
#include "System/Runtime/CompilerServices/AsyncTaskMethodBuilder.hpp"
// Including type: System.Runtime.CompilerServices.TaskAwaiter`1
#include "System/Runtime/CompilerServices/TaskAwaiter_1.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IDiffieHellmanKeyPair
  class IDiffieHellmanKeyPair;
}
// Forward declaring namespace: MasterServer
namespace MasterServer {
  // Forward declaring type: ConnectToServerResponse
  class ConnectToServerResponse;
}
// Completed forward declares
// Type namespace: MasterServer
namespace MasterServer {
  // WARNING Size may be invalid!
  // Autogenerated type: MasterServer.UserMessageHandler/<>c__DisplayClass38_0/<<SendConnectToServerRequest>b__0>d
  struct UserMessageHandler::$$c__DisplayClass38_0::$$SendConnectToServerRequest$b__0$d/*, public System::ValueType, public System::Runtime::CompilerServices::IAsyncStateMachine*/ {
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
    // public MasterServer.UserMessageHandler/<>c__DisplayClass38_0 <>4__this
    // Size: 0x8
    // Offset: 0x20
    MasterServer::UserMessageHandler::$$c__DisplayClass38_0* $$4__this;
    // Field size check
    static_assert(sizeof(MasterServer::UserMessageHandler::$$c__DisplayClass38_0*) == 0x8);
    // private IDiffieHellmanKeyPair <clientKeys>5__2
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::IDiffieHellmanKeyPair* $clientKeys$5__2;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IDiffieHellmanKeyPair*) == 0x8);
    // private System.Byte[] <random>5__3
    // Size: 0x8
    // Offset: 0x30
    ::Array<uint8_t>* $random$5__3;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // private MasterServer.ConnectToServerResponse <response>5__4
    // Size: 0x8
    // Offset: 0x38
    MasterServer::ConnectToServerResponse* $response$5__4;
    // Field size check
    static_assert(sizeof(MasterServer::ConnectToServerResponse*) == 0x8);
    // private System.Runtime.CompilerServices.TaskAwaiter`1<IDiffieHellmanKeyPair> <>u__1
    // Size: 0xFFFFFFFF
    // Offset: 0x40
    System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::IDiffieHellmanKeyPair*> $$u__1;
    // private System.Runtime.CompilerServices.TaskAwaiter`1<MasterServer.ConnectToServerResponse> <>u__2
    // Size: 0xFFFFFFFF
    // Offset: 0x48
    System::Runtime::CompilerServices::TaskAwaiter_1<MasterServer::ConnectToServerResponse*> $$u__2;
    // private System.Runtime.CompilerServices.TaskAwaiter`1<System.Byte[]> <>u__3
    // Size: 0xFFFFFFFF
    // Offset: 0x50
    System::Runtime::CompilerServices::TaskAwaiter_1<::Array<uint8_t>*> $$u__3;
    // Creating value type constructor for type: $$SendConnectToServerRequest$b__0$d
    constexpr $$SendConnectToServerRequest$b__0$d(int $$1__state_ = {}, System::Runtime::CompilerServices::AsyncTaskMethodBuilder $$t__builder_ = {}, MasterServer::UserMessageHandler::$$c__DisplayClass38_0* $$4__this_ = {}, GlobalNamespace::IDiffieHellmanKeyPair* $clientKeys$5__2_ = {}, ::Array<uint8_t>* $random$5__3_ = {}, MasterServer::ConnectToServerResponse* $response$5__4_ = {}, System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::IDiffieHellmanKeyPair*> $$u__1_ = {}, System::Runtime::CompilerServices::TaskAwaiter_1<MasterServer::ConnectToServerResponse*> $$u__2_ = {}, System::Runtime::CompilerServices::TaskAwaiter_1<::Array<uint8_t>*> $$u__3_ = {}) noexcept : $$1__state{$$1__state_}, $$t__builder{$$t__builder_}, $$4__this{$$4__this_}, $clientKeys$5__2{$clientKeys$5__2_}, $random$5__3{$random$5__3_}, $response$5__4{$response$5__4_}, $$u__1{$$u__1_}, $$u__2{$$u__2_}, $$u__3{$$u__3_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator System::Runtime::CompilerServices::IAsyncStateMachine
    operator System::Runtime::CompilerServices::IAsyncStateMachine() noexcept {
      return *reinterpret_cast<System::Runtime::CompilerServices::IAsyncStateMachine*>(this);
    }
    // private System.Void MoveNext()
    // Offset: 0xEE8858
    void MoveNext();
    // private System.Void SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    // Offset: 0xEE8860
    void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);
  }; // MasterServer.UserMessageHandler/<>c__DisplayClass38_0/<<SendConnectToServerRequest>b__0>d
  // WARNING Not writing size check since size may be invalid!
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(MasterServer::UserMessageHandler::$$c__DisplayClass38_0::$$SendConnectToServerRequest$b__0$d, "MasterServer", "UserMessageHandler/<>c__DisplayClass38_0/<<SendConnectToServerRequest>b__0>d");
// Writing MetadataGetter for method: MasterServer::UserMessageHandler::$$c__DisplayClass38_0::$$SendConnectToServerRequest$b__0$d::MoveNext
// Il2CppName: MoveNext
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: MasterServer::UserMessageHandler::$$c__DisplayClass38_0::$$SendConnectToServerRequest$b__0$d::SetStateMachine
// Il2CppName: SetStateMachine
// Cannot perform method pointer template specialization from operators!
