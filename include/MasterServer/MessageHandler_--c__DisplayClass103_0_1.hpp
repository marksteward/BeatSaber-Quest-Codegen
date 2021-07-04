// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: MasterServer.MessageHandler
#include "MasterServer/MessageHandler.hpp"
// Including type: System.Threading.CancellationToken
#include "System/Threading/CancellationToken.hpp"
// Including type: System.Runtime.CompilerServices.IAsyncStateMachine
#include "System/Runtime/CompilerServices/IAsyncStateMachine.hpp"
// Including type: System.Runtime.CompilerServices.AsyncTaskMethodBuilder
#include "System/Runtime/CompilerServices/AsyncTaskMethodBuilder.hpp"
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
  // Skipping declaration: <<WrapOnSendFailedAwaitResponse>b__0>d because it is already included!
  // Forward declaring type: IMasterServerMessage
  class IMasterServerMessage;
  // Forward declaring type: IMasterServerReliableRequest
  class IMasterServerReliableRequest;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`5<T1, T2, T3, T4, TResult>
  template<typename T1, typename T2, typename T3, typename T4, typename TResult>
  class Func_5;
}
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: IPEndPoint
  class IPEndPoint;
}
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task`1<TResult>
  template<typename TResult>
  class Task_1;
  // Forward declaring type: Task
  class Task;
}
// Completed forward declares
// Type namespace: MasterServer
namespace MasterServer {
  // WARNING Size may be invalid!
  // Autogenerated type: MasterServer.MessageHandler/<>c__DisplayClass103_0`1
  // [CompilerGeneratedAttribute] Offset: DF0830
  template<typename T>
  class MessageHandler::$$c__DisplayClass103_0_1 : public ::Il2CppObject {
    public:
    // Nested type: MasterServer::MessageHandler::$$c__DisplayClass103_0_1::$$WrapOnSendFailedAwaitResponse$b__0$d<T>
    struct $$WrapOnSendFailedAwaitResponse$b__0$d;
    // WARNING Size may be invalid!
    // Autogenerated type: MasterServer.MessageHandler/<>c__DisplayClass103_0`1/<<WrapOnSendFailedAwaitResponse>b__0>d
    struct $$WrapOnSendFailedAwaitResponse$b__0$d : public ::il2cpp_utils::il2cpp_type_check::NestedType/*, public System::ValueType, public System::Runtime::CompilerServices::IAsyncStateMachine*/ {
      public:
      using declaring_type = MessageHandler::$$c__DisplayClass103_0_1<T>*;
      static constexpr std::string_view NESTED_NAME = "<<WrapOnSendFailedAwaitResponse>b__0>d";
      // public System.Int32 <>1__state
      // Size: 0x4
      // Offset: 0x0
      int $$1__state;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // public System.Runtime.CompilerServices.AsyncTaskMethodBuilder <>t__builder
      // Size: 0xFFFFFFFF
      // Offset: 0x0
      System::Runtime::CompilerServices::AsyncTaskMethodBuilder $$t__builder;
      // public MasterServer.MessageHandler/<>c__DisplayClass103_0`1<T> <>4__this
      // Size: 0x8
      // Offset: 0x0
      MasterServer::MessageHandler::$$c__DisplayClass103_0_1<T>* $$4__this;
      // Field size check
      static_assert(sizeof(MasterServer::MessageHandler::$$c__DisplayClass103_0_1<T>*) == 0x8);
      // public System.UInt32 protocolVersion
      // Size: 0x4
      // Offset: 0x0
      uint protocolVersion;
      // Field size check
      static_assert(sizeof(uint) == 0x4);
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
      // public System.Threading.CancellationToken cancellationToken
      // Size: 0x8
      // Offset: 0x0
      System::Threading::CancellationToken cancellationToken;
      // Field size check
      static_assert(sizeof(System::Threading::CancellationToken) == 0x8);
      // private MasterServer.MessageHandler/RequestResponseWaiter <>7__wrap1
      // Size: 0x8
      // Offset: 0x0
      MasterServer::MessageHandler::RequestResponseWaiter* $$7__wrap1;
      // Field size check
      static_assert(sizeof(MasterServer::MessageHandler::RequestResponseWaiter*) == 0x8);
      // private System.Runtime.CompilerServices.TaskAwaiter`1<T> <>u__1
      // Size: 0xFFFFFFFF
      // Offset: 0x0
      System::Runtime::CompilerServices::TaskAwaiter_1<T> $$u__1;
      // Creating value type constructor for type: $$WrapOnSendFailedAwaitResponse$b__0$d
      constexpr $$WrapOnSendFailedAwaitResponse$b__0$d(int $$1__state_ = {}, System::Runtime::CompilerServices::AsyncTaskMethodBuilder $$t__builder_ = {}, MasterServer::MessageHandler::$$c__DisplayClass103_0_1<T>* $$4__this_ = {}, uint protocolVersion_ = {}, System::Net::IPEndPoint* remoteEndPoint_ = {}, MasterServer::IMasterServerReliableRequest* message_ = {}, System::Threading::CancellationToken cancellationToken_ = {}, MasterServer::MessageHandler::RequestResponseWaiter* $$7__wrap1_ = {}, System::Runtime::CompilerServices::TaskAwaiter_1<T> $$u__1_ = {}) noexcept : $$1__state{$$1__state_}, $$t__builder{$$t__builder_}, $$4__this{$$4__this_}, protocolVersion{protocolVersion_}, remoteEndPoint{remoteEndPoint_}, message{message_}, cancellationToken{cancellationToken_}, $$7__wrap1{$$7__wrap1_}, $$u__1{$$u__1_} {}
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
        static auto ___internal__logger = ::Logger::get().WithContext("MasterServer::MessageHandler::$$c__DisplayClass103_0_1::$$WrapOnSendFailedAwaitResponse$b__0$d::MoveNext");
        auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "MoveNext", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
        ::il2cpp_utils::RunMethodThrow<void, false>(*this, ___internal__method);
      }
      // private System.Void SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
      // Offset: 0xFFFFFFFF
      void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
        static auto ___internal__logger = ::Logger::get().WithContext("MasterServer::MessageHandler::$$c__DisplayClass103_0_1::$$WrapOnSendFailedAwaitResponse$b__0$d::SetStateMachine");
        auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "SetStateMachine", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(stateMachine)})));
        ::il2cpp_utils::RunMethodThrow<void, false>(*this, ___internal__method, stateMachine);
      }
    }; // MasterServer.MessageHandler/<>c__DisplayClass103_0`1/<<WrapOnSendFailedAwaitResponse>b__0>d
    // Could not write size check! Type: MasterServer.MessageHandler/<>c__DisplayClass103_0`1/<<WrapOnSendFailedAwaitResponse>b__0>d is generic, or has no fields that are valid for size checks!
    // public MasterServer.MessageHandler/RequestResponseWaiter waiter
    // Size: 0x8
    // Offset: 0x0
    MasterServer::MessageHandler::RequestResponseWaiter* waiter;
    // Field size check
    static_assert(sizeof(MasterServer::MessageHandler::RequestResponseWaiter*) == 0x8);
    // public System.Func`5<System.UInt32,System.Net.IPEndPoint,MasterServer.IMasterServerReliableRequest,System.Threading.CancellationToken,System.Threading.Tasks.Task`1<T>> onSendFailed
    // Size: 0x8
    // Offset: 0x0
    System::Func_5<uint, System::Net::IPEndPoint*, MasterServer::IMasterServerReliableRequest*, System::Threading::CancellationToken, System::Threading::Tasks::Task_1<T>*>* onSendFailed;
    // Field size check
    static_assert(sizeof(System::Func_5<uint, System::Net::IPEndPoint*, MasterServer::IMasterServerReliableRequest*, System::Threading::CancellationToken, System::Threading::Tasks::Task_1<T>*>*) == 0x8);
    // Creating value type constructor for type: $$c__DisplayClass103_0_1
    $$c__DisplayClass103_0_1(MasterServer::MessageHandler::RequestResponseWaiter* waiter_ = {}, System::Func_5<uint, System::Net::IPEndPoint*, MasterServer::IMasterServerReliableRequest*, System::Threading::CancellationToken, System::Threading::Tasks::Task_1<T>*>* onSendFailed_ = {}) noexcept : waiter{waiter_}, onSendFailed{onSendFailed_} {}
    // System.Threading.Tasks.Task <WrapOnSendFailedAwaitResponse>b__0(System.UInt32 protocolVersion, System.Net.IPEndPoint remoteEndPoint, MasterServer.IMasterServerReliableRequest message, System.Threading.CancellationToken cancellationToken)
    // Offset: 0xFFFFFFFF
    System::Threading::Tasks::Task* $WrapOnSendFailedAwaitResponse$b__0(uint protocolVersion, System::Net::IPEndPoint* remoteEndPoint, MasterServer::IMasterServerReliableRequest* message, System::Threading::CancellationToken cancellationToken) {
      static auto ___internal__logger = ::Logger::get().WithContext("MasterServer::MessageHandler::$$c__DisplayClass103_0_1::<WrapOnSendFailedAwaitResponse>b__0");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "<WrapOnSendFailedAwaitResponse>b__0", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(protocolVersion), ::il2cpp_utils::ExtractType(remoteEndPoint), ::il2cpp_utils::ExtractType(message), ::il2cpp_utils::ExtractType(cancellationToken)})));
      return ::il2cpp_utils::RunMethodThrow<System::Threading::Tasks::Task*, false>(this, ___internal__method, protocolVersion, remoteEndPoint, message, cancellationToken);
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MessageHandler::$$c__DisplayClass103_0_1<T>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("MasterServer::MessageHandler::$$c__DisplayClass103_0_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MessageHandler::$$c__DisplayClass103_0_1<T>*, creationType>()));
    }
  }; // MasterServer.MessageHandler/<>c__DisplayClass103_0`1
  // Could not write size check! Type: MasterServer.MessageHandler/<>c__DisplayClass103_0`1 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(MasterServer::MessageHandler::$$c__DisplayClass103_0_1, "MasterServer", "MessageHandler/<>c__DisplayClass103_0`1");
