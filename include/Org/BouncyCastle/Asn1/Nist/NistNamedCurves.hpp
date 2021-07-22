// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IDictionary
  class IDictionary;
}
// Forward declaring namespace: Org::BouncyCastle::Asn1
namespace Org::BouncyCastle::Asn1 {
  // Forward declaring type: DerObjectIdentifier
  class DerObjectIdentifier;
}
// Forward declaring namespace: Org::BouncyCastle::Asn1::X9
namespace Org::BouncyCastle::Asn1::X9 {
  // Forward declaring type: X9ECParameters
  class X9ECParameters;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Asn1.Nist
namespace Org::BouncyCastle::Asn1::Nist {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Asn1.Nist.NistNamedCurves
  // [TokenAttribute] Offset: FFFFFFFF
  class NistNamedCurves : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: NistNamedCurves
    NistNamedCurves() noexcept {}
    // Get static field: static private readonly System.Collections.IDictionary objIds
    static System::Collections::IDictionary* _get_objIds();
    // Set static field: static private readonly System.Collections.IDictionary objIds
    static void _set_objIds(System::Collections::IDictionary* value);
    // Get static field: static private readonly System.Collections.IDictionary names
    static System::Collections::IDictionary* _get_names();
    // Set static field: static private readonly System.Collections.IDictionary names
    static void _set_names(System::Collections::IDictionary* value);
    // static private System.Void .cctor()
    // Offset: 0x175EB74
    static void _cctor();
    // static private System.Void DefineCurveAlias(System.String name, Org.BouncyCastle.Asn1.DerObjectIdentifier oid)
    // Offset: 0x175E9CC
    static void DefineCurveAlias(::Il2CppString* name, Org::BouncyCastle::Asn1::DerObjectIdentifier* oid);
    // static public Org.BouncyCastle.Asn1.X9.X9ECParameters GetByName(System.String name)
    // Offset: 0x175EDC0
    static Org::BouncyCastle::Asn1::X9::X9ECParameters* GetByName(::Il2CppString* name);
    // static public Org.BouncyCastle.Asn1.X9.X9ECParameters GetByOid(Org.BouncyCastle.Asn1.DerObjectIdentifier oid)
    // Offset: 0x175EFA8
    static Org::BouncyCastle::Asn1::X9::X9ECParameters* GetByOid(Org::BouncyCastle::Asn1::DerObjectIdentifier* oid);
    // static public Org.BouncyCastle.Asn1.DerObjectIdentifier GetOid(System.String name)
    // Offset: 0x175EE58
    static Org::BouncyCastle::Asn1::DerObjectIdentifier* GetOid(::Il2CppString* name);
  }; // Org.BouncyCastle.Asn1.Nist.NistNamedCurves
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::Nist::NistNamedCurves*, "Org.BouncyCastle.Asn1.Nist", "NistNamedCurves");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::Nist::NistNamedCurves::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Org::BouncyCastle::Asn1::Nist::NistNamedCurves::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::Nist::NistNamedCurves*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::Nist::NistNamedCurves::DefineCurveAlias
// Il2CppName: DefineCurveAlias
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Il2CppString*, Org::BouncyCastle::Asn1::DerObjectIdentifier*)>(&Org::BouncyCastle::Asn1::Nist::NistNamedCurves::DefineCurveAlias)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* oid = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Asn1", "DerObjectIdentifier")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::Nist::NistNamedCurves*), "DefineCurveAlias", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name, oid});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::Nist::NistNamedCurves::GetByName
// Il2CppName: GetByName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::X9::X9ECParameters* (*)(::Il2CppString*)>(&Org::BouncyCastle::Asn1::Nist::NistNamedCurves::GetByName)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::Nist::NistNamedCurves*), "GetByName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::Nist::NistNamedCurves::GetByOid
// Il2CppName: GetByOid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::X9::X9ECParameters* (*)(Org::BouncyCastle::Asn1::DerObjectIdentifier*)>(&Org::BouncyCastle::Asn1::Nist::NistNamedCurves::GetByOid)> {
  static const MethodInfo* get() {
    static auto* oid = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Asn1", "DerObjectIdentifier")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::Nist::NistNamedCurves*), "GetByOid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{oid});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::Nist::NistNamedCurves::GetOid
// Il2CppName: GetOid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::DerObjectIdentifier* (*)(::Il2CppString*)>(&Org::BouncyCastle::Asn1::Nist::NistNamedCurves::GetOid)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::Nist::NistNamedCurves*), "GetOid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name});
  }
};
