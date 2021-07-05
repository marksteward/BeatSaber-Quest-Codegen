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
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: ServicePoint
  class ServicePoint;
  // Forward declaring type: WebConnection
  class WebConnection;
  // Forward declaring type: HttpWebRequest
  class HttpWebRequest;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: LinkedList`1<T>
  template<typename T>
  class LinkedList_1;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: Queue
  class Queue;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: EventHandler
  class EventHandler;
  // Forward declaring type: TimeSpan
  struct TimeSpan;
  // Forward declaring type: DateTime
  struct DateTime;
}
// Completed forward declares
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.WebConnectionGroup
  class WebConnectionGroup : public ::Il2CppObject {
    public:
    // Nested type: System::Net::WebConnectionGroup::ConnectionState
    class ConnectionState;
    // private System.Net.ServicePoint sPoint
    // Size: 0x8
    // Offset: 0x10
    System::Net::ServicePoint* sPoint;
    // Field size check
    static_assert(sizeof(System::Net::ServicePoint*) == 0x8);
    // private System.String name
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* name;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.Collections.Generic.LinkedList`1<System.Net.WebConnectionGroup/ConnectionState> connections
    // Size: 0x8
    // Offset: 0x20
    System::Collections::Generic::LinkedList_1<System::Net::WebConnectionGroup::ConnectionState*>* connections;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::LinkedList_1<System::Net::WebConnectionGroup::ConnectionState*>*) == 0x8);
    // private System.Collections.Queue queue
    // Size: 0x8
    // Offset: 0x28
    System::Collections::Queue* queue;
    // Field size check
    static_assert(sizeof(System::Collections::Queue*) == 0x8);
    // private System.Boolean closing
    // Size: 0x1
    // Offset: 0x30
    bool closing;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: closing and: ConnectionClosed
    char __padding4[0x7] = {};
    // [CompilerGeneratedAttribute] Offset: 0xD88974
    // private System.EventHandler ConnectionClosed
    // Size: 0x8
    // Offset: 0x38
    System::EventHandler* ConnectionClosed;
    // Field size check
    static_assert(sizeof(System::EventHandler*) == 0x8);
    // Creating value type constructor for type: WebConnectionGroup
    WebConnectionGroup(System::Net::ServicePoint* sPoint_ = {}, ::Il2CppString* name_ = {}, System::Collections::Generic::LinkedList_1<System::Net::WebConnectionGroup::ConnectionState*>* connections_ = {}, System::Collections::Queue* queue_ = {}, bool closing_ = {}, System::EventHandler* ConnectionClosed_ = {}) noexcept : sPoint{sPoint_}, name{name_}, connections{connections_}, queue{queue_}, closing{closing_}, ConnectionClosed{ConnectionClosed_} {}
    // public System.Void .ctor(System.Net.ServicePoint sPoint, System.String name)
    // Offset: 0x15C2A28
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WebConnectionGroup* New_ctor(System::Net::ServicePoint* sPoint, ::Il2CppString* name) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::WebConnectionGroup::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WebConnectionGroup*, creationType>(sPoint, name)));
    }
    // public System.Void add_ConnectionClosed(System.EventHandler value)
    // Offset: 0x15C2AD0
    void add_ConnectionClosed(System::EventHandler* value);
    // public System.Void remove_ConnectionClosed(System.EventHandler value)
    // Offset: 0x15C2B74
    void remove_ConnectionClosed(System::EventHandler* value);
    // private System.Void OnConnectionClosed()
    // Offset: 0x15C2C18
    void OnConnectionClosed();
    // public System.Void Close()
    // Offset: 0x15C2C34
    void Close();
    // public System.Net.WebConnection GetConnection(System.Net.HttpWebRequest request, out System.Boolean created)
    // Offset: 0x15C2EE0
    System::Net::WebConnection* GetConnection(System::Net::HttpWebRequest* request, bool& created);
    // static private System.Void PrepareSharingNtlm(System.Net.WebConnection cnc, System.Net.HttpWebRequest request)
    // Offset: 0x15C30C0
    static void PrepareSharingNtlm(System::Net::WebConnection* cnc, System::Net::HttpWebRequest* request);
    // private System.Net.WebConnectionGroup/ConnectionState FindIdleConnection()
    // Offset: 0x15C33F0
    System::Net::WebConnectionGroup::ConnectionState* FindIdleConnection();
    // private System.Net.WebConnection CreateOrReuseConnection(System.Net.HttpWebRequest request, out System.Boolean created)
    // Offset: 0x15C2F90
    System::Net::WebConnection* CreateOrReuseConnection(System::Net::HttpWebRequest* request, bool& created);
    // public System.String get_Name()
    // Offset: 0x15C3604
    ::Il2CppString* get_Name();
    // System.Collections.Queue get_Queue()
    // Offset: 0x15C360C
    System::Collections::Queue* get_Queue();
    // System.Boolean TryRecycle(System.TimeSpan maxIdleTime, ref System.DateTime idleSince)
    // Offset: 0x15C3614
    bool TryRecycle(System::TimeSpan maxIdleTime, System::DateTime& idleSince);
  }; // System.Net.WebConnectionGroup
  #pragma pack(pop)
  static check_size<sizeof(WebConnectionGroup), 56 + sizeof(System::EventHandler*)> __System_Net_WebConnectionGroupSizeCheck;
  static_assert(sizeof(WebConnectionGroup) == 0x40);
}
DEFINE_IL2CPP_ARG_TYPE(System::Net::WebConnectionGroup*, "System.Net", "WebConnectionGroup");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::WebConnectionGroup::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::WebConnectionGroup::add_ConnectionClosed
// Il2CppName: add_ConnectionClosed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::WebConnectionGroup::*)(System::EventHandler*)>(&System::Net::WebConnectionGroup::add_ConnectionClosed)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "EventHandler")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebConnectionGroup*), "add_ConnectionClosed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Net::WebConnectionGroup::remove_ConnectionClosed
// Il2CppName: remove_ConnectionClosed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::WebConnectionGroup::*)(System::EventHandler*)>(&System::Net::WebConnectionGroup::remove_ConnectionClosed)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "EventHandler")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebConnectionGroup*), "remove_ConnectionClosed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Net::WebConnectionGroup::OnConnectionClosed
// Il2CppName: OnConnectionClosed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::WebConnectionGroup::*)()>(&System::Net::WebConnectionGroup::OnConnectionClosed)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebConnectionGroup*), "OnConnectionClosed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::WebConnectionGroup::Close
// Il2CppName: Close
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::WebConnectionGroup::*)()>(&System::Net::WebConnectionGroup::Close)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebConnectionGroup*), "Close", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::WebConnectionGroup::GetConnection
// Il2CppName: GetConnection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::WebConnection* (System::Net::WebConnectionGroup::*)(System::Net::HttpWebRequest*, bool&)>(&System::Net::WebConnectionGroup::GetConnection)> {
  static const MethodInfo* get() {
    static auto* request = &::il2cpp_utils::GetClassFromName("System.Net", "HttpWebRequest")->byval_arg;
    static auto* created = &::il2cpp_utils::GetClassFromName("System", "Boolean")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebConnectionGroup*), "GetConnection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{request, created});
  }
};
// Writing MetadataGetter for method: System::Net::WebConnectionGroup::PrepareSharingNtlm
// Il2CppName: PrepareSharingNtlm
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::Net::WebConnection*, System::Net::HttpWebRequest*)>(&System::Net::WebConnectionGroup::PrepareSharingNtlm)> {
  static const MethodInfo* get() {
    static auto* cnc = &::il2cpp_utils::GetClassFromName("System.Net", "WebConnection")->byval_arg;
    static auto* request = &::il2cpp_utils::GetClassFromName("System.Net", "HttpWebRequest")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebConnectionGroup*), "PrepareSharingNtlm", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{cnc, request});
  }
};
// Writing MetadataGetter for method: System::Net::WebConnectionGroup::FindIdleConnection
// Il2CppName: FindIdleConnection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::WebConnectionGroup::ConnectionState* (System::Net::WebConnectionGroup::*)()>(&System::Net::WebConnectionGroup::FindIdleConnection)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebConnectionGroup*), "FindIdleConnection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::WebConnectionGroup::CreateOrReuseConnection
// Il2CppName: CreateOrReuseConnection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::WebConnection* (System::Net::WebConnectionGroup::*)(System::Net::HttpWebRequest*, bool&)>(&System::Net::WebConnectionGroup::CreateOrReuseConnection)> {
  static const MethodInfo* get() {
    static auto* request = &::il2cpp_utils::GetClassFromName("System.Net", "HttpWebRequest")->byval_arg;
    static auto* created = &::il2cpp_utils::GetClassFromName("System", "Boolean")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebConnectionGroup*), "CreateOrReuseConnection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{request, created});
  }
};
// Writing MetadataGetter for method: System::Net::WebConnectionGroup::get_Name
// Il2CppName: get_Name
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Net::WebConnectionGroup::*)()>(&System::Net::WebConnectionGroup::get_Name)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebConnectionGroup*), "get_Name", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::WebConnectionGroup::get_Queue
// Il2CppName: get_Queue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Queue* (System::Net::WebConnectionGroup::*)()>(&System::Net::WebConnectionGroup::get_Queue)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebConnectionGroup*), "get_Queue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::WebConnectionGroup::TryRecycle
// Il2CppName: TryRecycle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::WebConnectionGroup::*)(System::TimeSpan, System::DateTime&)>(&System::Net::WebConnectionGroup::TryRecycle)> {
  static const MethodInfo* get() {
    static auto* maxIdleTime = &::il2cpp_utils::GetClassFromName("System", "TimeSpan")->byval_arg;
    static auto* idleSince = &::il2cpp_utils::GetClassFromName("System", "DateTime")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebConnectionGroup*), "TryRecycle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{maxIdleTime, idleSince});
  }
};
