// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Crypto.IDigest
#include "Org/BouncyCastle/Crypto/IDigest.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Org.BouncyCastle.Crypto.Digests
namespace Org::BouncyCastle::Crypto::Digests {
  // Size: 0x5C
  // Autogenerated type: Org.BouncyCastle.Crypto.Digests.Blake2sDigest
  // [] Offset: FFFFFFFF
  class Blake2sDigest : public ::Il2CppObject/*, public Org::BouncyCastle::Crypto::IDigest*/ {
    public:
    // private System.Int32 digestLength
    // Size: 0x4
    // Offset: 0x10
    int digestLength;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 keyLength
    // Size: 0x4
    // Offset: 0x14
    int keyLength;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Byte[] salt
    // Size: 0x8
    // Offset: 0x18
    ::Array<uint8_t>* salt;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // private System.Byte[] personalization
    // Size: 0x8
    // Offset: 0x20
    ::Array<uint8_t>* personalization;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // private System.Byte[] key
    // Size: 0x8
    // Offset: 0x28
    ::Array<uint8_t>* key;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // private System.Byte[] buffer
    // Size: 0x8
    // Offset: 0x30
    ::Array<uint8_t>* buffer;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // private System.Int32 bufferPos
    // Size: 0x4
    // Offset: 0x38
    int bufferPos;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: bufferPos and: internalState
    char __padding6[0x4] = {};
    // private System.UInt32[] internalState
    // Size: 0x8
    // Offset: 0x40
    ::Array<uint>* internalState;
    // Field size check
    static_assert(sizeof(::Array<uint>*) == 0x8);
    // private System.UInt32[] chainValue
    // Size: 0x8
    // Offset: 0x48
    ::Array<uint>* chainValue;
    // Field size check
    static_assert(sizeof(::Array<uint>*) == 0x8);
    // private System.UInt32 t0
    // Size: 0x4
    // Offset: 0x50
    uint t0;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // private System.UInt32 t1
    // Size: 0x4
    // Offset: 0x54
    uint t1;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // private System.UInt32 f0
    // Size: 0x4
    // Offset: 0x58
    uint f0;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // Creating value type constructor for type: Blake2sDigest
    Blake2sDigest(int digestLength_ = {}, int keyLength_ = {}, ::Array<uint8_t>* salt_ = {}, ::Array<uint8_t>* personalization_ = {}, ::Array<uint8_t>* key_ = {}, ::Array<uint8_t>* buffer_ = {}, int bufferPos_ = {}, ::Array<uint>* internalState_ = {}, ::Array<uint>* chainValue_ = {}, uint t0_ = {}, uint t1_ = {}, uint f0_ = {}) noexcept : digestLength{digestLength_}, keyLength{keyLength_}, salt{salt_}, personalization{personalization_}, key{key_}, buffer{buffer_}, bufferPos{bufferPos_}, internalState{internalState_}, chainValue{chainValue_}, t0{t0_}, t1{t1_}, f0{f0_} {}
    // Creating interface conversion operator: operator Org::BouncyCastle::Crypto::IDigest
    operator Org::BouncyCastle::Crypto::IDigest() noexcept {
      return *reinterpret_cast<Org::BouncyCastle::Crypto::IDigest*>(this);
    }
    // Get static field: static private readonly System.UInt32[] blake2s_IV
    static ::Array<uint>* _get_blake2s_IV();
    // Set static field: static private readonly System.UInt32[] blake2s_IV
    static void _set_blake2s_IV(::Array<uint>* value);
    // Get static field: static private readonly System.Byte[,] blake2s_sigma
    static ::Array<uint8_t>* _get_blake2s_sigma();
    // Set static field: static private readonly System.Byte[,] blake2s_sigma
    static void _set_blake2s_sigma(::Array<uint8_t>* value);
    // public System.Void .ctor(System.Int32 digestBits)
    // Offset: 0x1759348
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Blake2sDigest* New_ctor(int digestBits) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Crypto::Digests::Blake2sDigest::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Blake2sDigest*, creationType>(digestBits)));
    }
    // private System.Void Init()
    // Offset: 0x17594B0
    void Init();
    // private System.Void InitializeInternalState()
    // Offset: 0x175983C
    void InitializeInternalState();
    // private System.Void Compress(System.Byte[] message, System.Int32 messagePos)
    // Offset: 0x1759AB4
    void Compress(::Array<uint8_t>* message, int messagePos);
    // private System.Void G(System.UInt32 m1, System.UInt32 m2, System.Int32 posA, System.Int32 posB, System.Int32 posC, System.Int32 posD)
    // Offset: 0x175A34C
    void G(uint m1, uint m2, int posA, int posB, int posC, int posD);
    // private System.UInt32 rotr32(System.UInt32 x, System.Int32 rot)
    // Offset: 0x175A53C
    uint rotr32(uint x, int rot);
    // static private System.Void .cctor()
    // Offset: 0x175A59C
    static void _cctor();
    // public System.Void Update(System.Byte b)
    // Offset: 0x17599F0
    // Implemented from: Org.BouncyCastle.Crypto.IDigest
    // Base method: System.Void IDigest::Update(System.Byte b)
    void Update(uint8_t b);
    // public System.Void BlockUpdate(System.Byte[] message, System.Int32 offset, System.Int32 len)
    // Offset: 0x175A040
    // Implemented from: Org.BouncyCastle.Crypto.IDigest
    // Base method: System.Void IDigest::BlockUpdate(System.Byte[] message, System.Int32 offset, System.Int32 len)
    void BlockUpdate(::Array<uint8_t>* message, int offset, int len);
    // public System.Int32 DoFinal(System.Byte[] output, System.Int32 outOffset)
    // Offset: 0x175A184
    // Implemented from: Org.BouncyCastle.Crypto.IDigest
    // Base method: System.Int32 IDigest::DoFinal(System.Byte[] output, System.Int32 outOffset)
    int DoFinal(::Array<uint8_t>* output, int outOffset);
    // public System.Void Reset()
    // Offset: 0x175A2C8
    // Implemented from: Org.BouncyCastle.Crypto.IDigest
    // Base method: System.Void IDigest::Reset()
    void Reset();
    // public System.String get_AlgorithmName()
    // Offset: 0x175A544
    // Implemented from: Org.BouncyCastle.Crypto.IDigest
    // Base method: System.String IDigest::get_AlgorithmName()
    ::Il2CppString* get_AlgorithmName();
    // public System.Int32 GetDigestSize()
    // Offset: 0x175A58C
    // Implemented from: Org.BouncyCastle.Crypto.IDigest
    // Base method: System.Int32 IDigest::GetDigestSize()
    int GetDigestSize();
    // public System.Int32 GetByteLength()
    // Offset: 0x175A594
    // Implemented from: Org.BouncyCastle.Crypto.IDigest
    // Base method: System.Int32 IDigest::GetByteLength()
    int GetByteLength();
  }; // Org.BouncyCastle.Crypto.Digests.Blake2sDigest
  static check_size<sizeof(Blake2sDigest), 88 + sizeof(uint)> __Org_BouncyCastle_Crypto_Digests_Blake2sDigestSizeCheck;
  static_assert(sizeof(Blake2sDigest) == 0x5C);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Digests::Blake2sDigest*, "Org.BouncyCastle.Crypto.Digests", "Blake2sDigest");
#pragma pack(pop)
