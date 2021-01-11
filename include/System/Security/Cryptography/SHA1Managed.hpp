// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Security.Cryptography.SHA1
#include "System/Security/Cryptography/SHA1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.Security.Cryptography
namespace System::Security::Cryptography {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: System.Security.Cryptography.SHA1Managed
  // [] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: D3A5AC
  class SHA1Managed : public System::Security::Cryptography::SHA1 {
    public:
    // Writing base type padding for base size: 0x25 to desired offset: 0x28
    char ___base_padding[0x3] = {};
    // private System.Byte[] _buffer
    // Size: 0x8
    // Offset: 0x28
    ::Array<uint8_t>* buffer;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // private System.Int64 _count
    // Size: 0x8
    // Offset: 0x30
    int64_t count;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // private System.UInt32[] _stateSHA1
    // Size: 0x8
    // Offset: 0x38
    ::Array<uint>* stateSHA1;
    // Field size check
    static_assert(sizeof(::Array<uint>*) == 0x8);
    // private System.UInt32[] _expandedBuffer
    // Size: 0x8
    // Offset: 0x40
    ::Array<uint>* expandedBuffer;
    // Field size check
    static_assert(sizeof(::Array<uint>*) == 0x8);
    // Creating value type constructor for type: SHA1Managed
    SHA1Managed(::Array<uint8_t>* buffer_ = {}, int64_t count_ = {}, ::Array<uint>* stateSHA1_ = {}, ::Array<uint>* expandedBuffer_ = {}) noexcept : buffer{buffer_}, count{count_}, stateSHA1{stateSHA1_}, expandedBuffer{expandedBuffer_} {}
    // private System.Void InitializeState()
    // Offset: 0x1278964
    void InitializeState();
    // private System.Void _HashData(System.Byte[] partIn, System.Int32 ibStart, System.Int32 cbSize)
    // Offset: 0x1278A78
    void _HashData(::Array<uint8_t>* partIn, int ibStart, int cbSize);
    // private System.Byte[] _EndHash()
    // Offset: 0x1278C2C
    ::Array<uint8_t>* _EndHash();
    // static private System.Void SHATransform(System.UInt32* expandedBuffer, System.UInt32* state, System.Byte* block)
    // Offset: 0x1278DF4
    static void SHATransform(uint* expandedBuffer, uint* state, uint8_t* block);
    // static private System.Void SHAExpand(System.UInt32* x)
    // Offset: 0x1279348
    static void SHAExpand(uint* x);
    // public System.Void .ctor()
    // Offset: 0x127884C
    // Implemented from: System.Security.Cryptography.SHA1
    // Base method: System.Void SHA1::.ctor()
    // Base method: System.Void HashAlgorithm::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SHA1Managed* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Security::Cryptography::SHA1Managed::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SHA1Managed*, creationType>()));
    }
    // public override System.Void Initialize()
    // Offset: 0x1278A24
    // Implemented from: System.Security.Cryptography.HashAlgorithm
    // Base method: System.Void HashAlgorithm::Initialize()
    void Initialize();
    // protected override System.Void HashCore(System.Byte[] rgb, System.Int32 ibStart, System.Int32 cbSize)
    // Offset: 0x1278A74
    // Implemented from: System.Security.Cryptography.HashAlgorithm
    // Base method: System.Void HashAlgorithm::HashCore(System.Byte[] rgb, System.Int32 ibStart, System.Int32 cbSize)
    void HashCore(::Array<uint8_t>* rgb, int ibStart, int cbSize);
    // protected override System.Byte[] HashFinal()
    // Offset: 0x1278C28
    // Implemented from: System.Security.Cryptography.HashAlgorithm
    // Base method: System.Byte[] HashAlgorithm::HashFinal()
    ::Array<uint8_t>* HashFinal();
  }; // System.Security.Cryptography.SHA1Managed
  static check_size<sizeof(SHA1Managed), 64 + sizeof(::Array<uint>*)> __System_Security_Cryptography_SHA1ManagedSizeCheck;
  static_assert(sizeof(SHA1Managed) == 0x48);
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(System::Security::Cryptography::SHA1Managed*, "System.Security.Cryptography", "SHA1Managed");
