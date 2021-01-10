// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
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
// Forward declaring namespace: Org::BouncyCastle::Asn1::X509
namespace Org::BouncyCastle::Asn1::X509 {
  // Forward declaring type: AlgorithmIdentifier
  class AlgorithmIdentifier;
}
// Forward declaring namespace: Org::BouncyCastle::Asn1
namespace Org::BouncyCastle::Asn1 {
  // Forward declaring type: DerInteger
  class DerInteger;
  // Forward declaring type: Asn1Sequence
  class Asn1Sequence;
  // Forward declaring type: Asn1Object
  class Asn1Object;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Asn1.Pkcs
namespace Org::BouncyCastle::Asn1::Pkcs {
  // Size: 0x30
  // Autogenerated type: Org.BouncyCastle.Asn1.Pkcs.RsassaPssParameters
  // [] Offset: FFFFFFFF
  class RsassaPssParameters : public Org::BouncyCastle::Asn1::Asn1Encodable {
    public:
    // private Org.BouncyCastle.Asn1.X509.AlgorithmIdentifier hashAlgorithm
    // Size: 0x8
    // Offset: 0x10
    Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* hashAlgorithm;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*) == 0x8);
    // private Org.BouncyCastle.Asn1.X509.AlgorithmIdentifier maskGenAlgorithm
    // Size: 0x8
    // Offset: 0x18
    Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* maskGenAlgorithm;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*) == 0x8);
    // private Org.BouncyCastle.Asn1.DerInteger saltLength
    // Size: 0x8
    // Offset: 0x20
    Org::BouncyCastle::Asn1::DerInteger* saltLength;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Asn1::DerInteger*) == 0x8);
    // private Org.BouncyCastle.Asn1.DerInteger trailerField
    // Size: 0x8
    // Offset: 0x28
    Org::BouncyCastle::Asn1::DerInteger* trailerField;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Asn1::DerInteger*) == 0x8);
    // Creating value type constructor for type: RsassaPssParameters
    RsassaPssParameters(Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* hashAlgorithm_ = {}, Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* maskGenAlgorithm_ = {}, Org::BouncyCastle::Asn1::DerInteger* saltLength_ = {}, Org::BouncyCastle::Asn1::DerInteger* trailerField_ = {}) noexcept : hashAlgorithm{hashAlgorithm_}, maskGenAlgorithm{maskGenAlgorithm_}, saltLength{saltLength_}, trailerField{trailerField_} {}
    // Get static field: static public readonly Org.BouncyCastle.Asn1.X509.AlgorithmIdentifier DefaultHashAlgorithm
    static Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* _get_DefaultHashAlgorithm();
    // Set static field: static public readonly Org.BouncyCastle.Asn1.X509.AlgorithmIdentifier DefaultHashAlgorithm
    static void _set_DefaultHashAlgorithm(Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* value);
    // Get static field: static public readonly Org.BouncyCastle.Asn1.X509.AlgorithmIdentifier DefaultMaskGenFunction
    static Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* _get_DefaultMaskGenFunction();
    // Set static field: static public readonly Org.BouncyCastle.Asn1.X509.AlgorithmIdentifier DefaultMaskGenFunction
    static void _set_DefaultMaskGenFunction(Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* value);
    // Get static field: static public readonly Org.BouncyCastle.Asn1.DerInteger DefaultSaltLength
    static Org::BouncyCastle::Asn1::DerInteger* _get_DefaultSaltLength();
    // Set static field: static public readonly Org.BouncyCastle.Asn1.DerInteger DefaultSaltLength
    static void _set_DefaultSaltLength(Org::BouncyCastle::Asn1::DerInteger* value);
    // Get static field: static public readonly Org.BouncyCastle.Asn1.DerInteger DefaultTrailerField
    static Org::BouncyCastle::Asn1::DerInteger* _get_DefaultTrailerField();
    // Set static field: static public readonly Org.BouncyCastle.Asn1.DerInteger DefaultTrailerField
    static void _set_DefaultTrailerField(Org::BouncyCastle::Asn1::DerInteger* value);
    // static public Org.BouncyCastle.Asn1.Pkcs.RsassaPssParameters GetInstance(System.Object obj)
    // Offset: 0x13FEFC8
    static Org::BouncyCastle::Asn1::Pkcs::RsassaPssParameters* GetInstance(::Il2CppObject* obj);
    // public System.Void .ctor(Org.BouncyCastle.Asn1.X509.AlgorithmIdentifier hashAlgorithm, Org.BouncyCastle.Asn1.X509.AlgorithmIdentifier maskGenAlgorithm, Org.BouncyCastle.Asn1.DerInteger saltLength, Org.BouncyCastle.Asn1.DerInteger trailerField)
    // Offset: 0x13FF394
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RsassaPssParameters* New_ctor(Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* hashAlgorithm, Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* maskGenAlgorithm, Org::BouncyCastle::Asn1::DerInteger* saltLength, Org::BouncyCastle::Asn1::DerInteger* trailerField) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Asn1::Pkcs::RsassaPssParameters::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RsassaPssParameters*, creationType>(hashAlgorithm, maskGenAlgorithm, saltLength, trailerField)));
    }
    // public System.Void .ctor(Org.BouncyCastle.Asn1.Asn1Sequence seq)
    // Offset: 0x13FF148
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RsassaPssParameters* New_ctor(Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Asn1::Pkcs::RsassaPssParameters::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RsassaPssParameters*, creationType>(seq)));
    }
    // public Org.BouncyCastle.Asn1.X509.AlgorithmIdentifier get_HashAlgorithm()
    // Offset: 0x13FF414
    Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* get_HashAlgorithm();
    // static private System.Void .cctor()
    // Offset: 0x13FF6A8
    static void _cctor();
    // public override Org.BouncyCastle.Asn1.Asn1Object ToAsn1Object()
    // Offset: 0x13FF41C
    // Implemented from: Org.BouncyCastle.Asn1.Asn1Encodable
    // Base method: Org.BouncyCastle.Asn1.Asn1Object Asn1Encodable::ToAsn1Object()
    Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();
  }; // Org.BouncyCastle.Asn1.Pkcs.RsassaPssParameters
  static check_size<sizeof(RsassaPssParameters), 40 + sizeof(Org::BouncyCastle::Asn1::DerInteger*)> __Org_BouncyCastle_Asn1_Pkcs_RsassaPssParametersSizeCheck;
  static_assert(sizeof(RsassaPssParameters) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::Pkcs::RsassaPssParameters*, "Org.BouncyCastle.Asn1.Pkcs", "RsassaPssParameters");
#pragma pack(pop)
