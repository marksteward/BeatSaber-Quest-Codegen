// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Security.Cryptography.X509Certificates.X509Certificate2Impl
#include "System/Security/Cryptography/X509Certificates/X509Certificate2Impl.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Security::Cryptography::X509Certificates
namespace System::Security::Cryptography::X509Certificates {
  // Forward declaring type: X509ExtensionCollection
  class X509ExtensionCollection;
  // Forward declaring type: PublicKey
  class PublicKey;
  // Forward declaring type: X500DistinguishedName
  class X500DistinguishedName;
  // Forward declaring type: X509CertificateImplCollection
  class X509CertificateImplCollection;
  // Skipping declaration: X509CertificateImpl because it is already included!
  // Forward declaring type: X509NameType
  struct X509NameType;
  // Forward declaring type: X509KeyStorageFlags
  struct X509KeyStorageFlags;
  // Forward declaring type: X509Certificate2
  class X509Certificate2;
}
// Forward declaring namespace: System::Security::Cryptography
namespace System::Security::Cryptography {
  // Forward declaring type: Oid
  class Oid;
  // Forward declaring type: AsymmetricAlgorithm
  class AsymmetricAlgorithm;
}
// Forward declaring namespace: Mono::Security::X509
namespace Mono::Security::X509 {
  // Forward declaring type: X509Certificate
  class X509Certificate;
}
// Forward declaring namespace: Mono::Security
namespace Mono::Security {
  // Forward declaring type: ASN1
  class ASN1;
}
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: StringBuilder
  class StringBuilder;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: DateTime
  struct DateTime;
}
// Completed forward declares
// Type namespace: System.Security.Cryptography.X509Certificates
namespace System::Security::Cryptography::X509Certificates {
  // Size: 0x58
  #pragma pack(push, 1)
  // Autogenerated type: System.Security.Cryptography.X509Certificates.X509Certificate2ImplMono
  class X509Certificate2ImplMono : public System::Security::Cryptography::X509Certificates::X509Certificate2Impl {
    public:
    // private System.Boolean _archived
    // Size: 0x1
    // Offset: 0x18
    bool archived;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: archived and: extensions
    char __padding0[0x7] = {};
    // private System.Security.Cryptography.X509Certificates.X509ExtensionCollection _extensions
    // Size: 0x8
    // Offset: 0x20
    System::Security::Cryptography::X509Certificates::X509ExtensionCollection* extensions;
    // Field size check
    static_assert(sizeof(System::Security::Cryptography::X509Certificates::X509ExtensionCollection*) == 0x8);
    // private System.Security.Cryptography.X509Certificates.PublicKey _publicKey
    // Size: 0x8
    // Offset: 0x28
    System::Security::Cryptography::X509Certificates::PublicKey* publicKey;
    // Field size check
    static_assert(sizeof(System::Security::Cryptography::X509Certificates::PublicKey*) == 0x8);
    // private System.Security.Cryptography.X509Certificates.X500DistinguishedName issuer_name
    // Size: 0x8
    // Offset: 0x30
    System::Security::Cryptography::X509Certificates::X500DistinguishedName* issuer_name;
    // Field size check
    static_assert(sizeof(System::Security::Cryptography::X509Certificates::X500DistinguishedName*) == 0x8);
    // private System.Security.Cryptography.X509Certificates.X500DistinguishedName subject_name
    // Size: 0x8
    // Offset: 0x38
    System::Security::Cryptography::X509Certificates::X500DistinguishedName* subject_name;
    // Field size check
    static_assert(sizeof(System::Security::Cryptography::X509Certificates::X500DistinguishedName*) == 0x8);
    // private System.Security.Cryptography.Oid signature_algorithm
    // Size: 0x8
    // Offset: 0x40
    System::Security::Cryptography::Oid* signature_algorithm;
    // Field size check
    static_assert(sizeof(System::Security::Cryptography::Oid*) == 0x8);
    // private System.Security.Cryptography.X509Certificates.X509CertificateImplCollection intermediateCerts
    // Size: 0x8
    // Offset: 0x48
    System::Security::Cryptography::X509Certificates::X509CertificateImplCollection* intermediateCerts;
    // Field size check
    static_assert(sizeof(System::Security::Cryptography::X509Certificates::X509CertificateImplCollection*) == 0x8);
    // private Mono.Security.X509.X509Certificate _cert
    // Size: 0x8
    // Offset: 0x50
    Mono::Security::X509::X509Certificate* cert;
    // Field size check
    static_assert(sizeof(Mono::Security::X509::X509Certificate*) == 0x8);
    // Creating value type constructor for type: X509Certificate2ImplMono
    X509Certificate2ImplMono(bool archived_ = {}, System::Security::Cryptography::X509Certificates::X509ExtensionCollection* extensions_ = {}, System::Security::Cryptography::X509Certificates::PublicKey* publicKey_ = {}, System::Security::Cryptography::X509Certificates::X500DistinguishedName* issuer_name_ = {}, System::Security::Cryptography::X509Certificates::X500DistinguishedName* subject_name_ = {}, System::Security::Cryptography::Oid* signature_algorithm_ = {}, System::Security::Cryptography::X509Certificates::X509CertificateImplCollection* intermediateCerts_ = {}, Mono::Security::X509::X509Certificate* cert_ = {}) noexcept : archived{archived_}, extensions{extensions_}, publicKey{publicKey_}, issuer_name{issuer_name_}, subject_name{subject_name_}, signature_algorithm{signature_algorithm_}, intermediateCerts{intermediateCerts_}, cert{cert_} {}
    // Deleting conversion operator: operator ::Array<uint8_t>*
    constexpr operator ::Array<uint8_t>*() const noexcept = delete;
    // Get static field: static private System.String empty_error
    static ::Il2CppString* _get_empty_error();
    // Set static field: static private System.String empty_error
    static void _set_empty_error(::Il2CppString* value);
    // Get static field: static private System.Byte[] commonName
    static ::Array<uint8_t>* _get_commonName();
    // Set static field: static private System.Byte[] commonName
    static void _set_commonName(::Array<uint8_t>* value);
    // Get static field: static private System.Byte[] email
    static ::Array<uint8_t>* _get_email();
    // Set static field: static private System.Byte[] email
    static void _set_email(::Array<uint8_t>* value);
    // Get static field: static private System.Byte[] signedData
    static ::Array<uint8_t>* _get_signedData();
    // Set static field: static private System.Byte[] signedData
    static void _set_signedData(::Array<uint8_t>* value);
    // private System.Void .ctor(Mono.Security.X509.X509Certificate cert)
    // Offset: 0x1848D3C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static X509Certificate2ImplMono* New_ctor(Mono::Security::X509::X509Certificate* cert) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<X509Certificate2ImplMono*, creationType>(cert)));
    }
    // private System.Void .ctor(System.Security.Cryptography.X509Certificates.X509Certificate2ImplMono other)
    // Offset: 0x1848D68
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static X509Certificate2ImplMono* New_ctor(System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono* other) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<X509Certificate2ImplMono*, creationType>(other)));
    }
    // private Mono.Security.ASN1 Find(System.Byte[] oid, Mono.Security.ASN1 dn)
    // Offset: 0x184A480
    Mono::Security::ASN1* Find(::Array<uint8_t>* oid, Mono::Security::ASN1* dn);
    // private System.String GetValueAsString(Mono.Security.ASN1 pair)
    // Offset: 0x184A590
    ::Il2CppString* GetValueAsString(Mono::Security::ASN1* pair);
    // private Mono.Security.X509.X509Certificate ImportPkcs12(System.Byte[] rawData, System.String password)
    // Offset: 0x184A738
    Mono::Security::X509::X509Certificate* ImportPkcs12(::Array<uint8_t>* rawData, ::Il2CppString* password);
    // static private System.Void AppendBuffer(System.Text.StringBuilder sb, System.Byte[] buffer)
    // Offset: 0x184B8A4
    static void AppendBuffer(System::Text::StringBuilder* sb, ::Array<uint8_t>* buffer);
    // Mono.Security.X509.X509Certificate get_MonoCertificate()
    // Offset: 0x184BB10
    Mono::Security::X509::X509Certificate* get_MonoCertificate();
    // static private System.Void .cctor()
    // Offset: 0x184BB1C
    static void _cctor();
    // public override System.Boolean get_IsValid()
    // Offset: 0x1848D2C
    // Implemented from: System.Security.Cryptography.X509Certificates.X509CertificateImpl
    // Base method: System.Boolean X509CertificateImpl::get_IsValid()
    bool get_IsValid();
    // public override System.Security.Cryptography.X509Certificates.X509CertificateImpl Clone()
    // Offset: 0x1848E10
    // Implemented from: System.Security.Cryptography.X509Certificates.X509CertificateImpl
    // Base method: System.Security.Cryptography.X509Certificates.X509CertificateImpl X509CertificateImpl::Clone()
    System::Security::Cryptography::X509Certificates::X509CertificateImpl* Clone();
    // public override System.String GetIssuerName(System.Boolean legacyV1Mode)
    // Offset: 0x1848E7C
    // Implemented from: System.Security.Cryptography.X509Certificates.X509CertificateImpl
    // Base method: System.String X509CertificateImpl::GetIssuerName(System.Boolean legacyV1Mode)
    ::Il2CppString* GetIssuerName(bool legacyV1Mode);
    // public override System.String GetSubjectName(System.Boolean legacyV1Mode)
    // Offset: 0x1848F40
    // Implemented from: System.Security.Cryptography.X509Certificates.X509CertificateImpl
    // Base method: System.String X509CertificateImpl::GetSubjectName(System.Boolean legacyV1Mode)
    ::Il2CppString* GetSubjectName(bool legacyV1Mode);
    // public override System.Byte[] GetRawCertData()
    // Offset: 0x1849008
    // Implemented from: System.Security.Cryptography.X509Certificates.X509CertificateImpl
    // Base method: System.Byte[] X509CertificateImpl::GetRawCertData()
    ::Array<uint8_t>* GetRawCertData();
    // protected override System.Byte[] GetCertHash(System.Boolean lazy)
    // Offset: 0x1849040
    // Implemented from: System.Security.Cryptography.X509Certificates.X509CertificateImpl
    // Base method: System.Byte[] X509CertificateImpl::GetCertHash(System.Boolean lazy)
    ::Array<uint8_t>* GetCertHash(bool lazy);
    // public override System.DateTime GetValidFrom()
    // Offset: 0x184909C
    // Implemented from: System.Security.Cryptography.X509Certificates.X509CertificateImpl
    // Base method: System.DateTime X509CertificateImpl::GetValidFrom()
    System::DateTime GetValidFrom();
    // public override System.DateTime GetValidUntil()
    // Offset: 0x18490D8
    // Implemented from: System.Security.Cryptography.X509Certificates.X509CertificateImpl
    // Base method: System.DateTime X509CertificateImpl::GetValidUntil()
    System::DateTime GetValidUntil();
    // public override System.Boolean Equals(System.Security.Cryptography.X509Certificates.X509CertificateImpl other, out System.Boolean result)
    // Offset: 0x1849114
    // Implemented from: System.Security.Cryptography.X509Certificates.X509CertificateImpl
    // Base method: System.Boolean X509CertificateImpl::Equals(System.Security.Cryptography.X509Certificates.X509CertificateImpl other, out System.Boolean result)
    bool Equals(System::Security::Cryptography::X509Certificates::X509CertificateImpl* other, bool& result);
    // public override System.Byte[] GetSerialNumber()
    // Offset: 0x1849120
    // Implemented from: System.Security.Cryptography.X509Certificates.X509CertificateImpl
    // Base method: System.Byte[] X509CertificateImpl::GetSerialNumber()
    ::Array<uint8_t>* GetSerialNumber();
    // public System.Void .ctor()
    // Offset: 0x184915C
    // Implemented from: System.Security.Cryptography.X509Certificates.X509Certificate2Impl
    // Base method: System.Void X509Certificate2Impl::.ctor()
    // Base method: System.Void X509CertificateImpl::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static X509Certificate2ImplMono* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<X509Certificate2ImplMono*, creationType>()));
    }
    // public override System.Security.Cryptography.X509Certificates.X509ExtensionCollection get_Extensions()
    // Offset: 0x1849184
    // Implemented from: System.Security.Cryptography.X509Certificates.X509Certificate2Impl
    // Base method: System.Security.Cryptography.X509Certificates.X509ExtensionCollection X509Certificate2Impl::get_Extensions()
    System::Security::Cryptography::X509Certificates::X509ExtensionCollection* get_Extensions();
    // public override System.Security.Cryptography.X509Certificates.X500DistinguishedName get_IssuerName()
    // Offset: 0x18497F4
    // Implemented from: System.Security.Cryptography.X509Certificates.X509Certificate2Impl
    // Base method: System.Security.Cryptography.X509Certificates.X500DistinguishedName X509Certificate2Impl::get_IssuerName()
    System::Security::Cryptography::X509Certificates::X500DistinguishedName* get_IssuerName();
    // public override System.Security.Cryptography.AsymmetricAlgorithm get_PrivateKey()
    // Offset: 0x18498F0
    // Implemented from: System.Security.Cryptography.X509Certificates.X509Certificate2Impl
    // Base method: System.Security.Cryptography.AsymmetricAlgorithm X509Certificate2Impl::get_PrivateKey()
    System::Security::Cryptography::AsymmetricAlgorithm* get_PrivateKey();
    // public override System.Void set_PrivateKey(System.Security.Cryptography.AsymmetricAlgorithm value)
    // Offset: 0x1849C20
    // Implemented from: System.Security.Cryptography.X509Certificates.X509Certificate2Impl
    // Base method: System.Void X509Certificate2Impl::set_PrivateKey(System.Security.Cryptography.AsymmetricAlgorithm value)
    void set_PrivateKey(System::Security::Cryptography::AsymmetricAlgorithm* value);
    // public override System.Security.Cryptography.X509Certificates.PublicKey get_PublicKey()
    // Offset: 0x1849DB0
    // Implemented from: System.Security.Cryptography.X509Certificates.X509Certificate2Impl
    // Base method: System.Security.Cryptography.X509Certificates.PublicKey X509Certificate2Impl::get_PublicKey()
    System::Security::Cryptography::X509Certificates::PublicKey* get_PublicKey();
    // public override System.Security.Cryptography.Oid get_SignatureAlgorithm()
    // Offset: 0x1849F4C
    // Implemented from: System.Security.Cryptography.X509Certificates.X509Certificate2Impl
    // Base method: System.Security.Cryptography.Oid X509Certificate2Impl::get_SignatureAlgorithm()
    System::Security::Cryptography::Oid* get_SignatureAlgorithm();
    // public override System.Security.Cryptography.X509Certificates.X500DistinguishedName get_SubjectName()
    // Offset: 0x184A060
    // Implemented from: System.Security.Cryptography.X509Certificates.X509Certificate2Impl
    // Base method: System.Security.Cryptography.X509Certificates.X500DistinguishedName X509Certificate2Impl::get_SubjectName()
    System::Security::Cryptography::X509Certificates::X500DistinguishedName* get_SubjectName();
    // public override System.Int32 get_Version()
    // Offset: 0x184A15C
    // Implemented from: System.Security.Cryptography.X509Certificates.X509Certificate2Impl
    // Base method: System.Int32 X509Certificate2Impl::get_Version()
    int get_Version();
    // public override System.String GetNameInfo(System.Security.Cryptography.X509Certificates.X509NameType nameType, System.Boolean forIssuer)
    // Offset: 0x184A208
    // Implemented from: System.Security.Cryptography.X509Certificates.X509Certificate2Impl
    // Base method: System.String X509Certificate2Impl::GetNameInfo(System.Security.Cryptography.X509Certificates.X509NameType nameType, System.Boolean forIssuer)
    ::Il2CppString* GetNameInfo(System::Security::Cryptography::X509Certificates::X509NameType nameType, bool forIssuer);
    // public override System.Void Import(System.Byte[] rawData, System.String password, System.Security.Cryptography.X509Certificates.X509KeyStorageFlags keyStorageFlags)
    // Offset: 0x184AEF0
    // Implemented from: System.Security.Cryptography.X509Certificates.X509Certificate2Impl
    // Base method: System.Void X509Certificate2Impl::Import(System.Byte[] rawData, System.String password, System.Security.Cryptography.X509Certificates.X509KeyStorageFlags keyStorageFlags)
    void Import(::Array<uint8_t>* rawData, ::Il2CppString* password, System::Security::Cryptography::X509Certificates::X509KeyStorageFlags keyStorageFlags);
    // public override System.Void Reset()
    // Offset: 0x184B168
    // Implemented from: System.Security.Cryptography.X509Certificates.X509Certificate2Impl
    // Base method: System.Void X509Certificate2Impl::Reset()
    void Reset();
    // public override System.String ToString()
    // Offset: 0x184B224
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
    // public override System.String ToString(System.Boolean verbose)
    // Offset: 0x184B298
    // Implemented from: System.Security.Cryptography.X509Certificates.X509CertificateImpl
    // Base method: System.String X509CertificateImpl::ToString(System.Boolean verbose)
    ::Il2CppString* ToString(bool verbose);
    // public override System.Boolean Verify(System.Security.Cryptography.X509Certificates.X509Certificate2 thisCertificate)
    // Offset: 0x184B99C
    // Implemented from: System.Security.Cryptography.X509Certificates.X509Certificate2Impl
    // Base method: System.Boolean X509Certificate2Impl::Verify(System.Security.Cryptography.X509Certificates.X509Certificate2 thisCertificate)
    bool Verify(System::Security::Cryptography::X509Certificates::X509Certificate2* thisCertificate);
    // override System.Security.Cryptography.X509Certificates.X509CertificateImplCollection get_IntermediateCertificates()
    // Offset: 0x184BB08
    // Implemented from: System.Security.Cryptography.X509Certificates.X509Certificate2Impl
    // Base method: System.Security.Cryptography.X509Certificates.X509CertificateImplCollection X509Certificate2Impl::get_IntermediateCertificates()
    System::Security::Cryptography::X509Certificates::X509CertificateImplCollection* get_IntermediateCertificates();
    // override System.Security.Cryptography.X509Certificates.X509Certificate2Impl get_FallbackImpl()
    // Offset: 0x184BB18
    // Implemented from: System.Security.Cryptography.X509Certificates.X509Certificate2Impl
    // Base method: System.Security.Cryptography.X509Certificates.X509Certificate2Impl X509Certificate2Impl::get_FallbackImpl()
    System::Security::Cryptography::X509Certificates::X509Certificate2Impl* get_FallbackImpl();
  }; // System.Security.Cryptography.X509Certificates.X509Certificate2ImplMono
  #pragma pack(pop)
  static check_size<sizeof(X509Certificate2ImplMono), 80 + sizeof(Mono::Security::X509::X509Certificate*)> __System_Security_Cryptography_X509Certificates_X509Certificate2ImplMonoSizeCheck;
  static_assert(sizeof(X509Certificate2ImplMono) == 0x58);
}
DEFINE_IL2CPP_ARG_TYPE(System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono*, "System.Security.Cryptography.X509Certificates", "X509Certificate2ImplMono");
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::Find
// Il2CppName: Find
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::GetValueAsString
// Il2CppName: GetValueAsString
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::ImportPkcs12
// Il2CppName: ImportPkcs12
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::AppendBuffer
// Il2CppName: AppendBuffer
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::get_MonoCertificate
// Il2CppName: get_MonoCertificate
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::_cctor
// Il2CppName: .cctor
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::get_IsValid
// Il2CppName: get_IsValid
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::Clone
// Il2CppName: Clone
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::GetIssuerName
// Il2CppName: GetIssuerName
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::GetSubjectName
// Il2CppName: GetSubjectName
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::GetRawCertData
// Il2CppName: GetRawCertData
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::GetCertHash
// Il2CppName: GetCertHash
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::GetValidFrom
// Il2CppName: GetValidFrom
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::GetValidUntil
// Il2CppName: GetValidUntil
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::Equals
// Il2CppName: Equals
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::GetSerialNumber
// Il2CppName: GetSerialNumber
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::get_Extensions
// Il2CppName: get_Extensions
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::get_IssuerName
// Il2CppName: get_IssuerName
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::get_PrivateKey
// Il2CppName: get_PrivateKey
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::set_PrivateKey
// Il2CppName: set_PrivateKey
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::get_PublicKey
// Il2CppName: get_PublicKey
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::get_SignatureAlgorithm
// Il2CppName: get_SignatureAlgorithm
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::get_SubjectName
// Il2CppName: get_SubjectName
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::get_Version
// Il2CppName: get_Version
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::GetNameInfo
// Il2CppName: GetNameInfo
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::Import
// Il2CppName: Import
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::Reset
// Il2CppName: Reset
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::ToString
// Il2CppName: ToString
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::ToString
// Il2CppName: ToString
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::Verify
// Il2CppName: Verify
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::get_IntermediateCertificates
// Il2CppName: get_IntermediateCertificates
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::get_FallbackImpl
// Il2CppName: get_FallbackImpl
// Cannot perform method pointer template specialization from operators!
