// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Crypto.IAsymmetricBlockCipher
#include "Org/BouncyCastle/Crypto/IAsymmetricBlockCipher.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Crypto
namespace Org::BouncyCastle::Crypto {
  // Forward declaring type: IDigest
  class IDigest;
  // Forward declaring type: ICipherParameters
  class ICipherParameters;
}
// Forward declaring namespace: Org::BouncyCastle::Security
namespace Org::BouncyCastle::Security {
  // Forward declaring type: SecureRandom
  class SecureRandom;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Crypto.Encodings
namespace Org::BouncyCastle::Crypto::Encodings {
  // Autogenerated type: Org.BouncyCastle.Crypto.Encodings.OaepEncoding
  class OaepEncoding : public ::Il2CppObject/*, public Org::BouncyCastle::Crypto::IAsymmetricBlockCipher*/ {
    public:
    // private System.Byte[] defHash
    // Offset: 0x10
    ::Array<uint8_t>* defHash;
    // private Org.BouncyCastle.Crypto.IDigest mgf1Hash
    // Offset: 0x18
    Org::BouncyCastle::Crypto::IDigest* mgf1Hash;
    // private Org.BouncyCastle.Crypto.IAsymmetricBlockCipher engine
    // Offset: 0x20
    Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* engine;
    // private Org.BouncyCastle.Security.SecureRandom random
    // Offset: 0x28
    Org::BouncyCastle::Security::SecureRandom* random;
    // private System.Boolean forEncryption
    // Offset: 0x30
    bool forEncryption;
    // Creating interface conversion operator: operator Org::BouncyCastle::Crypto::IAsymmetricBlockCipher
    operator Org::BouncyCastle::Crypto::IAsymmetricBlockCipher() noexcept {
      return *reinterpret_cast<Org::BouncyCastle::Crypto::IAsymmetricBlockCipher*>(this);
    }
    // public System.Void .ctor(Org.BouncyCastle.Crypto.IAsymmetricBlockCipher cipher)
    // Offset: 0x14D546C
    static OaepEncoding* New_ctor(Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* cipher);
    // public System.Void .ctor(Org.BouncyCastle.Crypto.IAsymmetricBlockCipher cipher, Org.BouncyCastle.Crypto.IDigest hash)
    // Offset: 0x14D54F0
    static OaepEncoding* New_ctor(Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* cipher, Org::BouncyCastle::Crypto::IDigest* hash);
    // public System.Void .ctor(Org.BouncyCastle.Crypto.IAsymmetricBlockCipher cipher, Org.BouncyCastle.Crypto.IDigest hash, System.Byte[] encodingParams)
    // Offset: 0x14D54E4
    static OaepEncoding* New_ctor(Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* cipher, Org::BouncyCastle::Crypto::IDigest* hash, ::Array<uint8_t>* encodingParams);
    // public System.Void .ctor(Org.BouncyCastle.Crypto.IAsymmetricBlockCipher cipher, Org.BouncyCastle.Crypto.IDigest hash, Org.BouncyCastle.Crypto.IDigest mgf1Hash, System.Byte[] encodingParams)
    // Offset: 0x14D54FC
    static OaepEncoding* New_ctor(Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* cipher, Org::BouncyCastle::Crypto::IDigest* hash, Org::BouncyCastle::Crypto::IDigest* mgf1Hash, ::Array<uint8_t>* encodingParams);
    // private System.Byte[] EncodeBlock(System.Byte[] inBytes, System.Int32 inOff, System.Int32 inLen)
    // Offset: 0x14D5A74
    ::Array<uint8_t>* EncodeBlock(::Array<uint8_t>* inBytes, int inOff, int inLen);
    // private System.Byte[] DecodeBlock(System.Byte[] inBytes, System.Int32 inOff, System.Int32 inLen)
    // Offset: 0x14D5D94
    ::Array<uint8_t>* DecodeBlock(::Array<uint8_t>* inBytes, int inOff, int inLen);
    // private System.Void ItoOSP(System.Int32 i, System.Byte[] sp)
    // Offset: 0x14D6708
    void ItoOSP(int i, ::Array<uint8_t>* sp);
    // private System.Byte[] maskGeneratorFunction1(System.Byte[] Z, System.Int32 zOff, System.Int32 zLen, System.Int32 length)
    // Offset: 0x14D61F8
    ::Array<uint8_t>* maskGeneratorFunction1(::Array<uint8_t>* Z, int zOff, int zLen, int length);
    // public System.Void Init(System.Boolean forEncryption, Org.BouncyCastle.Crypto.ICipherParameters param)
    // Offset: 0x14D576C
    // Implemented from: Org.BouncyCastle.Crypto.IAsymmetricBlockCipher
    // Base method: System.Void IAsymmetricBlockCipher::Init(System.Boolean forEncryption, Org.BouncyCastle.Crypto.ICipherParameters param)
    void Init(bool forEncryption, Org::BouncyCastle::Crypto::ICipherParameters* param);
    // public System.Int32 GetInputBlockSize()
    // Offset: 0x14D58B4
    // Implemented from: Org.BouncyCastle.Crypto.IAsymmetricBlockCipher
    // Base method: System.Int32 IAsymmetricBlockCipher::GetInputBlockSize()
    int GetInputBlockSize();
    // public System.Int32 GetOutputBlockSize()
    // Offset: 0x14D598C
    // Implemented from: Org.BouncyCastle.Crypto.IAsymmetricBlockCipher
    // Base method: System.Int32 IAsymmetricBlockCipher::GetOutputBlockSize()
    int GetOutputBlockSize();
    // public System.Byte[] ProcessBlock(System.Byte[] inBytes, System.Int32 inOff, System.Int32 inLen)
    // Offset: 0x14D5A64
    // Implemented from: Org.BouncyCastle.Crypto.IAsymmetricBlockCipher
    // Base method: System.Byte[] IAsymmetricBlockCipher::ProcessBlock(System.Byte[] inBytes, System.Int32 inOff, System.Int32 inLen)
    ::Array<uint8_t>* ProcessBlock(::Array<uint8_t>* inBytes, int inOff, int inLen);
  }; // Org.BouncyCastle.Crypto.Encodings.OaepEncoding
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Encodings::OaepEncoding*, "Org.BouncyCastle.Crypto.Encodings", "OaepEncoding");
#pragma pack(pop)
