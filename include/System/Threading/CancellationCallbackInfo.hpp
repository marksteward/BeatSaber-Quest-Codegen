// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: SynchronizationContext
  class SynchronizationContext;
  // Forward declaring type: ExecutionContext
  class ExecutionContext;
  // Forward declaring type: CancellationTokenSource
  class CancellationTokenSource;
  // Forward declaring type: ContextCallback
  class ContextCallback;
}
// Completed forward declares
// Type namespace: System.Threading
namespace System::Threading {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: System.Threading.CancellationCallbackInfo
  class CancellationCallbackInfo : public ::Il2CppObject {
    public:
    // readonly System.Action`1<System.Object> Callback
    // Size: 0x8
    // Offset: 0x10
    System::Action_1<::Il2CppObject*>* Callback;
    // Field size check
    static_assert(sizeof(System::Action_1<::Il2CppObject*>*) == 0x8);
    // readonly System.Object StateForCallback
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppObject* StateForCallback;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // readonly System.Threading.SynchronizationContext TargetSyncContext
    // Size: 0x8
    // Offset: 0x20
    System::Threading::SynchronizationContext* TargetSyncContext;
    // Field size check
    static_assert(sizeof(System::Threading::SynchronizationContext*) == 0x8);
    // readonly System.Threading.ExecutionContext TargetExecutionContext
    // Size: 0x8
    // Offset: 0x28
    System::Threading::ExecutionContext* TargetExecutionContext;
    // Field size check
    static_assert(sizeof(System::Threading::ExecutionContext*) == 0x8);
    // readonly System.Threading.CancellationTokenSource CancellationTokenSource
    // Size: 0x8
    // Offset: 0x30
    System::Threading::CancellationTokenSource* CancellationTokenSource;
    // Field size check
    static_assert(sizeof(System::Threading::CancellationTokenSource*) == 0x8);
    // Creating value type constructor for type: CancellationCallbackInfo
    CancellationCallbackInfo(System::Action_1<::Il2CppObject*>* Callback_ = {}, ::Il2CppObject* StateForCallback_ = {}, System::Threading::SynchronizationContext* TargetSyncContext_ = {}, System::Threading::ExecutionContext* TargetExecutionContext_ = {}, System::Threading::CancellationTokenSource* CancellationTokenSource_ = {}) noexcept : Callback{Callback_}, StateForCallback{StateForCallback_}, TargetSyncContext{TargetSyncContext_}, TargetExecutionContext{TargetExecutionContext_}, CancellationTokenSource{CancellationTokenSource_} {}
    // Get static field: static private System.Threading.ContextCallback s_executionContextCallback
    static System::Threading::ContextCallback* _get_s_executionContextCallback();
    // Set static field: static private System.Threading.ContextCallback s_executionContextCallback
    static void _set_s_executionContextCallback(System::Threading::ContextCallback* value);
    // System.Void .ctor(System.Action`1<System.Object> callback, System.Object stateForCallback, System.Threading.SynchronizationContext targetSyncContext, System.Threading.ExecutionContext targetExecutionContext, System.Threading.CancellationTokenSource cancellationTokenSource)
    // Offset: 0x18A8210
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CancellationCallbackInfo* New_ctor(System::Action_1<::Il2CppObject*>* callback, ::Il2CppObject* stateForCallback, System::Threading::SynchronizationContext* targetSyncContext, System::Threading::ExecutionContext* targetExecutionContext, System::Threading::CancellationTokenSource* cancellationTokenSource) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Threading::CancellationCallbackInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CancellationCallbackInfo*, creationType>(callback, stateForCallback, targetSyncContext, targetExecutionContext, cancellationTokenSource)));
    }
    // System.Void ExecuteCallback()
    // Offset: 0x18A8264
    void ExecuteCallback();
    // static private System.Void ExecutionContextCallback(System.Object obj)
    // Offset: 0x18A8448
    static void ExecutionContextCallback(::Il2CppObject* obj);
  }; // System.Threading.CancellationCallbackInfo
  #pragma pack(pop)
  static check_size<sizeof(CancellationCallbackInfo), 48 + sizeof(System::Threading::CancellationTokenSource*)> __System_Threading_CancellationCallbackInfoSizeCheck;
  static_assert(sizeof(CancellationCallbackInfo) == 0x38);
}
DEFINE_IL2CPP_ARG_TYPE(System::Threading::CancellationCallbackInfo*, "System.Threading", "CancellationCallbackInfo");
// Writing MetadataGetter for method: System::Threading::CancellationCallbackInfo::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Threading::CancellationCallbackInfo::ExecuteCallback
// Il2CppName: ExecuteCallback
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Threading::CancellationCallbackInfo::ExecutionContextCallback
// Il2CppName: ExecutionContextCallback
// Cannot perform method pointer template specialization from operators!
