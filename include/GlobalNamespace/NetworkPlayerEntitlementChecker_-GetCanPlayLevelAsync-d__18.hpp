// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: NetworkPlayerEntitlementChecker
#include "GlobalNamespace/NetworkPlayerEntitlementChecker.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Runtime.CompilerServices.IAsyncStateMachine
#include "System/Runtime/CompilerServices/IAsyncStateMachine.hpp"
// Including type: System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1
#include "System/Runtime/CompilerServices/AsyncTaskMethodBuilder_1.hpp"
// Including type: System.Threading.CancellationToken
#include "System/Threading/CancellationToken.hpp"
// Including type: EntitlementsStatus
#include "GlobalNamespace/EntitlementsStatus.hpp"
// Including type: System.Runtime.CompilerServices.TaskAwaiter`1
#include "System/Runtime/CompilerServices/TaskAwaiter_1.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task`1<TResult>
  template<typename TResult>
  class Task_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: NetworkPlayerEntitlementChecker/<GetCanPlayLevelAsync>d__18
  // [CompilerGeneratedAttribute] Offset: E11CE8
  struct NetworkPlayerEntitlementChecker::$GetCanPlayLevelAsync$d__18/*, public System::ValueType, public System::Runtime::CompilerServices::IAsyncStateMachine*/ {
    public:
    // public System.Int32 <>1__state
    // Size: 0x4
    // Offset: 0x0
    int $$1__state;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean> <>t__builder
    // Size: 0xFFFFFFFF
    // Offset: 0x8
    System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> $$t__builder;
    // public NetworkPlayerEntitlementChecker <>4__this
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::NetworkPlayerEntitlementChecker* $$4__this;
    // Field size check
    static_assert(sizeof(GlobalNamespace::NetworkPlayerEntitlementChecker*) == 0x8);
    // public System.String levelId
    // Size: 0x8
    // Offset: 0x28
    ::Il2CppString* levelId;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public System.Threading.CancellationToken token
    // Size: 0x8
    // Offset: 0x30
    System::Threading::CancellationToken token;
    // Field size check
    static_assert(sizeof(System::Threading::CancellationToken) == 0x8);
    // private System.Collections.Generic.List`1<System.Threading.Tasks.Task`1<EntitlementsStatus>> <subTasks>5__2
    // Size: 0x8
    // Offset: 0x38
    System::Collections::Generic::List_1<System::Threading::Tasks::Task_1<GlobalNamespace::EntitlementsStatus>*>* $subTasks$5__2;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<System::Threading::Tasks::Task_1<GlobalNamespace::EntitlementsStatus>*>*) == 0x8);
    // private System.Runtime.CompilerServices.TaskAwaiter`1<EntitlementsStatus> <>u__1
    // Size: 0xFFFFFFFF
    // Offset: 0x40
    System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::EntitlementsStatus> $$u__1;
    // private System.Runtime.CompilerServices.TaskAwaiter`1<EntitlementsStatus[]> <>u__2
    // Size: 0xFFFFFFFF
    // Offset: 0x48
    System::Runtime::CompilerServices::TaskAwaiter_1<::Array<GlobalNamespace::EntitlementsStatus>*> $$u__2;
    // Creating value type constructor for type: $GetCanPlayLevelAsync$d__18
    constexpr $GetCanPlayLevelAsync$d__18(int $$1__state_ = {}, System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> $$t__builder_ = {}, GlobalNamespace::NetworkPlayerEntitlementChecker* $$4__this_ = {}, ::Il2CppString* levelId_ = {}, System::Threading::CancellationToken token_ = {}, System::Collections::Generic::List_1<System::Threading::Tasks::Task_1<GlobalNamespace::EntitlementsStatus>*>* $subTasks$5__2_ = {}, System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::EntitlementsStatus> $$u__1_ = {}, System::Runtime::CompilerServices::TaskAwaiter_1<::Array<GlobalNamespace::EntitlementsStatus>*> $$u__2_ = {}) noexcept : $$1__state{$$1__state_}, $$t__builder{$$t__builder_}, $$4__this{$$4__this_}, levelId{levelId_}, token{token_}, $subTasks$5__2{$subTasks$5__2_}, $$u__1{$$u__1_}, $$u__2{$$u__2_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator System::Runtime::CompilerServices::IAsyncStateMachine
    operator System::Runtime::CompilerServices::IAsyncStateMachine() noexcept {
      return *reinterpret_cast<System::Runtime::CompilerServices::IAsyncStateMachine*>(this);
    }
    // private System.Void MoveNext()
    // Offset: 0xEE466C
    void MoveNext();
    // private System.Void SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    // Offset: 0xEE4674
    void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);
  }; // NetworkPlayerEntitlementChecker/<GetCanPlayLevelAsync>d__18
  // WARNING Not writing size check since size may be invalid!
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::NetworkPlayerEntitlementChecker::$GetCanPlayLevelAsync$d__18, "", "NetworkPlayerEntitlementChecker/<GetCanPlayLevelAsync>d__18");
// Writing MetadataGetter for method: GlobalNamespace::NetworkPlayerEntitlementChecker::$GetCanPlayLevelAsync$d__18::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NetworkPlayerEntitlementChecker::$GetCanPlayLevelAsync$d__18::*)()>(&GlobalNamespace::NetworkPlayerEntitlementChecker::$GetCanPlayLevelAsync$d__18::MoveNext)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NetworkPlayerEntitlementChecker::$GetCanPlayLevelAsync$d__18), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NetworkPlayerEntitlementChecker::$GetCanPlayLevelAsync$d__18::SetStateMachine
// Il2CppName: SetStateMachine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NetworkPlayerEntitlementChecker::$GetCanPlayLevelAsync$d__18::*)(System::Runtime::CompilerServices::IAsyncStateMachine*)>(&GlobalNamespace::NetworkPlayerEntitlementChecker::$GetCanPlayLevelAsync$d__18::SetStateMachine)> {
  const MethodInfo* get() {
    static auto* stateMachine = &::il2cpp_utils::GetClassFromName("System.Runtime.CompilerServices", "IAsyncStateMachine")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NetworkPlayerEntitlementChecker::$GetCanPlayLevelAsync$d__18), "SetStateMachine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stateMachine});
  }
};
