// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Asn1.IAsn1Convertible
#include "Org/BouncyCastle/Asn1/IAsn1Convertible.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
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
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Asn1.BerTaggedObjectParser
  class BerTaggedObjectParser : public ::Il2CppObject/*, public Org::BouncyCastle::Asn1::IAsn1Convertible*/ {
    public:
    // private System.Boolean _constructed
    // Size: 0x1
    // Offset: 0x10
    bool constructed;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: constructed and: tagNumber
    char __padding0[0x3] = {};
    // private System.Int32 _tagNumber
    // Size: 0x4
    // Offset: 0x14
    int tagNumber;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private Org.BouncyCastle.Asn1.Asn1StreamParser _parser
    // Size: 0x8
    // Offset: 0x18
    Org::BouncyCastle::Asn1::Asn1StreamParser* parser;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Asn1::Asn1StreamParser*) == 0x8);
    // Creating value type constructor for type: BerTaggedObjectParser
    BerTaggedObjectParser(bool constructed_ = {}, int tagNumber_ = {}, Org::BouncyCastle::Asn1::Asn1StreamParser* parser_ = {}) noexcept : constructed{constructed_}, tagNumber{tagNumber_}, parser{parser_} {}
    // Creating interface conversion operator: operator Org::BouncyCastle::Asn1::IAsn1Convertible
    operator Org::BouncyCastle::Asn1::IAsn1Convertible() noexcept {
      return *reinterpret_cast<Org::BouncyCastle::Asn1::IAsn1Convertible*>(this);
    }
    // System.Void .ctor(System.Boolean constructed, System.Int32 tagNumber, Org.BouncyCastle.Asn1.Asn1StreamParser parser)
    // Offset: 0x16F23E4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BerTaggedObjectParser* New_ctor(bool constructed, int tagNumber, Org::BouncyCastle::Asn1::Asn1StreamParser* parser) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Asn1::BerTaggedObjectParser::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BerTaggedObjectParser*, creationType>(constructed, tagNumber, parser)));
    }
    // public Org.BouncyCastle.Asn1.Asn1Object ToAsn1Object()
    // Offset: 0x16F242C
    Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();
  }; // Org.BouncyCastle.Asn1.BerTaggedObjectParser
  #pragma pack(pop)
  static check_size<sizeof(BerTaggedObjectParser), 24 + sizeof(Org::BouncyCastle::Asn1::Asn1StreamParser*)> __Org_BouncyCastle_Asn1_BerTaggedObjectParserSizeCheck;
  static_assert(sizeof(BerTaggedObjectParser) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::BerTaggedObjectParser*, "Org.BouncyCastle.Asn1", "BerTaggedObjectParser");
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::BerTaggedObjectParser::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::BerTaggedObjectParser::ToAsn1Object
// Il2CppName: ToAsn1Object
// Cannot perform method pointer template specialization from operators!
