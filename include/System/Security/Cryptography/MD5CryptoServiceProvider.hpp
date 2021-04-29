// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Security.Cryptography.MD5
#include "System/Security/Cryptography/MD5.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.Security.Cryptography
namespace System::Security::Cryptography {
  // Size: 0x4C
  #pragma pack(push, 1)
  // Autogenerated type: System.Security.Cryptography.MD5CryptoServiceProvider
  // [ComVisibleAttribute] Offset: CA8994
  class MD5CryptoServiceProvider : public System::Security::Cryptography::MD5 {
    public:
    // Writing base type padding for base size: 0x25 to desired offset: 0x28
    char ___base_padding[0x3] = {};
    // private System.UInt32[] _H
    // Size: 0x8
    // Offset: 0x28
    ::Array<uint>* H;
    // Field size check
    static_assert(sizeof(::Array<uint>*) == 0x8);
    // private System.UInt32[] buff
    // Size: 0x8
    // Offset: 0x30
    ::Array<uint>* buff;
    // Field size check
    static_assert(sizeof(::Array<uint>*) == 0x8);
    // private System.UInt64 count
    // Size: 0x8
    // Offset: 0x38
    uint64_t count;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // private System.Byte[] _ProcessingBuffer
    // Size: 0x8
    // Offset: 0x40
    ::Array<uint8_t>* ProcessingBuffer;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // private System.Int32 _ProcessingBufferCount
    // Size: 0x4
    // Offset: 0x48
    int ProcessingBufferCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: MD5CryptoServiceProvider
    MD5CryptoServiceProvider(::Array<uint>* H_ = {}, ::Array<uint>* buff_ = {}, uint64_t count_ = {}, ::Array<uint8_t>* ProcessingBuffer_ = {}, int ProcessingBufferCount_ = {}) noexcept : H{H_}, buff{buff_}, count{count_}, ProcessingBuffer{ProcessingBuffer_}, ProcessingBufferCount{ProcessingBufferCount_} {}
    // Get static field: static private readonly System.UInt32[] K
    static ::Array<uint>* _get_K();
    // Set static field: static private readonly System.UInt32[] K
    static void _set_K(::Array<uint>* value);
    // private System.Void ProcessBlock(System.Byte[] inputBuffer, System.Int32 inputOffset)
    // Offset: 0x17E3BD8
    void ProcessBlock(::Array<uint8_t>* inputBuffer, int inputOffset);
    // private System.Void ProcessFinalBlock(System.Byte[] inputBuffer, System.Int32 inputOffset, System.Int32 inputCount)
    // Offset: 0x17E4980
    void ProcessFinalBlock(::Array<uint8_t>* inputBuffer, int inputOffset, int inputCount);
    // System.Void AddLength(System.UInt64 length, System.Byte[] buffer, System.Int32 position)
    // Offset: 0x17E4BD8
    void AddLength(uint64_t length, ::Array<uint8_t>* buffer, int position);
    // static private System.Void .cctor()
    // Offset: 0x17E4CD4
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x17DAA94
    // Implemented from: System.Security.Cryptography.MD5
    // Base method: System.Void MD5::.ctor()
    // Base method: System.Void HashAlgorithm::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MD5CryptoServiceProvider* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Security::Cryptography::MD5CryptoServiceProvider::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MD5CryptoServiceProvider*, creationType>()));
    }
    // protected override System.Void Finalize()
    // Offset: 0x17E39CC
    // Implemented from: System.Object
    // Base method: System.Void Object::Finalize()
    void Finalize();
    // protected override System.Void Dispose(System.Boolean disposing)
    // Offset: 0x17E3A44
    // Implemented from: System.Security.Cryptography.HashAlgorithm
    // Base method: System.Void HashAlgorithm::Dispose(System.Boolean disposing)
    void Dispose(bool disposing);
    // protected override System.Void HashCore(System.Byte[] rgb, System.Int32 ibStart, System.Int32 cbSize)
    // Offset: 0x17E3AD4
    // Implemented from: System.Security.Cryptography.HashAlgorithm
    // Base method: System.Void HashAlgorithm::HashCore(System.Byte[] rgb, System.Int32 ibStart, System.Int32 cbSize)
    void HashCore(::Array<uint8_t>* rgb, int ibStart, int cbSize);
    // protected override System.Byte[] HashFinal()
    // Offset: 0x17E4890
    // Implemented from: System.Security.Cryptography.HashAlgorithm
    // Base method: System.Byte[] HashAlgorithm::HashFinal()
    ::Array<uint8_t>* HashFinal();
    // public override System.Void Initialize()
    // Offset: 0x17E4B34
    // Implemented from: System.Security.Cryptography.HashAlgorithm
    // Base method: System.Void HashAlgorithm::Initialize()
    void Initialize();
  }; // System.Security.Cryptography.MD5CryptoServiceProvider
  #pragma pack(pop)
  static check_size<sizeof(MD5CryptoServiceProvider), 72 + sizeof(int)> __System_Security_Cryptography_MD5CryptoServiceProviderSizeCheck;
  static_assert(sizeof(MD5CryptoServiceProvider) == 0x4C);
}
DEFINE_IL2CPP_ARG_TYPE(System::Security::Cryptography::MD5CryptoServiceProvider*, "System.Security.Cryptography", "MD5CryptoServiceProvider");
