// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Crypto.Modes.IAeadBlockCipher
#include "Org/BouncyCastle/Crypto/Modes/IAeadBlockCipher.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Crypto
namespace Org::BouncyCastle::Crypto {
  // Forward declaring type: IBlockCipher
  class IBlockCipher;
  // Forward declaring type: ICipherParameters
  class ICipherParameters;
}
// Forward declaring namespace: Org::BouncyCastle::Crypto::Modes::Gcm
namespace Org::BouncyCastle::Crypto::Modes::Gcm {
  // Forward declaring type: IGcmMultiplier
  class IGcmMultiplier;
  // Forward declaring type: IGcmExponentiator
  class IGcmExponentiator;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Crypto.Modes
namespace Org::BouncyCastle::Crypto::Modes {
  // Autogenerated type: Org.BouncyCastle.Crypto.Modes.GcmBlockCipher
  class GcmBlockCipher : public ::Il2CppObject/*, public Org::BouncyCastle::Crypto::Modes::IAeadBlockCipher*/ {
    public:
    // private readonly Org.BouncyCastle.Crypto.IBlockCipher cipher
    // Offset: 0x10
    Org::BouncyCastle::Crypto::IBlockCipher* cipher;
    // private readonly Org.BouncyCastle.Crypto.Modes.Gcm.IGcmMultiplier multiplier
    // Offset: 0x18
    Org::BouncyCastle::Crypto::Modes::Gcm::IGcmMultiplier* multiplier;
    // private Org.BouncyCastle.Crypto.Modes.Gcm.IGcmExponentiator exp
    // Offset: 0x20
    Org::BouncyCastle::Crypto::Modes::Gcm::IGcmExponentiator* exp;
    // private System.Boolean forEncryption
    // Offset: 0x28
    bool forEncryption;
    // private System.Boolean initialised
    // Offset: 0x29
    bool initialised;
    // private System.Int32 macSize
    // Offset: 0x2C
    int macSize;
    // private System.Byte[] lastKey
    // Offset: 0x30
    ::Array<uint8_t>* lastKey;
    // private System.Byte[] nonce
    // Offset: 0x38
    ::Array<uint8_t>* nonce;
    // private System.Byte[] initialAssociatedText
    // Offset: 0x40
    ::Array<uint8_t>* initialAssociatedText;
    // private System.Byte[] H
    // Offset: 0x48
    ::Array<uint8_t>* H;
    // private System.Byte[] J0
    // Offset: 0x50
    ::Array<uint8_t>* J0;
    // private System.Byte[] bufBlock
    // Offset: 0x58
    ::Array<uint8_t>* bufBlock;
    // private System.Byte[] macBlock
    // Offset: 0x60
    ::Array<uint8_t>* macBlock;
    // private System.Byte[] S
    // Offset: 0x68
    ::Array<uint8_t>* S;
    // private System.Byte[] S_at
    // Offset: 0x70
    ::Array<uint8_t>* S_at;
    // private System.Byte[] S_atPre
    // Offset: 0x78
    ::Array<uint8_t>* S_atPre;
    // private System.Byte[] counter
    // Offset: 0x80
    ::Array<uint8_t>* counter;
    // private System.UInt32 blocksRemaining
    // Offset: 0x88
    uint blocksRemaining;
    // private System.Int32 bufOff
    // Offset: 0x8C
    int bufOff;
    // private System.UInt64 totalLength
    // Offset: 0x90
    uint64_t totalLength;
    // private System.Byte[] atBlock
    // Offset: 0x98
    ::Array<uint8_t>* atBlock;
    // private System.Int32 atBlockPos
    // Offset: 0xA0
    int atBlockPos;
    // private System.UInt64 atLength
    // Offset: 0xA8
    uint64_t atLength;
    // private System.UInt64 atLengthPre
    // Offset: 0xB0
    uint64_t atLengthPre;
    // Creating interface conversion operator: operator Org::BouncyCastle::Crypto::Modes::IAeadBlockCipher
    operator Org::BouncyCastle::Crypto::Modes::IAeadBlockCipher() noexcept {
      return *reinterpret_cast<Org::BouncyCastle::Crypto::Modes::IAeadBlockCipher*>(this);
    }
    // public System.Void .ctor(Org.BouncyCastle.Crypto.IBlockCipher c)
    // Offset: 0x14C0660
    static GcmBlockCipher* New_ctor(Org::BouncyCastle::Crypto::IBlockCipher* c);
    // public System.Void .ctor(Org.BouncyCastle.Crypto.IBlockCipher c, Org.BouncyCastle.Crypto.Modes.Gcm.IGcmMultiplier m)
    // Offset: 0x14C0668
    static GcmBlockCipher* New_ctor(Org::BouncyCastle::Crypto::IBlockCipher* c, Org::BouncyCastle::Crypto::Modes::Gcm::IGcmMultiplier* m);
    // public System.Void ProcessAadBytes(System.Byte[] inBytes, System.Int32 inOff, System.Int32 len)
    // Offset: 0x14C119C
    void ProcessAadBytes(::Array<uint8_t>* inBytes, int inOff, int len);
    // private System.Void InitCipher()
    // Offset: 0x14C1318
    void InitCipher();
    // private System.Void Reset(System.Boolean clearMac)
    // Offset: 0x14C1FA0
    void Reset(bool clearMac);
    // private System.Void ProcessBlock(System.Byte[] buf, System.Int32 bufOff, System.Byte[] output, System.Int32 outOff)
    // Offset: 0x14C1768
    void ProcessBlock(::Array<uint8_t>* buf, int bufOff, ::Array<uint8_t>* output, int outOff);
    // private System.Void ProcessPartial(System.Byte[] buf, System.Int32 off, System.Int32 len, System.Byte[] output, System.Int32 outOff)
    // Offset: 0x14C1E3C
    void ProcessPartial(::Array<uint8_t>* buf, int off, int len, ::Array<uint8_t>* output, int outOff);
    // private System.Void gHASH(System.Byte[] Y, System.Byte[] b, System.Int32 len)
    // Offset: 0x14C0F7C
    void gHASH(::Array<uint8_t>* Y, ::Array<uint8_t>* b, int len);
    // private System.Void gHASHBlock(System.Byte[] Y, System.Byte[] b)
    // Offset: 0x14C1048
    void gHASHBlock(::Array<uint8_t>* Y, ::Array<uint8_t>* b);
    // private System.Void gHASHBlock(System.Byte[] Y, System.Byte[] b, System.Int32 off)
    // Offset: 0x14C2384
    void gHASHBlock(::Array<uint8_t>* Y, ::Array<uint8_t>* b, int off);
    // private System.Void gHASHPartial(System.Byte[] Y, System.Byte[] b, System.Int32 off, System.Int32 len)
    // Offset: 0x14C13BC
    void gHASHPartial(::Array<uint8_t>* Y, ::Array<uint8_t>* b, int off, int len);
    // private System.Void GetNextCtrBlock(System.Byte[] block)
    // Offset: 0x14C21D0
    void GetNextCtrBlock(::Array<uint8_t>* block);
    // private System.Void CheckStatus()
    // Offset: 0x14C127C
    void CheckStatus();
    // public System.Int32 GetBlockSize()
    // Offset: 0x14C0804
    // Implemented from: Org.BouncyCastle.Crypto.Modes.IAeadBlockCipher
    // Base method: System.Int32 IAeadBlockCipher::GetBlockSize()
    int GetBlockSize();
    // public System.Void Init(System.Boolean forEncryption, Org.BouncyCastle.Crypto.ICipherParameters parameters)
    // Offset: 0x14C080C
    // Implemented from: Org.BouncyCastle.Crypto.Modes.IAeadCipher
    // Base method: System.Void IAeadCipher::Init(System.Boolean forEncryption, Org.BouncyCastle.Crypto.ICipherParameters parameters)
    void Init(bool forEncryption, Org::BouncyCastle::Crypto::ICipherParameters* parameters);
    // public System.Int32 GetOutputSize(System.Int32 len)
    // Offset: 0x14C113C
    // Implemented from: Org.BouncyCastle.Crypto.Modes.IAeadCipher
    // Base method: System.Int32 IAeadCipher::GetOutputSize(System.Int32 len)
    int GetOutputSize(int len);
    // public System.Int32 GetUpdateOutputSize(System.Int32 len)
    // Offset: 0x14C1164
    // Implemented from: Org.BouncyCastle.Crypto.Modes.IAeadCipher
    // Base method: System.Int32 IAeadCipher::GetUpdateOutputSize(System.Int32 len)
    int GetUpdateOutputSize(int len);
    // public System.Int32 ProcessBytes(System.Byte[] input, System.Int32 inOff, System.Int32 len, System.Byte[] output, System.Int32 outOff)
    // Offset: 0x14C14C8
    // Implemented from: Org.BouncyCastle.Crypto.Modes.IAeadCipher
    // Base method: System.Int32 IAeadCipher::ProcessBytes(System.Byte[] input, System.Int32 inOff, System.Int32 len, System.Byte[] output, System.Int32 outOff)
    int ProcessBytes(::Array<uint8_t>* input, int inOff, int len, ::Array<uint8_t>* output, int outOff);
    // public System.Int32 DoFinal(System.Byte[] output, System.Int32 outOff)
    // Offset: 0x14C18E0
    // Implemented from: Org.BouncyCastle.Crypto.Modes.IAeadCipher
    // Base method: System.Int32 IAeadCipher::DoFinal(System.Byte[] output, System.Int32 outOff)
    int DoFinal(::Array<uint8_t>* output, int outOff);
    // public System.Void Reset()
    // Offset: 0x14C21C8
    // Implemented from: Org.BouncyCastle.Crypto.Modes.IAeadCipher
    // Base method: System.Void IAeadCipher::Reset()
    void Reset();
  }; // Org.BouncyCastle.Crypto.Modes.GcmBlockCipher
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Modes::GcmBlockCipher*, "Org.BouncyCastle.Crypto.Modes", "GcmBlockCipher");
#pragma pack(pop)
