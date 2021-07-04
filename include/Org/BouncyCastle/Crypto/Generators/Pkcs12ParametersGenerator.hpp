// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Crypto.PbeParametersGenerator
#include "Org/BouncyCastle/Crypto/PbeParametersGenerator.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Crypto
namespace Org::BouncyCastle::Crypto {
  // Forward declaring type: IDigest
  class IDigest;
  // Forward declaring type: ICipherParameters
  class ICipherParameters;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Crypto.Generators
namespace Org::BouncyCastle::Crypto::Generators {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.Generators.Pkcs12ParametersGenerator
  class Pkcs12ParametersGenerator : public Org::BouncyCastle::Crypto::PbeParametersGenerator {
    public:
    // Writing base type padding for base size: 0x24 to desired offset: 0x28
    char ___base_padding[0x4] = {};
    // private readonly Org.BouncyCastle.Crypto.IDigest digest
    // Size: 0x8
    // Offset: 0x28
    Org::BouncyCastle::Crypto::IDigest* digest;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Crypto::IDigest*) == 0x8);
    // private readonly System.Int32 u
    // Size: 0x4
    // Offset: 0x30
    int u;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private readonly System.Int32 v
    // Size: 0x4
    // Offset: 0x34
    int v;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: Pkcs12ParametersGenerator
    Pkcs12ParametersGenerator(Org::BouncyCastle::Crypto::IDigest* digest_ = {}, int u_ = {}, int v_ = {}) noexcept : digest{digest_}, u{u_}, v{v_} {}
    // public System.Void .ctor(Org.BouncyCastle.Crypto.IDigest digest)
    // Offset: 0x18BFDD8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Pkcs12ParametersGenerator* New_ctor(Org::BouncyCastle::Crypto::IDigest* digest) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Crypto::Generators::Pkcs12ParametersGenerator::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Pkcs12ParametersGenerator*, creationType>(digest)));
    }
    // private System.Void Adjust(System.Byte[] a, System.Int32 aOff, System.Byte[] b)
    // Offset: 0x18BFF14
    void Adjust(::Array<uint8_t>* a, int aOff, ::Array<uint8_t>* b);
    // private System.Byte[] GenerateDerivedKey(System.Int32 idByte, System.Int32 n)
    // Offset: 0x18BFFF4
    ::Array<uint8_t>* GenerateDerivedKey(int idByte, int n);
    // public override Org.BouncyCastle.Crypto.ICipherParameters GenerateDerivedParameters(System.String algorithm, System.Int32 keySize)
    // Offset: 0x18C061C
    // Implemented from: Org.BouncyCastle.Crypto.PbeParametersGenerator
    // Base method: Org.BouncyCastle.Crypto.ICipherParameters PbeParametersGenerator::GenerateDerivedParameters(System.String algorithm, System.Int32 keySize)
    Org::BouncyCastle::Crypto::ICipherParameters* GenerateDerivedParameters(::Il2CppString* algorithm, int keySize);
    // public override Org.BouncyCastle.Crypto.ICipherParameters GenerateDerivedParameters(System.String algorithm, System.Int32 keySize, System.Int32 ivSize)
    // Offset: 0x18C06C8
    // Implemented from: Org.BouncyCastle.Crypto.PbeParametersGenerator
    // Base method: Org.BouncyCastle.Crypto.ICipherParameters PbeParametersGenerator::GenerateDerivedParameters(System.String algorithm, System.Int32 keySize, System.Int32 ivSize)
    Org::BouncyCastle::Crypto::ICipherParameters* GenerateDerivedParameters(::Il2CppString* algorithm, int keySize, int ivSize);
    // public override Org.BouncyCastle.Crypto.ICipherParameters GenerateDerivedMacParameters(System.Int32 keySize)
    // Offset: 0x18C07E0
    // Implemented from: Org.BouncyCastle.Crypto.PbeParametersGenerator
    // Base method: Org.BouncyCastle.Crypto.ICipherParameters PbeParametersGenerator::GenerateDerivedMacParameters(System.Int32 keySize)
    Org::BouncyCastle::Crypto::ICipherParameters* GenerateDerivedMacParameters(int keySize);
  }; // Org.BouncyCastle.Crypto.Generators.Pkcs12ParametersGenerator
  #pragma pack(pop)
  static check_size<sizeof(Pkcs12ParametersGenerator), 52 + sizeof(int)> __Org_BouncyCastle_Crypto_Generators_Pkcs12ParametersGeneratorSizeCheck;
  static_assert(sizeof(Pkcs12ParametersGenerator) == 0x38);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Generators::Pkcs12ParametersGenerator*, "Org.BouncyCastle.Crypto.Generators", "Pkcs12ParametersGenerator");
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Generators::Pkcs12ParametersGenerator::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Generators::Pkcs12ParametersGenerator::Adjust
// Il2CppName: Adjust
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Generators::Pkcs12ParametersGenerator::*)(::Array<uint8_t>*, int, ::Array<uint8_t>*)>(&Org::BouncyCastle::Crypto::Generators::Pkcs12ParametersGenerator::Adjust)> {
  const MethodInfo* get() {
    static auto* a = &classof(::Array<::Array<uint8_t>*>*)->byval_arg;
    static auto* aOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* b = &classof(::Array<::Array<uint8_t>*>*)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Generators::Pkcs12ParametersGenerator*), "Adjust", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a, aOff, b});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Generators::Pkcs12ParametersGenerator::GenerateDerivedKey
