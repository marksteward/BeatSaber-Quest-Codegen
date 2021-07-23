// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OculusPlatformAdditionalContentModel
#include "GlobalNamespace/OculusPlatformAdditionalContentModel.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Runtime.CompilerServices.IAsyncStateMachine
#include "System/Runtime/CompilerServices/IAsyncStateMachine.hpp"
// Including type: System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1
#include "System/Runtime/CompilerServices/AsyncTaskMethodBuilder_1.hpp"
// Including type: AdditionalContentModel/OpenProductStoreResult
#include "GlobalNamespace/AdditionalContentModel.hpp"
// Including type: System.Threading.CancellationToken
#include "System/Threading/CancellationToken.hpp"
// Including type: System.Runtime.CompilerServices.TaskAwaiter`1
#include "System/Runtime/CompilerServices/TaskAwaiter_1.hpp"
// Including type: System.Runtime.CompilerServices.TaskAwaiter
#include "System/Runtime/CompilerServices/TaskAwaiter.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Oculus::Platform
namespace Oculus::Platform {
  // Forward declaring type: Message`1<T>
  template<typename T>
  class Message_1;
}
// Forward declaring namespace: Oculus::Platform::Models
namespace Oculus::Platform::Models {
  // Forward declaring type: Purchase
  class Purchase;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: OculusPlatformAdditionalContentModel/<OpenLevelProductStoreAsync>d__8
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  struct OculusPlatformAdditionalContentModel::$OpenLevelProductStoreAsync$d__8/*, public System::ValueType, public System::Runtime::CompilerServices::IAsyncStateMachine*/ {
    public:
    // public System.Int32 <>1__state
    // Size: 0x4
    // Offset: 0x0
    int $$1__state;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<AdditionalContentModel/OpenProductStoreResult> <>t__builder
    // Size: 0xFFFFFFFF
    // Offset: 0x8
    System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::AdditionalContentModel::OpenProductStoreResult> $$t__builder;
    // public OculusPlatformAdditionalContentModel <>4__this
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::OculusPlatformAdditionalContentModel* $$4__this;
    // Field size check
    static_assert(sizeof(GlobalNamespace::OculusPlatformAdditionalContentModel*) == 0x8);
    // public System.String levelId
    // Size: 0x8
    // Offset: 0x28
    ::Il2CppString* levelId;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public System.Threading.CancellationToken cancellationToken
    // Size: 0x8
    // Offset: 0x30
    System::Threading::CancellationToken cancellationToken;
    // Field size check
    static_assert(sizeof(System::Threading::CancellationToken) == 0x8);
    // private System.Runtime.CompilerServices.TaskAwaiter`1<Oculus.Platform.Message`1<Oculus.Platform.Models.Purchase>> <>u__1
    // Size: 0xFFFFFFFF
    // Offset: 0x38
    System::Runtime::CompilerServices::TaskAwaiter_1<Oculus::Platform::Message_1<Oculus::Platform::Models::Purchase*>*> $$u__1;
    // private System.Runtime.CompilerServices.TaskAwaiter <>u__2
    // Size: 0x8
    // Offset: 0x40
    System::Runtime::CompilerServices::TaskAwaiter $$u__2;
    // Field size check
    static_assert(sizeof(System::Runtime::CompilerServices::TaskAwaiter) == 0x8);
    // Creating value type constructor for type: $OpenLevelProductStoreAsync$d__8
    constexpr $OpenLevelProductStoreAsync$d__8(int $$1__state_ = {}, System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::AdditionalContentModel::OpenProductStoreResult> $$t__builder_ = {}, GlobalNamespace::OculusPlatformAdditionalContentModel* $$4__this_ = {}, ::Il2CppString* levelId_ = {}, System::Threading::CancellationToken cancellationToken_ = {}, System::Runtime::CompilerServices::TaskAwaiter_1<Oculus::Platform::Message_1<Oculus::Platform::Models::Purchase*>*> $$u__1_ = {}, System::Runtime::CompilerServices::TaskAwaiter $$u__2_ = {}) noexcept : $$1__state{$$1__state_}, $$t__builder{$$t__builder_}, $$4__this{$$4__this_}, levelId{levelId_}, cancellationToken{cancellationToken_}, $$u__1{$$u__1_}, $$u__2{$$u__2_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator System::Runtime::CompilerServices::IAsyncStateMachine
    operator System::Runtime::CompilerServices::IAsyncStateMachine() noexcept {
      return *reinterpret_cast<System::Runtime::CompilerServices::IAsyncStateMachine*>(this);
    }
    // Get instance field: public System.Int32 <>1__state
    int _get_$$1__state();
    // Set instance field: public System.Int32 <>1__state
    void _set_$$1__state(int value);
    // Get instance field: public System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<AdditionalContentModel/OpenProductStoreResult> <>t__builder
    System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::AdditionalContentModel::OpenProductStoreResult> _get_$$t__builder();
    // Set instance field: public System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<AdditionalContentModel/OpenProductStoreResult> <>t__builder
    void _set_$$t__builder(System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::AdditionalContentModel::OpenProductStoreResult> value);
    // Get instance field: public OculusPlatformAdditionalContentModel <>4__this
    GlobalNamespace::OculusPlatformAdditionalContentModel* _get_$$4__this();
    // Set instance field: public OculusPlatformAdditionalContentModel <>4__this
    void _set_$$4__this(GlobalNamespace::OculusPlatformAdditionalContentModel* value);
    // Get instance field: public System.String levelId
    ::Il2CppString* _get_levelId();
    // Set instance field: public System.String levelId
    void _set_levelId(::Il2CppString* value);
    // Get instance field: public System.Threading.CancellationToken cancellationToken
    System::Threading::CancellationToken _get_cancellationToken();
    // Set instance field: public System.Threading.CancellationToken cancellationToken
    void _set_cancellationToken(System::Threading::CancellationToken value);
    // Get instance field: private System.Runtime.CompilerServices.TaskAwaiter`1<Oculus.Platform.Message`1<Oculus.Platform.Models.Purchase>> <>u__1
    System::Runtime::CompilerServices::TaskAwaiter_1<Oculus::Platform::Message_1<Oculus::Platform::Models::Purchase*>*> _get_$$u__1();
    // Set instance field: private System.Runtime.CompilerServices.TaskAwaiter`1<Oculus.Platform.Message`1<Oculus.Platform.Models.Purchase>> <>u__1
    void _set_$$u__1(System::Runtime::CompilerServices::TaskAwaiter_1<Oculus::Platform::Message_1<Oculus::Platform::Models::Purchase*>*> value);
    // Get instance field: private System.Runtime.CompilerServices.TaskAwaiter <>u__2
    System::Runtime::CompilerServices::TaskAwaiter _get_$$u__2();
    // Set instance field: private System.Runtime.CompilerServices.TaskAwaiter <>u__2
    void _set_$$u__2(System::Runtime::CompilerServices::TaskAwaiter value);
    // private System.Void MoveNext()
    // Offset: 0xECF754
    void MoveNext();
    // private System.Void SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    // Offset: 0xECF75C
    void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);
  }; // OculusPlatformAdditionalContentModel/<OpenLevelProductStoreAsync>d__8
  // WARNING Not writing size check since size may be invalid!
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OculusPlatformAdditionalContentModel::$OpenLevelProductStoreAsync$d__8, "", "OculusPlatformAdditionalContentModel/<OpenLevelProductStoreAsync>d__8");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OculusPlatformAdditionalContentModel::$OpenLevelProductStoreAsync$d__8::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OculusPlatformAdditionalContentModel::$OpenLevelProductStoreAsync$d__8::*)()>(&GlobalNamespace::OculusPlatformAdditionalContentModel::$OpenLevelProductStoreAsync$d__8::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OculusPlatformAdditionalContentModel::$OpenLevelProductStoreAsync$d__8), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OculusPlatformAdditionalContentModel::$OpenLevelProductStoreAsync$d__8::SetStateMachine
// Il2CppName: SetStateMachine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OculusPlatformAdditionalContentModel::$OpenLevelProductStoreAsync$d__8::*)(System::Runtime::CompilerServices::IAsyncStateMachine*)>(&GlobalNamespace::OculusPlatformAdditionalContentModel::$OpenLevelProductStoreAsync$d__8::SetStateMachine)> {
  static const MethodInfo* get() {
    static auto* stateMachine = &::il2cpp_utils::GetClassFromName("System.Runtime.CompilerServices", "IAsyncStateMachine")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OculusPlatformAdditionalContentModel::$OpenLevelProductStoreAsync$d__8), "SetStateMachine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stateMachine});
  }
};
