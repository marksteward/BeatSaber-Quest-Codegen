// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: MasterServer.BaseClientMessageHandler
#include "MasterServer/BaseClientMessageHandler.hpp"
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
  // Forward declaring type: IMasterServerReliableResponse
  class IMasterServerReliableResponse;
  // Forward declaring type: IMasterServerReliableRequest
  class IMasterServerReliableRequest;
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
  // Autogenerated type: MasterServer.BaseClientMessageHandler/MasterServer.<OnSendFailedAwaitResponse>d__23`1
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  template<typename T>
  struct BaseClientMessageHandler::$OnSendFailedAwaitResponse$d__23_1/*, public System::ValueType, public System::Runtime::CompilerServices::IAsyncStateMachine*/ {
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
    // public MasterServer.BaseClientMessageHandler <>4__this
    // Size: 0x8
    // Offset: 0x0
    MasterServer::BaseClientMessageHandler* $$4__this;
    // Field size check
    static_assert(sizeof(MasterServer::BaseClientMessageHandler*) == 0x8);
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
    // public System.Net.IPEndPoint remoteEndPoint
    // Size: 0x8
    // Offset: 0x0
    System::Net::IPEndPoint* remoteEndPoint;
    // Field size check
    static_assert(sizeof(System::Net::IPEndPoint*) == 0x8);
    // public System.Threading.CancellationToken cancellationToken
    // Size: 0x8
    // Offset: 0x0
    System::Threading::CancellationToken cancellationToken;
    // Field size check
    static_assert(sizeof(System::Threading::CancellationToken) == 0x8);
    // private System.Runtime.CompilerServices.TaskAwaiter <>u__1
    // Size: 0x8
    // Offset: 0x0
    System::Runtime::CompilerServices::TaskAwaiter $$u__1;
    // Field size check
    static_assert(sizeof(System::Runtime::CompilerServices::TaskAwaiter) == 0x8);
    // private System.Runtime.CompilerServices.TaskAwaiter`1<T> <>u__2
    // Size: 0xFFFFFFFF
    // Offset: 0x0
    System::Runtime::CompilerServices::TaskAwaiter_1<T> $$u__2;
    // Creating value type constructor for type: $OnSendFailedAwaitResponse$d__23_1
    constexpr $OnSendFailedAwaitResponse$d__23_1(int $$1__state_ = {}, System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<T> $$t__builder_ = {}, MasterServer::BaseClientMessageHandler* $$4__this_ = {}, MasterServer::IMasterServerReliableRequest* message_ = {}, uint protocolVersion_ = {}, System::Net::IPEndPoint* remoteEndPoint_ = {}, System::Threading::CancellationToken cancellationToken_ = {}, System::Runtime::CompilerServices::TaskAwaiter $$u__1_ = {}, System::Runtime::CompilerServices::TaskAwaiter_1<T> $$u__2_ = {}) noexcept : $$1__state{$$1__state_}, $$t__builder{$$t__builder_}, $$4__this{$$4__this_}, message{message_}, protocolVersion{protocolVersion_}, remoteEndPoint{remoteEndPoint_}, cancellationToken{cancellationToken_}, $$u__1{$$u__1_}, $$u__2{$$u__2_} {}
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
      static auto ___internal__logger = ::Logger::get().WithContext("MasterServer::BaseClientMessageHandler::$OnSendFailedAwaitResponse$d__23_1::MoveNext");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "MoveNext", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      ::il2cpp_utils::RunMethodThrow<void, false>(*this, ___internal__method);
    }
    // private System.Void SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    // Offset: 0xFFFFFFFF
    void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
      static auto ___internal__logger = ::Logger::get().WithContext("MasterServer::BaseClientMessageHandler::$OnSendFailedAwaitResponse$d__23_1::SetStateMachine");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "SetStateMachine", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(stateMachine)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(*this, ___internal__method, stateMachine);
    }
  }; // MasterServer.BaseClientMessageHandler/MasterServer.<OnSendFailedAwaitResponse>d__23`1
  // Could not write size check! Type: MasterServer.BaseClientMessageHandler/MasterServer.<OnSendFailedAwaitResponse>d__23`1 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(MasterServer::BaseClientMessageHandler::$OnSendFailedAwaitResponse$d__23_1, "MasterServer", "BaseClientMessageHandler/<OnSendFailedAwaitResponse>d__23`1");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
