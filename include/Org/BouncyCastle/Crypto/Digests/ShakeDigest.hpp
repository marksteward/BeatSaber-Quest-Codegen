// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Crypto.Digests.KeccakDigest
#include "Org/BouncyCastle/Crypto/Digests/KeccakDigest.hpp"
// Including type: Org.BouncyCastle.Crypto.IXof
#include "Org/BouncyCastle/Crypto/IXof.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Utilities
namespace Org::BouncyCastle::Utilities {
  // Skipping declaration: IMemoable because it is already included!
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Crypto.Digests
namespace Org::BouncyCastle::Crypto::Digests {
  // Size: 0x2D
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.Digests.ShakeDigest
  class ShakeDigest : public Org::BouncyCastle::Crypto::Digests::KeccakDigest/*, public Org::BouncyCastle::Crypto::IXof*/ {
    public:
    // Creating value type constructor for type: ShakeDigest
    ShakeDigest() noexcept {}
    // Creating interface conversion operator: operator Org::BouncyCastle::Crypto::IXof
    operator Org::BouncyCastle::Crypto::IXof() noexcept {
      return *reinterpret_cast<Org::BouncyCastle::Crypto::IXof*>(this);
    }
    // static private System.Int32 CheckBitLength(System.Int32 bitLength)
    // Offset: 0x18DCFE8
    static int CheckBitLength(int bitLength);
    // public System.Void .ctor(Org.BouncyCastle.Crypto.Digests.ShakeDigest source)
    // Offset: 0x18DD140
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ShakeDigest* New_ctor(Org::BouncyCastle::Crypto::Digests::ShakeDigest* source) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Crypto::Digests::ShakeDigest::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ShakeDigest*, creationType>(source)));
    }
    // public System.Int32 DoFinal(System.Byte[] output, System.Int32 outOff, System.Int32 outLen)
    // Offset: 0x18DD294
    int DoFinal(::Array<uint8_t>* output, int outOff, int outLen);
    // public System.Int32 DoOutput(System.Byte[] output, System.Int32 outOff, System.Int32 outLen)
    // Offset: 0x18DD2DC
    int DoOutput(::Array<uint8_t>* output, int outOff, int outLen);
    // public System.Void .ctor(System.Int32 bitLength)
    // Offset: 0x18DD0B8
    // Implemented from: Org.BouncyCastle.Crypto.Digests.KeccakDigest
    // Base method: System.Void KeccakDigest::.ctor(System.Int32 bitLength)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ShakeDigest* New_ctor(int bitLength) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Crypto::Digests::ShakeDigest::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ShakeDigest*, creationType>(bitLength)));
    }
    // public override System.String get_AlgorithmName()
    // Offset: 0x18DD1B8
    // Implemented from: Org.BouncyCastle.Crypto.Digests.KeccakDigest
    // Base method: System.String KeccakDigest::get_AlgorithmName()
    ::Il2CppString* get_AlgorithmName();
    // public override System.Int32 DoFinal(System.Byte[] output, System.Int32 outOff)
    // Offset: 0x18DD238
    // Implemented from: Org.BouncyCastle.Crypto.Digests.KeccakDigest
    // Base method: System.Int32 KeccakDigest::DoFinal(System.Byte[] output, System.Int32 outOff)
    int DoFinal(::Array<uint8_t>* output, int outOff);
    // public override Org.BouncyCastle.Utilities.IMemoable Copy()
    // Offset: 0x18DD344
    // Implemented from: Org.BouncyCastle.Crypto.Digests.KeccakDigest
    // Base method: Org.BouncyCastle.Utilities.IMemoable KeccakDigest::Copy()
    Org::BouncyCastle::Utilities::IMemoable* Copy();
  }; // Org.BouncyCastle.Crypto.Digests.ShakeDigest
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Digests::ShakeDigest*, "Org.BouncyCastle.Crypto.Digests", "ShakeDigest");
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::ShakeDigest::CheckBitLength
// Il2CppName: CheckBitLength
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::ShakeDigest::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::ShakeDigest::DoFinal
// Il2CppName: DoFinal
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::ShakeDigest::DoOutput
// Il2CppName: DoOutput
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::ShakeDigest::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::ShakeDigest::get_AlgorithmName
// Il2CppName: get_AlgorithmName
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::ShakeDigest::DoFinal
// Il2CppName: DoFinal
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::ShakeDigest::Copy
// Il2CppName: Copy
// Cannot perform method pointer template specialization from operators!
