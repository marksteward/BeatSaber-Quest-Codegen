// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Crypto.AsymmetricKeyParameter
#include "Org/BouncyCastle/Crypto/AsymmetricKeyParameter.hpp"
// Including type: Org.BouncyCastle.Math.EC.Rfc8032.Ed25519
#include "Org/BouncyCastle/Math/EC/Rfc8032/Ed25519.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Crypto::Parameters
namespace Org::BouncyCastle::Crypto::Parameters {
  // Forward declaring type: Ed25519PublicKeyParameters
  class Ed25519PublicKeyParameters;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Crypto.Parameters
namespace Org::BouncyCastle::Crypto::Parameters {
  // Size: 0x28
  // Autogenerated type: Org.BouncyCastle.Crypto.Parameters.Ed25519PrivateKeyParameters
  // [] Offset: FFFFFFFF
  class Ed25519PrivateKeyParameters : public Org::BouncyCastle::Crypto::AsymmetricKeyParameter {
    public:
    // Writing base type padding for base size: 0x11 to desired offset: 0x18
    char ___base_padding[0x7] = {};
    // private readonly System.Byte[] data
    // Size: 0x8
    // Offset: 0x18
    ::Array<uint8_t>* data;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // private Org.BouncyCastle.Crypto.Parameters.Ed25519PublicKeyParameters cachedPublicKey
    // Size: 0x8
    // Offset: 0x20
    Org::BouncyCastle::Crypto::Parameters::Ed25519PublicKeyParameters* cachedPublicKey;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Crypto::Parameters::Ed25519PublicKeyParameters*) == 0x8);
    // Creating value type constructor for type: Ed25519PrivateKeyParameters
    Ed25519PrivateKeyParameters(::Array<uint8_t>* data_ = {}, Org::BouncyCastle::Crypto::Parameters::Ed25519PublicKeyParameters* cachedPublicKey_ = {}) noexcept : data{data_}, cachedPublicKey{cachedPublicKey_} {}
    // Deleting conversion operator: operator bool
    constexpr operator bool() const noexcept = delete;
    // Get static field: static public readonly System.Int32 KeySize
    static int _get_KeySize();
    // Set static field: static public readonly System.Int32 KeySize
    static void _set_KeySize(int value);
    // Get static field: static public readonly System.Int32 SignatureSize
    static int _get_SignatureSize();
    // Set static field: static public readonly System.Int32 SignatureSize
    static void _set_SignatureSize(int value);
    // public System.Void .ctor(System.Byte[] buf, System.Int32 off)
    // Offset: 0x1047054
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Ed25519PrivateKeyParameters* New_ctor(::Array<uint8_t>* buf, int off) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Crypto::Parameters::Ed25519PrivateKeyParameters::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Ed25519PrivateKeyParameters*, creationType>(buf, off)));
    }
    // public Org.BouncyCastle.Crypto.Parameters.Ed25519PublicKeyParameters GeneratePublicKey()
    // Offset: 0x104712C
    Org::BouncyCastle::Crypto::Parameters::Ed25519PublicKeyParameters* GeneratePublicKey();
    // public System.Void Sign(Org.BouncyCastle.Math.EC.Rfc8032.Ed25519/Algorithm algorithm, System.Byte[] ctx, System.Byte[] msg, System.Int32 msgOff, System.Int32 msgLen, System.Byte[] sig, System.Int32 sigOff)
    // Offset: 0x1047348
    void Sign(Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::Algorithm algorithm, ::Array<uint8_t>* ctx, ::Array<uint8_t>* msg, int msgOff, int msgLen, ::Array<uint8_t>* sig, int sigOff);
    // static private System.Void .cctor()
    // Offset: 0x1047670
    static void _cctor();
  }; // Org.BouncyCastle.Crypto.Parameters.Ed25519PrivateKeyParameters
  static check_size<sizeof(Ed25519PrivateKeyParameters), 32 + sizeof(Org::BouncyCastle::Crypto::Parameters::Ed25519PublicKeyParameters*)> __Org_BouncyCastle_Crypto_Parameters_Ed25519PrivateKeyParametersSizeCheck;
  static_assert(sizeof(Ed25519PrivateKeyParameters) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Parameters::Ed25519PrivateKeyParameters*, "Org.BouncyCastle.Crypto.Parameters", "Ed25519PrivateKeyParameters");
#pragma pack(pop)
