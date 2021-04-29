// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Runtime.Serialization.ISerializable
#include "System/Runtime/Serialization/ISerializable.hpp"
// Including type: System.ICloneable
#include "System/ICloneable.hpp"
// Including type: System.Runtime.Serialization.StreamingContext
#include "System/Runtime/Serialization/StreamingContext.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::Remoting::Messaging
namespace System::Runtime::Remoting::Messaging {
  // Forward declaring type: CallContextRemotingData
  class CallContextRemotingData;
  // Forward declaring type: CallContextSecurityData
  class CallContextSecurityData;
  // Forward declaring type: Header
  class Header;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: Hashtable
  class Hashtable;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
  // Forward declaring type: String
  class String;
}
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
}
// Completed forward declares
// Type namespace: System.Runtime.Remoting.Messaging
namespace System::Runtime::Remoting::Messaging {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Remoting.Messaging.LogicalCallContext
  // [ComVisibleAttribute] Offset: CA93D0
  class LogicalCallContext : public ::Il2CppObject/*, public System::Runtime::Serialization::ISerializable, public System::ICloneable*/ {
    public:
    // Nested type: System::Runtime::Remoting::Messaging::LogicalCallContext::Reader
    struct Reader;
    // private System.Collections.Hashtable m_Datastore
    // Size: 0x8
    // Offset: 0x10
    System::Collections::Hashtable* m_Datastore;
    // Field size check
    static_assert(sizeof(System::Collections::Hashtable*) == 0x8);
    // private System.Runtime.Remoting.Messaging.CallContextRemotingData m_RemotingData
    // Size: 0x8
    // Offset: 0x18
    System::Runtime::Remoting::Messaging::CallContextRemotingData* m_RemotingData;
    // Field size check
    static_assert(sizeof(System::Runtime::Remoting::Messaging::CallContextRemotingData*) == 0x8);
    // private System.Runtime.Remoting.Messaging.CallContextSecurityData m_SecurityData
    // Size: 0x8
    // Offset: 0x20
    System::Runtime::Remoting::Messaging::CallContextSecurityData* m_SecurityData;
    // Field size check
    static_assert(sizeof(System::Runtime::Remoting::Messaging::CallContextSecurityData*) == 0x8);
    // private System.Object m_HostContext
    // Size: 0x8
    // Offset: 0x28
    ::Il2CppObject* m_HostContext;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // private System.Boolean m_IsCorrelationMgr
    // Size: 0x1
    // Offset: 0x30
    bool m_IsCorrelationMgr;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: m_IsCorrelationMgr and: sendHeaders
    char __padding4[0x7] = {};
    // private System.Runtime.Remoting.Messaging.Header[] _sendHeaders
    // Size: 0x8
    // Offset: 0x38
    ::Array<System::Runtime::Remoting::Messaging::Header*>* sendHeaders;
    // Field size check
    static_assert(sizeof(::Array<System::Runtime::Remoting::Messaging::Header*>*) == 0x8);
    // private System.Runtime.Remoting.Messaging.Header[] _recvHeaders
    // Size: 0x8
    // Offset: 0x40
    ::Array<System::Runtime::Remoting::Messaging::Header*>* recvHeaders;
    // Field size check
    static_assert(sizeof(::Array<System::Runtime::Remoting::Messaging::Header*>*) == 0x8);
    // Creating value type constructor for type: LogicalCallContext
    LogicalCallContext(System::Collections::Hashtable* m_Datastore_ = {}, System::Runtime::Remoting::Messaging::CallContextRemotingData* m_RemotingData_ = {}, System::Runtime::Remoting::Messaging::CallContextSecurityData* m_SecurityData_ = {}, ::Il2CppObject* m_HostContext_ = {}, bool m_IsCorrelationMgr_ = {}, ::Array<System::Runtime::Remoting::Messaging::Header*>* sendHeaders_ = {}, ::Array<System::Runtime::Remoting::Messaging::Header*>* recvHeaders_ = {}) noexcept : m_Datastore{m_Datastore_}, m_RemotingData{m_RemotingData_}, m_SecurityData{m_SecurityData_}, m_HostContext{m_HostContext_}, m_IsCorrelationMgr{m_IsCorrelationMgr_}, sendHeaders{sendHeaders_}, recvHeaders{recvHeaders_} {}
    // Creating interface conversion operator: operator System::Runtime::Serialization::ISerializable
    operator System::Runtime::Serialization::ISerializable() noexcept {
      return *reinterpret_cast<System::Runtime::Serialization::ISerializable*>(this);
    }
    // Creating interface conversion operator: operator System::ICloneable
    operator System::ICloneable() noexcept {
      return *reinterpret_cast<System::ICloneable*>(this);
    }
    // Get static field: static private System.Type s_callContextType
    static System::Type* _get_s_callContextType();
    // Set static field: static private System.Type s_callContextType
    static void _set_s_callContextType(System::Type* value);
    // static field const value: static private System.String s_CorrelationMgrSlotName
    static constexpr const char* s_CorrelationMgrSlotName = "System.Diagnostics.Trace.CorrelationManagerSlot";
    // Get static field: static private System.String s_CorrelationMgrSlotName
    static ::Il2CppString* _get_s_CorrelationMgrSlotName();
    // Set static field: static private System.String s_CorrelationMgrSlotName
    static void _set_s_CorrelationMgrSlotName(::Il2CppString* value);
    // System.Void .ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x188DEA0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LogicalCallContext* New_ctor(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::Remoting::Messaging::LogicalCallContext::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LogicalCallContext*, creationType>(info, context)));
    }
    // public System.Void GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x188E19C
    void GetObjectData(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context);
    // public System.Object Clone()
    // Offset: 0x188E4E4
    ::Il2CppObject* Clone();
    // System.Void Merge(System.Runtime.Remoting.Messaging.LogicalCallContext lc)
    // Offset: 0x188EABC
    void Merge(System::Runtime::Remoting::Messaging::LogicalCallContext* lc);
    // public System.Boolean get_HasInfo()
    // Offset: 0x1889988
    bool get_HasInfo();
    // private System.Boolean get_HasUserData()
    // Offset: 0x188E4B4
    bool get_HasUserData();
    // private System.Collections.Hashtable get_Datastore()
    // Offset: 0x188E130
    System::Collections::Hashtable* get_Datastore();
    // public System.Void FreeNamedDataSlot(System.String name)
    // Offset: 0x188A85C
    void FreeNamedDataSlot(::Il2CppString* name);
    // public System.Object GetData(System.String name)
    // Offset: 0x188ECFC
    ::Il2CppObject* GetData(::Il2CppString* name);
    // public System.Void SetData(System.String name, System.Object data)
    // Offset: 0x188A90C
    void SetData(::Il2CppString* name, ::Il2CppObject* data);
    // static private System.Void .cctor()
    // Offset: 0x188ED34
    static void _cctor();
    // System.Void .ctor()
    // Offset: 0x188DE98
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LogicalCallContext* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::Remoting::Messaging::LogicalCallContext::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LogicalCallContext*, creationType>()));
    }
  }; // System.Runtime.Remoting.Messaging.LogicalCallContext
  #pragma pack(pop)
  static check_size<sizeof(LogicalCallContext), 64 + sizeof(::Array<System::Runtime::Remoting::Messaging::Header*>*)> __System_Runtime_Remoting_Messaging_LogicalCallContextSizeCheck;
  static_assert(sizeof(LogicalCallContext) == 0x48);
}
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::Messaging::LogicalCallContext*, "System.Runtime.Remoting.Messaging", "LogicalCallContext");
