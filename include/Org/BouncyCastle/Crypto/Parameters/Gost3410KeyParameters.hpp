// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Crypto.AsymmetricKeyParameter
#include "Org/BouncyCastle/Crypto/AsymmetricKeyParameter.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Crypto::Parameters
namespace Org::BouncyCastle::Crypto::Parameters {
  // Forward declaring type: Gost3410Parameters
  class Gost3410Parameters;
}
// Forward declaring namespace: Org::BouncyCastle::Asn1
namespace Org::BouncyCastle::Asn1 {
  // Forward declaring type: DerObjectIdentifier
  class DerObjectIdentifier;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Crypto.Parameters
namespace Org::BouncyCastle::Crypto::Parameters {
  // Autogenerated type: Org.BouncyCastle.Crypto.Parameters.Gost3410KeyParameters
  class Gost3410KeyParameters : public Org::BouncyCastle::Crypto::AsymmetricKeyParameter {
    public:
    // private readonly Org.BouncyCastle.Crypto.Parameters.Gost3410Parameters parameters
    // Offset: 0x18
    Org::BouncyCastle::Crypto::Parameters::Gost3410Parameters* parameters;
    // private readonly Org.BouncyCastle.Asn1.DerObjectIdentifier publicKeyParamSet
    // Offset: 0x20
    Org::BouncyCastle::Asn1::DerObjectIdentifier* publicKeyParamSet;
    // Deleting conversion operator: operator bool
    constexpr operator bool() const noexcept = delete;
    // protected System.Void .ctor(System.Boolean isPrivate, Org.BouncyCastle.Asn1.DerObjectIdentifier publicKeyParamSet)
    // Offset: 0xF4CC7C
    static Gost3410KeyParameters* New_ctor(bool isPrivate, Org::BouncyCastle::Asn1::DerObjectIdentifier* publicKeyParamSet);
    // public Org.BouncyCastle.Crypto.Parameters.Gost3410Parameters get_Parameters()
    // Offset: 0xF4CE1C
    Org::BouncyCastle::Crypto::Parameters::Gost3410Parameters* get_Parameters();
    // static private Org.BouncyCastle.Crypto.Parameters.Gost3410Parameters LookupParameters(Org.BouncyCastle.Asn1.DerObjectIdentifier publicKeyParamSet)
    // Offset: 0xF4CCCC
    static Org::BouncyCastle::Crypto::Parameters::Gost3410Parameters* LookupParameters(Org::BouncyCastle::Asn1::DerObjectIdentifier* publicKeyParamSet);
  }; // Org.BouncyCastle.Crypto.Parameters.Gost3410KeyParameters
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Parameters::Gost3410KeyParameters*, "Org.BouncyCastle.Crypto.Parameters", "Gost3410KeyParameters");
#pragma pack(pop)