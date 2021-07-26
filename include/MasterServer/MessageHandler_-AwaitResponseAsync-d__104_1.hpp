// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
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
  // Forward declaring type: IMasterServerReliableResponse
  class IMasterServerReliableResponse;
  // Forward declaring type: IMasterServerMessage
  class IMasterServerMessage;
}
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: IPEndPoint
  class IPEndPoint;
}
// Completed forward declares
// Type namespace: MasterServer
namespace MasterServer {
  // WARNING Size may be invalid!
  // Autogenerated type: MasterServer.MessageHandler/MasterServer.<AwaitResponseAsync>d__104`1
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  template<typename T>
  struct MessageHandler::$AwaitResponseAsync$d__104_1/*, public System::ValueType, public System::Runtime::CompilerServices::IAsyncStateMachine*/ {
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
    // public System.UInt32 requestId
    // Size: 0x4
    // Offset: 0x0
    uint requestId;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // private MasterServer.MessageHandler/MasterServer.RequestWaiterId <waiterId>5__2
    // Size: 0xC
    // Offset: 0x0
    MasterServer::MessageHandler::RequestWaiterId $waiterId$5__2;
    // Field size check
    static_assert(sizeof(MasterServer::MessageHandler::RequestWaiterId) == 0xC);
    // private T <tResult>5__3
    // Size: 0xFFFFFFFF
    // Offset: 0x0
    T $tResult$5__3;
    // private System.Runtime.CompilerServices.TaskAwaiter`1<MasterServer.IMasterServerMessage> <>u__1
    // Size: 0xFFFFFFFF
    // Offset: 0x0
    System::Runtime::CompilerServices::TaskAwaiter_1<MasterServer::IMasterServerMessage*> $$u__1;
    // Creating value type constructor for type: $AwaitResponseAsync$d__104_1
    constexpr $AwaitResponseAsync$d__104_1(int $$1__state_ = {}, System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<T> $$t__builder_ = {}, MasterServer::MessageHandler* $$4__this_ = {}, System::Threading::CancellationToken cancellationToken_ = {}, System::Net::IPEndPoint* remoteEndPoint_ = {}, uint requestId_ = {}, MasterServer::MessageHandler::RequestWaiterId $waiterId$5__2_ = {}, T $tResult$5__3_ = {}, System::Runtime::CompilerServices::TaskAwaiter_1<MasterServer::IMasterServerMessage*> $$u__1_ = {}) noexcept : $$1__state{$$1__state_}, $$t__builder{$$t__builder_}, $$4__this{$$4__this_}, cancellationToken{cancellationToken_}, remoteEndPoint{remoteEndPoint_}, requestId{requestId_}, $waiterId$5__2{$waiterId$5__2_}, $tResult$5__3{$tResult$5__3_}, $$u__1{$$u__1_} {}
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
      static auto ___internal__logger = ::Logger::get().WithContext("MasterServer::MessageHandler::$AwaitResponseAsync$d__104_1::_get_$$1__state");
      auto ___internal__instance = *this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "<>1__state"))->offset;
      return *reinterpret_cast<int*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field setter
    // Set instance field: public System.Int32 <>1__state
    void _set_$$1__state(int value) {
      static auto ___internal__logger = ::Logger::get().WithContext("MasterServer::MessageHandler::$AwaitResponseAsync$d__104_1::_set_$$1__state");
      auto ___internal__instance = *this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "<>1__state"))->offset;
      *reinterpret_cast<int*>(reinterpret_cast<char*>(this) + ___internal__field__offset) = value;
    }
    // Autogenerated instance field getter
    // Get instance field: public System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<T> <>t__builder
    System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<T> _get_$$t__builder() {
      static auto ___internal__logger = ::Logger::get().WithContext("MasterServer::MessageHandler::$AwaitResponseAsync$d__104_1::_get_$$t__builder");
      auto ___internal__instance = *this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "<>t__builder"))->offset;
      return *reinterpret_cast<System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<T>*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field setter
    // Set instance field: public System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<T> <>t__builder
    void _set_$$t__builder(System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<T> value) {
      static auto ___internal__logger = ::Logger::get().WithContext("MasterServer::MessageHandler::$AwaitResponseAsync$d__104_1::_set_$$t__builder");
      auto ___internal__instance = *this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "<>t__builder"))->offset;
      *reinterpret_cast<System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<T>*>(reinterpret_cast<char*>(this) + ___internal__field__offset) = value;
    }
    // Autogenerated instance field getter
    // Get instance field: public MasterServer.MessageHandler <>4__this
    MasterServer::MessageHandler* _get_$$4__this() {
      static auto ___internal__logger = ::Logger::get().WithContext("MasterServer::MessageHandler::$AwaitResponseAsync$d__104_1::_get_$$4__this");
      auto ___internal__instance = *this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "<>4__this"))->offset;
      return *reinterpret_cast<MasterServer::MessageHandler**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field setter
    // Set instance field: public MasterServer.MessageHandler <>4__this
    void _set_$$4__this(MasterServer::MessageHandler* value) {
      static auto ___internal__logger = ::Logger::get().WithContext("MasterServer::MessageHandler::$AwaitResponseAsync$d__104_1::_set_$$4__this");
      auto ___internal__instance = *this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "<>4__this"))->offset;
      *reinterpret_cast<MasterServer::MessageHandler**>(reinterpret_cast<char*>(this) + ___internal__field__offset) = value;
    }
    // Autogenerated instance field getter
    // Get instance field: public System.Threading.CancellationToken cancellationToken
    System::Threading::CancellationToken _get_cancellationToken() {
      static auto ___internal__logger = ::Logger::get().WithContext("MasterServer::MessageHandler::$AwaitResponseAsync$d__104_1::_get_cancellationToken");
      auto ___internal__instance = *this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "cancellationToken"))->offset;
      return *reinterpret_cast<System::Threading::CancellationToken*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field setter
    // Set instance field: public System.Threading.CancellationToken cancellationToken
    void _set_cancellationToken(System::Threading::CancellationToken value) {
      static auto ___internal__logger = ::Logger::get().WithContext("MasterServer::MessageHandler::$AwaitResponseAsync$d__104_1::_set_cancellationToken");
      auto ___internal__instance = *this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "cancellationToken"))->offset;
      *reinterpret_cast<System::Threading::CancellationToken*>(reinterpret_cast<char*>(this) + ___internal__field__offset) = value;
    }
    // Autogenerated instance field getter
    // Get instance field: public System.Net.IPEndPoint remoteEndPoint
    System::Net::IPEndPoint* _get_remoteEndPoint() {
      static auto ___internal__logger = ::Logger::get().WithContext("MasterServer::MessageHandler::$AwaitResponseAsync$d__104_1::_get_remoteEndPoint");
      auto ___internal__instance = *this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "remoteEndPoint"))->offset;
      return *reinterpret_cast<System::Net::IPEndPoint**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field setter
    // Set instance field: public System.Net.IPEndPoint remoteEndPoint
    void _set_remoteEndPoint(System::Net::IPEndPoint* value) {
      static auto ___internal__logger = ::Logger::get().WithContext("MasterServer::MessageHandler::$AwaitResponseAsync$d__104_1::_set_remoteEndPoint");
      auto ___internal__instance = *this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "remoteEndPoint"))->offset;
      *reinterpret_cast<System::Net::IPEndPoint**>(reinterpret_cast<char*>(this) + ___internal__field__offset) = value;
    }
    // Autogenerated instance field getter
    // Get instance field: public System.UInt32 requestId
    uint _get_requestId() {
      static auto ___internal__logger = ::Logger::get().WithContext("MasterServer::MessageHandler::$AwaitResponseAsync$d__104_1::_get_requestId");
      auto ___internal__instance = *this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "requestId"))->offset;
      return *reinterpret_cast<uint*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field setter
    // Set instance field: public System.UInt32 requestId
    void _set_requestId(uint value) {
      static auto ___internal__logger = ::Logger::get().WithContext("MasterServer::MessageHandler::$AwaitResponseAsync$d__104_1::_set_requestId");
      auto ___internal__instance = *this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "requestId"))->offset;
      *reinterpret_cast<uint*>(reinterpret_cast<char*>(this) + ___internal__field__offset) = value;
    }
    // Autogenerated instance field getter
    // Get instance field: private MasterServer.MessageHandler/MasterServer.RequestWaiterId <waiterId>5__2
    MasterServer::MessageHandler::RequestWaiterId _get_$waiterId$5__2() {
      static auto ___internal__logger = ::Logger::get().WithContext("MasterServer::MessageHandler::$AwaitResponseAsync$d__104_1::_get_$waiterId$5__2");
      auto ___internal__instance = *this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "<waiterId>5__2"))->offset;
      return *reinterpret_cast<MasterServer::MessageHandler::RequestWaiterId*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field setter
    // Set instance field: private MasterServer.MessageHandler/MasterServer.RequestWaiterId <waiterId>5__2
    void _set_$waiterId$5__2(MasterServer::MessageHandler::RequestWaiterId value) {
      static auto ___internal__logger = ::Logger::get().WithContext("MasterServer::MessageHandler::$AwaitResponseAsync$d__104_1::_set_$waiterId$5__2");
      auto ___internal__instance = *this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "<waiterId>5__2"))->offset;
      *reinterpret_cast<MasterServer::MessageHandler::RequestWaiterId*>(reinterpret_cast<char*>(this) + ___internal__field__offset) = value;
    }
    // Autogenerated instance field getter
    // Get instance field: private T <tResult>5__3
    T _get_$tResult$5__3() {
      static auto ___internal__logger = ::Logger::get().WithContext("MasterServer::MessageHandler::$AwaitResponseAsync$d__104_1::_get_$tResult$5__3");
      auto ___internal__instance = *this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "<tResult>5__3"))->offset;
      return *reinterpret_cast<T*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field setter
    // Set instance field: private T <tResult>5__3
    void _set_$tResult$5__3(T value) {
      static auto ___internal__logger = ::Logger::get().WithContext("MasterServer::MessageHandler::$AwaitResponseAsync$d__104_1::_set_$tResult$5__3");
      auto ___internal__instance = *this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "<tResult>5__3"))->offset;
      *reinterpret_cast<T*>(reinterpret_cast<char*>(this) + ___internal__field__offset) = value;
    }
    // Autogenerated instance field getter
    // Get instance field: private System.Runtime.CompilerServices.TaskAwaiter`1<MasterServer.IMasterServerMessage> <>u__1
    System::Runtime::CompilerServices::TaskAwaiter_1<MasterServer::IMasterServerMessage*> _get_$$u__1() {
      static auto ___internal__logger = ::Logger::get().WithContext("MasterServer::MessageHandler::$AwaitResponseAsync$d__104_1::_get_$$u__1");
      auto ___internal__instance = *this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "<>u__1"))->offset;
      return *reinterpret_cast<System::Runtime::CompilerServices::TaskAwaiter_1<MasterServer::IMasterServerMessage*>*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field setter
    // Set instance field: private System.Runtime.CompilerServices.TaskAwaiter`1<MasterServer.IMasterServerMessage> <>u__1
    void _set_$$u__1(System::Runtime::CompilerServices::TaskAwaiter_1<MasterServer::IMasterServerMessage*> value) {
      static auto ___internal__logger = ::Logger::get().WithContext("MasterServer::MessageHandler::$AwaitResponseAsync$d__104_1::_set_$$u__1");
      auto ___internal__instance = *this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "<>u__1"))->offset;
      *reinterpret_cast<System::Runtime::CompilerServices::TaskAwaiter_1<MasterServer::IMasterServerMessage*>*>(reinterpret_cast<char*>(this) + ___internal__field__offset) = value;
    }
    // private System.Void MoveNext()
    // Offset: 0xFFFFFFFF
    void MoveNext() {
      static auto ___internal__logger = ::Logger::get().WithContext("MasterServer::MessageHandler::$AwaitResponseAsync$d__104_1::MoveNext");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "MoveNext", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      ::il2cpp_utils::RunMethodThrow<void, false>(*this, ___internal__method);
    }
    // private System.Void SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    // Offset: 0xFFFFFFFF
    void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
      static auto ___internal__logger = ::Logger::get().WithContext("MasterServer::MessageHandler::$AwaitResponseAsync$d__104_1::SetStateMachine");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "SetStateMachine", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(stateMachine)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(*this, ___internal__method, stateMachine);
    }
  }; // MasterServer.MessageHandler/MasterServer.<AwaitResponseAsync>d__104`1
  // Could not write size check! Type: MasterServer.MessageHandler/MasterServer.<AwaitResponseAsync>d__104`1 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(MasterServer::MessageHandler::$AwaitResponseAsync$d__104_1, "MasterServer", "MessageHandler/<AwaitResponseAsync>d__104`1");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
