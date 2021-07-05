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
// Forward declaring namespace: Org::BouncyCastle::Asn1::X509
namespace Org::BouncyCastle::Asn1::X509 {
  // Forward declaring type: X509Extensions
  class X509Extensions;
}
// Forward declaring namespace: Org::BouncyCastle::Asn1
namespace Org::BouncyCastle::Asn1 {
  // Forward declaring type: Asn1OctetString
  class Asn1OctetString;
  // Forward declaring type: DerObjectIdentifier
  class DerObjectIdentifier;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.X509
namespace Org::BouncyCastle::X509 {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.X509.X509ExtensionBase
  class X509ExtensionBase : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: X509ExtensionBase
    X509ExtensionBase() noexcept {}
    // protected Org.BouncyCastle.Asn1.X509.X509Extensions GetX509Extensions()
    // Offset: 0xFFFFFFFF
    Org::BouncyCastle::Asn1::X509::X509Extensions* GetX509Extensions();
    // public Org.BouncyCastle.Asn1.Asn1OctetString GetExtensionValue(Org.BouncyCastle.Asn1.DerObjectIdentifier oid)
    // Offset: 0x1F923B0
    Org::BouncyCastle::Asn1::Asn1OctetString* GetExtensionValue(Org::BouncyCastle::Asn1::DerObjectIdentifier* oid);
    // protected System.Void .ctor()
    // Offset: 0x1F8DBF0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static X509ExtensionBase* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::X509::X509ExtensionBase::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<X509ExtensionBase*, creationType>()));
    }
  }; // Org.BouncyCastle.X509.X509ExtensionBase
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::X509::X509ExtensionBase*, "Org.BouncyCastle.X509", "X509ExtensionBase");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::X509::X509ExtensionBase::GetX509Extensions
// Il2CppName: GetX509Extensions
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::X509::X509Extensions* (Org::BouncyCastle::X509::X509ExtensionBase::*)()>(&Org::BouncyCastle::X509::X509ExtensionBase::GetX509Extensions)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::X509::X509ExtensionBase*), "GetX509Extensions", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::X509::X509ExtensionBase::GetExtensionValue
// Il2CppName: GetExtensionValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::Asn1OctetString* (Org::BouncyCastle::X509::X509ExtensionBase::*)(Org::BouncyCastle::Asn1::DerObjectIdentifier*)>(&Org::BouncyCastle::X509::X509ExtensionBase::GetExtensionValue)> {
  static const MethodInfo* get() {
    static auto* oid = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Asn1", "DerObjectIdentifier")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::X509::X509ExtensionBase*), "GetExtensionValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{oid});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::X509::X509ExtensionBase::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
