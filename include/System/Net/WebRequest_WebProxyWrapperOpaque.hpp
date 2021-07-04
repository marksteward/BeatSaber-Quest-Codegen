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
    // Offset: 0x15CC964
    System::Uri* GetProxy(System::Uri* destination);
    // public System.Boolean IsBypassed(System.Uri host)
    // Offset: 0x15CC97C
    bool IsBypassed(System::Uri* host);
    // public System.Net.ICredentials get_Credentials()
    // Offset: 0x15CC994
    System::Net::ICredentials* get_Credentials();
  }; // System.Net.WebRequest/WebProxyWrapperOpaque
  #pragma pack(pop)
  static check_size<sizeof(WebRequest::WebProxyWrapperOpaque), 16 + sizeof(System::Net::WebProxy*)> __System_Net_WebRequest_WebProxyWrapperOpaqueSizeCheck;
  static_assert(sizeof(WebRequest::WebProxyWrapperOpaque) == 0x18);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Net::WebRequest::WebProxyWrapperOpaque*, "System.Net", "WebRequest/WebProxyWrapperOpaque");
// Writing MetadataGetter for method: System::Net::WebRequest::WebProxyWrapperOpaque::GetProxy
// Il2CppName: GetProxy
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Net::WebRequest::WebProxyWrapperOpaque::IsBypassed
// Il2CppName: IsBypassed
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Net::WebRequest::WebProxyWrapperOpaque::get_Credentials
// Il2CppName: get_Credentials
// Cannot perform method pointer template specialization from operators!
