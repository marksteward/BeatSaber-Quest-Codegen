// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Crypto.ISigner
#include "Org/BouncyCastle/Crypto/ISigner.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Crypto
namespace Org::BouncyCastle::Crypto {
  // Forward declaring type: IDigest
  class IDigest;
  // Forward declaring type: IAsymmetricBlockCipher
  class IAsymmetricBlockCipher;
  // Forward declaring type: ICipherParameters
  class ICipherParameters;
}
// Forward declaring namespace: Org::BouncyCastle::Crypto::Parameters
namespace Org::BouncyCastle::Crypto::Parameters {
  // Forward declaring type: RsaKeyParameters
  class RsaKeyParameters;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Crypto.Signers
namespace Org::BouncyCastle::Crypto::Signers {
  // Size: 0x38
  // Autogenerated type: Org.BouncyCastle.Crypto.Signers.X931Signer
  // [] Offset: FFFFFFFF
  class X931Signer : public ::Il2CppObject/*, public Org::BouncyCastle::Crypto::ISigner*/ {
    public:
    // private Org.BouncyCastle.Crypto.IDigest digest
    // Size: 0x8
    // Offset: 0x10
    Org::BouncyCastle::Crypto::IDigest* digest;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Crypto::IDigest*) == 0x8);
    // private Org.BouncyCastle.Crypto.IAsymmetricBlockCipher cipher
    // Size: 0x8
    // Offset: 0x18
    Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* cipher;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Crypto::IAsymmetricBlockCipher*) == 0x8);
    // private Org.BouncyCastle.Crypto.Parameters.RsaKeyParameters kParam
    // Size: 0x8
    // Offset: 0x20
    Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters* kParam;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters*) == 0x8);
    // private System.Int32 trailer
    // Size: 0x4
    // Offset: 0x28
    int trailer;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 keyBits
    // Size: 0x4
    // Offset: 0x2C
    int keyBits;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Byte[] block
    // Size: 0x8
    // Offset: 0x30
    ::Array<uint8_t>* block;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // Creating value type constructor for type: X931Signer
    X931Signer(Org::BouncyCastle::Crypto::IDigest* digest_ = {}, Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* cipher_ = {}, Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters* kParam_ = {}, int trailer_ = {}, int keyBits_ = {}, ::Array<uint8_t>* block_ = {}) noexcept : digest{digest_}, cipher{cipher_}, kParam{kParam_}, trailer{trailer_}, keyBits{keyBits_}, block{block_} {}
    // Creating interface conversion operator: operator Org::BouncyCastle::Crypto::ISigner
    operator Org::BouncyCastle::Crypto::ISigner() noexcept {
      return *reinterpret_cast<Org::BouncyCastle::Crypto::ISigner*>(this);
    }
    // public System.Void .ctor(Org.BouncyCastle.Crypto.IAsymmetricBlockCipher cipher, Org.BouncyCastle.Crypto.IDigest digest, System.Boolean isImplicit)
    // Offset: 0x1055690
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static X931Signer* New_ctor(Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* cipher, Org::BouncyCastle::Crypto::IDigest* digest, bool isImplicit) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Crypto::Signers::X931Signer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<X931Signer*, creationType>(cipher, digest, isImplicit)));
    }
    // public System.Void .ctor(Org.BouncyCastle.Crypto.IAsymmetricBlockCipher cipher, Org.BouncyCastle.Crypto.IDigest digest)
    // Offset: 0x10557BC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static X931Signer* New_ctor(Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* cipher, Org::BouncyCastle::Crypto::IDigest* digest) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Crypto::Signers::X931Signer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<X931Signer*, creationType>(cipher, digest)));
    }
    // private System.Void ClearBlock(System.Byte[] block)
    // Offset: 0x105594C
    void ClearBlock(::Array<uint8_t>* block);
    // private System.Void CreateSignatureBlock()
    // Offset: 0x1055C64
    void CreateSignatureBlock();
    // public System.Void Init(System.Boolean forSigning, Org.BouncyCastle.Crypto.ICipherParameters parameters)
    // Offset: 0x10557C4
    // Implemented from: Org.BouncyCastle.Crypto.ISigner
    // Base method: System.Void ISigner::Init(System.Boolean forSigning, Org.BouncyCastle.Crypto.ICipherParameters parameters)
    void Init(bool forSigning, Org::BouncyCastle::Crypto::ICipherParameters* parameters);
    // public System.Void BlockUpdate(System.Byte[] input, System.Int32 off, System.Int32 len)
    // Offset: 0x1055970
    // Implemented from: Org.BouncyCastle.Crypto.ISigner
    // Base method: System.Void ISigner::BlockUpdate(System.Byte[] input, System.Int32 off, System.Int32 len)
    void BlockUpdate(::Array<uint8_t>* input, int off, int len);
    // public System.Void Reset()
    // Offset: 0x1055A4C
    // Implemented from: Org.BouncyCastle.Crypto.ISigner
    // Base method: System.Void ISigner::Reset()
    void Reset();
    // public System.Byte[] GenerateSignature()
    // Offset: 0x1055B00
    // Implemented from: Org.BouncyCastle.Crypto.ISigner
    // Base method: System.Byte[] ISigner::GenerateSignature()
    ::Array<uint8_t>* GenerateSignature();
  }; // Org.BouncyCastle.Crypto.Signers.X931Signer
  static check_size<sizeof(X931Signer), 48 + sizeof(::Array<uint8_t>*)> __Org_BouncyCastle_Crypto_Signers_X931SignerSizeCheck;
  static_assert(sizeof(X931Signer) == 0x38);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Signers::X931Signer*, "Org.BouncyCastle.Crypto.Signers", "X931Signer");
#pragma pack(pop)
