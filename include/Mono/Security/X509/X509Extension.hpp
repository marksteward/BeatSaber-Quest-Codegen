// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
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
// Completed forward declares
// Type namespace: Mono.Security.X509
namespace Mono::Security::X509 {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: Mono.Security.X509.X509Extension
  class X509Extension : public ::Il2CppObject {
    public:
    // protected System.String extnOid
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* extnOid;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // protected System.Boolean extnCritical
    // Size: 0x1
    // Offset: 0x18
    bool extnCritical;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: extnCritical and: extnValue
    char __padding1[0x7] = {};
    // protected Mono.Security.ASN1 extnValue
    // Size: 0x8
    // Offset: 0x20
    Mono::Security::ASN1* extnValue;
    // Field size check
    static_assert(sizeof(Mono::Security::ASN1*) == 0x8);
    // Creating value type constructor for type: X509Extension
    X509Extension(::Il2CppString* extnOid_ = {}, bool extnCritical_ = {}, Mono::Security::ASN1* extnValue_ = {}) noexcept : extnOid{extnOid_}, extnCritical{extnCritical_}, extnValue{extnValue_} {}
    // public System.Void .ctor(Mono.Security.ASN1 asn1)
    // Offset: 0x23A9E60
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static X509Extension* New_ctor(Mono::Security::ASN1* asn1) {
      static auto ___internal__logger = ::Logger::get().WithContext("Mono::Security::X509::X509Extension::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<X509Extension*, creationType>(asn1)));
    }
    // public System.Void .ctor(Mono.Security.X509.X509Extension extension)
    // Offset: 0x23AA120
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static X509Extension* New_ctor(Mono::Security::X509::X509Extension* extension) {
      static auto ___internal__logger = ::Logger::get().WithContext("Mono::Security::X509::X509Extension::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<X509Extension*, creationType>(extension)));
    }
    // protected System.Void Decode()
    // Offset: 0x23AA2B8
    void Decode();
    // protected System.Void Encode()
    // Offset: 0x23AA2BC
    void Encode();
    // public System.String get_Oid()
    // Offset: 0x23AA2C0
    ::Il2CppString* get_Oid();
    // public System.Boolean get_Critical()
    // Offset: 0x23AA2C8
    bool get_Critical();
    // public Mono.Security.ASN1 get_Value()
    // Offset: 0x23AA280
    Mono::Security::ASN1* get_Value();
    // private System.Void WriteLine(System.Text.StringBuilder sb, System.Int32 n, System.Int32 pos)
    // Offset: 0x23AA450
    void WriteLine(System::Text::StringBuilder* sb, int n, int pos);
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x23AA2D0
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x23AA430
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
    // public override System.String ToString()
    // Offset: 0x23AA65C
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
  }; // Mono.Security.X509.X509Extension
  #pragma pack(pop)
  static check_size<sizeof(X509Extension), 32 + sizeof(Mono::Security::ASN1*)> __Mono_Security_X509_X509ExtensionSizeCheck;
  static_assert(sizeof(X509Extension) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(Mono::Security::X509::X509Extension*, "Mono.Security.X509", "X509Extension");
// Writing MetadataGetter for method: Mono::Security::X509::X509Extension::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Mono::Security::X509::X509Extension::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Mono::Security::X509::X509Extension::Decode
// Il2CppName: Decode
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Mono::Security::X509::X509Extension::Encode
// Il2CppName: Encode
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Mono::Security::X509::X509Extension::get_Oid
// Il2CppName: get_Oid
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Mono::Security::X509::X509Extension::get_Critical
// Il2CppName: get_Critical
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Mono::Security::X509::X509Extension::get_Value
// Il2CppName: get_Value
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Mono::Security::X509::X509Extension::WriteLine
// Il2CppName: WriteLine
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Mono::Security::X509::X509Extension::Equals
// Il2CppName: Equals
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Mono::Security::X509::X509Extension::GetHashCode
// Il2CppName: GetHashCode
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Mono::Security::X509::X509Extension::ToString
// Il2CppName: ToString
// Cannot perform method pointer template specialization from operators!
