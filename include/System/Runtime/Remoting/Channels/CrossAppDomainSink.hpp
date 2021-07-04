// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Runtime.Remoting.Messaging.IMessageSink
#include "System/Runtime/Remoting/Messaging/IMessageSink.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::Remoting::Channels
namespace System::Runtime::Remoting::Channels {
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: Hashtable
  class Hashtable;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: MethodInfo
  class MethodInfo;
}
// Forward declaring namespace: System::Runtime::Remoting::Messaging
namespace System::Runtime::Remoting::Messaging {
  // Forward declaring type: CADMethodCallMessage
  class CADMethodCallMessage;
  // Forward declaring type: IMessage
  class IMessage;
  // Forward declaring type: IMessageCtrl
  class IMessageCtrl;
}
// Completed forward declares
// Type namespace: System.Runtime.Remoting.Channels
namespace System::Runtime::Remoting::Channels {
  // Size: 0x14
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Remoting.Channels.CrossAppDomainSink
  // [MonoTODOAttribute] Offset: D7E33C
  class CrossAppDomainSink : public ::Il2CppObject/*, public System::Runtime::Remoting::Messaging::IMessageSink*/ {
    public:
    // Nested type: System::Runtime::Remoting::Channels::CrossAppDomainSink::ProcessMessageRes
    struct ProcessMessageRes;
    // private System.Int32 _domainID
    // Size: 0x4
    // Offset: 0x10
    int domainID;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: CrossAppDomainSink
    CrossAppDomainSink(int domainID_ = {}) noexcept : domainID{domainID_} {}
    // Creating interface conversion operator: operator System::Runtime::Remoting::Messaging::IMessageSink
    operator System::Runtime::Remoting::Messaging::IMessageSink() noexcept {
      return *reinterpret_cast<System::Runtime::Remoting::Messaging::IMessageSink*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return domainID;
    }
    // Get static field: static private System.Collections.Hashtable s_sinks
    static System::Collections::Hashtable* _get_s_sinks();
    // Set static field: static private System.Collections.Hashtable s_sinks
    static void _set_s_sinks(System::Collections::Hashtable* value);
    // Get static field: static private System.Reflection.MethodInfo processMessageMethod
    static System::Reflection::MethodInfo* _get_processMessageMethod();
    // Set static field: static private System.Reflection.MethodInfo processMessageMethod
    static void _set_processMessageMethod(System::Reflection::MethodInfo* value);
    // System.Void .ctor(System.Int32 domainID)
    // Offset: 0x1426680
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CrossAppDomainSink* New_ctor(int domainID) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::Remoting::Channels::CrossAppDomainSink::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CrossAppDomainSink*, creationType>(domainID)));
    }
    // static System.Runtime.Remoting.Channels.CrossAppDomainSink GetSink(System.Int32 domainID)
    // Offset: 0x1426380
    static System::Runtime::Remoting::Channels::CrossAppDomainSink* GetSink(int domainID);
    // System.Int32 get_TargetDomainId()
    // Offset: 0x14266AC
    int get_TargetDomainId();
    // static private System.Runtime.Remoting.Channels.CrossAppDomainSink/ProcessMessageRes ProcessMessageInDomain(System.Byte[] arrRequest, System.Runtime.Remoting.Messaging.CADMethodCallMessage cadMsg)
    // Offset: 0x14266B4
    static System::Runtime::Remoting::Channels::CrossAppDomainSink::ProcessMessageRes ProcessMessageInDomain(::Array<uint8_t>* arrRequest, System::Runtime::Remoting::Messaging::CADMethodCallMessage* cadMsg);
    // public System.Runtime.Remoting.Messaging.IMessage SyncProcessMessage(System.Runtime.Remoting.Messaging.IMessage msgRequest)
    // Offset: 0x1426824
    System::Runtime::Remoting::Messaging::IMessage* SyncProcessMessage(System::Runtime::Remoting::Messaging::IMessage* msgRequest);
    // public System.Runtime.Remoting.Messaging.IMessageCtrl AsyncProcessMessage(System.Runtime.Remoting.Messaging.IMessage reqMsg, System.Runtime.Remoting.Messaging.IMessageSink replySink)
    // Offset: 0x1426BF8
    System::Runtime::Remoting::Messaging::IMessageCtrl* AsyncProcessMessage(System::Runtime::Remoting::Messaging::IMessage* reqMsg, System::Runtime::Remoting::Messaging::IMessageSink* replySink);
    // public System.Void SendAsyncMessage(System.Object data)
    // Offset: 0x1426CA8
    void SendAsyncMessage(::Il2CppObject* data);
    // static private System.Void .cctor()
    // Offset: 0x1426DC0
    static void _cctor();
    // private System.Void <AsyncProcessMessage>b__10_0(System.Object data)
    // Offset: 0x1426E90
    void $AsyncProcessMessage$b__10_0(::Il2CppObject* data);
  }; // System.Runtime.Remoting.Channels.CrossAppDomainSink
  #pragma pack(pop)
  static check_size<sizeof(CrossAppDomainSink), 16 + sizeof(int)> __System_Runtime_Remoting_Channels_CrossAppDomainSinkSizeCheck;
  static_assert(sizeof(CrossAppDomainSink) == 0x14);
}
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::Channels::CrossAppDomainSink*, "System.Runtime.Remoting.Channels", "CrossAppDomainSink");
// Writing MetadataGetter for method: System::Runtime::Remoting::Channels::CrossAppDomainSink::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Runtime::Remoting::Channels::CrossAppDomainSink::GetSink
// Il2CppName: GetSink
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Runtime::Remoting::Channels::CrossAppDomainSink::get_TargetDomainId
// Il2CppName: get_TargetDomainId
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Runtime::Remoting::Channels::CrossAppDomainSink::ProcessMessageInDomain
// Il2CppName: ProcessMessageInDomain
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Runtime::Remoting::Channels::CrossAppDomainSink::SyncProcessMessage
// Il2CppName: SyncProcessMessage
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Runtime::Remoting::Channels::CrossAppDomainSink::AsyncProcessMessage
// Il2CppName: AsyncProcessMessage
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Runtime::Remoting::Channels::CrossAppDomainSink::SendAsyncMessage
// Il2CppName: SendAsyncMessage
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Runtime::Remoting::Channels::CrossAppDomainSink::_cctor
// Il2CppName: .cctor
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Runtime::Remoting::Channels::CrossAppDomainSink::$AsyncProcessMessage$b__10_0
// Il2CppName: <AsyncProcessMessage>b__10_0
// Cannot perform method pointer template specialization from operators!
