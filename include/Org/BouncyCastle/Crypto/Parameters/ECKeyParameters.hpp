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
  // Forward declaring type: ECDomainParameters
  class ECDomainParameters;
}
// Forward declaring namespace: Org::BouncyCastle::Asn1
namespace Org::BouncyCastle::Asn1 {
  // Forward declaring type: DerObjectIdentifier
  class DerObjectIdentifier;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Crypto.Parameters
namespace Org::BouncyCastle::Crypto::Parameters {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.Parameters.ECKeyParameters
  // [] Offset: FFFFFFFF
  class ECKeyParameters : public Org::BouncyCastle::Crypto::AsymmetricKeyParameter {
    public:
    // Writing base type padding for base size: 0x11 to desired offset: 0x18
    char ___base_padding[0x7] = {};
    // private readonly System.String algorithm
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* algorithm;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private readonly Org.BouncyCastle.Crypto.Parameters.ECDomainParameters parameters
    // Size: 0x8
    // Offset: 0x20
    Org::BouncyCastle::Crypto::Parameters::ECDomainParameters* parameters;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Crypto::Parameters::ECDomainParameters*) == 0x8);
    // private readonly Org.BouncyCastle.Asn1.DerObjectIdentifier publicKeyParamSet
    // Size: 0x8
    // Offset: 0x28
    Org::BouncyCastle::Asn1::DerObjectIdentifier* publicKeyParamSet;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Asn1::DerObjectIdentifier*) == 0x8);
    // Creating value type constructor for type: ECKeyParameters
    ECKeyParameters(::Il2CppString* algorithm_ = {}, Org::BouncyCastle::Crypto::Parameters::ECDomainParameters* parameters_ = {}, Org::BouncyCastle::Asn1::DerObjectIdentifier* publicKeyParamSet_ = {}) noexcept : algorithm{algorithm_}, parameters{parameters_}, publicKeyParamSet{publicKeyParamSet_} {}
    // Deleting conversion operator: operator bool
    constexpr operator bool() const noexcept = delete;
    // Get static field: static private readonly System.String[] algorithms
    static ::Array<::Il2CppString*>* _get_algorithms();
    // Set static field: static private readonly System.String[] algorithms
    static void _set_algorithms(::Array<::Il2CppString*>* value);
    // protected System.Void .ctor(System.String algorithm, System.Boolean isPrivate, Org.BouncyCastle.Crypto.Parameters.ECDomainParameters parameters)
    // Offset: 0x10461E4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ECKeyParameters* New_ctor(::Il2CppString* algorithm, bool isPrivate, Org::BouncyCastle::Crypto::Parameters::ECDomainParameters* parameters) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Crypto::Parameters::ECKeyParameters::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ECKeyParameters*, creationType>(algorithm, isPrivate, parameters)));
    }
    // protected System.Void .ctor(System.String algorithm, System.Boolean isPrivate, Org.BouncyCastle.Asn1.DerObjectIdentifier publicKeyParamSet)
    // Offset: 0x1046420
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ECKeyParameters* New_ctor(::Il2CppString* algorithm, bool isPrivate, Org::BouncyCastle::Asn1::DerObjectIdentifier* publicKeyParamSet) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Crypto::Parameters::ECKeyParameters::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ECKeyParameters*, creationType>(algorithm, isPrivate, publicKeyParamSet)));
    }
    // public System.String get_AlgorithmName()
    // Offset: 0x1046634
    ::Il2CppString* get_AlgorithmName();
    // public Org.BouncyCastle.Crypto.Parameters.ECDomainParameters get_Parameters()
    // Offset: 0x104663C
    Org::BouncyCastle::Crypto::Parameters::ECDomainParameters* get_Parameters();
    // public Org.BouncyCastle.Asn1.DerObjectIdentifier get_PublicKeyParamSet()
    // Offset: 0x1046644
    Org::BouncyCastle::Asn1::DerObjectIdentifier* get_PublicKeyParamSet();
    // protected System.Boolean Equals(Org.BouncyCastle.Crypto.Parameters.ECKeyParameters other)
    // Offset: 0x1046704
    bool Equals(Org::BouncyCastle::Crypto::Parameters::ECKeyParameters* other);
    // static System.String VerifyAlgorithmName(System.String algorithm)
    // Offset: 0x10462F4
    static ::Il2CppString* VerifyAlgorithmName(::Il2CppString* algorithm);
    // static Org.BouncyCastle.Crypto.Parameters.ECDomainParameters LookupParameters(Org.BouncyCastle.Asn1.DerObjectIdentifier publicKeyParamSet)
    // Offset: 0x1046548
    static Org::BouncyCastle::Crypto::Parameters::ECDomainParameters* LookupParameters(Org::BouncyCastle::Asn1::DerObjectIdentifier* publicKeyParamSet);
    // static private System.Void .cctor()
    // Offset: 0x10467AC
    static void _cctor();
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x104664C
    // Implemented from: Org.BouncyCastle.Crypto.AsymmetricKeyParameter
    // Base method: System.Boolean AsymmetricKeyParameter::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x1046764
    // Implemented from: Org.BouncyCastle.Crypto.AsymmetricKeyParameter
    // Base method: System.Int32 AsymmetricKeyParameter::GetHashCode()
    int GetHashCode();
  }; // Org.BouncyCastle.Crypto.Parameters.ECKeyParameters
  static check_size<sizeof(ECKeyParameters), 40 + sizeof(Org::BouncyCastle::Asn1::DerObjectIdentifier*)> __Org_BouncyCastle_Crypto_Parameters_ECKeyParametersSizeCheck;
  static_assert(sizeof(ECKeyParameters) == 0x30);
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Parameters::ECKeyParameters*, "Org.BouncyCastle.Crypto.Parameters", "ECKeyParameters");
