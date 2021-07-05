// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Crypto.Signers.IDsaEncoding
#include "Org/BouncyCastle/Crypto/Signers/IDsaEncoding.hpp"
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
  // Forward declaring type: DerInteger
  class DerInteger;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Crypto.Signers
namespace Org::BouncyCastle::Crypto::Signers {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.Signers.StandardDsaEncoding
  class StandardDsaEncoding : public ::Il2CppObject/*, public Org::BouncyCastle::Crypto::Signers::IDsaEncoding*/ {
    public:
    // Creating value type constructor for type: StandardDsaEncoding
    StandardDsaEncoding() noexcept {}
    // Creating interface conversion operator: operator Org::BouncyCastle::Crypto::Signers::IDsaEncoding
    operator Org::BouncyCastle::Crypto::Signers::IDsaEncoding() noexcept {
      return *reinterpret_cast<Org::BouncyCastle::Crypto::Signers::IDsaEncoding*>(this);
    }
    // Get static field: static public readonly Org.BouncyCastle.Crypto.Signers.StandardDsaEncoding Instance
    static Org::BouncyCastle::Crypto::Signers::StandardDsaEncoding* _get_Instance();
    // Set static field: static public readonly Org.BouncyCastle.Crypto.Signers.StandardDsaEncoding Instance
    static void _set_Instance(Org::BouncyCastle::Crypto::Signers::StandardDsaEncoding* value);
    // public System.Byte[] Encode(Org.BouncyCastle.Math.BigInteger n, Org.BouncyCastle.Math.BigInteger r, Org.BouncyCastle.Math.BigInteger s)
    // Offset: 0x1269300
    ::Array<uint8_t>* Encode(Org::BouncyCastle::Math::BigInteger* n, Org::BouncyCastle::Math::BigInteger* r, Org::BouncyCastle::Math::BigInteger* s);
    // protected Org.BouncyCastle.Math.BigInteger CheckValue(Org.BouncyCastle.Math.BigInteger n, Org.BouncyCastle.Math.BigInteger x)
    // Offset: 0x1269450
    Org::BouncyCastle::Math::BigInteger* CheckValue(Org::BouncyCastle::Math::BigInteger* n, Org::BouncyCastle::Math::BigInteger* x);
    // protected Org.BouncyCastle.Asn1.DerInteger EncodeValue(Org.BouncyCastle.Math.BigInteger n, Org.BouncyCastle.Math.BigInteger x)
    // Offset: 0x126950C
    Org::BouncyCastle::Asn1::DerInteger* EncodeValue(Org::BouncyCastle::Math::BigInteger* n, Org::BouncyCastle::Math::BigInteger* x);
    // static private System.Void .cctor()
    // Offset: 0x12695A0
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x1269604
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static StandardDsaEncoding* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Crypto::Signers::StandardDsaEncoding::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<StandardDsaEncoding*, creationType>()));
    }
  }; // Org.BouncyCastle.Crypto.Signers.StandardDsaEncoding
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Signers::StandardDsaEncoding*, "Org.BouncyCastle.Crypto.Signers", "StandardDsaEncoding");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Signers::StandardDsaEncoding::Encode
// Il2CppName: Encode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<uint8_t>* (Org::BouncyCastle::Crypto::Signers::StandardDsaEncoding::*)(Org::BouncyCastle::Math::BigInteger*, Org::BouncyCastle::Math::BigInteger*, Org::BouncyCastle::Math::BigInteger*)>(&Org::BouncyCastle::Crypto::Signers::StandardDsaEncoding::Encode)> {
  static const MethodInfo* get() {
    static auto* n = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math", "BigInteger")->byval_arg;
    static auto* r = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math", "BigInteger")->byval_arg;
    static auto* s = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math", "BigInteger")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Signers::StandardDsaEncoding*), "Encode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{n, r, s});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Signers::StandardDsaEncoding::CheckValue
// Il2CppName: CheckValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::BigInteger* (Org::BouncyCastle::Crypto::Signers::StandardDsaEncoding::*)(Org::BouncyCastle::Math::BigInteger*, Org::BouncyCastle::Math::BigInteger*)>(&Org::BouncyCastle::Crypto::Signers::StandardDsaEncoding::CheckValue)> {
  static const MethodInfo* get() {
    static auto* n = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math", "BigInteger")->byval_arg;
    static auto* x = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math", "BigInteger")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Signers::StandardDsaEncoding*), "CheckValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{n, x});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Signers::StandardDsaEncoding::EncodeValue
// Il2CppName: EncodeValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::DerInteger* (Org::BouncyCastle::Crypto::Signers::StandardDsaEncoding::*)(Org::BouncyCastle::Math::BigInteger*, Org::BouncyCastle::Math::BigInteger*)>(&Org::BouncyCastle::Crypto::Signers::StandardDsaEncoding::EncodeValue)> {
  static const MethodInfo* get() {
    static auto* n = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math", "BigInteger")->byval_arg;
    static auto* x = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math", "BigInteger")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Signers::StandardDsaEncoding*), "EncodeValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{n, x});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Signers::StandardDsaEncoding::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Org::BouncyCastle::Crypto::Signers::StandardDsaEncoding::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Signers::StandardDsaEncoding*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Signers::StandardDsaEncoding::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
