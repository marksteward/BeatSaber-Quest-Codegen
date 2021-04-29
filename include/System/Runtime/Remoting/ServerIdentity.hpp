// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Runtime.Remoting.Identity
#include "System/Runtime/Remoting/Identity.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
  // Forward declaring type: MarshalByRefObject
  class MarshalByRefObject;
}
// Forward declaring namespace: System::Runtime::Remoting::Messaging
namespace System::Runtime::Remoting::Messaging {
  // Forward declaring type: IMessageSink
  class IMessageSink;
  // Forward declaring type: IMessage
  class IMessage;
  // Forward declaring type: IMessageCtrl
  class IMessageCtrl;
}
// Forward declaring namespace: System::Runtime::Remoting::Contexts
namespace System::Runtime::Remoting::Contexts {
  // Forward declaring type: Context
  class Context;
}
// Forward declaring namespace: System::Runtime::Remoting::Lifetime
namespace System::Runtime::Remoting::Lifetime {
  // Forward declaring type: Lease
  class Lease;
  // Forward declaring type: ILease
  class ILease;
}
// Forward declaring namespace: System::Runtime::Remoting
namespace System::Runtime::Remoting {
  // Forward declaring type: ObjRef
  class ObjRef;
}
// Completed forward declares
// Type namespace: System.Runtime.Remoting
namespace System::Runtime::Remoting {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Remoting.ServerIdentity
  class ServerIdentity : public System::Runtime::Remoting::Identity {
    public:
    // Writing base type padding for base size: 0x41 to desired offset: 0x48
    char ___base_padding[0x7] = {};
    // protected System.Type _objectType
    // Size: 0x8
    // Offset: 0x48
    System::Type* objectType;
    // Field size check
    static_assert(sizeof(System::Type*) == 0x8);
    // protected System.MarshalByRefObject _serverObject
    // Size: 0x8
    // Offset: 0x50
    System::MarshalByRefObject* serverObject;
    // Field size check
    static_assert(sizeof(System::MarshalByRefObject*) == 0x8);
    // protected System.Runtime.Remoting.Messaging.IMessageSink _serverSink
    // Size: 0x8
    // Offset: 0x58
    System::Runtime::Remoting::Messaging::IMessageSink* serverSink;
    // Field size check
    static_assert(sizeof(System::Runtime::Remoting::Messaging::IMessageSink*) == 0x8);
    // protected System.Runtime.Remoting.Contexts.Context _context
    // Size: 0x8
    // Offset: 0x60
    System::Runtime::Remoting::Contexts::Context* context;
    // Field size check
    static_assert(sizeof(System::Runtime::Remoting::Contexts::Context*) == 0x8);
    // protected System.Runtime.Remoting.Lifetime.Lease _lease
    // Size: 0x8
    // Offset: 0x68
    System::Runtime::Remoting::Lifetime::Lease* lease;
    // Field size check
    static_assert(sizeof(System::Runtime::Remoting::Lifetime::Lease*) == 0x8);
    // Creating value type constructor for type: ServerIdentity
    ServerIdentity(System::Type* objectType_ = {}, System::MarshalByRefObject* serverObject_ = {}, System::Runtime::Remoting::Messaging::IMessageSink* serverSink_ = {}, System::Runtime::Remoting::Contexts::Context* context_ = {}, System::Runtime::Remoting::Lifetime::Lease* lease_ = {}) noexcept : objectType{objectType_}, serverObject{serverObject_}, serverSink{serverSink_}, context{context_}, lease{lease_} {}
    // public System.Void .ctor(System.String objectUri, System.Runtime.Remoting.Contexts.Context context, System.Type objectType)
    // Offset: 0x14625C4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ServerIdentity* New_ctor(::Il2CppString* objectUri, System::Runtime::Remoting::Contexts::Context* context, System::Type* objectType) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::Remoting::ServerIdentity::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ServerIdentity*, creationType>(objectUri, context, objectType)));
    }
    // public System.Type get_ObjectType()
    // Offset: 0x1462600
    System::Type* get_ObjectType();
    // public System.Void StartTrackingLifetime(System.Runtime.Remoting.Lifetime.ILease lease)
    // Offset: 0x1462608
    void StartTrackingLifetime(System::Runtime::Remoting::Lifetime::ILease* lease);
    // public System.Void OnLifetimeExpired()
    // Offset: 0x1462784
    void OnLifetimeExpired();
    // public System.Void AttachServerObject(System.MarshalByRefObject serverObject, System.Runtime.Remoting.Contexts.Context context)
    // Offset: 0x1462D24
    void AttachServerObject(System::MarshalByRefObject* serverObject, System::Runtime::Remoting::Contexts::Context* context);
    // public System.Runtime.Remoting.Lifetime.Lease get_Lease()
    // Offset: 0x1462E38
    System::Runtime::Remoting::Lifetime::Lease* get_Lease();
    // public System.Runtime.Remoting.Contexts.Context get_Context()
    // Offset: 0x1462E40
    System::Runtime::Remoting::Contexts::Context* get_Context();
    // public System.Void set_Context(System.Runtime.Remoting.Contexts.Context value)
    // Offset: 0x1462E48
    void set_Context(System::Runtime::Remoting::Contexts::Context* value);
    // public System.Runtime.Remoting.Messaging.IMessage SyncObjectProcessMessage(System.Runtime.Remoting.Messaging.IMessage msg)
    // Offset: 0xFFFFFFFF
    System::Runtime::Remoting::Messaging::IMessage* SyncObjectProcessMessage(System::Runtime::Remoting::Messaging::IMessage* msg);
    // public System.Runtime.Remoting.Messaging.IMessageCtrl AsyncObjectProcessMessage(System.Runtime.Remoting.Messaging.IMessage msg, System.Runtime.Remoting.Messaging.IMessageSink replySink)
    // Offset: 0xFFFFFFFF
    System::Runtime::Remoting::Messaging::IMessageCtrl* AsyncObjectProcessMessage(System::Runtime::Remoting::Messaging::IMessage* msg, System::Runtime::Remoting::Messaging::IMessageSink* replySink);
    // protected System.Void DisposeServerObject()
    // Offset: 0x1462788
    void DisposeServerObject();
    // public override System.Runtime.Remoting.ObjRef CreateObjRef(System.Type requestedType)
    // Offset: 0x1462814
    // Implemented from: System.Runtime.Remoting.Identity
    // Base method: System.Runtime.Remoting.ObjRef Identity::CreateObjRef(System.Type requestedType)
    System::Runtime::Remoting::ObjRef* CreateObjRef(System::Type* requestedType);
  }; // System.Runtime.Remoting.ServerIdentity
  #pragma pack(pop)
  static check_size<sizeof(ServerIdentity), 104 + sizeof(System::Runtime::Remoting::Lifetime::Lease*)> __System_Runtime_Remoting_ServerIdentitySizeCheck;
  static_assert(sizeof(ServerIdentity) == 0x70);
}
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::ServerIdentity*, "System.Runtime.Remoting", "ServerIdentity");
