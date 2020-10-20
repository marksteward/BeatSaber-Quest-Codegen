// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Security.Cryptography.X509Certificates.X509CertificateCollection
#include "System/Security/Cryptography/X509Certificates/X509CertificateCollection.hpp"
// Including type: System.Collections.IEnumerator
#include "System/Collections/IEnumerator.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Security::Cryptography::X509Certificates
namespace System::Security::Cryptography::X509Certificates {
  // Forward declaring type: X509Certificate
  class X509Certificate;
}
// Completed forward declares
// Type namespace: System.Security.Cryptography.X509Certificates
namespace System::Security::Cryptography::X509Certificates {
  // Autogenerated type: System.Security.Cryptography.X509Certificates.X509CertificateCollection/X509CertificateEnumerator
  class X509CertificateCollection::X509CertificateEnumerator : public ::Il2CppObject/*, public System::Collections::IEnumerator*/ {
    public:
    // private System.Collections.IEnumerator enumerator
    // Offset: 0x10
    System::Collections::IEnumerator* enumerator;
    // Creating interface conversion operator: operator System::Collections::IEnumerator
    operator System::Collections::IEnumerator() noexcept {
      return *reinterpret_cast<System::Collections::IEnumerator*>(this);
    }
    // Creating conversion operator: operator System::Collections::IEnumerator*
    constexpr operator System::Collections::IEnumerator*() const noexcept {
      return enumerator;
    }
    // public System.Void .ctor(System.Security.Cryptography.X509Certificates.X509CertificateCollection mappings)
    // Offset: 0x147A71C
    static X509CertificateCollection::X509CertificateEnumerator* New_ctor(System::Security::Cryptography::X509Certificates::X509CertificateCollection* mappings);
    // public System.Security.Cryptography.X509Certificates.X509Certificate get_Current()
    // Offset: 0x147A818
    System::Security::Cryptography::X509Certificates::X509Certificate* get_Current();
    // public System.Boolean MoveNext()
    // Offset: 0x147AB24
    bool MoveNext();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x147A90C
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Object IEnumerator::get_Current()
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
    // private System.Boolean System.Collections.IEnumerator.MoveNext()
    // Offset: 0x147A9C0
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Boolean IEnumerator::MoveNext()
    bool System_Collections_IEnumerator_MoveNext();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0x147AA70
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Void IEnumerator::Reset()
    void System_Collections_IEnumerator_Reset();
  }; // System.Security.Cryptography.X509Certificates.X509CertificateCollection/X509CertificateEnumerator
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Security::Cryptography::X509Certificates::X509CertificateCollection::X509CertificateEnumerator*, "System.Security.Cryptography.X509Certificates", "X509CertificateCollection/X509CertificateEnumerator");
#pragma pack(pop)
