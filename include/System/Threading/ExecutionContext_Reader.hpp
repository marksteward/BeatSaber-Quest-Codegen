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
  // Autogenerated type: System.Threading.ExecutionContext/System.Threading.Reader
  // [TokenAttribute] Offset: FFFFFFFF
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
    // Get instance field: private System.Threading.ExecutionContext m_ec
    System::Threading::ExecutionContext* _get_m_ec();
    // Set instance field: private System.Threading.ExecutionContext m_ec
    void _set_m_ec(System::Threading::ExecutionContext* value);
    // public System.Boolean get_IsNull()
    // Offset: 0xEEA67C
    bool get_IsNull();
    // public System.Boolean get_IsFlowSuppressed()
    // Offset: 0xEEA6A8
    bool get_IsFlowSuppressed();
    // public System.Threading.SynchronizationContext get_SynchronizationContext()
    // Offset: 0xEEA6C4
    System::Threading::SynchronizationContext* get_SynchronizationContext();
    // public System.Threading.SynchronizationContext get_SynchronizationContextNoFlow()
    // Offset: 0xEEA6DC
    System::Threading::SynchronizationContext* get_SynchronizationContextNoFlow();
    // public System.Runtime.Remoting.Messaging.LogicalCallContext/System.Runtime.Remoting.Messaging.Reader get_LogicalCallContext()
    // Offset: 0xEEA6F4
    System::Runtime::Remoting::Messaging::LogicalCallContext::Reader get_LogicalCallContext();
    // public System.Runtime.Remoting.Messaging.IllogicalCallContext/System.Runtime.Remoting.Messaging.Reader get_IllogicalCallContext()
    // Offset: 0xEEA710
    System::Runtime::Remoting::Messaging::IllogicalCallContext::Reader get_IllogicalCallContext();
    // public System.Void .ctor(System.Threading.ExecutionContext ec)
    // Offset: 0xEEA66C
    // template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    // ABORTED: conflicts with another method.  Reader(System::Threading::ExecutionContext* ec)
    // public System.Threading.ExecutionContext DangerousGetRawExecutionContext()
    // Offset: 0xEEA674
    System::Threading::ExecutionContext* DangerousGetRawExecutionContext();
    // public System.Boolean IsDefaultFTContext(System.Boolean ignoreSyncCtx)
    // Offset: 0xEEA68C
    bool IsDefaultFTContext(bool ignoreSyncCtx);
    // public System.Boolean HasSameLocalValues(System.Threading.ExecutionContext other)
    // Offset: 0xEEA72C
    bool HasSameLocalValues(System::Threading::ExecutionContext* other);
  }; // System.Threading.ExecutionContext/System.Threading.Reader
  #pragma pack(pop)
  static check_size<sizeof(ExecutionContext::Reader), 0 + sizeof(System::Threading::ExecutionContext*)> __System_Threading_ExecutionContext_ReaderSizeCheck;
  static_assert(sizeof(ExecutionContext::Reader) == 0x8);
}
DEFINE_IL2CPP_ARG_TYPE(System::Threading::ExecutionContext::Reader, "System.Threading", "ExecutionContext/Reader");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Threading::ExecutionContext::Reader::get_IsNull
// Il2CppName: get_IsNull
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Threading::ExecutionContext::Reader::*)()>(&System::Threading::ExecutionContext::Reader::get_IsNull)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Threading::ExecutionContext::Reader), "get_IsNull", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Threading::ExecutionContext::Reader::get_IsFlowSuppressed
// Il2CppName: get_IsFlowSuppressed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Threading::ExecutionContext::Reader::*)()>(&System::Threading::ExecutionContext::Reader::get_IsFlowSuppressed)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Threading::ExecutionContext::Reader), "get_IsFlowSuppressed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Threading::ExecutionContext::Reader::get_SynchronizationContext
// Il2CppName: get_SynchronizationContext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::SynchronizationContext* (System::Threading::ExecutionContext::Reader::*)()>(&System::Threading::ExecutionContext::Reader::get_SynchronizationContext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Threading::ExecutionContext::Reader), "get_SynchronizationContext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Threading::ExecutionContext::Reader::get_SynchronizationContextNoFlow
// Il2CppName: get_SynchronizationContextNoFlow
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::SynchronizationContext* (System::Threading::ExecutionContext::Reader::*)()>(&System::Threading::ExecutionContext::Reader::get_SynchronizationContextNoFlow)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Threading::ExecutionContext::Reader), "get_SynchronizationContextNoFlow", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Threading::ExecutionContext::Reader::get_LogicalCallContext
// Il2CppName: get_LogicalCallContext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Runtime::Remoting::Messaging::LogicalCallContext::Reader (System::Threading::ExecutionContext::Reader::*)()>(&System::Threading::ExecutionContext::Reader::get_LogicalCallContext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Threading::ExecutionContext::Reader), "get_LogicalCallContext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Threading::ExecutionContext::Reader::get_IllogicalCallContext
// Il2CppName: get_IllogicalCallContext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Runtime::Remoting::Messaging::IllogicalCallContext::Reader (System::Threading::ExecutionContext::Reader::*)()>(&System::Threading::ExecutionContext::Reader::get_IllogicalCallContext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Threading::ExecutionContext::Reader), "get_IllogicalCallContext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Threading::ExecutionContext::Reader::Reader
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Threading::ExecutionContext::Reader::DangerousGetRawExecutionContext
// Il2CppName: DangerousGetRawExecutionContext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::ExecutionContext* (System::Threading::ExecutionContext::Reader::*)()>(&System::Threading::ExecutionContext::Reader::DangerousGetRawExecutionContext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Threading::ExecutionContext::Reader), "DangerousGetRawExecutionContext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Threading::ExecutionContext::Reader::IsDefaultFTContext
// Il2CppName: IsDefaultFTContext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Threading::ExecutionContext::Reader::*)(bool)>(&System::Threading::ExecutionContext::Reader::IsDefaultFTContext)> {
  static const MethodInfo* get() {
    static auto* ignoreSyncCtx = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Threading::ExecutionContext::Reader), "IsDefaultFTContext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ignoreSyncCtx});
  }
};
// Writing MetadataGetter for method: System::Threading::ExecutionContext::Reader::HasSameLocalValues
// Il2CppName: HasSameLocalValues
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Threading::ExecutionContext::Reader::*)(System::Threading::ExecutionContext*)>(&System::Threading::ExecutionContext::Reader::HasSameLocalValues)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("System.Threading", "ExecutionContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Threading::ExecutionContext::Reader), "HasSameLocalValues", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
