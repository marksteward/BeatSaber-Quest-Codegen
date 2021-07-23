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
// Including type: System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1
#include "System/Runtime/CompilerServices/AsyncTaskMethodBuilder_1.hpp"
// Including type: System.Threading.CancellationToken
#include "System/Threading/CancellationToken.hpp"
// Including type: System.Runtime.CompilerServices.TaskAwaiter
#include "System/Runtime/CompilerServices/TaskAwaiter.hpp"
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
  // Forward declaring type: IMasterServerMessage
  class IMasterServerMessage;
  // Forward declaring type: IMasterServerReliableRequest
  class IMasterServerReliableRequest;
}
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: IPEndPoint
  class IPEndPoint;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`5<T1, T2, T3, T4, TResult>
  template<typename T1, typename T2, typename T3, typename T4, typename TResult>
  class Func_5;
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
  // Autogenerated type: MasterServer.MessageHandler/MasterServer.<SendMessageWithRetryAwaitResponseAsync>d__102`1
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  template<typename T>
  struct MessageHandler::$SendMessageWithRetryAwaitResponseAsync$d__102_1/*, public System::ValueType, public System::Runtime::CompilerServices::IAsyncStateMachine*/ {
    public:
    // public System.Int32 <>1__state
    // Size: 0x4
    // Offset: 0x0
    int $$1__state;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<T> <>t__builder
    // Size: 0xFFFFFFFF
    // Offset: 0x0
    System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<T> $$t__builder;
    // public MasterServer.MessageHandler <>4__this
    // Size: 0x8
    // Offset: 0x0
    MasterServer::MessageHandler* $$4__this;
    // Field size check
    static_assert(sizeof(MasterServer::MessageHandler*) == 0x8);
    // public System.Threading.CancellationToken cancellationToken
    // Size: 0x8
    // Offset: 0x0
    System::Threading::CancellationToken cancellationToken;
    // Field size check
    static_assert(sizeof(System::Threading::CancellationToken) == 0x8);
    // public System.Net.IPEndPoint remoteEndPoint
    // Size: 0x8
    // Offset: 0x0
    System::Net::IPEndPoint* remoteEndPoint;
    // Field size check
    static_assert(sizeof(System::Net::IPEndPoint*) == 0x8);
    // public MasterServer.IMasterServerReliableRequest message
    // Size: 0x8
    // Offset: 0x0
    MasterServer::IMasterServerReliableRequest* message;
    // Field size check
    static_assert(sizeof(MasterServer::IMasterServerReliableRequest*) == 0x8);
    // public System.UInt32 protocolVersion
    // Size: 0x4
    // Offset: 0x0
    uint protocolVersion;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // public System.Func`5<System.UInt32,System.Net.IPEndPoint,MasterServer.IMasterServerReliableRequest,System.Threading.CancellationToken,System.Threading.Tasks.Task`1<T>> onSendFailedAwaitResponse
    // Size: 0x8
    // Offset: 0x0
    System::Func_5<uint, System::Net::IPEndPoint*, MasterServer::IMasterServerReliableRequest*, System::Threading::CancellationToken, System::Threading::Tasks::Task_1<T>*>* onSendFailedAwaitResponse;
    // Field size check
    static_assert(sizeof(System::Func_5<uint, System::Net::IPEndPoint*, MasterServer::IMasterServerReliableRequest*, System::Threading::CancellationToken, System::Threading::Tasks::Task_1<T>*>*) == 0x8);
    // private MasterServer.MessageHandler/MasterServer.RequestResponseWaiter <request>5__2
    // Size: 0x8
    // Offset: 0x0
    MasterServer::MessageHandler::RequestResponseWaiter* $request$5__2;
    // Field size check
    static_assert(sizeof(MasterServer::MessageHandler::RequestResponseWaiter*) == 0x8);
    // private MasterServer.MessageHandler/MasterServer.RequestWaiterId <waiterId>5__3
    // Size: 0xC
    // Offset: 0x0
    MasterServer::MessageHandler::RequestWaiterId $waiterId$5__3;
    // Field size check
    static_assert(sizeof(MasterServer::MessageHandler::RequestWaiterId) == 0xC);
    // private T <tResult>5__4
    // Size: 0xFFFFFFFF
    // Offset: 0x0
    T $tResult$5__4;
    // private System.Runtime.CompilerServices.TaskAwaiter <>u__1
    // Size: 0x8
    // Offset: 0x0
    System::Runtime::CompilerServices::TaskAwaiter $$u__1;
    // Field size check
    static_assert(sizeof(System::Runtime::CompilerServices::TaskAwaiter) == 0x8);
    // private System.Runtime.CompilerServices.TaskAwaiter`1<MasterServer.IMasterServerMessage> <>u__2
    // Size: 0xFFFFFFFF
    // Offset: 0x0
    System::Runtime::CompilerServices::TaskAwaiter_1<MasterServer::IMasterServerMessage*> $$u__2;
    // Creating value type constructor for type: $SendMessageWithRetryAwaitResponseAsync$d__102_1
    constexpr $SendMessageWithRetryAwaitResponseAsync$d__102_1(int $$1__state_ = {}, System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<T> $$t__builder_ = {}, MasterServer::MessageHandler* $$4__this_ = {}, System::Threading::CancellationToken cancellationToken_ = {}, System::Net::IPEndPoint* remoteEndPoint_ = {}, MasterServer::IMasterServerReliableRequest* message_ = {}, uint protocolVersion_ = {}, System::Func_5<uint, System::Net::IPEndPoint*, MasterServer::IMasterServerReliableRequest*, System::Threading::CancellationToken, System::Threading::Tasks::Task_1<T>*>* onSendFailedAwaitResponse_ = {}, MasterServer::MessageHandler::RequestResponseWaiter* $request$5__2_ = {}, MasterServer::MessageHandler::RequestWaiterId $waiterId$5__3_ = {}, T $tResult$5__4_ = {}, System::Runtime::CompilerServices::TaskAwaiter $$u__1_ = {}, System::Runtime::CompilerServices::TaskAwaiter_1<MasterServer::IMasterServerMessage*> $$u__2_ = {}) noexcept : $$1__state{$$1__state_}, $$t__builder{$$t__builder_}, $$4__this{$$4__this_}, cancellationToken{cancellationToken_}, remoteEndPoint{remoteEndPoint_}, message{message_}, protocolVersion{protocolVersion_}, onSendFailedAwaitResponse{onSendFailedAwaitResponse_}, $request$5__2{$request$5__2_}, $waiterId$5__3{$waiterId$5__3_}, $tResult$5__4{$tResult$5__4_}, $$u__1{$$u__1_}, $$u__2{$$u__2_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator System::Runtime::CompilerServices::IAsyncStateMachine
    operator System::Runtime::CompilerServices::IAsyncStateMachine() noexcept {
      return *reinterpret_cast<System::Runtime::CompilerServices::IAsyncStateMachine*>(this);
    }
    // Autogenerated instance field getter
    // Get instance field: public System.Int32 <>1__state
    int _get_$$1__state() {
      static auto ___internal__logger = ::Logger::get().WithContext("MasterServer::MessageHandler::$SendMessageWithRetryAwaitResponseAsync$d__102_1::_get_$$1__state");
      static auto ___internal__instance = *this;
      return THROW_UNLESS((il2cpp_utils::GetFieldValue<int>(___internal__instance, "<>1__state")));
    }
    // Autogenerated instance field setter
    // Set instance field: public System.Int32 <>1__state
    void _set_$$1__state(int value) {
      static auto ___internal__logger = ::Logger::get().WithContext("MasterServer::MessageHandler::$SendMessageWithRetryAwaitResponseAsync$d__102_1::_set_$$1__state");
      static auto ___internal__instance = *this;
      THROW_UNLESS(il2cpp_utils::SetFieldValue(___internal__instance, "<>1__state", value));
    }
    // Autogenerated instance field getter
    // Get instance field: public System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<T> <>t__builder
    System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<T> _get_$$t__builder() {
      static auto ___internal__logger = ::Logger::get().WithContext("MasterServer::MessageHandler::$SendMessageWithRetryAwaitResponseAsync$d__102_1::_get_$$t__builder");
      static auto ___internal__instance = *this;
      return THROW_UNLESS((il2cpp_utils::GetFieldValue<System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<T>>(___internal__instance, "<>t__builder")));
    }
    // Autogenerated instance field setter
    // Set instance field: public System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<T> <>t__builder
    void _set_$$t__builder(System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<T> value) {
      static auto ___internal__logger = ::Logger::get().WithContext("MasterServer::MessageHandler::$SendMessageWithRetryAwaitResponseAsync$d__102_1::_set_$$t__builder");
      static auto ___internal__instance = *this;
      THROW_UNLESS(il2cpp_utils::SetFieldValue(___internal__instance, "<>t__builder", value));
    }
    // Autogenerated instance field getter
    // Get instance field: public MasterServer.MessageHandler <>4__this
    MasterServer::MessageHandler* _get_$$4__this() {
      static auto ___internal__logger = ::Logger::get().WithContext("MasterServer::MessageHandler::$SendMessageWithRetryAwaitResponseAsync$d__102_1::_get_$$4__this");
      static auto ___internal__instance = *this;
      return THROW_UNLESS((il2cpp_utils::GetFieldValue<MasterServer::MessageHandler*>(___internal__instance, "<>4__this")));
    }
    // Autogenerated instance field setter
    // Set instance field: public MasterServer.MessageHandler <>4__this
    void _set_$$4__this(MasterServer::MessageHandler* value) {
      static auto ___internal__logger = ::Logger::get().WithContext("MasterServer::MessageHandler::$SendMessageWithRetryAwaitResponseAsync$d__102_1::_set_$$4__this");
      static auto ___internal__instance = *this;
      THROW_UNLESS(il2cpp_utils::SetFieldValue(___internal__instance, "<>4__this", value));
    }
    // Autogenerated instance field getter
    // Get instance field: public System.Threading.CancellationToken cancellationToken
    System::Threading::CancellationToken _get_cancellationToken() {
      static auto ___internal__logger = ::Logger::get().WithContext("MasterServer::MessageHandler::$SendMessageWithRetryAwaitResponseAsync$d__102_1::_get_cancellationToken");
      static auto ___internal__instance = *this;
      return THROW_UNLESS(il2cpp_utils::GetFieldValue<System::Threading::CancellationToken>(___internal__instance, "cancellationToken"));
    }
    // Autogenerated instance field setter
    // Set instance field: public System.Threading.CancellationToken cancellationToken
    void _set_cancellationToken(System::Threading::CancellationToken value) {
      static auto ___internal__logger = ::Logger::get().WithContext("MasterServer::MessageHandler::$SendMessageWithRetryAwaitResponseAsync$d__102_1::_set_cancellationToken");
      static auto ___internal__instance = *this;
      THROW_UNLESS(il2cpp_utils::SetFieldValue(___internal__instance, "cancellationToken", value));
    }
    // Autogenerated instance field getter
    // Get instance field: public System.Net.IPEndPoint remoteEndPoint
    System::Net::IPEndPoint* _get_remoteEndPoint() {
      static auto ___internal__logger = ::Logger::get().WithContext("MasterServer::MessageHandler::$SendMessageWithRetryAwaitResponseAsync$d__102_1::_get_remoteEndPoint");
      static auto ___internal__instance = *this;
      return THROW_UNLESS(il2cpp_utils::GetFieldValue<System::Net::IPEndPoint*>(___internal__instance, "remoteEndPoint"));
    }
    // Autogenerated instance field setter
    // Set instance field: public System.Net.IPEndPoint remoteEndPoint
    void _set_remoteEndPoint(System::Net::IPEndPoint* value) {
      static auto ___internal__logger = ::Logger::get().WithContext("MasterServer::MessageHandler::$SendMessageWithRetryAwaitResponseAsync$d__102_1::_set_remoteEndPoint");
      static auto ___internal__instance = *this;
      THROW_UNLESS(il2cpp_utils::SetFieldValue(___internal__instance, "remoteEndPoint", value));
    }
    // Autogenerated instance field getter
    // Get instance field: public MasterServer.IMasterServerReliableRequest message
    MasterServer::IMasterServerReliableRequest* _get_message() {
      static auto ___internal__logger = ::Logger::get().WithContext("MasterServer::MessageHandler::$SendMessageWithRetryAwaitResponseAsync$d__102_1::_get_message");
      static auto ___internal__instance = *this;
      return THROW_UNLESS(il2cpp_utils::GetFieldValue<MasterServer::IMasterServerReliableRequest*>(___internal__instance, "message"));
    }
    // Autogenerated instance field setter
    // Set instance field: public MasterServer.IMasterServerReliableRequest message
    void _set_message(MasterServer::IMasterServerReliableRequest* value) {
      static auto ___internal__logger = ::Logger::get().WithContext("MasterServer::MessageHandler::$SendMessageWithRetryAwaitResponseAsync$d__102_1::_set_message");
      static auto ___internal__instance = *this;
      THROW_UNLESS(il2cpp_utils::SetFieldValue(___internal__instance, "message", value));
    }
    // Autogenerated instance field getter
    // Get instance field: public System.UInt32 protocolVersion
    uint _get_protocolVersion() {
      static auto ___internal__logger = ::Logger::get().WithContext("MasterServer::MessageHandler::$SendMessageWithRetryAwaitResponseAsync$d__102_1::_get_protocolVersion");
      static auto ___internal__instance = *this;
      return THROW_UNLESS(il2cpp_utils::GetFieldValue<uint>(___internal__instance, "protocolVersion"));
    }
    // Autogenerated instance field setter
    // Set instance field: public System.UInt32 protocolVersion
    void _set_protocolVersion(uint value) {
      static auto ___internal__logger = ::Logger::get().WithContext("MasterServer::MessageHandler::$SendMessageWithRetryAwaitResponseAsync$d__102_1::_set_protocolVersion");
      static auto ___internal__instance = *this;
      THROW_UNLESS(il2cpp_utils::SetFieldValue(___internal__instance, "protocolVersion", value));
    }
    // Autogenerated instance field getter
    // Get instance field: public System.Func`5<System.UInt32,System.Net.IPEndPoint,MasterServer.IMasterServerReliableRequest,System.Threading.CancellationToken,System.Threading.Tasks.Task`1<T>> onSendFailedAwaitResponse
    System::Func_5<uint, System::Net::IPEndPoint*, MasterServer::IMasterServerReliableRequest*, System::Threading::CancellationToken, System::Threading::Tasks::Task_1<T>*>* _get_onSendFailedAwaitResponse() {
      static auto ___internal__logger = ::Logger::get().WithContext("MasterServer::MessageHandler::$SendMessageWithRetryAwaitResponseAsync$d__102_1::_get_onSendFailedAwaitResponse");
      static auto ___internal__instance = *this;
      return THROW_UNLESS((il2cpp_utils::GetFieldValue<System::Func_5<uint, System::Net::IPEndPoint*, MasterServer::IMasterServerReliableRequest*, System::Threading::CancellationToken, System::Threading::Tasks::Task_1<T>*>*>(___internal__instance, "onSendFailedAwaitResponse")));
    }
    // Autogenerated instance field setter
    // Set instance field: public System.Func`5<System.UInt32,System.Net.IPEndPoint,MasterServer.IMasterServerReliableRequest,System.Threading.CancellationToken,System.Threading.Tasks.Task`1<T>> onSendFailedAwaitResponse
    void _set_onSendFailedAwaitResponse(System::Func_5<uint, System::Net::IPEndPoint*, MasterServer::IMasterServerReliableRequest*, System::Threading::CancellationToken, System::Threading::Tasks::Task_1<T>*>* value) {
      static auto ___internal__logger = ::Logger::get().WithContext("MasterServer::MessageHandler::$SendMessageWithRetryAwaitResponseAsync$d__102_1::_set_onSendFailedAwaitResponse");
      static auto ___internal__instance = *this;
      THROW_UNLESS(il2cpp_utils::SetFieldValue(___internal__instance, "onSendFailedAwaitResponse", value));
    }
    // Autogenerated instance field getter
    // Get instance field: private MasterServer.MessageHandler/MasterServer.RequestResponseWaiter <request>5__2
    MasterServer::MessageHandler::RequestResponseWaiter* _get_$request$5__2() {
      static auto ___internal__logger = ::Logger::get().WithContext("MasterServer::MessageHandler::$SendMessageWithRetryAwaitResponseAsync$d__102_1::_get_$request$5__2");
      static auto ___internal__instance = *this;
      return THROW_UNLESS((il2cpp_utils::GetFieldValue<MasterServer::MessageHandler::RequestResponseWaiter*>(___internal__instance, "<request>5__2")));
    }
    // Autogenerated instance field setter
    // Set instance field: private MasterServer.MessageHandler/MasterServer.RequestResponseWaiter <request>5__2
    void _set_$request$5__2(MasterServer::MessageHandler::RequestResponseWaiter* value) {
      static auto ___internal__logger = ::Logger::get().WithContext("MasterServer::MessageHandler::$SendMessageWithRetryAwaitResponseAsync$d__102_1::_set_$request$5__2");
      static auto ___internal__instance = *this;
      THROW_UNLESS(il2cpp_utils::SetFieldValue(___internal__instance, "<request>5__2", value));
    }
    // Autogenerated instance field getter
    // Get instance field: private MasterServer.MessageHandler/MasterServer.RequestWaiterId <waiterId>5__3
    MasterServer::MessageHandler::RequestWaiterId _get_$waiterId$5__3() {
      static auto ___internal__logger = ::Logger::get().WithContext("MasterServer::MessageHandler::$SendMessageWithRetryAwaitResponseAsync$d__102_1::_get_$waiterId$5__3");
      static auto ___internal__instance = *this;
      return THROW_UNLESS((il2cpp_utils::GetFieldValue<MasterServer::MessageHandler::RequestWaiterId>(___internal__instance, "<waiterId>5__3")));
    }
    // Autogenerated instance field setter
    // Set instance field: private MasterServer.MessageHandler/MasterServer.RequestWaiterId <waiterId>5__3
    void _set_$waiterId$5__3(MasterServer::MessageHandler::RequestWaiterId value) {
      static auto ___internal__logger = ::Logger::get().WithContext("MasterServer::MessageHandler::$SendMessageWithRetryAwaitResponseAsync$d__102_1::_set_$waiterId$5__3");
      static auto ___internal__instance = *this;
      THROW_UNLESS(il2cpp_utils::SetFieldValue(___internal__instance, "<waiterId>5__3", value));
    }
    // Autogenerated instance field getter
    // Get instance field: private T <tResult>5__4
    T _get_$tResult$5__4() {
      static auto ___internal__logger = ::Logger::get().WithContext("MasterServer::MessageHandler::$SendMessageWithRetryAwaitResponseAsync$d__102_1::_get_$tResult$5__4");
      static auto ___internal__instance = *this;
      return THROW_UNLESS((il2cpp_utils::GetFieldValue<T>(___internal__instance, "<tResult>5__4")));
    }
    // Autogenerated instance field setter
    // Set instance field: private T <tResult>5__4
    void _set_$tResult$5__4(T value) {
      static auto ___internal__logger = ::Logger::get().WithContext("MasterServer::MessageHandler::$SendMessageWithRetryAwaitResponseAsync$d__102_1::_set_$tResult$5__4");
      static auto ___internal__instance = *this;
      THROW_UNLESS(il2cpp_utils::SetFieldValue(___internal__instance, "<tResult>5__4", value));
    }
    // Autogenerated instance field getter
    // Get instance field: private System.Runtime.CompilerServices.TaskAwaiter <>u__1
    System::Runtime::CompilerServices::TaskAwaiter _get_$$u__1() {
      static auto ___internal__logger = ::Logger::get().WithContext("MasterServer::MessageHandler::$SendMessageWithRetryAwaitResponseAsync$d__102_1::_get_$$u__1");
      static auto ___internal__instance = *this;
      return THROW_UNLESS((il2cpp_utils::GetFieldValue<System::Runtime::CompilerServices::TaskAwaiter>(___internal__instance, "<>u__1")));
    }
    // Autogenerated instance field setter
    // Set instance field: private System.Runtime.CompilerServices.TaskAwaiter <>u__1
    void _set_$$u__1(System::Runtime::CompilerServices::TaskAwaiter value) {
      static auto ___internal__logger = ::Logger::get().WithContext("MasterServer::MessageHandler::$SendMessageWithRetryAwaitResponseAsync$d__102_1::_set_$$u__1");
      static auto ___internal__instance = *this;
      THROW_UNLESS(il2cpp_utils::SetFieldValue(___internal__instance, "<>u__1", value));
    }
    // Autogenerated instance field getter
    // Get instance field: private System.Runtime.CompilerServices.TaskAwaiter`1<MasterServer.IMasterServerMessage> <>u__2
    System::Runtime::CompilerServices::TaskAwaiter_1<MasterServer::IMasterServerMessage*> _get_$$u__2() {
      static auto ___internal__logger = ::Logger::get().WithContext("MasterServer::MessageHandler::$SendMessageWithRetryAwaitResponseAsync$d__102_1::_get_$$u__2");
      static auto ___internal__instance = *this;
      return THROW_UNLESS((il2cpp_utils::GetFieldValue<System::Runtime::CompilerServices::TaskAwaiter_1<MasterServer::IMasterServerMessage*>>(___internal__instance, "<>u__2")));
    }
    // Autogenerated instance field setter
    // Set instance field: private System.Runtime.CompilerServices.TaskAwaiter`1<MasterServer.IMasterServerMessage> <>u__2
    void _set_$$u__2(System::Runtime::CompilerServices::TaskAwaiter_1<MasterServer::IMasterServerMessage*> value) {
      static auto ___internal__logger = ::Logger::get().WithContext("MasterServer::MessageHandler::$SendMessageWithRetryAwaitResponseAsync$d__102_1::_set_$$u__2");
      static auto ___internal__instance = *this;
      THROW_UNLESS(il2cpp_utils::SetFieldValue(___internal__instance, "<>u__2", value));
    }
    // private System.Void MoveNext()
    // Offset: 0xFFFFFFFF
    void MoveNext() {
      static auto ___internal__logger = ::Logger::get().WithContext("MasterServer::MessageHandler::$SendMessageWithRetryAwaitResponseAsync$d__102_1::MoveNext");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "MoveNext", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      ::il2cpp_utils::RunMethodThrow<void, false>(*this, ___internal__method);
    }
    // private System.Void SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    // Offset: 0xFFFFFFFF
    void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
      static auto ___internal__logger = ::Logger::get().WithContext("MasterServer::MessageHandler::$SendMessageWithRetryAwaitResponseAsync$d__102_1::SetStateMachine");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "SetStateMachine", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(stateMachine)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(*this, ___internal__method, stateMachine);
    }
  }; // MasterServer.MessageHandler/MasterServer.<SendMessageWithRetryAwaitResponseAsync>d__102`1
  // Could not write size check! Type: MasterServer.MessageHandler/MasterServer.<SendMessageWithRetryAwaitResponseAsync>d__102`1 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(MasterServer::MessageHandler::$SendMessageWithRetryAwaitResponseAsync$d__102_1, "MasterServer", "MessageHandler/<SendMessageWithRetryAwaitResponseAsync>d__102`1");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
