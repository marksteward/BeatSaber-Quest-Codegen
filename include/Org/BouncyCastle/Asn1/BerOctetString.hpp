// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Asn1.DerOctetString
#include "Org/BouncyCastle/Asn1/DerOctetString.hpp"
// Including type: System.Collections.IEnumerable
#include "System/Collections/IEnumerable.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Asn1
namespace Org::BouncyCastle::Asn1 {
  // Skipping declaration: Asn1OctetString because it is already included!
  // Forward declaring type: Asn1Sequence
  class Asn1Sequence;
  // Forward declaring type: DerOutputStream
  class DerOutputStream;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Asn1
namespace Org::BouncyCastle::Asn1 {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Asn1.BerOctetString
  class BerOctetString : public Org::BouncyCastle::Asn1::DerOctetString/*, public System::Collections::IEnumerable*/ {
    public:
    // Nested type: Org::BouncyCastle::Asn1::BerOctetString::ChunkEnumerator
    class ChunkEnumerator;
    // private readonly System.Int32 chunkSize
    // Size: 0x4
    // Offset: 0x18
    int chunkSize;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: chunkSize and: octs
    char __padding0[0x4] = {};
    // private readonly Org.BouncyCastle.Asn1.Asn1OctetString[] octs
    // Size: 0x8
    // Offset: 0x20
    ::Array<Org::BouncyCastle::Asn1::Asn1OctetString*>* octs;
    // Field size check
    static_assert(sizeof(::Array<Org::BouncyCastle::Asn1::Asn1OctetString*>*) == 0x8);
    // Creating value type constructor for type: BerOctetString
    BerOctetString(int chunkSize_ = {}, ::Array<Org::BouncyCastle::Asn1::Asn1OctetString*>* octs_ = {}) noexcept : chunkSize{chunkSize_}, octs{octs_} {}
    // Creating interface conversion operator: operator System::Collections::IEnumerable
    operator System::Collections::IEnumerable() noexcept {
      return *reinterpret_cast<System::Collections::IEnumerable*>(this);
    }
    // Deleting conversion operator: operator ::Array<uint8_t>*
    constexpr operator ::Array<uint8_t>*() const noexcept = delete;
    // Get static field: static private readonly System.Int32 DefaultChunkSize
    static int _get_DefaultChunkSize();
    // Set static field: static private readonly System.Int32 DefaultChunkSize
    static void _set_DefaultChunkSize(int value);
    // static public Org.BouncyCastle.Asn1.BerOctetString FromSequence(Org.BouncyCastle.Asn1.Asn1Sequence seq)
    // Offset: 0x1564D40
    static Org::BouncyCastle::Asn1::BerOctetString* FromSequence(Org::BouncyCastle::Asn1::Asn1Sequence* seq);
    // static private System.Byte[] ToBytes(Org.BouncyCastle.Asn1.Asn1OctetString[] octs)
    // Offset: 0x1568560
    static ::Array<uint8_t>* ToBytes(::Array<Org::BouncyCastle::Asn1::Asn1OctetString*>* octs);
    // public System.Void .ctor(Org.BouncyCastle.Asn1.Asn1OctetString[] octs)
    // Offset: 0x1561660
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BerOctetString* New_ctor(::Array<Org::BouncyCastle::Asn1::Asn1OctetString*>* octs) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Asn1::BerOctetString::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BerOctetString*, creationType>(octs)));
    }
    // public System.Void .ctor(System.Byte[] str, System.Int32 chunkSize)
    // Offset: 0x15686E0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BerOctetString* New_ctor(::Array<uint8_t>* str, int chunkSize) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Asn1::BerOctetString::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BerOctetString*, creationType>(str, chunkSize)));
    }
    // public System.Void .ctor(Org.BouncyCastle.Asn1.Asn1OctetString[] octs, System.Int32 chunkSize)
    // Offset: 0x156870C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BerOctetString* New_ctor(::Array<Org::BouncyCastle::Asn1::Asn1OctetString*>* octs, int chunkSize) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Asn1::BerOctetString::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BerOctetString*, creationType>(octs, chunkSize)));
    }
    // private System.Void .ctor(System.Byte[] str, Org.BouncyCastle.Asn1.Asn1OctetString[] octs, System.Int32 chunkSize)
    // Offset: 0x1568798
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BerOctetString* New_ctor(::Array<uint8_t>* str, ::Array<Org::BouncyCastle::Asn1::Asn1OctetString*>* octs, int chunkSize) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Asn1::BerOctetString::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BerOctetString*, creationType>(str, octs, chunkSize)));
    }
    // public System.Collections.IEnumerator GetEnumerator()
    // Offset: 0x15687D0
    System::Collections::IEnumerator* GetEnumerator();
    // static private System.Void .cctor()
    // Offset: 0x1568BF4
    static void _cctor();
    // public System.Void .ctor(System.Byte[] str)
    // Offset: 0x1568654
    // Implemented from: Org.BouncyCastle.Asn1.DerOctetString
    // Base method: System.Void DerOctetString::.ctor(System.Byte[] str)
    // Base method: System.Void Asn1OctetString::.ctor(System.Byte[] str)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BerOctetString* New_ctor(::Array<uint8_t>* str) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Asn1::BerOctetString::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BerOctetString*, creationType>(str)));
    }
    // override System.Void Encode(Org.BouncyCastle.Asn1.DerOutputStream derOut)
    // Offset: 0x15688B0
    // Implemented from: Org.BouncyCastle.Asn1.DerOctetString
    // Base method: System.Void DerOctetString::Encode(Org.BouncyCastle.Asn1.DerOutputStream derOut)
    void Encode(Org::BouncyCastle::Asn1::DerOutputStream* derOut);
  }; // Org.BouncyCastle.Asn1.BerOctetString
  #pragma pack(pop)
  static check_size<sizeof(BerOctetString), 32 + sizeof(::Array<Org::BouncyCastle::Asn1::Asn1OctetString*>*)> __Org_BouncyCastle_Asn1_BerOctetStringSizeCheck;
  static_assert(sizeof(BerOctetString) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::BerOctetString*, "Org.BouncyCastle.Asn1", "BerOctetString");
