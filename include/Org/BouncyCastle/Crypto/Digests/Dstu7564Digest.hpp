// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Crypto.IDigest
#include "Org/BouncyCastle/Crypto/IDigest.hpp"
// Including type: Org.BouncyCastle.Utilities.IMemoable
#include "Org/BouncyCastle/Utilities/IMemoable.hpp"
// Completed includes
// Type namespace: Org.BouncyCastle.Crypto.Digests
namespace Org::BouncyCastle::Crypto::Digests {
  // Autogenerated type: Org.BouncyCastle.Crypto.Digests.Dstu7564Digest
  class Dstu7564Digest : public ::Il2CppObject/*, public Org::BouncyCastle::Crypto::IDigest, public Org::BouncyCastle::Utilities::IMemoable*/ {
    public:
    // private System.Int32 hashSize
    // Offset: 0x10
    int hashSize;
    // private System.Int32 blockSize
    // Offset: 0x14
    int blockSize;
    // private System.Int32 columns
    // Offset: 0x18
    int columns;
    // private System.Int32 rounds
    // Offset: 0x1C
    int rounds;
    // private System.UInt64[] state
    // Offset: 0x20
    ::Array<uint64_t>* state;
    // private System.UInt64[] tempState1
    // Offset: 0x28
    ::Array<uint64_t>* tempState1;
    // private System.UInt64[] tempState2
    // Offset: 0x30
    ::Array<uint64_t>* tempState2;
    // private System.UInt64 inputBlocks
    // Offset: 0x38
    uint64_t inputBlocks;
    // private System.Int32 bufOff
    // Offset: 0x40
    int bufOff;
    // private System.Byte[] buf
    // Offset: 0x48
    ::Array<uint8_t>* buf;
    // Creating interface conversion operator: operator Org::BouncyCastle::Crypto::IDigest
    operator Org::BouncyCastle::Crypto::IDigest() noexcept {
      return *reinterpret_cast<Org::BouncyCastle::Crypto::IDigest*>(this);
    }
    // Creating interface conversion operator: operator Org::BouncyCastle::Utilities::IMemoable
    operator Org::BouncyCastle::Utilities::IMemoable() noexcept {
      return *reinterpret_cast<Org::BouncyCastle::Utilities::IMemoable*>(this);
    }
    // Get static field: static private readonly System.Byte[] S0
    static ::Array<uint8_t>* _get_S0();
    // Set static field: static private readonly System.Byte[] S0
    static void _set_S0(::Array<uint8_t>* value);
    // Get static field: static private readonly System.Byte[] S1
    static ::Array<uint8_t>* _get_S1();
    // Set static field: static private readonly System.Byte[] S1
    static void _set_S1(::Array<uint8_t>* value);
    // Get static field: static private readonly System.Byte[] S2
    static ::Array<uint8_t>* _get_S2();
    // Set static field: static private readonly System.Byte[] S2
    static void _set_S2(::Array<uint8_t>* value);
    // Get static field: static private readonly System.Byte[] S3
    static ::Array<uint8_t>* _get_S3();
    // Set static field: static private readonly System.Byte[] S3
    static void _set_S3(::Array<uint8_t>* value);
    // public System.Void .ctor(Org.BouncyCastle.Crypto.Digests.Dstu7564Digest digest)
    // Offset: 0x189CA78
    static Dstu7564Digest* New_ctor(Org::BouncyCastle::Crypto::Digests::Dstu7564Digest* digest);
    // private System.Void CopyIn(Org.BouncyCastle.Crypto.Digests.Dstu7564Digest digest)
    // Offset: 0x189CAA8
    void CopyIn(Org::BouncyCastle::Crypto::Digests::Dstu7564Digest* digest);
    // public System.Void .ctor(System.Int32 hashSizeBits)
    // Offset: 0x189CC18
    static Dstu7564Digest* New_ctor(int hashSizeBits);
    // protected System.Void ProcessBlock(System.Byte[] input, System.Int32 inOff)
    // Offset: 0x189D350
    void ProcessBlock(::Array<uint8_t>* input, int inOff);
    // private System.Void P(System.UInt64[] s)
    // Offset: 0x189D228
    void P(::Array<uint64_t>* s);
    // private System.Void Q(System.UInt64[] s)
    // Offset: 0x189D4BC
    void Q(::Array<uint64_t>* s);
    // static private System.UInt64 MixColumn(System.UInt64 c)
    // Offset: 0x189DCE0
    static uint64_t MixColumn(uint64_t c);
    // private System.Void MixColumns(System.UInt64[] s)
    // Offset: 0x189DC0C
    void MixColumns(::Array<uint64_t>* s);
    // static private System.UInt64 Rotate(System.Int32 n, System.UInt64 x)
    // Offset: 0x189DDA8
    static uint64_t Rotate(int n, uint64_t x);
    // private System.Void ShiftRows(System.UInt64[] s)
    // Offset: 0x189D5A4
    void ShiftRows(::Array<uint64_t>* s);
    // private System.Void SubBytes(System.UInt64[] s)
    // Offset: 0x189DA4C
    void SubBytes(::Array<uint64_t>* s);
    // static private System.Void .cctor()
    // Offset: 0x189DEB0
    static void _cctor();
    // public System.String get_AlgorithmName()
    // Offset: 0x189CD90
    // Implemented from: Org.BouncyCastle.Crypto.IDigest
    // Base method: System.String IDigest::get_AlgorithmName()
    ::Il2CppString* get_AlgorithmName();
    // public System.Int32 GetDigestSize()
    // Offset: 0x189CDD8
    // Implemented from: Org.BouncyCastle.Crypto.IDigest
    // Base method: System.Int32 IDigest::GetDigestSize()
    int GetDigestSize();
    // public System.Int32 GetByteLength()
    // Offset: 0x189CDE0
    // Implemented from: Org.BouncyCastle.Crypto.IDigest
    // Base method: System.Int32 IDigest::GetByteLength()
    int GetByteLength();
    // public System.Void Update(System.Byte input)
    // Offset: 0x189CDE8
    // Implemented from: Org.BouncyCastle.Crypto.IDigest
    // Base method: System.Void IDigest::Update(System.Byte input)
    void Update(uint8_t input);
    // public System.Void BlockUpdate(System.Byte[] input, System.Int32 inOff, System.Int32 length)
    // Offset: 0x189CE78
    // Implemented from: Org.BouncyCastle.Crypto.IDigest
    // Base method: System.Void IDigest::BlockUpdate(System.Byte[] input, System.Int32 inOff, System.Int32 length)
    void BlockUpdate(::Array<uint8_t>* input, int inOff, int length);
    // public System.Int32 DoFinal(System.Byte[] output, System.Int32 outOff)
    // Offset: 0x189CFAC
    // Implemented from: Org.BouncyCastle.Crypto.IDigest
    // Base method: System.Int32 IDigest::DoFinal(System.Byte[] output, System.Int32 outOff)
    int DoFinal(::Array<uint8_t>* output, int outOff);
    // public System.Void Reset()
    // Offset: 0x189D2EC
    // Implemented from: Org.BouncyCastle.Crypto.IDigest
    // Base method: System.Void IDigest::Reset()
    void Reset();
    // public Org.BouncyCastle.Utilities.IMemoable Copy()
    // Offset: 0x189DDB0
    // Implemented from: Org.BouncyCastle.Utilities.IMemoable
    // Base method: Org.BouncyCastle.Utilities.IMemoable IMemoable::Copy()
    Org::BouncyCastle::Utilities::IMemoable* Copy();
    // public System.Void Reset(Org.BouncyCastle.Utilities.IMemoable other)
    // Offset: 0x189DE1C
    // Implemented from: Org.BouncyCastle.Utilities.IMemoable
    // Base method: System.Void IMemoable::Reset(Org.BouncyCastle.Utilities.IMemoable other)
    void Reset(Org::BouncyCastle::Utilities::IMemoable* other);
  }; // Org.BouncyCastle.Crypto.Digests.Dstu7564Digest
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Digests::Dstu7564Digest*, "Org.BouncyCastle.Crypto.Digests", "Dstu7564Digest");
#pragma pack(pop)