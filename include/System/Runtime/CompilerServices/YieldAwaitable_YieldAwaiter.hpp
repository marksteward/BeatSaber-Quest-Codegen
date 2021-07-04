// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
// Including type: System.Runtime.CompilerServices.YieldAwaitable
#include "System/Runtime/CompilerServices/YieldAwaitable.hpp"
// Including type: System.Runtime.CompilerServices.ICriticalNotifyCompletion
#include "System/Runtime/CompilerServices/ICriticalNotifyCompletion.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: WaitCallback
  class WaitCallback;
  // Forward declaring type: SendOrPostCallback
  class SendOrPostCallback;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct Il2CppObject;
// Completed il2cpp-utils forward declares
// Type namespace: System.Runtime.CompilerServices
namespace System::Runtime::CompilerServices {
  // Size: 0x0
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter
  struct YieldAwaitable::YieldAwaiter/*, public System::ValueType, public System::Runtime::CompilerServices::ICriticalNotifyCompletion*/ {
    public:
    // Creating value type constructor for type: YieldAwaiter
    constexpr YieldAwaiter() noexcept {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator System::Runtime::CompilerServices::ICriticalNotifyCompletion
    operator System::Runtime::CompilerServices::ICriticalNotifyCompletion() noexcept {
      return *reinterpret_cast<System::Runtime::CompilerServices::ICriticalNotifyCompletion*>(this);
    }
    // Get static field: static private readonly System.Threading.WaitCallback s_waitCallbackRunAction
    static System::Threading::WaitCallback* _get_s_waitCallbackRunAction();
    // Set static field: static private readonly System.Threading.WaitCallback s_waitCallbackRunAction
    static void _set_s_waitCallbackRunAction(System::Threading::WaitCallback* value);
    // Get static field: static private readonly System.Threading.SendOrPostCallback s_sendOrPostCallbackRunAction
    static System::Threading::SendOrPostCallback* _get_s_sendOrPostCallbackRunAction();
    // Set static field: static private readonly System.Threading.SendOrPostCallback s_sendOrPostCallbackRunAction
    static void _set_s_sendOrPostCallbackRunAction(System::Threading::SendOrPostCallback* value);
    // public System.Boolean get_IsCompleted()
    // Offset: 0xEED104
    bool get_IsCompleted();
    // public System.Void OnCompleted(System.Action continuation)
    // Offset: 0xEED10C
    void OnCompleted(System::Action* continuation);
    // public System.Void UnsafeOnCompleted(System.Action continuation)
    // Offset: 0xEED110
    void UnsafeOnCompleted(System::Action* continuation);
    // static private System.Void QueueContinuation(System.Action continuation, System.Boolean flowContext)
    // Offset: 0x141D24C
    static void QueueContinuation(System::Action* continuation, bool flowContext);
    // static private System.Void RunAction(System.Object state)
    // Offset: 0x141D588
    static void RunAction(::Il2CppObject* state);
    // public System.Void GetResult()
    // Offset: 0xEED114
    void GetResult();
    // static private System.Void .cctor()
    // Offset: 0x141D5F8
    static void _cctor();
  }; // System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::CompilerServices::YieldAwaitable::YieldAwaiter, "System.Runtime.CompilerServices", "YieldAwaitable/YieldAwaiter");
// Writing MetadataGetter for method: System::Runtime::CompilerServices::YieldAwaitable::YieldAwaiter::get_IsCompleted
// Il2CppName: get_IsCompleted
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Runtime::CompilerServices::YieldAwaitable::YieldAwaiter::OnCompleted
// Il2CppName: OnCompleted
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Runtime::CompilerServices::YieldAwaitable::YieldAwaiter::UnsafeOnCompleted
// Il2CppName: UnsafeOnCompleted
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Runtime::CompilerServices::YieldAwaitable::YieldAwaiter::QueueContinuation
// Il2CppName: QueueContinuation
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Runtime::CompilerServices::YieldAwaitable::YieldAwaiter::RunAction
// Il2CppName: RunAction
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Runtime::CompilerServices::YieldAwaitable::YieldAwaiter::GetResult
// Il2CppName: GetResult
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Runtime::CompilerServices::YieldAwaitable::YieldAwaiter::_cctor
// Il2CppName: .cctor
// Cannot perform method pointer template specialization from operators!
