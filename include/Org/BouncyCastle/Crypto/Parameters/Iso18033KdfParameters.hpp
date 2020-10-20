// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Crypto.IDerivationParameters
#include "Org/BouncyCastle/Crypto/IDerivationParameters.hpp"
// Completed includes
// Type namespace: Org.BouncyCastle.Crypto.Parameters
namespace Org::BouncyCastle::Crypto::Parameters {
  // Autogenerated type: Org.BouncyCastle.Crypto.Parameters.Iso18033KdfParameters
  class Iso18033KdfParameters : public ::Il2CppObject/*, public Org::BouncyCastle::Crypto::IDerivationParameters*/ {
    public:
    // private System.Byte[] seed
    // Offset: 0x10
    ::Array<uint8_t>* seed;
    // Creating interface conversion operator: operator Org::BouncyCastle::Crypto::IDerivationParameters
    operator Org::BouncyCastle::Crypto::IDerivationParameters() noexcept {
      return *reinterpret_cast<Org::BouncyCastle::Crypto::IDerivationParameters*>(this);
    }
    // Creating conversion operator: operator ::Array<uint8_t>*
    constexpr operator ::Array<uint8_t>*() const noexcept {
      return seed;
    }
    // public System.Byte[] GetSeed()
    // Offset: 0xF4D30C
    ::Array<uint8_t>* GetSeed();
  }; // Org.BouncyCastle.Crypto.Parameters.Iso18033KdfParameters
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Parameters::Iso18033KdfParameters*, "Org.BouncyCastle.Crypto.Parameters", "Iso18033KdfParameters");
#pragma pack(pop)
