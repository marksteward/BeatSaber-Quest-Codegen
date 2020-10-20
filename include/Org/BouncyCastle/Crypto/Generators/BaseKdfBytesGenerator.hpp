// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Crypto.IDerivationFunction
#include "Org/BouncyCastle/Crypto/IDerivationFunction.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Crypto
namespace Org::BouncyCastle::Crypto {
  // Forward declaring type: IDigest
  class IDigest;
  // Forward declaring type: IDerivationParameters
  class IDerivationParameters;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Crypto.Generators
namespace Org::BouncyCastle::Crypto::Generators {
  // Autogenerated type: Org.BouncyCastle.Crypto.Generators.BaseKdfBytesGenerator
  class BaseKdfBytesGenerator : public ::Il2CppObject/*, public Org::BouncyCastle::Crypto::IDerivationFunction*/ {
    public:
    // private System.Int32 counterStart
    // Offset: 0x10
    int counterStart;
    // private Org.BouncyCastle.Crypto.IDigest digest
    // Offset: 0x18
    Org::BouncyCastle::Crypto::IDigest* digest;
    // private System.Byte[] shared
    // Offset: 0x20
    ::Array<uint8_t>* shared;
    // private System.Byte[] iv
    // Offset: 0x28
    ::Array<uint8_t>* iv;
    // Creating interface conversion operator: operator Org::BouncyCastle::Crypto::IDerivationFunction
    operator Org::BouncyCastle::Crypto::IDerivationFunction() noexcept {
      return *reinterpret_cast<Org::BouncyCastle::Crypto::IDerivationFunction*>(this);
    }
    // public System.Void .ctor(System.Int32 counterStart, Org.BouncyCastle.Crypto.IDigest digest)
    // Offset: 0x14AC4A4
    static BaseKdfBytesGenerator* New_ctor(int counterStart, Org::BouncyCastle::Crypto::IDigest* digest);
    // public System.Void Init(Org.BouncyCastle.Crypto.IDerivationParameters parameters)
    // Offset: 0x14AC4E8
    // Implemented from: Org.BouncyCastle.Crypto.IDerivationFunction
    // Base method: System.Void IDerivationFunction::Init(Org.BouncyCastle.Crypto.IDerivationParameters parameters)
    void Init(Org::BouncyCastle::Crypto::IDerivationParameters* parameters);
    // public System.Int32 GenerateBytes(System.Byte[] output, System.Int32 outOff, System.Int32 length)
    // Offset: 0x14AC610
    // Implemented from: Org.BouncyCastle.Crypto.IDerivationFunction
    // Base method: System.Int32 IDerivationFunction::GenerateBytes(System.Byte[] output, System.Int32 outOff, System.Int32 length)
    int GenerateBytes(::Array<uint8_t>* output, int outOff, int length);
  }; // Org.BouncyCastle.Crypto.Generators.BaseKdfBytesGenerator
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Generators::BaseKdfBytesGenerator*, "Org.BouncyCastle.Crypto.Generators", "BaseKdfBytesGenerator");
#pragma pack(pop)
