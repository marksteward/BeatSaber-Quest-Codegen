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
  // Forward declaring type: Asn1OctetString
  class Asn1OctetString;
  // Forward declaring type: DerInteger
  class DerInteger;
  // Forward declaring type: Asn1Sequence
  class Asn1Sequence;
  // Forward declaring type: Asn1Object
  class Asn1Object;
}
// Forward declaring namespace: Org::BouncyCastle::Asn1::X509
namespace Org::BouncyCastle::Asn1::X509 {
  // Forward declaring type: AlgorithmIdentifier
  class AlgorithmIdentifier;
}
// Forward declaring namespace: Org::BouncyCastle::Math
namespace Org::BouncyCastle::Math {
  // Forward declaring type: BigInteger
  class BigInteger;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Asn1.Pkcs
namespace Org::BouncyCastle::Asn1::Pkcs {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Asn1.Pkcs.Pbkdf2Params
  class Pbkdf2Params : public Org::BouncyCastle::Asn1::Asn1Encodable {
    public:
    // private readonly Org.BouncyCastle.Asn1.Asn1OctetString octStr
    // Size: 0x8
    // Offset: 0x10
    Org::BouncyCastle::Asn1::Asn1OctetString* octStr;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Asn1::Asn1OctetString*) == 0x8);
    // private readonly Org.BouncyCastle.Asn1.DerInteger iterationCount
    // Size: 0x8
    // Offset: 0x18
    Org::BouncyCastle::Asn1::DerInteger* iterationCount;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Asn1::DerInteger*) == 0x8);
    // private readonly Org.BouncyCastle.Asn1.DerInteger keyLength
    // Size: 0x8
    // Offset: 0x20
    Org::BouncyCastle::Asn1::DerInteger* keyLength;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Asn1::DerInteger*) == 0x8);
    // private readonly Org.BouncyCastle.Asn1.X509.AlgorithmIdentifier prf
    // Size: 0x8
    // Offset: 0x28
    Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* prf;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*) == 0x8);
    // Creating value type constructor for type: Pbkdf2Params
    Pbkdf2Params(Org::BouncyCastle::Asn1::Asn1OctetString* octStr_ = {}, Org::BouncyCastle::Asn1::DerInteger* iterationCount_ = {}, Org::BouncyCastle::Asn1::DerInteger* keyLength_ = {}, Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* prf_ = {}) noexcept : octStr{octStr_}, iterationCount{iterationCount_}, keyLength{keyLength_}, prf{prf_} {}
    // Get static field: static private Org.BouncyCastle.Asn1.X509.AlgorithmIdentifier algid_hmacWithSHA1
    static Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* _get_algid_hmacWithSHA1();
    // Set static field: static private Org.BouncyCastle.Asn1.X509.AlgorithmIdentifier algid_hmacWithSHA1
    static void _set_algid_hmacWithSHA1(Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* value);
    // static public Org.BouncyCastle.Asn1.Pkcs.Pbkdf2Params GetInstance(System.Object obj)
    // Offset: 0x1625854
    static Org::BouncyCastle::Asn1::Pkcs::Pbkdf2Params* GetInstance(::Il2CppObject* obj);
    // public System.Void .ctor(Org.BouncyCastle.Asn1.Asn1Sequence seq)
    // Offset: 0x1625ADC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Pbkdf2Params* New_ctor(Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Asn1::Pkcs::Pbkdf2Params::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Pbkdf2Params*, creationType>(seq)));
    }
    // public System.Byte[] GetSalt()
    // Offset: 0x1625D88
    ::Array<uint8_t>* GetSalt();
    // public Org.BouncyCastle.Math.BigInteger get_IterationCount()
    // Offset: 0x1625DA8
    Org::BouncyCastle::Math::BigInteger* get_IterationCount();
    // public Org.BouncyCastle.Math.BigInteger get_KeyLength()
    // Offset: 0x1625DC4
    Org::BouncyCastle::Math::BigInteger* get_KeyLength();
    // public System.Boolean get_IsDefaultPrf()
    // Offset: 0x1625DD8
    bool get_IsDefaultPrf();
    // public Org.BouncyCastle.Asn1.X509.AlgorithmIdentifier get_Prf()
    // Offset: 0x1625E64
    Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* get_Prf();
    // static private System.Void .cctor()
    // Offset: 0x162605C
    static void _cctor();
    // public override Org.BouncyCastle.Asn1.Asn1Object ToAsn1Object()
    // Offset: 0x1625ED8
    // Implemented from: Org.BouncyCastle.Asn1.Asn1Encodable
    // Base method: Org.BouncyCastle.Asn1.Asn1Object Asn1Encodable::ToAsn1Object()
    Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();
  }; // Org.BouncyCastle.Asn1.Pkcs.Pbkdf2Params
  #pragma pack(pop)
  static check_size<sizeof(Pbkdf2Params), 40 + sizeof(Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*)> __Org_BouncyCastle_Asn1_Pkcs_Pbkdf2ParamsSizeCheck;
  static_assert(sizeof(Pbkdf2Params) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::Pkcs::Pbkdf2Params*, "Org.BouncyCastle.Asn1.Pkcs", "Pbkdf2Params");
