// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Asn1.DerSequence
#include "Org/BouncyCastle/Asn1/DerSequence.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Asn1
namespace Org::BouncyCastle::Asn1 {
  // Skipping declaration: Asn1Encodable because it is already included!
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
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Asn1.LazyDerSequence
  // [] Offset: FFFFFFFF
  // [DefaultMemberAttribute] Offset: DA30FC
  class LazyDerSequence : public Org::BouncyCastle::Asn1::DerSequence {
    public:
    // private System.Byte[] encoded
    // Size: 0x8
    // Offset: 0x18
    ::Array<uint8_t>* encoded;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // Creating value type constructor for type: LazyDerSequence
    LazyDerSequence(::Array<uint8_t>* encoded_ = {}) noexcept : encoded{encoded_} {}
    // Deleting conversion operator: operator ::Array<Org::BouncyCastle::Asn1::Asn1Encodable*>*
    constexpr operator ::Array<Org::BouncyCastle::Asn1::Asn1Encodable*>*() const noexcept = delete;
    // System.Void .ctor(System.Byte[] encoded)
    // Offset: 0x13F5570
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LazyDerSequence* New_ctor(::Array<uint8_t>* encoded) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Asn1::LazyDerSequence::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LazyDerSequence*, creationType>(encoded)));
    }
    // private System.Void Parse()
    // Offset: 0x13F56F4
    void Parse();
    // public override Org.BouncyCastle.Asn1.Asn1Encodable get_Item(System.Int32 index)
    // Offset: 0x13F5874
    // Implemented from: Org.BouncyCastle.Asn1.Asn1Sequence
    // Base method: Org.BouncyCastle.Asn1.Asn1Encodable Asn1Sequence::get_Item(System.Int32 index)
    Org::BouncyCastle::Asn1::Asn1Encodable* get_Item(int index);
    // public override System.Collections.IEnumerator GetEnumerator()
    // Offset: 0x13F58A4
    // Implemented from: Org.BouncyCastle.Asn1.Asn1Sequence
    // Base method: System.Collections.IEnumerator Asn1Sequence::GetEnumerator()
    System::Collections::IEnumerator* GetEnumerator();
    // Creating proxy method: System_Collections_IEnumerable_GetEnumerator
    // Maps to method: GetEnumerator
    System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();
    // public override System.Int32 get_Count()
    // Offset: 0x13F58CC
    // Implemented from: Org.BouncyCastle.Asn1.Asn1Sequence
    // Base method: System.Int32 Asn1Sequence::get_Count()
    int get_Count();
    // override System.Void Encode(Org.BouncyCastle.Asn1.DerOutputStream derOut)
    // Offset: 0x13F58F4
    // Implemented from: Org.BouncyCastle.Asn1.DerSequence
    // Base method: System.Void DerSequence::Encode(Org.BouncyCastle.Asn1.DerOutputStream derOut)
    void Encode(Org::BouncyCastle::Asn1::DerOutputStream* derOut);
  }; // Org.BouncyCastle.Asn1.LazyDerSequence
  static check_size<sizeof(LazyDerSequence), 24 + sizeof(::Array<uint8_t>*)> __Org_BouncyCastle_Asn1_LazyDerSequenceSizeCheck;
  static_assert(sizeof(LazyDerSequence) == 0x20);
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::LazyDerSequence*, "Org.BouncyCastle.Asn1", "LazyDerSequence");
