// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Crypto.Parameters.KeyParameter
#include "Org/BouncyCastle/Crypto/Parameters/KeyParameter.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Org.BouncyCastle.Crypto.Parameters
namespace Org::BouncyCastle::Crypto::Parameters {
  // Size: 0x1C
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.Parameters.RC2Parameters
  class RC2Parameters : public Org::BouncyCastle::Crypto::Parameters::KeyParameter {
    public:
    // private readonly System.Int32 bits
    // Size: 0x4
    // Offset: 0x18
    int bits;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: RC2Parameters
    RC2Parameters(int bits_ = {}) noexcept : bits{bits_} {}
    // Deleting conversion operator: operator ::Array<uint8_t>*
    constexpr operator ::Array<uint8_t>*() const noexcept = delete;
    // public System.Void .ctor(System.Byte[] key, System.Int32 keyOff, System.Int32 keyLen, System.Int32 bits)
    // Offset: 0x1193368
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RC2Parameters* New_ctor(::Array<uint8_t>* key, int keyOff, int keyLen, int bits) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Crypto::Parameters::RC2Parameters::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RC2Parameters*, creationType>(key, keyOff, keyLen, bits)));
    }
    // public System.Int32 get_EffectiveKeyBits()
    // Offset: 0x1193390
    int get_EffectiveKeyBits();
    // public System.Void .ctor(System.Byte[] key, System.Int32 keyOff, System.Int32 keyLen)
    // Offset: 0x119332C
    // Implemented from: Org.BouncyCastle.Crypto.Parameters.KeyParameter
    // Base method: System.Void KeyParameter::.ctor(System.Byte[] key, System.Int32 keyOff, System.Int32 keyLen)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RC2Parameters* New_ctor(::Array<uint8_t>* key, int keyOff, int keyLen) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Crypto::Parameters::RC2Parameters::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RC2Parameters*, creationType>(key, keyOff, keyLen)));
    }
  }; // Org.BouncyCastle.Crypto.Parameters.RC2Parameters
  #pragma pack(pop)
  static check_size<sizeof(RC2Parameters), 24 + sizeof(int)> __Org_BouncyCastle_Crypto_Parameters_RC2ParametersSizeCheck;
  static_assert(sizeof(RC2Parameters) == 0x1C);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Parameters::RC2Parameters*, "Org.BouncyCastle.Crypto.Parameters", "RC2Parameters");
