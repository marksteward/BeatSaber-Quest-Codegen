// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.X509.X509ExtensionBase
#include "Org/BouncyCastle/X509/X509ExtensionBase.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Asn1::X509
namespace Org::BouncyCastle::Asn1::X509 {
  // Forward declaring type: CrlEntry
  class CrlEntry;
  // Forward declaring type: X509Name
  class X509Name;
  // Forward declaring type: X509Extensions
  class X509Extensions;
}
// Forward declaring namespace: Org::BouncyCastle::Math
namespace Org::BouncyCastle::Math {
  // Forward declaring type: BigInteger
  class BigInteger;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: DateTime
  struct DateTime;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.X509
namespace Org::BouncyCastle::X509 {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.X509.X509CrlEntry
  class X509CrlEntry : public Org::BouncyCastle::X509::X509ExtensionBase {
    public:
    // private Org.BouncyCastle.Asn1.X509.CrlEntry c
    // Size: 0x8
    // Offset: 0x10
    Org::BouncyCastle::Asn1::X509::CrlEntry* c;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Asn1::X509::CrlEntry*) == 0x8);
    // private System.Boolean isIndirect
    // Size: 0x1
    // Offset: 0x18
    bool isIndirect;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: isIndirect and: previousCertificateIssuer
    char __padding1[0x7] = {};
    // private Org.BouncyCastle.Asn1.X509.X509Name previousCertificateIssuer
    // Size: 0x8
    // Offset: 0x20
    Org::BouncyCastle::Asn1::X509::X509Name* previousCertificateIssuer;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Asn1::X509::X509Name*) == 0x8);
    // private Org.BouncyCastle.Asn1.X509.X509Name certificateIssuer
    // Size: 0x8
    // Offset: 0x28
    Org::BouncyCastle::Asn1::X509::X509Name* certificateIssuer;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Asn1::X509::X509Name*) == 0x8);
    // private System.Boolean hashValueSet
    // Size: 0x1
    // Offset: 0x30
    bool hashValueSet;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: hashValueSet and: hashValue
    char __padding4[0x3] = {};
    // private System.Int32 hashValue
    // Size: 0x4
    // Offset: 0x34
    int hashValue;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: X509CrlEntry
    X509CrlEntry(Org::BouncyCastle::Asn1::X509::CrlEntry* c_ = {}, bool isIndirect_ = {}, Org::BouncyCastle::Asn1::X509::X509Name* previousCertificateIssuer_ = {}, Org::BouncyCastle::Asn1::X509::X509Name* certificateIssuer_ = {}, bool hashValueSet_ = {}, int hashValue_ = {}) noexcept : c{c_}, isIndirect{isIndirect_}, previousCertificateIssuer{previousCertificateIssuer_}, certificateIssuer{certificateIssuer_}, hashValueSet{hashValueSet_}, hashValue{hashValue_} {}
    // public System.Void .ctor(Org.BouncyCastle.Asn1.X509.CrlEntry c, System.Boolean isIndirect, Org.BouncyCastle.Asn1.X509.X509Name previousCertificateIssuer)
    // Offset: 0x1F8FE74
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static X509CrlEntry* New_ctor(Org::BouncyCastle::Asn1::X509::CrlEntry* c, bool isIndirect, Org::BouncyCastle::Asn1::X509::X509Name* previousCertificateIssuer) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::X509::X509CrlEntry::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<X509CrlEntry*, creationType>(c, isIndirect, previousCertificateIssuer)));
    }
    // private Org.BouncyCastle.Asn1.X509.X509Name loadCertificateIssuer()
    // Offset: 0x1F910F4
    Org::BouncyCastle::Asn1::X509::X509Name* loadCertificateIssuer();
    // public Org.BouncyCastle.Asn1.X509.X509Name GetCertificateIssuer()
    // Offset: 0x1F912B8
    Org::BouncyCastle::Asn1::X509::X509Name* GetCertificateIssuer();
    // public Org.BouncyCastle.Math.BigInteger get_SerialNumber()
    // Offset: 0x1F912DC
    Org::BouncyCastle::Math::BigInteger* get_SerialNumber();
    // public System.DateTime get_RevocationDate()
    // Offset: 0x1F91304
    System::DateTime get_RevocationDate();
    // protected override Org.BouncyCastle.Asn1.X509.X509Extensions GetX509Extensions()
    // Offset: 0x1F912C0
    // Implemented from: Org.BouncyCastle.X509.X509ExtensionBase
    // Base method: Org.BouncyCastle.Asn1.X509.X509Extensions X509ExtensionBase::GetX509Extensions()
    Org::BouncyCastle::Asn1::X509::X509Extensions* GetX509Extensions();
    // public override System.Boolean Equals(System.Object other)
    // Offset: 0x1F9132C
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object other)
    bool Equals(::Il2CppObject* other);
    // public override System.Int32 GetHashCode()
    // Offset: 0x1F91428
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
    // public override System.String ToString()
    // Offset: 0x1F91490
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
  }; // Org.BouncyCastle.X509.X509CrlEntry
  #pragma pack(pop)
  static check_size<sizeof(X509CrlEntry), 52 + sizeof(int)> __Org_BouncyCastle_X509_X509CrlEntrySizeCheck;
  static_assert(sizeof(X509CrlEntry) == 0x38);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::X509::X509CrlEntry*, "Org.BouncyCastle.X509", "X509CrlEntry");
