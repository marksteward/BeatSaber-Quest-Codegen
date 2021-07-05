// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net::Http
namespace System::Net::Http {
  // Forward declaring type: HttpMessageHandler
  class HttpMessageHandler;
  // Forward declaring type: HttpResponseMessage
  class HttpResponseMessage;
  // Forward declaring type: HttpRequestMessage
  class HttpRequestMessage;
}
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task`1<TResult>
  template<typename TResult>
  class Task_1;
}
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: CancellationToken
  struct CancellationToken;
}
// Completed forward declares
// Type namespace: System.Net.Http
namespace System::Net::Http {
  // Size: 0x19
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.Http.HttpMessageInvoker
  class HttpMessageInvoker : public ::Il2CppObject/*, public System::IDisposable*/ {
    public:
    // private System.Net.Http.HttpMessageHandler handler
    // Size: 0x8
    // Offset: 0x10
    System::Net::Http::HttpMessageHandler* handler;
    // Field size check
    static_assert(sizeof(System::Net::Http::HttpMessageHandler*) == 0x8);
    // private readonly System.Boolean disposeHandler
    // Size: 0x1
    // Offset: 0x18
    bool disposeHandler;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: HttpMessageInvoker
    HttpMessageInvoker(System::Net::Http::HttpMessageHandler* handler_ = {}, bool disposeHandler_ = {}) noexcept : handler{handler_}, disposeHandler{disposeHandler_} {}
    // Creating interface conversion operator: operator System::IDisposable
    operator System::IDisposable() noexcept {
      return *reinterpret_cast<System::IDisposable*>(this);
    }
    // public System.Void .ctor(System.Net.Http.HttpMessageHandler handler, System.Boolean disposeHandler)
    // Offset: 0x159CC98
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HttpMessageInvoker* New_ctor(System::Net::Http::HttpMessageHandler* handler, bool disposeHandler) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::Http::HttpMessageInvoker::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HttpMessageInvoker*, creationType>(handler, disposeHandler)));
    }
    // public System.Void Dispose()
    // Offset: 0x15A11D4
    void Dispose();
    // protected System.Void Dispose(System.Boolean disposing)
    // Offset: 0x159CEF4
    void Dispose(bool disposing);
    // public System.Threading.Tasks.Task`1<System.Net.Http.HttpResponseMessage> SendAsync(System.Net.Http.HttpRequestMessage request, System.Threading.CancellationToken cancellationToken)
    // Offset: 0x159D828
    System::Threading::Tasks::Task_1<System::Net::Http::HttpResponseMessage*>* SendAsync(System::Net::Http::HttpRequestMessage* request, System::Threading::CancellationToken cancellationToken);
  }; // System.Net.Http.HttpMessageInvoker
  #pragma pack(pop)
  static check_size<sizeof(HttpMessageInvoker), 24 + sizeof(bool)> __System_Net_Http_HttpMessageInvokerSizeCheck;
  static_assert(sizeof(HttpMessageInvoker) == 0x19);
}
DEFINE_IL2CPP_ARG_TYPE(System::Net::Http::HttpMessageInvoker*, "System.Net.Http", "HttpMessageInvoker");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::Http::HttpMessageInvoker::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::Http::HttpMessageInvoker::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Http::HttpMessageInvoker::*)()>(&System::Net::Http::HttpMessageInvoker::Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::HttpMessageInvoker*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Http::HttpMessageInvoker::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Http::HttpMessageInvoker::*)(bool)>(&System::Net::Http::HttpMessageInvoker::Dispose)> {
  static const MethodInfo* get() {
    static auto* disposing = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::HttpMessageInvoker*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{disposing});
  }
};
// Writing MetadataGetter for method: System::Net::Http::HttpMessageInvoker::SendAsync
// Il2CppName: SendAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task_1<System::Net::Http::HttpResponseMessage*>* (System::Net::Http::HttpMessageInvoker::*)(System::Net::Http::HttpRequestMessage*, System::Threading::CancellationToken)>(&System::Net::Http::HttpMessageInvoker::SendAsync)> {
  static const MethodInfo* get() {
    static auto* request = &::il2cpp_utils::GetClassFromName("System.Net.Http", "HttpRequestMessage")->byval_arg;
    static auto* cancellationToken = &::il2cpp_utils::GetClassFromName("System.Threading", "CancellationToken")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::HttpMessageInvoker*), "SendAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{request, cancellationToken});
  }
};
