// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Security::Cryptography
namespace System::Security::Cryptography {
  // Forward declaring type: RSA
  class RSA;
}
// Completed forward declares
// Type namespace: Mono.Security.Cryptography
namespace Mono::Security::Cryptography {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Mono.Security.Cryptography.CryptoConvert
  class CryptoConvert : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: CryptoConvert
    CryptoConvert() noexcept {}
    // static private System.Int32 ToInt32LE(System.Byte[] bytes, System.Int32 offset)
    // Offset: 0x1D734E4
    static int ToInt32LE(::Array<uint8_t>* bytes, int offset);
    // static private System.UInt32 ToUInt32LE(System.Byte[] bytes, System.Int32 offset)
    // Offset: 0x1D73564
    static uint ToUInt32LE(::Array<uint8_t>* bytes, int offset);
    // static private System.Byte[] Trim(System.Byte[] array)
    // Offset: 0x1D735E4
    static ::Array<uint8_t>* Trim(::Array<uint8_t>* array);
    // static public System.Security.Cryptography.RSA FromCapiPrivateKeyBlob(System.Byte[] blob)
    // Offset: 0x1D722A0
    static System::Security::Cryptography::RSA* FromCapiPrivateKeyBlob(::Array<uint8_t>* blob);
    // static public System.Security.Cryptography.RSA FromCapiPrivateKeyBlob(System.Byte[] blob, System.Int32 offset)
    // Offset: 0x1D736B4
    static System::Security::Cryptography::RSA* FromCapiPrivateKeyBlob(::Array<uint8_t>* blob, int offset);
    // static public System.String ToHex(System.Byte[] input)
    // Offset: 0x1D73DF0
    static ::Il2CppString* ToHex(::Array<uint8_t>* input);
  }; // Mono.Security.Cryptography.CryptoConvert
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Mono::Security::Cryptography::CryptoConvert*, "Mono.Security.Cryptography", "CryptoConvert");
// Writing MetadataGetter for method: Mono::Security::Cryptography::CryptoConvert::ToInt32LE
// Il2CppName: ToInt32LE
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Mono::Security::Cryptography::CryptoConvert::ToUInt32LE
// Il2CppName: ToUInt32LE
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Mono::Security::Cryptography::CryptoConvert::Trim
// Il2CppName: Trim
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Mono::Security::Cryptography::CryptoConvert::FromCapiPrivateKeyBlob
// Il2CppName: FromCapiPrivateKeyBlob
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Mono::Security::Cryptography::CryptoConvert::FromCapiPrivateKeyBlob
// Il2CppName: FromCapiPrivateKeyBlob
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Mono::Security::Cryptography::CryptoConvert::ToHex
// Il2CppName: ToHex
// Cannot perform method pointer template specialization from operators!
