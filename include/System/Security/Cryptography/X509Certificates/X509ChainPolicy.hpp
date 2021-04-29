// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Security.Cryptography.X509Certificates.X509RevocationFlag
#include "System/Security/Cryptography/X509Certificates/X509RevocationFlag.hpp"
// Including type: System.Security.Cryptography.X509Certificates.X509RevocationMode
#include "System/Security/Cryptography/X509Certificates/X509RevocationMode.hpp"
// Including type: System.TimeSpan
#include "System/TimeSpan.hpp"
// Including type: System.Security.Cryptography.X509Certificates.X509VerificationFlags
#include "System/Security/Cryptography/X509Certificates/X509VerificationFlags.hpp"
// Including type: System.DateTime
#include "System/DateTime.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Security::Cryptography
namespace System::Security::Cryptography {
  // Forward declaring type: OidCollection
  class OidCollection;
}
// Forward declaring namespace: System::Security::Cryptography::X509Certificates
namespace System::Security::Cryptography::X509Certificates {
  // Forward declaring type: X509CertificateCollection
  class X509CertificateCollection;
  // Forward declaring type: X509Certificate2Collection
  class X509Certificate2Collection;
}
// Completed forward declares
// Type namespace: System.Security.Cryptography.X509Certificates
namespace System::Security::Cryptography::X509Certificates {
  // Size: 0x50
  #pragma pack(push, 1)
  // Autogenerated type: System.Security.Cryptography.X509Certificates.X509ChainPolicy
  class X509ChainPolicy : public ::Il2CppObject {
    public:
    // private System.Security.Cryptography.OidCollection apps
    // Size: 0x8
    // Offset: 0x10
    System::Security::Cryptography::OidCollection* apps;
    // Field size check
    static_assert(sizeof(System::Security::Cryptography::OidCollection*) == 0x8);
    // private System.Security.Cryptography.OidCollection cert
    // Size: 0x8
    // Offset: 0x18
    System::Security::Cryptography::OidCollection* cert;
    // Field size check
    static_assert(sizeof(System::Security::Cryptography::OidCollection*) == 0x8);
    // private System.Security.Cryptography.X509Certificates.X509CertificateCollection store
    // Size: 0x8
    // Offset: 0x20
    System::Security::Cryptography::X509Certificates::X509CertificateCollection* store;
    // Field size check
    static_assert(sizeof(System::Security::Cryptography::X509Certificates::X509CertificateCollection*) == 0x8);
    // private System.Security.Cryptography.X509Certificates.X509Certificate2Collection store2
    // Size: 0x8
    // Offset: 0x28
    System::Security::Cryptography::X509Certificates::X509Certificate2Collection* store2;
    // Field size check
    static_assert(sizeof(System::Security::Cryptography::X509Certificates::X509Certificate2Collection*) == 0x8);
    // private System.Security.Cryptography.X509Certificates.X509RevocationFlag rflag
    // Size: 0x4
    // Offset: 0x30
    System::Security::Cryptography::X509Certificates::X509RevocationFlag rflag;
    // Field size check
    static_assert(sizeof(System::Security::Cryptography::X509Certificates::X509RevocationFlag) == 0x4);
    // private System.Security.Cryptography.X509Certificates.X509RevocationMode mode
    // Size: 0x4
    // Offset: 0x34
    System::Security::Cryptography::X509Certificates::X509RevocationMode mode;
    // Field size check
    static_assert(sizeof(System::Security::Cryptography::X509Certificates::X509RevocationMode) == 0x4);
    // private System.TimeSpan timeout
    // Size: 0x8
    // Offset: 0x38
    System::TimeSpan timeout;
    // Field size check
    static_assert(sizeof(System::TimeSpan) == 0x8);
    // private System.Security.Cryptography.X509Certificates.X509VerificationFlags vflags
    // Size: 0x4
    // Offset: 0x40
    System::Security::Cryptography::X509Certificates::X509VerificationFlags vflags;
    // Field size check
    static_assert(sizeof(System::Security::Cryptography::X509Certificates::X509VerificationFlags) == 0x4);
    // Padding between fields: vflags and: vtime
    char __padding7[0x4] = {};
    // private System.DateTime vtime
    // Size: 0x8
    // Offset: 0x48
    System::DateTime vtime;
    // Field size check
    static_assert(sizeof(System::DateTime) == 0x8);
    // Creating value type constructor for type: X509ChainPolicy
    X509ChainPolicy(System::Security::Cryptography::OidCollection* apps_ = {}, System::Security::Cryptography::OidCollection* cert_ = {}, System::Security::Cryptography::X509Certificates::X509CertificateCollection* store_ = {}, System::Security::Cryptography::X509Certificates::X509Certificate2Collection* store2_ = {}, System::Security::Cryptography::X509Certificates::X509RevocationFlag rflag_ = {}, System::Security::Cryptography::X509Certificates::X509RevocationMode mode_ = {}, System::TimeSpan timeout_ = {}, System::Security::Cryptography::X509Certificates::X509VerificationFlags vflags_ = {}, System::DateTime vtime_ = {}) noexcept : apps{apps_}, cert{cert_}, store{store_}, store2{store2_}, rflag{rflag_}, mode{mode_}, timeout{timeout_}, vflags{vflags_}, vtime{vtime_} {}
    // System.Void .ctor(System.Security.Cryptography.X509Certificates.X509CertificateCollection store)
    // Offset: 0x16B71B4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static X509ChainPolicy* New_ctor(System::Security::Cryptography::X509Certificates::X509CertificateCollection* store) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Security::Cryptography::X509Certificates::X509ChainPolicy::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<X509ChainPolicy*, creationType>(store)));
    }
    // public System.Security.Cryptography.X509Certificates.X509Certificate2Collection get_ExtraStore()
    // Offset: 0x16B5030
    System::Security::Cryptography::X509Certificates::X509Certificate2Collection* get_ExtraStore();
    // public System.Security.Cryptography.X509Certificates.X509RevocationFlag get_RevocationFlag()
    // Offset: 0x16B71E4
    System::Security::Cryptography::X509Certificates::X509RevocationFlag get_RevocationFlag();
    // public System.Void set_RevocationFlag(System.Security.Cryptography.X509Certificates.X509RevocationFlag value)
    // Offset: 0x16B71EC
    void set_RevocationFlag(System::Security::Cryptography::X509Certificates::X509RevocationFlag value);
    // public System.Security.Cryptography.X509Certificates.X509RevocationMode get_RevocationMode()
    // Offset: 0x16B7280
    System::Security::Cryptography::X509Certificates::X509RevocationMode get_RevocationMode();
    // public System.Void set_RevocationMode(System.Security.Cryptography.X509Certificates.X509RevocationMode value)
    // Offset: 0x16B7288
    void set_RevocationMode(System::Security::Cryptography::X509Certificates::X509RevocationMode value);
    // public System.Void set_UrlRetrievalTimeout(System.TimeSpan value)
    // Offset: 0x16B731C
    void set_UrlRetrievalTimeout(System::TimeSpan value);
    // public System.Security.Cryptography.X509Certificates.X509VerificationFlags get_VerificationFlags()
    // Offset: 0x16B7324
    System::Security::Cryptography::X509Certificates::X509VerificationFlags get_VerificationFlags();
    // public System.Void set_VerificationFlags(System.Security.Cryptography.X509Certificates.X509VerificationFlags value)
    // Offset: 0x16B732C
    void set_VerificationFlags(System::Security::Cryptography::X509Certificates::X509VerificationFlags value);
    // public System.DateTime get_VerificationTime()
    // Offset: 0x16B73C0
    System::DateTime get_VerificationTime();
    // public System.Void set_VerificationTime(System.DateTime value)
    // Offset: 0x16B73C8
    void set_VerificationTime(System::DateTime value);
    // public System.Void Reset()
    // Offset: 0x16B70CC
    void Reset();
    // public System.Void .ctor()
    // Offset: 0x16B3B88
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static X509ChainPolicy* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Security::Cryptography::X509Certificates::X509ChainPolicy::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<X509ChainPolicy*, creationType>()));
    }
  }; // System.Security.Cryptography.X509Certificates.X509ChainPolicy
  #pragma pack(pop)
  static check_size<sizeof(X509ChainPolicy), 72 + sizeof(System::DateTime)> __System_Security_Cryptography_X509Certificates_X509ChainPolicySizeCheck;
  static_assert(sizeof(X509ChainPolicy) == 0x50);
}
DEFINE_IL2CPP_ARG_TYPE(System::Security::Cryptography::X509Certificates::X509ChainPolicy*, "System.Security.Cryptography.X509Certificates", "X509ChainPolicy");
