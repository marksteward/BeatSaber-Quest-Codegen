// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Crypto
namespace Org::BouncyCastle::Crypto {
  // Forward declaring type: ICipherParameters
  class ICipherParameters;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Crypto.Parameters
namespace Org::BouncyCastle::Crypto::Parameters {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.Parameters.ParametersWithID
  class ParametersWithID : public ::Il2CppObject {
    public:
    // private readonly Org.BouncyCastle.Crypto.ICipherParameters parameters
    // Size: 0x8
    // Offset: 0x10
    Org::BouncyCastle::Crypto::ICipherParameters* parameters;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Crypto::ICipherParameters*) == 0x8);
    // private readonly System.Byte[] id
    // Size: 0x8
    // Offset: 0x18
    ::Array<uint8_t>* id;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // Creating value type constructor for type: ParametersWithID
    ParametersWithID(Org::BouncyCastle::Crypto::ICipherParameters* parameters_ = {}, ::Array<uint8_t>* id_ = {}) noexcept : parameters{parameters_}, id{id_} {}
    // public System.Byte[] GetID()
    // Offset: 0x11931B8
    ::Array<uint8_t>* GetID();
    // public Org.BouncyCastle.Crypto.ICipherParameters get_Parameters()
    // Offset: 0x11931C0
    Org::BouncyCastle::Crypto::ICipherParameters* get_Parameters();
  }; // Org.BouncyCastle.Crypto.Parameters.ParametersWithID
  #pragma pack(pop)
  static check_size<sizeof(ParametersWithID), 24 + sizeof(::Array<uint8_t>*)> __Org_BouncyCastle_Crypto_Parameters_ParametersWithIDSizeCheck;
  static_assert(sizeof(ParametersWithID) == 0x20);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Parameters::ParametersWithID*, "Org.BouncyCastle.Crypto.Parameters", "ParametersWithID");
