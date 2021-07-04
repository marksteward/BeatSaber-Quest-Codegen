// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Mono.Unity.UnityTls
#include "Mono/Unity/UnityTls.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Security::Cryptography::X509Certificates
namespace System::Security::Cryptography::X509Certificates {
  // Forward declaring type: X509CertificateCollection
  class X509CertificateCollection;
  // Forward declaring type: X509Certificate
  class X509Certificate;
}
// Completed forward declares
// Type namespace: Mono.Unity
namespace Mono::Unity {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Mono.Unity.CertHelper
  class CertHelper : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: CertHelper
    CertHelper() noexcept {}
    // static public System.Void AddCertificatesToNativeChain(Mono.Unity.UnityTls/unitytls_x509list* nativeCertificateChain, System.Security.Cryptography.X509Certificates.X509CertificateCollection certificates, Mono.Unity.UnityTls/unitytls_errorstate* errorState)
    // Offset: 0x15F5298
    static void AddCertificatesToNativeChain(Mono::Unity::UnityTls::unitytls_x509list* nativeCertificateChain, System::Security::Cryptography::X509Certificates::X509CertificateCollection* certificates, Mono::Unity::UnityTls::unitytls_errorstate* errorState);
    // static public System.Void AddCertificateToNativeChain(Mono.Unity.UnityTls/unitytls_x509list* nativeCertificateChain, System.Security.Cryptography.X509Certificates.X509Certificate certificate, Mono.Unity.UnityTls/unitytls_errorstate* errorState)
    // Offset: 0x15F53F0
    static void AddCertificateToNativeChain(Mono::Unity::UnityTls::unitytls_x509list* nativeCertificateChain, System::Security::Cryptography::X509Certificates::X509Certificate* certificate, Mono::Unity::UnityTls::unitytls_errorstate* errorState);
    // static public System.Security.Cryptography.X509Certificates.X509CertificateCollection NativeChainToManagedCollection(Mono.Unity.UnityTls/unitytls_x509list_ref nativeCertificateChain, Mono.Unity.UnityTls/unitytls_errorstate* errorState)
    // Offset: 0x15F5914
    static System::Security::Cryptography::X509Certificates::X509CertificateCollection* NativeChainToManagedCollection(Mono::Unity::UnityTls::unitytls_x509list_ref nativeCertificateChain, Mono::Unity::UnityTls::unitytls_errorstate* errorState);
  }; // Mono.Unity.CertHelper
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Mono::Unity::CertHelper*, "Mono.Unity", "CertHelper");
// Writing MetadataGetter for method: Mono::Unity::CertHelper::AddCertificatesToNativeChain
// Il2CppName: AddCertificatesToNativeChain
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Mono::Unity::CertHelper::AddCertificateToNativeChain
// Il2CppName: AddCertificateToNativeChain
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Mono::Unity::CertHelper::NativeChainToManagedCollection
// Il2CppName: NativeChainToManagedCollection
// Cannot perform method pointer template specialization from operators!
