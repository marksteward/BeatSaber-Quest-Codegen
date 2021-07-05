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
    // Offset: 0x18DE8F0
    static void _cctor();
    // static private System.Int64 packIntoLong(System.Int32 b7, System.Int32 b6, System.Int32 b5, System.Int32 b4, System.Int32 b3, System.Int32 b2, System.Int32 b1, System.Int32 b0)
    // Offset: 0x18DED44
    static int64_t packIntoLong(int b7, int b6, int b5, int b4, int b3, int b2, int b1, int b0);
    // static private System.Int32 maskWithReductionPolynomial(System.Int32 input)
    // Offset: 0x18DED30
    static int maskWithReductionPolynomial(int input);
    // public System.Void .ctor(Org.BouncyCastle.Crypto.Digests.WhirlpoolDigest originalDigest)
    // Offset: 0x18DF024
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WhirlpoolDigest* New_ctor(Org::BouncyCastle::Crypto::Digests::WhirlpoolDigest* originalDigest) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Crypto::Digests::WhirlpoolDigest::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WhirlpoolDigest*, creationType>(originalDigest)));
    }
    // public System.String get_AlgorithmName()
    // Offset: 0x18DF294
    ::Il2CppString* get_AlgorithmName();
    // public System.Int32 GetDigestSize()
    // Offset: 0x18DF2DC
    int GetDigestSize();
    // public System.Int32 DoFinal(System.Byte[] output, System.Int32 outOff)
    // Offset: 0x18DF2E4
    int DoFinal(::Array<uint8_t>* output, int outOff);
    // public System.Void Reset()
    // Offset: 0x18DF510
    void Reset();
    // private System.Void processFilledBuffer()
    // Offset: 0x18DF5D8
    void processFilledBuffer();
    // static private System.Int64 bytesToLongFromBuffer(System.Byte[] buffer, System.Int32 startPos)
    // Offset: 0x18DF6D0
    static int64_t bytesToLongFromBuffer(::Array<uint8_t>* buffer, int startPos);
    // static private System.Void convertLongToByteArray(System.Int64 inputLong, System.Byte[] outputArray, System.Int32 offSet)
    // Offset: 0x18DF4A0
    static void convertLongToByteArray(int64_t inputLong, ::Array<uint8_t>* outputArray, int offSet);
    // private System.Void processBlock()
    // Offset: 0x18DF7B0
    void processBlock();
    // public System.Void Update(System.Byte input)
    // Offset: 0x18E010C
    void Update(uint8_t input);
    // private System.Void increment()
    // Offset: 0x18E0184
    void increment();
    // public System.Void BlockUpdate(System.Byte[] input, System.Int32 inOff, System.Int32 length)
    // Offset: 0x18E02A4
    void BlockUpdate(::Array<uint8_t>* input, int inOff, int length);
    // private System.Void finish()
    // Offset: 0x18DF3C0
    void finish();
    // private System.Byte[] copyBitLength()
    // Offset: 0x18E031C
    ::Array<uint8_t>* copyBitLength();
    // public System.Int32 GetByteLength()
    // Offset: 0x18E03D4
    int GetByteLength();
    // public Org.BouncyCastle.Utilities.IMemoable Copy()
    // Offset: 0x18E03DC
    Org::BouncyCastle::Utilities::IMemoable* Copy();
    // public System.Void Reset(Org.BouncyCastle.Utilities.IMemoable other)
    // Offset: 0x18DF11C
    void Reset(Org::BouncyCastle::Utilities::IMemoable* other);
    // public System.Void .ctor()
    // Offset: 0x18DED78
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
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::WhirlpoolDigest::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Org::BouncyCastle::Crypto::Digests::WhirlpoolDigest::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::WhirlpoolDigest*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::WhirlpoolDigest::packIntoLong
// Il2CppName: packIntoLong
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (*)(int, int, int, int, int, int, int, int)>(&Org::BouncyCastle::Crypto::Digests::WhirlpoolDigest::packIntoLong)> {
  static const MethodInfo* get() {
    static auto* b7 = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* b6 = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* b5 = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* b4 = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* b3 = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* b2 = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* b1 = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* b0 = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::WhirlpoolDigest*), "packIntoLong", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{b7, b6, b5, b4, b3, b2, b1, b0});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::WhirlpoolDigest::maskWithReductionPolynomial
