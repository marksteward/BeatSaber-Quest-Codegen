// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
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
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task`1<TResult>
  template<typename TResult>
  class Task_1;
}
// Forward declaring namespace: System::Net::Http
namespace System::Net::Http {
  // Forward declaring type: HttpResponseMessage
  class HttpResponseMessage;
  // Forward declaring type: HttpRequestMessage
  class HttpRequestMessage;
}
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: CancellationToken
  struct CancellationToken;
}
// Completed forward declares
// Type namespace: System.Net.Http
namespace System::Net::Http {
  // Size: 0x10
  // Autogenerated type: System.Net.Http.HttpMessageHandler
  // [] Offset: FFFFFFFF
  class HttpMessageHandler : public ::Il2CppObject/*, public System::IDisposable*/ {
    public:
    // Creating value type constructor for type: HttpMessageHandler
    HttpMessageHandler() noexcept {}
    // Creating interface conversion operator: operator System::IDisposable
    operator System::IDisposable() noexcept {
      return *reinterpret_cast<System::IDisposable*>(this);
    }
    // protected System.Void Dispose(System.Boolean disposing)
    // Offset: 0x120D294
    void Dispose(bool disposing);
    // protected internal System.Threading.Tasks.Task`1<System.Net.Http.HttpResponseMessage> SendAsync(System.Net.Http.HttpRequestMessage request, System.Threading.CancellationToken cancellationToken)
    // Offset: 0xFFFFFFFF
    System::Threading::Tasks::Task_1<System::Net::Http::HttpResponseMessage*>* SendAsync(System::Net::Http::HttpRequestMessage* request, System::Threading::CancellationToken cancellationToken);
    // public System.Void Dispose()
    // Offset: 0x12100B8
    // Implemented from: System.IDisposable
    // Base method: System.Void IDisposable::Dispose()
    void Dispose();
    // Creating proxy method: System_IDisposable_Dispose
    // Maps to method: Dispose
    void System_IDisposable_Dispose();
    // protected System.Void .ctor()
    // Offset: 0x120D16C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HttpMessageHandler* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::Http::HttpMessageHandler::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HttpMessageHandler*, creationType>()));
    }
  }; // System.Net.Http.HttpMessageHandler
}
DEFINE_IL2CPP_ARG_TYPE(System::Net::Http::HttpMessageHandler*, "System.Net.Http", "HttpMessageHandler");
#pragma pack(pop)
