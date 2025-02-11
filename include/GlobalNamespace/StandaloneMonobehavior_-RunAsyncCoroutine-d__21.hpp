// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: StandaloneMonobehavior
#include "GlobalNamespace/StandaloneMonobehavior.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
// Including type: System.Threading.CancellationToken
#include "System/Threading/CancellationToken.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: TaskCompletionSource`1<TResult>
  template<typename TResult>
  class TaskCompletionSource_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: StandaloneMonobehavior/<RunAsyncCoroutine>d__21
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class StandaloneMonobehavior::$RunAsyncCoroutine$d__21 : public ::Il2CppObject/*, public System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*/ {
    public:
    // private System.Int32 <>1__state
    // Size: 0x4
    // Offset: 0x10
    int $$1__state;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: $$1__state and: $$2__current
    char __padding0[0x4] = {};
    // private System.Object <>2__current
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppObject* $$2__current;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // public System.Threading.CancellationToken cancellationToken
    // Size: 0x8
    // Offset: 0x20
    System::Threading::CancellationToken cancellationToken;
    // Field size check
    static_assert(sizeof(System::Threading::CancellationToken) == 0x8);
    // public StandaloneMonobehavior <>4__this
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::StandaloneMonobehavior* $$4__this;
    // Field size check
    static_assert(sizeof(GlobalNamespace::StandaloneMonobehavior*) == 0x8);
    // public System.Threading.Tasks.TaskCompletionSource`1<System.Boolean> tcs
    // Size: 0x8
    // Offset: 0x30
    System::Threading::Tasks::TaskCompletionSource_1<bool>* tcs;
    // Field size check
    static_assert(sizeof(System::Threading::Tasks::TaskCompletionSource_1<bool>*) == 0x8);
    // Creating value type constructor for type: $RunAsyncCoroutine$d__21
    $RunAsyncCoroutine$d__21(int $$1__state_ = {}, ::Il2CppObject* $$2__current_ = {}, System::Threading::CancellationToken cancellationToken_ = {}, GlobalNamespace::StandaloneMonobehavior* $$4__this_ = {}, System::Threading::Tasks::TaskCompletionSource_1<bool>* tcs_ = {}) noexcept : $$1__state{$$1__state_}, $$2__current{$$2__current_}, cancellationToken{cancellationToken_}, $$4__this{$$4__this_}, tcs{tcs_} {}
    // Creating interface conversion operator: operator System::Collections::Generic::IEnumerator_1<::Il2CppObject*>
    operator System::Collections::Generic::IEnumerator_1<::Il2CppObject*>() noexcept {
      return *reinterpret_cast<System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*>(this);
    }
    // Get instance field: private System.Int32 <>1__state
    int _get_$$1__state();
    // Set instance field: private System.Int32 <>1__state
    void _set_$$1__state(int value);
    // Get instance field: private System.Object <>2__current
    ::Il2CppObject* _get_$$2__current();
    // Set instance field: private System.Object <>2__current
    void _set_$$2__current(::Il2CppObject* value);
    // Get instance field: public System.Threading.CancellationToken cancellationToken
    System::Threading::CancellationToken _get_cancellationToken();
    // Set instance field: public System.Threading.CancellationToken cancellationToken
    void _set_cancellationToken(System::Threading::CancellationToken value);
    // Get instance field: public StandaloneMonobehavior <>4__this
    GlobalNamespace::StandaloneMonobehavior* _get_$$4__this();
    // Set instance field: public StandaloneMonobehavior <>4__this
    void _set_$$4__this(GlobalNamespace::StandaloneMonobehavior* value);
    // Get instance field: public System.Threading.Tasks.TaskCompletionSource`1<System.Boolean> tcs
    System::Threading::Tasks::TaskCompletionSource_1<bool>* _get_tcs();
    // Set instance field: public System.Threading.Tasks.TaskCompletionSource`1<System.Boolean> tcs
    void _set_tcs(System::Threading::Tasks::TaskCompletionSource_1<bool>* value);
    // private System.Object System.Collections.Generic.IEnumerator<System.Object>.get_Current()
    // Offset: 0x23D3728
    ::Il2CppObject* System_Collections_Generic_IEnumerator$System_Object$_get_Current();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x23D3790
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
    // public System.Void .ctor(System.Int32 <>1__state)
    // Offset: 0x23D34E0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static StandaloneMonobehavior::$RunAsyncCoroutine$d__21* New_ctor(int $$1__state) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::StandaloneMonobehavior::$RunAsyncCoroutine$d__21::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<StandaloneMonobehavior::$RunAsyncCoroutine$d__21*, creationType>($$1__state)));
    }
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0x23D3644
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0x23D3648
    bool MoveNext();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0x23D3730
    void System_Collections_IEnumerator_Reset();
  }; // StandaloneMonobehavior/<RunAsyncCoroutine>d__21
  #pragma pack(pop)
  static check_size<sizeof(StandaloneMonobehavior::$RunAsyncCoroutine$d__21), 48 + sizeof(System::Threading::Tasks::TaskCompletionSource_1<bool>*)> __GlobalNamespace_StandaloneMonobehavior_$RunAsyncCoroutine$d__21SizeCheck;
  static_assert(sizeof(StandaloneMonobehavior::$RunAsyncCoroutine$d__21) == 0x38);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::StandaloneMonobehavior::$RunAsyncCoroutine$d__21*, "", "StandaloneMonobehavior/<RunAsyncCoroutine>d__21");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::StandaloneMonobehavior::$RunAsyncCoroutine$d__21::System_Collections_Generic_IEnumerator$System_Object$_get_Current
