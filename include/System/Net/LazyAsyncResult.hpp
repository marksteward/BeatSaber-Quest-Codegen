// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net
namespace System::Net {
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
  // Forward declaring type: IntPtr
  struct IntPtr;
}
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: ManualResetEvent
  class ManualResetEvent;
  // Forward declaring type: WaitHandle
  class WaitHandle;
}
// Completed forward declares
// Type namespace: System.Net
namespace System::Net {
  // Autogenerated type: System.Net.LazyAsyncResult
  class LazyAsyncResult : public ::Il2CppObject/*, public System::IAsyncResult*/ {
    public:
    // Nested type: System::Net::LazyAsyncResult::ThreadContext
    class ThreadContext;
    // private System.Object m_AsyncObject
    // Offset: 0x10
    ::Il2CppObject* m_AsyncObject;
    // private System.Object m_AsyncState
    // Offset: 0x18
    ::Il2CppObject* m_AsyncState;
    // private System.AsyncCallback m_AsyncCallback
    // Offset: 0x20
    System::AsyncCallback* m_AsyncCallback;
    // private System.Object m_Result
    // Offset: 0x28
    ::Il2CppObject* m_Result;
    // private System.Int32 m_IntCompleted
    // Offset: 0x30
    int m_IntCompleted;
    // private System.Boolean m_UserEvent
    // Offset: 0x34
    bool m_UserEvent;
    // private System.Object m_Event
    // Offset: 0x38
    ::Il2CppObject* m_Event;
    // Creating interface conversion operator: operator System::IAsyncResult
    operator System::IAsyncResult() noexcept {
      return *reinterpret_cast<System::IAsyncResult*>(this);
    }
    // Get static field: static private System.Net.LazyAsyncResult/ThreadContext t_ThreadContext
    static System::Net::LazyAsyncResult::ThreadContext* _get_t_ThreadContext();
    // Set static field: static private System.Net.LazyAsyncResult/ThreadContext t_ThreadContext
    static void _set_t_ThreadContext(System::Net::LazyAsyncResult::ThreadContext* value);
    // static private System.Net.LazyAsyncResult/ThreadContext get_CurrentThreadContext()
    // Offset: 0x124888C
    static System::Net::LazyAsyncResult::ThreadContext* get_CurrentThreadContext();
    // System.Void .ctor(System.Object myObject, System.Object myState, System.AsyncCallback myCallBack)
    // Offset: 0x124891C
    static LazyAsyncResult* New_ctor(::Il2CppObject* myObject, ::Il2CppObject* myState, System::AsyncCallback* myCallBack);
    // System.Object get_AsyncObject()
    // Offset: 0x12489E8
    ::Il2CppObject* get_AsyncObject();
    // private System.Boolean LazilyCreateEvent(out System.Threading.ManualResetEvent waitHandle)
    // Offset: 0x1248AAC
    bool LazilyCreateEvent(System::Threading::ManualResetEvent*& waitHandle);
    // System.Boolean get_InternalPeekCompleted()
    // Offset: 0x1248C90
    bool get_InternalPeekCompleted();
    // protected System.Void ProtectedInvokeCallback(System.Object result, System.IntPtr userToken)
    // Offset: 0x1248D08
    void ProtectedInvokeCallback(::Il2CppObject* result, System::IntPtr userToken);
    // System.Void InvokeCallback(System.Object result)
    // Offset: 0x1248EF8
    void InvokeCallback(::Il2CppObject* result);
    // protected System.Void Complete(System.IntPtr userToken)
    // Offset: 0x1248F50
    void Complete(System::IntPtr userToken);
    // private System.Void WorkerThreadComplete(System.Object state)
    // Offset: 0x12490A0
    void WorkerThreadComplete(::Il2CppObject* state);
    // protected System.Void Cleanup()
    // Offset: 0x1249128
    void Cleanup();
    // System.Object InternalWaitForCompletion()
    // Offset: 0x124912C
    ::Il2CppObject* InternalWaitForCompletion();
    // private System.Object WaitForCompletion(System.Boolean snap)
    // Offset: 0x1249134
    ::Il2CppObject* WaitForCompletion(bool snap);
    // public System.Object get_AsyncState()
    // Offset: 0x12489F0
    // Implemented from: System.IAsyncResult
    // Base method: System.Object IAsyncResult::get_AsyncState()
    ::Il2CppObject* get_AsyncState();
    // Creating proxy method: System_IAsyncResult_get_AsyncState
    // Maps to method: get_AsyncState
    ::Il2CppObject* System_IAsyncResult_get_AsyncState();
    // public System.Threading.WaitHandle get_AsyncWaitHandle()
    // Offset: 0x12489F8
    // Implemented from: System.IAsyncResult
    // Base method: System.Threading.WaitHandle IAsyncResult::get_AsyncWaitHandle()
    System::Threading::WaitHandle* get_AsyncWaitHandle();
    // Creating proxy method: System_IAsyncResult_get_AsyncWaitHandle
    // Maps to method: get_AsyncWaitHandle
    System::Threading::WaitHandle* System_IAsyncResult_get_AsyncWaitHandle();
    // public System.Boolean get_CompletedSynchronously()
    // Offset: 0x1248CA0
    // Implemented from: System.IAsyncResult
    // Base method: System.Boolean IAsyncResult::get_CompletedSynchronously()
    bool get_CompletedSynchronously();
    // Creating proxy method: System_IAsyncResult_get_CompletedSynchronously
    // Maps to method: get_CompletedSynchronously
    bool System_IAsyncResult_get_CompletedSynchronously();
    // public System.Boolean get_IsCompleted()
    // Offset: 0x1248CD4
    // Implemented from: System.IAsyncResult
    // Base method: System.Boolean IAsyncResult::get_IsCompleted()
    bool get_IsCompleted();
    // Creating proxy method: System_IAsyncResult_get_IsCompleted
    // Maps to method: get_IsCompleted
    bool System_IAsyncResult_get_IsCompleted();
  }; // System.Net.LazyAsyncResult
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Net::LazyAsyncResult*, "System.Net", "LazyAsyncResult");
#pragma pack(pop)