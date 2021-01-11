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
// Type namespace: Org.BouncyCastle.Crypto.Parameters
namespace Org::BouncyCastle::Crypto::Parameters {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.Parameters.ParametersWithIV
  // [] Offset: FFFFFFFF
  class ParametersWithIV : public ::Il2CppObject/*, public Org::BouncyCastle::Crypto::ICipherParameters*/ {
    public:
    // private readonly Org.BouncyCastle.Crypto.ICipherParameters parameters
    // Size: 0x8
    // Offset: 0x10
    Org::BouncyCastle::Crypto::ICipherParameters* parameters;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Crypto::ICipherParameters*) == 0x8);
    // private readonly System.Byte[] iv
    // Size: 0x8
    // Offset: 0x18
    ::Array<uint8_t>* iv;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // Creating value type constructor for type: ParametersWithIV
    ParametersWithIV(Org::BouncyCastle::Crypto::ICipherParameters* parameters_ = {}, ::Array<uint8_t>* iv_ = {}) noexcept : parameters{parameters_}, iv{iv_} {}
    // Creating interface conversion operator: operator Org::BouncyCastle::Crypto::ICipherParameters
    operator Org::BouncyCastle::Crypto::ICipherParameters() noexcept {
      return *reinterpret_cast<Org::BouncyCastle::Crypto::ICipherParameters*>(this);
    }
    // public System.Void .ctor(Org.BouncyCastle.Crypto.ICipherParameters parameters, System.Byte[] iv)
    // Offset: 0x1048E10
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ParametersWithIV* New_ctor(Org::BouncyCastle::Crypto::ICipherParameters* parameters, ::Array<uint8_t>* iv) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Crypto::Parameters::ParametersWithIV::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ParametersWithIV*, creationType>(parameters, iv)));
    }
    // public System.Void .ctor(Org.BouncyCastle.Crypto.ICipherParameters parameters, System.Byte[] iv, System.Int32 ivOff, System.Int32 ivLen)
    // Offset: 0x1048E2C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ParametersWithIV* New_ctor(Org::BouncyCastle::Crypto::ICipherParameters* parameters, ::Array<uint8_t>* iv, int ivOff, int ivLen) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Crypto::Parameters::ParametersWithIV::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ParametersWithIV*, creationType>(parameters, iv, ivOff, ivLen)));
    }
    // public System.Byte[] GetIV()
    // Offset: 0x1040A7C
    ::Array<uint8_t>* GetIV();
    // public Org.BouncyCastle.Crypto.ICipherParameters get_Parameters()
    // Offset: 0x1048F28
    Org::BouncyCastle::Crypto::ICipherParameters* get_Parameters();
  }; // Org.BouncyCastle.Crypto.Parameters.ParametersWithIV
  static check_size<sizeof(ParametersWithIV), 24 + sizeof(::Array<uint8_t>*)> __Org_BouncyCastle_Crypto_Parameters_ParametersWithIVSizeCheck;
  static_assert(sizeof(ParametersWithIV) == 0x20);
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Parameters::ParametersWithIV*, "Org.BouncyCastle.Crypto.Parameters", "ParametersWithIV");
