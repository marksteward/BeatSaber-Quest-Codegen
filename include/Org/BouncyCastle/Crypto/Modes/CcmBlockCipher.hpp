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
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: MemoryStream
  class MemoryStream;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Crypto.Modes
namespace Org::BouncyCastle::Crypto::Modes {
  // Autogenerated type: Org.BouncyCastle.Crypto.Modes.CcmBlockCipher
  class CcmBlockCipher : public ::Il2CppObject/*, public Org::BouncyCastle::Crypto::Modes::IAeadBlockCipher*/ {
    public:
    // private readonly Org.BouncyCastle.Crypto.IBlockCipher cipher
    // Offset: 0x10
    Org::BouncyCastle::Crypto::IBlockCipher* cipher;
    // private readonly System.Byte[] macBlock
    // Offset: 0x18
    ::Array<uint8_t>* macBlock;
    // private System.Boolean forEncryption
    // Offset: 0x20
    bool forEncryption;
    // private System.Byte[] nonce
    // Offset: 0x28
    ::Array<uint8_t>* nonce;
    // private System.Byte[] initialAssociatedText
    // Offset: 0x30
    ::Array<uint8_t>* initialAssociatedText;
    // private System.Int32 macSize
    // Offset: 0x38
    int macSize;
    // private Org.BouncyCastle.Crypto.ICipherParameters keyParam
    // Offset: 0x40
    Org::BouncyCastle::Crypto::ICipherParameters* keyParam;
    // private readonly System.IO.MemoryStream associatedText
    // Offset: 0x48
    System::IO::MemoryStream* associatedText;
    // private readonly System.IO.MemoryStream data
    // Offset: 0x50
    System::IO::MemoryStream* data;
    // Creating interface conversion operator: operator Org::BouncyCastle::Crypto::Modes::IAeadBlockCipher
    operator Org::BouncyCastle::Crypto::Modes::IAeadBlockCipher() noexcept {
      return *reinterpret_cast<Org::BouncyCastle::Crypto::Modes::IAeadBlockCipher*>(this);
    }
    // Get static field: static private readonly System.Int32 BlockSize
    static int _get_BlockSize();
    // Set static field: static private readonly System.Int32 BlockSize
    static void _set_BlockSize(int value);
    // public System.Void .ctor(Org.BouncyCastle.Crypto.IBlockCipher cipher)
    // Offset: 0x14B7B94
    static CcmBlockCipher* New_ctor(Org::BouncyCastle::Crypto::IBlockCipher* cipher);
    // public System.Int32 ProcessPacket(System.Byte[] input, System.Int32 inOff, System.Int32 inLen, System.Byte[] output, System.Int32 outOff)
    // Offset: 0x14B83E0
    int ProcessPacket(::Array<uint8_t>* input, int inOff, int inLen, ::Array<uint8_t>* output, int outOff);
    // private System.Int32 CalculateMac(System.Byte[] data, System.Int32 dataOff, System.Int32 dataLen, System.Byte[] macBlock)
    // Offset: 0x14B8CD8
    int CalculateMac(::Array<uint8_t>* data, int dataOff, int dataLen, ::Array<uint8_t>* macBlock);
    // private System.Int32 GetMacSize(System.Boolean forEncryption, System.Int32 requestedMacBits)
    // Offset: 0x14B7FEC
    int GetMacSize(bool forEncryption, int requestedMacBits);
    // private System.Int32 GetAssociatedTextLength()
    // Offset: 0x14B9640
    int GetAssociatedTextLength();
    // private System.Boolean HasAssociatedText()
    // Offset: 0x14B9624
    bool HasAssociatedText();
    // static private System.Void .cctor()
    // Offset: 0x14B9684
    static void _cctor();
    // public System.Void Init(System.Boolean forEncryption, Org.BouncyCastle.Crypto.ICipherParameters parameters)
    // Offset: 0x14B7DC8
    // Implemented from: Org.BouncyCastle.Crypto.Modes.IAeadCipher
    // Base method: System.Void IAeadCipher::Init(System.Boolean forEncryption, Org.BouncyCastle.Crypto.ICipherParameters parameters)
    void Init(bool forEncryption, Org::BouncyCastle::Crypto::ICipherParameters* parameters);
    // public System.Int32 GetBlockSize()
    // Offset: 0x14B8090
    // Implemented from: Org.BouncyCastle.Crypto.Modes.IAeadBlockCipher
    // Base method: System.Int32 IAeadBlockCipher::GetBlockSize()
    int GetBlockSize();
    // public System.Int32 ProcessBytes(System.Byte[] inBytes, System.Int32 inOff, System.Int32 inLen, System.Byte[] outBytes, System.Int32 outOff)
    // Offset: 0x14B8144
    // Implemented from: Org.BouncyCastle.Crypto.Modes.IAeadCipher
    // Base method: System.Int32 IAeadCipher::ProcessBytes(System.Byte[] inBytes, System.Int32 inOff, System.Int32 inLen, System.Byte[] outBytes, System.Int32 outOff)
    int ProcessBytes(::Array<uint8_t>* inBytes, int inOff, int inLen, ::Array<uint8_t>* outBytes, int outOff);
    // public System.Int32 DoFinal(System.Byte[] outBytes, System.Int32 outOff)
    // Offset: 0x14B81EC
    // Implemented from: Org.BouncyCastle.Crypto.Modes.IAeadCipher
    // Base method: System.Int32 IAeadCipher::DoFinal(System.Byte[] outBytes, System.Int32 outOff)
    int DoFinal(::Array<uint8_t>* outBytes, int outOff);
    // public System.Void Reset()
    // Offset: 0x14B8294
    // Implemented from: Org.BouncyCastle.Crypto.Modes.IAeadCipher
    // Base method: System.Void IAeadCipher::Reset()
    void Reset();
    // public System.Int32 GetUpdateOutputSize(System.Int32 len)
    // Offset: 0x14B8380
    // Implemented from: Org.BouncyCastle.Crypto.Modes.IAeadCipher
    // Base method: System.Int32 IAeadCipher::GetUpdateOutputSize(System.Int32 len)
    int GetUpdateOutputSize(int len);
    // public System.Int32 GetOutputSize(System.Int32 len)
    // Offset: 0x14B8388
    // Implemented from: Org.BouncyCastle.Crypto.Modes.IAeadCipher
    // Base method: System.Int32 IAeadCipher::GetOutputSize(System.Int32 len)
    int GetOutputSize(int len);
  }; // Org.BouncyCastle.Crypto.Modes.CcmBlockCipher
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Modes::CcmBlockCipher*, "Org.BouncyCastle.Crypto.Modes", "CcmBlockCipher");
#pragma pack(pop)
