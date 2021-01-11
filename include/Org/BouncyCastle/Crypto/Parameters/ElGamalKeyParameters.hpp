// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Crypto.AsymmetricKeyParameter
#include "Org/BouncyCastle/Crypto/AsymmetricKeyParameter.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Crypto::Parameters
namespace Org::BouncyCastle::Crypto::Parameters {
  // Forward declaring type: ElGamalParameters
  class ElGamalParameters;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Crypto.Parameters
namespace Org::BouncyCastle::Crypto::Parameters {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.Parameters.ElGamalKeyParameters
  // [] Offset: FFFFFFFF
  class ElGamalKeyParameters : public Org::BouncyCastle::Crypto::AsymmetricKeyParameter {
    public:
    // Writing base type padding for base size: 0x11 to desired offset: 0x18
    char ___base_padding[0x7] = {};
    // private readonly Org.BouncyCastle.Crypto.Parameters.ElGamalParameters parameters
    // Size: 0x8
    // Offset: 0x18
    Org::BouncyCastle::Crypto::Parameters::ElGamalParameters* parameters;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Crypto::Parameters::ElGamalParameters*) == 0x8);
    // Creating value type constructor for type: ElGamalKeyParameters
    ElGamalKeyParameters(Org::BouncyCastle::Crypto::Parameters::ElGamalParameters* parameters_ = {}) noexcept : parameters{parameters_} {}
    // Deleting conversion operator: operator bool
    constexpr operator bool() const noexcept = delete;
    // protected System.Void .ctor(System.Boolean isPrivate, Org.BouncyCastle.Crypto.Parameters.ElGamalParameters parameters)
    // Offset: 0x1047E48
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ElGamalKeyParameters* New_ctor(bool isPrivate, Org::BouncyCastle::Crypto::Parameters::ElGamalParameters* parameters) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Crypto::Parameters::ElGamalKeyParameters::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ElGamalKeyParameters*, creationType>(isPrivate, parameters)));
    }
    // public Org.BouncyCastle.Crypto.Parameters.ElGamalParameters get_Parameters()
    // Offset: 0x1047E80
    Org::BouncyCastle::Crypto::Parameters::ElGamalParameters* get_Parameters();
    // protected System.Boolean Equals(Org.BouncyCastle.Crypto.Parameters.ElGamalKeyParameters other)
    // Offset: 0x1047F38
    bool Equals(Org::BouncyCastle::Crypto::Parameters::ElGamalKeyParameters* other);
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x1047E88
    // Implemented from: Org.BouncyCastle.Crypto.AsymmetricKeyParameter
    // Base method: System.Boolean AsymmetricKeyParameter::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x1047F90
    // Implemented from: Org.BouncyCastle.Crypto.AsymmetricKeyParameter
    // Base method: System.Int32 AsymmetricKeyParameter::GetHashCode()
    int GetHashCode();
  }; // Org.BouncyCastle.Crypto.Parameters.ElGamalKeyParameters
  static check_size<sizeof(ElGamalKeyParameters), 24 + sizeof(Org::BouncyCastle::Crypto::Parameters::ElGamalParameters*)> __Org_BouncyCastle_Crypto_Parameters_ElGamalKeyParametersSizeCheck;
  static_assert(sizeof(ElGamalKeyParameters) == 0x20);
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Parameters::ElGamalKeyParameters*, "Org.BouncyCastle.Crypto.Parameters", "ElGamalKeyParameters");