// Il2CppName: GenerateDerivedKey
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<uint8_t>* (Org::BouncyCastle::Crypto::Generators::Pkcs12ParametersGenerator::*)(int, int)>(&Org::BouncyCastle::Crypto::Generators::Pkcs12ParametersGenerator::GenerateDerivedKey)> {
  const MethodInfo* get() {
    static auto* idByte = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* n = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Generators::Pkcs12ParametersGenerator*), "GenerateDerivedKey", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{idByte, n});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Generators::Pkcs12ParametersGenerator::GenerateDerivedParameters
// Il2CppName: GenerateDerivedParameters
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Crypto::ICipherParameters* (Org::BouncyCastle::Crypto::Generators::Pkcs12ParametersGenerator::*)(::Il2CppString*, int)>(&Org::BouncyCastle::Crypto::Generators::Pkcs12ParametersGenerator::GenerateDerivedParameters)> {
  const MethodInfo* get() {
    static auto* algorithm = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* keySize = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Generators::Pkcs12ParametersGenerator*), "GenerateDerivedParameters", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{algorithm, keySize});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Generators::Pkcs12ParametersGenerator::GenerateDerivedParameters
// Il2CppName: GenerateDerivedParameters
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Crypto::ICipherParameters* (Org::BouncyCastle::Crypto::Generators::Pkcs12ParametersGenerator::*)(::Il2CppString*, int, int)>(&Org::BouncyCastle::Crypto::Generators::Pkcs12ParametersGenerator::GenerateDerivedParameters)> {
  const MethodInfo* get() {
    static auto* algorithm = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* keySize = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* ivSize = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Generators::Pkcs12ParametersGenerator*), "GenerateDerivedParameters", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{algorithm, keySize, ivSize});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Generators::Pkcs12ParametersGenerator::GenerateDerivedMacParameters
// Il2CppName: GenerateDerivedMacParameters
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Crypto::ICipherParameters* (Org::BouncyCastle::Crypto::Generators::Pkcs12ParametersGenerator::*)(int)>(&Org::BouncyCastle::Crypto::Generators::Pkcs12ParametersGenerator::GenerateDerivedMacParameters)> {
  const MethodInfo* get() {
    static auto* keySize = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Generators::Pkcs12ParametersGenerator*), "GenerateDerivedMacParameters", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{keySize});
  }
};
