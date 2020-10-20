// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Runtime.Remoting.Proxies.RealProxy
#include "System/Runtime/Remoting/Proxies/RealProxy.hpp"
// Including type: System.Runtime.Remoting.IRemotingTypeInfo
#include "System/Runtime/Remoting/IRemotingTypeInfo.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::Remoting::Messaging
namespace System::Runtime::Remoting::Messaging {
  // Forward declaring type: IMessageSink
  class IMessageSink;
  // Forward declaring type: ConstructionCall
  class ConstructionCall;
  // Forward declaring type: IMessage
  class IMessage;
  // Forward declaring type: IMethodMessage
  class IMethodMessage;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: MethodInfo
  class MethodInfo;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: System::Runtime::Remoting
namespace System::Runtime::Remoting {
  // Forward declaring type: Identity
  class Identity;
  // Forward declaring type: ClientIdentity
  class ClientIdentity;
}
// Completed forward declares
// Type namespace: System.Runtime.Remoting.Proxies
namespace System::Runtime::Remoting::Proxies {
  // Autogenerated type: System.Runtime.Remoting.Proxies.RemotingProxy
  class RemotingProxy : public System::Runtime::Remoting::Proxies::RealProxy/*, public System::Runtime::Remoting::IRemotingTypeInfo*/ {
    public:
    // private System.Runtime.Remoting.Messaging.IMessageSink _sink
    // Offset: 0x50
    System::Runtime::Remoting::Messaging::IMessageSink* sink;
    // private System.Boolean _hasEnvoySink
    // Offset: 0x58
    bool hasEnvoySink;
    // private System.Runtime.Remoting.Messaging.ConstructionCall _ctorCall
    // Offset: 0x60
    System::Runtime::Remoting::Messaging::ConstructionCall* ctorCall;
    // Creating interface conversion operator: operator System::Runtime::Remoting::IRemotingTypeInfo
    operator System::Runtime::Remoting::IRemotingTypeInfo() noexcept {
      return *reinterpret_cast<System::Runtime::Remoting::IRemotingTypeInfo*>(this);
    }
    // Get static field: static private System.Reflection.MethodInfo _cache_GetTypeMethod
    static System::Reflection::MethodInfo* _get__cache_GetTypeMethod();
    // Set static field: static private System.Reflection.MethodInfo _cache_GetTypeMethod
    static void _set__cache_GetTypeMethod(System::Reflection::MethodInfo* value);
    // Get static field: static private System.Reflection.MethodInfo _cache_GetHashCodeMethod
    static System::Reflection::MethodInfo* _get__cache_GetHashCodeMethod();
    // Set static field: static private System.Reflection.MethodInfo _cache_GetHashCodeMethod
    static void _set__cache_GetHashCodeMethod(System::Reflection::MethodInfo* value);
    // System.Void .ctor(System.Type type, System.String activationUrl, System.Object[] activationAttributes)
    // Offset: 0x12D2F9C
    static RemotingProxy* New_ctor(System::Type* type, ::Il2CppString* activationUrl, ::Array<::Il2CppObject*>* activationAttributes);
    // System.Void AttachIdentity(System.Runtime.Remoting.Identity identity)
    // Offset: 0x12D5218
    void AttachIdentity(System::Runtime::Remoting::Identity* identity);
    // System.Runtime.Remoting.Messaging.IMessage ActivateRemoteObject(System.Runtime.Remoting.Messaging.IMethodMessage request)
    // Offset: 0x12D3DA0
    System::Runtime::Remoting::Messaging::IMessage* ActivateRemoteObject(System::Runtime::Remoting::Messaging::IMethodMessage* request);
    // static private System.Void .cctor()
    // Offset: 0x12D5AB4
    static void _cctor();
    // System.Void .ctor(System.Type type, System.Runtime.Remoting.ClientIdentity identity)
    // Offset: 0x12D4C00
    // Implemented from: System.Runtime.Remoting.Proxies.RealProxy
    // Base method: System.Void RealProxy::.ctor(System.Type type, System.Runtime.Remoting.ClientIdentity identity)
    static RemotingProxy* New_ctor(System::Type* type, System::Runtime::Remoting::ClientIdentity* identity);
    // public override System.Runtime.Remoting.Messaging.IMessage Invoke(System.Runtime.Remoting.Messaging.IMessage request)
    // Offset: 0x12D4C58
    // Implemented from: System.Runtime.Remoting.Proxies.RealProxy
    // Base method: System.Runtime.Remoting.Messaging.IMessage RealProxy::Invoke(System.Runtime.Remoting.Messaging.IMessage request)
    System::Runtime::Remoting::Messaging::IMessage* Invoke(System::Runtime::Remoting::Messaging::IMessage* request);
    // public System.String get_TypeName()
    // Offset: 0x12D5494
    // Implemented from: System.Runtime.Remoting.IRemotingTypeInfo
    // Base method: System.String IRemotingTypeInfo::get_TypeName()
    ::Il2CppString* get_TypeName();
    // public System.Boolean CanCastTo(System.Type fromType, System.Object o)
    // Offset: 0x12D55D0
    // Implemented from: System.Runtime.Remoting.IRemotingTypeInfo
    // Base method: System.Boolean IRemotingTypeInfo::CanCastTo(System.Type fromType, System.Object o)
    bool CanCastTo(System::Type* fromType, ::Il2CppObject* o);
    // protected override System.Void Finalize()
    // Offset: 0x12D57DC
    // Implemented from: System.Object
    // Base method: System.Void Object::Finalize()
    void Finalize();
  }; // System.Runtime.Remoting.Proxies.RemotingProxy
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::Proxies::RemotingProxy*, "System.Runtime.Remoting.Proxies", "RemotingProxy");
#pragma pack(pop)
