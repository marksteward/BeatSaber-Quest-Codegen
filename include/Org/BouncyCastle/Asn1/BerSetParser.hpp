// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Asn1.Asn1SetParser
#include "Org/BouncyCastle/Asn1/Asn1SetParser.hpp"
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
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Asn1.BerSetParser
  class BerSetParser : public ::Il2CppObject/*, public Org::BouncyCastle::Asn1::Asn1SetParser*/ {
    public:
    // private readonly Org.BouncyCastle.Asn1.Asn1StreamParser _parser
    // Size: 0x8
    // Offset: 0x10
    Org::BouncyCastle::Asn1::Asn1StreamParser* parser;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Asn1::Asn1StreamParser*) == 0x8);
    // Creating value type constructor for type: BerSetParser
    BerSetParser(Org::BouncyCastle::Asn1::Asn1StreamParser* parser_ = {}) noexcept : parser{parser_} {}
    // Creating interface conversion operator: operator Org::BouncyCastle::Asn1::Asn1SetParser
    operator Org::BouncyCastle::Asn1::Asn1SetParser() noexcept {
      return *reinterpret_cast<Org::BouncyCastle::Asn1::Asn1SetParser*>(this);
    }
    // Creating conversion operator: operator Org::BouncyCastle::Asn1::Asn1StreamParser*
    constexpr operator Org::BouncyCastle::Asn1::Asn1StreamParser*() const noexcept {
      return parser;
    }
    // System.Void .ctor(Org.BouncyCastle.Asn1.Asn1StreamParser parser)
    // Offset: 0x16F2774
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BerSetParser* New_ctor(Org::BouncyCastle::Asn1::Asn1StreamParser* parser) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Asn1::BerSetParser::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BerSetParser*, creationType>(parser)));
    }
    // public Org.BouncyCastle.Asn1.Asn1Object ToAsn1Object()
    // Offset: 0x16F27A0
    Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();
  }; // Org.BouncyCastle.Asn1.BerSetParser
  #pragma pack(pop)
  static check_size<sizeof(BerSetParser), 16 + sizeof(Org::BouncyCastle::Asn1::Asn1StreamParser*)> __Org_BouncyCastle_Asn1_BerSetParserSizeCheck;
  static_assert(sizeof(BerSetParser) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::BerSetParser*, "Org.BouncyCastle.Asn1", "BerSetParser");
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::BerSetParser::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::BerSetParser::ToAsn1Object
// Il2CppName: ToAsn1Object
// Cannot perform method pointer template specialization from operators!
