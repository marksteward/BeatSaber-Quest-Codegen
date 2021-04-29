// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::Remoting::Messaging
namespace System::Runtime::Remoting::Messaging {
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: Hashtable
  class Hashtable;
}
// Completed forward declares
// Type namespace: System.Runtime.Remoting.Messaging
namespace System::Runtime::Remoting::Messaging {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Remoting.Messaging.IllogicalCallContext
  class IllogicalCallContext : public ::Il2CppObject {
    public:
    // Nested type: System::Runtime::Remoting::Messaging::IllogicalCallContext::Reader
    struct Reader;
    // private System.Collections.Hashtable m_Datastore
    // Size: 0x8
    // Offset: 0x10
    System::Collections::Hashtable* m_Datastore;
    // Field size check
    static_assert(sizeof(System::Collections::Hashtable*) == 0x8);
    // private System.Object m_HostContext
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppObject* m_HostContext;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // Creating value type constructor for type: IllogicalCallContext
    IllogicalCallContext(System::Collections::Hashtable* m_Datastore_ = {}, ::Il2CppObject* m_HostContext_ = {}) noexcept : m_Datastore{m_Datastore_}, m_HostContext{m_HostContext_} {}
    // private System.Collections.Hashtable get_Datastore()
    // Offset: 0x188DB3C
    System::Collections::Hashtable* get_Datastore();
    // System.Object get_HostContext()
    // Offset: 0x188DBA8
    ::Il2CppObject* get_HostContext();
    // System.Void set_HostContext(System.Object value)
    // Offset: 0x188DBB0
    void set_HostContext(::Il2CppObject* value);
    // System.Boolean get_HasUserData()
    // Offset: 0x188DBB8
    bool get_HasUserData();
    // public System.Void FreeNamedDataSlot(System.String name)
    // Offset: 0x188A8D4
    void FreeNamedDataSlot(::Il2CppString* name);
    // public System.Object GetData(System.String name)
    // Offset: 0x188DBE8
    ::Il2CppObject* GetData(::Il2CppString* name);
    // public System.Void SetData(System.String name, System.Object data)
    // Offset: 0x188A894
    void SetData(::Il2CppString* name, ::Il2CppObject* data);
    // public System.Runtime.Remoting.Messaging.IllogicalCallContext CreateCopy()
    // Offset: 0x188DC20
    System::Runtime::Remoting::Messaging::IllogicalCallContext* CreateCopy();
    // public System.Void .ctor()
    // Offset: 0x188DE78
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IllogicalCallContext* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::Remoting::Messaging::IllogicalCallContext::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IllogicalCallContext*, creationType>()));
    }
  }; // System.Runtime.Remoting.Messaging.IllogicalCallContext
  #pragma pack(pop)
  static check_size<sizeof(IllogicalCallContext), 24 + sizeof(::Il2CppObject*)> __System_Runtime_Remoting_Messaging_IllogicalCallContextSizeCheck;
  static_assert(sizeof(IllogicalCallContext) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::Messaging::IllogicalCallContext*, "System.Runtime.Remoting.Messaging", "IllogicalCallContext");
