// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: MasterServer.UserMessageHandler
#include "MasterServer/UserMessageHandler.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Runtime.CompilerServices.IAsyncStateMachine
#include "System/Runtime/CompilerServices/IAsyncStateMachine.hpp"
// Including type: System.Runtime.CompilerServices.AsyncVoidMethodBuilder
#include "System/Runtime/CompilerServices/AsyncVoidMethodBuilder.hpp"
// Including type: ConnectionFailedReason
#include "GlobalNamespace/ConnectionFailedReason.hpp"
// Including type: System.Runtime.CompilerServices.TaskAwaiter
#include "System/Runtime/CompilerServices/TaskAwaiter.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`1<TResult>
  template<typename TResult>
  class Func_1;
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task
  class Task;
}
// Completed forward declares
// Type namespace: MasterServer
namespace MasterServer {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: MasterServer.UserMessageHandler/<WithFailureHandler>d__40
  // [CompilerGeneratedAttribute] Offset: DF08A0
  struct UserMessageHandler::$WithFailureHandler$d__40/*, public System::ValueType, public System::Runtime::CompilerServices::IAsyncStateMachine*/ {
    public:
    // public System.Int32 <>1__state
    // Size: 0x4
    // Offset: 0x0
    int $$1__state;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: $$1__state and: $$t__builder
    char __padding0[0x4] = {};
    // public System.Runtime.CompilerServices.AsyncVoidMethodBuilder <>t__builder
    // Size: 0x20
    // Offset: 0x8
    System::Runtime::CompilerServices::AsyncVoidMethodBuilder $$t__builder;
    // Field size check
    static_assert(sizeof(System::Runtime::CompilerServices::AsyncVoidMethodBuilder) == 0x20);
    // public System.Func`1<System.Threading.Tasks.Task> performTask
    // Size: 0x8
    // Offset: 0x28
    System::Func_1<System::Threading::Tasks::Task*>* performTask;
    // Field size check
    static_assert(sizeof(System::Func_1<System::Threading::Tasks::Task*>*) == 0x8);
    // public System.Action`1<ConnectionFailedReason> onFailure
    // Size: 0x8
    // Offset: 0x30
    System::Action_1<GlobalNamespace::ConnectionFailedReason>* onFailure;
    // Field size check
    static_assert(sizeof(System::Action_1<GlobalNamespace::ConnectionFailedReason>*) == 0x8);
    // private System.Runtime.CompilerServices.TaskAwaiter <>u__1
    // Size: 0x8
    // Offset: 0x38
    System::Runtime::CompilerServices::TaskAwaiter $$u__1;
    // Field size check
    static_assert(sizeof(System::Runtime::CompilerServices::TaskAwaiter) == 0x8);
    // Creating value type constructor for type: $WithFailureHandler$d__40
    constexpr $WithFailureHandler$d__40(int $$1__state_ = {}, System::Runtime::CompilerServices::AsyncVoidMethodBuilder $$t__builder_ = {}, System::Func_1<System::Threading::Tasks::Task*>* performTask_ = {}, System::Action_1<GlobalNamespace::ConnectionFailedReason>* onFailure_ = {}, System::Runtime::CompilerServices::TaskAwaiter $$u__1_ = {}) noexcept : $$1__state{$$1__state_}, $$t__builder{$$t__builder_}, performTask{performTask_}, onFailure{onFailure_}, $$u__1{$$u__1_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator System::Runtime::CompilerServices::IAsyncStateMachine
    operator System::Runtime::CompilerServices::IAsyncStateMachine() noexcept {
      return *reinterpret_cast<System::Runtime::CompilerServices::IAsyncStateMachine*>(this);
    }
    // private System.Void MoveNext()
    // Offset: 0xEE88A4
    void MoveNext();
    // private System.Void SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    // Offset: 0xEE88AC
    void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);
  }; // MasterServer.UserMessageHandler/<WithFailureHandler>d__40
  #pragma pack(pop)
  static check_size<sizeof(UserMessageHandler::$WithFailureHandler$d__40), 56 + sizeof(System::Runtime::CompilerServices::TaskAwaiter)> __MasterServer_UserMessageHandler_$WithFailureHandler$d__40SizeCheck;
  static_assert(sizeof(UserMessageHandler::$WithFailureHandler$d__40) == 0x40);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(MasterServer::UserMessageHandler::$WithFailureHandler$d__40, "MasterServer", "UserMessageHandler/<WithFailureHandler>d__40");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: MasterServer::UserMessageHandler::$WithFailureHandler$d__40::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MasterServer::UserMessageHandler::$WithFailureHandler$d__40::*)()>(&MasterServer::UserMessageHandler::$WithFailureHandler$d__40::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MasterServer::UserMessageHandler::$WithFailureHandler$d__40), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MasterServer::UserMessageHandler::$WithFailureHandler$d__40::SetStateMachine
// Il2CppName: SetStateMachine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MasterServer::UserMessageHandler::$WithFailureHandler$d__40::*)(System::Runtime::CompilerServices::IAsyncStateMachine*)>(&MasterServer::UserMessageHandler::$WithFailureHandler$d__40::SetStateMachine)> {
  static const MethodInfo* get() {
    static auto* stateMachine = &::il2cpp_utils::GetClassFromName("System.Runtime.CompilerServices", "IAsyncStateMachine")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MasterServer::UserMessageHandler::$WithFailureHandler$d__40), "SetStateMachine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stateMachine});
  }
};
