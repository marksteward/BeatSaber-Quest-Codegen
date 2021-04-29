// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Crypto.ICipherParameters
#include "Org/BouncyCastle/Crypto/ICipherParameters.hpp"
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
  // Forward declaring type: Gost3410ValidationParameters
  class Gost3410ValidationParameters;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Crypto.Parameters
namespace Org::BouncyCastle::Crypto::Parameters {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.Parameters.Gost3410Parameters
  class Gost3410Parameters : public ::Il2CppObject/*, public Org::BouncyCastle::Crypto::ICipherParameters*/ {
    public:
    // private readonly Org.BouncyCastle.Math.BigInteger p
    // Size: 0x8
    // Offset: 0x10
    Org::BouncyCastle::Math::BigInteger* p;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Math::BigInteger*) == 0x8);
    // private readonly Org.BouncyCastle.Math.BigInteger q
    // Size: 0x8
    // Offset: 0x18
    Org::BouncyCastle::Math::BigInteger* q;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Math::BigInteger*) == 0x8);
    // private readonly Org.BouncyCastle.Math.BigInteger a
    // Size: 0x8
    // Offset: 0x20
    Org::BouncyCastle::Math::BigInteger* a;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Math::BigInteger*) == 0x8);
    // private readonly Org.BouncyCastle.Crypto.Parameters.Gost3410ValidationParameters validation
    // Size: 0x8
    // Offset: 0x28
    Org::BouncyCastle::Crypto::Parameters::Gost3410ValidationParameters* validation;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Crypto::Parameters::Gost3410ValidationParameters*) == 0x8);
    // Creating value type constructor for type: Gost3410Parameters
    Gost3410Parameters(Org::BouncyCastle::Math::BigInteger* p_ = {}, Org::BouncyCastle::Math::BigInteger* q_ = {}, Org::BouncyCastle::Math::BigInteger* a_ = {}, Org::BouncyCastle::Crypto::Parameters::Gost3410ValidationParameters* validation_ = {}) noexcept : p{p_}, q{q_}, a{a_}, validation{validation_} {}
    // Creating interface conversion operator: operator Org::BouncyCastle::Crypto::ICipherParameters
    operator Org::BouncyCastle::Crypto::ICipherParameters() noexcept {
      return *reinterpret_cast<Org::BouncyCastle::Crypto::ICipherParameters*>(this);
    }
    // public System.Void .ctor(Org.BouncyCastle.Math.BigInteger p, Org.BouncyCastle.Math.BigInteger q, Org.BouncyCastle.Math.BigInteger a)
    // Offset: 0x1192C30
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Gost3410Parameters* New_ctor(Org::BouncyCastle::Math::BigInteger* p, Org::BouncyCastle::Math::BigInteger* q, Org::BouncyCastle::Math::BigInteger* a) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Crypto::Parameters::Gost3410Parameters::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Gost3410Parameters*, creationType>(p, q, a)));
    }
    // public System.Void .ctor(Org.BouncyCastle.Math.BigInteger p, Org.BouncyCastle.Math.BigInteger q, Org.BouncyCastle.Math.BigInteger a, Org.BouncyCastle.Crypto.Parameters.Gost3410ValidationParameters validation)
    // Offset: 0x1192C38
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Gost3410Parameters* New_ctor(Org::BouncyCastle::Math::BigInteger* p, Org::BouncyCastle::Math::BigInteger* q, Org::BouncyCastle::Math::BigInteger* a, Org::BouncyCastle::Crypto::Parameters::Gost3410ValidationParameters* validation) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Crypto::Parameters::Gost3410Parameters::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Gost3410Parameters*, creationType>(p, q, a, validation)));
    }
    // public Org.BouncyCastle.Math.BigInteger get_P()
    // Offset: 0x1192D2C
    Org::BouncyCastle::Math::BigInteger* get_P();
    // public Org.BouncyCastle.Math.BigInteger get_Q()
    // Offset: 0x1192D34
    Org::BouncyCastle::Math::BigInteger* get_Q();
    // public Org.BouncyCastle.Math.BigInteger get_A()
    // Offset: 0x1192D3C
    Org::BouncyCastle::Math::BigInteger* get_A();
    // protected System.Boolean Equals(Org.BouncyCastle.Crypto.Parameters.Gost3410Parameters other)
    // Offset: 0x1192DF4
    bool Equals(Org::BouncyCastle::Crypto::Parameters::Gost3410Parameters* other);
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x1192D44
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x1192E78
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
  }; // Org.BouncyCastle.Crypto.Parameters.Gost3410Parameters
  #pragma pack(pop)
  static check_size<sizeof(Gost3410Parameters), 40 + sizeof(Org::BouncyCastle::Crypto::Parameters::Gost3410ValidationParameters*)> __Org_BouncyCastle_Crypto_Parameters_Gost3410ParametersSizeCheck;
  static_assert(sizeof(Gost3410Parameters) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Parameters::Gost3410Parameters*, "Org.BouncyCastle.Crypto.Parameters", "Gost3410Parameters");
