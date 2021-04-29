// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Asn1.Asn1Encodable
#include "Org/BouncyCastle/Asn1/Asn1Encodable.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Math::EC
namespace Org::BouncyCastle::Math::EC {
  // Forward declaring type: ECCurve
  class ECCurve;
}
// Forward declaring namespace: Org::BouncyCastle::Asn1
namespace Org::BouncyCastle::Asn1 {
  // Forward declaring type: DerObjectIdentifier
  class DerObjectIdentifier;
  // Forward declaring type: Asn1Sequence
  class Asn1Sequence;
  // Forward declaring type: Asn1Object
  class Asn1Object;
}
// Forward declaring namespace: Org::BouncyCastle::Asn1::X9
namespace Org::BouncyCastle::Asn1::X9 {
  // Forward declaring type: X9FieldID
  class X9FieldID;
}
// Forward declaring namespace: Org::BouncyCastle::Math
namespace Org::BouncyCastle::Math {
  // Forward declaring type: BigInteger
  class BigInteger;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Asn1.X9
namespace Org::BouncyCastle::Asn1::X9 {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Asn1.X9.X9Curve
  class X9Curve : public Org::BouncyCastle::Asn1::Asn1Encodable {
    public:
    // private readonly Org.BouncyCastle.Math.EC.ECCurve curve
    // Size: 0x8
    // Offset: 0x10
    Org::BouncyCastle::Math::EC::ECCurve* curve;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Math::EC::ECCurve*) == 0x8);
    // private readonly System.Byte[] seed
    // Size: 0x8
    // Offset: 0x18
    ::Array<uint8_t>* seed;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // private readonly Org.BouncyCastle.Asn1.DerObjectIdentifier fieldIdentifier
    // Size: 0x8
    // Offset: 0x20
    Org::BouncyCastle::Asn1::DerObjectIdentifier* fieldIdentifier;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Asn1::DerObjectIdentifier*) == 0x8);
    // Creating value type constructor for type: X9Curve
    X9Curve(Org::BouncyCastle::Math::EC::ECCurve* curve_ = {}, ::Array<uint8_t>* seed_ = {}, Org::BouncyCastle::Asn1::DerObjectIdentifier* fieldIdentifier_ = {}) noexcept : curve{curve_}, seed{seed_}, fieldIdentifier{fieldIdentifier_} {}
    // public System.Void .ctor(Org.BouncyCastle.Math.EC.ECCurve curve, System.Byte[] seed)
    // Offset: 0x186510C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static X9Curve* New_ctor(Org::BouncyCastle::Math::EC::ECCurve* curve, ::Array<uint8_t>* seed) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Asn1::X9::X9Curve::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<X9Curve*, creationType>(curve, seed)));
    }
    // public System.Void .ctor(Org.BouncyCastle.Asn1.X9.X9FieldID fieldID, Org.BouncyCastle.Math.BigInteger order, Org.BouncyCastle.Math.BigInteger cofactor, Org.BouncyCastle.Asn1.Asn1Sequence seq)
    // Offset: 0x186528C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static X9Curve* New_ctor(Org::BouncyCastle::Asn1::X9::X9FieldID* fieldID, Org::BouncyCastle::Math::BigInteger* order, Org::BouncyCastle::Math::BigInteger* cofactor, Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Asn1::X9::X9Curve::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<X9Curve*, creationType>(fieldID, order, cofactor, seq)));
    }
    // public Org.BouncyCastle.Math.EC.ECCurve get_Curve()
    // Offset: 0x1865998
    Org::BouncyCastle::Math::EC::ECCurve* get_Curve();
    // public System.Byte[] GetSeed()
    // Offset: 0x18659A0
    ::Array<uint8_t>* GetSeed();
    // public override Org.BouncyCastle.Asn1.Asn1Object ToAsn1Object()
    // Offset: 0x1865A0C
    // Implemented from: Org.BouncyCastle.Asn1.Asn1Encodable
    // Base method: Org.BouncyCastle.Asn1.Asn1Object Asn1Encodable::ToAsn1Object()
    Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();
  }; // Org.BouncyCastle.Asn1.X9.X9Curve
  #pragma pack(pop)
  static check_size<sizeof(X9Curve), 32 + sizeof(Org::BouncyCastle::Asn1::DerObjectIdentifier*)> __Org_BouncyCastle_Asn1_X9_X9CurveSizeCheck;
  static_assert(sizeof(X9Curve) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::X9::X9Curve*, "Org.BouncyCastle.Asn1.X9", "X9Curve");
