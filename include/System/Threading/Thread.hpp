// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// WARNING Layout: Sequential may not be correctly taken into account!
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Runtime.ConstrainedExecution.CriticalFinalizerObject
#include "System/Runtime/ConstrainedExecution/CriticalFinalizerObject.hpp"
// Including type: System.Runtime.InteropServices._Thread
#include "System/Runtime/InteropServices/_Thread.hpp"
// Including type: System.Threading.ExecutionContext
#include "System/Threading/ExecutionContext.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: InternalThread
  class InternalThread;
  // Forward declaring type: ThreadPriority
  struct ThreadPriority;
  // Forward declaring type: AsyncLocal`1<T>
  template<typename T>
  class AsyncLocal_1;
  // Forward declaring type: ThreadStart
  class ThreadStart;
  // Forward declaring type: ParameterizedThreadStart
  class ParameterizedThreadStart;
  // Forward declaring type: StackCrawlMark
  struct StackCrawlMark;
  // Forward declaring type: ThreadState
  struct ThreadState;
}
// Forward declaring namespace: System::Security::Principal
namespace System::Security::Principal {
  // Forward declaring type: IPrincipal
  class IPrincipal;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: MulticastDelegate
  class MulticastDelegate;
  // Forward declaring type: LocalDataStoreMgr
  class LocalDataStoreMgr;
  // Forward declaring type: LocalDataStoreHolder
  class LocalDataStoreHolder;
  // Forward declaring type: Delegate
  class Delegate;
  // Forward declaring type: AppDomain
  class AppDomain;
  // Forward declaring type: IntPtr
  struct IntPtr;
}
// Forward declaring namespace: System::Globalization
namespace System::Globalization {
  // Forward declaring type: CultureInfo
  class CultureInfo;
}
// Forward declaring namespace: System::Runtime::Remoting::Contexts
namespace System::Runtime::Remoting::Contexts {
  // Forward declaring type: Context
  class Context;
}
// Completed forward declares
// Type namespace: System.Threading
namespace System::Threading {
  // Size: 0x49
  // Autogenerated type: System.Threading.Thread
  // [] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: D39B4C
  // [ComDefaultInterfaceAttribute] Offset: D39B4C
  // [ClassInterfaceAttribute] Offset: D39B4C
  class Thread : public System::Runtime::ConstrainedExecution::CriticalFinalizerObject/*, public System::Runtime::InteropServices::_Thread*/ {
    public:
    // private System.Threading.InternalThread internal_thread
    // Size: 0x8
    // Offset: 0x10
    System::Threading::InternalThread* internal_thread;
    // Field size check
    static_assert(sizeof(System::Threading::InternalThread*) == 0x8);
    // private System.Object m_ThreadStartArg
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppObject* m_ThreadStartArg;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // private System.Object pending_exception
    // Size: 0x8
    // Offset: 0x20
    ::Il2CppObject* pending_exception;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // private System.Security.Principal.IPrincipal principal
    // Size: 0x8
    // Offset: 0x28
    System::Security::Principal::IPrincipal* principal;
    // Field size check
    static_assert(sizeof(System::Security::Principal::IPrincipal*) == 0x8);
    // private System.Int32 principal_version
    // Size: 0x4
    // Offset: 0x30
    int principal_version;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: principal_version and: m_Delegate
    char __padding4[0x4] = {};
    // private System.MulticastDelegate m_Delegate
    // Size: 0x8
    // Offset: 0x38
    System::MulticastDelegate* m_Delegate;
    // Field size check
    static_assert(sizeof(System::MulticastDelegate*) == 0x8);
    // private System.Threading.ExecutionContext m_ExecutionContext
    // Size: 0x8
    // Offset: 0x40
    System::Threading::ExecutionContext* m_ExecutionContext;
    // Field size check
    static_assert(sizeof(System::Threading::ExecutionContext*) == 0x8);
    // private System.Boolean m_ExecutionContextBelongsToOuterScope
    // Size: 0x1
    // Offset: 0x48
    bool m_ExecutionContextBelongsToOuterScope;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: Thread
    Thread(System::Threading::InternalThread* internal_thread_ = {}, ::Il2CppObject* m_ThreadStartArg_ = {}, ::Il2CppObject* pending_exception_ = {}, System::Security::Principal::IPrincipal* principal_ = {}, int principal_version_ = {}, System::MulticastDelegate* m_Delegate_ = {}, System::Threading::ExecutionContext* m_ExecutionContext_ = {}, bool m_ExecutionContextBelongsToOuterScope_ = {}) noexcept : internal_thread{internal_thread_}, m_ThreadStartArg{m_ThreadStartArg_}, pending_exception{pending_exception_}, principal{principal_}, principal_version{principal_version_}, m_Delegate{m_Delegate_}, m_ExecutionContext{m_ExecutionContext_}, m_ExecutionContextBelongsToOuterScope{m_ExecutionContextBelongsToOuterScope_} {}
    // Creating interface conversion operator: operator System::Runtime::InteropServices::_Thread
    operator System::Runtime::InteropServices::_Thread() noexcept {
      return *reinterpret_cast<System::Runtime::InteropServices::_Thread*>(this);
    }
    // Get static field: static private System.LocalDataStoreMgr s_LocalDataStoreMgr
    static System::LocalDataStoreMgr* _get_s_LocalDataStoreMgr();
    // Set static field: static private System.LocalDataStoreMgr s_LocalDataStoreMgr
    static void _set_s_LocalDataStoreMgr(System::LocalDataStoreMgr* value);
    // [ThreadStaticAttribute] Offset: 0xD3ED5C
    // Get static field: static private System.LocalDataStoreHolder s_LocalDataStore
    static System::LocalDataStoreHolder* _get_s_LocalDataStore();
    // Set static field: static private System.LocalDataStoreHolder s_LocalDataStore
    static void _set_s_LocalDataStore(System::LocalDataStoreHolder* value);
    // [ThreadStaticAttribute] Offset: 0xD3ED6C
    // Get static field: static System.Globalization.CultureInfo m_CurrentCulture
    static System::Globalization::CultureInfo* _get_m_CurrentCulture();
    // Set static field: static System.Globalization.CultureInfo m_CurrentCulture
    static void _set_m_CurrentCulture(System::Globalization::CultureInfo* value);
    // [ThreadStaticAttribute] Offset: 0xD3ED7C
    // Get static field: static System.Globalization.CultureInfo m_CurrentUICulture
    static System::Globalization::CultureInfo* _get_m_CurrentUICulture();
    // Set static field: static System.Globalization.CultureInfo m_CurrentUICulture
    static void _set_m_CurrentUICulture(System::Globalization::CultureInfo* value);
    // Get static field: static private System.Threading.AsyncLocal`1<System.Globalization.CultureInfo> s_asyncLocalCurrentCulture
    static System::Threading::AsyncLocal_1<System::Globalization::CultureInfo*>* _get_s_asyncLocalCurrentCulture();
    // Set static field: static private System.Threading.AsyncLocal`1<System.Globalization.CultureInfo> s_asyncLocalCurrentCulture
    static void _set_s_asyncLocalCurrentCulture(System::Threading::AsyncLocal_1<System::Globalization::CultureInfo*>* value);
    // Get static field: static private System.Threading.AsyncLocal`1<System.Globalization.CultureInfo> s_asyncLocalCurrentUICulture
    static System::Threading::AsyncLocal_1<System::Globalization::CultureInfo*>* _get_s_asyncLocalCurrentUICulture();
    // Set static field: static private System.Threading.AsyncLocal`1<System.Globalization.CultureInfo> s_asyncLocalCurrentUICulture
    static void _set_s_asyncLocalCurrentUICulture(System::Threading::AsyncLocal_1<System::Globalization::CultureInfo*>* value);
    // [ThreadStaticAttribute] Offset: 0xD3ED8C
    // Get static field: static private System.Threading.Thread current_thread
    static System::Threading::Thread* _get_current_thread();
    // Set static field: static private System.Threading.Thread current_thread
    static void _set_current_thread(System::Threading::Thread* value);
    // public System.Void .ctor(System.Threading.ThreadStart start)
    // Offset: 0x1D1A27C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Thread* New_ctor(System::Threading::ThreadStart* start) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Threading::Thread::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Thread*, creationType>(start)));
    }
    // public System.Void .ctor(System.Threading.ParameterizedThreadStart start)
    // Offset: 0x1D19DEC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Thread* New_ctor(System::Threading::ParameterizedThreadStart* start) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Threading::Thread::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Thread*, creationType>(start)));
    }
    // public System.Void Start()
    // Offset: 0x1D1A41C
    void Start();
    // public System.Void Start(System.Object parameter)
    // Offset: 0x1D19EDC
    void Start(::Il2CppObject* parameter);
    // private System.Void Start(ref System.Threading.StackCrawlMark stackMark)
    // Offset: 0x1D1A444
    void Start(System::Threading::StackCrawlMark& stackMark);
    // System.Threading.ExecutionContext/Reader GetExecutionContextReader()
    // Offset: 0x1D0D5D8
    System::Threading::ExecutionContext::Reader GetExecutionContextReader();
    // System.Boolean get_ExecutionContextBelongsToCurrentScope()
    // Offset: 0x1D1A5CC
    bool get_ExecutionContextBelongsToCurrentScope();
    // System.Void set_ExecutionContextBelongsToCurrentScope(System.Boolean value)
    // Offset: 0x1D1A5DC
    void set_ExecutionContextBelongsToCurrentScope(bool value);
    // System.Threading.ExecutionContext GetMutableExecutionContext()
    // Offset: 0x1D0D4D4
    System::Threading::ExecutionContext* GetMutableExecutionContext();
    // System.Void SetExecutionContext(System.Threading.ExecutionContext value, System.Boolean belongsToCurrentScope)
    // Offset: 0x1D1A5EC
    void SetExecutionContext(System::Threading::ExecutionContext* value, bool belongsToCurrentScope);
    // System.Void SetExecutionContext(System.Threading.ExecutionContext/Reader value, System.Boolean belongsToCurrentScope)
    // Offset: 0x1D1A624
    void SetExecutionContext(System::Threading::ExecutionContext::Reader value, bool belongsToCurrentScope);
    // static public System.Void ResetAbort()
    // Offset: 0x1D1A65C
    static void ResetAbort();
    // private System.Void ResetAbortNative()
    // Offset: 0x1D1A734
    void ResetAbortNative();
    // public System.Void set_Priority(System.Threading.ThreadPriority value)
    // Offset: 0x1D1A73C
    void set_Priority(System::Threading::ThreadPriority value);
    // private System.Void SetPriorityNative(System.Int32 priority)
    // Offset: 0x1D1A740
    void SetPriorityNative(int priority);
    // private System.Boolean JoinInternal(System.Int32 millisecondsTimeout)
    // Offset: 0x1D1A744
    bool JoinInternal(int millisecondsTimeout);
    // public System.Void Join()
    // Offset: 0x1D1A748
    void Join();
    // static private System.Void SleepInternal(System.Int32 millisecondsTimeout)
    // Offset: 0x1D1A750
    static void SleepInternal(int millisecondsTimeout);
    // static public System.Void Sleep(System.Int32 millisecondsTimeout)
    // Offset: 0x1D0CFE0
    static void Sleep(int millisecondsTimeout);
    // static private System.Boolean YieldInternal()
    // Offset: 0x1D1A754
    static bool YieldInternal();
    // static public System.Boolean Yield()
    // Offset: 0x1D0D088
    static bool Yield();
    // private System.Void SetStartHelper(System.Delegate start, System.Int32 maxStackSize)
    // Offset: 0x1D1A320
    void SetStartHelper(System::Delegate* start, int maxStackSize);
    // public System.Globalization.CultureInfo get_CurrentUICulture()
    // Offset: 0x1D1A8B4
    System::Globalization::CultureInfo* get_CurrentUICulture();
    // System.Globalization.CultureInfo GetCurrentUICultureNoAppX()
    // Offset: 0x1D1A8B8
    System::Globalization::CultureInfo* GetCurrentUICultureNoAppX();
    // public System.Globalization.CultureInfo get_CurrentCulture()
    // Offset: 0x1D1A970
    System::Globalization::CultureInfo* get_CurrentCulture();
    // private System.Globalization.CultureInfo GetCurrentCultureNoAppX()
    // Offset: 0x1D1A974
    System::Globalization::CultureInfo* GetCurrentCultureNoAppX();
    // static public System.Void MemoryBarrier()
    // Offset: 0x1D1AA2C
    static void MemoryBarrier();
    // private System.Void ConstructInternalThread()
    // Offset: 0x1D1AA30
    void ConstructInternalThread();
    // private System.Threading.InternalThread get_Internal()
    // Offset: 0x1D1AA34
    System::Threading::InternalThread* get_Internal();
    // static public System.Runtime.Remoting.Contexts.Context get_CurrentContext()
    // Offset: 0x1D1AA64
    static System::Runtime::Remoting::Contexts::Context* get_CurrentContext();
    // static private System.Byte[] ByteArrayToCurrentDomain(System.Byte[] arr)
    // Offset: 0x1D1AA6C
    static ::Array<uint8_t>* ByteArrayToCurrentDomain(::Array<uint8_t>* arr);
    // static private System.Void DeserializePrincipal(System.Threading.Thread th)
    // Offset: 0x1D1AA70
    static void DeserializePrincipal(System::Threading::Thread* th);
    // static public System.Security.Principal.IPrincipal get_CurrentPrincipal()
    // Offset: 0x1D1ADF4
    static System::Security::Principal::IPrincipal* get_CurrentPrincipal();
    // static private System.Threading.Thread GetCurrentThread()
    // Offset: 0x1D1AF74
    static System::Threading::Thread* GetCurrentThread();
    // static public System.Threading.Thread get_CurrentThread()
    // Offset: 0x1D0D08C
    static System::Threading::Thread* get_CurrentThread();
    // static System.Int32 get_CurrentThreadId()
    // Offset: 0x1D1AF78
    static int get_CurrentThreadId();
    // static public System.AppDomain GetDomain()
    // Offset: 0x1D1AF6C
    static System::AppDomain* GetDomain();
    // static public System.Int32 GetDomainID()
    // Offset: 0x1D1AFA0
    static int GetDomainID();
    // private System.IntPtr Thread_internal(System.MulticastDelegate start)
    // Offset: 0x1D1AFA4
    System::IntPtr Thread_internal(System::MulticastDelegate* start);
    // public System.Boolean get_IsThreadPoolThread()
    // Offset: 0x1D195E0
    bool get_IsThreadPoolThread();
    // System.Boolean get_IsThreadPoolThreadInternal()
    // Offset: 0x1D1AFB0
    bool get_IsThreadPoolThreadInternal();
    // public System.Void set_IsBackground(System.Boolean value)
    // Offset: 0x1D19E90
    void set_IsBackground(bool value);
    // static private System.Void SetName_internal(System.Threading.InternalThread thread, System.String name)
    // Offset: 0x1D1B084
    static void SetName_internal(System::Threading::InternalThread* thread, ::Il2CppString* name);
    // public System.Void set_Name(System.String value)
    // Offset: 0x1D1B088
    void set_Name(::Il2CppString* value);
    // public System.Threading.ThreadState get_ThreadState()
    // Offset: 0x1D14B58
    System::Threading::ThreadState get_ThreadState();
    // static private System.Void Abort_internal(System.Threading.InternalThread thread, System.Object stateInfo)
    // Offset: 0x1D1B0C4
    static void Abort_internal(System::Threading::InternalThread* thread, ::Il2CppObject* stateInfo);
    // public System.Void Abort()
    // Offset: 0x1D1B0C8
    void Abort();
    // private System.Void ClearAbortReason()
    // Offset: 0x1D1A738
    void ClearAbortReason();
    // static private System.Void SpinWait_nop()
    // Offset: 0x1D1B0FC
    static void SpinWait_nop();
    // static public System.Void SpinWait(System.Int32 iterations)
    // Offset: 0x1D0CFAC
    static void SpinWait(int iterations);
    // private System.Void StartInternal(System.Security.Principal.IPrincipal principal, ref System.Threading.StackCrawlMark stackMark)
    // Offset: 0x1D1A528
    void StartInternal(System::Security::Principal::IPrincipal* principal, System::Threading::StackCrawlMark& stackMark);
    // static private System.Void SetState(System.Threading.InternalThread thread, System.Threading.ThreadState set)
    // Offset: 0x1D1B07C
    static void SetState(System::Threading::InternalThread* thread, System::Threading::ThreadState set);
    // static private System.Void ClrState(System.Threading.InternalThread thread, System.Threading.ThreadState clr)
    // Offset: 0x1D1B080
    static void ClrState(System::Threading::InternalThread* thread, System::Threading::ThreadState clr);
    // static private System.Threading.ThreadState GetState(System.Threading.InternalThread thread)
    // Offset: 0x1D1B0C0
    static System::Threading::ThreadState GetState(System::Threading::InternalThread* thread);
    // static private System.Int32 SystemMaxStackStize()
    // Offset: 0x1D1B100
    static int SystemMaxStackStize();
    // static private System.Int32 GetProcessDefaultStackSize(System.Int32 maxStackSize)
    // Offset: 0x1D1A758
    static int GetProcessDefaultStackSize(int maxStackSize);
    // private System.Void SetStart(System.MulticastDelegate start, System.Int32 maxStackSize)
    // Offset: 0x1D1A85C
    void SetStart(System::MulticastDelegate* start, int maxStackSize);
    // public System.Int32 get_ManagedThreadId()
    // Offset: 0x1D0D0E4
    int get_ManagedThreadId();
    // static public System.Void BeginCriticalRegion()
    // Offset: 0x1D0C80C
    static void BeginCriticalRegion();
    // static public System.Void EndCriticalRegion()
    // Offset: 0x1D0CD6C
    static void EndCriticalRegion();
    // private System.Threading.ThreadState ValidateThreadState()
    // Offset: 0x1D1AFE8
    System::Threading::ThreadState ValidateThreadState();
    // protected override System.Void Finalize()
    // Offset: 0x1D1AFA8
    // Implemented from: System.Runtime.ConstrainedExecution.CriticalFinalizerObject
    // Base method: System.Void CriticalFinalizerObject::Finalize()
    void Finalize();
    // public override System.Int32 GetHashCode()
    // Offset: 0x1D1B104
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
  }; // System.Threading.Thread
  static check_size<sizeof(Thread), 72 + sizeof(bool)> __System_Threading_ThreadSizeCheck;
  static_assert(sizeof(Thread) == 0x49);
}
DEFINE_IL2CPP_ARG_TYPE(System::Threading::Thread*, "System.Threading", "Thread");
#pragma pack(pop)
