// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: System.Security.Cryptography.X509Certificates
namespace System::Security::Cryptography::X509Certificates {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.Security.Cryptography.X509Certificates.StoreName
  // [TokenAttribute] Offset: FFFFFFFF
  struct StoreName/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: StoreName
    constexpr StoreName(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.Security.Cryptography.X509Certificates.StoreName AddressBook
    static constexpr const int AddressBook = 1;
    // Get static field: static public System.Security.Cryptography.X509Certificates.StoreName AddressBook
    static System::Security::Cryptography::X509Certificates::StoreName _get_AddressBook();
    // Set static field: static public System.Security.Cryptography.X509Certificates.StoreName AddressBook
    static void _set_AddressBook(System::Security::Cryptography::X509Certificates::StoreName value);
    // static field const value: static public System.Security.Cryptography.X509Certificates.StoreName AuthRoot
    static constexpr const int AuthRoot = 2;
    // Get static field: static public System.Security.Cryptography.X509Certificates.StoreName AuthRoot
    static System::Security::Cryptography::X509Certificates::StoreName _get_AuthRoot();
    // Set static field: static public System.Security.Cryptography.X509Certificates.StoreName AuthRoot
    static void _set_AuthRoot(System::Security::Cryptography::X509Certificates::StoreName value);
    // static field const value: static public System.Security.Cryptography.X509Certificates.StoreName CertificateAuthority
    static constexpr const int CertificateAuthority = 3;
    // Get static field: static public System.Security.Cryptography.X509Certificates.StoreName CertificateAuthority
    static System::Security::Cryptography::X509Certificates::StoreName _get_CertificateAuthority();
    // Set static field: static public System.Security.Cryptography.X509Certificates.StoreName CertificateAuthority
    static void _set_CertificateAuthority(System::Security::Cryptography::X509Certificates::StoreName value);
    // static field const value: static public System.Security.Cryptography.X509Certificates.StoreName Disallowed
    static constexpr const int Disallowed = 4;
    // Get static field: static public System.Security.Cryptography.X509Certificates.StoreName Disallowed
    static System::Security::Cryptography::X509Certificates::StoreName _get_Disallowed();
    // Set static field: static public System.Security.Cryptography.X509Certificates.StoreName Disallowed
    static void _set_Disallowed(System::Security::Cryptography::X509Certificates::StoreName value);
    // static field const value: static public System.Security.Cryptography.X509Certificates.StoreName My
    static constexpr const int My = 5;
    // Get static field: static public System.Security.Cryptography.X509Certificates.StoreName My
    static System::Security::Cryptography::X509Certificates::StoreName _get_My();
    // Set static field: static public System.Security.Cryptography.X509Certificates.StoreName My
    static void _set_My(System::Security::Cryptography::X509Certificates::StoreName value);
    // static field const value: static public System.Security.Cryptography.X509Certificates.StoreName Root
    static constexpr const int Root = 6;
    // Get static field: static public System.Security.Cryptography.X509Certificates.StoreName Root
    static System::Security::Cryptography::X509Certificates::StoreName _get_Root();
    // Set static field: static public System.Security.Cryptography.X509Certificates.StoreName Root
    static void _set_Root(System::Security::Cryptography::X509Certificates::StoreName value);
    // static field const value: static public System.Security.Cryptography.X509Certificates.StoreName TrustedPeople
    static constexpr const int TrustedPeople = 7;
    // Get static field: static public System.Security.Cryptography.X509Certificates.StoreName TrustedPeople
    static System::Security::Cryptography::X509Certificates::StoreName _get_TrustedPeople();
    // Set static field: static public System.Security.Cryptography.X509Certificates.StoreName TrustedPeople
    static void _set_TrustedPeople(System::Security::Cryptography::X509Certificates::StoreName value);
    // static field const value: static public System.Security.Cryptography.X509Certificates.StoreName TrustedPublisher
    static constexpr const int TrustedPublisher = 8;
    // Get static field: static public System.Security.Cryptography.X509Certificates.StoreName TrustedPublisher
    static System::Security::Cryptography::X509Certificates::StoreName _get_TrustedPublisher();
    // Set static field: static public System.Security.Cryptography.X509Certificates.StoreName TrustedPublisher
    static void _set_TrustedPublisher(System::Security::Cryptography::X509Certificates::StoreName value);
    // Get instance field: public System.Int32 value__
    int _get_value__();
    // Set instance field: public System.Int32 value__
    void _set_value__(int value);
  }; // System.Security.Cryptography.X509Certificates.StoreName
  #pragma pack(pop)
  static check_size<sizeof(StoreName), 0 + sizeof(int)> __System_Security_Cryptography_X509Certificates_StoreNameSizeCheck;
  static_assert(sizeof(StoreName) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Security::Cryptography::X509Certificates::StoreName, "System.Security.Cryptography.X509Certificates", "StoreName");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
