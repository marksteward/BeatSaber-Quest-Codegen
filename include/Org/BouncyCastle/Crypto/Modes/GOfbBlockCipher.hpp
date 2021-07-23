// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Crypto.IBlockCipher
#include "Org/BouncyCastle/Crypto/IBlockCipher.hpp"
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
// Type namespace: Org.BouncyCastle.Crypto.Modes
namespace Org::BouncyCastle::Crypto::Modes {
  // Size: 0x44
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.Modes.GOfbBlockCipher
  // [TokenAttribute] Offset: FFFFFFFF
  class GOfbBlockCipher : public ::Il2CppObject/*, public Org::BouncyCastle::Crypto::IBlockCipher*/ {
    public:
    // private System.Byte[] IV
    // Size: 0x8
    // Offset: 0x10
    ::Array<uint8_t>* IV;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // private System.Byte[] ofbV
    // Size: 0x8
    // Offset: 0x18
    ::Array<uint8_t>* ofbV;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // private System.Byte[] ofbOutV
    // Size: 0x8
    // Offset: 0x20
    ::Array<uint8_t>* ofbOutV;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // private readonly System.Int32 blockSize
    // Size: 0x4
    // Offset: 0x28
    int blockSize;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: blockSize and: cipher
    char __padding3[0x4] = {};
    // private readonly Org.BouncyCastle.Crypto.IBlockCipher cipher
    // Size: 0x8
    // Offset: 0x30
    Org::BouncyCastle::Crypto::IBlockCipher* cipher;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Crypto::IBlockCipher*) == 0x8);
    // private System.Boolean firstStep
    // Size: 0x1
    // Offset: 0x38
    bool firstStep;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: firstStep and: N3
    char __padding5[0x3] = {};
    // private System.Int32 N3
    // Size: 0x4
    // Offset: 0x3C
    int N3;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 N4
    // Size: 0x4
    // Offset: 0x40
    int N4;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: GOfbBlockCipher
    GOfbBlockCipher(::Array<uint8_t>* IV_ = {}, ::Array<uint8_t>* ofbV_ = {}, ::Array<uint8_t>* ofbOutV_ = {}, int blockSize_ = {}, Org::BouncyCastle::Crypto::IBlockCipher* cipher_ = {}, bool firstStep_ = {}, int N3_ = {}, int N4_ = {}) noexcept : IV{IV_}, ofbV{ofbV_}, ofbOutV{ofbOutV_}, blockSize{blockSize_}, cipher{cipher_}, firstStep{firstStep_}, N3{N3_}, N4{N4_} {}
    // Creating interface conversion operator: operator Org::BouncyCastle::Crypto::IBlockCipher
    operator Org::BouncyCastle::Crypto::IBlockCipher() noexcept {
      return *reinterpret_cast<Org::BouncyCastle::Crypto::IBlockCipher*>(this);
    }
    // Get instance field: private System.Byte[] IV
    ::Array<uint8_t>* _get_IV();
    // Set instance field: private System.Byte[] IV
    void _set_IV(::Array<uint8_t>* value);
    // Get instance field: private System.Byte[] ofbV
    ::Array<uint8_t>* _get_ofbV();
    // Set instance field: private System.Byte[] ofbV
    void _set_ofbV(::Array<uint8_t>* value);
    // Get instance field: private System.Byte[] ofbOutV
    ::Array<uint8_t>* _get_ofbOutV();
    // Set instance field: private System.Byte[] ofbOutV
    void _set_ofbOutV(::Array<uint8_t>* value);
    // Get instance field: private readonly System.Int32 blockSize
    int _get_blockSize();
    // Set instance field: private readonly System.Int32 blockSize
    void _set_blockSize(int value);
    // Get instance field: private readonly Org.BouncyCastle.Crypto.IBlockCipher cipher
    Org::BouncyCastle::Crypto::IBlockCipher* _get_cipher();
    // Set instance field: private readonly Org.BouncyCastle.Crypto.IBlockCipher cipher
    void _set_cipher(Org::BouncyCastle::Crypto::IBlockCipher* value);
    // Get instance field: private System.Boolean firstStep
    bool _get_firstStep();
    // Set instance field: private System.Boolean firstStep
    void _set_firstStep(bool value);
    // Get instance field: private System.Int32 N3
    int _get_N3();
    // Set instance field: private System.Int32 N3
    void _set_N3(int value);
    // Get instance field: private System.Int32 N4
    int _get_N4();
    // Set instance field: private System.Int32 N4
    void _set_N4(int value);
    // public System.String get_AlgorithmName()
    // Offset: 0x18C91CC
    ::Il2CppString* get_AlgorithmName();
    // public System.Boolean get_IsPartialBlockOkay()
    // Offset: 0x18C9290
    bool get_IsPartialBlockOkay();
    // public System.Void .ctor(Org.BouncyCastle.Crypto.IBlockCipher cipher)
    // Offset: 0x18C8C84
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GOfbBlockCipher* New_ctor(Org::BouncyCastle::Crypto::IBlockCipher* cipher) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Crypto::Modes::GOfbBlockCipher::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GOfbBlockCipher*, creationType>(cipher)));
    }
    // public System.Void Init(System.Boolean forEncryption, Org.BouncyCastle.Crypto.ICipherParameters parameters)
    // Offset: 0x18C8F14
    void Init(bool forEncryption, Org::BouncyCastle::Crypto::ICipherParameters* parameters);
    // public System.Int32 GetBlockSize()
    // Offset: 0x18C9298
    int GetBlockSize();
    // public System.Int32 ProcessBlock(System.Byte[] input, System.Int32 inOff, System.Byte[] output, System.Int32 outOff)
    // Offset: 0x18C92A0
    int ProcessBlock(::Array<uint8_t>* input, int inOff, ::Array<uint8_t>* output, int outOff);
    // public System.Void Reset()
    // Offset: 0x18C90F8
    void Reset();
    // private System.Int32 bytesToint(System.Byte[] inBytes, System.Int32 inOff)
    // Offset: 0x18C9648
    int bytesToint(::Array<uint8_t>* inBytes, int inOff);
    // private System.Void intTobytes(System.Int32 num, System.Byte[] outBytes, System.Int32 outOff)
    // Offset: 0x18C96C8
    void intTobytes(int num, ::Array<uint8_t>* outBytes, int outOff);
  }; // Org.BouncyCastle.Crypto.Modes.GOfbBlockCipher
  #pragma pack(pop)
  static check_size<sizeof(GOfbBlockCipher), 64 + sizeof(int)> __Org_BouncyCastle_Crypto_Modes_GOfbBlockCipherSizeCheck;
  static_assert(sizeof(GOfbBlockCipher) == 0x44);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Modes::GOfbBlockCipher*, "Org.BouncyCastle.Crypto.Modes", "GOfbBlockCipher");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Modes::GOfbBlockCipher::get_AlgorithmName
