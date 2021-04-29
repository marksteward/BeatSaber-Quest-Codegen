// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Crypto.IBasicAgreement
#include "Org/BouncyCastle/Crypto/IBasicAgreement.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Crypto::Parameters
namespace Org::BouncyCastle::Crypto::Parameters {
  // Forward declaring type: DHPrivateKeyParameters
  class DHPrivateKeyParameters;
  // Forward declaring type: DHParameters
  class DHParameters;
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
// Type namespace: Org.BouncyCastle.Crypto.Agreement
namespace Org::BouncyCastle::Crypto::Agreement {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.Agreement.DHBasicAgreement
  class DHBasicAgreement : public ::Il2CppObject/*, public Org::BouncyCastle::Crypto::IBasicAgreement*/ {
    public:
    // private Org.BouncyCastle.Crypto.Parameters.DHPrivateKeyParameters key
    // Size: 0x8
    // Offset: 0x10
    Org::BouncyCastle::Crypto::Parameters::DHPrivateKeyParameters* key;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Crypto::Parameters::DHPrivateKeyParameters*) == 0x8);
    // private Org.BouncyCastle.Crypto.Parameters.DHParameters dhParams
    // Size: 0x8
    // Offset: 0x18
    Org::BouncyCastle::Crypto::Parameters::DHParameters* dhParams;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Crypto::Parameters::DHParameters*) == 0x8);
    // Creating value type constructor for type: DHBasicAgreement
    DHBasicAgreement(Org::BouncyCastle::Crypto::Parameters::DHPrivateKeyParameters* key_ = {}, Org::BouncyCastle::Crypto::Parameters::DHParameters* dhParams_ = {}) noexcept : key{key_}, dhParams{dhParams_} {}
    // Creating interface conversion operator: operator Org::BouncyCastle::Crypto::IBasicAgreement
    operator Org::BouncyCastle::Crypto::IBasicAgreement() noexcept {
      return *reinterpret_cast<Org::BouncyCastle::Crypto::IBasicAgreement*>(this);
    }
    // public System.Void Init(Org.BouncyCastle.Crypto.ICipherParameters parameters)
    // Offset: 0x1867894
    void Init(Org::BouncyCastle::Crypto::ICipherParameters* parameters);
    // public System.Int32 GetFieldSize()
    // Offset: 0x186799C
    int GetFieldSize();
    // public Org.BouncyCastle.Math.BigInteger CalculateAgreement(Org.BouncyCastle.Crypto.ICipherParameters pubKey)
    // Offset: 0x18679E4
    Org::BouncyCastle::Math::BigInteger* CalculateAgreement(Org::BouncyCastle::Crypto::ICipherParameters* pubKey);
    // public System.Void .ctor()
    // Offset: 0x1867C48
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DHBasicAgreement* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Crypto::Agreement::DHBasicAgreement::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DHBasicAgreement*, creationType>()));
    }
  }; // Org.BouncyCastle.Crypto.Agreement.DHBasicAgreement
  #pragma pack(pop)
  static check_size<sizeof(DHBasicAgreement), 24 + sizeof(Org::BouncyCastle::Crypto::Parameters::DHParameters*)> __Org_BouncyCastle_Crypto_Agreement_DHBasicAgreementSizeCheck;
  static_assert(sizeof(DHBasicAgreement) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Agreement::DHBasicAgreement*, "Org.BouncyCastle.Crypto.Agreement", "DHBasicAgreement");
