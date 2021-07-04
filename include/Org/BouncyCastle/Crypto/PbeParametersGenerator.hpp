// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Crypto
namespace Org::BouncyCastle::Crypto {
  // Forward declaring type: ICipherParameters
  class ICipherParameters;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Crypto
namespace Org::BouncyCastle::Crypto {
  // Size: 0x24
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.PbeParametersGenerator
  class PbeParametersGenerator : public ::Il2CppObject {
    public:
    // protected System.Byte[] mPassword
    // Size: 0x8
    // Offset: 0x10
    ::Array<uint8_t>* mPassword;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // protected System.Byte[] mSalt
    // Size: 0x8
    // Offset: 0x18
    ::Array<uint8_t>* mSalt;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // protected System.Int32 mIterationCount
    // Size: 0x4
    // Offset: 0x20
    int mIterationCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: PbeParametersGenerator
    PbeParametersGenerator(::Array<uint8_t>* mPassword_ = {}, ::Array<uint8_t>* mSalt_ = {}, int mIterationCount_ = {}) noexcept : mPassword{mPassword_}, mSalt{mSalt_}, mIterationCount{mIterationCount_} {}
    // public System.Void Init(System.Byte[] password, System.Byte[] salt, System.Int32 iterationCount)
    // Offset: 0x125EB00
    void Init(::Array<uint8_t>* password, ::Array<uint8_t>* salt, int iterationCount);
    // public Org.BouncyCastle.Crypto.ICipherParameters GenerateDerivedParameters(System.String algorithm, System.Int32 keySize)
    // Offset: 0xFFFFFFFF
    Org::BouncyCastle::Crypto::ICipherParameters* GenerateDerivedParameters(::Il2CppString* algorithm, int keySize);
    // public Org.BouncyCastle.Crypto.ICipherParameters GenerateDerivedParameters(System.String algorithm, System.Int32 keySize, System.Int32 ivSize)
    // Offset: 0xFFFFFFFF
    Org::BouncyCastle::Crypto::ICipherParameters* GenerateDerivedParameters(::Il2CppString* algorithm, int keySize, int ivSize);
    // public Org.BouncyCastle.Crypto.ICipherParameters GenerateDerivedMacParameters(System.Int32 keySize)
    // Offset: 0xFFFFFFFF
    Org::BouncyCastle::Crypto::ICipherParameters* GenerateDerivedMacParameters(int keySize);
    // static public System.Byte[] Pkcs5PasswordToBytes(System.Char[] password)
    // Offset: 0x125EC00
    static ::Array<uint8_t>* Pkcs5PasswordToBytes(::Array<::Il2CppChar>* password);
    // static public System.Byte[] Pkcs12PasswordToBytes(System.Char[] password, System.Boolean wrongPkcs12Zero)
    // Offset: 0x125EC68
    static ::Array<uint8_t>* Pkcs12PasswordToBytes(::Array<::Il2CppChar>* password, bool wrongPkcs12Zero);
    // protected System.Void .ctor()
    // Offset: 0x125EAF8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PbeParametersGenerator* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Crypto::PbeParametersGenerator::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PbeParametersGenerator*, creationType>()));
    }
  }; // Org.BouncyCastle.Crypto.PbeParametersGenerator
  #pragma pack(pop)
  static check_size<sizeof(PbeParametersGenerator), 32 + sizeof(int)> __Org_BouncyCastle_Crypto_PbeParametersGeneratorSizeCheck;
  static_assert(sizeof(PbeParametersGenerator) == 0x24);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::PbeParametersGenerator*, "Org.BouncyCastle.Crypto", "PbeParametersGenerator");
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::PbeParametersGenerator::Init
// Il2CppName: Init
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::PbeParametersGenerator::GenerateDerivedParameters
// Il2CppName: GenerateDerivedParameters
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::PbeParametersGenerator::GenerateDerivedParameters
// Il2CppName: GenerateDerivedParameters
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::PbeParametersGenerator::GenerateDerivedMacParameters
// Il2CppName: GenerateDerivedMacParameters
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::PbeParametersGenerator::Pkcs5PasswordToBytes
// Il2CppName: Pkcs5PasswordToBytes
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::PbeParametersGenerator::Pkcs12PasswordToBytes
// Il2CppName: Pkcs12PasswordToBytes
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::PbeParametersGenerator::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
