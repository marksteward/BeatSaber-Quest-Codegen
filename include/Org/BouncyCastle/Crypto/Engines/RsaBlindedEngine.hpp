// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Crypto.IAsymmetricBlockCipher
#include "Org/BouncyCastle/Crypto/IAsymmetricBlockCipher.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Crypto
namespace Org::BouncyCastle::Crypto {
  // Forward declaring type: IRsa
  class IRsa;
  // Forward declaring type: ICipherParameters
  class ICipherParameters;
}
// Forward declaring namespace: Org::BouncyCastle::Crypto::Parameters
namespace Org::BouncyCastle::Crypto::Parameters {
  // Forward declaring type: RsaKeyParameters
  class RsaKeyParameters;
}
// Forward declaring namespace: Org::BouncyCastle::Security
namespace Org::BouncyCastle::Security {
  // Forward declaring type: SecureRandom
  class SecureRandom;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Crypto.Engines
namespace Org::BouncyCastle::Crypto::Engines {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.Engines.RsaBlindedEngine
  class RsaBlindedEngine : public ::Il2CppObject/*, public Org::BouncyCastle::Crypto::IAsymmetricBlockCipher*/ {
    public:
    // private readonly Org.BouncyCastle.Crypto.IRsa core
    // Size: 0x8
    // Offset: 0x10
    Org::BouncyCastle::Crypto::IRsa* core;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Crypto::IRsa*) == 0x8);
    // private Org.BouncyCastle.Crypto.Parameters.RsaKeyParameters key
    // Size: 0x8
    // Offset: 0x18
    Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters* key;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters*) == 0x8);
    // private Org.BouncyCastle.Security.SecureRandom random
    // Size: 0x8
    // Offset: 0x20
    Org::BouncyCastle::Security::SecureRandom* random;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Security::SecureRandom*) == 0x8);
    // Creating value type constructor for type: RsaBlindedEngine
    RsaBlindedEngine(Org::BouncyCastle::Crypto::IRsa* core_ = {}, Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters* key_ = {}, Org::BouncyCastle::Security::SecureRandom* random_ = {}) noexcept : core{core_}, key{key_}, random{random_} {}
    // Creating interface conversion operator: operator Org::BouncyCastle::Crypto::IAsymmetricBlockCipher
    operator Org::BouncyCastle::Crypto::IAsymmetricBlockCipher() noexcept {
      return *reinterpret_cast<Org::BouncyCastle::Crypto::IAsymmetricBlockCipher*>(this);
    }
    // public System.Void .ctor(Org.BouncyCastle.Crypto.IRsa rsa)
    // Offset: 0x1E47488
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RsaBlindedEngine* New_ctor(Org::BouncyCastle::Crypto::IRsa* rsa) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Crypto::Engines::RsaBlindedEngine::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RsaBlindedEngine*, creationType>(rsa)));
    }
    // public System.Void Init(System.Boolean forEncryption, Org.BouncyCastle.Crypto.ICipherParameters param)
    // Offset: 0x1E474B4
    void Init(bool forEncryption, Org::BouncyCastle::Crypto::ICipherParameters* param);
    // public System.Int32 GetInputBlockSize()
    // Offset: 0x1E476DC
    int GetInputBlockSize();
    // public System.Int32 GetOutputBlockSize()
    // Offset: 0x1E47790
    int GetOutputBlockSize();
    // public System.Byte[] ProcessBlock(System.Byte[] inBuf, System.Int32 inOff, System.Int32 inLen)
    // Offset: 0x1E47844
    ::Array<uint8_t>* ProcessBlock(::Array<uint8_t>* inBuf, int inOff, int inLen);
    // public System.Void .ctor()
    // Offset: 0x1E47414
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RsaBlindedEngine* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Crypto::Engines::RsaBlindedEngine::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RsaBlindedEngine*, creationType>()));
    }
  }; // Org.BouncyCastle.Crypto.Engines.RsaBlindedEngine
  #pragma pack(pop)
  static check_size<sizeof(RsaBlindedEngine), 32 + sizeof(Org::BouncyCastle::Security::SecureRandom*)> __Org_BouncyCastle_Crypto_Engines_RsaBlindedEngineSizeCheck;
  static_assert(sizeof(RsaBlindedEngine) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Engines::RsaBlindedEngine*, "Org.BouncyCastle.Crypto.Engines", "RsaBlindedEngine");
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::RsaBlindedEngine::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::RsaBlindedEngine::Init
// Il2CppName: Init
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::RsaBlindedEngine::GetInputBlockSize
// Il2CppName: GetInputBlockSize
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::RsaBlindedEngine::GetOutputBlockSize
// Il2CppName: GetOutputBlockSize
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::RsaBlindedEngine::ProcessBlock
// Il2CppName: ProcessBlock
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::RsaBlindedEngine::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
