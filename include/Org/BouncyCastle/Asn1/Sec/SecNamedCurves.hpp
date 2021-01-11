// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Asn1::Sec
namespace Org::BouncyCastle::Asn1::Sec {
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
// Forward declaring namespace: Org::BouncyCastle::Math::EC::Endo
namespace Org::BouncyCastle::Math::EC::Endo {
  // Forward declaring type: GlvTypeBParameters
  class GlvTypeBParameters;
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
// Type namespace: Org.BouncyCastle.Asn1.Sec
namespace Org::BouncyCastle::Asn1::Sec {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Asn1.Sec.SecNamedCurves
  // [] Offset: FFFFFFFF
  class SecNamedCurves : public ::Il2CppObject {
    public:
    // Nested type: Org::BouncyCastle::Asn1::Sec::SecNamedCurves::Secp112r1Holder
    class Secp112r1Holder;
    // Nested type: Org::BouncyCastle::Asn1::Sec::SecNamedCurves::Secp112r2Holder
    class Secp112r2Holder;
    // Nested type: Org::BouncyCastle::Asn1::Sec::SecNamedCurves::Secp128r1Holder
    class Secp128r1Holder;
    // Nested type: Org::BouncyCastle::Asn1::Sec::SecNamedCurves::Secp128r2Holder
    class Secp128r2Holder;
    // Nested type: Org::BouncyCastle::Asn1::Sec::SecNamedCurves::Secp160k1Holder
    class Secp160k1Holder;
    // Nested type: Org::BouncyCastle::Asn1::Sec::SecNamedCurves::Secp160r1Holder
    class Secp160r1Holder;
    // Nested type: Org::BouncyCastle::Asn1::Sec::SecNamedCurves::Secp160r2Holder
    class Secp160r2Holder;
    // Nested type: Org::BouncyCastle::Asn1::Sec::SecNamedCurves::Secp192k1Holder
    class Secp192k1Holder;
    // Nested type: Org::BouncyCastle::Asn1::Sec::SecNamedCurves::Secp192r1Holder
    class Secp192r1Holder;
    // Nested type: Org::BouncyCastle::Asn1::Sec::SecNamedCurves::Secp224k1Holder
    class Secp224k1Holder;
    // Nested type: Org::BouncyCastle::Asn1::Sec::SecNamedCurves::Secp224r1Holder
    class Secp224r1Holder;
    // Nested type: Org::BouncyCastle::Asn1::Sec::SecNamedCurves::Secp256k1Holder
    class Secp256k1Holder;
    // Nested type: Org::BouncyCastle::Asn1::Sec::SecNamedCurves::Secp256r1Holder
    class Secp256r1Holder;
    // Nested type: Org::BouncyCastle::Asn1::Sec::SecNamedCurves::Secp384r1Holder
    class Secp384r1Holder;
    // Nested type: Org::BouncyCastle::Asn1::Sec::SecNamedCurves::Secp521r1Holder
    class Secp521r1Holder;
    // Nested type: Org::BouncyCastle::Asn1::Sec::SecNamedCurves::Sect113r1Holder
    class Sect113r1Holder;
    // Nested type: Org::BouncyCastle::Asn1::Sec::SecNamedCurves::Sect113r2Holder
    class Sect113r2Holder;
    // Nested type: Org::BouncyCastle::Asn1::Sec::SecNamedCurves::Sect131r1Holder
    class Sect131r1Holder;
    // Nested type: Org::BouncyCastle::Asn1::Sec::SecNamedCurves::Sect131r2Holder
    class Sect131r2Holder;
    // Nested type: Org::BouncyCastle::Asn1::Sec::SecNamedCurves::Sect163k1Holder
    class Sect163k1Holder;
    // Nested type: Org::BouncyCastle::Asn1::Sec::SecNamedCurves::Sect163r1Holder
    class Sect163r1Holder;
    // Nested type: Org::BouncyCastle::Asn1::Sec::SecNamedCurves::Sect163r2Holder
    class Sect163r2Holder;
    // Nested type: Org::BouncyCastle::Asn1::Sec::SecNamedCurves::Sect193r1Holder
    class Sect193r1Holder;
    // Nested type: Org::BouncyCastle::Asn1::Sec::SecNamedCurves::Sect193r2Holder
    class Sect193r2Holder;
    // Nested type: Org::BouncyCastle::Asn1::Sec::SecNamedCurves::Sect233k1Holder
    class Sect233k1Holder;
    // Nested type: Org::BouncyCastle::Asn1::Sec::SecNamedCurves::Sect233r1Holder
    class Sect233r1Holder;
    // Nested type: Org::BouncyCastle::Asn1::Sec::SecNamedCurves::Sect239k1Holder
    class Sect239k1Holder;
    // Nested type: Org::BouncyCastle::Asn1::Sec::SecNamedCurves::Sect283k1Holder
    class Sect283k1Holder;
    // Nested type: Org::BouncyCastle::Asn1::Sec::SecNamedCurves::Sect283r1Holder
    class Sect283r1Holder;
    // Nested type: Org::BouncyCastle::Asn1::Sec::SecNamedCurves::Sect409k1Holder
    class Sect409k1Holder;
    // Nested type: Org::BouncyCastle::Asn1::Sec::SecNamedCurves::Sect409r1Holder
    class Sect409r1Holder;
    // Nested type: Org::BouncyCastle::Asn1::Sec::SecNamedCurves::Sect571k1Holder
    class Sect571k1Holder;
    // Nested type: Org::BouncyCastle::Asn1::Sec::SecNamedCurves::Sect571r1Holder
    class Sect571r1Holder;
    // Creating value type constructor for type: SecNamedCurves
    SecNamedCurves() noexcept {}
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
    // Offset: 0x1400E74
    static Org::BouncyCastle::Asn1::X9::X9ECPoint* ConfigureBasepoint(Org::BouncyCastle::Math::EC::ECCurve* curve, ::Il2CppString* encoding);
    // static private Org.BouncyCastle.Math.EC.ECCurve ConfigureCurve(Org.BouncyCastle.Math.EC.ECCurve curve)
    // Offset: 0x1400F64
    static Org::BouncyCastle::Math::EC::ECCurve* ConfigureCurve(Org::BouncyCastle::Math::EC::ECCurve* curve);
    // static private Org.BouncyCastle.Math.EC.ECCurve ConfigureCurveGlv(Org.BouncyCastle.Math.EC.ECCurve c, Org.BouncyCastle.Math.EC.Endo.GlvTypeBParameters p)
    // Offset: 0x1400F68
    static Org::BouncyCastle::Math::EC::ECCurve* ConfigureCurveGlv(Org::BouncyCastle::Math::EC::ECCurve* c, Org::BouncyCastle::Math::EC::Endo::GlvTypeBParameters* p);
    // static private Org.BouncyCastle.Math.BigInteger FromHex(System.String hex)
    // Offset: 0x1401014
    static Org::BouncyCastle::Math::BigInteger* FromHex(::Il2CppString* hex);
    // static private System.Void DefineCurve(System.String name, Org.BouncyCastle.Asn1.DerObjectIdentifier oid, Org.BouncyCastle.Asn1.X9.X9ECParametersHolder holder)
    // Offset: 0x14010B0
    static void DefineCurve(::Il2CppString* name, Org::BouncyCastle::Asn1::DerObjectIdentifier* oid, Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* holder);
    // static private System.Void .cctor()
    // Offset: 0x14012E0
    static void _cctor();
    // static public Org.BouncyCastle.Asn1.X9.X9ECParameters GetByName(System.String name)
    // Offset: 0x1401D98
    static Org::BouncyCastle::Asn1::X9::X9ECParameters* GetByName(::Il2CppString* name);
    // static public Org.BouncyCastle.Asn1.X9.X9ECParameters GetByOid(Org.BouncyCastle.Asn1.DerObjectIdentifier oid)
    // Offset: 0x13F6FB0
    static Org::BouncyCastle::Asn1::X9::X9ECParameters* GetByOid(Org::BouncyCastle::Asn1::DerObjectIdentifier* oid);
    // static public Org.BouncyCastle.Asn1.DerObjectIdentifier GetOid(System.String name)
    // Offset: 0x1401E30
    static Org::BouncyCastle::Asn1::DerObjectIdentifier* GetOid(::Il2CppString* name);
  }; // Org.BouncyCastle.Asn1.Sec.SecNamedCurves
}
#pragma pack(pop)
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::Sec::SecNamedCurves*, "Org.BouncyCastle.Asn1.Sec", "SecNamedCurves");
