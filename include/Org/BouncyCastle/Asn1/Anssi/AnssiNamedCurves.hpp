// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Asn1::Anssi
namespace Org::BouncyCastle::Asn1::Anssi {
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IDictionary
  class IDictionary;
}
// Forward declaring namespace: Org::BouncyCastle::Asn1::X9
namespace Org::BouncyCastle::Asn1::X9 {
  // Forward declaring type: X9ECPoint
  class X9ECPoint;
  // Forward declaring type: X9ECParametersHolder
  class X9ECParametersHolder;
  // Forward declaring type: X9ECParameters
  class X9ECParameters;
}
// Forward declaring namespace: Org::BouncyCastle::Math::EC
namespace Org::BouncyCastle::Math::EC {
  // Forward declaring type: ECCurve
  class ECCurve;
}
// Forward declaring namespace: Org::BouncyCastle::Math
namespace Org::BouncyCastle::Math {
  // Forward declaring type: BigInteger
  class BigInteger;
}
// Forward declaring namespace: Org::BouncyCastle::Asn1
namespace Org::BouncyCastle::Asn1 {
  // Forward declaring type: DerObjectIdentifier
  class DerObjectIdentifier;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Asn1.Anssi
namespace Org::BouncyCastle::Asn1::Anssi {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Asn1.Anssi.AnssiNamedCurves
  class AnssiNamedCurves : public ::Il2CppObject {
    public:
    // Nested type: Org::BouncyCastle::Asn1::Anssi::AnssiNamedCurves::Frp256v1Holder
    class Frp256v1Holder;
    // Creating value type constructor for type: AnssiNamedCurves
    AnssiNamedCurves() noexcept {}
    // Get static field: static private readonly System.Collections.IDictionary objIds
    static System::Collections::IDictionary* _get_objIds();
    // Set static field: static private readonly System.Collections.IDictionary objIds
    static void _set_objIds(System::Collections::IDictionary* value);
    // Get static field: static private readonly System.Collections.IDictionary curves
    static System::Collections::IDictionary* _get_curves();
    // Set static field: static private readonly System.Collections.IDictionary curves
    static void _set_curves(System::Collections::IDictionary* value);
    // Get static field: static private readonly System.Collections.IDictionary names
    static System::Collections::IDictionary* _get_names();
    // Set static field: static private readonly System.Collections.IDictionary names
    static void _set_names(System::Collections::IDictionary* value);
    // static private Org.BouncyCastle.Asn1.X9.X9ECPoint ConfigureBasepoint(Org.BouncyCastle.Math.EC.ECCurve curve, System.String encoding)
    // Offset: 0x16EE9FC
    static Org::BouncyCastle::Asn1::X9::X9ECPoint* ConfigureBasepoint(Org::BouncyCastle::Math::EC::ECCurve* curve, ::Il2CppString* encoding);
    // static private Org.BouncyCastle.Math.EC.ECCurve ConfigureCurve(Org.BouncyCastle.Math.EC.ECCurve curve)
    // Offset: 0x16EEAEC
    static Org::BouncyCastle::Math::EC::ECCurve* ConfigureCurve(Org::BouncyCastle::Math::EC::ECCurve* curve);
    // static private Org.BouncyCastle.Math.BigInteger FromHex(System.String hex)
    // Offset: 0x16EEAF0
    static Org::BouncyCastle::Math::BigInteger* FromHex(::Il2CppString* hex);
    // static private System.Void DefineCurve(System.String name, Org.BouncyCastle.Asn1.DerObjectIdentifier oid, Org.BouncyCastle.Asn1.X9.X9ECParametersHolder holder)
    // Offset: 0x16EEB8C
    static void DefineCurve(::Il2CppString* name, Org::BouncyCastle::Asn1::DerObjectIdentifier* oid, Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* holder);
    // static private System.Void .cctor()
    // Offset: 0x16EEDBC
    static void _cctor();
    // static public Org.BouncyCastle.Asn1.X9.X9ECParameters GetByName(System.String name)
    // Offset: 0x16EEEC8
    static Org::BouncyCastle::Asn1::X9::X9ECParameters* GetByName(::Il2CppString* name);
    // static public Org.BouncyCastle.Asn1.X9.X9ECParameters GetByOid(Org.BouncyCastle.Asn1.DerObjectIdentifier oid)
    // Offset: 0x16EF0B0
    static Org::BouncyCastle::Asn1::X9::X9ECParameters* GetByOid(Org::BouncyCastle::Asn1::DerObjectIdentifier* oid);
    // static public Org.BouncyCastle.Asn1.DerObjectIdentifier GetOid(System.String name)
    // Offset: 0x16EEF60
    static Org::BouncyCastle::Asn1::DerObjectIdentifier* GetOid(::Il2CppString* name);
  }; // Org.BouncyCastle.Asn1.Anssi.AnssiNamedCurves
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::Anssi::AnssiNamedCurves*, "Org.BouncyCastle.Asn1.Anssi", "AnssiNamedCurves");
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::Anssi::AnssiNamedCurves::ConfigureBasepoint
// Il2CppName: ConfigureBasepoint
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::Anssi::AnssiNamedCurves::ConfigureCurve
// Il2CppName: ConfigureCurve
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::Anssi::AnssiNamedCurves::FromHex
// Il2CppName: FromHex
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::Anssi::AnssiNamedCurves::DefineCurve
// Il2CppName: DefineCurve
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::Anssi::AnssiNamedCurves::_cctor
// Il2CppName: .cctor
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::Anssi::AnssiNamedCurves::GetByName
// Il2CppName: GetByName
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::Anssi::AnssiNamedCurves::GetByOid
// Il2CppName: GetByOid
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::Anssi::AnssiNamedCurves::GetOid
// Il2CppName: GetOid
// Cannot perform method pointer template specialization from operators!
