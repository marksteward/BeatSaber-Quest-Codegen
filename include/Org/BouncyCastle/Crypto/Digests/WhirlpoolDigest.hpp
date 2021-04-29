// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Crypto.IDigest
#include "Org/BouncyCastle/Crypto/IDigest.hpp"
// Including type: Org.BouncyCastle.Utilities.IMemoable
#include "Org/BouncyCastle/Utilities/IMemoable.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Org.BouncyCastle.Crypto.Digests
namespace Org::BouncyCastle::Crypto::Digests {
  // Size: 0x58
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.Digests.WhirlpoolDigest
  class WhirlpoolDigest : public ::Il2CppObject/*, public Org::BouncyCastle::Crypto::IDigest, public Org::BouncyCastle::Utilities::IMemoable*/ {
    public:
    // private readonly System.Int64[] _rc
    // Size: 0x8
    // Offset: 0x10
    ::Array<int64_t>* rc;
    // Field size check
    static_assert(sizeof(::Array<int64_t>*) == 0x8);
    // private System.Byte[] _buffer
    // Size: 0x8
    // Offset: 0x18
    ::Array<uint8_t>* buffer;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // private System.Int32 _bufferPos
    // Size: 0x4
    // Offset: 0x20
    int bufferPos;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: bufferPos and: bitCount
    char __padding2[0x4] = {};
    // private System.Int16[] _bitCount
    // Size: 0x8
    // Offset: 0x28
    ::Array<int16_t>* bitCount;
    // Field size check
    static_assert(sizeof(::Array<int16_t>*) == 0x8);
    // private System.Int64[] _hash
    // Size: 0x8
    // Offset: 0x30
    ::Array<int64_t>* hash;
    // Field size check
    static_assert(sizeof(::Array<int64_t>*) == 0x8);
    // private System.Int64[] _K
    // Size: 0x8
    // Offset: 0x38
    ::Array<int64_t>* K;
    // Field size check
    static_assert(sizeof(::Array<int64_t>*) == 0x8);
    // private System.Int64[] _L
    // Size: 0x8
    // Offset: 0x40
    ::Array<int64_t>* L;
    // Field size check
    static_assert(sizeof(::Array<int64_t>*) == 0x8);
    // private System.Int64[] _block
    // Size: 0x8
    // Offset: 0x48
    ::Array<int64_t>* block;
    // Field size check
    static_assert(sizeof(::Array<int64_t>*) == 0x8);
    // private System.Int64[] _state
    // Size: 0x8
    // Offset: 0x50
    ::Array<int64_t>* state;
    // Field size check
    static_assert(sizeof(::Array<int64_t>*) == 0x8);
    // Creating value type constructor for type: WhirlpoolDigest
    WhirlpoolDigest(::Array<int64_t>* rc_ = {}, ::Array<uint8_t>* buffer_ = {}, int bufferPos_ = {}, ::Array<int16_t>* bitCount_ = {}, ::Array<int64_t>* hash_ = {}, ::Array<int64_t>* K_ = {}, ::Array<int64_t>* L_ = {}, ::Array<int64_t>* block_ = {}, ::Array<int64_t>* state_ = {}) noexcept : rc{rc_}, buffer{buffer_}, bufferPos{bufferPos_}, bitCount{bitCount_}, hash{hash_}, K{K_}, L{L_}, block{block_}, state{state_} {}
    // Creating interface conversion operator: operator Org::BouncyCastle::Crypto::IDigest
    operator Org::BouncyCastle::Crypto::IDigest() noexcept {
      return *reinterpret_cast<Org::BouncyCastle::Crypto::IDigest*>(this);
    }
    // Creating interface conversion operator: operator Org::BouncyCastle::Utilities::IMemoable
    operator Org::BouncyCastle::Utilities::IMemoable() noexcept {
      return *reinterpret_cast<Org::BouncyCastle::Utilities::IMemoable*>(this);
    }
    // Get static field: static private readonly System.Int32[] SBOX
    static ::Array<int>* _get_SBOX();
    // Set static field: static private readonly System.Int32[] SBOX
    static void _set_SBOX(::Array<int>* value);
    // Get static field: static private readonly System.Int64[] C0
    static ::Array<int64_t>* _get_C0();
    // Set static field: static private readonly System.Int64[] C0
    static void _set_C0(::Array<int64_t>* value);
    // Get static field: static private readonly System.Int64[] C1
    static ::Array<int64_t>* _get_C1();
    // Set static field: static private readonly System.Int64[] C1
    static void _set_C1(::Array<int64_t>* value);
    // Get static field: static private readonly System.Int64[] C2
    static ::Array<int64_t>* _get_C2();
    // Set static field: static private readonly System.Int64[] C2
    static void _set_C2(::Array<int64_t>* value);
    // Get static field: static private readonly System.Int64[] C3
    static ::Array<int64_t>* _get_C3();
    // Set static field: static private readonly System.Int64[] C3
    static void _set_C3(::Array<int64_t>* value);
    // Get static field: static private readonly System.Int64[] C4
    static ::Array<int64_t>* _get_C4();
    // Set static field: static private readonly System.Int64[] C4
    static void _set_C4(::Array<int64_t>* value);
    // Get static field: static private readonly System.Int64[] C5
    static ::Array<int64_t>* _get_C5();
    // Set static field: static private readonly System.Int64[] C5
    static void _set_C5(::Array<int64_t>* value);
    // Get static field: static private readonly System.Int64[] C6
    static ::Array<int64_t>* _get_C6();
    // Set static field: static private readonly System.Int64[] C6
    static void _set_C6(::Array<int64_t>* value);
    // Get static field: static private readonly System.Int64[] C7
    static ::Array<int64_t>* _get_C7();
    // Set static field: static private readonly System.Int64[] C7
    static void _set_C7(::Array<int64_t>* value);
    // Get static field: static private readonly System.Int16[] EIGHT
    static ::Array<int16_t>* _get_EIGHT();
    // Set static field: static private readonly System.Int16[] EIGHT
    static void _set_EIGHT(::Array<int16_t>* value);
    // static private System.Void .cctor()
    // Offset: 0x172FAE4
    static void _cctor();
    // static private System.Int64 packIntoLong(System.Int32 b7, System.Int32 b6, System.Int32 b5, System.Int32 b4, System.Int32 b3, System.Int32 b2, System.Int32 b1, System.Int32 b0)
    // Offset: 0x172FF38
    static int64_t packIntoLong(int b7, int b6, int b5, int b4, int b3, int b2, int b1, int b0);
    // static private System.Int32 maskWithReductionPolynomial(System.Int32 input)
    // Offset: 0x172FF24
    static int maskWithReductionPolynomial(int input);
    // public System.Void .ctor(Org.BouncyCastle.Crypto.Digests.WhirlpoolDigest originalDigest)
    // Offset: 0x1730218
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WhirlpoolDigest* New_ctor(Org::BouncyCastle::Crypto::Digests::WhirlpoolDigest* originalDigest) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Crypto::Digests::WhirlpoolDigest::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WhirlpoolDigest*, creationType>(originalDigest)));
    }
    // public System.String get_AlgorithmName()
    // Offset: 0x1730488
    ::Il2CppString* get_AlgorithmName();
    // public System.Int32 GetDigestSize()
    // Offset: 0x17304D0
    int GetDigestSize();
    // public System.Int32 DoFinal(System.Byte[] output, System.Int32 outOff)
    // Offset: 0x17304D8
    int DoFinal(::Array<uint8_t>* output, int outOff);
    // public System.Void Reset()
    // Offset: 0x1730704
    void Reset();
    // private System.Void processFilledBuffer()
    // Offset: 0x17307CC
    void processFilledBuffer();
    // static private System.Int64 bytesToLongFromBuffer(System.Byte[] buffer, System.Int32 startPos)
    // Offset: 0x17308C4
    static int64_t bytesToLongFromBuffer(::Array<uint8_t>* buffer, int startPos);
    // static private System.Void convertLongToByteArray(System.Int64 inputLong, System.Byte[] outputArray, System.Int32 offSet)
    // Offset: 0x1730694
    static void convertLongToByteArray(int64_t inputLong, ::Array<uint8_t>* outputArray, int offSet);
    // private System.Void processBlock()
    // Offset: 0x17309A4
    void processBlock();
    // public System.Void Update(System.Byte input)
    // Offset: 0x1731300
    void Update(uint8_t input);
    // private System.Void increment()
    // Offset: 0x1731378
    void increment();
    // public System.Void BlockUpdate(System.Byte[] input, System.Int32 inOff, System.Int32 length)
    // Offset: 0x1731498
    void BlockUpdate(::Array<uint8_t>* input, int inOff, int length);
    // private System.Void finish()
    // Offset: 0x17305B4
    void finish();
    // private System.Byte[] copyBitLength()
    // Offset: 0x1731510
    ::Array<uint8_t>* copyBitLength();
    // public System.Int32 GetByteLength()
    // Offset: 0x17315C8
    int GetByteLength();
    // public Org.BouncyCastle.Utilities.IMemoable Copy()
    // Offset: 0x17315D0
    Org::BouncyCastle::Utilities::IMemoable* Copy();
    // public System.Void Reset(Org.BouncyCastle.Utilities.IMemoable other)
    // Offset: 0x1730310
    void Reset(Org::BouncyCastle::Utilities::IMemoable* other);
    // public System.Void .ctor()
    // Offset: 0x172FF6C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WhirlpoolDigest* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Crypto::Digests::WhirlpoolDigest::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WhirlpoolDigest*, creationType>()));
    }
  }; // Org.BouncyCastle.Crypto.Digests.WhirlpoolDigest
  #pragma pack(pop)
  static check_size<sizeof(WhirlpoolDigest), 80 + sizeof(::Array<int64_t>*)> __Org_BouncyCastle_Crypto_Digests_WhirlpoolDigestSizeCheck;
  static_assert(sizeof(WhirlpoolDigest) == 0x58);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Digests::WhirlpoolDigest*, "Org.BouncyCastle.Crypto.Digests", "WhirlpoolDigest");
