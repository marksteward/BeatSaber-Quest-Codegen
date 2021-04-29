// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Mono.Security.Interface.ICertificateValidator2
#include "Mono/Security/Interface/ICertificateValidator2.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Mono::Security::Interface
namespace Mono::Security::Interface {
  // Forward declaring type: MonoTlsSettings
  class MonoTlsSettings;
  // Forward declaring type: MonoTlsProvider
  class MonoTlsProvider;
  // Skipping declaration: ICertificateValidator because it is already included!
  // Forward declaring type: ValidationResult
  class ValidationResult;
}
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: ServerCertValidationCallback
  class ServerCertValidationCallback;
  // Forward declaring type: HttpWebRequest
  class HttpWebRequest;
}
// Forward declaring namespace: System::Net::Security
namespace System::Net::Security {
  // Forward declaring type: LocalCertSelectionCallback
  class LocalCertSelectionCallback;
  // Forward declaring type: SslPolicyErrors
  struct SslPolicyErrors;
}
// Forward declaring namespace: Mono::Net::Security
namespace Mono::Net::Security {
  // Forward declaring type: ServerCertValidationCallbackWrapper
  class ServerCertValidationCallbackWrapper;
  // Forward declaring type: MonoTlsStream
  class MonoTlsStream;
}
// Forward declaring namespace: System::Security::Cryptography::X509Certificates
namespace System::Security::Cryptography::X509Certificates {
  // Forward declaring type: X509Certificate
  class X509Certificate;
  // Forward declaring type: X509CertificateCollection
  class X509CertificateCollection;
  // Forward declaring type: X509Chain
  class X509Chain;
}
// Completed forward declares
// Type namespace: Mono.Net.Security
namespace Mono::Net::Security {
  // Size: 0x50
  #pragma pack(push, 1)
  // Autogenerated type: Mono.Net.Security.ChainValidationHelper
  class ChainValidationHelper : public ::Il2CppObject/*, public Mono::Security::Interface::ICertificateValidator2*/ {
    public:
    // private readonly System.Object sender
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppObject* sender;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // private readonly Mono.Security.Interface.MonoTlsSettings settings
    // Size: 0x8
    // Offset: 0x18
    Mono::Security::Interface::MonoTlsSettings* settings;
    // Field size check
    static_assert(sizeof(Mono::Security::Interface::MonoTlsSettings*) == 0x8);
    // private readonly Mono.Security.Interface.MonoTlsProvider provider
    // Size: 0x8
    // Offset: 0x20
    Mono::Security::Interface::MonoTlsProvider* provider;
    // Field size check
    static_assert(sizeof(Mono::Security::Interface::MonoTlsProvider*) == 0x8);
    // private readonly System.Net.ServerCertValidationCallback certValidationCallback
    // Size: 0x8
    // Offset: 0x28
    System::Net::ServerCertValidationCallback* certValidationCallback;
    // Field size check
    static_assert(sizeof(System::Net::ServerCertValidationCallback*) == 0x8);
    // private readonly System.Net.Security.LocalCertSelectionCallback certSelectionCallback
    // Size: 0x8
    // Offset: 0x30
    System::Net::Security::LocalCertSelectionCallback* certSelectionCallback;
    // Field size check
    static_assert(sizeof(System::Net::Security::LocalCertSelectionCallback*) == 0x8);
    // private readonly Mono.Net.Security.ServerCertValidationCallbackWrapper callbackWrapper
    // Size: 0x8
    // Offset: 0x38
    Mono::Net::Security::ServerCertValidationCallbackWrapper* callbackWrapper;
    // Field size check
    static_assert(sizeof(Mono::Net::Security::ServerCertValidationCallbackWrapper*) == 0x8);
    // private readonly Mono.Net.Security.MonoTlsStream tlsStream
    // Size: 0x8
    // Offset: 0x40
    Mono::Net::Security::MonoTlsStream* tlsStream;
    // Field size check
    static_assert(sizeof(Mono::Net::Security::MonoTlsStream*) == 0x8);
    // private readonly System.Net.HttpWebRequest request
    // Size: 0x8
    // Offset: 0x48
    System::Net::HttpWebRequest* request;
    // Field size check
    static_assert(sizeof(System::Net::HttpWebRequest*) == 0x8);
    // Creating value type constructor for type: ChainValidationHelper
    ChainValidationHelper(::Il2CppObject* sender_ = {}, Mono::Security::Interface::MonoTlsSettings* settings_ = {}, Mono::Security::Interface::MonoTlsProvider* provider_ = {}, System::Net::ServerCertValidationCallback* certValidationCallback_ = {}, System::Net::Security::LocalCertSelectionCallback* certSelectionCallback_ = {}, Mono::Net::Security::ServerCertValidationCallbackWrapper* callbackWrapper_ = {}, Mono::Net::Security::MonoTlsStream* tlsStream_ = {}, System::Net::HttpWebRequest* request_ = {}) noexcept : sender{sender_}, settings{settings_}, provider{provider_}, certValidationCallback{certValidationCallback_}, certSelectionCallback{certSelectionCallback_}, callbackWrapper{callbackWrapper_}, tlsStream{tlsStream_}, request{request_} {}
    // Creating interface conversion operator: operator Mono::Security::Interface::ICertificateValidator2
    operator Mono::Security::Interface::ICertificateValidator2() noexcept {
      return *reinterpret_cast<Mono::Security::Interface::ICertificateValidator2*>(this);
    }
    // static Mono.Security.Interface.ICertificateValidator GetInternalValidator(Mono.Security.Interface.MonoTlsProvider provider, Mono.Security.Interface.MonoTlsSettings settings)
    // Offset: 0x14519BC
    static Mono::Security::Interface::ICertificateValidator* GetInternalValidator(Mono::Security::Interface::MonoTlsProvider* provider, Mono::Security::Interface::MonoTlsSettings* settings);
    // static Mono.Net.Security.ChainValidationHelper Create(Mono.Security.Interface.MonoTlsProvider provider, ref Mono.Security.Interface.MonoTlsSettings settings, Mono.Net.Security.MonoTlsStream stream)
    // Offset: 0x1451CA8
    static Mono::Net::Security::ChainValidationHelper* Create(Mono::Security::Interface::MonoTlsProvider* provider, Mono::Security::Interface::MonoTlsSettings*& settings, Mono::Net::Security::MonoTlsStream* stream);
    // private System.Void .ctor(Mono.Security.Interface.MonoTlsProvider provider, Mono.Security.Interface.MonoTlsSettings settings, System.Boolean cloneSettings, Mono.Net.Security.MonoTlsStream stream, Mono.Net.Security.ServerCertValidationCallbackWrapper callbackWrapper)
    // Offset: 0x1451A64
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ChainValidationHelper* New_ctor(Mono::Security::Interface::MonoTlsProvider* provider, Mono::Security::Interface::MonoTlsSettings* settings, bool cloneSettings, Mono::Net::Security::MonoTlsStream* stream, Mono::Net::Security::ServerCertValidationCallbackWrapper* callbackWrapper) {
      static auto ___internal__logger = ::Logger::get().WithContext("Mono::Net::Security::ChainValidationHelper::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ChainValidationHelper*, creationType>(provider, settings, cloneSettings, stream, callbackWrapper)));
    }
    // static private System.Security.Cryptography.X509Certificates.X509Certificate DefaultSelectionCallback(System.String targetHost, System.Security.Cryptography.X509Certificates.X509CertificateCollection localCertificates, System.Security.Cryptography.X509Certificates.X509Certificate remoteCertificate, System.String[] acceptableIssuers)
    // Offset: 0x1451F1C
    static System::Security::Cryptography::X509Certificates::X509Certificate* DefaultSelectionCallback(::Il2CppString* targetHost, System::Security::Cryptography::X509Certificates::X509CertificateCollection* localCertificates, System::Security::Cryptography::X509Certificates::X509Certificate* remoteCertificate, ::Array<::Il2CppString*>* acceptableIssuers);
    // public Mono.Security.Interface.MonoTlsSettings get_Settings()
    // Offset: 0x1451F68
    Mono::Security::Interface::MonoTlsSettings* get_Settings();
    // public System.Boolean SelectClientCertificate(System.String targetHost, System.Security.Cryptography.X509Certificates.X509CertificateCollection localCertificates, System.Security.Cryptography.X509Certificates.X509Certificate remoteCertificate, System.String[] acceptableIssuers, out System.Security.Cryptography.X509Certificates.X509Certificate clientCertificate)
    // Offset: 0x1451F70
    bool SelectClientCertificate(::Il2CppString* targetHost, System::Security::Cryptography::X509Certificates::X509CertificateCollection* localCertificates, System::Security::Cryptography::X509Certificates::X509Certificate* remoteCertificate, ::Array<::Il2CppString*>* acceptableIssuers, System::Security::Cryptography::X509Certificates::X509Certificate*& clientCertificate);
    // public Mono.Security.Interface.ValidationResult ValidateCertificate(System.String host, System.Boolean serverMode, System.Security.Cryptography.X509Certificates.X509CertificateCollection certs)
    // Offset: 0x1451FB0
    Mono::Security::Interface::ValidationResult* ValidateCertificate(::Il2CppString* host, bool serverMode, System::Security::Cryptography::X509Certificates::X509CertificateCollection* certs);
    // public Mono.Security.Interface.ValidationResult ValidateCertificate(System.String host, System.Boolean serverMode, System.Security.Cryptography.X509Certificates.X509Certificate leaf, System.Security.Cryptography.X509Certificates.X509Chain chain)
    // Offset: 0x14521C4
    Mono::Security::Interface::ValidationResult* ValidateCertificate(::Il2CppString* host, bool serverMode, System::Security::Cryptography::X509Certificates::X509Certificate* leaf, System::Security::Cryptography::X509Certificates::X509Chain* chain);
    // private Mono.Security.Interface.ValidationResult ValidateChain(System.String host, System.Boolean server, System.Security.Cryptography.X509Certificates.X509Certificate leaf, System.Security.Cryptography.X509Certificates.X509Chain chain, System.Security.Cryptography.X509Certificates.X509CertificateCollection certs, System.Net.Security.SslPolicyErrors errors)
    // Offset: 0x1452114
    Mono::Security::Interface::ValidationResult* ValidateChain(::Il2CppString* host, bool server, System::Security::Cryptography::X509Certificates::X509Certificate* leaf, System::Security::Cryptography::X509Certificates::X509Chain* chain, System::Security::Cryptography::X509Certificates::X509CertificateCollection* certs, System::Net::Security::SslPolicyErrors errors);
    // private Mono.Security.Interface.ValidationResult ValidateChain(System.String host, System.Boolean server, System.Security.Cryptography.X509Certificates.X509Certificate leaf, ref System.Security.Cryptography.X509Certificates.X509Chain chain, System.Security.Cryptography.X509Certificates.X509CertificateCollection certs, System.Net.Security.SslPolicyErrors errors)
    // Offset: 0x14522F8
    Mono::Security::Interface::ValidationResult* ValidateChain_(::Il2CppString* host, bool server, System::Security::Cryptography::X509Certificates::X509Certificate* leaf, System::Security::Cryptography::X509Certificates::X509Chain*& chain, System::Security::Cryptography::X509Certificates::X509CertificateCollection* certs, System::Net::Security::SslPolicyErrors errors);
  }; // Mono.Net.Security.ChainValidationHelper
  #pragma pack(pop)
  static check_size<sizeof(ChainValidationHelper), 72 + sizeof(System::Net::HttpWebRequest*)> __Mono_Net_Security_ChainValidationHelperSizeCheck;
  static_assert(sizeof(ChainValidationHelper) == 0x50);
}
DEFINE_IL2CPP_ARG_TYPE(Mono::Net::Security::ChainValidationHelper*, "Mono.Net.Security", "ChainValidationHelper");
