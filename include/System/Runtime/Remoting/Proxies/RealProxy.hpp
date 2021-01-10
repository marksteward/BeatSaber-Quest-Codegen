// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// WARNING Layout: Sequential may not be correctly taken into account!
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
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
  // Forward declaring type: Exception
  class Exception;
}
// Forward declaring namespace: System::Runtime::Remoting::Contexts
namespace System::Runtime::Remoting::Contexts {
  // Forward declaring type: Context
  class Context;
}
// Forward declaring namespace: System::Runtime::Remoting
namespace System::Runtime::Remoting {
  // Forward declaring type: Identity
  class Identity;
  // Forward declaring type: ClientIdentity
  class ClientIdentity;
}
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
  // Skipping declaration: StreamingContext because it is already included!
}
// Forward declaring namespace: System::Runtime::Remoting::Messaging
namespace System::Runtime::Remoting::Messaging {
  // Forward declaring type: IMessage
  class IMessage;
  // Forward declaring type: IMethodReturnMessage
  class IMethodReturnMessage;
  // Forward declaring type: MonoMethodMessage
  class MonoMethodMessage;
}
// Completed forward declares
// Type namespace: System.Runtime.Remoting.Proxies
namespace System::Runtime::Remoting::Proxies {
  // Size: 0x50
  // Autogenerated type: System.Runtime.Remoting.Proxies.RealProxy
  // [] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: D3AD24
  class RealProxy : public ::Il2CppObject {
    public:
    // private System.Type class_to_proxy
    // Size: 0x8
    // Offset: 0x10
    System::Type* class_to_proxy;
    // Field size check
    static_assert(sizeof(System::Type*) == 0x8);
    // System.Runtime.Remoting.Contexts.Context _targetContext
    // Size: 0x8
    // Offset: 0x18
    System::Runtime::Remoting::Contexts::Context* targetContext;
    // Field size check
    static_assert(sizeof(System::Runtime::Remoting::Contexts::Context*) == 0x8);
    // System.MarshalByRefObject _server
    // Size: 0x8
    // Offset: 0x20
    System::MarshalByRefObject* server;
    // Field size check
    static_assert(sizeof(System::MarshalByRefObject*) == 0x8);
    // private System.Int32 _targetDomainId
    // Size: 0x4
    // Offset: 0x28
    int targetDomainId;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: targetDomainId and: targetUri
    char __padding3[0x4] = {};
    // System.String _targetUri
    // Size: 0x8
    // Offset: 0x30
    ::Il2CppString* targetUri;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // System.Runtime.Remoting.Identity _objectIdentity
    // Size: 0x8
    // Offset: 0x38
    System::Runtime::Remoting::Identity* objectIdentity;
    // Field size check
    static_assert(sizeof(System::Runtime::Remoting::Identity*) == 0x8);
    // private System.Object _objTP
    // Size: 0x8
    // Offset: 0x40
    ::Il2CppObject* objTP;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // private System.Object _stubData
    // Size: 0x8
    // Offset: 0x48
    ::Il2CppObject* stubData;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // Creating value type constructor for type: RealProxy
    RealProxy(System::Type* class_to_proxy_ = {}, System::Runtime::Remoting::Contexts::Context* targetContext_ = {}, System::MarshalByRefObject* server_ = {}, int targetDomainId_ = {}, ::Il2CppString* targetUri_ = {}, System::Runtime::Remoting::Identity* objectIdentity_ = {}, ::Il2CppObject* objTP_ = {}, ::Il2CppObject* stubData_ = {}) noexcept : class_to_proxy{class_to_proxy_}, targetContext{targetContext_}, server{server_}, targetDomainId{targetDomainId_}, targetUri{targetUri_}, objectIdentity{objectIdentity_}, objTP{objTP_}, stubData{stubData_} {}
    // protected System.Void .ctor(System.Type classToProxy)
    // Offset: 0x133295C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RealProxy* New_ctor(System::Type* classToProxy) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::Remoting::Proxies::RealProxy::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RealProxy*, creationType>(classToProxy)));
    }
    // System.Void .ctor(System.Type classToProxy, System.Runtime.Remoting.ClientIdentity identity)
    // Offset: 0x1332ACC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RealProxy* New_ctor(System::Type* classToProxy, System::Runtime::Remoting::ClientIdentity* identity) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::Remoting::Proxies::RealProxy::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RealProxy*, creationType>(classToProxy, identity)));
    }
    // protected System.Void .ctor(System.Type classToProxy, System.IntPtr stub, System.Object stubData)
    // Offset: 0x13329B4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RealProxy* New_ctor(System::Type* classToProxy, System::IntPtr stub, ::Il2CppObject* stubData) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::Remoting::Proxies::RealProxy::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RealProxy*, creationType>(classToProxy, stub, stubData)));
    }
    // static private System.Type InternalGetProxyType(System.Object transparentProxy)
    // Offset: 0x1332B38
    static System::Type* InternalGetProxyType(::Il2CppObject* transparentProxy);
    // public System.Type GetProxiedType()
    // Offset: 0x1332B3C
    System::Type* GetProxiedType();
    // public System.Void GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x1332BE8
    void GetObjectData(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context);
    // System.Runtime.Remoting.Identity get_ObjectIdentity()
    // Offset: 0x1332C8C
    System::Runtime::Remoting::Identity* get_ObjectIdentity();
    // System.Void set_ObjectIdentity(System.Runtime.Remoting.Identity value)
    // Offset: 0x1332C94
    void set_ObjectIdentity(System::Runtime::Remoting::Identity* value);
    // public System.Runtime.Remoting.Messaging.IMessage Invoke(System.Runtime.Remoting.Messaging.IMessage msg)
    // Offset: 0xFFFFFFFF
    System::Runtime::Remoting::Messaging::IMessage* Invoke(System::Runtime::Remoting::Messaging::IMessage* msg);
    // static System.Object PrivateInvoke(System.Runtime.Remoting.Proxies.RealProxy rp, System.Runtime.Remoting.Messaging.IMessage msg, out System.Exception exc, out System.Object[] out_args)
    // Offset: 0x1332C9C
    static ::Il2CppObject* PrivateInvoke(System::Runtime::Remoting::Proxies::RealProxy* rp, System::Runtime::Remoting::Messaging::IMessage* msg, System::Exception*& exc, ::Array<::Il2CppObject*>*& out_args);
    // System.Object InternalGetTransparentProxy(System.String className)
    // Offset: 0x1333D50
    ::Il2CppObject* InternalGetTransparentProxy(::Il2CppString* className);
    // public System.Object GetTransparentProxy()
    // Offset: 0x1333D54
    ::Il2CppObject* GetTransparentProxy();
    // protected System.Void AttachServer(System.MarshalByRefObject s)
    // Offset: 0x1333ED4
    void AttachServer(System::MarshalByRefObject* s);
    // System.Void SetTargetDomain(System.Int32 domainId)
    // Offset: 0x1333EDC
    void SetTargetDomain(int domainId);
    // System.Object GetAppDomainTarget()
    // Offset: 0x1333EE4
    ::Il2CppObject* GetAppDomainTarget();
    // static private System.Object[] ProcessResponse(System.Runtime.Remoting.Messaging.IMethodReturnMessage mrm, System.Runtime.Remoting.Messaging.MonoMethodMessage call)
    // Offset: 0x1333664
    static ::Array<::Il2CppObject*>* ProcessResponse(System::Runtime::Remoting::Messaging::IMethodReturnMessage* mrm, System::Runtime::Remoting::Messaging::MonoMethodMessage* call);
    // protected System.Void .ctor()
    // Offset: 0x133294C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RealProxy* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::Remoting::Proxies::RealProxy::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RealProxy*, creationType>()));
    }
  }; // System.Runtime.Remoting.Proxies.RealProxy
  static check_size<sizeof(RealProxy), 72 + sizeof(::Il2CppObject*)> __System_Runtime_Remoting_Proxies_RealProxySizeCheck;
  static_assert(sizeof(RealProxy) == 0x50);
}
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::Proxies::RealProxy*, "System.Runtime.Remoting.Proxies", "RealProxy");
#pragma pack(pop)
