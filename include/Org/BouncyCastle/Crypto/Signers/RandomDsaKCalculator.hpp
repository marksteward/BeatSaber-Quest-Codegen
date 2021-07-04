// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Crypto.Signers.IDsaKCalculator
#include "Org/BouncyCastle/Crypto/Signers/IDsaKCalculator.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Math
namespace Org::BouncyCastle::Math {
  // Forward declaring type: BigInteger
  class BigInteger;
}
// Forward declaring namespace: Org::BouncyCastle::Security
namespace Org::BouncyCastle::Security {
  // Forward declaring type: SecureRandom
  class SecureRandom;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Crypto.Signers
namespace Org::BouncyCastle::Crypto::Signers {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.Signers.RandomDsaKCalculator
  class RandomDsaKCalculator : public ::Il2CppObject/*, public Org::BouncyCastle::Crypto::Signers::IDsaKCalculator*/ {
    public:
    // private Org.BouncyCastle.Math.BigInteger q
    // Size: 0x8
    // Offset: 0x10
    Org::BouncyCastle::Math::BigInteger* q;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Math::BigInteger*) == 0x8);
    // private Org.BouncyCastle.Security.SecureRandom random
    // Size: 0x8
    // Offset: 0x18
    Org::BouncyCastle::Security::SecureRandom* random;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Security::SecureRandom*) == 0x8);
    // Creating value type constructor for type: RandomDsaKCalculator
    RandomDsaKCalculator(Org::BouncyCastle::Math::BigInteger* q_ = {}, Org::BouncyCastle::Security::SecureRandom* random_ = {}) noexcept : q{q_}, random{random_} {}
    // Creating interface conversion operator: operator Org::BouncyCastle::Crypto::Signers::IDsaKCalculator
    operator Org::BouncyCastle::Crypto::Signers::IDsaKCalculator() noexcept {
      return *reinterpret_cast<Org::BouncyCastle::Crypto::Signers::IDsaKCalculator*>(this);
    }
    // public System.Boolean get_IsDeterministic()
    // Offset: 0x1266D7C
    bool get_IsDeterministic();
    // public System.Void Init(Org.BouncyCastle.Math.BigInteger n, Org.BouncyCastle.Security.SecureRandom random)
    // Offset: 0x1266D84
    void Init(Org::BouncyCastle::Math::BigInteger* n, Org::BouncyCastle::Security::SecureRandom* random);
    // public System.Void Init(Org.BouncyCastle.Math.BigInteger n, Org.BouncyCastle.Math.BigInteger d, System.Byte[] message)
    // Offset: 0x1266D8C
    void Init(Org::BouncyCastle::Math::BigInteger* n, Org::BouncyCastle::Math::BigInteger* d, ::Array<uint8_t>* message);
    // public Org.BouncyCastle.Math.BigInteger NextK()
    // Offset: 0x1266DF8
    Org::BouncyCastle::Math::BigInteger* NextK();
    // public System.Void .ctor()
    // Offset: 0x125FEE0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RandomDsaKCalculator* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Crypto::Signers::RandomDsaKCalculator::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RandomDsaKCalculator*, creationType>()));
    }
  }; // Org.BouncyCastle.Crypto.Signers.RandomDsaKCalculator
  #pragma pack(pop)
  static check_size<sizeof(RandomDsaKCalculator), 24 + sizeof(Org::BouncyCastle::Security::SecureRandom*)> __Org_BouncyCastle_Crypto_Signers_RandomDsaKCalculatorSizeCheck;
  static_assert(sizeof(RandomDsaKCalculator) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Signers::RandomDsaKCalculator*, "Org.BouncyCastle.Crypto.Signers", "RandomDsaKCalculator");
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Signers::RandomDsaKCalculator::get_IsDeterministic
// Il2CppName: get_IsDeterministic
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Signers::RandomDsaKCalculator::Init
// Il2CppName: Init
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Signers::RandomDsaKCalculator::Init
// Il2CppName: Init
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Signers::RandomDsaKCalculator::NextK
// Il2CppName: NextK
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Signers::RandomDsaKCalculator::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
