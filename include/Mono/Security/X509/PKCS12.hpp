// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.ICloneable
#include "System/ICloneable.hpp"
// Including type: Mono.Security.PKCS7
#include "Mono/Security/PKCS7.hpp"
// Including type: Mono.Security.Cryptography.PKCS8
#include "Mono/Security/Cryptography/PKCS8.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Mono::Security::X509
namespace Mono::Security::X509 {
  // Forward declaring type: X509CertificateCollection
  class X509CertificateCollection;
  // Forward declaring type: X509Certificate
  class X509Certificate;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: ArrayList
  class ArrayList;
  // Forward declaring type: IDictionary
  class IDictionary;
}
// Forward declaring namespace: System::Security::Cryptography
namespace System::Security::Cryptography {
  // Forward declaring type: RandomNumberGenerator
  class RandomNumberGenerator;
  // Forward declaring type: SymmetricAlgorithm
  class SymmetricAlgorithm;
  // Forward declaring type: DSAParameters
  struct DSAParameters;
}
// Forward declaring namespace: Mono::Security
namespace Mono::Security {
  // Forward declaring type: ASN1
  class ASN1;
}
// Completed forward declares
// Type namespace: Mono.Security.X509
namespace Mono::Security::X509 {
  // Autogenerated type: Mono.Security.X509.PKCS12
  class PKCS12 : public ::Il2CppObject/*, public System::ICloneable*/ {
    public:
    // Nested type: Mono::Security::X509::PKCS12::DeriveBytes
    class DeriveBytes;
    // private System.Byte[] _password
    // Offset: 0x10
    ::Array<uint8_t>* password;
    // private System.Collections.ArrayList _keyBags
    // Offset: 0x18
    System::Collections::ArrayList* keyBags;
    // private System.Collections.ArrayList _secretBags
    // Offset: 0x20
    System::Collections::ArrayList* secretBags;
    // private Mono.Security.X509.X509CertificateCollection _certs
    // Offset: 0x28
    Mono::Security::X509::X509CertificateCollection* certs;
    // private System.Boolean _keyBagsChanged
    // Offset: 0x30
    bool keyBagsChanged;
    // private System.Boolean _secretBagsChanged
    // Offset: 0x31
    bool secretBagsChanged;
    // private System.Boolean _certsChanged
    // Offset: 0x32
    bool certsChanged;
    // private System.Int32 _iterations
    // Offset: 0x34
    int iterations;
    // private System.Collections.ArrayList _safeBags
    // Offset: 0x38
    System::Collections::ArrayList* safeBags;
    // private System.Security.Cryptography.RandomNumberGenerator _rng
    // Offset: 0x40
    System::Security::Cryptography::RandomNumberGenerator* rng;
    // Creating interface conversion operator: operator System::ICloneable
    operator System::ICloneable() noexcept {
      return *reinterpret_cast<System::ICloneable*>(this);
    }
    // Get static field: static private System.Int32 password_max_length
    static int _get_password_max_length();
    // Set static field: static private System.Int32 password_max_length
    static void _set_password_max_length(int value);
    // public System.Void .ctor(System.Byte[] data)
    // Offset: 0x192E34C
    static PKCS12* New_ctor(::Array<uint8_t>* data);
    // public System.Void .ctor(System.Byte[] data, System.String password)
    // Offset: 0x192EBB4
    static PKCS12* New_ctor(::Array<uint8_t>* data, ::Il2CppString* password);
    // private System.Void Decode(System.Byte[] data)
    // Offset: 0x192E598
    void Decode(::Array<uint8_t>* data);
    // public System.Void set_Password(System.String value)
    // Offset: 0x192E384
    void set_Password(::Il2CppString* value);
    // public System.Int32 get_IterationCount()
    // Offset: 0x192F534
    int get_IterationCount();
    // public System.Void set_IterationCount(System.Int32 value)
    // Offset: 0x192F53C
    void set_IterationCount(int value);
    // public System.Collections.ArrayList get_Keys()
    // Offset: 0x192F544
    System::Collections::ArrayList* get_Keys();
    // public Mono.Security.X509.X509CertificateCollection get_Certificates()
    // Offset: 0x192FD38
    Mono::Security::X509::X509CertificateCollection* get_Certificates();
    // System.Security.Cryptography.RandomNumberGenerator get_RNG()
    // Offset: 0x19300CC
    System::Security::Cryptography::RandomNumberGenerator* get_RNG();
    // private System.Boolean Compare(System.Byte[] expected, System.Byte[] actual)
    // Offset: 0x192ED54
    bool Compare(::Array<uint8_t>* expected, ::Array<uint8_t>* actual);
    // private System.Security.Cryptography.SymmetricAlgorithm GetSymmetricAlgorithm(System.String algorithmOid, System.Byte[] salt, System.Int32 iterationCount)
    // Offset: 0x1930108
    System::Security::Cryptography::SymmetricAlgorithm* GetSymmetricAlgorithm(::Il2CppString* algorithmOid, ::Array<uint8_t>* salt, int iterationCount);
    // public System.Byte[] Decrypt(System.String algorithmOid, System.Byte[] salt, System.Int32 iterationCount, System.Byte[] encryptedData)
    // Offset: 0x192FBA0
    ::Array<uint8_t>* Decrypt(::Il2CppString* algorithmOid, ::Array<uint8_t>* salt, int iterationCount, ::Array<uint8_t>* encryptedData);
    // public System.Byte[] Decrypt(Mono.Security.PKCS7/EncryptedData ed)
    // Offset: 0x192F404
    ::Array<uint8_t>* Decrypt(Mono::Security::PKCS7::EncryptedData* ed);
    // public System.Byte[] Encrypt(System.String algorithmOid, System.Byte[] salt, System.Int32 iterationCount, System.Byte[] data)
    // Offset: 0x1930630
    ::Array<uint8_t>* Encrypt(::Il2CppString* algorithmOid, ::Array<uint8_t>* salt, int iterationCount, ::Array<uint8_t>* data);
    // private System.Security.Cryptography.DSAParameters GetExistingParameters(out System.Boolean found)
    // Offset: 0x193081C
    System::Security::Cryptography::DSAParameters GetExistingParameters(bool& found);
    // private System.Void AddPrivateKey(Mono.Security.Cryptography.PKCS8/PrivateKeyInfo pki)
    // Offset: 0x1930A60
    void AddPrivateKey(Mono::Security::Cryptography::PKCS8::PrivateKeyInfo* pki);
    // private System.Void ReadSafeBag(Mono.Security.ASN1 safeBag)
    // Offset: 0x192EDD0
    void ReadSafeBag(Mono::Security::ASN1* safeBag);
    // private Mono.Security.ASN1 CertificateSafeBag(Mono.Security.X509.X509Certificate x509, System.Collections.IDictionary attributes)
    // Offset: 0x1930BD4
    Mono::Security::ASN1* CertificateSafeBag(Mono::Security::X509::X509Certificate* x509, System::Collections::IDictionary* attributes);
    // private System.Byte[] MAC(System.Byte[] password, System.Byte[] salt, System.Int32 iterations, System.Byte[] data)
    // Offset: 0x192EBF8
    ::Array<uint8_t>* MAC(::Array<uint8_t>* password, ::Array<uint8_t>* salt, int iterations, ::Array<uint8_t>* data);
    // public System.Byte[] GetBytes()
    // Offset: 0x1931768
    ::Array<uint8_t>* GetBytes();
    // private Mono.Security.PKCS7/ContentInfo EncryptedContentInfo(Mono.Security.ASN1 safeBags, System.String algorithmOid)
    // Offset: 0x1933730
    Mono::Security::PKCS7::ContentInfo* EncryptedContentInfo(Mono::Security::ASN1* safeBags, ::Il2CppString* algorithmOid);
    // public System.Void AddCertificate(Mono.Security.X509.X509Certificate cert)
    // Offset: 0x1933728
    void AddCertificate(Mono::Security::X509::X509Certificate* cert);
    // public System.Void AddCertificate(Mono.Security.X509.X509Certificate cert, System.Collections.IDictionary attributes)
    // Offset: 0x1933A74
    void AddCertificate(Mono::Security::X509::X509Certificate* cert, System::Collections::IDictionary* attributes);
    // public System.Void RemoveCertificate(Mono.Security.X509.X509Certificate cert)
    // Offset: 0x1933720
    void RemoveCertificate(Mono::Security::X509::X509Certificate* cert);
    // public System.Void RemoveCertificate(Mono.Security.X509.X509Certificate cert, System.Collections.IDictionary attrs)
    // Offset: 0x1933CA8
    void RemoveCertificate(Mono::Security::X509::X509Certificate* cert, System::Collections::IDictionary* attrs);
    // static public System.Int32 get_MaximumPasswordLength()
    // Offset: 0x1934250
    static int get_MaximumPasswordLength();
    // static private System.Void .cctor()
    // Offset: 0x19342B8
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x192E24C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static PKCS12* New_ctor();
    // protected override System.Void Finalize()
    // Offset: 0x192F4A0
    // Implemented from: System.Object
    // Base method: System.Void Object::Finalize()
    void Finalize();
    // public System.Object Clone()
    // Offset: 0x1934178
    // Implemented from: System.ICloneable
    // Base method: System.Object ICloneable::Clone()
    ::Il2CppObject* Clone();
    // Creating proxy method: System_ICloneable_Clone
    // Maps to method: Clone
    ::Il2CppObject* System_ICloneable_Clone();
  }; // Mono.Security.X509.PKCS12
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Mono::Security::X509::PKCS12*, "Mono.Security.X509", "PKCS12");
#pragma pack(pop)