// Il2CppName: System.Collections.Generic.IEnumerator<System.Object>.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (GlobalNamespace::StandaloneMonobehavior::$RunAsyncCoroutine$d__21::*)()>(&GlobalNamespace::StandaloneMonobehavior::$RunAsyncCoroutine$d__21::System_Collections_Generic_IEnumerator$System_Object$_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StandaloneMonobehavior::$RunAsyncCoroutine$d__21*), "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StandaloneMonobehavior::$RunAsyncCoroutine$d__21::System_Collections_IEnumerator_get_Current
// Il2CppName: System.Collections.IEnumerator.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (GlobalNamespace::StandaloneMonobehavior::$RunAsyncCoroutine$d__21::*)()>(&GlobalNamespace::StandaloneMonobehavior::$RunAsyncCoroutine$d__21::System_Collections_IEnumerator_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StandaloneMonobehavior::$RunAsyncCoroutine$d__21*), "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StandaloneMonobehavior::$RunAsyncCoroutine$d__21::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::StandaloneMonobehavior::$RunAsyncCoroutine$d__21::System_IDisposable_Dispose
// Il2CppName: System.IDisposable.Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::StandaloneMonobehavior::$RunAsyncCoroutine$d__21::*)()>(&GlobalNamespace::StandaloneMonobehavior::$RunAsyncCoroutine$d__21::System_IDisposable_Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StandaloneMonobehavior::$RunAsyncCoroutine$d__21*), "System.IDisposable.Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StandaloneMonobehavior::$RunAsyncCoroutine$d__21::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::StandaloneMonobehavior::$RunAsyncCoroutine$d__21::*)()>(&GlobalNamespace::StandaloneMonobehavior::$RunAsyncCoroutine$d__21::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StandaloneMonobehavior::$RunAsyncCoroutine$d__21*), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StandaloneMonobehavior::$RunAsyncCoroutine$d__21::System_Collections_IEnumerator_Reset
// Il2CppName: System.Collections.IEnumerator.Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::StandaloneMonobehavior::$RunAsyncCoroutine$d__21::*)()>(&GlobalNamespace::StandaloneMonobehavior::$RunAsyncCoroutine$d__21::System_Collections_IEnumerator_Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StandaloneMonobehavior::$RunAsyncCoroutine$d__21*), "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
