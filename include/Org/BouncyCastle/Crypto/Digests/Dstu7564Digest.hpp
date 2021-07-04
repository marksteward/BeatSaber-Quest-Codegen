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
  // Size: 0x50
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.Digests.Dstu7564Digest
  class Dstu7564Digest : public ::Il2CppObject/*, public Org::BouncyCastle::Crypto::IDigest, public Org::BouncyCastle::Utilities::IMemoable*/ {
    public:
    // private System.Int32 hashSize
    // Size: 0x4
    // Offset: 0x10
    int hashSize;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 blockSize
    // Size: 0x4
    // Offset: 0x14
    int blockSize;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 columns
    // Size: 0x4
    // Offset: 0x18
    int columns;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 rounds
    // Size: 0x4
    // Offset: 0x1C
    int rounds;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.UInt64[] state
    // Size: 0x8
    // Offset: 0x20
    ::Array<uint64_t>* state;
    // Field size check
    static_assert(sizeof(::Array<uint64_t>*) == 0x8);
    // private System.UInt64[] tempState1
    // Size: 0x8
    // Offset: 0x28
    ::Array<uint64_t>* tempState1;
    // Field size check
    static_assert(sizeof(::Array<uint64_t>*) == 0x8);
    // private System.UInt64[] tempState2
    // Size: 0x8
    // Offset: 0x30
    ::Array<uint64_t>* tempState2;
    // Field size check
    static_assert(sizeof(::Array<uint64_t>*) == 0x8);
    // private System.UInt64 inputBlocks
    // Size: 0x8
    // Offset: 0x38
    uint64_t inputBlocks;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // private System.Int32 bufOff
    // Size: 0x4
    // Offset: 0x40
    int bufOff;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: bufOff and: buf
    char __padding8[0x4] = {};
    // private System.Byte[] buf
    // Size: 0x8
    // Offset: 0x48
    ::Array<uint8_t>* buf;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // Creating value type constructor for type: Dstu7564Digest
    Dstu7564Digest(int hashSize_ = {}, int blockSize_ = {}, int columns_ = {}, int rounds_ = {}, ::Array<uint64_t>* state_ = {}, ::Array<uint64_t>* tempState1_ = {}, ::Array<uint64_t>* tempState2_ = {}, uint64_t inputBlocks_ = {}, int bufOff_ = {}, ::Array<uint8_t>* buf_ = {}) noexcept : hashSize{hashSize_}, blockSize{blockSize_}, columns{columns_}, rounds{rounds_}, state{state_}, tempState1{tempState1_}, tempState2{tempState2_}, inputBlocks{inputBlocks_}, bufOff{bufOff_}, buf{buf_} {}
    // Creating interface conversion operator: operator Org::BouncyCastle::Crypto::IDigest
    operator Org::BouncyCastle::Crypto::IDigest() noexcept {
      return *reinterpret_cast<Org::BouncyCastle::Crypto::IDigest*>(this);
    }
    // Creating interface conversion operator: operator Org::BouncyCastle::Utilities::IMemoable
    operator Org::BouncyCastle::Utilities::IMemoable() noexcept {
      return *reinterpret_cast<Org::BouncyCastle::Utilities::IMemoable*>(this);
    }
    // Get static field: static private readonly System.Byte[] S0
    static ::Array<uint8_t>* _get_S0();
    // Set static field: static private readonly System.Byte[] S0
    static void _set_S0(::Array<uint8_t>* value);
    // Get static field: static private readonly System.Byte[] S1
    static ::Array<uint8_t>* _get_S1();
    // Set static field: static private readonly System.Byte[] S1
    static void _set_S1(::Array<uint8_t>* value);
    // Get static field: static private readonly System.Byte[] S2
    static ::Array<uint8_t>* _get_S2();
    // Set static field: static private readonly System.Byte[] S2
    static void _set_S2(::Array<uint8_t>* value);
    // Get static field: static private readonly System.Byte[] S3
    static ::Array<uint8_t>* _get_S3();
    // Set static field: static private readonly System.Byte[] S3
    static void _set_S3(::Array<uint8_t>* value);
    // public System.Void .ctor(Org.BouncyCastle.Crypto.Digests.Dstu7564Digest digest)
    // Offset: 0x1CD081C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Dstu7564Digest* New_ctor(Org::BouncyCastle::Crypto::Digests::Dstu7564Digest* digest) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Crypto::Digests::Dstu7564Digest::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Dstu7564Digest*, creationType>(digest)));
    }
    // private System.Void CopyIn(Org.BouncyCastle.Crypto.Digests.Dstu7564Digest digest)
    // Offset: 0x1CD084C
    void CopyIn(Org::BouncyCastle::Crypto::Digests::Dstu7564Digest* digest);
    // public System.Void .ctor(System.Int32 hashSizeBits)
    // Offset: 0x1CD0988
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Dstu7564Digest* New_ctor(int hashSizeBits) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Crypto::Digests::Dstu7564Digest::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Dstu7564Digest*, creationType>(hashSizeBits)));
    }
    // public System.String get_AlgorithmName()
    // Offset: 0x1CD0AD0
    ::Il2CppString* get_AlgorithmName();
    // public System.Int32 GetDigestSize()
    // Offset: 0x1CD0B18
    int GetDigestSize();
    // public System.Int32 GetByteLength()
    // Offset: 0x1CD0B20
    int GetByteLength();
    // public System.Void Update(System.Byte input)
    // Offset: 0x1CD0B28
    void Update(uint8_t input);
    // public System.Void BlockUpdate(System.Byte[] input, System.Int32 inOff, System.Int32 length)
    // Offset: 0x1CD0BB8
    void BlockUpdate(::Array<uint8_t>* input, int inOff, int length);
    // public System.Int32 DoFinal(System.Byte[] output, System.Int32 outOff)
    // Offset: 0x1CD0CEC
    int DoFinal(::Array<uint8_t>* output, int outOff);
    // public System.Void Reset()
    // Offset: 0x1CD102C
    void Reset();
    // protected System.Void ProcessBlock(System.Byte[] input, System.Int32 inOff)
    // Offset: 0x1CD1090
    void ProcessBlock(::Array<uint8_t>* input, int inOff);
    // private System.Void P(System.UInt64[] s)
    // Offset: 0x1CD0F68
    void P(::Array<uint64_t>* s);
    // private System.Void Q(System.UInt64[] s)
    // Offset: 0x1CD11FC
    void Q(::Array<uint64_t>* s);
    // static private System.UInt64 MixColumn(System.UInt64 c)
    // Offset: 0x1CD1A20
    static uint64_t MixColumn(uint64_t c);
    // private System.Void MixColumns(System.UInt64[] s)
    // Offset: 0x1CD194C
    void MixColumns(::Array<uint64_t>* s);
    // static private System.UInt64 Rotate(System.Int32 n, System.UInt64 x)
    // Offset: 0x1CD1AE8
    static uint64_t Rotate(int n, uint64_t x);
    // private System.Void ShiftRows(System.UInt64[] s)
    // Offset: 0x1CD12E4
    void ShiftRows(::Array<uint64_t>* s);
    // private System.Void SubBytes(System.UInt64[] s)
    // Offset: 0x1CD178C
    void SubBytes(::Array<uint64_t>* s);
    // public Org.BouncyCastle.Utilities.IMemoable Copy()
    // Offset: 0x1CD1AF0
    Org::BouncyCastle::Utilities::IMemoable* Copy();
    // public System.Void Reset(Org.BouncyCastle.Utilities.IMemoable other)
    // Offset: 0x1CD1B5C
    void Reset(Org::BouncyCastle::Utilities::IMemoable* other);
    // static private System.Void .cctor()
    // Offset: 0x1CD1BF0
    static void _cctor();
  }; // Org.BouncyCastle.Crypto.Digests.Dstu7564Digest
  #pragma pack(pop)
  static check_size<sizeof(Dstu7564Digest), 72 + sizeof(::Array<uint8_t>*)> __Org_BouncyCastle_Crypto_Digests_Dstu7564DigestSizeCheck;
  static_assert(sizeof(Dstu7564Digest) == 0x50);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Digests::Dstu7564Digest*, "Org.BouncyCastle.Crypto.Digests", "Dstu7564Digest");
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::Dstu7564Digest::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::Dstu7564Digest::CopyIn
// Il2CppName: CopyIn
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Digests::Dstu7564Digest::*)(Org::BouncyCastle::Crypto::Digests::Dstu7564Digest*)>(&Org::BouncyCastle::Crypto::Digests::Dstu7564Digest::CopyIn)> {
  const MethodInfo* get() {
    static auto* digest = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Crypto.Digests", "Dstu7564Digest")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::Dstu7564Digest*), "CopyIn", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{digest});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::Dstu7564Digest::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::Dstu7564Digest::get_AlgorithmName
// Il2CppName: get_AlgorithmName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (Org::BouncyCastle::Crypto::Digests::Dstu7564Digest::*)()>(&Org::BouncyCastle::Crypto::Digests::Dstu7564Digest::get_AlgorithmName)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::Dstu7564Digest*), "get_AlgorithmName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::Dstu7564Digest::GetDigestSize
// Il2CppName: GetDigestSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Digests::Dstu7564Digest::*)()>(&Org::BouncyCastle::Crypto::Digests::Dstu7564Digest::GetDigestSize)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::Dstu7564Digest*), "GetDigestSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::Dstu7564Digest::GetByteLength
// Il2CppName: GetByteLength
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Digests::Dstu7564Digest::*)()>(&Org::BouncyCastle::Crypto::Digests::Dstu7564Digest::GetByteLength)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::Dstu7564Digest*), "GetByteLength", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::Dstu7564Digest::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Digests::Dstu7564Digest::*)(uint8_t)>(&Org::BouncyCastle::Crypto::Digests::Dstu7564Digest::Update)> {
  const MethodInfo* get() {
    static auto* input = &::il2cpp_utils::GetClassFromName("System", "Byte")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::Dstu7564Digest*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::Dstu7564Digest::BlockUpdate
// Il2CppName: BlockUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Digests::Dstu7564Digest::*)(::Array<uint8_t>*, int, int)>(&Org::BouncyCastle::Crypto::Digests::Dstu7564Digest::BlockUpdate)> {
  const MethodInfo* get() {
    static auto* input = &classof(::Array<::Array<uint8_t>*>*)->byval_arg;
    static auto* inOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* length = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::Dstu7564Digest*), "BlockUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input, inOff, length});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::Dstu7564Digest::DoFinal
// Il2CppName: DoFinal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Digests::Dstu7564Digest::*)(::Array<uint8_t>*, int)>(&Org::BouncyCastle::Crypto::Digests::Dstu7564Digest::DoFinal)> {
  const MethodInfo* get() {
    static auto* output = &classof(::Array<::Array<uint8_t>*>*)->byval_arg;
    static auto* outOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::Dstu7564Digest*), "DoFinal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{output, outOff});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::Dstu7564Digest::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Digests::Dstu7564Digest::*)()>(&Org::BouncyCastle::Crypto::Digests::Dstu7564Digest::Reset)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::Dstu7564Digest*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::Dstu7564Digest::ProcessBlock
// Il2CppName: ProcessBlock
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Digests::Dstu7564Digest::*)(::Array<uint8_t>*, int)>(&Org::BouncyCastle::Crypto::Digests::Dstu7564Digest::ProcessBlock)> {
  const MethodInfo* get() {
    static auto* input = &classof(::Array<::Array<uint8_t>*>*)->byval_arg;
    static auto* inOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::Dstu7564Digest*), "ProcessBlock", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input, inOff});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::Dstu7564Digest::P
