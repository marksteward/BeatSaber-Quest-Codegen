// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Crypto.Digests.GeneralDigest
#include "Org/BouncyCastle/Crypto/Digests/GeneralDigest.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Utilities
namespace Org::BouncyCastle::Utilities {
  // Skipping declaration: IMemoable because it is already included!
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Crypto.Digests
namespace Org::BouncyCastle::Crypto::Digests {
  // Size: 0x4C
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.Digests.RipeMD160Digest
  class RipeMD160Digest : public Org::BouncyCastle::Crypto::Digests::GeneralDigest {
    public:
    // private System.Int32 H0
    // Size: 0x4
    // Offset: 0x28
    int H0;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 H1
    // Size: 0x4
    // Offset: 0x2C
    int H1;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 H2
    // Size: 0x4
    // Offset: 0x30
    int H2;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 H3
    // Size: 0x4
    // Offset: 0x34
    int H3;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 H4
    // Size: 0x4
    // Offset: 0x38
    int H4;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: H4 and: X
    char __padding4[0x4] = {};
    // private System.Int32[] X
    // Size: 0x8
    // Offset: 0x40
    ::Array<int>* X;
    // Field size check
    static_assert(sizeof(::Array<int>*) == 0x8);
    // private System.Int32 xOff
    // Size: 0x4
    // Offset: 0x48
    int xOff;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: RipeMD160Digest
    RipeMD160Digest(int H0_ = {}, int H1_ = {}, int H2_ = {}, int H3_ = {}, int H4_ = {}, ::Array<int>* X_ = {}, int xOff_ = {}) noexcept : H0{H0_}, H1{H1_}, H2{H2_}, H3{H3_}, H4{H4_}, X{X_}, xOff{xOff_} {}
    // public System.Void .ctor(Org.BouncyCastle.Crypto.Digests.RipeMD160Digest t)
    // Offset: 0x1CDBED0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RipeMD160Digest* New_ctor(Org::BouncyCastle::Crypto::Digests::RipeMD160Digest* t) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Crypto::Digests::RipeMD160Digest::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RipeMD160Digest*, creationType>(t)));
    }
    // private System.Void CopyIn(Org.BouncyCastle.Crypto.Digests.RipeMD160Digest t)
    // Offset: 0x1CDBF48
    void CopyIn(Org::BouncyCastle::Crypto::Digests::RipeMD160Digest* t);
    // private System.Void UnpackWord(System.Int32 word, System.Byte[] outBytes, System.Int32 outOff)
    // Offset: 0x1CDC160
    void UnpackWord(int word, ::Array<uint8_t>* outBytes, int outOff);
    // private System.Int32 RL(System.Int32 x, System.Int32 n)
    // Offset: 0x1CDC300
    int RL(int x, int n);
    // private System.Int32 F1(System.Int32 x, System.Int32 y, System.Int32 z)
    // Offset: 0x1CDC30C
    int F1(int x, int y, int z);
    // private System.Int32 F2(System.Int32 x, System.Int32 y, System.Int32 z)
    // Offset: 0x1CDC318
    int F2(int x, int y, int z);
    // private System.Int32 F3(System.Int32 x, System.Int32 y, System.Int32 z)
    // Offset: 0x1CDC328
    int F3(int x, int y, int z);
    // private System.Int32 F4(System.Int32 x, System.Int32 y, System.Int32 z)
    // Offset: 0x1CDC334
    int F4(int x, int y, int z);
    // private System.Int32 F5(System.Int32 x, System.Int32 y, System.Int32 z)
    // Offset: 0x1CDC344
    int F5(int x, int y, int z);
    // public System.Void .ctor()
    // Offset: 0x1CDBE60
    // Implemented from: Org.BouncyCastle.Crypto.Digests.GeneralDigest
    // Base method: System.Void GeneralDigest::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RipeMD160Digest* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Crypto::Digests::RipeMD160Digest::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RipeMD160Digest*, creationType>()));
    }
    // public override System.String get_AlgorithmName()
    // Offset: 0x1CDBFC4
    // Implemented from: Org.BouncyCastle.Crypto.Digests.GeneralDigest
    // Base method: System.String GeneralDigest::get_AlgorithmName()
    ::Il2CppString* get_AlgorithmName();
    // public override System.Int32 GetDigestSize()
    // Offset: 0x1CDC00C
    // Implemented from: Org.BouncyCastle.Crypto.Digests.GeneralDigest
    // Base method: System.Int32 GeneralDigest::GetDigestSize()
    int GetDigestSize();
    // override System.Void ProcessWord(System.Byte[] input, System.Int32 inOff)
    // Offset: 0x1CDC014
    // Implemented from: Org.BouncyCastle.Crypto.Digests.GeneralDigest
    // Base method: System.Void GeneralDigest::ProcessWord(System.Byte[] input, System.Int32 inOff)
    void ProcessWord(::Array<uint8_t>* input, int inOff);
    // override System.Void ProcessLength(System.Int64 bitLength)
    // Offset: 0x1CDC0DC
    // Implemented from: Org.BouncyCastle.Crypto.Digests.GeneralDigest
    // Base method: System.Void GeneralDigest::ProcessLength(System.Int64 bitLength)
    void ProcessLength(int64_t bitLength);
    // public override System.Int32 DoFinal(System.Byte[] output, System.Int32 outOff)
    // Offset: 0x1CDC1EC
    // Implemented from: Org.BouncyCastle.Crypto.Digests.GeneralDigest
    // Base method: System.Int32 GeneralDigest::DoFinal(System.Byte[] output, System.Int32 outOff)
    int DoFinal(::Array<uint8_t>* output, int outOff);
    // public override System.Void Reset()
    // Offset: 0x1CDC284
    // Implemented from: Org.BouncyCastle.Crypto.Digests.GeneralDigest
    // Base method: System.Void GeneralDigest::Reset()
    void Reset();
    // override System.Void ProcessBlock()
    // Offset: 0x1CDC350
    // Implemented from: Org.BouncyCastle.Crypto.Digests.GeneralDigest
    // Base method: System.Void GeneralDigest::ProcessBlock()
    void ProcessBlock();
    // public override Org.BouncyCastle.Utilities.IMemoable Copy()
    // Offset: 0x1CDDACC
    // Implemented from: Org.BouncyCastle.Crypto.Digests.GeneralDigest
    // Base method: Org.BouncyCastle.Utilities.IMemoable GeneralDigest::Copy()
    Org::BouncyCastle::Utilities::IMemoable* Copy();
    // public override System.Void Reset(Org.BouncyCastle.Utilities.IMemoable other)
    // Offset: 0x1CDDB2C
    // Implemented from: Org.BouncyCastle.Crypto.Digests.GeneralDigest
    // Base method: System.Void GeneralDigest::Reset(Org.BouncyCastle.Utilities.IMemoable other)
    void Reset(Org::BouncyCastle::Utilities::IMemoable* other);
  }; // Org.BouncyCastle.Crypto.Digests.RipeMD160Digest
  #pragma pack(pop)
  static check_size<sizeof(RipeMD160Digest), 72 + sizeof(int)> __Org_BouncyCastle_Crypto_Digests_RipeMD160DigestSizeCheck;
  static_assert(sizeof(RipeMD160Digest) == 0x4C);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Digests::RipeMD160Digest*, "Org.BouncyCastle.Crypto.Digests", "RipeMD160Digest");
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::RipeMD160Digest::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::RipeMD160Digest::CopyIn
// Il2CppName: CopyIn
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Digests::RipeMD160Digest::*)(Org::BouncyCastle::Crypto::Digests::RipeMD160Digest*)>(&Org::BouncyCastle::Crypto::Digests::RipeMD160Digest::CopyIn)> {
  const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Crypto.Digests", "RipeMD160Digest")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::RipeMD160Digest*), "CopyIn", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::RipeMD160Digest::UnpackWord
// Il2CppName: UnpackWord
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Digests::RipeMD160Digest::*)(int, ::Array<uint8_t>*, int)>(&Org::BouncyCastle::Crypto::Digests::RipeMD160Digest::UnpackWord)> {
  const MethodInfo* get() {
    static auto* word = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* outBytes = &classof(::Array<::Array<uint8_t>*>*)->byval_arg;
    static auto* outOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::RipeMD160Digest*), "UnpackWord", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{word, outBytes, outOff});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::RipeMD160Digest::RL
