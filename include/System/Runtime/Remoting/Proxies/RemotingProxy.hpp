// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Runtime.Remoting.Proxies.RealProxy
#include "System/Runtime/Remoting/Proxies/RealProxy.hpp"
// Including type: System.Runtime.Remoting.IRemotingTypeInfo
#include "System/Runtime/Remoting/IRemotingTypeInfo.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
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
  // Size: 0x68
  // Autogenerated type: System.Runtime.Remoting.Proxies.RemotingProxy
  // [] Offset: FFFFFFFF
  class RemotingProxy : public System::Runtime::Remoting::Proxies::RealProxy/*, public System::Runtime::Remoting::IRemotingTypeInfo*/ {
    public:
    // private System.Runtime.Remoting.Messaging.IMessageSink _sink
    // Size: 0x8
    // Offset: 0x50
    System::Runtime::Remoting::Messaging::IMessageSink* sink;
    // Field size check
    static_assert(sizeof(System::Runtime::Remoting::Messaging::IMessageSink*) == 0x8);
    // private System.Boolean _hasEnvoySink
    // Size: 0x1
    // Offset: 0x58
    bool hasEnvoySink;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: hasEnvoySink and: ctorCall
    char __padding1[0x7] = {};
    // private System.Runtime.Remoting.Messaging.ConstructionCall _ctorCall
    // Size: 0x8
    // Offset: 0x60
    System::Runtime::Remoting::Messaging::ConstructionCall* ctorCall;
    // Field size check
    static_assert(sizeof(System::Runtime::Remoting::Messaging::ConstructionCall*) == 0x8);
    // Creating value type constructor for type: RemotingProxy
    RemotingProxy(System::Runtime::Remoting::Messaging::IMessageSink* sink_ = {}, bool hasEnvoySink_ = {}, System::Runtime::Remoting::Messaging::ConstructionCall* ctorCall_ = {}) noexcept : sink{sink_}, hasEnvoySink{hasEnvoySink_}, ctorCall{ctorCall_} {}
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
    // Offset: 0x1332788
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RemotingProxy* New_ctor(System::Type* type, ::Il2CppString* activationUrl, ::Array<::Il2CppObject*>* activationAttributes) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::Remoting::Proxies::RemotingProxy::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RemotingProxy*, creationType>(type, activationUrl, activationAttributes)));
    }
    // System.Void AttachIdentity(System.Runtime.Remoting.Identity identity)
    // Offset: 0x1334A04
    void AttachIdentity(System::Runtime::Remoting::Identity* identity);
    // System.Runtime.Remoting.Messaging.IMessage ActivateRemoteObject(System.Runtime.Remoting.Messaging.IMethodMessage request)
    // Offset: 0x133358C
    System::Runtime::Remoting::Messaging::IMessage* ActivateRemoteObject(System::Runtime::Remoting::Messaging::IMethodMessage* request);
    // static private System.Void .cctor()
    // Offset: 0x13352A0
    static void _cctor();
    // System.Void .ctor(System.Type type, System.Runtime.Remoting.ClientIdentity identity)
    // Offset: 0x13343EC
    // Implemented from: System.Runtime.Remoting.Proxies.RealProxy
    // Base method: System.Void RealProxy::.ctor(System.Type type, System.Runtime.Remoting.ClientIdentity identity)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RemotingProxy* New_ctor(System::Type* type, System::Runtime::Remoting::ClientIdentity* identity) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::Remoting::Proxies::RemotingProxy::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RemotingProxy*, creationType>(type, identity)));
    }
    // public override System.Runtime.Remoting.Messaging.IMessage Invoke(System.Runtime.Remoting.Messaging.IMessage request)
    // Offset: 0x1334444
    // Implemented from: System.Runtime.Remoting.Proxies.RealProxy
    // Base method: System.Runtime.Remoting.Messaging.IMessage RealProxy::Invoke(System.Runtime.Remoting.Messaging.IMessage request)
    System::Runtime::Remoting::Messaging::IMessage* Invoke(System::Runtime::Remoting::Messaging::IMessage* request);
    // public System.String get_TypeName()
    // Offset: 0x1334C80
    // Implemented from: System.Runtime.Remoting.IRemotingTypeInfo
    // Base method: System.String IRemotingTypeInfo::get_TypeName()
    ::Il2CppString* get_TypeName();
    // public System.Boolean CanCastTo(System.Type fromType, System.Object o)
    // Offset: 0x1334DBC
    // Implemented from: System.Runtime.Remoting.IRemotingTypeInfo
    // Base method: System.Boolean IRemotingTypeInfo::CanCastTo(System.Type fromType, System.Object o)
    bool CanCastTo(System::Type* fromType, ::Il2CppObject* o);
    // protected override System.Void Finalize()
    // Offset: 0x1334FC8
    // Implemented from: System.Object
    // Base method: System.Void Object::Finalize()
    void Finalize();
  }; // System.Runtime.Remoting.Proxies.RemotingProxy
  static check_size<sizeof(RemotingProxy), 96 + sizeof(System::Runtime::Remoting::Messaging::ConstructionCall*)> __System_Runtime_Remoting_Proxies_RemotingProxySizeCheck;
  static_assert(sizeof(RemotingProxy) == 0x68);
}
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::Proxies::RemotingProxy*, "System.Runtime.Remoting.Proxies", "RemotingProxy");
#pragma pack(pop)
