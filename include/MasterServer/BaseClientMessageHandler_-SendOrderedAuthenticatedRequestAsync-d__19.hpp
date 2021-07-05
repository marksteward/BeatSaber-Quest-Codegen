// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
// Including type: MasterServer.BaseClientMessageHandler
#include "MasterServer/BaseClientMessageHandler.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Runtime.CompilerServices.IAsyncStateMachine
#include "System/Runtime/CompilerServices/IAsyncStateMachine.hpp"
// Including type: System.Runtime.CompilerServices.AsyncTaskMethodBuilder
#include "System/Runtime/CompilerServices/AsyncTaskMethodBuilder.hpp"
// Including type: System.Threading.CancellationToken
#include "System/Threading/CancellationToken.hpp"
// Including type: System.Runtime.CompilerServices.TaskAwaiter
#include "System/Runtime/CompilerServices/TaskAwaiter.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task
  class Task;
}
// Forward declaring namespace: MasterServer
namespace MasterServer {
  // Forward declaring type: IMasterServerReliableRequest
  class IMasterServerReliableRequest;
}
// Completed forward declares
// Type namespace: MasterServer
namespace MasterServer {
  // WARNING Size may be invalid!
  // Autogenerated type: MasterServer.BaseClientMessageHandler/<SendOrderedAuthenticatedRequestAsync>d__19
  // [CompilerGeneratedAttribute] Offset: DF06B0
  struct BaseClientMessageHandler::$SendOrderedAuthenticatedRequestAsync$d__19/*, public System::ValueType, public System::Runtime::CompilerServices::IAsyncStateMachine*/ {
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
    // public System.Threading.Tasks.Task previousTask
    // Size: 0x8
    // Offset: 0x20
    System::Threading::Tasks::Task* previousTask;
    // Field size check
    static_assert(sizeof(System::Threading::Tasks::Task*) == 0x8);
    // public MasterServer.BaseClientMessageHandler <>4__this
    // Size: 0x8
    // Offset: 0x28
    MasterServer::BaseClientMessageHandler* $$4__this;
    // Field size check
    static_assert(sizeof(MasterServer::BaseClientMessageHandler*) == 0x8);
    // public MasterServer.IMasterServerReliableRequest message
    // Size: 0x8
    // Offset: 0x30
    MasterServer::IMasterServerReliableRequest* message;
    // Field size check
    static_assert(sizeof(MasterServer::IMasterServerReliableRequest*) == 0x8);
    // public System.Threading.CancellationToken cancellationToken
    // Size: 0x8
    // Offset: 0x38
    System::Threading::CancellationToken cancellationToken;
    // Field size check
    static_assert(sizeof(System::Threading::CancellationToken) == 0x8);
    // private System.Runtime.CompilerServices.TaskAwaiter <>u__1
    // Size: 0x8
    // Offset: 0x40
    System::Runtime::CompilerServices::TaskAwaiter $$u__1;
    // Field size check
    static_assert(sizeof(System::Runtime::CompilerServices::TaskAwaiter) == 0x8);
    // Creating value type constructor for type: $SendOrderedAuthenticatedRequestAsync$d__19
    constexpr $SendOrderedAuthenticatedRequestAsync$d__19(int $$1__state_ = {}, System::Runtime::CompilerServices::AsyncTaskMethodBuilder $$t__builder_ = {}, System::Threading::Tasks::Task* previousTask_ = {}, MasterServer::BaseClientMessageHandler* $$4__this_ = {}, MasterServer::IMasterServerReliableRequest* message_ = {}, System::Threading::CancellationToken cancellationToken_ = {}, System::Runtime::CompilerServices::TaskAwaiter $$u__1_ = {}) noexcept : $$1__state{$$1__state_}, $$t__builder{$$t__builder_}, previousTask{previousTask_}, $$4__this{$$4__this_}, message{message_}, cancellationToken{cancellationToken_}, $$u__1{$$u__1_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator System::Runtime::CompilerServices::IAsyncStateMachine
    operator System::Runtime::CompilerServices::IAsyncStateMachine() noexcept {
      return *reinterpret_cast<System::Runtime::CompilerServices::IAsyncStateMachine*>(this);
    }
    // private System.Void MoveNext()
    // Offset: 0xEE86E0
    void MoveNext();
    // private System.Void SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    // Offset: 0xEE86E8
    void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);
  }; // MasterServer.BaseClientMessageHandler/<SendOrderedAuthenticatedRequestAsync>d__19
  // WARNING Not writing size check since size may be invalid!
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(MasterServer::BaseClientMessageHandler::$SendOrderedAuthenticatedRequestAsync$d__19, "MasterServer", "BaseClientMessageHandler/<SendOrderedAuthenticatedRequestAsync>d__19");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: MasterServer::BaseClientMessageHandler::$SendOrderedAuthenticatedRequestAsync$d__19::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MasterServer::BaseClientMessageHandler::$SendOrderedAuthenticatedRequestAsync$d__19::*)()>(&MasterServer::BaseClientMessageHandler::$SendOrderedAuthenticatedRequestAsync$d__19::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MasterServer::BaseClientMessageHandler::$SendOrderedAuthenticatedRequestAsync$d__19), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MasterServer::BaseClientMessageHandler::$SendOrderedAuthenticatedRequestAsync$d__19::SetStateMachine
// Il2CppName: SetStateMachine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MasterServer::BaseClientMessageHandler::$SendOrderedAuthenticatedRequestAsync$d__19::*)(System::Runtime::CompilerServices::IAsyncStateMachine*)>(&MasterServer::BaseClientMessageHandler::$SendOrderedAuthenticatedRequestAsync$d__19::SetStateMachine)> {
  static const MethodInfo* get() {
    static auto* stateMachine = &::il2cpp_utils::GetClassFromName("System.Runtime.CompilerServices", "IAsyncStateMachine")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MasterServer::BaseClientMessageHandler::$SendOrderedAuthenticatedRequestAsync$d__19), "SetStateMachine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stateMachine});
  }
};