// Il2CppName: RL
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Digests::RipeMD160Digest::*)(int, int)>(&Org::BouncyCastle::Crypto::Digests::RipeMD160Digest::RL)> {
  const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* n = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::RipeMD160Digest*), "RL", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, n});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::RipeMD160Digest::F1
// Il2CppName: F1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Digests::RipeMD160Digest::*)(int, int, int)>(&Org::BouncyCastle::Crypto::Digests::RipeMD160Digest::F1)> {
  const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* y = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* z = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::RipeMD160Digest*), "F1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, y, z});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::RipeMD160Digest::F2
// Il2CppName: F2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Digests::RipeMD160Digest::*)(int, int, int)>(&Org::BouncyCastle::Crypto::Digests::RipeMD160Digest::F2)> {
  const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* y = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* z = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::RipeMD160Digest*), "F2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, y, z});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::RipeMD160Digest::F3
// Il2CppName: F3
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Digests::RipeMD160Digest::*)(int, int, int)>(&Org::BouncyCastle::Crypto::Digests::RipeMD160Digest::F3)> {
  const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* y = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* z = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::RipeMD160Digest*), "F3", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, y, z});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::RipeMD160Digest::F4
// Il2CppName: F4
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Digests::RipeMD160Digest::*)(int, int, int)>(&Org::BouncyCastle::Crypto::Digests::RipeMD160Digest::F4)> {
  const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* y = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* z = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::RipeMD160Digest*), "F4", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, y, z});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::RipeMD160Digest::F5
