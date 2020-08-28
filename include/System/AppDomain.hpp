// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.MarshalByRefObject
#include "System/MarshalByRefObject.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: AssemblyLoadEventHandler
  class AssemblyLoadEventHandler;
  // Forward declaring type: ResolveEventHandler
  class ResolveEventHandler;
  // Forward declaring type: EventHandler
  class EventHandler;
  // Forward declaring type: UnhandledExceptionEventHandler
  class UnhandledExceptionEventHandler;
  // Forward declaring type: EventHandler`1<TEventArgs>
  template<typename TEventArgs>
  class EventHandler_1;
}
// Forward declaring namespace: System::Runtime::ExceptionServices
namespace System::Runtime::ExceptionServices {
  // Forward declaring type: FirstChanceExceptionEventArgs
  class FirstChanceExceptionEventArgs;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Forward declaring namespace: System::Security::Principal
namespace System::Security::Principal {
  // Forward declaring type: IPrincipal
  class IPrincipal;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: Assembly
  class Assembly;
  // Forward declaring type: AssemblyName
  class AssemblyName;
  // Forward declaring type: MethodInfo
  class MethodInfo;
}
// Forward declaring namespace: System::Security::Policy
namespace System::Security::Policy {
  // Forward declaring type: Evidence
  class Evidence;
}
// Forward declaring namespace: System::Runtime::Remoting::Contexts
namespace System::Runtime::Remoting::Contexts {
  // Forward declaring type: Context
  class Context;
}
// Forward declaring namespace: System::Runtime::Remoting::Messaging
namespace System::Runtime::Remoting::Messaging {
  // Forward declaring type: CADMethodCallMessage
  class CADMethodCallMessage;
  // Forward declaring type: CADMethodReturnMessage
  class CADMethodReturnMessage;
}
// Completed forward declares
// Type namespace: System
namespace System {
  // Autogenerated type: System.AppDomain
  class AppDomain : public System::MarshalByRefObject {
    public:
    // private System.IntPtr _mono_app_domain
    // Offset: 0x18
    System::IntPtr mono_app_domain;
    // private System.Object _evidence
    // Offset: 0x20
    ::Il2CppObject* evidence;
    // private System.Object _granted
    // Offset: 0x28
    ::Il2CppObject* granted;
    // private System.Int32 _principalPolicy
    // Offset: 0x30
    int principalPolicy;
    // private System.AssemblyLoadEventHandler AssemblyLoad
    // Offset: 0x38
    System::AssemblyLoadEventHandler* AssemblyLoad;
    // private System.ResolveEventHandler AssemblyResolve
    // Offset: 0x40
    System::ResolveEventHandler* AssemblyResolve;
    // private System.EventHandler DomainUnload
    // Offset: 0x48
    System::EventHandler* DomainUnload;
    // private System.EventHandler ProcessExit
    // Offset: 0x50
    System::EventHandler* ProcessExit;
    // private System.ResolveEventHandler ResourceResolve
    // Offset: 0x58
    System::ResolveEventHandler* ResourceResolve;
    // private System.ResolveEventHandler TypeResolve
    // Offset: 0x60
    System::ResolveEventHandler* TypeResolve;
    // private System.UnhandledExceptionEventHandler UnhandledException
    // Offset: 0x68
    System::UnhandledExceptionEventHandler* UnhandledException;
    // private System.EventHandler`1<System.Runtime.ExceptionServices.FirstChanceExceptionEventArgs> FirstChanceException
    // Offset: 0x70
    System::EventHandler_1<System::Runtime::ExceptionServices::FirstChanceExceptionEventArgs*>* FirstChanceException;
    // private System.Object _domain_manager
    // Offset: 0x78
    ::Il2CppObject* domain_manager;
    // private System.ResolveEventHandler ReflectionOnlyAssemblyResolve
    // Offset: 0x80
    System::ResolveEventHandler* ReflectionOnlyAssemblyResolve;
    // private System.Object _activation
    // Offset: 0x88
    ::Il2CppObject* activation;
    // private System.Object _applicationIdentity
    // Offset: 0x90
    ::Il2CppObject* applicationIdentity;
    // private System.Collections.Generic.List`1<System.String> compatibility_switch
    // Offset: 0x98
    System::Collections::Generic::List_1<::Il2CppString*>* compatibility_switch;
    // Deleting conversion operator: operator ::Il2CppObject*
    constexpr operator ::Il2CppObject*() const = delete;
    // Get static field: static private System.String _process_guid
    static ::Il2CppString* _get__process_guid();
    // Set static field: static private System.String _process_guid
    static void _set__process_guid(::Il2CppString* value);
    // Get static field: static private System.Collections.Generic.Dictionary`2<System.String,System.Object> type_resolve_in_progress
    static System::Collections::Generic::Dictionary_2<::Il2CppString*, ::Il2CppObject*>* _get_type_resolve_in_progress();
    // Set static field: static private System.Collections.Generic.Dictionary`2<System.String,System.Object> type_resolve_in_progress
    static void _set_type_resolve_in_progress(System::Collections::Generic::Dictionary_2<::Il2CppString*, ::Il2CppObject*>* value);
    // Get static field: static private System.Collections.Generic.Dictionary`2<System.String,System.Object> assembly_resolve_in_progress
    static System::Collections::Generic::Dictionary_2<::Il2CppString*, ::Il2CppObject*>* _get_assembly_resolve_in_progress();
    // Set static field: static private System.Collections.Generic.Dictionary`2<System.String,System.Object> assembly_resolve_in_progress
    static void _set_assembly_resolve_in_progress(System::Collections::Generic::Dictionary_2<::Il2CppString*, ::Il2CppObject*>* value);
    // Get static field: static private System.Collections.Generic.Dictionary`2<System.String,System.Object> assembly_resolve_in_progress_refonly
    static System::Collections::Generic::Dictionary_2<::Il2CppString*, ::Il2CppObject*>* _get_assembly_resolve_in_progress_refonly();
    // Set static field: static private System.Collections.Generic.Dictionary`2<System.String,System.Object> assembly_resolve_in_progress_refonly
    static void _set_assembly_resolve_in_progress_refonly(System::Collections::Generic::Dictionary_2<::Il2CppString*, ::Il2CppObject*>* value);
    // Get static field: static private System.Object _principal
    static ::Il2CppObject* _get__principal();
    // Set static field: static private System.Object _principal
    static void _set__principal(::Il2CppObject* value);
    // Get static field: static private System.AppDomain default_domain
    static System::AppDomain* _get_default_domain();
    // Set static field: static private System.AppDomain default_domain
    static void _set_default_domain(System::AppDomain* value);
    // private System.String getFriendlyName()
    // Offset: 0x10BE538
    ::Il2CppString* getFriendlyName();
    // public System.String get_FriendlyName()
    // Offset: 0x10BE53C
    ::Il2CppString* get_FriendlyName();
    // System.Security.Principal.IPrincipal get_DefaultPrincipal()
    // Offset: 0x10BE540
    System::Security::Principal::IPrincipal* get_DefaultPrincipal();
    // static private System.AppDomain getCurDomain()
    // Offset: 0x10BE6C0
    static System::AppDomain* getCurDomain();
    // static public System.AppDomain get_CurrentDomain()
    // Offset: 0x10BE6C4
    static System::AppDomain* get_CurrentDomain();
    // private System.Reflection.Assembly[] GetAssemblies(System.Boolean refOnly)
    // Offset: 0x10BE6C8
    ::Array<System::Reflection::Assembly*>* GetAssemblies(bool refOnly);
    // public System.Reflection.Assembly[] GetAssemblies()
    // Offset: 0x10BE6D0
    ::Array<System::Reflection::Assembly*>* GetAssemblies();
    // public System.Object GetData(System.String name)
    // Offset: 0x10BE6D8
    ::Il2CppObject* GetData(::Il2CppString* name);
    // System.Reflection.Assembly LoadAssembly(System.String assemblyRef, System.Security.Policy.Evidence securityEvidence, System.Boolean refOnly)
    // Offset: 0x10BE6E4
    System::Reflection::Assembly* LoadAssembly(::Il2CppString* assemblyRef, System::Security::Policy::Evidence* securityEvidence, bool refOnly);
    // System.Reflection.Assembly LoadSatellite(System.Reflection.AssemblyName assemblyRef, System.Boolean throwOnError)
    // Offset: 0x10BE6EC
    System::Reflection::Assembly* LoadSatellite(System::Reflection::AssemblyName* assemblyRef, bool throwOnError);
    // public System.Reflection.Assembly Load(System.String assemblyString)
    // Offset: 0x10BE7F8
    System::Reflection::Assembly* Load(::Il2CppString* assemblyString);
    // System.Reflection.Assembly Load(System.String assemblyString, System.Security.Policy.Evidence assemblySecurity, System.Boolean refonly)
    // Offset: 0x10BE804
    System::Reflection::Assembly* Load(::Il2CppString* assemblyString, System::Security::Policy::Evidence* assemblySecurity, bool refonly);
    // static private System.AppDomain InternalSetDomainByID(System.Int32 domain_id)
    // Offset: 0x10BE930
    static System::AppDomain* InternalSetDomainByID(int domain_id);
    // static private System.AppDomain InternalSetDomain(System.AppDomain context)
    // Offset: 0x10BE934
    static System::AppDomain* InternalSetDomain(System::AppDomain* context);
    // static System.Void InternalPushDomainRefByID(System.Int32 domain_id)
    // Offset: 0x10BE938
    static void InternalPushDomainRefByID(int domain_id);
    // static System.Void InternalPopDomainRef()
    // Offset: 0x10BE93C
    static void InternalPopDomainRef();
    // static System.Runtime.Remoting.Contexts.Context InternalSetContext(System.Runtime.Remoting.Contexts.Context context)
    // Offset: 0x10BE940
    static System::Runtime::Remoting::Contexts::Context* InternalSetContext(System::Runtime::Remoting::Contexts::Context* context);
    // static System.Runtime.Remoting.Contexts.Context InternalGetContext()
    // Offset: 0x10BE944
    static System::Runtime::Remoting::Contexts::Context* InternalGetContext();
    // static System.Runtime.Remoting.Contexts.Context InternalGetDefaultContext()
    // Offset: 0x10BE948
    static System::Runtime::Remoting::Contexts::Context* InternalGetDefaultContext();
    // static System.String InternalGetProcessGuid(System.String newguid)
    // Offset: 0x10BE94C
    static ::Il2CppString* InternalGetProcessGuid(::Il2CppString* newguid);
    // static System.Object InvokeInDomainByID(System.Int32 domain_id, System.Reflection.MethodInfo method, System.Object obj, System.Object[] args)
    // Offset: 0x10BE950
    static ::Il2CppObject* InvokeInDomainByID(int domain_id, System::Reflection::MethodInfo* method, ::Il2CppObject* obj, ::Array<::Il2CppObject*>* args);
    // static System.String GetProcessGuid()
    // Offset: 0x10BEAA0
    static ::Il2CppString* GetProcessGuid();
    // static private System.Boolean InternalIsFinalizingForUnload(System.Int32 domain_id)
    // Offset: 0x10BEB60
    static bool InternalIsFinalizingForUnload(int domain_id);
    // public System.Boolean IsFinalizingForUnload()
    // Offset: 0x10BEB64
    bool IsFinalizingForUnload();
    // private System.Int32 getDomainID()
    // Offset: 0x10BEB7C
    int getDomainID();
    // static public System.Int32 GetCurrentThreadId()
    // Offset: 0x10BEB84
    static int GetCurrentThreadId();
    // private System.Void DoAssemblyLoad(System.Reflection.Assembly assembly)
    // Offset: 0x10BEB90
    void DoAssemblyLoad(System::Reflection::Assembly* assembly);
    // private System.Reflection.Assembly DoAssemblyResolve(System.String name, System.Reflection.Assembly requestingAssembly, System.Boolean refonly)
    // Offset: 0x10BEC24
    System::Reflection::Assembly* DoAssemblyResolve(::Il2CppString* name, System::Reflection::Assembly* requestingAssembly, bool refonly);
    // System.Reflection.Assembly DoTypeResolve(System.Object name_or_tb)
    // Offset: 0x10BEEC4
    System::Reflection::Assembly* DoTypeResolve(::Il2CppObject* name_or_tb);
    // System.Reflection.Assembly DoResourceResolve(System.String name, System.Reflection.Assembly requesting)
    // Offset: 0x10BF138
    System::Reflection::Assembly* DoResourceResolve(::Il2CppString* name, System::Reflection::Assembly* requesting);
    // private System.Void DoDomainUnload()
    // Offset: 0x10BF270
    void DoDomainUnload();
    // System.Byte[] GetMarshalledDomainObjRef()
    // Offset: 0x10BF28C
    ::Array<uint8_t>* GetMarshalledDomainObjRef();
    // System.Void ProcessMessageInDomain(System.Byte[] arrRequest, System.Runtime.Remoting.Messaging.CADMethodCallMessage cadMsg, System.Byte[] arrResponse, System.Runtime.Remoting.Messaging.CADMethodReturnMessage cadMrm)
    // Offset: 0x10BF364
    void ProcessMessageInDomain(::Array<uint8_t>* arrRequest, System::Runtime::Remoting::Messaging::CADMethodCallMessage* cadMsg, ::Array<uint8_t>*& arrResponse, System::Runtime::Remoting::Messaging::CADMethodReturnMessage*& cadMrm);
    // public System.Void add_DomainUnload(System.EventHandler value)
    // Offset: 0x10BF4AC
    void add_DomainUnload(System::EventHandler* value);
    // public System.Void remove_DomainUnload(System.EventHandler value)
    // Offset: 0x10BF550
    void remove_DomainUnload(System::EventHandler* value);
    // public System.Void add_ProcessExit(System.EventHandler value)
    // Offset: 0x10BF5F4
    void add_ProcessExit(System::EventHandler* value);
    // public System.Void remove_ProcessExit(System.EventHandler value)
    // Offset: 0x10BF698
    void remove_ProcessExit(System::EventHandler* value);
    // public System.Void add_UnhandledException(System.UnhandledExceptionEventHandler value)
    // Offset: 0x10BF73C
    void add_UnhandledException(System::UnhandledExceptionEventHandler* value);
    // public System.Void remove_UnhandledException(System.UnhandledExceptionEventHandler value)
    // Offset: 0x10BF7E0
    void remove_UnhandledException(System::UnhandledExceptionEventHandler* value);
    // private System.Void .ctor()
    // Offset: 0x10BE530
    // Implemented from: System.MarshalByRefObject
    // Base method: System.Void MarshalByRefObject::.ctor()
    // Base method: System.Void Object::.ctor()
    static AppDomain* New_ctor();
    // public override System.Object InitializeLifetimeService()
    // Offset: 0x10BE6DC
    // Implemented from: System.MarshalByRefObject
    // Base method: System.Object MarshalByRefObject::InitializeLifetimeService()
    ::Il2CppObject* InitializeLifetimeService();
    // public override System.String ToString()
    // Offset: 0x10BEB8C
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
  }; // System.AppDomain
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::AppDomain*, "System", "AppDomain");
#pragma pack(pop)
