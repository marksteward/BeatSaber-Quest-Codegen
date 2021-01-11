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
// Forward declaring namespace: System::Security::Authentication
namespace System::Security::Authentication {
  // Forward declaring type: SslProtocols
  struct SslProtocols;
}
// Forward declaring namespace: Mono::Security::Interface
namespace Mono::Security::Interface {
  // Forward declaring type: TlsProtocols
  struct TlsProtocols;
  // Forward declaring type: AlertDescription
  struct AlertDescription;
  // Forward declaring type: MonoSslPolicyErrors
  struct MonoSslPolicyErrors;
}
// Completed forward declares
// Type namespace: Mono.Unity
namespace Mono::Unity {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Mono.Unity.UnityTlsConversions
  // [] Offset: FFFFFFFF
  class UnityTlsConversions : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: UnityTlsConversions
    UnityTlsConversions() noexcept {}
    // static public Mono.Unity.UnityTls/unitytls_protocol GetMinProtocol(System.Security.Authentication.SslProtocols protocols)
    // Offset: 0x1479CE4
    static Mono::Unity::UnityTls::unitytls_protocol GetMinProtocol(System::Security::Authentication::SslProtocols protocols);
    // static public Mono.Unity.UnityTls/unitytls_protocol GetMaxProtocol(System.Security.Authentication.SslProtocols protocols)
    // Offset: 0x1479E08
    static Mono::Unity::UnityTls::unitytls_protocol GetMaxProtocol(System::Security::Authentication::SslProtocols protocols);
    // static public Mono.Security.Interface.TlsProtocols ConvertProtocolVersion(Mono.Unity.UnityTls/unitytls_protocol protocol)
    // Offset: 0x1479F2C
    static Mono::Security::Interface::TlsProtocols ConvertProtocolVersion(Mono::Unity::UnityTls::unitytls_protocol protocol);
    // static public Mono.Security.Interface.AlertDescription VerifyResultToAlertDescription(Mono.Unity.UnityTls/unitytls_x509verify_result verifyResult, Mono.Security.Interface.AlertDescription defaultAlert)
    // Offset: 0x1479F4C
    static Mono::Security::Interface::AlertDescription VerifyResultToAlertDescription(Mono::Unity::UnityTls::unitytls_x509verify_result verifyResult, Mono::Security::Interface::AlertDescription defaultAlert);
    // static public Mono.Security.Interface.MonoSslPolicyErrors VerifyResultToPolicyErrror(Mono.Unity.UnityTls/unitytls_x509verify_result verifyResult)
    // Offset: 0x147A324
    static Mono::Security::Interface::MonoSslPolicyErrors VerifyResultToPolicyErrror(Mono::Unity::UnityTls::unitytls_x509verify_result verifyResult);
  }; // Mono.Unity.UnityTlsConversions
}
#pragma pack(pop)
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Mono::Unity::UnityTlsConversions*, "Mono.Unity", "UnityTlsConversions");
