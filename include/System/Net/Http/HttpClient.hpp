// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Net.Http.HttpMessageInvoker
#include "System/Net/Http/HttpMessageInvoker.hpp"
// Including type: System.TimeSpan
#include "System/TimeSpan.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net::Http
namespace System::Net::Http {
  // Forward declaring type: HttpResponseMessage
  class HttpResponseMessage;
  // Forward declaring type: HttpCompletionOption
  struct HttpCompletionOption;
  // Forward declaring type: HttpRequestMessage
  class HttpRequestMessage;
  // Forward declaring type: HttpMessageHandler
  class HttpMessageHandler;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Uri
  class Uri;
}
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: CancellationTokenSource
  class CancellationTokenSource;
  // Forward declaring type: CancellationToken
  struct CancellationToken;
}
// Forward declaring namespace: System::Net::Http::Headers
namespace System::Net::Http::Headers {
  // Forward declaring type: HttpRequestHeaders
  class HttpRequestHeaders;
}
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task`1<TResult>
  template<typename TResult>
  class Task_1;
}
// Completed forward declares
// Type namespace: System.Net.Http
namespace System::Net::Http {
  // Size: 0x50
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.Http.HttpClient
  // [TokenAttribute] Offset: FFFFFFFF
  class HttpClient : public System::Net::Http::HttpMessageInvoker {
    public:
    // Writing base type padding for base size: 0x19 to desired offset: 0x20
    char ___base_padding[0x7] = {};
    // Nested type: System::Net::Http::HttpClient::$SendAsyncWorker$d__47
    struct $SendAsyncWorker$d__47;
    // Nested type: System::Net::Http::HttpClient::$GetStringAsync$d__52
    struct $GetStringAsync$d__52;
    // private System.Uri base_address
    // Size: 0x8
    // Offset: 0x20
    System::Uri* base_address;
    // Field size check
    static_assert(sizeof(System::Uri*) == 0x8);
    // private System.Threading.CancellationTokenSource cts
    // Size: 0x8
    // Offset: 0x28
    System::Threading::CancellationTokenSource* cts;
    // Field size check
    static_assert(sizeof(System::Threading::CancellationTokenSource*) == 0x8);
    // private System.Boolean disposed
    // Size: 0x1
    // Offset: 0x30
    bool disposed;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: disposed and: headers
    char __padding2[0x7] = {};
    // private System.Net.Http.Headers.HttpRequestHeaders headers
    // Size: 0x8
    // Offset: 0x38
    System::Net::Http::Headers::HttpRequestHeaders* headers;
    // Field size check
    static_assert(sizeof(System::Net::Http::Headers::HttpRequestHeaders*) == 0x8);
    // private System.Int64 buffer_size
    // Size: 0x8
    // Offset: 0x40
    int64_t buffer_size;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // private System.TimeSpan timeout
    // Size: 0x8
    // Offset: 0x48
    System::TimeSpan timeout;
    // Field size check
    static_assert(sizeof(System::TimeSpan) == 0x8);
    // Creating value type constructor for type: HttpClient
    HttpClient(System::Uri* base_address_ = {}, System::Threading::CancellationTokenSource* cts_ = {}, bool disposed_ = {}, System::Net::Http::Headers::HttpRequestHeaders* headers_ = {}, int64_t buffer_size_ = {}, System::TimeSpan timeout_ = {}) noexcept : base_address{base_address_}, cts{cts_}, disposed{disposed_}, headers{headers_}, buffer_size{buffer_size_}, timeout{timeout_} {}
    // Get static field: static private readonly System.TimeSpan TimeoutDefault
    static System::TimeSpan _get_TimeoutDefault();
    // Set static field: static private readonly System.TimeSpan TimeoutDefault
    static void _set_TimeoutDefault(System::TimeSpan value);
    // public System.Int64 get_MaxResponseContentBufferSize()
    // Offset: 0x156F218
    int64_t get_MaxResponseContentBufferSize();
    // public System.Void set_Timeout(System.TimeSpan value)
    // Offset: 0x156F220
    void set_Timeout(System::TimeSpan value);
    // static private System.Void .cctor()
    // Offset: 0x156FC60
    static void _cctor();
    // public System.Threading.Tasks.Task`1<System.Net.Http.HttpResponseMessage> GetAsync(System.String requestUri, System.Net.Http.HttpCompletionOption completionOption)
    // Offset: 0x156F410
    System::Threading::Tasks::Task_1<System::Net::Http::HttpResponseMessage*>* GetAsync(::Il2CppString* requestUri, System::Net::Http::HttpCompletionOption completionOption);
    // public System.Threading.Tasks.Task`1<System.Net.Http.HttpResponseMessage> SendAsync(System.Net.Http.HttpRequestMessage request, System.Net.Http.HttpCompletionOption completionOption)
    // Offset: 0x156F598
    System::Threading::Tasks::Task_1<System::Net::Http::HttpResponseMessage*>* SendAsync(System::Net::Http::HttpRequestMessage* request, System::Net::Http::HttpCompletionOption completionOption);
    // public System.Threading.Tasks.Task`1<System.Net.Http.HttpResponseMessage> SendAsync(System.Net.Http.HttpRequestMessage request, System.Net.Http.HttpCompletionOption completionOption, System.Threading.CancellationToken cancellationToken)
    // Offset: 0x156F620
    System::Threading::Tasks::Task_1<System::Net::Http::HttpResponseMessage*>* SendAsync(System::Net::Http::HttpRequestMessage* request, System::Net::Http::HttpCompletionOption completionOption, System::Threading::CancellationToken cancellationToken);
    // private System.Threading.Tasks.Task`1<System.Net.Http.HttpResponseMessage> SendAsyncWorker(System.Net.Http.HttpRequestMessage request, System.Net.Http.HttpCompletionOption completionOption, System.Threading.CancellationToken cancellationToken)
    // Offset: 0x156FA1C
    System::Threading::Tasks::Task_1<System::Net::Http::HttpResponseMessage*>* SendAsyncWorker(System::Net::Http::HttpRequestMessage* request, System::Net::Http::HttpCompletionOption completionOption, System::Threading::CancellationToken cancellationToken);
    // public System.Threading.Tasks.Task`1<System.String> GetStringAsync(System.String requestUri)
    // Offset: 0x156FB50
    System::Threading::Tasks::Task_1<::Il2CppString*>* GetStringAsync(::Il2CppString* requestUri);
    // private System.Threading.Tasks.Task`1<System.Net.Http.HttpResponseMessage> <>n__0(System.Net.Http.HttpRequestMessage request, System.Threading.CancellationToken cancellationToken)
    // Offset: 0x156FCE0
    System::Threading::Tasks::Task_1<System::Net::Http::HttpResponseMessage*>* $$n__0(System::Net::Http::HttpRequestMessage* request, System::Threading::CancellationToken cancellationToken);
    // public System.Void .ctor()
    // Offset: 0x156EF8C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HttpClient* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::Http::HttpClient::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HttpClient*, creationType>()));
    }
    // public System.Void .ctor(System.Net.Http.HttpMessageHandler handler, System.Boolean disposeHandler)
    // Offset: 0x156F0B8
    // Implemented from: System.Net.Http.HttpMessageInvoker
    // Base method: System.Void HttpMessageInvoker::.ctor(System.Net.Http.HttpMessageHandler handler, System.Boolean disposeHandler)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HttpClient* New_ctor(System::Net::Http::HttpMessageHandler* handler, bool disposeHandler) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::Http::HttpClient::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HttpClient*, creationType>(handler, disposeHandler)));
    }
    // protected override System.Void Dispose(System.Boolean disposing)
    // Offset: 0x156F364
    // Implemented from: System.Net.Http.HttpMessageInvoker
    // Base method: System.Void HttpMessageInvoker::Dispose(System.Boolean disposing)
    void Dispose(bool disposing);
    // public override System.Threading.Tasks.Task`1<System.Net.Http.HttpResponseMessage> SendAsync(System.Net.Http.HttpRequestMessage request, System.Threading.CancellationToken cancellationToken)
    // Offset: 0x156F8A4
    // Implemented from: System.Net.Http.HttpMessageInvoker
    // Base method: System.Threading.Tasks.Task`1<System.Net.Http.HttpResponseMessage> HttpMessageInvoker::SendAsync(System.Net.Http.HttpRequestMessage request, System.Threading.CancellationToken cancellationToken)
    System::Threading::Tasks::Task_1<System::Net::Http::HttpResponseMessage*>* SendAsync(System::Net::Http::HttpRequestMessage* request, System::Threading::CancellationToken cancellationToken);
  }; // System.Net.Http.HttpClient
  #pragma pack(pop)
  static check_size<sizeof(HttpClient), 72 + sizeof(System::TimeSpan)> __System_Net_Http_HttpClientSizeCheck;
  static_assert(sizeof(HttpClient) == 0x50);
}
DEFINE_IL2CPP_ARG_TYPE(System::Net::Http::HttpClient*, "System.Net.Http", "HttpClient");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::Http::HttpClient::get_MaxResponseContentBufferSize
// Il2CppName: get_MaxResponseContentBufferSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (System::Net::Http::HttpClient::*)()>(&System::Net::Http::HttpClient::get_MaxResponseContentBufferSize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::HttpClient*), "get_MaxResponseContentBufferSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Http::HttpClient::set_Timeout
// Il2CppName: set_Timeout
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Http::HttpClient::*)(System::TimeSpan)>(&System::Net::Http::HttpClient::set_Timeout)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "TimeSpan")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::HttpClient*), "set_Timeout", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Net::Http::HttpClient::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Net::Http::HttpClient::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::HttpClient*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Http::HttpClient::GetAsync
// Il2CppName: GetAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task_1<System::Net::Http::HttpResponseMessage*>* (System::Net::Http::HttpClient::*)(::Il2CppString*, System::Net::Http::HttpCompletionOption)>(&System::Net::Http::HttpClient::GetAsync)> {
  static const MethodInfo* get() {
    static auto* requestUri = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* completionOption = &::il2cpp_utils::GetClassFromName("System.Net.Http", "HttpCompletionOption")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::HttpClient*), "GetAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{requestUri, completionOption});
  }
};
// Writing MetadataGetter for method: System::Net::Http::HttpClient::SendAsync
// Il2CppName: SendAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task_1<System::Net::Http::HttpResponseMessage*>* (System::Net::Http::HttpClient::*)(System::Net::Http::HttpRequestMessage*, System::Net::Http::HttpCompletionOption)>(&System::Net::Http::HttpClient::SendAsync)> {
  static const MethodInfo* get() {
    static auto* request = &::il2cpp_utils::GetClassFromName("System.Net.Http", "HttpRequestMessage")->byval_arg;
    static auto* completionOption = &::il2cpp_utils::GetClassFromName("System.Net.Http", "HttpCompletionOption")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::HttpClient*), "SendAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{request, completionOption});
  }
};
// Writing MetadataGetter for method: System::Net::Http::HttpClient::SendAsync
// Il2CppName: SendAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task_1<System::Net::Http::HttpResponseMessage*>* (System::Net::Http::HttpClient::*)(System::Net::Http::HttpRequestMessage*, System::Net::Http::HttpCompletionOption, System::Threading::CancellationToken)>(&System::Net::Http::HttpClient::SendAsync)> {
  static const MethodInfo* get() {
    static auto* request = &::il2cpp_utils::GetClassFromName("System.Net.Http", "HttpRequestMessage")->byval_arg;
    static auto* completionOption = &::il2cpp_utils::GetClassFromName("System.Net.Http", "HttpCompletionOption")->byval_arg;
    static auto* cancellationToken = &::il2cpp_utils::GetClassFromName("System.Threading", "CancellationToken")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::HttpClient*), "SendAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{request, completionOption, cancellationToken});
  }
};
// Writing MetadataGetter for method: System::Net::Http::HttpClient::SendAsyncWorker
// Il2CppName: SendAsyncWorker
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task_1<System::Net::Http::HttpResponseMessage*>* (System::Net::Http::HttpClient::*)(System::Net::Http::HttpRequestMessage*, System::Net::Http::HttpCompletionOption, System::Threading::CancellationToken)>(&System::Net::Http::HttpClient::SendAsyncWorker)> {
  static const MethodInfo* get() {
    static auto* request = &::il2cpp_utils::GetClassFromName("System.Net.Http", "HttpRequestMessage")->byval_arg;
    static auto* completionOption = &::il2cpp_utils::GetClassFromName("System.Net.Http", "HttpCompletionOption")->byval_arg;
    static auto* cancellationToken = &::il2cpp_utils::GetClassFromName("System.Threading", "CancellationToken")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::HttpClient*), "SendAsyncWorker", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{request, completionOption, cancellationToken});
  }
};
// Writing MetadataGetter for method: System::Net::Http::HttpClient::GetStringAsync
// Il2CppName: GetStringAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task_1<::Il2CppString*>* (System::Net::Http::HttpClient::*)(::Il2CppString*)>(&System::Net::Http::HttpClient::GetStringAsync)> {
  static const MethodInfo* get() {
    static auto* requestUri = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::HttpClient*), "GetStringAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{requestUri});
  }
};
// Writing MetadataGetter for method: System::Net::Http::HttpClient::$$n__0
// Il2CppName: <>n__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task_1<System::Net::Http::HttpResponseMessage*>* (System::Net::Http::HttpClient::*)(System::Net::Http::HttpRequestMessage*, System::Threading::CancellationToken)>(&System::Net::Http::HttpClient::$$n__0)> {
  static const MethodInfo* get() {
    static auto* request = &::il2cpp_utils::GetClassFromName("System.Net.Http", "HttpRequestMessage")->byval_arg;
    static auto* cancellationToken = &::il2cpp_utils::GetClassFromName("System.Threading", "CancellationToken")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::HttpClient*), "<>n__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{request, cancellationToken});
  }
};
// Writing MetadataGetter for method: System::Net::Http::HttpClient::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::Http::HttpClient::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::Http::HttpClient::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Http::HttpClient::*)(bool)>(&System::Net::Http::HttpClient::Dispose)> {
  static const MethodInfo* get() {
    static auto* disposing = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::HttpClient*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{disposing});
  }
};
// Writing MetadataGetter for method: System::Net::Http::HttpClient::SendAsync
// Il2CppName: SendAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task_1<System::Net::Http::HttpResponseMessage*>* (System::Net::Http::HttpClient::*)(System::Net::Http::HttpRequestMessage*, System::Threading::CancellationToken)>(&System::Net::Http::HttpClient::SendAsync)> {
  static const MethodInfo* get() {
    static auto* request = &::il2cpp_utils::GetClassFromName("System.Net.Http", "HttpRequestMessage")->byval_arg;
    static auto* cancellationToken = &::il2cpp_utils::GetClassFromName("System.Threading", "CancellationToken")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::HttpClient*), "SendAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{request, cancellationToken});
  }
};
