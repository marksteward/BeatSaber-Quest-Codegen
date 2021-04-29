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
// Forward declaring namespace: Org::BouncyCastle::Asn1
namespace Org::BouncyCastle::Asn1 {
  // Forward declaring type: DerInteger
  class DerInteger;
  // Forward declaring type: Asn1Object
  class Asn1Object;
}
// Forward declaring namespace: Org::BouncyCastle::Math
namespace Org::BouncyCastle::Math {
  // Forward declaring type: BigInteger
  class BigInteger;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Asn1.CryptoPro
namespace Org::BouncyCastle::Asn1::CryptoPro {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Asn1.CryptoPro.Gost3410ParamSetParameters
  class Gost3410ParamSetParameters : public Org::BouncyCastle::Asn1::Asn1Encodable {
    public:
    // private readonly System.Int32 keySize
    // Size: 0x4
    // Offset: 0x10
    int keySize;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: keySize and: p
    char __padding0[0x4] = {};
    // private readonly Org.BouncyCastle.Asn1.DerInteger p
    // Size: 0x8
    // Offset: 0x18
    Org::BouncyCastle::Asn1::DerInteger* p;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Asn1::DerInteger*) == 0x8);
    // private readonly Org.BouncyCastle.Asn1.DerInteger q
    // Size: 0x8
    // Offset: 0x20
    Org::BouncyCastle::Asn1::DerInteger* q;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Asn1::DerInteger*) == 0x8);
    // private readonly Org.BouncyCastle.Asn1.DerInteger a
    // Size: 0x8
    // Offset: 0x28
    Org::BouncyCastle::Asn1::DerInteger* a;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Asn1::DerInteger*) == 0x8);
    // Creating value type constructor for type: Gost3410ParamSetParameters
    Gost3410ParamSetParameters(int keySize_ = {}, Org::BouncyCastle::Asn1::DerInteger* p_ = {}, Org::BouncyCastle::Asn1::DerInteger* q_ = {}, Org::BouncyCastle::Asn1::DerInteger* a_ = {}) noexcept : keySize{keySize_}, p{p_}, q{q_}, a{a_} {}
    // public System.Void .ctor(System.Int32 keySize, Org.BouncyCastle.Math.BigInteger p, Org.BouncyCastle.Math.BigInteger q, Org.BouncyCastle.Math.BigInteger a)
    // Offset: 0x156DCFC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Gost3410ParamSetParameters* New_ctor(int keySize, Org::BouncyCastle::Math::BigInteger* p, Org::BouncyCastle::Math::BigInteger* q, Org::BouncyCastle::Math::BigInteger* a) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Asn1::CryptoPro::Gost3410ParamSetParameters::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Gost3410ParamSetParameters*, creationType>(keySize, p, q, a)));
    }
    // public Org.BouncyCastle.Math.BigInteger get_P()
    // Offset: 0x156DF84
    Org::BouncyCastle::Math::BigInteger* get_P();
    // public Org.BouncyCastle.Math.BigInteger get_Q()
    // Offset: 0x156E008
    Org::BouncyCastle::Math::BigInteger* get_Q();
    // public Org.BouncyCastle.Math.BigInteger get_A()
    // Offset: 0x156E020
    Org::BouncyCastle::Math::BigInteger* get_A();
    // public override Org.BouncyCastle.Asn1.Asn1Object ToAsn1Object()
    // Offset: 0x156E038
    // Implemented from: Org.BouncyCastle.Asn1.Asn1Encodable
    // Base method: Org.BouncyCastle.Asn1.Asn1Object Asn1Encodable::ToAsn1Object()
    Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();
  }; // Org.BouncyCastle.Asn1.CryptoPro.Gost3410ParamSetParameters
  #pragma pack(pop)
  static check_size<sizeof(Gost3410ParamSetParameters), 40 + sizeof(Org::BouncyCastle::Asn1::DerInteger*)> __Org_BouncyCastle_Asn1_CryptoPro_Gost3410ParamSetParametersSizeCheck;
  static_assert(sizeof(Gost3410ParamSetParameters) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::CryptoPro::Gost3410ParamSetParameters*, "Org.BouncyCastle.Asn1.CryptoPro", "Gost3410ParamSetParameters");