// Il2CppName: P
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Digests::Dstu7564Digest::*)(::Array<uint64_t>*)>(&Org::BouncyCastle::Crypto::Digests::Dstu7564Digest::P)> {
  const MethodInfo* get() {
    static auto* s = &classof(::Array<::Array<uint64_t>*>*)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::Dstu7564Digest*), "P", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{s});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::Dstu7564Digest::Q
// Il2CppName: Q
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Digests::Dstu7564Digest::*)(::Array<uint64_t>*)>(&Org::BouncyCastle::Crypto::Digests::Dstu7564Digest::Q)> {
  const MethodInfo* get() {
    static auto* s = &classof(::Array<::Array<uint64_t>*>*)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::Dstu7564Digest*), "Q", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{s});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::Dstu7564Digest::MixColumn
// Il2CppName: MixColumn
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (*)(uint64_t)>(&Org::BouncyCastle::Crypto::Digests::Dstu7564Digest::MixColumn)> {
  const MethodInfo* get() {
    static auto* c = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::Dstu7564Digest*), "MixColumn", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{c});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::Dstu7564Digest::MixColumns
// Il2CppName: MixColumns
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Digests::Dstu7564Digest::*)(::Array<uint64_t>*)>(&Org::BouncyCastle::Crypto::Digests::Dstu7564Digest::MixColumns)> {
  const MethodInfo* get() {
    static auto* s = &classof(::Array<::Array<uint64_t>*>*)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::Dstu7564Digest*), "MixColumns", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{s});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::Dstu7564Digest::Rotate
