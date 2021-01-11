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
  // Autogenerated type: System.Security.Cryptography.X509Certificates.X509FindType
  // [] Offset: FFFFFFFF
  struct X509FindType/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: X509FindType
    constexpr X509FindType(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.Security.Cryptography.X509Certificates.X509FindType FindByThumbprint
    static constexpr const int FindByThumbprint = 0;
    // Get static field: static public System.Security.Cryptography.X509Certificates.X509FindType FindByThumbprint
    static System::Security::Cryptography::X509Certificates::X509FindType _get_FindByThumbprint();
    // Set static field: static public System.Security.Cryptography.X509Certificates.X509FindType FindByThumbprint
    static void _set_FindByThumbprint(System::Security::Cryptography::X509Certificates::X509FindType value);
    // static field const value: static public System.Security.Cryptography.X509Certificates.X509FindType FindBySubjectName
    static constexpr const int FindBySubjectName = 1;
    // Get static field: static public System.Security.Cryptography.X509Certificates.X509FindType FindBySubjectName
    static System::Security::Cryptography::X509Certificates::X509FindType _get_FindBySubjectName();
    // Set static field: static public System.Security.Cryptography.X509Certificates.X509FindType FindBySubjectName
    static void _set_FindBySubjectName(System::Security::Cryptography::X509Certificates::X509FindType value);
    // static field const value: static public System.Security.Cryptography.X509Certificates.X509FindType FindBySubjectDistinguishedName
    static constexpr const int FindBySubjectDistinguishedName = 2;
    // Get static field: static public System.Security.Cryptography.X509Certificates.X509FindType FindBySubjectDistinguishedName
    static System::Security::Cryptography::X509Certificates::X509FindType _get_FindBySubjectDistinguishedName();
    // Set static field: static public System.Security.Cryptography.X509Certificates.X509FindType FindBySubjectDistinguishedName
    static void _set_FindBySubjectDistinguishedName(System::Security::Cryptography::X509Certificates::X509FindType value);
    // static field const value: static public System.Security.Cryptography.X509Certificates.X509FindType FindByIssuerName
    static constexpr const int FindByIssuerName = 3;
    // Get static field: static public System.Security.Cryptography.X509Certificates.X509FindType FindByIssuerName
    static System::Security::Cryptography::X509Certificates::X509FindType _get_FindByIssuerName();
    // Set static field: static public System.Security.Cryptography.X509Certificates.X509FindType FindByIssuerName
    static void _set_FindByIssuerName(System::Security::Cryptography::X509Certificates::X509FindType value);
    // static field const value: static public System.Security.Cryptography.X509Certificates.X509FindType FindByIssuerDistinguishedName
    static constexpr const int FindByIssuerDistinguishedName = 4;
    // Get static field: static public System.Security.Cryptography.X509Certificates.X509FindType FindByIssuerDistinguishedName
    static System::Security::Cryptography::X509Certificates::X509FindType _get_FindByIssuerDistinguishedName();
    // Set static field: static public System.Security.Cryptography.X509Certificates.X509FindType FindByIssuerDistinguishedName
    static void _set_FindByIssuerDistinguishedName(System::Security::Cryptography::X509Certificates::X509FindType value);
    // static field const value: static public System.Security.Cryptography.X509Certificates.X509FindType FindBySerialNumber
    static constexpr const int FindBySerialNumber = 5;
    // Get static field: static public System.Security.Cryptography.X509Certificates.X509FindType FindBySerialNumber
    static System::Security::Cryptography::X509Certificates::X509FindType _get_FindBySerialNumber();
    // Set static field: static public System.Security.Cryptography.X509Certificates.X509FindType FindBySerialNumber
    static void _set_FindBySerialNumber(System::Security::Cryptography::X509Certificates::X509FindType value);
    // static field const value: static public System.Security.Cryptography.X509Certificates.X509FindType FindByTimeValid
    static constexpr const int FindByTimeValid = 6;
    // Get static field: static public System.Security.Cryptography.X509Certificates.X509FindType FindByTimeValid
    static System::Security::Cryptography::X509Certificates::X509FindType _get_FindByTimeValid();
    // Set static field: static public System.Security.Cryptography.X509Certificates.X509FindType FindByTimeValid
    static void _set_FindByTimeValid(System::Security::Cryptography::X509Certificates::X509FindType value);
    // static field const value: static public System.Security.Cryptography.X509Certificates.X509FindType FindByTimeNotYetValid
    static constexpr const int FindByTimeNotYetValid = 7;
    // Get static field: static public System.Security.Cryptography.X509Certificates.X509FindType FindByTimeNotYetValid
    static System::Security::Cryptography::X509Certificates::X509FindType _get_FindByTimeNotYetValid();
    // Set static field: static public System.Security.Cryptography.X509Certificates.X509FindType FindByTimeNotYetValid
    static void _set_FindByTimeNotYetValid(System::Security::Cryptography::X509Certificates::X509FindType value);
    // static field const value: static public System.Security.Cryptography.X509Certificates.X509FindType FindByTimeExpired
    static constexpr const int FindByTimeExpired = 8;
    // Get static field: static public System.Security.Cryptography.X509Certificates.X509FindType FindByTimeExpired
    static System::Security::Cryptography::X509Certificates::X509FindType _get_FindByTimeExpired();
    // Set static field: static public System.Security.Cryptography.X509Certificates.X509FindType FindByTimeExpired
    static void _set_FindByTimeExpired(System::Security::Cryptography::X509Certificates::X509FindType value);
    // static field const value: static public System.Security.Cryptography.X509Certificates.X509FindType FindByTemplateName
    static constexpr const int FindByTemplateName = 9;
    // Get static field: static public System.Security.Cryptography.X509Certificates.X509FindType FindByTemplateName
    static System::Security::Cryptography::X509Certificates::X509FindType _get_FindByTemplateName();
    // Set static field: static public System.Security.Cryptography.X509Certificates.X509FindType FindByTemplateName
    static void _set_FindByTemplateName(System::Security::Cryptography::X509Certificates::X509FindType value);
    // static field const value: static public System.Security.Cryptography.X509Certificates.X509FindType FindByApplicationPolicy
    static constexpr const int FindByApplicationPolicy = 10;
    // Get static field: static public System.Security.Cryptography.X509Certificates.X509FindType FindByApplicationPolicy
    static System::Security::Cryptography::X509Certificates::X509FindType _get_FindByApplicationPolicy();
    // Set static field: static public System.Security.Cryptography.X509Certificates.X509FindType FindByApplicationPolicy
    static void _set_FindByApplicationPolicy(System::Security::Cryptography::X509Certificates::X509FindType value);
    // static field const value: static public System.Security.Cryptography.X509Certificates.X509FindType FindByCertificatePolicy
    static constexpr const int FindByCertificatePolicy = 11;
    // Get static field: static public System.Security.Cryptography.X509Certificates.X509FindType FindByCertificatePolicy
    static System::Security::Cryptography::X509Certificates::X509FindType _get_FindByCertificatePolicy();
    // Set static field: static public System.Security.Cryptography.X509Certificates.X509FindType FindByCertificatePolicy
    static void _set_FindByCertificatePolicy(System::Security::Cryptography::X509Certificates::X509FindType value);
    // static field const value: static public System.Security.Cryptography.X509Certificates.X509FindType FindByExtension
    static constexpr const int FindByExtension = 12;
    // Get static field: static public System.Security.Cryptography.X509Certificates.X509FindType FindByExtension
    static System::Security::Cryptography::X509Certificates::X509FindType _get_FindByExtension();
    // Set static field: static public System.Security.Cryptography.X509Certificates.X509FindType FindByExtension
    static void _set_FindByExtension(System::Security::Cryptography::X509Certificates::X509FindType value);
    // static field const value: static public System.Security.Cryptography.X509Certificates.X509FindType FindByKeyUsage
    static constexpr const int FindByKeyUsage = 13;
    // Get static field: static public System.Security.Cryptography.X509Certificates.X509FindType FindByKeyUsage
    static System::Security::Cryptography::X509Certificates::X509FindType _get_FindByKeyUsage();
    // Set static field: static public System.Security.Cryptography.X509Certificates.X509FindType FindByKeyUsage
    static void _set_FindByKeyUsage(System::Security::Cryptography::X509Certificates::X509FindType value);
    // static field const value: static public System.Security.Cryptography.X509Certificates.X509FindType FindBySubjectKeyIdentifier
    static constexpr const int FindBySubjectKeyIdentifier = 14;
    // Get static field: static public System.Security.Cryptography.X509Certificates.X509FindType FindBySubjectKeyIdentifier
    static System::Security::Cryptography::X509Certificates::X509FindType _get_FindBySubjectKeyIdentifier();
    // Set static field: static public System.Security.Cryptography.X509Certificates.X509FindType FindBySubjectKeyIdentifier
    static void _set_FindBySubjectKeyIdentifier(System::Security::Cryptography::X509Certificates::X509FindType value);
  }; // System.Security.Cryptography.X509Certificates.X509FindType
  static check_size<sizeof(X509FindType), 0 + sizeof(int)> __System_Security_Cryptography_X509Certificates_X509FindTypeSizeCheck;
  static_assert(sizeof(X509FindType) == 0x4);
}
#pragma pack(pop)
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Security::Cryptography::X509Certificates::X509FindType, "System.Security.Cryptography.X509Certificates", "X509FindType");
