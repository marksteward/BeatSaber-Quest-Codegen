// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Security.Cryptography.AsnEncodedData
#include "System/Security/Cryptography/AsnEncodedData.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Security::Cryptography::X509Certificates
namespace System::Security::Cryptography::X509Certificates {
  // Forward declaring type: X500DistinguishedNameFlags
  struct X500DistinguishedNameFlags;
}
// Completed forward declares
// Type namespace: System.Security.Cryptography.X509Certificates
namespace System::Security::Cryptography::X509Certificates {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: System.Security.Cryptography.X509Certificates.X500DistinguishedName
  // [MonoTODOAttribute] Offset: D87D14
  class X500DistinguishedName : public System::Security::Cryptography::AsnEncodedData {
    public:
    // private System.String name
    // Size: 0x8
    // Offset: 0x20
    ::Il2CppString* name;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.Byte[] canonEncoding
    // Size: 0x8
    // Offset: 0x28
    ::Array<uint8_t>* canonEncoding;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // Creating value type constructor for type: X500DistinguishedName
    X500DistinguishedName(::Il2CppString* name_ = {}, ::Array<uint8_t>* canonEncoding_ = {}) noexcept : name{name_}, canonEncoding{canonEncoding_} {}
    // public System.Void .ctor(System.Byte[] encodedDistinguishedName)
    // Offset: 0x1844980
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static X500DistinguishedName* New_ctor(::Array<uint8_t>* encodedDistinguishedName) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Security::Cryptography::X509Certificates::X500DistinguishedName::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<X500DistinguishedName*, creationType>(encodedDistinguishedName)));
    }
    // public System.String Decode(System.Security.Cryptography.X509Certificates.X500DistinguishedNameFlags flag)
    // Offset: 0x1844B64
    ::Il2CppString* Decode(System::Security::Cryptography::X509Certificates::X500DistinguishedNameFlags flag);
    // static private System.String GetSeparator(System.Security.Cryptography.X509Certificates.X500DistinguishedNameFlags flag)
    // Offset: 0x1844CA0
    static ::Il2CppString* GetSeparator(System::Security::Cryptography::X509Certificates::X500DistinguishedNameFlags flag);
    // private System.Void DecodeRawData()
    // Offset: 0x1844A88
    void DecodeRawData();
    // static private System.String Canonize(System.String s)
    // Offset: 0x1844D84
    static ::Il2CppString* Canonize(::Il2CppString* s);
    // static System.Boolean AreEqual(System.Security.Cryptography.X509Certificates.X500DistinguishedName name1, System.Security.Cryptography.X509Certificates.X500DistinguishedName name2)
    // Offset: 0x1845008
    static bool AreEqual(System::Security::Cryptography::X509Certificates::X500DistinguishedName* name1, System::Security::Cryptography::X509Certificates::X500DistinguishedName* name2);
    // public override System.String Format(System.Boolean multiLine)
    // Offset: 0x1844D14
    // Implemented from: System.Security.Cryptography.AsnEncodedData
    // Base method: System.String AsnEncodedData::Format(System.Boolean multiLine)
    ::Il2CppString* Format(bool multiLine);
  }; // System.Security.Cryptography.X509Certificates.X500DistinguishedName
  #pragma pack(pop)
  static check_size<sizeof(X500DistinguishedName), 40 + sizeof(::Array<uint8_t>*)> __System_Security_Cryptography_X509Certificates_X500DistinguishedNameSizeCheck;
  static_assert(sizeof(X500DistinguishedName) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(System::Security::Cryptography::X509Certificates::X500DistinguishedName*, "System.Security.Cryptography.X509Certificates", "X500DistinguishedName");
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X500DistinguishedName::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X500DistinguishedName::Decode
// Il2CppName: Decode
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X500DistinguishedName::GetSeparator
// Il2CppName: GetSeparator
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X500DistinguishedName::DecodeRawData
// Il2CppName: DecodeRawData
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X500DistinguishedName::Canonize
// Il2CppName: Canonize
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X500DistinguishedName::AreEqual
// Il2CppName: AreEqual
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X500DistinguishedName::Format
// Il2CppName: Format
// Cannot perform method pointer template specialization from operators!