// Il2CppName: Rotate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (*)(int, uint64_t)>(&Org::BouncyCastle::Crypto::Digests::Dstu7564Digest::Rotate)> {
  const MethodInfo* get() {
    static auto* n = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::Dstu7564Digest*), "Rotate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{n, x});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::Dstu7564Digest::ShiftRows
// Il2CppName: ShiftRows
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Digests::Dstu7564Digest::*)(::Array<uint64_t>*)>(&Org::BouncyCastle::Crypto::Digests::Dstu7564Digest::ShiftRows)> {
  const MethodInfo* get() {
    static auto* s = &classof(::Array<::Array<uint64_t>*>*)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::Dstu7564Digest*), "ShiftRows", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{s});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::Dstu7564Digest::SubBytes
// Il2CppName: SubBytes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Digests::Dstu7564Digest::*)(::Array<uint64_t>*)>(&Org::BouncyCastle::Crypto::Digests::Dstu7564Digest::SubBytes)> {
  const MethodInfo* get() {
    static auto* s = &classof(::Array<::Array<uint64_t>*>*)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::Dstu7564Digest*), "SubBytes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{s});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::Dstu7564Digest::Copy
// Il2CppName: Copy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Utilities::IMemoable* (Org::BouncyCastle::Crypto::Digests::Dstu7564Digest::*)()>(&Org::BouncyCastle::Crypto::Digests::Dstu7564Digest::Copy)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::Dstu7564Digest*), "Copy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::Dstu7564Digest::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Digests::Dstu7564Digest::*)(Org::BouncyCastle::Utilities::IMemoable*)>(&Org::BouncyCastle::Crypto::Digests::Dstu7564Digest::Reset)> {
  const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Utilities", "IMemoable")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::Dstu7564Digest*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::Dstu7564Digest::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Org::BouncyCastle::Crypto::Digests::Dstu7564Digest::_cctor)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::Dstu7564Digest*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
