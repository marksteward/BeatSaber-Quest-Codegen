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
// Forward declaring namespace: Org::BouncyCastle::Asn1::Pkcs
namespace Org::BouncyCastle::Asn1::Pkcs {
  // Forward declaring type: KeyDerivationFunc
  class KeyDerivationFunc;
  // Forward declaring type: EncryptionScheme
  class EncryptionScheme;
}
// Forward declaring namespace: Org::BouncyCastle::Asn1
namespace Org::BouncyCastle::Asn1 {
  // Forward declaring type: Asn1Sequence
  class Asn1Sequence;
  // Forward declaring type: Asn1Object
  class Asn1Object;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Asn1.Pkcs
namespace Org::BouncyCastle::Asn1::Pkcs {
  // Size: 0x20
  // Autogenerated type: Org.BouncyCastle.Asn1.Pkcs.PbeS2Parameters
  // [] Offset: FFFFFFFF
  class PbeS2Parameters : public Org::BouncyCastle::Asn1::Asn1Encodable {
    public:
    // private readonly Org.BouncyCastle.Asn1.Pkcs.KeyDerivationFunc func
    // Size: 0x8
    // Offset: 0x10
    Org::BouncyCastle::Asn1::Pkcs::KeyDerivationFunc* func;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Asn1::Pkcs::KeyDerivationFunc*) == 0x8);
    // private readonly Org.BouncyCastle.Asn1.Pkcs.EncryptionScheme scheme
    // Size: 0x8
    // Offset: 0x18
    Org::BouncyCastle::Asn1::Pkcs::EncryptionScheme* scheme;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Asn1::Pkcs::EncryptionScheme*) == 0x8);
    // Creating value type constructor for type: PbeS2Parameters
    PbeS2Parameters(Org::BouncyCastle::Asn1::Pkcs::KeyDerivationFunc* func_ = {}, Org::BouncyCastle::Asn1::Pkcs::EncryptionScheme* scheme_ = {}) noexcept : func{func_}, scheme{scheme_} {}
    // static public Org.BouncyCastle.Asn1.Pkcs.PbeS2Parameters GetInstance(System.Object obj)
    // Offset: 0x13FAD4C
    static Org::BouncyCastle::Asn1::Pkcs::PbeS2Parameters* GetInstance(::Il2CppObject* obj);
    // public System.Void .ctor(Org.BouncyCastle.Asn1.Asn1Sequence seq)
    // Offset: 0x13FADF0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PbeS2Parameters* New_ctor(Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Asn1::Pkcs::PbeS2Parameters::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PbeS2Parameters*, creationType>(seq)));
    }
    // public Org.BouncyCastle.Asn1.Pkcs.KeyDerivationFunc get_KeyDerivationFunc()
    // Offset: 0x13FB204
    Org::BouncyCastle::Asn1::Pkcs::KeyDerivationFunc* get_KeyDerivationFunc();
    // public Org.BouncyCastle.Asn1.Pkcs.EncryptionScheme get_EncryptionScheme()
    // Offset: 0x13FB20C
    Org::BouncyCastle::Asn1::Pkcs::EncryptionScheme* get_EncryptionScheme();
    // public override Org.BouncyCastle.Asn1.Asn1Object ToAsn1Object()
    // Offset: 0x13FB214
    // Implemented from: Org.BouncyCastle.Asn1.Asn1Encodable
    // Base method: Org.BouncyCastle.Asn1.Asn1Object Asn1Encodable::ToAsn1Object()
    Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();
  }; // Org.BouncyCastle.Asn1.Pkcs.PbeS2Parameters
  static check_size<sizeof(PbeS2Parameters), 24 + sizeof(Org::BouncyCastle::Asn1::Pkcs::EncryptionScheme*)> __Org_BouncyCastle_Asn1_Pkcs_PbeS2ParametersSizeCheck;
  static_assert(sizeof(PbeS2Parameters) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::Pkcs::PbeS2Parameters*, "Org.BouncyCastle.Asn1.Pkcs", "PbeS2Parameters");
#pragma pack(pop)
