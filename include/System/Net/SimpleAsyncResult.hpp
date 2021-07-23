// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
// Including type: System.Nullable`1
#include "System/Nullable_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: SimpleAsyncCallback
  class SimpleAsyncCallback;
}
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: ManualResetEvent
  class ManualResetEvent;
  // Forward declaring type: WaitHandle
  class WaitHandle;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Exception
  class Exception;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
}
// Completed forward declares
// Type namespace: System.Net
namespace System::Net {
  // WARNING Size may be invalid!
  // Autogenerated type: System.Net.SimpleAsyncResult
  // [TokenAttribute] Offset: FFFFFFFF
  class SimpleAsyncResult : public ::Il2CppObject/*, public System::IAsyncResult*/ {
    public:
    // Nested type: System::Net::SimpleAsyncResult::$$c__DisplayClass9_0
    class $$c__DisplayClass9_0;
    // Nested type: System::Net::SimpleAsyncResult::$$c__DisplayClass11_0
    class $$c__DisplayClass11_0;
    // private System.Threading.ManualResetEvent handle
    // Size: 0x8
    // Offset: 0x10
    System::Threading::ManualResetEvent* handle;
    // Field size check
    static_assert(sizeof(System::Threading::ManualResetEvent*) == 0x8);
    // private System.Boolean synch
    // Size: 0x1
    // Offset: 0x18
    bool synch;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean isCompleted
    // Size: 0x1
    // Offset: 0x19
    bool isCompleted;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private readonly System.Net.SimpleAsyncCallback cb
    // Size: 0x8
    // Offset: 0x20
    System::Net::SimpleAsyncCallback* cb;
    // Field size check
    static_assert(sizeof(System::Net::SimpleAsyncCallback*) == 0x8);
    // private System.Object state
    // Size: 0x8
    // Offset: 0x28
    ::Il2CppObject* state;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // private System.Boolean callbackDone
    // Size: 0x1
    // Offset: 0x30
    bool callbackDone;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Exception exc
    // Size: 0x8
    // Offset: 0x38
    System::Exception* exc;
    // Field size check
    static_assert(sizeof(System::Exception*) == 0x8);
    // private System.Object locker
    // Size: 0x8
    // Offset: 0x40
    ::Il2CppObject* locker;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // private System.Nullable`1<System.Boolean> user_read_synch
    // Size: 0xFFFFFFFF
    // Offset: 0x48
    System::Nullable_1<bool> user_read_synch;
    // Creating value type constructor for type: SimpleAsyncResult
    SimpleAsyncResult(System::Threading::ManualResetEvent* handle_ = {}, bool synch_ = {}, bool isCompleted_ = {}, System::Net::SimpleAsyncCallback* cb_ = {}, ::Il2CppObject* state_ = {}, bool callbackDone_ = {}, System::Exception* exc_ = {}, ::Il2CppObject* locker_ = {}, System::Nullable_1<bool> user_read_synch_ = {}) noexcept : handle{handle_}, synch{synch_}, isCompleted{isCompleted_}, cb{cb_}, state{state_}, callbackDone{callbackDone_}, exc{exc_}, locker{locker_}, user_read_synch{user_read_synch_} {}
    // Creating interface conversion operator: operator System::IAsyncResult
    operator System::IAsyncResult() noexcept {
      return *reinterpret_cast<System::IAsyncResult*>(this);
    }
    // Get instance field: private System.Threading.ManualResetEvent handle
    System::Threading::ManualResetEvent* _get_handle();
    // Set instance field: private System.Threading.ManualResetEvent handle
    void _set_handle(System::Threading::ManualResetEvent* value);
    // Get instance field: private System.Boolean synch
    bool _get_synch();
    // Set instance field: private System.Boolean synch
    void _set_synch(bool value);
    // Get instance field: private System.Boolean isCompleted
    bool _get_isCompleted();
    // Set instance field: private System.Boolean isCompleted
    void _set_isCompleted(bool value);
    // Get instance field: private readonly System.Net.SimpleAsyncCallback cb
    System::Net::SimpleAsyncCallback* _get_cb();
    // Set instance field: private readonly System.Net.SimpleAsyncCallback cb
    void _set_cb(System::Net::SimpleAsyncCallback* value);
    // Get instance field: private System.Object state
    ::Il2CppObject* _get_state();
    // Set instance field: private System.Object state
    void _set_state(::Il2CppObject* value);
    // Get instance field: private System.Boolean callbackDone
    bool _get_callbackDone();
    // Set instance field: private System.Boolean callbackDone
    void _set_callbackDone(bool value);
    // Get instance field: private System.Exception exc
    System::Exception* _get_exc();
    // Set instance field: private System.Exception exc
    void _set_exc(System::Exception* value);
    // Get instance field: private System.Object locker
    ::Il2CppObject* _get_locker();
    // Set instance field: private System.Object locker
    void _set_locker(::Il2CppObject* value);
    // Get instance field: private System.Nullable`1<System.Boolean> user_read_synch
    System::Nullable_1<bool> _get_user_read_synch();
    // Set instance field: private System.Nullable`1<System.Boolean> user_read_synch
    void _set_user_read_synch(System::Nullable_1<bool> value);
    // public System.Object get_AsyncState()
    // Offset: 0x146CFB4
    ::Il2CppObject* get_AsyncState();
    // public System.Threading.WaitHandle get_AsyncWaitHandle()
    // Offset: 0x146CE5C
    System::Threading::WaitHandle* get_AsyncWaitHandle();
    // public System.Boolean get_CompletedSynchronously()
    // Offset: 0x146CFBC
    bool get_CompletedSynchronously();
    // System.Boolean get_CompletedSynchronouslyPeek()
    // Offset: 0x146D06C
    bool get_CompletedSynchronouslyPeek();
    // public System.Boolean get_IsCompleted()
    // Offset: 0x146CDC8
    bool get_IsCompleted();
    // System.Boolean get_GotException()
    // Offset: 0x146D074
    bool get_GotException();
    // System.Exception get_Exception()
    // Offset: 0x146D084
    System::Exception* get_Exception();
    // private System.Void .ctor(System.Net.SimpleAsyncCallback cb)
    // Offset: 0x146C7BC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SimpleAsyncResult* New_ctor(System::Net::SimpleAsyncCallback* cb) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::SimpleAsyncResult::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SimpleAsyncResult*, creationType>(cb)));
    }
    // protected System.Void .ctor(System.AsyncCallback cb, System.Object state)
    // Offset: 0x146C838
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SimpleAsyncResult* New_ctor(System::AsyncCallback* cb, ::Il2CppObject* state) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::SimpleAsyncResult::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SimpleAsyncResult*, creationType>(cb, state)));
    }
    // static public System.Void Run(System.Func`2<System.Net.SimpleAsyncResult,System.Boolean> func, System.Net.SimpleAsyncCallback callback)
    // Offset: 0x146C918
    static void Run(System::Func_2<System::Net::SimpleAsyncResult*, bool>* func, System::Net::SimpleAsyncCallback* callback);
    // static public System.Void RunWithLock(System.Object locker, System.Func`2<System.Net.SimpleAsyncResult,System.Boolean> func, System.Net.SimpleAsyncCallback callback)
    // Offset: 0x146CAEC
    static void RunWithLock(::Il2CppObject* locker, System::Func_2<System::Net::SimpleAsyncResult*, bool>* func, System::Net::SimpleAsyncCallback* callback);
    // protected System.Void Reset_internal()
    // Offset: 0x146CBD4
    void Reset_internal();
    // System.Void SetCompleted(System.Boolean synch, System.Exception e)
    // Offset: 0x146CAA0
    void SetCompleted(bool synch, System::Exception* e);
    // System.Void SetCompleted(System.Boolean synch)
    // Offset: 0x146CA50
    void SetCompleted(bool synch);
    // private System.Void SetCompleted_internal(System.Boolean synch, System.Exception e)
    // Offset: 0x146CC7C
    void SetCompleted_internal(bool synch, System::Exception* e);
    // protected System.Void SetCompleted_internal(System.Boolean synch)
    // Offset: 0x146CD50
    void SetCompleted_internal(bool synch);
    // private System.Void DoCallback_private()
    // Offset: 0x146CD2C
    void DoCallback_private();
    // protected System.Void DoCallback_internal()
    // Offset: 0x146CD5C
    void DoCallback_internal();
    // System.Void WaitUntilComplete()
    // Offset: 0x146CD80
    void WaitUntilComplete();
    // System.Boolean WaitUntilComplete(System.Int32 timeout, System.Boolean exitContext)
    // Offset: 0x146CF4C
    bool WaitUntilComplete(int timeout, bool exitContext);
  }; // System.Net.SimpleAsyncResult
  // WARNING Not writing size check since size may be invalid!
}
DEFINE_IL2CPP_ARG_TYPE(System::Net::SimpleAsyncResult*, "System.Net", "SimpleAsyncResult");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::SimpleAsyncResult::get_AsyncState
// Il2CppName: get_AsyncState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Net::SimpleAsyncResult::*)()>(&System::Net::SimpleAsyncResult::get_AsyncState)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::SimpleAsyncResult*), "get_AsyncState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::SimpleAsyncResult::get_AsyncWaitHandle
// Il2CppName: get_AsyncWaitHandle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::WaitHandle* (System::Net::SimpleAsyncResult::*)()>(&System::Net::SimpleAsyncResult::get_AsyncWaitHandle)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::SimpleAsyncResult*), "get_AsyncWaitHandle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::SimpleAsyncResult::get_CompletedSynchronously
// Il2CppName: get_CompletedSynchronously
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::SimpleAsyncResult::*)()>(&System::Net::SimpleAsyncResult::get_CompletedSynchronously)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::SimpleAsyncResult*), "get_CompletedSynchronously", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::SimpleAsyncResult::get_CompletedSynchronouslyPeek
// Il2CppName: get_CompletedSynchronouslyPeek
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::SimpleAsyncResult::*)()>(&System::Net::SimpleAsyncResult::get_CompletedSynchronouslyPeek)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::SimpleAsyncResult*), "get_CompletedSynchronouslyPeek", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::SimpleAsyncResult::get_IsCompleted
// Il2CppName: get_IsCompleted
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::SimpleAsyncResult::*)()>(&System::Net::SimpleAsyncResult::get_IsCompleted)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::SimpleAsyncResult*), "get_IsCompleted", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::SimpleAsyncResult::get_GotException
// Il2CppName: get_GotException
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::SimpleAsyncResult::*)()>(&System::Net::SimpleAsyncResult::get_GotException)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::SimpleAsyncResult*), "get_GotException", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::SimpleAsyncResult::get_Exception
// Il2CppName: get_Exception
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Exception* (System::Net::SimpleAsyncResult::*)()>(&System::Net::SimpleAsyncResult::get_Exception)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::SimpleAsyncResult*), "get_Exception", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::SimpleAsyncResult::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::SimpleAsyncResult::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::SimpleAsyncResult::Run
// Il2CppName: Run
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::Func_2<System::Net::SimpleAsyncResult*, bool>*, System::Net::SimpleAsyncCallback*)>(&System::Net::SimpleAsyncResult::Run)> {
  static const MethodInfo* get() {
    static auto* func = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Func`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System.Net", "SimpleAsyncResult"), ::il2cpp_utils::GetClassFromName("System", "Boolean")})->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System.Net", "SimpleAsyncCallback")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::SimpleAsyncResult*), "Run", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{func, callback});
  }
};
// Writing MetadataGetter for method: System::Net::SimpleAsyncResult::RunWithLock
// Il2CppName: RunWithLock
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Il2CppObject*, System::Func_2<System::Net::SimpleAsyncResult*, bool>*, System::Net::SimpleAsyncCallback*)>(&System::Net::SimpleAsyncResult::RunWithLock)> {
  static const MethodInfo* get() {
    static auto* locker = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* func = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Func`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System.Net", "SimpleAsyncResult"), ::il2cpp_utils::GetClassFromName("System", "Boolean")})->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System.Net", "SimpleAsyncCallback")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::SimpleAsyncResult*), "RunWithLock", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{locker, func, callback});
  }
};
// Writing MetadataGetter for method: System::Net::SimpleAsyncResult::Reset_internal
// Il2CppName: Reset_internal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::SimpleAsyncResult::*)()>(&System::Net::SimpleAsyncResult::Reset_internal)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::SimpleAsyncResult*), "Reset_internal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::SimpleAsyncResult::SetCompleted
// Il2CppName: SetCompleted
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::SimpleAsyncResult::*)(bool, System::Exception*)>(&System::Net::SimpleAsyncResult::SetCompleted)> {
  static const MethodInfo* get() {
    static auto* synch = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* e = &::il2cpp_utils::GetClassFromName("System", "Exception")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::SimpleAsyncResult*), "SetCompleted", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{synch, e});
  }
};
// Writing MetadataGetter for method: System::Net::SimpleAsyncResult::SetCompleted
// Il2CppName: SetCompleted
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::SimpleAsyncResult::*)(bool)>(&System::Net::SimpleAsyncResult::SetCompleted)> {
  static const MethodInfo* get() {
    static auto* synch = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::SimpleAsyncResult*), "SetCompleted", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{synch});
  }
};
// Writing MetadataGetter for method: System::Net::SimpleAsyncResult::SetCompleted_internal
// Il2CppName: SetCompleted_internal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::SimpleAsyncResult::*)(bool, System::Exception*)>(&System::Net::SimpleAsyncResult::SetCompleted_internal)> {
  static const MethodInfo* get() {
    static auto* synch = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* e = &::il2cpp_utils::GetClassFromName("System", "Exception")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::SimpleAsyncResult*), "SetCompleted_internal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{synch, e});
  }
};
// Writing MetadataGetter for method: System::Net::SimpleAsyncResult::SetCompleted_internal
// Il2CppName: SetCompleted_internal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::SimpleAsyncResult::*)(bool)>(&System::Net::SimpleAsyncResult::SetCompleted_internal)> {
  static const MethodInfo* get() {
    static auto* synch = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::SimpleAsyncResult*), "SetCompleted_internal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{synch});
  }
};
// Writing MetadataGetter for method: System::Net::SimpleAsyncResult::DoCallback_private
// Il2CppName: DoCallback_private
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::SimpleAsyncResult::*)()>(&System::Net::SimpleAsyncResult::DoCallback_private)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::SimpleAsyncResult*), "DoCallback_private", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::SimpleAsyncResult::DoCallback_internal
// Il2CppName: DoCallback_internal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::SimpleAsyncResult::*)()>(&System::Net::SimpleAsyncResult::DoCallback_internal)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::SimpleAsyncResult*), "DoCallback_internal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::SimpleAsyncResult::WaitUntilComplete
// Il2CppName: WaitUntilComplete
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::SimpleAsyncResult::*)()>(&System::Net::SimpleAsyncResult::WaitUntilComplete)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::SimpleAsyncResult*), "WaitUntilComplete", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::SimpleAsyncResult::WaitUntilComplete
// Il2CppName: WaitUntilComplete
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::SimpleAsyncResult::*)(int, bool)>(&System::Net::SimpleAsyncResult::WaitUntilComplete)> {
  static const MethodInfo* get() {
    static auto* timeout = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* exitContext = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::SimpleAsyncResult*), "WaitUntilComplete", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{timeout, exitContext});
  }
};
