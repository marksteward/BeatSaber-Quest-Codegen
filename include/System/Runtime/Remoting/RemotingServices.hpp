// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::Remoting
namespace System::Runtime::Remoting {
  // Forward declaring type: ObjRef
  class ObjRef;
  // Forward declaring type: ActivatedClientTypeEntry
  class ActivatedClientTypeEntry;
  // Forward declaring type: WellKnownClientTypeEntry
  class WellKnownClientTypeEntry;
  // Forward declaring type: Identity
  class Identity;
  // Forward declaring type: ClientIdentity
  class ClientIdentity;
  // Forward declaring type: ClientActivatedIdentity
  class ClientActivatedIdentity;
  // Forward declaring type: ServerIdentity
  class ServerIdentity;
  // Forward declaring type: WellKnownObjectMode
  struct WellKnownObjectMode;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: Hashtable
  class Hashtable;
}
// Forward declaring namespace: System::Runtime::Serialization::Formatters::Binary
namespace System::Runtime::Serialization::Formatters::Binary {
  // Forward declaring type: BinaryFormatter
  class BinaryFormatter;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: MethodInfo
  class MethodInfo;
  // Forward declaring type: MethodBase
  class MethodBase;
  // Forward declaring type: ParameterInfo
  class ParameterInfo;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
  // Forward declaring type: MarshalByRefObject
  class MarshalByRefObject;
  // Forward declaring type: Exception
  class Exception;
}
// Forward declaring namespace: System::Runtime::Remoting::Messaging
namespace System::Runtime::Remoting::Messaging {
  // Forward declaring type: IMethodReturnMessage
  class IMethodReturnMessage;
  // Forward declaring type: IMethodCallMessage
  class IMethodCallMessage;
  // Forward declaring type: IMethodMessage
  class IMethodMessage;
  // Forward declaring type: IMessageSink
  class IMessageSink;
  // Forward declaring type: IMessage
  class IMessage;
}
// Forward declaring namespace: System::Runtime::Remoting::Proxies
namespace System::Runtime::Remoting::Proxies {
  // Forward declaring type: RealProxy
  class RealProxy;
}
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
  // Forward declaring type: StreamingContext
  struct StreamingContext;
}
// Completed forward declares
// Type namespace: System.Runtime.Remoting
namespace System::Runtime::Remoting {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Remoting.RemotingServices
  // [] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: D3AC44
  class RemotingServices : public ::Il2CppObject {
    public:
    // Nested type: System::Runtime::Remoting::RemotingServices::CACD
    class CACD;
    // Creating value type constructor for type: RemotingServices
    RemotingServices() noexcept {}
    // Get static field: static private System.Collections.Hashtable uri_hash
    static System::Collections::Hashtable* _get_uri_hash();
    // Set static field: static private System.Collections.Hashtable uri_hash
    static void _set_uri_hash(System::Collections::Hashtable* value);
    // Get static field: static private System.Runtime.Serialization.Formatters.Binary.BinaryFormatter _serializationFormatter
    static System::Runtime::Serialization::Formatters::Binary::BinaryFormatter* _get__serializationFormatter();
    // Set static field: static private System.Runtime.Serialization.Formatters.Binary.BinaryFormatter _serializationFormatter
    static void _set__serializationFormatter(System::Runtime::Serialization::Formatters::Binary::BinaryFormatter* value);
    // Get static field: static private System.Runtime.Serialization.Formatters.Binary.BinaryFormatter _deserializationFormatter
    static System::Runtime::Serialization::Formatters::Binary::BinaryFormatter* _get__deserializationFormatter();
    // Set static field: static private System.Runtime.Serialization.Formatters.Binary.BinaryFormatter _deserializationFormatter
    static void _set__deserializationFormatter(System::Runtime::Serialization::Formatters::Binary::BinaryFormatter* value);
    // Get static field: static private System.String app_id
    static ::Il2CppString* _get_app_id();
    // Set static field: static private System.String app_id
    static void _set_app_id(::Il2CppString* value);
    // Get static field: static private readonly System.Object app_id_lock
    static ::Il2CppObject* _get_app_id_lock();
    // Set static field: static private readonly System.Object app_id_lock
    static void _set_app_id_lock(::Il2CppObject* value);
    // Get static field: static private System.Int32 next_id
    static int _get_next_id();
    // Set static field: static private System.Int32 next_id
    static void _set_next_id(int value);
    // Get static field: static private readonly System.Reflection.MethodInfo FieldSetterMethod
    static System::Reflection::MethodInfo* _get_FieldSetterMethod();
    // Set static field: static private readonly System.Reflection.MethodInfo FieldSetterMethod
    static void _set_FieldSetterMethod(System::Reflection::MethodInfo* value);
    // Get static field: static private readonly System.Reflection.MethodInfo FieldGetterMethod
    static System::Reflection::MethodInfo* _get_FieldGetterMethod();
    // Set static field: static private readonly System.Reflection.MethodInfo FieldGetterMethod
    static void _set_FieldGetterMethod(System::Reflection::MethodInfo* value);
    // static private System.Void .cctor()
    // Offset: 0x1338098
    static void _cctor();
    // static System.Object InternalExecute(System.Reflection.MethodBase method, System.Object obj, System.Object[] parameters, out System.Object[] out_args)
    // Offset: 0x13383DC
    static ::Il2CppObject* InternalExecute(System::Reflection::MethodBase* method, ::Il2CppObject* obj, ::Array<::Il2CppObject*>* parameters, ::Array<::Il2CppObject*>*& out_args);
    // static System.Reflection.MethodBase GetVirtualMethod(System.Type type, System.Reflection.MethodBase method)
    // Offset: 0x132AD68
    static System::Reflection::MethodBase* GetVirtualMethod(System::Type* type, System::Reflection::MethodBase* method);
    // static public System.Boolean IsTransparentProxy(System.Object proxy)
    // Offset: 0x132DA88
    static bool IsTransparentProxy(::Il2CppObject* proxy);
    // static System.Runtime.Remoting.Messaging.IMethodReturnMessage InternalExecuteMessage(System.MarshalByRefObject target, System.Runtime.Remoting.Messaging.IMethodCallMessage reqMsg)
    // Offset: 0x132F768
    static System::Runtime::Remoting::Messaging::IMethodReturnMessage* InternalExecuteMessage(System::MarshalByRefObject* target, System::Runtime::Remoting::Messaging::IMethodCallMessage* reqMsg);
    // static public System.Object Connect(System.Type classToProxy, System.String url)
    // Offset: 0x13383E0
    static ::Il2CppObject* Connect(System::Type* classToProxy, ::Il2CppString* url);
    // static public System.Object Connect(System.Type classToProxy, System.String url, System.Object data)
    // Offset: 0x13384FC
    static ::Il2CppObject* Connect(System::Type* classToProxy, ::Il2CppString* url, ::Il2CppObject* data);
    // static public System.Type GetServerTypeForUri(System.String URI)
    // Offset: 0x132A910
    static System::Type* GetServerTypeForUri(::Il2CppString* URI);
    // static public System.Object Unmarshal(System.Runtime.Remoting.ObjRef objectRef)
    // Offset: 0x1331DB0
    static ::Il2CppObject* Unmarshal(System::Runtime::Remoting::ObjRef* objectRef);
    // static public System.Object Unmarshal(System.Runtime.Remoting.ObjRef objectRef, System.Boolean fRefine)
    // Offset: 0x1338598
    static ::Il2CppObject* Unmarshal(System::Runtime::Remoting::ObjRef* objectRef, bool fRefine);
    // static public System.Runtime.Remoting.ObjRef Marshal(System.MarshalByRefObject Obj)
    // Offset: 0x1338B18
    static System::Runtime::Remoting::ObjRef* Marshal(System::MarshalByRefObject* Obj);
    // static public System.Runtime.Remoting.ObjRef Marshal(System.MarshalByRefObject Obj, System.String ObjURI, System.Type RequestedType)
    // Offset: 0x1338B84
    static System::Runtime::Remoting::ObjRef* Marshal(System::MarshalByRefObject* Obj, ::Il2CppString* ObjURI, System::Type* RequestedType);
    // static private System.String NewUri()
    // Offset: 0x1338BD8
    static ::Il2CppString* NewUri();
    // static public System.Runtime.Remoting.Proxies.RealProxy GetRealProxy(System.Object proxy)
    // Offset: 0x132DAE8
    static System::Runtime::Remoting::Proxies::RealProxy* GetRealProxy(::Il2CppObject* proxy);
    // static public System.Reflection.MethodBase GetMethodBaseFromMethodMessage(System.Runtime.Remoting.Messaging.IMethodMessage msg)
    // Offset: 0x132AD6C
    static System::Reflection::MethodBase* GetMethodBaseFromMethodMessage(System::Runtime::Remoting::Messaging::IMethodMessage* msg);
    // static System.Reflection.MethodBase GetMethodBaseFromName(System.Type type, System.String methodName, System.Type[] signature)
    // Offset: 0x132AB88
    static System::Reflection::MethodBase* GetMethodBaseFromName(System::Type* type, ::Il2CppString* methodName, ::Array<System::Type*>* signature);
    // static private System.Reflection.MethodBase FindInterfaceMethod(System.Type type, System.String methodName, System.Type[] signature)
    // Offset: 0x1339754
    static System::Reflection::MethodBase* FindInterfaceMethod(System::Type* type, ::Il2CppString* methodName, ::Array<System::Type*>* signature);
    // static public System.Void GetObjectData(System.Object obj, System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x132DB3C
    static void GetObjectData(::Il2CppObject* obj, System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context);
    // static public System.Boolean IsOneWay(System.Reflection.MethodBase method)
    // Offset: 0x132D6D0
    static bool IsOneWay(System::Reflection::MethodBase* method);
    // static System.Object CreateClientProxy(System.Runtime.Remoting.ActivatedClientTypeEntry entry, System.Object[] activationAttributes)
    // Offset: 0x13398A4
    static ::Il2CppObject* CreateClientProxy(System::Runtime::Remoting::ActivatedClientTypeEntry* entry, ::Array<::Il2CppObject*>* activationAttributes);
    // static System.Object CreateClientProxy(System.Type objectType, System.String url, System.Object[] activationAttributes)
    // Offset: 0x1339A08
    static ::Il2CppObject* CreateClientProxy(System::Type* objectType, ::Il2CppString* url, ::Array<::Il2CppObject*>* activationAttributes);
    // static System.Object CreateClientProxy(System.Runtime.Remoting.WellKnownClientTypeEntry entry)
    // Offset: 0x1339C10
    static ::Il2CppObject* CreateClientProxy(System::Runtime::Remoting::WellKnownClientTypeEntry* entry);
    // static System.Object CreateClientProxyForContextBound(System.Type type, System.Object[] activationAttributes)
    // Offset: 0x1339C88
    static ::Il2CppObject* CreateClientProxyForContextBound(System::Type* type, ::Array<::Il2CppObject*>* activationAttributes);
    // static System.Runtime.Remoting.Identity GetIdentityForUri(System.String uri)
    // Offset: 0x133400C
    static System::Runtime::Remoting::Identity* GetIdentityForUri(::Il2CppString* uri);
    // static private System.String RemoveAppNameFromUri(System.String uri)
    // Offset: 0x1339E6C
    static ::Il2CppString* RemoveAppNameFromUri(::Il2CppString* uri);
    // static System.Runtime.Remoting.ClientIdentity GetOrCreateClientIdentity(System.Runtime.Remoting.ObjRef objRef, System.Type proxyType, out System.Object clientProxy)
    // Offset: 0x1339F7C
    static System::Runtime::Remoting::ClientIdentity* GetOrCreateClientIdentity(System::Runtime::Remoting::ObjRef* objRef, System::Type* proxyType, ::Il2CppObject*& clientProxy);
    // static private System.Runtime.Remoting.Messaging.IMessageSink GetClientChannelSinkChain(System.String url, System.Object channelData, out System.String objectUri)
    // Offset: 0x1339B24
    static System::Runtime::Remoting::Messaging::IMessageSink* GetClientChannelSinkChain(::Il2CppString* url, ::Il2CppObject* channelData, ::Il2CppString*& objectUri);
    // static System.Runtime.Remoting.ClientActivatedIdentity CreateContextBoundObjectIdentity(System.Type objectType)
    // Offset: 0x133A488
    static System::Runtime::Remoting::ClientActivatedIdentity* CreateContextBoundObjectIdentity(System::Type* objectType);
    // static System.Runtime.Remoting.ClientActivatedIdentity CreateClientActivatedServerIdentity(System.MarshalByRefObject realObject, System.Type objectType, System.String objectUri)
    // Offset: 0x1339624
    static System::Runtime::Remoting::ClientActivatedIdentity* CreateClientActivatedServerIdentity(System::MarshalByRefObject* realObject, System::Type* objectType, ::Il2CppString* objectUri);
    // static System.Runtime.Remoting.ServerIdentity CreateWellKnownServerIdentity(System.Type objectType, System.String objectUri, System.Runtime.Remoting.WellKnownObjectMode mode)
    // Offset: 0x13369AC
    static System::Runtime::Remoting::ServerIdentity* CreateWellKnownServerIdentity(System::Type* objectType, ::Il2CppString* objectUri, System::Runtime::Remoting::WellKnownObjectMode mode);
    // static private System.Void RegisterServerIdentity(System.Runtime.Remoting.ServerIdentity identity)
    // Offset: 0x1338FA0
    static void RegisterServerIdentity(System::Runtime::Remoting::ServerIdentity* identity);
    // static System.Object GetProxyForRemoteObject(System.Runtime.Remoting.ObjRef objref, System.Type classToProxy)
    // Offset: 0x133284C
    static ::Il2CppObject* GetProxyForRemoteObject(System::Runtime::Remoting::ObjRef* objref, System::Type* classToProxy);
    // static System.Object GetRemoteObject(System.Runtime.Remoting.ObjRef objRef, System.Type proxyType)
    // Offset: 0x1338478
    static ::Il2CppObject* GetRemoteObject(System::Runtime::Remoting::ObjRef* objRef, System::Type* proxyType);
    // static System.Byte[] SerializeCallData(System.Object obj)
    // Offset: 0x133A608
    static ::Array<uint8_t>* SerializeCallData(::Il2CppObject* obj);
    // static System.Object DeserializeCallData(System.Byte[] array)
    // Offset: 0x133A77C
    static ::Il2CppObject* DeserializeCallData(::Array<uint8_t>* array);
    // static System.Byte[] SerializeExceptionData(System.Exception ex)
    // Offset: 0x133A8E4
    static ::Array<uint8_t>* SerializeExceptionData(System::Exception* ex);
    // static private System.Void RegisterInternalChannels()
    // Offset: 0x133837C
    static void RegisterInternalChannels();
    // static System.Void DisposeIdentity(System.Runtime.Remoting.Identity ident)
    // Offset: 0x13350B4
    static void DisposeIdentity(System::Runtime::Remoting::Identity* ident);
    // static System.Runtime.Remoting.Identity GetMessageTargetIdentity(System.Runtime.Remoting.Messaging.IMessage msg)
    // Offset: 0x132E8DC
    static System::Runtime::Remoting::Identity* GetMessageTargetIdentity(System::Runtime::Remoting::Messaging::IMessage* msg);
    // static System.Void SetMessageTargetIdentity(System.Runtime.Remoting.Messaging.IMessage msg, System.Runtime.Remoting.Identity ident)
    // Offset: 0x133A9A4
    static void SetMessageTargetIdentity(System::Runtime::Remoting::Messaging::IMessage* msg, System::Runtime::Remoting::Identity* ident);
    // static System.Boolean UpdateOutArgObject(System.Reflection.ParameterInfo pi, System.Object local, System.Object remote)
    // Offset: 0x1334254
    static bool UpdateOutArgObject(System::Reflection::ParameterInfo* pi, ::Il2CppObject* local, ::Il2CppObject* remote);
    // static private System.String GetNormalizedUri(System.String uri)
    // Offset: 0x1339DEC
    static ::Il2CppString* GetNormalizedUri(::Il2CppString* uri);
  }; // System.Runtime.Remoting.RemotingServices
}
#pragma pack(pop)
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::RemotingServices*, "System.Runtime.Remoting", "RemotingServices");
