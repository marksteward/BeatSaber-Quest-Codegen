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
// Forward declaring namespace: System::Runtime::Remoting
namespace System::Runtime::Remoting {
  // Forward declaring type: ServerIdentity
  class ServerIdentity;
}
// Forward declaring namespace: System::Runtime::Remoting::Messaging
namespace System::Runtime::Remoting::Messaging {
  // Forward declaring type: IMessage
  class IMessage;
  // Forward declaring type: IMessageCtrl
  class IMessageCtrl;
}
// Completed forward declares
// Type namespace: System.Runtime.Remoting.Messaging
namespace System::Runtime::Remoting::Messaging {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Remoting.Messaging.ServerObjectReplySink
  // [TokenAttribute] Offset: FFFFFFFF
  class ServerObjectReplySink : public ::Il2CppObject/*, public System::Runtime::Remoting::Messaging::IMessageSink*/ {
    public:
    // private System.Runtime.Remoting.Messaging.IMessageSink _replySink
    // Size: 0x8
    // Offset: 0x10
    System::Runtime::Remoting::Messaging::IMessageSink* replySink;
    // Field size check
    static_assert(sizeof(System::Runtime::Remoting::Messaging::IMessageSink*) == 0x8);
    // private System.Runtime.Remoting.ServerIdentity _identity
    // Size: 0x8
    // Offset: 0x18
    System::Runtime::Remoting::ServerIdentity* identity;
    // Field size check
    static_assert(sizeof(System::Runtime::Remoting::ServerIdentity*) == 0x8);
    // Creating value type constructor for type: ServerObjectReplySink
    ServerObjectReplySink(System::Runtime::Remoting::Messaging::IMessageSink* replySink_ = {}, System::Runtime::Remoting::ServerIdentity* identity_ = {}) noexcept : replySink{replySink_}, identity{identity_} {}
    // Creating interface conversion operator: operator System::Runtime::Remoting::Messaging::IMessageSink
    operator System::Runtime::Remoting::Messaging::IMessageSink() noexcept {
      return *reinterpret_cast<System::Runtime::Remoting::Messaging::IMessageSink*>(this);
    }
    // Get instance field: private System.Runtime.Remoting.Messaging.IMessageSink _replySink
    System::Runtime::Remoting::Messaging::IMessageSink* _get__replySink();
    // Set instance field: private System.Runtime.Remoting.Messaging.IMessageSink _replySink
    void _set__replySink(System::Runtime::Remoting::Messaging::IMessageSink* value);
    // Get instance field: private System.Runtime.Remoting.ServerIdentity _identity
    System::Runtime::Remoting::ServerIdentity* _get__identity();
    // Set instance field: private System.Runtime.Remoting.ServerIdentity _identity
    void _set__identity(System::Runtime::Remoting::ServerIdentity* value);
    // public System.Void .ctor(System.Runtime.Remoting.ServerIdentity identity, System.Runtime.Remoting.Messaging.IMessageSink replySink)
    // Offset: 0x1A00CF4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ServerObjectReplySink* New_ctor(System::Runtime::Remoting::ServerIdentity* identity, System::Runtime::Remoting::Messaging::IMessageSink* replySink) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::Remoting::Messaging::ServerObjectReplySink::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ServerObjectReplySink*, creationType>(identity, replySink)));
    }
    // public System.Runtime.Remoting.Messaging.IMessage SyncProcessMessage(System.Runtime.Remoting.Messaging.IMessage msg)
    // Offset: 0x1A00D2C
    System::Runtime::Remoting::Messaging::IMessage* SyncProcessMessage(System::Runtime::Remoting::Messaging::IMessage* msg);
    // public System.Runtime.Remoting.Messaging.IMessageCtrl AsyncProcessMessage(System.Runtime.Remoting.Messaging.IMessage msg, System.Runtime.Remoting.Messaging.IMessageSink replySink)
    // Offset: 0x1A00E08
    System::Runtime::Remoting::Messaging::IMessageCtrl* AsyncProcessMessage(System::Runtime::Remoting::Messaging::IMessage* msg, System::Runtime::Remoting::Messaging::IMessageSink* replySink);
  }; // System.Runtime.Remoting.Messaging.ServerObjectReplySink
  #pragma pack(pop)
  static check_size<sizeof(ServerObjectReplySink), 24 + sizeof(System::Runtime::Remoting::ServerIdentity*)> __System_Runtime_Remoting_Messaging_ServerObjectReplySinkSizeCheck;
  static_assert(sizeof(ServerObjectReplySink) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::Messaging::ServerObjectReplySink*, "System.Runtime.Remoting.Messaging", "ServerObjectReplySink");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::ServerObjectReplySink::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::ServerObjectReplySink::SyncProcessMessage
// Il2CppName: SyncProcessMessage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Runtime::Remoting::Messaging::IMessage* (System::Runtime::Remoting::Messaging::ServerObjectReplySink::*)(System::Runtime::Remoting::Messaging::IMessage*)>(&System::Runtime::Remoting::Messaging::ServerObjectReplySink::SyncProcessMessage)> {
  static const MethodInfo* get() {
    static auto* msg = &::il2cpp_utils::GetClassFromName("System.Runtime.Remoting.Messaging", "IMessage")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::ServerObjectReplySink*), "SyncProcessMessage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{msg});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::ServerObjectReplySink::AsyncProcessMessage
// Il2CppName: AsyncProcessMessage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Runtime::Remoting::Messaging::IMessageCtrl* (System::Runtime::Remoting::Messaging::ServerObjectReplySink::*)(System::Runtime::Remoting::Messaging::IMessage*, System::Runtime::Remoting::Messaging::IMessageSink*)>(&System::Runtime::Remoting::Messaging::ServerObjectReplySink::AsyncProcessMessage)> {
  static const MethodInfo* get() {
    static auto* msg = &::il2cpp_utils::GetClassFromName("System.Runtime.Remoting.Messaging", "IMessage")->byval_arg;
    static auto* replySink = &::il2cpp_utils::GetClassFromName("System.Runtime.Remoting.Messaging", "IMessageSink")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::ServerObjectReplySink*), "AsyncProcessMessage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{msg, replySink});
  }
};