// Il2CppName: get_AlgorithmName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (Org::BouncyCastle::Crypto::Modes::GOfbBlockCipher::*)()>(&Org::BouncyCastle::Crypto::Modes::GOfbBlockCipher::get_AlgorithmName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Modes::GOfbBlockCipher*), "get_AlgorithmName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Modes::GOfbBlockCipher::get_IsPartialBlockOkay
// Il2CppName: get_IsPartialBlockOkay
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Org::BouncyCastle::Crypto::Modes::GOfbBlockCipher::*)()>(&Org::BouncyCastle::Crypto::Modes::GOfbBlockCipher::get_IsPartialBlockOkay)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Modes::GOfbBlockCipher*), "get_IsPartialBlockOkay", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Modes::GOfbBlockCipher::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Modes::GOfbBlockCipher::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Modes::GOfbBlockCipher::*)(bool, Org::BouncyCastle::Crypto::ICipherParameters*)>(&Org::BouncyCastle::Crypto::Modes::GOfbBlockCipher::Init)> {
  static const MethodInfo* get() {
    static auto* forEncryption = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* parameters = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Crypto", "ICipherParameters")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Modes::GOfbBlockCipher*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{forEncryption, parameters});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Modes::GOfbBlockCipher::GetBlockSize
// Il2CppName: GetBlockSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Modes::GOfbBlockCipher::*)()>(&Org::BouncyCastle::Crypto::Modes::GOfbBlockCipher::GetBlockSize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Modes::GOfbBlockCipher*), "GetBlockSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Modes::GOfbBlockCipher::ProcessBlock
// Il2CppName: ProcessBlock
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Modes::GOfbBlockCipher::*)(::Array<uint8_t>*, int, ::Array<uint8_t>*, int)>(&Org::BouncyCastle::Crypto::Modes::GOfbBlockCipher::ProcessBlock)> {
  static const MethodInfo* get() {
    static auto* input = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* inOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* output = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* outOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Modes::GOfbBlockCipher*), "ProcessBlock", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input, inOff, output, outOff});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Modes::GOfbBlockCipher::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Modes::GOfbBlockCipher::*)()>(&Org::BouncyCastle::Crypto::Modes::GOfbBlockCipher::Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Modes::GOfbBlockCipher*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Modes::GOfbBlockCipher::bytesToint
// Il2CppName: bytesToint
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Modes::GOfbBlockCipher::*)(::Array<uint8_t>*, int)>(&Org::BouncyCastle::Crypto::Modes::GOfbBlockCipher::bytesToint)> {
  static const MethodInfo* get() {
    static auto* inBytes = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* inOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Modes::GOfbBlockCipher*), "bytesToint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{inBytes, inOff});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Modes::GOfbBlockCipher::intTobytes
// Il2CppName: intTobytes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Modes::GOfbBlockCipher::*)(int, ::Array<uint8_t>*, int)>(&Org::BouncyCastle::Crypto::Modes::GOfbBlockCipher::intTobytes)> {
  static const MethodInfo* get() {
    static auto* num = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* outBytes = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* outOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Modes::GOfbBlockCipher*), "intTobytes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{num, outBytes, outOff});
  }
};
