// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Crypto.Parameters.DsaKeyParameters
#include "Org/BouncyCastle/Crypto/Parameters/DsaKeyParameters.hpp"
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
// Forward declaring namespace: Org::BouncyCastle::Crypto::Parameters
namespace Org::BouncyCastle::Crypto::Parameters {
  // Forward declaring type: DsaParameters
  class DsaParameters;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Crypto.Parameters
namespace Org::BouncyCastle::Crypto::Parameters {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.Parameters.DsaPublicKeyParameters
  class DsaPublicKeyParameters : public Org::BouncyCastle::Crypto::Parameters::DsaKeyParameters {
    public:
    // private readonly Org.BouncyCastle.Math.BigInteger y
    // Size: 0x8
    // Offset: 0x20
    Org::BouncyCastle::Math::BigInteger* y;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Math::BigInteger*) == 0x8);
    // Creating value type constructor for type: DsaPublicKeyParameters
    DsaPublicKeyParameters(Org::BouncyCastle::Math::BigInteger* y_ = {}) noexcept : y{y_} {}
    // static private Org.BouncyCastle.Math.BigInteger Validate(Org.BouncyCastle.Math.BigInteger y, Org.BouncyCastle.Crypto.Parameters.DsaParameters parameters)
    // Offset: 0x1259D50
    static Org::BouncyCastle::Math::BigInteger* Validate(Org::BouncyCastle::Math::BigInteger* y, Org::BouncyCastle::Crypto::Parameters::DsaParameters* parameters);
    // public System.Void .ctor(Org.BouncyCastle.Math.BigInteger y, Org.BouncyCastle.Crypto.Parameters.DsaParameters parameters)
    // Offset: 0x1259EB8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DsaPublicKeyParameters* New_ctor(Org::BouncyCastle::Math::BigInteger* y, Org::BouncyCastle::Crypto::Parameters::DsaParameters* parameters) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Crypto::Parameters::DsaPublicKeyParameters::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DsaPublicKeyParameters*, creationType>(y, parameters)));
    }
    // protected System.Boolean Equals(Org.BouncyCastle.Crypto.Parameters.DsaPublicKeyParameters other)
    // Offset: 0x125A01C
    bool Equals(Org::BouncyCastle::Crypto::Parameters::DsaPublicKeyParameters* other);
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x1259F6C
    // Implemented from: Org.BouncyCastle.Crypto.Parameters.DsaKeyParameters
    // Base method: System.Boolean DsaKeyParameters::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x125A078
    // Implemented from: Org.BouncyCastle.Crypto.Parameters.DsaKeyParameters
    // Base method: System.Int32 DsaKeyParameters::GetHashCode()
    int GetHashCode();
  }; // Org.BouncyCastle.Crypto.Parameters.DsaPublicKeyParameters
  #pragma pack(pop)
  static check_size<sizeof(DsaPublicKeyParameters), 32 + sizeof(Org::BouncyCastle::Math::BigInteger*)> __Org_BouncyCastle_Crypto_Parameters_DsaPublicKeyParametersSizeCheck;
  static_assert(sizeof(DsaPublicKeyParameters) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Parameters::DsaPublicKeyParameters*, "Org.BouncyCastle.Crypto.Parameters", "DsaPublicKeyParameters");
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Parameters::DsaPublicKeyParameters::Validate
// Il2CppName: Validate
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Parameters::DsaPublicKeyParameters::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Parameters::DsaPublicKeyParameters::Equals
// Il2CppName: Equals
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Parameters::DsaPublicKeyParameters::Equals
// Il2CppName: Equals
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Parameters::DsaPublicKeyParameters::GetHashCode
// Il2CppName: GetHashCode
// Cannot perform method pointer template specialization from operators!
