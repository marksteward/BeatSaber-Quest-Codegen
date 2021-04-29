// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: AuthenticationSchemes
  struct AuthenticationSchemes;
  // Forward declaring type: HttpListenerRequest
  class HttpListenerRequest;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.AuthenticationSchemeSelector
  class AuthenticationSchemeSelector : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: AuthenticationSchemeSelector
    AuthenticationSchemeSelector() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x14E4C84
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AuthenticationSchemeSelector* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::AuthenticationSchemeSelector::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AuthenticationSchemeSelector*, creationType>(object, method)));
    }
    // public System.Net.AuthenticationSchemes Invoke(System.Net.HttpListenerRequest httpRequest)
    // Offset: 0x14E4C94
    System::Net::AuthenticationSchemes Invoke(System::Net::HttpListenerRequest* httpRequest);
    // public System.IAsyncResult BeginInvoke(System.Net.HttpListenerRequest httpRequest, System.AsyncCallback callback, System.Object object)
    // Offset: 0x14E5030
    System::IAsyncResult* BeginInvoke(System::Net::HttpListenerRequest* httpRequest, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Net.AuthenticationSchemes EndInvoke(System.IAsyncResult result)
    // Offset: 0x14E5054
    System::Net::AuthenticationSchemes EndInvoke(System::IAsyncResult* result);
  }; // System.Net.AuthenticationSchemeSelector
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(System::Net::AuthenticationSchemeSelector*, "System.Net", "AuthenticationSchemeSelector");
