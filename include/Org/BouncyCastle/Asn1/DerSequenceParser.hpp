// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Asn1.Asn1SequenceParser
#include "Org/BouncyCastle/Asn1/Asn1SequenceParser.hpp"
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
  // Autogenerated type: Org.BouncyCastle.Asn1.DerSequenceParser
  class DerSequenceParser : public ::Il2CppObject/*, public Org::BouncyCastle::Asn1::Asn1SequenceParser*/ {
    public:
    // private readonly Org.BouncyCastle.Asn1.Asn1StreamParser _parser
    // Offset: 0x10
    Org::BouncyCastle::Asn1::Asn1StreamParser* parser;
    // Creating interface conversion operator: operator Org::BouncyCastle::Asn1::Asn1SequenceParser
    operator Org::BouncyCastle::Asn1::Asn1SequenceParser() noexcept {
      return *reinterpret_cast<Org::BouncyCastle::Asn1::Asn1SequenceParser*>(this);
    }
    // Creating conversion operator: operator Org::BouncyCastle::Asn1::Asn1StreamParser*
    constexpr operator Org::BouncyCastle::Asn1::Asn1StreamParser*() const noexcept {
      return parser;
    }
    // System.Void .ctor(Org.BouncyCastle.Asn1.Asn1StreamParser parser)
    // Offset: 0x13191C8
    static DerSequenceParser* New_ctor(Org::BouncyCastle::Asn1::Asn1StreamParser* parser);
    // public Org.BouncyCastle.Asn1.Asn1Object ToAsn1Object()
    // Offset: 0x1326A40
    // Implemented from: Org.BouncyCastle.Asn1.IAsn1Convertible
    // Base method: Org.BouncyCastle.Asn1.Asn1Object IAsn1Convertible::ToAsn1Object()
    Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();
  }; // Org.BouncyCastle.Asn1.DerSequenceParser
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::DerSequenceParser*, "Org.BouncyCastle.Asn1", "DerSequenceParser");
#pragma pack(pop)
