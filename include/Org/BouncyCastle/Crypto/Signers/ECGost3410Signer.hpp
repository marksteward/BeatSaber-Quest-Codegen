// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Crypto.IDsaExt
#include "Org/BouncyCastle/Crypto/IDsaExt.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Crypto::Parameters
namespace Org::BouncyCastle::Crypto::Parameters {
  // Forward declaring type: ECKeyParameters
  class ECKeyParameters;
}
// Forward declaring namespace: Org::BouncyCastle::Security
namespace Org::BouncyCastle::Security {
  // Forward declaring type: SecureRandom
  class SecureRandom;
}
// Forward declaring namespace: Org::BouncyCastle::Math::EC::Multiplier
namespace Org::BouncyCastle::Math::EC::Multiplier {
  // Forward declaring type: ECMultiplier
  class ECMultiplier;
}
// Forward declaring namespace: Org::BouncyCastle::Crypto
namespace Org::BouncyCastle::Crypto {
  // Forward declaring type: ICipherParameters
  class ICipherParameters;
}
// Forward declaring namespace: Org::BouncyCastle::Math
namespace Org::BouncyCastle::Math {
  // Forward declaring type: BigInteger
  class BigInteger;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Crypto.Signers
namespace Org::BouncyCastle::Crypto::Signers {
  // Size: 0x21
  // Autogenerated type: Org.BouncyCastle.Crypto.Signers.ECGost3410Signer
  // [] Offset: FFFFFFFF
  class ECGost3410Signer : public ::Il2CppObject/*, public Org::BouncyCastle::Crypto::IDsaExt*/ {
    public:
    // private Org.BouncyCastle.Crypto.Parameters.ECKeyParameters key
    // Size: 0x8
    // Offset: 0x10
    Org::BouncyCastle::Crypto::Parameters::ECKeyParameters* key;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Crypto::Parameters::ECKeyParameters*) == 0x8);
    // private Org.BouncyCastle.Security.SecureRandom random
    // Size: 0x8
    // Offset: 0x18
    Org::BouncyCastle::Security::SecureRandom* random;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Security::SecureRandom*) == 0x8);
    // private System.Boolean forSigning
    // Size: 0x1
    // Offset: 0x20
    bool forSigning;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: ECGost3410Signer
    ECGost3410Signer(Org::BouncyCastle::Crypto::Parameters::ECKeyParameters* key_ = {}, Org::BouncyCastle::Security::SecureRandom* random_ = {}, bool forSigning_ = {}) noexcept : key{key_}, random{random_}, forSigning{forSigning_} {}
    // Creating interface conversion operator: operator Org::BouncyCastle::Crypto::IDsaExt
    operator Org::BouncyCastle::Crypto::IDsaExt() noexcept {
      return *reinterpret_cast<Org::BouncyCastle::Crypto::IDsaExt*>(this);
    }
    // protected Org.BouncyCastle.Math.EC.Multiplier.ECMultiplier CreateBasePointMultiplier()
    // Offset: 0x104D868
    Org::BouncyCastle::Math::EC::Multiplier::ECMultiplier* CreateBasePointMultiplier();
    // public System.Void Init(System.Boolean forSigning, Org.BouncyCastle.Crypto.ICipherParameters parameters)
    // Offset: 0x104D12C
    // Implemented from: Org.BouncyCastle.Crypto.IDsa
    // Base method: System.Void IDsa::Init(System.Boolean forSigning, Org.BouncyCastle.Crypto.ICipherParameters parameters)
    void Init(bool forSigning, Org::BouncyCastle::Crypto::ICipherParameters* parameters);
    // public Org.BouncyCastle.Math.BigInteger get_Order()
    // Offset: 0x104D2DC
    // Implemented from: Org.BouncyCastle.Crypto.IDsaExt
    // Base method: Org.BouncyCastle.Math.BigInteger IDsaExt::get_Order()
    Org::BouncyCastle::Math::BigInteger* get_Order();
    // public Org.BouncyCastle.Math.BigInteger[] GenerateSignature(System.Byte[] message)
    // Offset: 0x104D304
    // Implemented from: Org.BouncyCastle.Crypto.IDsa
    // Base method: Org.BouncyCastle.Math.BigInteger[] IDsa::GenerateSignature(System.Byte[] message)
    ::Array<Org::BouncyCastle::Math::BigInteger*>* GenerateSignature(::Array<uint8_t>* message);
    // public System.Void .ctor()
    // Offset: 0x104D8C4
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ECGost3410Signer* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Crypto::Signers::ECGost3410Signer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ECGost3410Signer*, creationType>()));
    }
  }; // Org.BouncyCastle.Crypto.Signers.ECGost3410Signer
  static check_size<sizeof(ECGost3410Signer), 32 + sizeof(bool)> __Org_BouncyCastle_Crypto_Signers_ECGost3410SignerSizeCheck;
  static_assert(sizeof(ECGost3410Signer) == 0x21);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Signers::ECGost3410Signer*, "Org.BouncyCastle.Crypto.Signers", "ECGost3410Signer");
#pragma pack(pop)
