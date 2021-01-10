// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
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
  // Autogenerated type: Org.BouncyCastle.Asn1.BerApplicationSpecificParser
  // [] Offset: FFFFFFFF
  class BerApplicationSpecificParser : public ::Il2CppObject/*, public Org::BouncyCastle::Asn1::IAsn1Convertible*/ {
    public:
    // private readonly System.Int32 tag
    // Size: 0x4
    // Offset: 0x10
    int tag;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: tag and: parser
    char __padding0[0x4] = {};
    // private readonly Org.BouncyCastle.Asn1.Asn1StreamParser parser
    // Size: 0x8
    // Offset: 0x18
    Org::BouncyCastle::Asn1::Asn1StreamParser* parser;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Asn1::Asn1StreamParser*) == 0x8);
    // Creating value type constructor for type: BerApplicationSpecificParser
    BerApplicationSpecificParser(int tag_ = {}, Org::BouncyCastle::Asn1::Asn1StreamParser* parser_ = {}) noexcept : tag{tag_}, parser{parser_} {}
    // Creating interface conversion operator: operator Org::BouncyCastle::Asn1::IAsn1Convertible
    operator Org::BouncyCastle::Asn1::IAsn1Convertible() noexcept {
      return *reinterpret_cast<Org::BouncyCastle::Asn1::IAsn1Convertible*>(this);
    }
    // System.Void .ctor(System.Int32 tag, Org.BouncyCastle.Asn1.Asn1StreamParser parser)
    // Offset: 0x1372F98
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BerApplicationSpecificParser* New_ctor(int tag, Org::BouncyCastle::Asn1::Asn1StreamParser* parser) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Asn1::BerApplicationSpecificParser::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BerApplicationSpecificParser*, creationType>(tag, parser)));
    }
    // public Org.BouncyCastle.Asn1.Asn1Object ToAsn1Object()
    // Offset: 0x1372FDC
    // Implemented from: Org.BouncyCastle.Asn1.IAsn1Convertible
    // Base method: Org.BouncyCastle.Asn1.Asn1Object IAsn1Convertible::ToAsn1Object()
    Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();
  }; // Org.BouncyCastle.Asn1.BerApplicationSpecificParser
  static check_size<sizeof(BerApplicationSpecificParser), 24 + sizeof(Org::BouncyCastle::Asn1::Asn1StreamParser*)> __Org_BouncyCastle_Asn1_BerApplicationSpecificParserSizeCheck;
  static_assert(sizeof(BerApplicationSpecificParser) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::BerApplicationSpecificParser*, "Org.BouncyCastle.Asn1", "BerApplicationSpecificParser");
#pragma pack(pop)
