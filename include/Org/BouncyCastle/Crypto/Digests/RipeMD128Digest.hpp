// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Crypto.Digests.GeneralDigest
#include "Org/BouncyCastle/Crypto/Digests/GeneralDigest.hpp"
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
  // Size: 0x44
  // Autogenerated type: Org.BouncyCastle.Crypto.Digests.RipeMD128Digest
  // [] Offset: FFFFFFFF
  class RipeMD128Digest : public Org::BouncyCastle::Crypto::Digests::GeneralDigest {
    public:
    // private System.Int32 H0
    // Size: 0x4
    // Offset: 0x28
    int H0;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 H1
    // Size: 0x4
    // Offset: 0x2C
    int H1;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 H2
    // Size: 0x4
    // Offset: 0x30
    int H2;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 H3
    // Size: 0x4
    // Offset: 0x34
    int H3;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32[] X
    // Size: 0x8
    // Offset: 0x38
    ::Array<int>* X;
    // Field size check
    static_assert(sizeof(::Array<int>*) == 0x8);
    // private System.Int32 xOff
    // Size: 0x4
    // Offset: 0x40
    int xOff;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: RipeMD128Digest
    RipeMD128Digest(int H0_ = {}, int H1_ = {}, int H2_ = {}, int H3_ = {}, ::Array<int>* X_ = {}, int xOff_ = {}) noexcept : H0{H0_}, H1{H1_}, H2{H2_}, H3{H3_}, X{X_}, xOff{xOff_} {}
    // public System.Void .ctor(Org.BouncyCastle.Crypto.Digests.RipeMD128Digest t)
    // Offset: 0x1764C50
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RipeMD128Digest* New_ctor(Org::BouncyCastle::Crypto::Digests::RipeMD128Digest* t) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Crypto::Digests::RipeMD128Digest::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RipeMD128Digest*, creationType>(t)));
    }
    // private System.Void CopyIn(Org.BouncyCastle.Crypto.Digests.RipeMD128Digest t)
    // Offset: 0x1764CD4
    void CopyIn(Org::BouncyCastle::Crypto::Digests::RipeMD128Digest* t);
    // private System.Void UnpackWord(System.Int32 word, System.Byte[] outBytes, System.Int32 outOff)
    // Offset: 0x1764EE4
    void UnpackWord(int word, ::Array<uint8_t>* outBytes, int outOff);
    // private System.Int32 RL(System.Int32 x, System.Int32 n)
    // Offset: 0x1765068
    int RL(int x, int n);
    // private System.Int32 F1(System.Int32 x, System.Int32 y, System.Int32 z)
    // Offset: 0x1765074
    int F1(int x, int y, int z);
    // private System.Int32 F2(System.Int32 x, System.Int32 y, System.Int32 z)
    // Offset: 0x1765080
    int F2(int x, int y, int z);
    // private System.Int32 F3(System.Int32 x, System.Int32 y, System.Int32 z)
    // Offset: 0x1765090
    int F3(int x, int y, int z);
    // private System.Int32 F4(System.Int32 x, System.Int32 y, System.Int32 z)
    // Offset: 0x176509C
    int F4(int x, int y, int z);
    // private System.Int32 F1(System.Int32 a, System.Int32 b, System.Int32 c, System.Int32 d, System.Int32 x, System.Int32 s)
    // Offset: 0x17650AC
    int F1(int a, int b, int c, int d, int x, int s);
    // private System.Int32 F2(System.Int32 a, System.Int32 b, System.Int32 c, System.Int32 d, System.Int32 x, System.Int32 s)
    // Offset: 0x17650C8
    int F2(int a, int b, int c, int d, int x, int s);
    // private System.Int32 F3(System.Int32 a, System.Int32 b, System.Int32 c, System.Int32 d, System.Int32 x, System.Int32 s)
    // Offset: 0x17650F4
    int F3(int a, int b, int c, int d, int x, int s);
    // private System.Int32 F4(System.Int32 a, System.Int32 b, System.Int32 c, System.Int32 d, System.Int32 x, System.Int32 s)
    // Offset: 0x176511C
    int F4(int a, int b, int c, int d, int x, int s);
    // private System.Int32 FF1(System.Int32 a, System.Int32 b, System.Int32 c, System.Int32 d, System.Int32 x, System.Int32 s)
    // Offset: 0x1765148
    int FF1(int a, int b, int c, int d, int x, int s);
    // private System.Int32 FF2(System.Int32 a, System.Int32 b, System.Int32 c, System.Int32 d, System.Int32 x, System.Int32 s)
    // Offset: 0x1765164
    int FF2(int a, int b, int c, int d, int x, int s);
    // private System.Int32 FF3(System.Int32 a, System.Int32 b, System.Int32 c, System.Int32 d, System.Int32 x, System.Int32 s)
    // Offset: 0x1765190
    int FF3(int a, int b, int c, int d, int x, int s);
    // private System.Int32 FF4(System.Int32 a, System.Int32 b, System.Int32 c, System.Int32 d, System.Int32 x, System.Int32 s)
    // Offset: 0x17651B8
    int FF4(int a, int b, int c, int d, int x, int s);
    // public System.Void .ctor()
    // Offset: 0x1764BD4
    // Implemented from: Org.BouncyCastle.Crypto.Digests.GeneralDigest
    // Base method: System.Void GeneralDigest::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RipeMD128Digest* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Crypto::Digests::RipeMD128Digest::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RipeMD128Digest*, creationType>()));
    }
    // public override System.String get_AlgorithmName()
    // Offset: 0x1764D48
    // Implemented from: Org.BouncyCastle.Crypto.Digests.GeneralDigest
    // Base method: System.String GeneralDigest::get_AlgorithmName()
    ::Il2CppString* get_AlgorithmName();
    // public override System.Int32 GetDigestSize()
    // Offset: 0x1764D90
    // Implemented from: Org.BouncyCastle.Crypto.Digests.GeneralDigest
    // Base method: System.Int32 GeneralDigest::GetDigestSize()
    int GetDigestSize();
    // override System.Void ProcessWord(System.Byte[] input, System.Int32 inOff)
    // Offset: 0x1764D98
    // Implemented from: Org.BouncyCastle.Crypto.Digests.GeneralDigest
    // Base method: System.Void GeneralDigest::ProcessWord(System.Byte[] input, System.Int32 inOff)
    void ProcessWord(::Array<uint8_t>* input, int inOff);
    // override System.Void ProcessLength(System.Int64 bitLength)
    // Offset: 0x1764E60
    // Implemented from: Org.BouncyCastle.Crypto.Digests.GeneralDigest
    // Base method: System.Void GeneralDigest::ProcessLength(System.Int64 bitLength)
    void ProcessLength(int64_t bitLength);
    // public override System.Int32 DoFinal(System.Byte[] output, System.Int32 outOff)
    // Offset: 0x1764F70
    // Implemented from: Org.BouncyCastle.Crypto.Digests.GeneralDigest
    // Base method: System.Int32 GeneralDigest::DoFinal(System.Byte[] output, System.Int32 outOff)
    int DoFinal(::Array<uint8_t>* output, int outOff);
    // public override System.Void Reset()
    // Offset: 0x1764FF8
    // Implemented from: Org.BouncyCastle.Crypto.Digests.GeneralDigest
    // Base method: System.Void GeneralDigest::Reset()
    void Reset();
    // override System.Void ProcessBlock()
    // Offset: 0x17651E4
    // Implemented from: Org.BouncyCastle.Crypto.Digests.GeneralDigest
    // Base method: System.Void GeneralDigest::ProcessBlock()
    void ProcessBlock();
    // public override Org.BouncyCastle.Utilities.IMemoable Copy()
    // Offset: 0x17660A4
    // Implemented from: Org.BouncyCastle.Crypto.Digests.GeneralDigest
    // Base method: Org.BouncyCastle.Utilities.IMemoable GeneralDigest::Copy()
    Org::BouncyCastle::Utilities::IMemoable* Copy();
    // public override System.Void Reset(Org.BouncyCastle.Utilities.IMemoable other)
    // Offset: 0x1766104
    // Implemented from: Org.BouncyCastle.Crypto.Digests.GeneralDigest
    // Base method: System.Void GeneralDigest::Reset(Org.BouncyCastle.Utilities.IMemoable other)
    void Reset(Org::BouncyCastle::Utilities::IMemoable* other);
  }; // Org.BouncyCastle.Crypto.Digests.RipeMD128Digest
  static check_size<sizeof(RipeMD128Digest), 64 + sizeof(int)> __Org_BouncyCastle_Crypto_Digests_RipeMD128DigestSizeCheck;
  static_assert(sizeof(RipeMD128Digest) == 0x44);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Digests::RipeMD128Digest*, "Org.BouncyCastle.Crypto.Digests", "RipeMD128Digest");
#pragma pack(pop)
