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
// Forward declaring namespace: Org::BouncyCastle::Asn1
namespace Org::BouncyCastle::Asn1 {
  // Forward declaring type: DerInteger
  class DerInteger;
  // Forward declaring type: Asn1Sequence
  class Asn1Sequence;
  // Forward declaring type: Asn1Object
  class Asn1Object;
}
// Forward declaring namespace: Org::BouncyCastle::Asn1::X9
namespace Org::BouncyCastle::Asn1::X9 {
  // Forward declaring type: DHValidationParms
  class DHValidationParms;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Asn1.X9
namespace Org::BouncyCastle::Asn1::X9 {
  // Size: 0x38
  // Autogenerated type: Org.BouncyCastle.Asn1.X9.DHDomainParameters
  // [] Offset: FFFFFFFF
  class DHDomainParameters : public Org::BouncyCastle::Asn1::Asn1Encodable {
    public:
    // private readonly Org.BouncyCastle.Asn1.DerInteger p
    // Size: 0x8
    // Offset: 0x10
    Org::BouncyCastle::Asn1::DerInteger* p;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Asn1::DerInteger*) == 0x8);
    // private readonly Org.BouncyCastle.Asn1.DerInteger g
    // Size: 0x8
    // Offset: 0x18
    Org::BouncyCastle::Asn1::DerInteger* g;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Asn1::DerInteger*) == 0x8);
    // private readonly Org.BouncyCastle.Asn1.DerInteger q
    // Size: 0x8
    // Offset: 0x20
    Org::BouncyCastle::Asn1::DerInteger* q;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Asn1::DerInteger*) == 0x8);
    // private readonly Org.BouncyCastle.Asn1.DerInteger j
    // Size: 0x8
    // Offset: 0x28
    Org::BouncyCastle::Asn1::DerInteger* j;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Asn1::DerInteger*) == 0x8);
    // private readonly Org.BouncyCastle.Asn1.X9.DHValidationParms validationParms
    // Size: 0x8
    // Offset: 0x30
    Org::BouncyCastle::Asn1::X9::DHValidationParms* validationParms;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Asn1::X9::DHValidationParms*) == 0x8);
    // Creating value type constructor for type: DHDomainParameters
    DHDomainParameters(Org::BouncyCastle::Asn1::DerInteger* p_ = {}, Org::BouncyCastle::Asn1::DerInteger* g_ = {}, Org::BouncyCastle::Asn1::DerInteger* q_ = {}, Org::BouncyCastle::Asn1::DerInteger* j_ = {}, Org::BouncyCastle::Asn1::X9::DHValidationParms* validationParms_ = {}) noexcept : p{p_}, g{g_}, q{q_}, j{j_}, validationParms{validationParms_} {}
    // static public Org.BouncyCastle.Asn1.X9.DHDomainParameters GetInstance(System.Object obj)
    // Offset: 0x15846F0
    static Org::BouncyCastle::Asn1::X9::DHDomainParameters* GetInstance(::Il2CppObject* obj);
    // private System.Void .ctor(Org.BouncyCastle.Asn1.Asn1Sequence seq)
    // Offset: 0x1584870
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DHDomainParameters* New_ctor(Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Asn1::X9::DHDomainParameters::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DHDomainParameters*, creationType>(seq)));
    }
    // static private Org.BouncyCastle.Asn1.Asn1Encodable GetNext(System.Collections.IEnumerator e)
    // Offset: 0x1584A9C
    static Org::BouncyCastle::Asn1::Asn1Encodable* GetNext(System::Collections::IEnumerator* e);
    // public Org.BouncyCastle.Asn1.DerInteger get_P()
    // Offset: 0x1584D78
    Org::BouncyCastle::Asn1::DerInteger* get_P();
    // public Org.BouncyCastle.Asn1.DerInteger get_G()
    // Offset: 0x1584D80
    Org::BouncyCastle::Asn1::DerInteger* get_G();
    // public Org.BouncyCastle.Asn1.DerInteger get_Q()
    // Offset: 0x1584D88
    Org::BouncyCastle::Asn1::DerInteger* get_Q();
    // public Org.BouncyCastle.Asn1.DerInteger get_J()
    // Offset: 0x1584D90
    Org::BouncyCastle::Asn1::DerInteger* get_J();
    // public Org.BouncyCastle.Asn1.X9.DHValidationParms get_ValidationParms()
    // Offset: 0x1584D98
    Org::BouncyCastle::Asn1::X9::DHValidationParms* get_ValidationParms();
    // public override Org.BouncyCastle.Asn1.Asn1Object ToAsn1Object()
    // Offset: 0x1584DA0
    // Implemented from: Org.BouncyCastle.Asn1.Asn1Encodable
    // Base method: Org.BouncyCastle.Asn1.Asn1Object Asn1Encodable::ToAsn1Object()
    Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();
  }; // Org.BouncyCastle.Asn1.X9.DHDomainParameters
  static check_size<sizeof(DHDomainParameters), 48 + sizeof(Org::BouncyCastle::Asn1::X9::DHValidationParms*)> __Org_BouncyCastle_Asn1_X9_DHDomainParametersSizeCheck;
  static_assert(sizeof(DHDomainParameters) == 0x38);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::X9::DHDomainParameters*, "Org.BouncyCastle.Asn1.X9", "DHDomainParameters");
#pragma pack(pop)