// Il2CppName: maskWithReductionPolynomial
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(int)>(&Org::BouncyCastle::Crypto::Digests::WhirlpoolDigest::maskWithReductionPolynomial)> {
  static const MethodInfo* get() {
    static auto* input = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::WhirlpoolDigest*), "maskWithReductionPolynomial", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::WhirlpoolDigest::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::WhirlpoolDigest::get_AlgorithmName
// Il2CppName: get_AlgorithmName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (Org::BouncyCastle::Crypto::Digests::WhirlpoolDigest::*)()>(&Org::BouncyCastle::Crypto::Digests::WhirlpoolDigest::get_AlgorithmName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::WhirlpoolDigest*), "get_AlgorithmName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::WhirlpoolDigest::GetDigestSize
// Il2CppName: GetDigestSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Digests::WhirlpoolDigest::*)()>(&Org::BouncyCastle::Crypto::Digests::WhirlpoolDigest::GetDigestSize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::WhirlpoolDigest*), "GetDigestSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::WhirlpoolDigest::DoFinal
// Il2CppName: DoFinal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Digests::WhirlpoolDigest::*)(::Array<uint8_t>*, int)>(&Org::BouncyCastle::Crypto::Digests::WhirlpoolDigest::DoFinal)> {
  static const MethodInfo* get() {
    static auto* output = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* outOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::WhirlpoolDigest*), "DoFinal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{output, outOff});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::WhirlpoolDigest::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Digests::WhirlpoolDigest::*)()>(&Org::BouncyCastle::Crypto::Digests::WhirlpoolDigest::Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::WhirlpoolDigest*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::WhirlpoolDigest::processFilledBuffer
// Il2CppName: processFilledBuffer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Digests::WhirlpoolDigest::*)()>(&Org::BouncyCastle::Crypto::Digests::WhirlpoolDigest::processFilledBuffer)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::WhirlpoolDigest*), "processFilledBuffer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::WhirlpoolDigest::bytesToLongFromBuffer
// Il2CppName: bytesToLongFromBuffer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (*)(::Array<uint8_t>*, int)>(&Org::BouncyCastle::Crypto::Digests::WhirlpoolDigest::bytesToLongFromBuffer)> {
  static const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* startPos = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::WhirlpoolDigest*), "bytesToLongFromBuffer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, startPos});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::WhirlpoolDigest::convertLongToByteArray
// Il2CppName: convertLongToByteArray
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int64_t, ::Array<uint8_t>*, int)>(&Org::BouncyCastle::Crypto::Digests::WhirlpoolDigest::convertLongToByteArray)> {
  static const MethodInfo* get() {
    static auto* inputLong = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    static auto* outputArray = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* offSet = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::WhirlpoolDigest*), "convertLongToByteArray", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{inputLong, outputArray, offSet});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::WhirlpoolDigest::processBlock
// Il2CppName: processBlock
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Digests::WhirlpoolDigest::*)()>(&Org::BouncyCastle::Crypto::Digests::WhirlpoolDigest::processBlock)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::WhirlpoolDigest*), "processBlock", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::WhirlpoolDigest::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Digests::WhirlpoolDigest::*)(uint8_t)>(&Org::BouncyCastle::Crypto::Digests::WhirlpoolDigest::Update)> {
  static const MethodInfo* get() {
    static auto* input = &::il2cpp_utils::GetClassFromName("System", "Byte")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::WhirlpoolDigest*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::WhirlpoolDigest::increment
// Il2CppName: increment
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Digests::WhirlpoolDigest::*)()>(&Org::BouncyCastle::Crypto::Digests::WhirlpoolDigest::increment)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::WhirlpoolDigest*), "increment", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::WhirlpoolDigest::BlockUpdate
// Il2CppName: BlockUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Digests::WhirlpoolDigest::*)(::Array<uint8_t>*, int, int)>(&Org::BouncyCastle::Crypto::Digests::WhirlpoolDigest::BlockUpdate)> {
  static const MethodInfo* get() {
    static auto* input = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* inOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* length = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::WhirlpoolDigest*), "BlockUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input, inOff, length});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::WhirlpoolDigest::finish
// Il2CppName: finish
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Digests::WhirlpoolDigest::*)()>(&Org::BouncyCastle::Crypto::Digests::WhirlpoolDigest::finish)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::WhirlpoolDigest*), "finish", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::WhirlpoolDigest::copyBitLength
// Il2CppName: copyBitLength
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<uint8_t>* (Org::BouncyCastle::Crypto::Digests::WhirlpoolDigest::*)()>(&Org::BouncyCastle::Crypto::Digests::WhirlpoolDigest::copyBitLength)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::WhirlpoolDigest*), "copyBitLength", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::WhirlpoolDigest::GetByteLength
// Il2CppName: GetByteLength
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Digests::WhirlpoolDigest::*)()>(&Org::BouncyCastle::Crypto::Digests::WhirlpoolDigest::GetByteLength)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::WhirlpoolDigest*), "GetByteLength", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::WhirlpoolDigest::Copy
// Il2CppName: Copy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Utilities::IMemoable* (Org::BouncyCastle::Crypto::Digests::WhirlpoolDigest::*)()>(&Org::BouncyCastle::Crypto::Digests::WhirlpoolDigest::Copy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::WhirlpoolDigest*), "Copy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::WhirlpoolDigest::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Digests::WhirlpoolDigest::*)(Org::BouncyCastle::Utilities::IMemoable*)>(&Org::BouncyCastle::Crypto::Digests::WhirlpoolDigest::Reset)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Utilities", "IMemoable")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::WhirlpoolDigest*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::WhirlpoolDigest::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
