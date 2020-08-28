// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Security.Cryptography.X509Certificates.X509Extension
#include "System/Security/Cryptography/X509Certificates/X509Extension.hpp"
// Including type: System.Security.Cryptography.X509Certificates.X509KeyUsageFlags
#include "System/Security/Cryptography/X509Certificates/X509KeyUsageFlags.hpp"
// Including type: System.Security.Cryptography.AsnDecodeStatus
#include "System/Security/Cryptography/AsnDecodeStatus.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: String
  class String;
}
// Forward declaring namespace: System::Security::Cryptography
namespace System::Security::Cryptography {
  // Skipping declaration: AsnEncodedData because it is already included!
}
// Completed forward declares
// Type namespace: System.Security.Cryptography.X509Certificates
namespace System::Security::Cryptography::X509Certificates {
  // Autogenerated type: System.Security.Cryptography.X509Certificates.X509KeyUsageExtension
  class X509KeyUsageExtension : public System::Security::Cryptography::X509Certificates::X509Extension {
    public:
    // private System.Security.Cryptography.X509Certificates.X509KeyUsageFlags _keyUsages
    // Offset: 0x24
    System::Security::Cryptography::X509Certificates::X509KeyUsageFlags keyUsages;
    // private System.Security.Cryptography.AsnDecodeStatus _status
    // Offset: 0x28
    System::Security::Cryptography::AsnDecodeStatus status;
    // Deleting conversion operator: operator bool
    constexpr operator bool() const = delete;
    // static field const value: static System.String oid
    static constexpr const char* oid = "2.5.29.15";
    // Get static field: static System.String oid
    static ::Il2CppString* _get_oid();
    // Set static field: static System.String oid
    static void _set_oid(::Il2CppString* value);
    // static field const value: static System.String friendlyName
    static constexpr const char* friendlyName = "Key Usage";
    // Get static field: static System.String friendlyName
    static ::Il2CppString* _get_friendlyName();
    // Set static field: static System.String friendlyName
    static void _set_friendlyName(::Il2CppString* value);
    // static field const value: static System.Security.Cryptography.X509Certificates.X509KeyUsageFlags all
    static constexpr const int all = 33023;
    // Get static field: static System.Security.Cryptography.X509Certificates.X509KeyUsageFlags all
    static System::Security::Cryptography::X509Certificates::X509KeyUsageFlags _get_all();
    // Set static field: static System.Security.Cryptography.X509Certificates.X509KeyUsageFlags all
    static void _set_all(System::Security::Cryptography::X509Certificates::X509KeyUsageFlags value);
    // public System.Void .ctor(System.Security.Cryptography.AsnEncodedData encodedKeyUsage, System.Boolean critical)
    // Offset: 0x121B2AC
    static X509KeyUsageExtension* New_ctor(System::Security::Cryptography::AsnEncodedData* encodedKeyUsage, bool critical);
    // public System.Void .ctor(System.Security.Cryptography.X509Certificates.X509KeyUsageFlags keyUsages, System.Boolean critical)
    // Offset: 0x121E064
    static X509KeyUsageExtension* New_ctor(System::Security::Cryptography::X509Certificates::X509KeyUsageFlags keyUsages, bool critical);
    // public System.Security.Cryptography.X509Certificates.X509KeyUsageFlags get_KeyUsages()
    // Offset: 0x121E2A8
    System::Security::Cryptography::X509Certificates::X509KeyUsageFlags get_KeyUsages();
    // System.Security.Cryptography.X509Certificates.X509KeyUsageFlags GetValidFlags(System.Security.Cryptography.X509Certificates.X509KeyUsageFlags flags)
    // Offset: 0x121E128
    System::Security::Cryptography::X509Certificates::X509KeyUsageFlags GetValidFlags(System::Security::Cryptography::X509Certificates::X509KeyUsageFlags flags);
    // System.Security.Cryptography.AsnDecodeStatus Decode(System.Byte[] extension)
    // Offset: 0x121DE90
    System::Security::Cryptography::AsnDecodeStatus Decode(::Array<uint8_t>* extension);
    // System.Byte[] Encode()
    // Offset: 0x121E138
    ::Array<uint8_t>* Encode();
    // public System.Void .ctor()
    // Offset: 0x121DE08
    // Implemented from: System.Security.Cryptography.X509Certificates.X509Extension
    // Base method: System.Void X509Extension::.ctor()
    // Base method: System.Void AsnEncodedData::.ctor()
    // Base method: System.Void Object::.ctor()
    static X509KeyUsageExtension* New_ctor();
    // public override System.Void CopyFrom(System.Security.Cryptography.AsnEncodedData asnEncodedData)
    // Offset: 0x121E338
    // Implemented from: System.Security.Cryptography.X509Certificates.X509Extension
    // Base method: System.Void X509Extension::CopyFrom(System.Security.Cryptography.AsnEncodedData asnEncodedData)
    void CopyFrom(System::Security::Cryptography::AsnEncodedData* asnEncodedData);
    // override System.String ToString(System.Boolean multiLine)
    // Offset: 0x121E4D4
    // Implemented from: System.Security.Cryptography.AsnEncodedData
    // Base method: System.String AsnEncodedData::ToString(System.Boolean multiLine)
    ::Il2CppString* ToString(bool multiLine);
  }; // System.Security.Cryptography.X509Certificates.X509KeyUsageExtension
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Security::Cryptography::X509Certificates::X509KeyUsageExtension*, "System.Security.Cryptography.X509Certificates", "X509KeyUsageExtension");
#pragma pack(pop)
