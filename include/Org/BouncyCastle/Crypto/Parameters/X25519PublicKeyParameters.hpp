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
// Type namespace: Org.BouncyCastle.Crypto.Parameters
namespace Org::BouncyCastle::Crypto::Parameters {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.Parameters.X25519PublicKeyParameters
  class X25519PublicKeyParameters : public Org::BouncyCastle::Crypto::AsymmetricKeyParameter {
    public:
    // Writing base type padding for base size: 0x11 to desired offset: 0x18
    char ___base_padding[0x7] = {};
    // private readonly System.Byte[] data
    // Size: 0x8
    // Offset: 0x18
    ::Array<uint8_t>* data;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // Creating value type constructor for type: X25519PublicKeyParameters
    X25519PublicKeyParameters(::Array<uint8_t>* data_ = {}) noexcept : data{data_} {}
    // Deleting conversion operator: operator bool
    constexpr operator bool() const noexcept = delete;
    // Get static field: static public readonly System.Int32 KeySize
    static int _get_KeySize();
    // Set static field: static public readonly System.Int32 KeySize
    static void _set_KeySize(int value);
    // public System.Void .ctor(System.Byte[] buf, System.Int32 off)
    // Offset: 0x125E7B0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static X25519PublicKeyParameters* New_ctor(::Array<uint8_t>* buf, int off) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Crypto::Parameters::X25519PublicKeyParameters::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<X25519PublicKeyParameters*, creationType>(buf, off)));
    }
    // static private System.Void .cctor()
    // Offset: 0x125E870
    static void _cctor();
  }; // Org.BouncyCastle.Crypto.Parameters.X25519PublicKeyParameters
  #pragma pack(pop)
  static check_size<sizeof(X25519PublicKeyParameters), 24 + sizeof(::Array<uint8_t>*)> __Org_BouncyCastle_Crypto_Parameters_X25519PublicKeyParametersSizeCheck;
  static_assert(sizeof(X25519PublicKeyParameters) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Parameters::X25519PublicKeyParameters*, "Org.BouncyCastle.Crypto.Parameters", "X25519PublicKeyParameters");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Parameters::X25519PublicKeyParameters::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Parameters::X25519PublicKeyParameters::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Org::BouncyCastle::Crypto::Parameters::X25519PublicKeyParameters::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Parameters::X25519PublicKeyParameters*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
