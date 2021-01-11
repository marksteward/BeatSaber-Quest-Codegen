// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Crypto.KeyGenerationParameters
#include "Org/BouncyCastle/Crypto/KeyGenerationParameters.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Crypto::Parameters
namespace Org::BouncyCastle::Crypto::Parameters {
  // Forward declaring type: DHParameters
  class DHParameters;
}
// Forward declaring namespace: Org::BouncyCastle::Security
namespace Org::BouncyCastle::Security {
  // Forward declaring type: SecureRandom
  class SecureRandom;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Crypto.Parameters
namespace Org::BouncyCastle::Crypto::Parameters {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.Parameters.DHKeyGenerationParameters
  // [] Offset: FFFFFFFF
  class DHKeyGenerationParameters : public Org::BouncyCastle::Crypto::KeyGenerationParameters {
    public:
    // Writing base type padding for base size: 0x1C to desired offset: 0x20
    char ___base_padding[0x4] = {};
    // private readonly Org.BouncyCastle.Crypto.Parameters.DHParameters parameters
    // Size: 0x8
    // Offset: 0x20
    Org::BouncyCastle::Crypto::Parameters::DHParameters* parameters;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Crypto::Parameters::DHParameters*) == 0x8);
    // Creating value type constructor for type: DHKeyGenerationParameters
    DHKeyGenerationParameters(Org::BouncyCastle::Crypto::Parameters::DHParameters* parameters_ = {}) noexcept : parameters{parameters_} {}
    // Creating conversion operator: operator Org::BouncyCastle::Crypto::Parameters::DHParameters*
    constexpr operator Org::BouncyCastle::Crypto::Parameters::DHParameters*() const noexcept {
      return parameters;
    }
    // public System.Void .ctor(Org.BouncyCastle.Security.SecureRandom random, Org.BouncyCastle.Crypto.Parameters.DHParameters parameters)
    // Offset: 0x1042748
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DHKeyGenerationParameters* New_ctor(Org::BouncyCastle::Security::SecureRandom* random, Org::BouncyCastle::Crypto::Parameters::DHParameters* parameters) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Crypto::Parameters::DHKeyGenerationParameters::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DHKeyGenerationParameters*, creationType>(random, parameters)));
    }
    // public Org.BouncyCastle.Crypto.Parameters.DHParameters get_Parameters()
    // Offset: 0x10427D0
    Org::BouncyCastle::Crypto::Parameters::DHParameters* get_Parameters();
    // static System.Int32 GetStrength(Org.BouncyCastle.Crypto.Parameters.DHParameters parameters)
    // Offset: 0x104279C
    static int GetStrength(Org::BouncyCastle::Crypto::Parameters::DHParameters* parameters);
  }; // Org.BouncyCastle.Crypto.Parameters.DHKeyGenerationParameters
  static check_size<sizeof(DHKeyGenerationParameters), 32 + sizeof(Org::BouncyCastle::Crypto::Parameters::DHParameters*)> __Org_BouncyCastle_Crypto_Parameters_DHKeyGenerationParametersSizeCheck;
  static_assert(sizeof(DHKeyGenerationParameters) == 0x28);
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Parameters::DHKeyGenerationParameters*, "Org.BouncyCastle.Crypto.Parameters", "DHKeyGenerationParameters");
