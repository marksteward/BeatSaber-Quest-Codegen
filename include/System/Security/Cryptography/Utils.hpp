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
  // Forward declaring type: RNGCryptoServiceProvider
  class RNGCryptoServiceProvider;
}
// Completed forward declares
// Type namespace: System.Security.Cryptography
namespace System::Security::Cryptography {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Security.Cryptography.Utils
  class Utils : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: Utils
    Utils() noexcept {}
    // Get static field: static private System.Security.Cryptography.RNGCryptoServiceProvider _rng
    static System::Security::Cryptography::RNGCryptoServiceProvider* _get__rng();
    // Set static field: static private System.Security.Cryptography.RNGCryptoServiceProvider _rng
    static void _set__rng(System::Security::Cryptography::RNGCryptoServiceProvider* value);
    // static System.Security.Cryptography.RNGCryptoServiceProvider get_StaticRandomNumberGenerator()
    // Offset: 0x1AE8710
    static System::Security::Cryptography::RNGCryptoServiceProvider* get_StaticRandomNumberGenerator();
    // static System.Byte[] GenerateRandom(System.Int32 keySize)
    // Offset: 0x1AE5E2C
    static ::Array<uint8_t>* GenerateRandom(int keySize);
    // static System.Boolean HasAlgorithm(System.Int32 dwCalg, System.Int32 dwKeySize)
    // Offset: 0x1AEFA44
    static bool HasAlgorithm(int dwCalg, int dwKeySize);
    // static System.String DiscardWhiteSpaces(System.String inputBuffer)
    // Offset: 0x1AE3E98
    static ::Il2CppString* DiscardWhiteSpaces(::Il2CppString* inputBuffer);
    // static System.String DiscardWhiteSpaces(System.String inputBuffer, System.Int32 inputOffset, System.Int32 inputCount)
    // Offset: 0x1AF02CC
    static ::Il2CppString* DiscardWhiteSpaces(::Il2CppString* inputBuffer, int inputOffset, int inputCount);
    // static System.Int32 ConvertByteArrayToInt(System.Byte[] input)
    // Offset: 0x1AF047C
    static int ConvertByteArrayToInt(::Array<uint8_t>* input);
    // static System.Byte[] ConvertIntToByteArray(System.Int32 dwInput)
    // Offset: 0x1AF04E8
    static ::Array<uint8_t>* ConvertIntToByteArray(int dwInput);
    // static System.Byte[] FixupKeyParity(System.Byte[] key)
    // Offset: 0x1AEF638
    static ::Array<uint8_t>* FixupKeyParity(::Array<uint8_t>* key);
    // static System.Void DWORDFromLittleEndian(System.UInt32* x, System.Int32 digits, System.Byte* block)
    // Offset: 0x1AF0618
    static void DWORDFromLittleEndian(uint* x, int digits, uint8_t* block);
    // static System.Void DWORDToLittleEndian(System.Byte[] block, System.UInt32[] x, System.Int32 digits)
    // Offset: 0x1AF0664
    static void DWORDToLittleEndian(::Array<uint8_t>* block, ::Array<uint>* x, int digits);
    // static System.Void DWORDFromBigEndian(System.UInt32* x, System.Int32 digits, System.Byte* block)
    // Offset: 0x1AEAE08
    static void DWORDFromBigEndian(uint* x, int digits, uint8_t* block);
    // static System.Void DWORDToBigEndian(System.Byte[] block, System.UInt32[] x, System.Int32 digits)
    // Offset: 0x1AEAD08
    static void DWORDToBigEndian(::Array<uint8_t>* block, ::Array<uint>* x, int digits);
    // static System.Void QuadWordFromBigEndian(System.UInt64* x, System.Int32 digits, System.Byte* block)
    // Offset: 0x1AECC38
    static void QuadWordFromBigEndian(uint64_t* x, int digits, uint8_t* block);
    // static System.Void QuadWordToBigEndian(System.Byte[] block, System.UInt64[] x, System.Int32 digits)
    // Offset: 0x1AECA74
    static void QuadWordToBigEndian(::Array<uint8_t>* block, ::Array<uint64_t>* x, int digits);
    // static System.Boolean _ProduceLegacyHmacValues()
    // Offset: 0x1AF0764
    static bool _ProduceLegacyHmacValues();
  }; // System.Security.Cryptography.Utils
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Security::Cryptography::Utils*, "System.Security.Cryptography", "Utils");
// Writing MetadataGetter for method: System::Security::Cryptography::Utils::get_StaticRandomNumberGenerator
// Il2CppName: get_StaticRandomNumberGenerator
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Security::Cryptography::Utils::GenerateRandom
// Il2CppName: GenerateRandom
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Security::Cryptography::Utils::HasAlgorithm
// Il2CppName: HasAlgorithm
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Security::Cryptography::Utils::DiscardWhiteSpaces
// Il2CppName: DiscardWhiteSpaces
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Security::Cryptography::Utils::DiscardWhiteSpaces
// Il2CppName: DiscardWhiteSpaces
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Security::Cryptography::Utils::ConvertByteArrayToInt
// Il2CppName: ConvertByteArrayToInt
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Security::Cryptography::Utils::ConvertIntToByteArray
// Il2CppName: ConvertIntToByteArray
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Security::Cryptography::Utils::FixupKeyParity
// Il2CppName: FixupKeyParity
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Security::Cryptography::Utils::DWORDFromLittleEndian
// Il2CppName: DWORDFromLittleEndian
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Security::Cryptography::Utils::DWORDToLittleEndian
// Il2CppName: DWORDToLittleEndian
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Security::Cryptography::Utils::DWORDFromBigEndian
// Il2CppName: DWORDFromBigEndian
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Security::Cryptography::Utils::DWORDToBigEndian
// Il2CppName: DWORDToBigEndian
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Security::Cryptography::Utils::QuadWordFromBigEndian
// Il2CppName: QuadWordFromBigEndian
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Security::Cryptography::Utils::QuadWordToBigEndian
// Il2CppName: QuadWordToBigEndian
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Security::Cryptography::Utils::_ProduceLegacyHmacValues
// Il2CppName: _ProduceLegacyHmacValues
// Cannot perform method pointer template specialization from operators!
