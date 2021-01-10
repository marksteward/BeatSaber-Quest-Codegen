// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Mono.Net.Security.MobileAuthenticatedStream
#include "Mono/Net/Security/MobileAuthenticatedStream.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::IO
namespace System::IO {
  // Skipping declaration: Stream because it is already included!
}
// Forward declaring namespace: System::Net::Security
namespace System::Net::Security {
  // Forward declaring type: SslStream
  class SslStream;
}
// Forward declaring namespace: Mono::Security::Interface
namespace Mono::Security::Interface {
  // Forward declaring type: MonoTlsSettings
  class MonoTlsSettings;
  // Forward declaring type: MonoTlsProvider
  class MonoTlsProvider;
}
// Forward declaring namespace: Mono::Net::Security
namespace Mono::Net::Security {
  // Forward declaring type: MobileTlsContext
  class MobileTlsContext;
}
// Forward declaring namespace: System::Security::Authentication
namespace System::Security::Authentication {
  // Forward declaring type: SslProtocols
  struct SslProtocols;
}
// Forward declaring namespace: System::Security::Cryptography::X509Certificates
namespace System::Security::Cryptography::X509Certificates {
  // Forward declaring type: X509Certificate
  class X509Certificate;
  // Forward declaring type: X509CertificateCollection
  class X509CertificateCollection;
}
// Completed forward declares
// Type namespace: Mono.Unity
namespace Mono::Unity {
  // Size: 0x9C
  // Autogenerated type: Mono.Unity.UnityTlsStream
  // [] Offset: FFFFFFFF
  class UnityTlsStream : public Mono::Net::Security::MobileAuthenticatedStream {
    public:
    // Creating value type constructor for type: UnityTlsStream
    UnityTlsStream() noexcept {}
    // public System.Void .ctor(System.IO.Stream innerStream, System.Boolean leaveInnerStreamOpen, System.Net.Security.SslStream owner, Mono.Security.Interface.MonoTlsSettings settings, Mono.Security.Interface.MonoTlsProvider provider)
    // Offset: 0x147A564
    // Implemented from: Mono.Net.Security.MobileAuthenticatedStream
    // Base method: System.Void MobileAuthenticatedStream::.ctor(System.IO.Stream innerStream, System.Boolean leaveInnerStreamOpen, System.Net.Security.SslStream owner, Mono.Security.Interface.MonoTlsSettings settings, Mono.Security.Interface.MonoTlsProvider provider)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UnityTlsStream* New_ctor(System::IO::Stream* innerStream, bool leaveInnerStreamOpen, System::Net::Security::SslStream* owner, Mono::Security::Interface::MonoTlsSettings* settings, Mono::Security::Interface::MonoTlsProvider* provider) {
      static auto ___internal__logger = ::Logger::get().WithContext("Mono::Unity::UnityTlsStream::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UnityTlsStream*, creationType>(innerStream, leaveInnerStreamOpen, owner, settings, provider)));
    }
    // protected override Mono.Net.Security.MobileTlsContext CreateContext(System.Boolean serverMode, System.String targetHost, System.Security.Authentication.SslProtocols enabledProtocols, System.Security.Cryptography.X509Certificates.X509Certificate serverCertificate, System.Security.Cryptography.X509Certificates.X509CertificateCollection clientCertificates, System.Boolean askForClientCert)
    // Offset: 0x147ABE0
    // Implemented from: Mono.Net.Security.MobileAuthenticatedStream
    // Base method: Mono.Net.Security.MobileTlsContext MobileAuthenticatedStream::CreateContext(System.Boolean serverMode, System.String targetHost, System.Security.Authentication.SslProtocols enabledProtocols, System.Security.Cryptography.X509Certificates.X509Certificate serverCertificate, System.Security.Cryptography.X509Certificates.X509CertificateCollection clientCertificates, System.Boolean askForClientCert)
    Mono::Net::Security::MobileTlsContext* CreateContext(bool serverMode, ::Il2CppString* targetHost, System::Security::Authentication::SslProtocols enabledProtocols, System::Security::Cryptography::X509Certificates::X509Certificate* serverCertificate, System::Security::Cryptography::X509Certificates::X509CertificateCollection* clientCertificates, bool askForClientCert);
  }; // Mono.Unity.UnityTlsStream
}
DEFINE_IL2CPP_ARG_TYPE(Mono::Unity::UnityTlsStream*, "Mono.Unity", "UnityTlsStream");
#pragma pack(pop)