// Il2CppName: F5
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Digests::RipeMD160Digest::*)(int, int, int)>(&Org::BouncyCastle::Crypto::Digests::RipeMD160Digest::F5)> {
  const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* y = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* z = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::RipeMD160Digest*), "F5", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, y, z});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::RipeMD160Digest::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::RipeMD160Digest::get_AlgorithmName
// Il2CppName: get_AlgorithmName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (Org::BouncyCastle::Crypto::Digests::RipeMD160Digest::*)()>(&Org::BouncyCastle::Crypto::Digests::RipeMD160Digest::get_AlgorithmName)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::RipeMD160Digest*), "get_AlgorithmName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::RipeMD160Digest::GetDigestSize
// Il2CppName: GetDigestSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Digests::RipeMD160Digest::*)()>(&Org::BouncyCastle::Crypto::Digests::RipeMD160Digest::GetDigestSize)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::RipeMD160Digest*), "GetDigestSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::RipeMD160Digest::ProcessWord
// Il2CppName: ProcessWord
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Digests::RipeMD160Digest::*)(::Array<uint8_t>*, int)>(&Org::BouncyCastle::Crypto::Digests::RipeMD160Digest::ProcessWord)> {
  const MethodInfo* get() {
    static auto* input = &classof(::Array<::Array<uint8_t>*>*)->byval_arg;
    static auto* inOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::RipeMD160Digest*), "ProcessWord", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input, inOff});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::RipeMD160Digest::ProcessLength
// Il2CppName: ProcessLength
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Digests::RipeMD160Digest::*)(int64_t)>(&Org::BouncyCastle::Crypto::Digests::RipeMD160Digest::ProcessLength)> {
  const MethodInfo* get() {
    static auto* bitLength = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::RipeMD160Digest*), "ProcessLength", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bitLength});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::RipeMD160Digest::DoFinal
// Il2CppName: DoFinal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Digests::RipeMD160Digest::*)(::Array<uint8_t>*, int)>(&Org::BouncyCastle::Crypto::Digests::RipeMD160Digest::DoFinal)> {
  const MethodInfo* get() {
    static auto* output = &classof(::Array<::Array<uint8_t>*>*)->byval_arg;
    static auto* outOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::RipeMD160Digest*), "DoFinal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{output, outOff});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::RipeMD160Digest::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Digests::RipeMD160Digest::*)()>(&Org::BouncyCastle::Crypto::Digests::RipeMD160Digest::Reset)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::RipeMD160Digest*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::RipeMD160Digest::ProcessBlock
// Il2CppName: ProcessBlock
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Digests::RipeMD160Digest::*)()>(&Org::BouncyCastle::Crypto::Digests::RipeMD160Digest::ProcessBlock)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::RipeMD160Digest*), "ProcessBlock", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::RipeMD160Digest::Copy
// Il2CppName: Copy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Utilities::IMemoable* (Org::BouncyCastle::Crypto::Digests::RipeMD160Digest::*)()>(&Org::BouncyCastle::Crypto::Digests::RipeMD160Digest::Copy)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::RipeMD160Digest*), "Copy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::RipeMD160Digest::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Digests::RipeMD160Digest::*)(Org::BouncyCastle::Utilities::IMemoable*)>(&Org::BouncyCastle::Crypto::Digests::RipeMD160Digest::Reset)> {
  const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Utilities", "IMemoable")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::RipeMD160Digest*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
