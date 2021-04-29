// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Mono.Net.CFNetwork
#include "Mono/Net/CFNetwork.hpp"
// Including type: System.Net.IWebProxy
#include "System/Net/IWebProxy.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: ICredentials
  class ICredentials;
  // Forward declaring type: NetworkCredential
  class NetworkCredential;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Uri
  class Uri;
  // Forward declaring type: IntPtr
  struct IntPtr;
}
// Forward declaring namespace: Mono::Net
namespace Mono::Net {
  // Forward declaring type: CFProxy
  class CFProxy;
}
// Completed forward declares
// Type namespace: Mono.Net
namespace Mono::Net {
  // Size: 0x19
  #pragma pack(push, 1)
  // Autogenerated type: Mono.Net.CFNetwork/CFWebProxy
  class CFNetwork::CFWebProxy : public ::Il2CppObject/*, public System::Net::IWebProxy*/ {
    public:
    // private System.Net.ICredentials credentials
    // Size: 0x8
    // Offset: 0x10
    System::Net::ICredentials* credentials;
    // Field size check
    static_assert(sizeof(System::Net::ICredentials*) == 0x8);
    // private System.Boolean userSpecified
    // Size: 0x1
    // Offset: 0x18
    bool userSpecified;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: CFWebProxy
    CFWebProxy(System::Net::ICredentials* credentials_ = {}, bool userSpecified_ = {}) noexcept : credentials{credentials_}, userSpecified{userSpecified_} {}
    // Creating interface conversion operator: operator System::Net::IWebProxy
    operator System::Net::IWebProxy() noexcept {
      return *reinterpret_cast<System::Net::IWebProxy*>(this);
    }
    // public System.Net.ICredentials get_Credentials()
    // Offset: 0x144DD20
    System::Net::ICredentials* get_Credentials();
    // static private System.Uri GetProxyUri(Mono.Net.CFProxy proxy, out System.Net.NetworkCredential credentials)
    // Offset: 0x144DD28
    static System::Uri* GetProxyUri(Mono::Net::CFProxy* proxy, System::Net::NetworkCredential*& credentials);
    // static private System.Uri GetProxyUriFromScript(System.IntPtr script, System.Uri targetUri, out System.Net.NetworkCredential credentials)
    // Offset: 0x144E294
    static System::Uri* GetProxyUriFromScript(System::IntPtr script, System::Uri* targetUri, System::Net::NetworkCredential*& credentials);
    // static private System.Uri ExecuteProxyAutoConfigurationURL(System.IntPtr proxyAutoConfigURL, System.Uri targetUri, out System.Net.NetworkCredential credentials)
    // Offset: 0x144E3E0
    static System::Uri* ExecuteProxyAutoConfigurationURL(System::IntPtr proxyAutoConfigURL, System::Uri* targetUri, System::Net::NetworkCredential*& credentials);
    // static private System.Uri SelectProxy(Mono.Net.CFProxy[] proxies, System.Uri targetUri, out System.Net.NetworkCredential credentials)
    // Offset: 0x144E318
    static System::Uri* SelectProxy(::Array<Mono::Net::CFProxy*>* proxies, System::Uri* targetUri, System::Net::NetworkCredential*& credentials);
    // public System.Uri GetProxy(System.Uri targetUri)
    // Offset: 0x144E464
    System::Uri* GetProxy(System::Uri* targetUri);
    // public System.Boolean IsBypassed(System.Uri targetUri)
    // Offset: 0x144E928
    bool IsBypassed(System::Uri* targetUri);
    // public System.Void .ctor()
    // Offset: 0x144D7AC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CFNetwork::CFWebProxy* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Mono::Net::CFNetwork::CFWebProxy::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CFNetwork::CFWebProxy*, creationType>()));
    }
  }; // Mono.Net.CFNetwork/CFWebProxy
  #pragma pack(pop)
  static check_size<sizeof(CFNetwork::CFWebProxy), 24 + sizeof(bool)> __Mono_Net_CFNetwork_CFWebProxySizeCheck;
  static_assert(sizeof(CFNetwork::CFWebProxy) == 0x19);
}
DEFINE_IL2CPP_ARG_TYPE(Mono::Net::CFNetwork::CFWebProxy*, "Mono.Net", "CFNetwork/CFWebProxy");
