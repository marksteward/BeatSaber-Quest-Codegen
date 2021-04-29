// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Crypto
namespace Org::BouncyCastle::Crypto {
  // Forward declaring type: IBasicAgreement
  class IBasicAgreement;
  // Forward declaring type: IDerivationFunction
  class IDerivationFunction;
  // Forward declaring type: IMac
  class IMac;
  // Forward declaring type: BufferedBlockCipher
  class BufferedBlockCipher;
  // Forward declaring type: ICipherParameters
  class ICipherParameters;
}
// Forward declaring namespace: Org::BouncyCastle::Crypto::Parameters
namespace Org::BouncyCastle::Crypto::Parameters {
  // Forward declaring type: IesParameters
  class IesParameters;
  // Forward declaring type: KdfParameters
  class KdfParameters;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Crypto.Engines
namespace Org::BouncyCastle::Crypto::Engines {
  // Size: 0x58
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.Engines.IesEngine
  class IesEngine : public ::Il2CppObject {
    public:
    // private readonly Org.BouncyCastle.Crypto.IBasicAgreement agree
    // Size: 0x8
    // Offset: 0x10
    Org::BouncyCastle::Crypto::IBasicAgreement* agree;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Crypto::IBasicAgreement*) == 0x8);
    // private readonly Org.BouncyCastle.Crypto.IDerivationFunction kdf
    // Size: 0x8
    // Offset: 0x18
    Org::BouncyCastle::Crypto::IDerivationFunction* kdf;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Crypto::IDerivationFunction*) == 0x8);
    // private readonly Org.BouncyCastle.Crypto.IMac mac
    // Size: 0x8
    // Offset: 0x20
    Org::BouncyCastle::Crypto::IMac* mac;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Crypto::IMac*) == 0x8);
    // private readonly Org.BouncyCastle.Crypto.BufferedBlockCipher cipher
    // Size: 0x8
    // Offset: 0x28
    Org::BouncyCastle::Crypto::BufferedBlockCipher* cipher;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Crypto::BufferedBlockCipher*) == 0x8);
    // private readonly System.Byte[] macBuf
    // Size: 0x8
    // Offset: 0x30
    ::Array<uint8_t>* macBuf;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // private System.Boolean forEncryption
    // Size: 0x1
    // Offset: 0x38
    bool forEncryption;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: forEncryption and: privParam
    char __padding5[0x7] = {};
    // private Org.BouncyCastle.Crypto.ICipherParameters privParam
    // Size: 0x8
    // Offset: 0x40
    Org::BouncyCastle::Crypto::ICipherParameters* privParam;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Crypto::ICipherParameters*) == 0x8);
    // private Org.BouncyCastle.Crypto.ICipherParameters pubParam
    // Size: 0x8
    // Offset: 0x48
    Org::BouncyCastle::Crypto::ICipherParameters* pubParam;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Crypto::ICipherParameters*) == 0x8);
    // private Org.BouncyCastle.Crypto.Parameters.IesParameters param
    // Size: 0x8
    // Offset: 0x50
    Org::BouncyCastle::Crypto::Parameters::IesParameters* param;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Crypto::Parameters::IesParameters*) == 0x8);
    // Creating value type constructor for type: IesEngine
    IesEngine(Org::BouncyCastle::Crypto::IBasicAgreement* agree_ = {}, Org::BouncyCastle::Crypto::IDerivationFunction* kdf_ = {}, Org::BouncyCastle::Crypto::IMac* mac_ = {}, Org::BouncyCastle::Crypto::BufferedBlockCipher* cipher_ = {}, ::Array<uint8_t>* macBuf_ = {}, bool forEncryption_ = {}, Org::BouncyCastle::Crypto::ICipherParameters* privParam_ = {}, Org::BouncyCastle::Crypto::ICipherParameters* pubParam_ = {}, Org::BouncyCastle::Crypto::Parameters::IesParameters* param_ = {}) noexcept : agree{agree_}, kdf{kdf_}, mac{mac_}, cipher{cipher_}, macBuf{macBuf_}, forEncryption{forEncryption_}, privParam{privParam_}, pubParam{pubParam_}, param{param_} {}
    // public System.Void .ctor(Org.BouncyCastle.Crypto.IBasicAgreement agree, Org.BouncyCastle.Crypto.IDerivationFunction kdf, Org.BouncyCastle.Crypto.IMac mac)
    // Offset: 0x1BBA780
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IesEngine* New_ctor(Org::BouncyCastle::Crypto::IBasicAgreement* agree, Org::BouncyCastle::Crypto::IDerivationFunction* kdf, Org::BouncyCastle::Crypto::IMac* mac) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Crypto::Engines::IesEngine::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IesEngine*, creationType>(agree, kdf, mac)));
    }
    // private System.Byte[] DecryptBlock(System.Byte[] in_enc, System.Int32 inOff, System.Int32 inLen, System.Byte[] z)
    // Offset: 0x1BBA880
    ::Array<uint8_t>* DecryptBlock(::Array<uint8_t>* in_enc, int inOff, int inLen, ::Array<uint8_t>* z);
    // private System.Byte[] EncryptBlock(System.Byte[] input, System.Int32 inOff, System.Int32 inLen, System.Byte[] z)
    // Offset: 0x1BBB094
    ::Array<uint8_t>* EncryptBlock(::Array<uint8_t>* input, int inOff, int inLen, ::Array<uint8_t>* z);
    // private System.Byte[] GenerateKdfBytes(Org.BouncyCastle.Crypto.Parameters.KdfParameters kParam, System.Int32 length)
    // Offset: 0x1BBAF28
    ::Array<uint8_t>* GenerateKdfBytes(Org::BouncyCastle::Crypto::Parameters::KdfParameters* kParam, int length);
    // public System.Byte[] ProcessBlock(System.Byte[] input, System.Int32 inOff, System.Int32 inLen)
    // Offset: 0x1BBB698
    ::Array<uint8_t>* ProcessBlock(::Array<uint8_t>* input, int inOff, int inLen);
  }; // Org.BouncyCastle.Crypto.Engines.IesEngine
  #pragma pack(pop)
  static check_size<sizeof(IesEngine), 80 + sizeof(Org::BouncyCastle::Crypto::Parameters::IesParameters*)> __Org_BouncyCastle_Crypto_Engines_IesEngineSizeCheck;
  static_assert(sizeof(IesEngine) == 0x58);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Engines::IesEngine*, "Org.BouncyCastle.Crypto.Engines", "IesEngine");
