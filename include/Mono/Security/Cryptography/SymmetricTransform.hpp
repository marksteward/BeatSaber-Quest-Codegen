// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Security.Cryptography.ICryptoTransform
#include "System/Security/Cryptography/ICryptoTransform.hpp"
// Including type: System.Security.Cryptography.PaddingMode
#include "System/Security/Cryptography/PaddingMode.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Security::Cryptography
namespace System::Security::Cryptography {
  // Forward declaring type: SymmetricAlgorithm
  class SymmetricAlgorithm;
  // Forward declaring type: RandomNumberGenerator
  class RandomNumberGenerator;
}
// Completed forward declares
// Type namespace: Mono.Security.Cryptography
namespace Mono::Security::Cryptography {
  // Size: 0x58
  #pragma pack(push, 1)
  // Autogenerated type: Mono.Security.Cryptography.SymmetricTransform
  // [TokenAttribute] Offset: FFFFFFFF
  class SymmetricTransform : public ::Il2CppObject/*, public System::Security::Cryptography::ICryptoTransform*/ {
    public:
    // protected System.Security.Cryptography.SymmetricAlgorithm algo
    // Size: 0x8
    // Offset: 0x10
    System::Security::Cryptography::SymmetricAlgorithm* algo;
    // Field size check
    static_assert(sizeof(System::Security::Cryptography::SymmetricAlgorithm*) == 0x8);
    // protected System.Boolean encrypt
    // Size: 0x1
    // Offset: 0x18
    bool encrypt;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: encrypt and: BlockSizeByte
    char __padding1[0x3] = {};
    // protected System.Int32 BlockSizeByte
    // Size: 0x4
    // Offset: 0x1C
    int BlockSizeByte;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // protected System.Byte[] temp
    // Size: 0x8
    // Offset: 0x20
    ::Array<uint8_t>* temp;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // protected System.Byte[] temp2
    // Size: 0x8
    // Offset: 0x28
    ::Array<uint8_t>* temp2;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // private System.Byte[] workBuff
    // Size: 0x8
    // Offset: 0x30
    ::Array<uint8_t>* workBuff;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // private System.Byte[] workout
    // Size: 0x8
    // Offset: 0x38
    ::Array<uint8_t>* workout;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // protected System.Security.Cryptography.PaddingMode padmode
    // Size: 0x4
    // Offset: 0x40
    System::Security::Cryptography::PaddingMode padmode;
    // Field size check
    static_assert(sizeof(System::Security::Cryptography::PaddingMode) == 0x4);
    // protected System.Int32 FeedBackByte
    // Size: 0x4
    // Offset: 0x44
    int FeedBackByte;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Boolean m_disposed
    // Size: 0x1
    // Offset: 0x48
    bool m_disposed;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // protected System.Boolean lastBlock
    // Size: 0x1
    // Offset: 0x49
    bool lastBlock;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: lastBlock and: rng
    char __padding10[0x6] = {};
    // private System.Security.Cryptography.RandomNumberGenerator _rng
    // Size: 0x8
    // Offset: 0x50
    System::Security::Cryptography::RandomNumberGenerator* rng;
    // Field size check
    static_assert(sizeof(System::Security::Cryptography::RandomNumberGenerator*) == 0x8);
    // Creating value type constructor for type: SymmetricTransform
    SymmetricTransform(System::Security::Cryptography::SymmetricAlgorithm* algo_ = {}, bool encrypt_ = {}, int BlockSizeByte_ = {}, ::Array<uint8_t>* temp_ = {}, ::Array<uint8_t>* temp2_ = {}, ::Array<uint8_t>* workBuff_ = {}, ::Array<uint8_t>* workout_ = {}, System::Security::Cryptography::PaddingMode padmode_ = {}, int FeedBackByte_ = {}, bool m_disposed_ = {}, bool lastBlock_ = {}, System::Security::Cryptography::RandomNumberGenerator* rng_ = {}) noexcept : algo{algo_}, encrypt{encrypt_}, BlockSizeByte{BlockSizeByte_}, temp{temp_}, temp2{temp2_}, workBuff{workBuff_}, workout{workout_}, padmode{padmode_}, FeedBackByte{FeedBackByte_}, m_disposed{m_disposed_}, lastBlock{lastBlock_}, rng{rng_} {}
    // Creating interface conversion operator: operator System::Security::Cryptography::ICryptoTransform
    operator System::Security::Cryptography::ICryptoTransform() noexcept {
      return *reinterpret_cast<System::Security::Cryptography::ICryptoTransform*>(this);
    }
    // public System.Boolean get_CanTransformMultipleBlocks()
    // Offset: 0x1A477F0
    bool get_CanTransformMultipleBlocks();
    // public System.Int32 get_InputBlockSize()
    // Offset: 0x1A477F8
    int get_InputBlockSize();
    // public System.Int32 get_OutputBlockSize()
    // Offset: 0x1A47800
    int get_OutputBlockSize();
    // private System.Boolean get_KeepLastBlock()
    // Offset: 0x1A48158
    bool get_KeepLastBlock();
    // public System.Void .ctor(System.Security.Cryptography.SymmetricAlgorithm symmAlgo, System.Boolean encryption, System.Byte[] rgbIV)
    // Offset: 0x1A473D8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SymmetricTransform* New_ctor(System::Security::Cryptography::SymmetricAlgorithm* symmAlgo, bool encryption, ::Array<uint8_t>* rgbIV) {
      static auto ___internal__logger = ::Logger::get().WithContext("Mono::Security::Cryptography::SymmetricTransform::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SymmetricTransform*, creationType>(symmAlgo, encryption, rgbIV)));
    }
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0x1A47710
    void System_IDisposable_Dispose();
    // protected System.Void Dispose(System.Boolean disposing)
    // Offset: 0x1A4778C
    void Dispose(bool disposing);
    // protected System.Void Transform(System.Byte[] input, System.Byte[] output)
    // Offset: 0x1A47808
    void Transform(::Array<uint8_t>* input, ::Array<uint8_t>* output);
    // protected System.Void ECB(System.Byte[] input, System.Byte[] output)
    // Offset: 0xFFFFFFFF
    void ECB(::Array<uint8_t>* input, ::Array<uint8_t>* output);
    // protected System.Void CBC(System.Byte[] input, System.Byte[] output)
    // Offset: 0x1A479BC
    void CBC(::Array<uint8_t>* input, ::Array<uint8_t>* output);
    // protected System.Void CFB(System.Byte[] input, System.Byte[] output)
    // Offset: 0x1A47B34
    void CFB(::Array<uint8_t>* input, ::Array<uint8_t>* output);
    // protected System.Void OFB(System.Byte[] input, System.Byte[] output)
    // Offset: 0x1A47D10
    void OFB(::Array<uint8_t>* input, ::Array<uint8_t>* output);
    // protected System.Void CTS(System.Byte[] input, System.Byte[] output)
    // Offset: 0x1A47D7C
    void CTS(::Array<uint8_t>* input, ::Array<uint8_t>* output);
    // private System.Void CheckInput(System.Byte[] inputBuffer, System.Int32 inputOffset, System.Int32 inputCount)
    // Offset: 0x1A47DE8
    void CheckInput(::Array<uint8_t>* inputBuffer, int inputOffset, int inputCount);
    // public System.Int32 TransformBlock(System.Byte[] inputBuffer, System.Int32 inputOffset, System.Int32 inputCount, System.Byte[] outputBuffer, System.Int32 outputOffset)
    // Offset: 0x1A47F40
    int TransformBlock(::Array<uint8_t>* inputBuffer, int inputOffset, int inputCount, ::Array<uint8_t>* outputBuffer, int outputOffset);
    // private System.Int32 InternalTransformBlock(System.Byte[] inputBuffer, System.Int32 inputOffset, System.Int32 inputCount, System.Byte[] outputBuffer, System.Int32 outputOffset)
    // Offset: 0x1A4817C
    int InternalTransformBlock(::Array<uint8_t>* inputBuffer, int inputOffset, int inputCount, ::Array<uint8_t>* outputBuffer, int outputOffset);
    // private System.Void Random(System.Byte[] buffer, System.Int32 start, System.Int32 length)
    // Offset: 0x1A4835C
    void Random(::Array<uint8_t>* buffer, int start, int length);
    // private System.Void ThrowBadPaddingException(System.Security.Cryptography.PaddingMode padding, System.Int32 length, System.Int32 position)
    // Offset: 0x1A4841C
    void ThrowBadPaddingException(System::Security::Cryptography::PaddingMode padding, int length, int position);
    // protected System.Byte[] FinalEncrypt(System.Byte[] inputBuffer, System.Int32 inputOffset, System.Int32 inputCount)
    // Offset: 0x1A48588
    ::Array<uint8_t>* FinalEncrypt(::Array<uint8_t>* inputBuffer, int inputOffset, int inputCount);
    // protected System.Byte[] FinalDecrypt(System.Byte[] inputBuffer, System.Int32 inputOffset, System.Int32 inputCount)
    // Offset: 0x1A4882C
    ::Array<uint8_t>* FinalDecrypt(::Array<uint8_t>* inputBuffer, int inputOffset, int inputCount);
    // public System.Byte[] TransformFinalBlock(System.Byte[] inputBuffer, System.Int32 inputOffset, System.Int32 inputCount)
    // Offset: 0x1A48AE0
    ::Array<uint8_t>* TransformFinalBlock(::Array<uint8_t>* inputBuffer, int inputOffset, int inputCount);
    // protected override System.Void Finalize()
    // Offset: 0x1A4769C
    // Implemented from: System.Object
    // Base method: System.Void Object::Finalize()
    void Finalize();
  }; // Mono.Security.Cryptography.SymmetricTransform
  #pragma pack(pop)
  static check_size<sizeof(SymmetricTransform), 80 + sizeof(System::Security::Cryptography::RandomNumberGenerator*)> __Mono_Security_Cryptography_SymmetricTransformSizeCheck;
  static_assert(sizeof(SymmetricTransform) == 0x58);
}
DEFINE_IL2CPP_ARG_TYPE(Mono::Security::Cryptography::SymmetricTransform*, "Mono.Security.Cryptography", "SymmetricTransform");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Mono::Security::Cryptography::SymmetricTransform::get_CanTransformMultipleBlocks
// Il2CppName: get_CanTransformMultipleBlocks
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Mono::Security::Cryptography::SymmetricTransform::*)()>(&Mono::Security::Cryptography::SymmetricTransform::get_CanTransformMultipleBlocks)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::SymmetricTransform*), "get_CanTransformMultipleBlocks", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::Cryptography::SymmetricTransform::get_InputBlockSize
// Il2CppName: get_InputBlockSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Mono::Security::Cryptography::SymmetricTransform::*)()>(&Mono::Security::Cryptography::SymmetricTransform::get_InputBlockSize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::SymmetricTransform*), "get_InputBlockSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::Cryptography::SymmetricTransform::get_OutputBlockSize
// Il2CppName: get_OutputBlockSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Mono::Security::Cryptography::SymmetricTransform::*)()>(&Mono::Security::Cryptography::SymmetricTransform::get_OutputBlockSize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::SymmetricTransform*), "get_OutputBlockSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::Cryptography::SymmetricTransform::get_KeepLastBlock
// Il2CppName: get_KeepLastBlock
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Mono::Security::Cryptography::SymmetricTransform::*)()>(&Mono::Security::Cryptography::SymmetricTransform::get_KeepLastBlock)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::SymmetricTransform*), "get_KeepLastBlock", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::Cryptography::SymmetricTransform::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Mono::Security::Cryptography::SymmetricTransform::System_IDisposable_Dispose
// Il2CppName: System.IDisposable.Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Security::Cryptography::SymmetricTransform::*)()>(&Mono::Security::Cryptography::SymmetricTransform::System_IDisposable_Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::SymmetricTransform*), "System.IDisposable.Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::Cryptography::SymmetricTransform::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Security::Cryptography::SymmetricTransform::*)(bool)>(&Mono::Security::Cryptography::SymmetricTransform::Dispose)> {
  static const MethodInfo* get() {
    static auto* disposing = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::SymmetricTransform*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{disposing});
  }
};
// Writing MetadataGetter for method: Mono::Security::Cryptography::SymmetricTransform::Transform
// Il2CppName: Transform
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Security::Cryptography::SymmetricTransform::*)(::Array<uint8_t>*, ::Array<uint8_t>*)>(&Mono::Security::Cryptography::SymmetricTransform::Transform)> {
  static const MethodInfo* get() {
    static auto* input = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* output = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::SymmetricTransform*), "Transform", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input, output});
  }
};
// Writing MetadataGetter for method: Mono::Security::Cryptography::SymmetricTransform::ECB
// Il2CppName: ECB
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Security::Cryptography::SymmetricTransform::*)(::Array<uint8_t>*, ::Array<uint8_t>*)>(&Mono::Security::Cryptography::SymmetricTransform::ECB)> {
  static const MethodInfo* get() {
    static auto* input = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* output = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::SymmetricTransform*), "ECB", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input, output});
  }
};
// Writing MetadataGetter for method: Mono::Security::Cryptography::SymmetricTransform::CBC
// Il2CppName: CBC
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Security::Cryptography::SymmetricTransform::*)(::Array<uint8_t>*, ::Array<uint8_t>*)>(&Mono::Security::Cryptography::SymmetricTransform::CBC)> {
  static const MethodInfo* get() {
    static auto* input = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* output = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::SymmetricTransform*), "CBC", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input, output});
  }
};
// Writing MetadataGetter for method: Mono::Security::Cryptography::SymmetricTransform::CFB
// Il2CppName: CFB
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Security::Cryptography::SymmetricTransform::*)(::Array<uint8_t>*, ::Array<uint8_t>*)>(&Mono::Security::Cryptography::SymmetricTransform::CFB)> {
  static const MethodInfo* get() {
    static auto* input = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* output = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::SymmetricTransform*), "CFB", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input, output});
  }
};
// Writing MetadataGetter for method: Mono::Security::Cryptography::SymmetricTransform::OFB
// Il2CppName: OFB
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Security::Cryptography::SymmetricTransform::*)(::Array<uint8_t>*, ::Array<uint8_t>*)>(&Mono::Security::Cryptography::SymmetricTransform::OFB)> {
  static const MethodInfo* get() {
    static auto* input = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* output = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::SymmetricTransform*), "OFB", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input, output});
  }
};
// Writing MetadataGetter for method: Mono::Security::Cryptography::SymmetricTransform::CTS
// Il2CppName: CTS
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Security::Cryptography::SymmetricTransform::*)(::Array<uint8_t>*, ::Array<uint8_t>*)>(&Mono::Security::Cryptography::SymmetricTransform::CTS)> {
  static const MethodInfo* get() {
    static auto* input = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* output = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::SymmetricTransform*), "CTS", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input, output});
  }
};
// Writing MetadataGetter for method: Mono::Security::Cryptography::SymmetricTransform::CheckInput
// Il2CppName: CheckInput
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Security::Cryptography::SymmetricTransform::*)(::Array<uint8_t>*, int, int)>(&Mono::Security::Cryptography::SymmetricTransform::CheckInput)> {
  static const MethodInfo* get() {
    static auto* inputBuffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* inputOffset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* inputCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::SymmetricTransform*), "CheckInput", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{inputBuffer, inputOffset, inputCount});
  }
};
// Writing MetadataGetter for method: Mono::Security::Cryptography::SymmetricTransform::TransformBlock
// Il2CppName: TransformBlock
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Mono::Security::Cryptography::SymmetricTransform::*)(::Array<uint8_t>*, int, int, ::Array<uint8_t>*, int)>(&Mono::Security::Cryptography::SymmetricTransform::TransformBlock)> {
  static const MethodInfo* get() {
    static auto* inputBuffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* inputOffset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* inputCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* outputBuffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* outputOffset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::SymmetricTransform*), "TransformBlock", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{inputBuffer, inputOffset, inputCount, outputBuffer, outputOffset});
  }
};
// Writing MetadataGetter for method: Mono::Security::Cryptography::SymmetricTransform::InternalTransformBlock
// Il2CppName: InternalTransformBlock
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Mono::Security::Cryptography::SymmetricTransform::*)(::Array<uint8_t>*, int, int, ::Array<uint8_t>*, int)>(&Mono::Security::Cryptography::SymmetricTransform::InternalTransformBlock)> {
  static const MethodInfo* get() {
    static auto* inputBuffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* inputOffset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* inputCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* outputBuffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* outputOffset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::SymmetricTransform*), "InternalTransformBlock", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{inputBuffer, inputOffset, inputCount, outputBuffer, outputOffset});
  }
};
// Writing MetadataGetter for method: Mono::Security::Cryptography::SymmetricTransform::Random
// Il2CppName: Random
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Security::Cryptography::SymmetricTransform::*)(::Array<uint8_t>*, int, int)>(&Mono::Security::Cryptography::SymmetricTransform::Random)> {
  static const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* start = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* length = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::SymmetricTransform*), "Random", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, start, length});
  }
};
// Writing MetadataGetter for method: Mono::Security::Cryptography::SymmetricTransform::ThrowBadPaddingException
// Il2CppName: ThrowBadPaddingException
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Security::Cryptography::SymmetricTransform::*)(System::Security::Cryptography::PaddingMode, int, int)>(&Mono::Security::Cryptography::SymmetricTransform::ThrowBadPaddingException)> {
  static const MethodInfo* get() {
    static auto* padding = &::il2cpp_utils::GetClassFromName("System.Security.Cryptography", "PaddingMode")->byval_arg;
    static auto* length = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* position = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::SymmetricTransform*), "ThrowBadPaddingException", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{padding, length, position});
  }
};
// Writing MetadataGetter for method: Mono::Security::Cryptography::SymmetricTransform::FinalEncrypt
// Il2CppName: FinalEncrypt
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<uint8_t>* (Mono::Security::Cryptography::SymmetricTransform::*)(::Array<uint8_t>*, int, int)>(&Mono::Security::Cryptography::SymmetricTransform::FinalEncrypt)> {
  static const MethodInfo* get() {
    static auto* inputBuffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* inputOffset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* inputCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::SymmetricTransform*), "FinalEncrypt", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{inputBuffer, inputOffset, inputCount});
  }
};
// Writing MetadataGetter for method: Mono::Security::Cryptography::SymmetricTransform::FinalDecrypt
// Il2CppName: FinalDecrypt
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<uint8_t>* (Mono::Security::Cryptography::SymmetricTransform::*)(::Array<uint8_t>*, int, int)>(&Mono::Security::Cryptography::SymmetricTransform::FinalDecrypt)> {
  static const MethodInfo* get() {
    static auto* inputBuffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* inputOffset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* inputCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::SymmetricTransform*), "FinalDecrypt", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{inputBuffer, inputOffset, inputCount});
  }
};
// Writing MetadataGetter for method: Mono::Security::Cryptography::SymmetricTransform::TransformFinalBlock
// Il2CppName: TransformFinalBlock
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<uint8_t>* (Mono::Security::Cryptography::SymmetricTransform::*)(::Array<uint8_t>*, int, int)>(&Mono::Security::Cryptography::SymmetricTransform::TransformFinalBlock)> {
  static const MethodInfo* get() {
    static auto* inputBuffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* inputOffset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* inputCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::SymmetricTransform*), "TransformFinalBlock", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{inputBuffer, inputOffset, inputCount});
  }
};
// Writing MetadataGetter for method: Mono::Security::Cryptography::SymmetricTransform::Finalize
// Il2CppName: Finalize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Security::Cryptography::SymmetricTransform::*)()>(&Mono::Security::Cryptography::SymmetricTransform::Finalize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::SymmetricTransform*), "Finalize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
