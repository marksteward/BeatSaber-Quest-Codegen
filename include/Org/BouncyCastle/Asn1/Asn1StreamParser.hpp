// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: Stream
  class Stream;
}
// Forward declaring namespace: Org::BouncyCastle::Asn1
namespace Org::BouncyCastle::Asn1 {
  // Forward declaring type: IAsn1Convertible
  class IAsn1Convertible;
  // Forward declaring type: Asn1Object
  class Asn1Object;
  // Forward declaring type: Asn1EncodableVector
  class Asn1EncodableVector;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Asn1
namespace Org::BouncyCastle::Asn1 {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Asn1.Asn1StreamParser
  // [] Offset: FFFFFFFF
  class Asn1StreamParser : public ::Il2CppObject {
    public:
    // private readonly System.IO.Stream _in
    // Size: 0x8
    // Offset: 0x10
    System::IO::Stream* in;
    // Field size check
    static_assert(sizeof(System::IO::Stream*) == 0x8);
    // private readonly System.Int32 _limit
    // Size: 0x4
    // Offset: 0x18
    int limit;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: limit and: tmpBuffers
    char __padding1[0x4] = {};
    // private readonly System.Byte[][] tmpBuffers
    // Size: 0x8
    // Offset: 0x20
    ::Array<::Array<uint8_t>*>* tmpBuffers;
    // Field size check
    static_assert(sizeof(::Array<::Array<uint8_t>*>*) == 0x8);
    // Creating value type constructor for type: Asn1StreamParser
    Asn1StreamParser(System::IO::Stream* in_ = {}, int limit_ = {}, ::Array<::Array<uint8_t>*>* tmpBuffers_ = {}) noexcept : in{in_}, limit{limit_}, tmpBuffers{tmpBuffers_} {}
    // public System.Void .ctor(System.IO.Stream inStream)
    // Offset: 0x1371900
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Asn1StreamParser* New_ctor(System::IO::Stream* inStream) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Asn1::Asn1StreamParser::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Asn1StreamParser*, creationType>(inStream)));
    }
    // public System.Void .ctor(System.IO.Stream inStream, System.Int32 limit)
    // Offset: 0x1372EA4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Asn1StreamParser* New_ctor(System::IO::Stream* inStream, int limit) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Asn1::Asn1StreamParser::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Asn1StreamParser*, creationType>(inStream, limit)));
    }
    // Org.BouncyCastle.Asn1.IAsn1Convertible ReadIndef(System.Int32 tagValue)
    // Offset: 0x1377080
    Org::BouncyCastle::Asn1::IAsn1Convertible* ReadIndef(int tagValue);
    // Org.BouncyCastle.Asn1.Asn1Object ReadTaggedObject(System.Boolean constructed, System.Int32 tag)
    // Offset: 0x1371934
    Org::BouncyCastle::Asn1::Asn1Object* ReadTaggedObject(bool constructed, int tag);
    // public Org.BouncyCastle.Asn1.IAsn1Convertible ReadObject()
    // Offset: 0x137739C
    Org::BouncyCastle::Asn1::IAsn1Convertible* ReadObject();
    // private System.Void Set00Check(System.Boolean enabled)
    // Offset: 0x1377914
    void Set00Check(bool enabled);
    // Org.BouncyCastle.Asn1.Asn1EncodableVector ReadVector()
    // Offset: 0x13771D0
    Org::BouncyCastle::Asn1::Asn1EncodableVector* ReadVector();
  }; // Org.BouncyCastle.Asn1.Asn1StreamParser
  static check_size<sizeof(Asn1StreamParser), 32 + sizeof(::Array<::Array<uint8_t>*>*)> __Org_BouncyCastle_Asn1_Asn1StreamParserSizeCheck;
  static_assert(sizeof(Asn1StreamParser) == 0x28);
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::Asn1StreamParser*, "Org.BouncyCastle.Asn1", "Asn1StreamParser");
