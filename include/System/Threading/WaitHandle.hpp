// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.MarshalByRefObject
#include "System/MarshalByRefObject.hpp"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Microsoft::Win32::SafeHandles
namespace Microsoft::Win32::SafeHandles {
  // Forward declaring type: SafeWaitHandle
  class SafeWaitHandle;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: TimeSpan
  struct TimeSpan;
}
// Forward declaring namespace: System::Runtime::InteropServices
namespace System::Runtime::InteropServices {
  // Forward declaring type: SafeHandle
  class SafeHandle;
}
// Completed forward declares
// Type namespace: System.Threading
namespace System::Threading {
  // Autogenerated type: System.Threading.WaitHandle
  class WaitHandle : public System::MarshalByRefObject/*, public System::IDisposable*/ {
    public:
    // private System.IntPtr waitHandle
    // Offset: 0x18
    System::IntPtr waitHandle;
    // Microsoft.Win32.SafeHandles.SafeWaitHandle safeWaitHandle
    // Offset: 0x20
    Microsoft::Win32::SafeHandles::SafeWaitHandle* safeWaitHandle;
    // System.Boolean hasThreadAffinity
    // Offset: 0x28
    bool hasThreadAffinity;
    // Creating interface conversion operator: operator System::IDisposable
    operator System::IDisposable() noexcept {
      return *reinterpret_cast<System::IDisposable*>(this);
    }
    // Deleting conversion operator: operator ::Il2CppObject*
    constexpr operator ::Il2CppObject*() const noexcept = delete;
    // static field const value: static public System.Int32 WaitTimeout
    static constexpr const int WaitTimeout = 258;
    // Get static field: static public System.Int32 WaitTimeout
    static int _get_WaitTimeout();
    // Set static field: static public System.Int32 WaitTimeout
    static void _set_WaitTimeout(int value);
    // static field const value: static private System.Int32 MAX_WAITHANDLES
    static constexpr const int MAX_WAITHANDLES = 64;
    // Get static field: static private System.Int32 MAX_WAITHANDLES
    static int _get_MAX_WAITHANDLES();
    // Set static field: static private System.Int32 MAX_WAITHANDLES
    static void _set_MAX_WAITHANDLES(int value);
    // static field const value: static private System.Int32 WAIT_OBJECT_0
    static constexpr const int WAIT_OBJECT_0 = 0;
    // Get static field: static private System.Int32 WAIT_OBJECT_0
    static int _get_WAIT_OBJECT_0();
    // Set static field: static private System.Int32 WAIT_OBJECT_0
    static void _set_WAIT_OBJECT_0(int value);
    // static field const value: static private System.Int32 WAIT_ABANDONED
    static constexpr const int WAIT_ABANDONED = 128;
    // Get static field: static private System.Int32 WAIT_ABANDONED
    static int _get_WAIT_ABANDONED();
    // Set static field: static private System.Int32 WAIT_ABANDONED
    static void _set_WAIT_ABANDONED(int value);
    // static field const value: static private System.Int32 WAIT_FAILED
    static constexpr const int WAIT_FAILED = 2147483647;
    // Get static field: static private System.Int32 WAIT_FAILED
    static int _get_WAIT_FAILED();
    // Set static field: static private System.Int32 WAIT_FAILED
    static void _set_WAIT_FAILED(int value);
    // static field const value: static private System.Int32 ERROR_TOO_MANY_POSTS
    static constexpr const int ERROR_TOO_MANY_POSTS = 298;
    // Get static field: static private System.Int32 ERROR_TOO_MANY_POSTS
    static int _get_ERROR_TOO_MANY_POSTS();
    // Set static field: static private System.Int32 ERROR_TOO_MANY_POSTS
    static void _set_ERROR_TOO_MANY_POSTS(int value);
    // Get static field: static protected readonly System.IntPtr InvalidHandle
    static System::IntPtr _get_InvalidHandle();
    // Set static field: static protected readonly System.IntPtr InvalidHandle
    static void _set_InvalidHandle(System::IntPtr value);
    // static field const value: static System.Int32 MaxWaitHandles
    static constexpr const int MaxWaitHandles = 64;
    // Get static field: static System.Int32 MaxWaitHandles
    static int _get_MaxWaitHandles();
    // Set static field: static System.Int32 MaxWaitHandles
    static void _set_MaxWaitHandles(int value);
    // private System.Void Init()
    // Offset: 0x14A6DF8
    void Init();
    // public System.Void set_Handle(System.IntPtr value)
    // Offset: 0x14A6E80
    void set_Handle(System::IntPtr value);
    // public Microsoft.Win32.SafeHandles.SafeWaitHandle get_SafeWaitHandle()
    // Offset: 0x1491240
    Microsoft::Win32::SafeHandles::SafeWaitHandle* get_SafeWaitHandle();
    // public System.Void set_SafeWaitHandle(Microsoft.Win32.SafeHandles.SafeWaitHandle value)
    // Offset: 0x14A6F84
    void set_SafeWaitHandle(Microsoft::Win32::SafeHandles::SafeWaitHandle* value);
    // System.Void SetHandleInternal(Microsoft.Win32.SafeHandles.SafeWaitHandle handle)
    // Offset: 0x14A704C
    void SetHandleInternal(Microsoft::Win32::SafeHandles::SafeWaitHandle* handle);
    // public System.Boolean WaitOne(System.Int32 millisecondsTimeout, System.Boolean exitContext)
    // Offset: 0x14A7090
    bool WaitOne(int millisecondsTimeout, bool exitContext);
    // public System.Boolean WaitOne(System.TimeSpan timeout, System.Boolean exitContext)
    // Offset: 0x14A71E0
    bool WaitOne(System::TimeSpan timeout, bool exitContext);
    // public System.Boolean WaitOne()
    // Offset: 0x14A72BC
    bool WaitOne();
    // public System.Boolean WaitOne(System.Int32 millisecondsTimeout)
    // Offset: 0x14A72D0
    bool WaitOne(int millisecondsTimeout);
    // public System.Boolean WaitOne(System.TimeSpan timeout)
    // Offset: 0x14A72E0
    bool WaitOne(System::TimeSpan timeout);
    // private System.Boolean WaitOne(System.Int64 timeout, System.Boolean exitContext)
    // Offset: 0x14A7150
    bool WaitOne(int64_t timeout, bool exitContext);
    // static System.Boolean InternalWaitOne(System.Runtime.InteropServices.SafeHandle waitableSafeHandle, System.Int64 millisecondsTimeout, System.Boolean hasThreadAffinity, System.Boolean exitContext)
    // Offset: 0x14A72F0
    static bool InternalWaitOne(System::Runtime::InteropServices::SafeHandle* waitableSafeHandle, int64_t millisecondsTimeout, bool hasThreadAffinity, bool exitContext);
    // static public System.Int32 WaitAny(System.Threading.WaitHandle[] waitHandles, System.Int32 millisecondsTimeout, System.Boolean exitContext)
    // Offset: 0x14A7584
    static int WaitAny(::Array<System::Threading::WaitHandle*>* waitHandles, int millisecondsTimeout, bool exitContext);
    // static public System.Int32 WaitAny(System.Threading.WaitHandle[] waitHandles, System.TimeSpan timeout, System.Boolean exitContext)
    // Offset: 0x1491304
    static int WaitAny(::Array<System::Threading::WaitHandle*>* waitHandles, System::TimeSpan timeout, bool exitContext);
    // static private System.Void ThrowAbandonedMutexException()
    // Offset: 0x14A7524
    static void ThrowAbandonedMutexException();
    // static private System.Void ThrowAbandonedMutexException(System.Int32 location, System.Threading.WaitHandle handle)
    // Offset: 0x14A7B88
    static void ThrowAbandonedMutexException(int location, System::Threading::WaitHandle* handle);
    // public System.Void Close()
    // Offset: 0x14A7BFC
    void Close();
    // protected System.Void Dispose(System.Boolean explicitDisposing)
    // Offset: 0x14A7C7C
    void Dispose(bool explicitDisposing);
    // static private System.Int32 WaitMultiple(System.Threading.WaitHandle[] waitHandles, System.Int32 millisecondsTimeout, System.Boolean exitContext, System.Boolean WaitAll)
    // Offset: 0x14A78A4
    static int WaitMultiple(::Array<System::Threading::WaitHandle*>* waitHandles, int millisecondsTimeout, bool exitContext, bool WaitAll);
    // static private System.Int32 WaitOneNative(System.Runtime.InteropServices.SafeHandle waitableSafeHandle, System.UInt32 millisecondsTimeout, System.Boolean hasThreadAffinity, System.Boolean exitContext)
    // Offset: 0x14A7404
    static int WaitOneNative(System::Runtime::InteropServices::SafeHandle* waitableSafeHandle, uint millisecondsTimeout, bool hasThreadAffinity, bool exitContext);
    // static private System.Int32 Wait_internal(System.IntPtr* handles, System.Int32 numHandles, System.Boolean waitAll, System.Int32 ms)
    // Offset: 0x14A7D48
    static int Wait_internal(System::IntPtr* handles, int numHandles, bool waitAll, int ms);
    // static private System.Void .cctor()
    // Offset: 0x14A7D50
    static void _cctor();
    // protected System.Void .ctor()
    // Offset: 0x14A6DD0
    // Implemented from: System.MarshalByRefObject
    // Base method: System.Void MarshalByRefObject::.ctor()
    // Base method: System.Void Object::.ctor()
    static WaitHandle* New_ctor();
    // public System.Void Dispose()
    // Offset: 0x14A7CC8
    // Implemented from: System.IDisposable
    // Base method: System.Void IDisposable::Dispose()
    void Dispose();
    // Creating proxy method: System_IDisposable_Dispose
    // Maps to method: Dispose
    void System_IDisposable_Dispose();
  }; // System.Threading.WaitHandle
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Threading::WaitHandle*, "System.Threading", "WaitHandle");
#pragma pack(pop)
