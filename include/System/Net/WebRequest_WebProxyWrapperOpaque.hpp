// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Net.WebRequest
#include "System/Net/WebRequest.hpp"
// Including type: System.Net.IWebProxy
#include "System/Net/IWebProxy.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: WebProxy
  class WebProxy;
  // Forward declaring type: ICredentials
  class ICredentials;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Uri
  class Uri;
}
// Completed forward declares
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.WebRequest/WebProxyWrapperOpaque
  // [] Offset: FFFFFFFF
  class WebRequest::WebProxyWrapperOpaque : public ::Il2CppObject/*, public System::Net::IWebProxy*/ {
    public:
    // protected readonly System.Net.WebProxy webProxy
    // Size: 0x8
    // Offset: 0x10
    System::Net::WebProxy* webProxy;
    // Field size check
    static_assert(sizeof(System::Net::WebProxy*) == 0x8);
    // Creating value type constructor for type: WebProxyWrapperOpaque
    WebProxyWrapperOpaque(System::Net::WebProxy* webProxy_ = {}) noexcept : webProxy{webProxy_} {}
    // Creating interface conversion operator: operator System::Net::IWebProxy
    operator System::Net::IWebProxy() noexcept {
      return *reinterpret_cast<System::Net::IWebProxy*>(this);
    }
    // Creating conversion operator: operator System::Net::WebProxy*
    constexpr operator System::Net::WebProxy*() const noexcept {
      return webProxy;
    }
    // public System.Uri GetProxy(System.Uri destination)
    // Offset: 0x122985C
    // Implemented from: System.Net.IWebProxy
    // Base method: System.Uri IWebProxy::GetProxy(System.Uri destination)
    System::Uri* GetProxy(System::Uri* destination);
    // public System.Boolean IsBypassed(System.Uri host)
    // Offset: 0x1229874
    // Implemented from: System.Net.IWebProxy
    // Base method: System.Boolean IWebProxy::IsBypassed(System.Uri host)
    bool IsBypassed(System::Uri* host);
    // public System.Net.ICredentials get_Credentials()
    // Offset: 0x122988C
    // Implemented from: System.Net.IWebProxy
    // Base method: System.Net.ICredentials IWebProxy::get_Credentials()
    System::Net::ICredentials* get_Credentials();
  }; // System.Net.WebRequest/WebProxyWrapperOpaque
  static check_size<sizeof(WebRequest::WebProxyWrapperOpaque), 16 + sizeof(System::Net::WebProxy*)> __System_Net_WebRequest_WebProxyWrapperOpaqueSizeCheck;
  static_assert(sizeof(WebRequest::WebProxyWrapperOpaque) == 0x18);
}
#pragma pack(pop)
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Net::WebRequest::WebProxyWrapperOpaque*, "System.Net", "WebRequest/WebProxyWrapperOpaque");
