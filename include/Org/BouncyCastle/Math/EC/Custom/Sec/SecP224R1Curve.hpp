// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Math.EC.AbstractFpCurve
#include "Org/BouncyCastle/Math/EC/AbstractFpCurve.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Math::EC::Custom::Sec
namespace Org::BouncyCastle::Math::EC::Custom::Sec {
  // Forward declaring type: SecP224R1Point
  class SecP224R1Point;
}
// Forward declaring namespace: Org::BouncyCastle::Math
namespace Org::BouncyCastle::Math {
  // Forward declaring type: BigInteger
  class BigInteger;
}
// Forward declaring namespace: Org::BouncyCastle::Math::EC
namespace Org::BouncyCastle::Math::EC {
  // Forward declaring type: ECFieldElement
  class ECFieldElement;
  // Skipping declaration: ECCurve because it is already included!
  // Forward declaring type: ECPoint
  class ECPoint;
  // Forward declaring type: ECLookupTable
  class ECLookupTable;
}
// Forward declaring namespace: Org::BouncyCastle::Security
namespace Org::BouncyCastle::Security {
  // Forward declaring type: SecureRandom
  class SecureRandom;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Math.EC.Custom.Sec
namespace Org::BouncyCastle::Math::EC::Custom::Sec {
  // Size: 0x58
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Math.EC.Custom.Sec.SecP224R1Curve
  // [] Offset: FFFFFFFF
  class SecP224R1Curve : public Org::BouncyCastle::Math::EC::AbstractFpCurve {
    public:
    // Nested type: Org::BouncyCastle::Math::EC::Custom::Sec::SecP224R1Curve::SecP224R1LookupTable
    class SecP224R1LookupTable;
    // protected readonly Org.BouncyCastle.Math.EC.Custom.Sec.SecP224R1Point m_infinity
    // Size: 0x8
    // Offset: 0x50
    Org::BouncyCastle::Math::EC::Custom::Sec::SecP224R1Point* m_infinity;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Math::EC::Custom::Sec::SecP224R1Point*) == 0x8);
    // Creating value type constructor for type: SecP224R1Curve
    SecP224R1Curve(Org::BouncyCastle::Math::EC::Custom::Sec::SecP224R1Point* m_infinity_ = {}) noexcept : m_infinity{m_infinity_} {}
    // Creating conversion operator: operator Org::BouncyCastle::Math::EC::Custom::Sec::SecP224R1Point*
    constexpr operator Org::BouncyCastle::Math::EC::Custom::Sec::SecP224R1Point*() const noexcept {
      return m_infinity;
    }
    // Get static field: static public readonly Org.BouncyCastle.Math.BigInteger q
    static Org::BouncyCastle::Math::BigInteger* _get_q();
    // Set static field: static public readonly Org.BouncyCastle.Math.BigInteger q
    static void _set_q(Org::BouncyCastle::Math::BigInteger* value);
    // Get static field: static private readonly Org.BouncyCastle.Math.EC.ECFieldElement[] SECP224R1_AFFINE_ZS
    static ::Array<Org::BouncyCastle::Math::EC::ECFieldElement*>* _get_SECP224R1_AFFINE_ZS();
    // Set static field: static private readonly Org.BouncyCastle.Math.EC.ECFieldElement[] SECP224R1_AFFINE_ZS
    static void _set_SECP224R1_AFFINE_ZS(::Array<Org::BouncyCastle::Math::EC::ECFieldElement*>* value);
    // static private System.Void .cctor()
    // Offset: 0x17A217C
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x17A178C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SecP224R1Curve* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Math::EC::Custom::Sec::SecP224R1Curve::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SecP224R1Curve*, creationType>()));
    }
    // protected override Org.BouncyCastle.Math.EC.ECCurve CloneCurve()
    // Offset: 0x17A19BC
    // Implemented from: Org.BouncyCastle.Math.EC.ECCurve
    // Base method: Org.BouncyCastle.Math.EC.ECCurve ECCurve::CloneCurve()
    Org::BouncyCastle::Math::EC::ECCurve* CloneCurve();
    // public override System.Boolean SupportsCoordinateSystem(System.Int32 coord)
    // Offset: 0x17A1A14
    // Implemented from: Org.BouncyCastle.Math.EC.ECCurve
    // Base method: System.Boolean ECCurve::SupportsCoordinateSystem(System.Int32 coord)
    bool SupportsCoordinateSystem(int coord);
    // public override Org.BouncyCastle.Math.EC.ECPoint get_Infinity()
    // Offset: 0x17A1A20
    // Implemented from: Org.BouncyCastle.Math.EC.ECCurve
    // Base method: Org.BouncyCastle.Math.EC.ECPoint ECCurve::get_Infinity()
    Org::BouncyCastle::Math::EC::ECPoint* get_Infinity();
    // public override System.Int32 get_FieldSize()
    // Offset: 0x17A1A28
    // Implemented from: Org.BouncyCastle.Math.EC.ECCurve
    // Base method: System.Int32 ECCurve::get_FieldSize()
    int get_FieldSize();
    // public override Org.BouncyCastle.Math.EC.ECFieldElement FromBigInteger(Org.BouncyCastle.Math.BigInteger x)
    // Offset: 0x17A1A9C
    // Implemented from: Org.BouncyCastle.Math.EC.ECCurve
    // Base method: Org.BouncyCastle.Math.EC.ECFieldElement ECCurve::FromBigInteger(Org.BouncyCastle.Math.BigInteger x)
    Org::BouncyCastle::Math::EC::ECFieldElement* FromBigInteger(Org::BouncyCastle::Math::BigInteger* x);
    // protected internal override Org.BouncyCastle.Math.EC.ECPoint CreateRawPoint(Org.BouncyCastle.Math.EC.ECFieldElement x, Org.BouncyCastle.Math.EC.ECFieldElement y, System.Boolean withCompression)
    // Offset: 0x17A1C18
    // Implemented from: Org.BouncyCastle.Math.EC.ECCurve
    // Base method: Org.BouncyCastle.Math.EC.ECPoint ECCurve::CreateRawPoint(Org.BouncyCastle.Math.EC.ECFieldElement x, Org.BouncyCastle.Math.EC.ECFieldElement y, System.Boolean withCompression)
    Org::BouncyCastle::Math::EC::ECPoint* CreateRawPoint(Org::BouncyCastle::Math::EC::ECFieldElement* x, Org::BouncyCastle::Math::EC::ECFieldElement* y, bool withCompression);
    // protected internal override Org.BouncyCastle.Math.EC.ECPoint CreateRawPoint(Org.BouncyCastle.Math.EC.ECFieldElement x, Org.BouncyCastle.Math.EC.ECFieldElement y, Org.BouncyCastle.Math.EC.ECFieldElement[] zs, System.Boolean withCompression)
    // Offset: 0x17A1D70
    // Implemented from: Org.BouncyCastle.Math.EC.ECCurve
    // Base method: Org.BouncyCastle.Math.EC.ECPoint ECCurve::CreateRawPoint(Org.BouncyCastle.Math.EC.ECFieldElement x, Org.BouncyCastle.Math.EC.ECFieldElement y, Org.BouncyCastle.Math.EC.ECFieldElement[] zs, System.Boolean withCompression)
    Org::BouncyCastle::Math::EC::ECPoint* CreateRawPoint(Org::BouncyCastle::Math::EC::ECFieldElement* x, Org::BouncyCastle::Math::EC::ECFieldElement* y, ::Array<Org::BouncyCastle::Math::EC::ECFieldElement*>* zs, bool withCompression);
    // public override Org.BouncyCastle.Math.EC.ECLookupTable CreateCacheSafeLookupTable(Org.BouncyCastle.Math.EC.ECPoint[] points, System.Int32 off, System.Int32 len)
    // Offset: 0x17A1E10
    // Implemented from: Org.BouncyCastle.Math.EC.ECCurve
    // Base method: Org.BouncyCastle.Math.EC.ECLookupTable ECCurve::CreateCacheSafeLookupTable(Org.BouncyCastle.Math.EC.ECPoint[] points, System.Int32 off, System.Int32 len)
    Org::BouncyCastle::Math::EC::ECLookupTable* CreateCacheSafeLookupTable(::Array<Org::BouncyCastle::Math::EC::ECPoint*>* points, int off, int len);
    // public override Org.BouncyCastle.Math.EC.ECFieldElement RandomFieldElementMult(Org.BouncyCastle.Security.SecureRandom r)
    // Offset: 0x17A2018
    // Implemented from: Org.BouncyCastle.Math.EC.AbstractFpCurve
    // Base method: Org.BouncyCastle.Math.EC.ECFieldElement AbstractFpCurve::RandomFieldElementMult(Org.BouncyCastle.Security.SecureRandom r)
    Org::BouncyCastle::Math::EC::ECFieldElement* RandomFieldElementMult(Org::BouncyCastle::Security::SecureRandom* r);
  }; // Org.BouncyCastle.Math.EC.Custom.Sec.SecP224R1Curve
  static check_size<sizeof(SecP224R1Curve), 80 + sizeof(Org::BouncyCastle::Math::EC::Custom::Sec::SecP224R1Point*)> __Org_BouncyCastle_Math_EC_Custom_Sec_SecP224R1CurveSizeCheck;
  static_assert(sizeof(SecP224R1Curve) == 0x58);
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Math::EC::Custom::Sec::SecP224R1Curve*, "Org.BouncyCastle.Math.EC.Custom.Sec", "SecP224R1Curve");
