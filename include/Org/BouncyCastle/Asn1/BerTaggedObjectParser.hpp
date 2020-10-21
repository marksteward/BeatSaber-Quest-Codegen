// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Asn1.IAsn1Convertible
#include "Org/BouncyCastle/Asn1/IAsn1Convertible.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Asn1
namespace Org::BouncyCastle::Asn1 {
  // Forward declaring type: Asn1StreamParser
  class Asn1StreamParser;
  // Forward declaring type: Asn1Object
  class Asn1Object;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Asn1
namespace Org::BouncyCastle::Asn1 {
  // Autogenerated type: Org.BouncyCastle.Asn1.BerTaggedObjectParser
  class BerTaggedObjectParser : public ::Il2CppObject/*, public Org::BouncyCastle::Asn1::IAsn1Convertible*/ {
    public:
    // private System.Boolean _constructed
    // Offset: 0x10
    bool constructed;
    // private System.Int32 _tagNumber
    // Offset: 0x14
    int tagNumber;
    // private Org.BouncyCastle.Asn1.Asn1StreamParser _parser
    // Offset: 0x18
    Org::BouncyCastle::Asn1::Asn1StreamParser* parser;
    // Creating interface conversion operator: operator Org::BouncyCastle::Asn1::IAsn1Convertible
    operator Org::BouncyCastle::Asn1::IAsn1Convertible() noexcept {
      return *reinterpret_cast<Org::BouncyCastle::Asn1::IAsn1Convertible*>(this);
    }
    // System.Void .ctor(System.Boolean constructed, System.Int32 tagNumber, Org.BouncyCastle.Asn1.Asn1StreamParser parser)
    // Offset: 0x1314878
    static BerTaggedObjectParser* New_ctor(bool constructed, int tagNumber, Org::BouncyCastle::Asn1::Asn1StreamParser* parser);
    // public Org.BouncyCastle.Asn1.Asn1Object ToAsn1Object()
    // Offset: 0x13148C8
    // Implemented from: Org.BouncyCastle.Asn1.IAsn1Convertible
    // Base method: Org.BouncyCastle.Asn1.Asn1Object IAsn1Convertible::ToAsn1Object()
    Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();
  }; // Org.BouncyCastle.Asn1.BerTaggedObjectParser
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::BerTaggedObjectParser*, "Org.BouncyCastle.Asn1", "BerTaggedObjectParser");
#pragma pack(pop)