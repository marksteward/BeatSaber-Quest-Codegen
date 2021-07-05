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
// Including type: System.Runtime.CompilerServices.AsyncTaskMethodBuilder
#include "System/Runtime/CompilerServices/AsyncTaskMethodBuilder.hpp"
// Including type: System.Threading.CancellationToken
#include "System/Threading/CancellationToken.hpp"
// Including type: System.Runtime.CompilerServices.TaskAwaiter`1
#include "System/Runtime/CompilerServices/TaskAwaiter_1.hpp"
// Including type: System.Runtime.CompilerServices.TaskAwaiter
#include "System/Runtime/CompilerServices/TaskAwaiter.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: IPEndPoint
  class IPEndPoint;
}
// Forward declaring namespace: MasterServer
namespace MasterServer {
  // Forward declaring type: IMasterServerReliableRequest
  class IMasterServerReliableRequest;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`5<T1, T2, T3, T4, TResult>
  template<typename T1, typename T2, typename T3, typename T4, typename TResult>
  class Func_5;
}
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task
  class Task;
}
// Completed forward declares
// Type namespace: MasterServer
namespace MasterServer {
  // WARNING Size may be invalid!
  // Autogenerated type: MasterServer.MessageHandler/<SendMessageWithRetryAsyncInternal>d__101
  // [CompilerGeneratedAttribute] Offset: DF0810
  struct MessageHandler::$SendMessageWithRetryAsyncInternal$d__101/*, public System::ValueType, public System::Runtime::CompilerServices::IAsyncStateMachine*/ {
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
    // public MasterServer.MessageHandler <>4__this
    // Size: 0x8
    // Offset: 0x20
    MasterServer::MessageHandler* $$4__this;
    // Field size check
    static_assert(sizeof(MasterServer::MessageHandler*) == 0x8);
    // public System.Threading.CancellationToken cancellationToken
    // Size: 0x8
    // Offset: 0x28
    System::Threading::CancellationToken cancellationToken;
    // Field size check
    static_assert(sizeof(System::Threading::CancellationToken) == 0x8);
    // public System.Net.IPEndPoint remoteEndPoint
    // Size: 0x8
    // Offset: 0x30
    System::Net::IPEndPoint* remoteEndPoint;
    // Field size check
    static_assert(sizeof(System::Net::IPEndPoint*) == 0x8);
    // public MasterServer.IMasterServerReliableRequest message
    // Size: 0x8
    // Offset: 0x38
    MasterServer::IMasterServerReliableRequest* message;
    // Field size check
    static_assert(sizeof(MasterServer::IMasterServerReliableRequest*) == 0x8);
    // public System.UInt32 protocolVersion
    // Size: 0x4
    // Offset: 0x40
    uint protocolVersion;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // public System.Func`5<System.UInt32,System.Net.IPEndPoint,MasterServer.IMasterServerReliableRequest,System.Threading.CancellationToken,System.Threading.Tasks.Task> onSendFailed
    // Size: 0x8
    // Offset: 0x48
    System::Func_5<uint, System::Net::IPEndPoint*, MasterServer::IMasterServerReliableRequest*, System::Threading::CancellationToken, System::Threading::Tasks::Task*>* onSendFailed;
    // Field size check
    static_assert(sizeof(System::Func_5<uint, System::Net::IPEndPoint*, MasterServer::IMasterServerReliableRequest*, System::Threading::CancellationToken, System::Threading::Tasks::Task*>*) == 0x8);
    // private MasterServer.MessageHandler/SentRequestWaiter <sentRequest>5__2
    // Size: 0x8
    // Offset: 0x50
    MasterServer::MessageHandler::SentRequestWaiter* $sentRequest$5__2;
    // Field size check
    static_assert(sizeof(MasterServer::MessageHandler::SentRequestWaiter*) == 0x8);
    // private MasterServer.MessageHandler/RequestWaiterId <waiterId>5__3
    // Size: 0xC
    // Offset: 0x58
    MasterServer::MessageHandler::RequestWaiterId $waiterId$5__3;
    // Field size check
    static_assert(sizeof(MasterServer::MessageHandler::RequestWaiterId) == 0xC);
    // private System.Boolean <shouldReleaseMessage>5__4
    // Size: 0x1
    // Offset: 0x68
    bool $shouldReleaseMessage$5__4;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Object <>7__wrap4
    // Size: 0x8
    // Offset: 0x70
    ::Il2CppObject* $$7__wrap4;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // private System.Int32 <>7__wrap5
    // Size: 0x4
    // Offset: 0x78
    int $$7__wrap5;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 <i>5__7
    // Size: 0x4
    // Offset: 0x7C
    int $i$5__7;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Runtime.CompilerServices.TaskAwaiter`1<System.Threading.Tasks.Task> <>u__1
    // Size: 0xFFFFFFFF
    // Offset: 0x80
    System::Runtime::CompilerServices::TaskAwaiter_1<System::Threading::Tasks::Task*> $$u__1;
    // private System.Runtime.CompilerServices.TaskAwaiter <>u__2
    // Size: 0x8
    // Offset: 0x88
    System::Runtime::CompilerServices::TaskAwaiter $$u__2;
    // Field size check
    static_assert(sizeof(System::Runtime::CompilerServices::TaskAwaiter) == 0x8);
    // Creating value type constructor for type: $SendMessageWithRetryAsyncInternal$d__101
    constexpr $SendMessageWithRetryAsyncInternal$d__101(int $$1__state_ = {}, System::Runtime::CompilerServices::AsyncTaskMethodBuilder $$t__builder_ = {}, MasterServer::MessageHandler* $$4__this_ = {}, System::Threading::CancellationToken cancellationToken_ = {}, System::Net::IPEndPoint* remoteEndPoint_ = {}, MasterServer::IMasterServerReliableRequest* message_ = {}, uint protocolVersion_ = {}, System::Func_5<uint, System::Net::IPEndPoint*, MasterServer::IMasterServerReliableRequest*, System::Threading::CancellationToken, System::Threading::Tasks::Task*>* onSendFailed_ = {}, MasterServer::MessageHandler::SentRequestWaiter* $sentRequest$5__2_ = {}, MasterServer::MessageHandler::RequestWaiterId $waiterId$5__3_ = {}, bool $shouldReleaseMessage$5__4_ = {}, ::Il2CppObject* $$7__wrap4_ = {}, int $$7__wrap5_ = {}, int $i$5__7_ = {}, System::Runtime::CompilerServices::TaskAwaiter_1<System::Threading::Tasks::Task*> $$u__1_ = {}, System::Runtime::CompilerServices::TaskAwaiter $$u__2_ = {}) noexcept : $$1__state{$$1__state_}, $$t__builder{$$t__builder_}, $$4__this{$$4__this_}, cancellationToken{cancellationToken_}, remoteEndPoint{remoteEndPoint_}, message{message_}, protocolVersion{protocolVersion_}, onSendFailed{onSendFailed_}, $sentRequest$5__2{$sentRequest$5__2_}, $waiterId$5__3{$waiterId$5__3_}, $shouldReleaseMessage$5__4{$shouldReleaseMessage$5__4_}, $$7__wrap4{$$7__wrap4_}, $$7__wrap5{$$7__wrap5_}, $i$5__7{$i$5__7_}, $$u__1{$$u__1_}, $$u__2{$$u__2_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator System::Runtime::CompilerServices::IAsyncStateMachine
    operator System::Runtime::CompilerServices::IAsyncStateMachine() noexcept {
      return *reinterpret_cast<System::Runtime::CompilerServices::IAsyncStateMachine*>(this);
    }
    // private System.Void MoveNext()
    // Offset: 0xEE8708
    void MoveNext();
    // private System.Void SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    // Offset: 0xEE8710
    void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);
  }; // MasterServer.MessageHandler/<SendMessageWithRetryAsyncInternal>d__101
  // WARNING Not writing size check since size may be invalid!
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(MasterServer::MessageHandler::$SendMessageWithRetryAsyncInternal$d__101, "MasterServer", "MessageHandler/<SendMessageWithRetryAsyncInternal>d__101");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: MasterServer::MessageHandler::$SendMessageWithRetryAsyncInternal$d__101::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MasterServer::MessageHandler::$SendMessageWithRetryAsyncInternal$d__101::*)()>(&MasterServer::MessageHandler::$SendMessageWithRetryAsyncInternal$d__101::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MasterServer::MessageHandler::$SendMessageWithRetryAsyncInternal$d__101), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MasterServer::MessageHandler::$SendMessageWithRetryAsyncInternal$d__101::SetStateMachine
// Il2CppName: SetStateMachine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MasterServer::MessageHandler::$SendMessageWithRetryAsyncInternal$d__101::*)(System::Runtime::CompilerServices::IAsyncStateMachine*)>(&MasterServer::MessageHandler::$SendMessageWithRetryAsyncInternal$d__101::SetStateMachine)> {
  static const MethodInfo* get() {
    static auto* stateMachine = &::il2cpp_utils::GetClassFromName("System.Runtime.CompilerServices", "IAsyncStateMachine")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MasterServer::MessageHandler::$SendMessageWithRetryAsyncInternal$d__101), "SetStateMachine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stateMachine});
  }
};
