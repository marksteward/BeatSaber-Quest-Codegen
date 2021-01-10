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
  // Forward declaring type: Asn1OctetString
  class Asn1OctetString;
  // Forward declaring type: Asn1Sequence
  class Asn1Sequence;
  // Forward declaring type: Asn1Object
  class Asn1Object;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Asn1.Pkcs
namespace Org::BouncyCastle::Asn1::Pkcs {
  // Size: 0x20
  // Autogenerated type: Org.BouncyCastle.Asn1.Pkcs.RC2CbcParameter
  // [] Offset: FFFFFFFF
  class RC2CbcParameter : public Org::BouncyCastle::Asn1::Asn1Encodable {
    public:
    // Org.BouncyCastle.Asn1.DerInteger version
    // Size: 0x8
    // Offset: 0x10
    Org::BouncyCastle::Asn1::DerInteger* version;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Asn1::DerInteger*) == 0x8);
    // Org.BouncyCastle.Asn1.Asn1OctetString iv
    // Size: 0x8
    // Offset: 0x18
    Org::BouncyCastle::Asn1::Asn1OctetString* iv;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Asn1::Asn1OctetString*) == 0x8);
    // Creating value type constructor for type: RC2CbcParameter
    RC2CbcParameter(Org::BouncyCastle::Asn1::DerInteger* version_ = {}, Org::BouncyCastle::Asn1::Asn1OctetString* iv_ = {}) noexcept : version{version_}, iv{iv_} {}
    // static public Org.BouncyCastle.Asn1.Pkcs.RC2CbcParameter GetInstance(System.Object obj)
    // Offset: 0x13FE340
    static Org::BouncyCastle::Asn1::Pkcs::RC2CbcParameter* GetInstance(::Il2CppObject* obj);
    // private System.Void .ctor(Org.BouncyCastle.Asn1.Asn1Sequence seq)
    // Offset: 0x13FE49C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RC2CbcParameter* New_ctor(Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Asn1::Pkcs::RC2CbcParameter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RC2CbcParameter*, creationType>(seq)));
    }
    // public System.Byte[] GetIV()
    // Offset: 0x13FE5E4
    ::Array<uint8_t>* GetIV();
    // public override Org.BouncyCastle.Asn1.Asn1Object ToAsn1Object()
    // Offset: 0x13FE66C
    // Implemented from: Org.BouncyCastle.Asn1.Asn1Encodable
    // Base method: Org.BouncyCastle.Asn1.Asn1Object Asn1Encodable::ToAsn1Object()
    Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();
  }; // Org.BouncyCastle.Asn1.Pkcs.RC2CbcParameter
  static check_size<sizeof(RC2CbcParameter), 24 + sizeof(Org::BouncyCastle::Asn1::Asn1OctetString*)> __Org_BouncyCastle_Asn1_Pkcs_RC2CbcParameterSizeCheck;
  static_assert(sizeof(RC2CbcParameter) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::Pkcs::RC2CbcParameter*, "Org.BouncyCastle.Asn1.Pkcs", "RC2CbcParameter");
#pragma pack(pop)
