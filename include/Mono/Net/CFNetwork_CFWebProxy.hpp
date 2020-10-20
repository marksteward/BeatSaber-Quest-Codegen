// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Mono.Net.CFNetwork
#include "Mono/Net/CFNetwork.hpp"
// Including type: System.Net.IWebProxy
#include "System/Net/IWebProxy.hpp"
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
  // Autogenerated type: Mono.Net.CFNetwork/CFWebProxy
  class CFNetwork::CFWebProxy : public ::Il2CppObject/*, public System::Net::IWebProxy*/ {
    public:
    // private System.Net.ICredentials credentials
    // Offset: 0x10
    System::Net::ICredentials* credentials;
    // private System.Boolean userSpecified
    // Offset: 0x18
    bool userSpecified;
    // Creating interface conversion operator: operator System::Net::IWebProxy
    operator System::Net::IWebProxy() noexcept {
      return *reinterpret_cast<System::Net::IWebProxy*>(this);
    }
    // static private System.Uri GetProxyUri(Mono.Net.CFProxy proxy, out System.Net.NetworkCredential credentials)
    // Offset: 0x11ED018
    static System::Uri* GetProxyUri(Mono::Net::CFProxy* proxy, System::Net::NetworkCredential*& credentials);
    // static private System.Uri GetProxyUriFromScript(System.IntPtr script, System.Uri targetUri, out System.Net.NetworkCredential credentials)
    // Offset: 0x11ED5A4
    static System::Uri* GetProxyUriFromScript(System::IntPtr script, System::Uri* targetUri, System::Net::NetworkCredential*& credentials);
    // static private System.Uri ExecuteProxyAutoConfigurationURL(System.IntPtr proxyAutoConfigURL, System.Uri targetUri, out System.Net.NetworkCredential credentials)
    // Offset: 0x11ED710
    static System::Uri* ExecuteProxyAutoConfigurationURL(System::IntPtr proxyAutoConfigURL, System::Uri* targetUri, System::Net::NetworkCredential*& credentials);
    // static private System.Uri SelectProxy(Mono.Net.CFProxy[] proxies, System.Uri targetUri, out System.Net.NetworkCredential credentials)
    // Offset: 0x11ED628
    static System::Uri* SelectProxy(::Array<Mono::Net::CFProxy*>* proxies, System::Uri* targetUri, System::Net::NetworkCredential*& credentials);
    // public System.Void .ctor()
    // Offset: 0x11ECA60
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static CFNetwork::CFWebProxy* New_ctor();
    // public System.Net.ICredentials get_Credentials()
    // Offset: 0x11ED010
    // Implemented from: System.Net.IWebProxy
    // Base method: System.Net.ICredentials IWebProxy::get_Credentials()
    System::Net::ICredentials* get_Credentials();
    // public System.Uri GetProxy(System.Uri targetUri)
    // Offset: 0x11ED794
    // Implemented from: System.Net.IWebProxy
    // Base method: System.Uri IWebProxy::GetProxy(System.Uri targetUri)
    System::Uri* GetProxy(System::Uri* targetUri);
    // public System.Boolean IsBypassed(System.Uri targetUri)
    // Offset: 0x11EDC60
    // Implemented from: System.Net.IWebProxy
    // Base method: System.Boolean IWebProxy::IsBypassed(System.Uri targetUri)
    bool IsBypassed(System::Uri* targetUri);
  }; // Mono.Net.CFNetwork/CFWebProxy
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Mono::Net::CFNetwork::CFWebProxy*, "Mono.Net", "CFNetwork/CFWebProxy");
#pragma pack(pop)
