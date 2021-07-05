// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Crypto.Parameters.Gost3410KeyParameters
#include "Org/BouncyCastle/Crypto/Parameters/Gost3410KeyParameters.hpp"
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
  // Autogenerated type: Org.BouncyCastle.Crypto.Parameters.Gost3410PrivateKeyParameters
  class Gost3410PrivateKeyParameters : public Org::BouncyCastle::Crypto::Parameters::Gost3410KeyParameters {
    public:
    // private readonly Org.BouncyCastle.Math.BigInteger x
    // Size: 0x8
    // Offset: 0x28
    Org::BouncyCastle::Math::BigInteger* x;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Math::BigInteger*) == 0x8);
    // Creating value type constructor for type: Gost3410PrivateKeyParameters
    Gost3410PrivateKeyParameters(Org::BouncyCastle::Math::BigInteger* x_ = {}) noexcept : x{x_} {}
    // public System.Void .ctor(Org.BouncyCastle.Math.BigInteger x, Org.BouncyCastle.Asn1.DerObjectIdentifier publicKeyParamSet)
    // Offset: 0x125D174
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Gost3410PrivateKeyParameters* New_ctor(Org::BouncyCastle::Math::BigInteger* x, Org::BouncyCastle::Asn1::DerObjectIdentifier* publicKeyParamSet) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Crypto::Parameters::Gost3410PrivateKeyParameters::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Gost3410PrivateKeyParameters*, creationType>(x, publicKeyParamSet)));
    }
    // public Org.BouncyCastle.Math.BigInteger get_X()
    // Offset: 0x125D268
    Org::BouncyCastle::Math::BigInteger* get_X();
  }; // Org.BouncyCastle.Crypto.Parameters.Gost3410PrivateKeyParameters
  #pragma pack(pop)
  static check_size<sizeof(Gost3410PrivateKeyParameters), 40 + sizeof(Org::BouncyCastle::Math::BigInteger*)> __Org_BouncyCastle_Crypto_Parameters_Gost3410PrivateKeyParametersSizeCheck;
  static_assert(sizeof(Gost3410PrivateKeyParameters) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Parameters::Gost3410PrivateKeyParameters*, "Org.BouncyCastle.Crypto.Parameters", "Gost3410PrivateKeyParameters");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Parameters::Gost3410PrivateKeyParameters::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Parameters::Gost3410PrivateKeyParameters::get_X
// Il2CppName: get_X
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::BigInteger* (Org::BouncyCastle::Crypto::Parameters::Gost3410PrivateKeyParameters::*)()>(&Org::BouncyCastle::Crypto::Parameters::Gost3410PrivateKeyParameters::get_X)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Parameters::Gost3410PrivateKeyParameters*), "get_X", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
