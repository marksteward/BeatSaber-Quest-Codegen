// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Crypto.Digests.GeneralDigest
#include "Org/BouncyCastle/Crypto/Digests/GeneralDigest.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Utilities
namespace Org::BouncyCastle::Utilities {
  // Skipping declaration: IMemoable because it is already included!
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Crypto.Digests
namespace Org::BouncyCastle::Crypto::Digests {
  // Autogenerated type: Org.BouncyCastle.Crypto.Digests.MD5Digest
  class MD5Digest : public Org::BouncyCastle::Crypto::Digests::GeneralDigest {
    public:
    // private System.UInt32 H1
    // Offset: 0x28
    uint H1;
    // private System.UInt32 H2
    // Offset: 0x2C
    uint H2;
    // private System.UInt32 H3
    // Offset: 0x30
    uint H3;
    // private System.UInt32 H4
    // Offset: 0x34
    uint H4;
    // private System.UInt32[] X
    // Offset: 0x38
    ::Array<uint>* X;
    // private System.Int32 xOff
    // Offset: 0x40
    int xOff;
    // Get static field: static private readonly System.Int32 S11
    static int _get_S11();
    // Set static field: static private readonly System.Int32 S11
    static void _set_S11(int value);
    // Get static field: static private readonly System.Int32 S12
    static int _get_S12();
    // Set static field: static private readonly System.Int32 S12
    static void _set_S12(int value);
    // Get static field: static private readonly System.Int32 S13
    static int _get_S13();
    // Set static field: static private readonly System.Int32 S13
    static void _set_S13(int value);
    // Get static field: static private readonly System.Int32 S14
    static int _get_S14();
    // Set static field: static private readonly System.Int32 S14
    static void _set_S14(int value);
    // Get static field: static private readonly System.Int32 S21
    static int _get_S21();
    // Set static field: static private readonly System.Int32 S21
    static void _set_S21(int value);
    // Get static field: static private readonly System.Int32 S22
    static int _get_S22();
    // Set static field: static private readonly System.Int32 S22
    static void _set_S22(int value);
    // Get static field: static private readonly System.Int32 S23
    static int _get_S23();
    // Set static field: static private readonly System.Int32 S23
    static void _set_S23(int value);
    // Get static field: static private readonly System.Int32 S24
    static int _get_S24();
    // Set static field: static private readonly System.Int32 S24
    static void _set_S24(int value);
    // Get static field: static private readonly System.Int32 S31
    static int _get_S31();
    // Set static field: static private readonly System.Int32 S31
    static void _set_S31(int value);
    // Get static field: static private readonly System.Int32 S32
    static int _get_S32();
    // Set static field: static private readonly System.Int32 S32
    static void _set_S32(int value);
    // Get static field: static private readonly System.Int32 S33
    static int _get_S33();
    // Set static field: static private readonly System.Int32 S33
    static void _set_S33(int value);
    // Get static field: static private readonly System.Int32 S34
    static int _get_S34();
    // Set static field: static private readonly System.Int32 S34
    static void _set_S34(int value);
    // Get static field: static private readonly System.Int32 S41
    static int _get_S41();
    // Set static field: static private readonly System.Int32 S41
    static void _set_S41(int value);
    // Get static field: static private readonly System.Int32 S42
    static int _get_S42();
    // Set static field: static private readonly System.Int32 S42
    static void _set_S42(int value);
    // Get static field: static private readonly System.Int32 S43
    static int _get_S43();
    // Set static field: static private readonly System.Int32 S43
    static void _set_S43(int value);
    // Get static field: static private readonly System.Int32 S44
    static int _get_S44();
    // Set static field: static private readonly System.Int32 S44
    static void _set_S44(int value);
    // public System.Void .ctor(Org.BouncyCastle.Crypto.Digests.MD5Digest t)
    // Offset: 0x18A5B90
    static MD5Digest* New_ctor(Org::BouncyCastle::Crypto::Digests::MD5Digest* t);
    // private System.Void CopyIn(Org.BouncyCastle.Crypto.Digests.MD5Digest t)
    // Offset: 0x18A5C14
    void CopyIn(Org::BouncyCastle::Crypto::Digests::MD5Digest* t);
    // static private System.UInt32 RotateLeft(System.UInt32 x, System.Int32 n)
    // Offset: 0x18A5F44
    static uint RotateLeft(uint x, int n);
    // static private System.UInt32 F(System.UInt32 u, System.UInt32 v, System.UInt32 w)
    // Offset: 0x18A5F50
    static uint F(uint u, uint v, uint w);
    // static private System.UInt32 G(System.UInt32 u, System.UInt32 v, System.UInt32 w)
    // Offset: 0x18A5F60
    static uint G(uint u, uint v, uint w);
    // static private System.UInt32 H(System.UInt32 u, System.UInt32 v, System.UInt32 w)
    // Offset: 0x18A5F70
    static uint H(uint u, uint v, uint w);
    // static private System.UInt32 K(System.UInt32 u, System.UInt32 v, System.UInt32 w)
    // Offset: 0x18A5F7C
    static uint K(uint u, uint v, uint w);
    // static private System.Void .cctor()
    // Offset: 0x18A6CCC
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x18A5B14
    // Implemented from: Org.BouncyCastle.Crypto.Digests.GeneralDigest
    // Base method: System.Void GeneralDigest::.ctor()
    // Base method: System.Void Object::.ctor()
    static MD5Digest* New_ctor();
    // public override System.String get_AlgorithmName()
    // Offset: 0x18A5C88
    // Implemented from: Org.BouncyCastle.Crypto.Digests.GeneralDigest
    // Base method: System.String GeneralDigest::get_AlgorithmName()
    ::Il2CppString* get_AlgorithmName();
    // public override System.Int32 GetDigestSize()
    // Offset: 0x18A5CD0
    // Implemented from: Org.BouncyCastle.Crypto.Digests.GeneralDigest
    // Base method: System.Int32 GeneralDigest::GetDigestSize()
    int GetDigestSize();
    // override System.Void ProcessWord(System.Byte[] input, System.Int32 inOff)
    // Offset: 0x18A5CD8
    // Implemented from: Org.BouncyCastle.Crypto.Digests.GeneralDigest
    // Base method: System.Void GeneralDigest::ProcessWord(System.Byte[] input, System.Int32 inOff)
    void ProcessWord(::Array<uint8_t>* input, int inOff);
    // override System.Void ProcessLength(System.Int64 bitLength)
    // Offset: 0x18A5D70
    // Implemented from: Org.BouncyCastle.Crypto.Digests.GeneralDigest
    // Base method: System.Void GeneralDigest::ProcessLength(System.Int64 bitLength)
    void ProcessLength(int64_t bitLength);
    // public override System.Int32 DoFinal(System.Byte[] output, System.Int32 outOff)
    // Offset: 0x18A5E3C
    // Implemented from: Org.BouncyCastle.Crypto.Digests.GeneralDigest
    // Base method: System.Int32 GeneralDigest::DoFinal(System.Byte[] output, System.Int32 outOff)
    int DoFinal(::Array<uint8_t>* output, int outOff);
    // public override System.Void Reset()
    // Offset: 0x18A5ED4
    // Implemented from: Org.BouncyCastle.Crypto.Digests.GeneralDigest
    // Base method: System.Void GeneralDigest::Reset()
    void Reset();
    // override System.Void ProcessBlock()
    // Offset: 0x18A5F88
    // Implemented from: Org.BouncyCastle.Crypto.Digests.GeneralDigest
    // Base method: System.Void GeneralDigest::ProcessBlock()
    void ProcessBlock();
    // public override Org.BouncyCastle.Utilities.IMemoable Copy()
    // Offset: 0x18A6BD8
    // Implemented from: Org.BouncyCastle.Crypto.Digests.GeneralDigest
    // Base method: Org.BouncyCastle.Utilities.IMemoable GeneralDigest::Copy()
    Org::BouncyCastle::Utilities::IMemoable* Copy();
    // public override System.Void Reset(Org.BouncyCastle.Utilities.IMemoable other)
    // Offset: 0x18A6C38
    // Implemented from: Org.BouncyCastle.Crypto.Digests.GeneralDigest
    // Base method: System.Void GeneralDigest::Reset(Org.BouncyCastle.Utilities.IMemoable other)
    void Reset(Org::BouncyCastle::Utilities::IMemoable* other);
  }; // Org.BouncyCastle.Crypto.Digests.MD5Digest
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Digests::MD5Digest*, "Org.BouncyCastle.Crypto.Digests", "MD5Digest");
#pragma pack(pop)