// Writing MetadataGetter for method: Org::BouncyCastle::X509::X509CrlEntry::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::X509::X509CrlEntry::loadCertificateIssuer
// Il2CppName: loadCertificateIssuer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::X509::X509Name* (Org::BouncyCastle::X509::X509CrlEntry::*)()>(&Org::BouncyCastle::X509::X509CrlEntry::loadCertificateIssuer)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::X509::X509CrlEntry*), "loadCertificateIssuer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::X509::X509CrlEntry::GetCertificateIssuer
// Il2CppName: GetCertificateIssuer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::X509::X509Name* (Org::BouncyCastle::X509::X509CrlEntry::*)()>(&Org::BouncyCastle::X509::X509CrlEntry::GetCertificateIssuer)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::X509::X509CrlEntry*), "GetCertificateIssuer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::X509::X509CrlEntry::get_SerialNumber
// Il2CppName: get_SerialNumber
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::BigInteger* (Org::BouncyCastle::X509::X509CrlEntry::*)()>(&Org::BouncyCastle::X509::X509CrlEntry::get_SerialNumber)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::X509::X509CrlEntry*), "get_SerialNumber", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::X509::X509CrlEntry::get_RevocationDate
// Il2CppName: get_RevocationDate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::DateTime (Org::BouncyCastle::X509::X509CrlEntry::*)()>(&Org::BouncyCastle::X509::X509CrlEntry::get_RevocationDate)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::X509::X509CrlEntry*), "get_RevocationDate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::X509::X509CrlEntry::GetX509Extensions
// Il2CppName: GetX509Extensions
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::X509::X509Extensions* (Org::BouncyCastle::X509::X509CrlEntry::*)()>(&Org::BouncyCastle::X509::X509CrlEntry::GetX509Extensions)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::X509::X509CrlEntry*), "GetX509Extensions", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::X509::X509CrlEntry::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Org::BouncyCastle::X509::X509CrlEntry::*)(::Il2CppObject*)>(&Org::BouncyCastle::X509::X509CrlEntry::Equals)> {
  const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::X509::X509CrlEntry*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::X509::X509CrlEntry::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::X509::X509CrlEntry::*)()>(&Org::BouncyCastle::X509::X509CrlEntry::GetHashCode)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::X509::X509CrlEntry*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::X509::X509CrlEntry::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (Org::BouncyCastle::X509::X509CrlEntry::*)()>(&Org::BouncyCastle::X509::X509CrlEntry::ToString)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::X509::X509CrlEntry*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
