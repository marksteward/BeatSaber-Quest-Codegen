// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Threading.ExecutionContext
#include "System/Threading/ExecutionContext.hpp"
// Including type: System.Runtime.Remoting.Messaging.LogicalCallContext
#include "System/Runtime/Remoting/Messaging/LogicalCallContext.hpp"
// Including type: System.Runtime.Remoting.Messaging.IllogicalCallContext
#include "System/Runtime/Remoting/Messaging/IllogicalCallContext.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: SynchronizationContext
  class SynchronizationContext;
}
// Completed forward declares
// Type namespace: System.Threading
namespace System::Threading {
  // Size: 0x8
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.Threading.ExecutionContext/Reader
  struct ExecutionContext::Reader/*, public System::ValueType*/ {
    public:
    // private System.Threading.ExecutionContext m_ec
    // Size: 0x8
    // Offset: 0x0
    System::Threading::ExecutionContext* m_ec;
    // Field size check
    static_assert(sizeof(System::Threading::ExecutionContext*) == 0x8);
    // Creating value type constructor for type: Reader
    constexpr Reader(System::Threading::ExecutionContext* m_ec_ = {}) noexcept : m_ec{m_ec_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Creating conversion operator: operator System::Threading::ExecutionContext*
    constexpr operator System::Threading::ExecutionContext*() const noexcept {
      return m_ec;
    }
    // public System.Void .ctor(System.Threading.ExecutionContext ec)
    // Offset: 0xE0BE58
    // template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    // ABORTED: conflicts with another method.  Reader(System::Threading::ExecutionContext* ec)
    // public System.Threading.ExecutionContext DangerousGetRawExecutionContext()
    // Offset: 0xE0BE60
    System::Threading::ExecutionContext* DangerousGetRawExecutionContext();
    // public System.Boolean get_IsNull()
    // Offset: 0xE0BE68
    bool get_IsNull();
    // public System.Boolean IsDefaultFTContext(System.Boolean ignoreSyncCtx)
    // Offset: 0xE0BE78
    bool IsDefaultFTContext(bool ignoreSyncCtx);
    // public System.Boolean get_IsFlowSuppressed()
    // Offset: 0xE0BE94
    bool get_IsFlowSuppressed();
    // public System.Threading.SynchronizationContext get_SynchronizationContext()
    // Offset: 0xE0BEB0
    System::Threading::SynchronizationContext* get_SynchronizationContext();
    // public System.Threading.SynchronizationContext get_SynchronizationContextNoFlow()
    // Offset: 0xE0BEC8
    System::Threading::SynchronizationContext* get_SynchronizationContextNoFlow();
    // public System.Runtime.Remoting.Messaging.LogicalCallContext/Reader get_LogicalCallContext()
    // Offset: 0xE0BEE0
    System::Runtime::Remoting::Messaging::LogicalCallContext::Reader get_LogicalCallContext();
    // public System.Runtime.Remoting.Messaging.IllogicalCallContext/Reader get_IllogicalCallContext()
    // Offset: 0xE0BEFC
    System::Runtime::Remoting::Messaging::IllogicalCallContext::Reader get_IllogicalCallContext();
    // public System.Boolean HasSameLocalValues(System.Threading.ExecutionContext other)
    // Offset: 0xE0BF18
    bool HasSameLocalValues(System::Threading::ExecutionContext* other);
  }; // System.Threading.ExecutionContext/Reader
  #pragma pack(pop)
  static check_size<sizeof(ExecutionContext::Reader), 0 + sizeof(System::Threading::ExecutionContext*)> __System_Threading_ExecutionContext_ReaderSizeCheck;
  static_assert(sizeof(ExecutionContext::Reader) == 0x8);
}
DEFINE_IL2CPP_ARG_TYPE(System::Threading::ExecutionContext::Reader, "System.Threading", "ExecutionContext/Reader");
