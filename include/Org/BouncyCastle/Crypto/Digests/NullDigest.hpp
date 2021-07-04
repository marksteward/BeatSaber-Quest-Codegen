// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Crypto.IDigest
#include "Org/BouncyCastle/Crypto/IDigest.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: MemoryStream
  class MemoryStream;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Crypto.Digests
namespace Org::BouncyCastle::Crypto::Digests {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.Digests.NullDigest
  class NullDigest : public ::Il2CppObject/*, public Org::BouncyCastle::Crypto::IDigest*/ {
    public:
    // private readonly System.IO.MemoryStream bOut
    // Size: 0x8
    // Offset: 0x10
    System::IO::MemoryStream* bOut;
    // Field size check
    static_assert(sizeof(System::IO::MemoryStream*) == 0x8);
    // Creating value type constructor for type: NullDigest
    NullDigest(System::IO::MemoryStream* bOut_ = {}) noexcept : bOut{bOut_} {}
    // Creating interface conversion operator: operator Org::BouncyCastle::Crypto::IDigest
    operator Org::BouncyCastle::Crypto::IDigest() noexcept {
      return *reinterpret_cast<Org::BouncyCastle::Crypto::IDigest*>(this);
    }
    // Creating conversion operator: operator System::IO::MemoryStream*
    constexpr operator System::IO::MemoryStream*() const noexcept {
      return bOut;
    }
    // public System.String get_AlgorithmName()
    // Offset: 0x1CDA6D8
    ::Il2CppString* get_AlgorithmName();
    // public System.Int32 GetByteLength()
    // Offset: 0x1CDA720
    int GetByteLength();
    // public System.Int32 GetDigestSize()
    // Offset: 0x1CDA728
    int GetDigestSize();
    // public System.Void Update(System.Byte b)
    // Offset: 0x1CDA750
    void Update(uint8_t b);
    // public System.Void BlockUpdate(System.Byte[] inBytes, System.Int32 inOff, System.Int32 len)
    // Offset: 0x1CDA774
    void BlockUpdate(::Array<uint8_t>* inBytes, int inOff, int len);
    // public System.Int32 DoFinal(System.Byte[] outBytes, System.Int32 outOff)
    // Offset: 0x1CDA798
    int DoFinal(::Array<uint8_t>* outBytes, int outOff);
    // public System.Void Reset()
    // Offset: 0x1CDA824
    void Reset();
    // public System.Void .ctor()
    // Offset: 0x1CDA84C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NullDigest* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Crypto::Digests::NullDigest::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NullDigest*, creationType>()));
    }
  }; // Org.BouncyCastle.Crypto.Digests.NullDigest
  #pragma pack(pop)
  static check_size<sizeof(NullDigest), 16 + sizeof(System::IO::MemoryStream*)> __Org_BouncyCastle_Crypto_Digests_NullDigestSizeCheck;
  static_assert(sizeof(NullDigest) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Digests::NullDigest*, "Org.BouncyCastle.Crypto.Digests", "NullDigest");
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::NullDigest::get_AlgorithmName
// Il2CppName: get_AlgorithmName
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::NullDigest::GetByteLength
// Il2CppName: GetByteLength
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::NullDigest::GetDigestSize
// Il2CppName: GetDigestSize
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::NullDigest::Update
// Il2CppName: Update
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::NullDigest::BlockUpdate
// Il2CppName: BlockUpdate
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::NullDigest::DoFinal
// Il2CppName: DoFinal
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::NullDigest::Reset
// Il2CppName: Reset
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::NullDigest::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
