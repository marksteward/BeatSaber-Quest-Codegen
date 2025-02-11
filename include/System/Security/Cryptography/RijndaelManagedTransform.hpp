// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Security.Cryptography.ICryptoTransform
#include "System/Security/Cryptography/ICryptoTransform.hpp"
// Including type: System.Security.Cryptography.CipherMode
#include "System/Security/Cryptography/CipherMode.hpp"
// Including type: System.Security.Cryptography.PaddingMode
#include "System/Security/Cryptography/PaddingMode.hpp"
// Including type: System.Security.Cryptography.RijndaelManagedTransformMode
#include "System/Security/Cryptography/RijndaelManagedTransformMode.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.Security.Cryptography
namespace System::Security::Cryptography {
  // Size: 0x80
  #pragma pack(push, 1)
  // Autogenerated type: System.Security.Cryptography.RijndaelManagedTransform
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: E16D74
  class RijndaelManagedTransform : public ::Il2CppObject/*, public System::Security::Cryptography::ICryptoTransform*/ {
    public:
    // private System.Security.Cryptography.CipherMode m_cipherMode
    // Size: 0x4
    // Offset: 0x10
    System::Security::Cryptography::CipherMode m_cipherMode;
    // Field size check
    static_assert(sizeof(System::Security::Cryptography::CipherMode) == 0x4);
    // private System.Security.Cryptography.PaddingMode m_paddingValue
    // Size: 0x4
    // Offset: 0x14
    System::Security::Cryptography::PaddingMode m_paddingValue;
    // Field size check
    static_assert(sizeof(System::Security::Cryptography::PaddingMode) == 0x4);
    // private System.Security.Cryptography.RijndaelManagedTransformMode m_transformMode
    // Size: 0x4
    // Offset: 0x18
    System::Security::Cryptography::RijndaelManagedTransformMode m_transformMode;
    // Field size check
    static_assert(sizeof(System::Security::Cryptography::RijndaelManagedTransformMode) == 0x4);
    // private System.Int32 m_blockSizeBits
    // Size: 0x4
    // Offset: 0x1C
    int m_blockSizeBits;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 m_blockSizeBytes
    // Size: 0x4
    // Offset: 0x20
    int m_blockSizeBytes;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 m_inputBlockSize
    // Size: 0x4
    // Offset: 0x24
    int m_inputBlockSize;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 m_outputBlockSize
    // Size: 0x4
    // Offset: 0x28
    int m_outputBlockSize;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: m_outputBlockSize and: m_encryptKeyExpansion
    char __padding6[0x4] = {};
    // private System.Int32[] m_encryptKeyExpansion
    // Size: 0x8
    // Offset: 0x30
    ::Array<int>* m_encryptKeyExpansion;
    // Field size check
    static_assert(sizeof(::Array<int>*) == 0x8);
    // private System.Int32[] m_decryptKeyExpansion
    // Size: 0x8
    // Offset: 0x38
    ::Array<int>* m_decryptKeyExpansion;
    // Field size check
    static_assert(sizeof(::Array<int>*) == 0x8);
    // private System.Int32 m_Nr
    // Size: 0x4
    // Offset: 0x40
    int m_Nr;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 m_Nb
    // Size: 0x4
    // Offset: 0x44
    int m_Nb;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 m_Nk
    // Size: 0x4
    // Offset: 0x48
    int m_Nk;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: m_Nk and: m_encryptindex
    char __padding11[0x4] = {};
    // private System.Int32[] m_encryptindex
    // Size: 0x8
    // Offset: 0x50
    ::Array<int>* m_encryptindex;
    // Field size check
    static_assert(sizeof(::Array<int>*) == 0x8);
    // private System.Int32[] m_decryptindex
    // Size: 0x8
    // Offset: 0x58
    ::Array<int>* m_decryptindex;
    // Field size check
    static_assert(sizeof(::Array<int>*) == 0x8);
    // private System.Int32[] m_IV
    // Size: 0x8
    // Offset: 0x60
    ::Array<int>* m_IV;
    // Field size check
    static_assert(sizeof(::Array<int>*) == 0x8);
    // private System.Int32[] m_lastBlockBuffer
    // Size: 0x8
    // Offset: 0x68
    ::Array<int>* m_lastBlockBuffer;
    // Field size check
    static_assert(sizeof(::Array<int>*) == 0x8);
    // private System.Byte[] m_depadBuffer
    // Size: 0x8
    // Offset: 0x70
    ::Array<uint8_t>* m_depadBuffer;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // private System.Byte[] m_shiftRegister
    // Size: 0x8
    // Offset: 0x78
    ::Array<uint8_t>* m_shiftRegister;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // Creating value type constructor for type: RijndaelManagedTransform
    RijndaelManagedTransform(System::Security::Cryptography::CipherMode m_cipherMode_ = {}, System::Security::Cryptography::PaddingMode m_paddingValue_ = {}, System::Security::Cryptography::RijndaelManagedTransformMode m_transformMode_ = {}, int m_blockSizeBits_ = {}, int m_blockSizeBytes_ = {}, int m_inputBlockSize_ = {}, int m_outputBlockSize_ = {}, ::Array<int>* m_encryptKeyExpansion_ = {}, ::Array<int>* m_decryptKeyExpansion_ = {}, int m_Nr_ = {}, int m_Nb_ = {}, int m_Nk_ = {}, ::Array<int>* m_encryptindex_ = {}, ::Array<int>* m_decryptindex_ = {}, ::Array<int>* m_IV_ = {}, ::Array<int>* m_lastBlockBuffer_ = {}, ::Array<uint8_t>* m_depadBuffer_ = {}, ::Array<uint8_t>* m_shiftRegister_ = {}) noexcept : m_cipherMode{m_cipherMode_}, m_paddingValue{m_paddingValue_}, m_transformMode{m_transformMode_}, m_blockSizeBits{m_blockSizeBits_}, m_blockSizeBytes{m_blockSizeBytes_}, m_inputBlockSize{m_inputBlockSize_}, m_outputBlockSize{m_outputBlockSize_}, m_encryptKeyExpansion{m_encryptKeyExpansion_}, m_decryptKeyExpansion{m_decryptKeyExpansion_}, m_Nr{m_Nr_}, m_Nb{m_Nb_}, m_Nk{m_Nk_}, m_encryptindex{m_encryptindex_}, m_decryptindex{m_decryptindex_}, m_IV{m_IV_}, m_lastBlockBuffer{m_lastBlockBuffer_}, m_depadBuffer{m_depadBuffer_}, m_shiftRegister{m_shiftRegister_} {}
    // Creating interface conversion operator: operator System::Security::Cryptography::ICryptoTransform
    operator System::Security::Cryptography::ICryptoTransform() noexcept {
      return *reinterpret_cast<System::Security::Cryptography::ICryptoTransform*>(this);
    }
    // Get static field: static private readonly System.Byte[] s_Sbox
    static ::Array<uint8_t>* _get_s_Sbox();
    // Set static field: static private readonly System.Byte[] s_Sbox
    static void _set_s_Sbox(::Array<uint8_t>* value);
    // Get static field: static private readonly System.Int32[] s_Rcon
    static ::Array<int>* _get_s_Rcon();
    // Set static field: static private readonly System.Int32[] s_Rcon
    static void _set_s_Rcon(::Array<int>* value);
    // Get static field: static private readonly System.Int32[] s_T
    static ::Array<int>* _get_s_T();
    // Set static field: static private readonly System.Int32[] s_T
    static void _set_s_T(::Array<int>* value);
    // Get static field: static private readonly System.Int32[] s_TF
    static ::Array<int>* _get_s_TF();
    // Set static field: static private readonly System.Int32[] s_TF
    static void _set_s_TF(::Array<int>* value);
    // Get static field: static private readonly System.Int32[] s_iT
    static ::Array<int>* _get_s_iT();
    // Set static field: static private readonly System.Int32[] s_iT
    static void _set_s_iT(::Array<int>* value);
    // Get static field: static private readonly System.Int32[] s_iTF
    static ::Array<int>* _get_s_iTF();
    // Set static field: static private readonly System.Int32[] s_iTF
    static void _set_s_iTF(::Array<int>* value);
    // Get instance field: private System.Security.Cryptography.CipherMode m_cipherMode
    System::Security::Cryptography::CipherMode _get_m_cipherMode();
    // Set instance field: private System.Security.Cryptography.CipherMode m_cipherMode
    void _set_m_cipherMode(System::Security::Cryptography::CipherMode value);
    // Get instance field: private System.Security.Cryptography.PaddingMode m_paddingValue
    System::Security::Cryptography::PaddingMode _get_m_paddingValue();
    // Set instance field: private System.Security.Cryptography.PaddingMode m_paddingValue
    void _set_m_paddingValue(System::Security::Cryptography::PaddingMode value);
    // Get instance field: private System.Security.Cryptography.RijndaelManagedTransformMode m_transformMode
    System::Security::Cryptography::RijndaelManagedTransformMode _get_m_transformMode();
    // Set instance field: private System.Security.Cryptography.RijndaelManagedTransformMode m_transformMode
    void _set_m_transformMode(System::Security::Cryptography::RijndaelManagedTransformMode value);
    // Get instance field: private System.Int32 m_blockSizeBits
    int _get_m_blockSizeBits();
    // Set instance field: private System.Int32 m_blockSizeBits
    void _set_m_blockSizeBits(int value);
    // Get instance field: private System.Int32 m_blockSizeBytes
    int _get_m_blockSizeBytes();
    // Set instance field: private System.Int32 m_blockSizeBytes
    void _set_m_blockSizeBytes(int value);
    // Get instance field: private System.Int32 m_inputBlockSize
    int _get_m_inputBlockSize();
    // Set instance field: private System.Int32 m_inputBlockSize
    void _set_m_inputBlockSize(int value);
    // Get instance field: private System.Int32 m_outputBlockSize
    int _get_m_outputBlockSize();
    // Set instance field: private System.Int32 m_outputBlockSize
    void _set_m_outputBlockSize(int value);
    // Get instance field: private System.Int32[] m_encryptKeyExpansion
    ::Array<int>* _get_m_encryptKeyExpansion();
    // Set instance field: private System.Int32[] m_encryptKeyExpansion
    void _set_m_encryptKeyExpansion(::Array<int>* value);
    // Get instance field: private System.Int32[] m_decryptKeyExpansion
    ::Array<int>* _get_m_decryptKeyExpansion();
    // Set instance field: private System.Int32[] m_decryptKeyExpansion
    void _set_m_decryptKeyExpansion(::Array<int>* value);
    // Get instance field: private System.Int32 m_Nr
    int _get_m_Nr();
    // Set instance field: private System.Int32 m_Nr
    void _set_m_Nr(int value);
    // Get instance field: private System.Int32 m_Nb
    int _get_m_Nb();
    // Set instance field: private System.Int32 m_Nb
    void _set_m_Nb(int value);
    // Get instance field: private System.Int32 m_Nk
    int _get_m_Nk();
    // Set instance field: private System.Int32 m_Nk
    void _set_m_Nk(int value);
    // Get instance field: private System.Int32[] m_encryptindex
    ::Array<int>* _get_m_encryptindex();
    // Set instance field: private System.Int32[] m_encryptindex
    void _set_m_encryptindex(::Array<int>* value);
    // Get instance field: private System.Int32[] m_decryptindex
    ::Array<int>* _get_m_decryptindex();
    // Set instance field: private System.Int32[] m_decryptindex
    void _set_m_decryptindex(::Array<int>* value);
    // Get instance field: private System.Int32[] m_IV
    ::Array<int>* _get_m_IV();
    // Set instance field: private System.Int32[] m_IV
    void _set_m_IV(::Array<int>* value);
    // Get instance field: private System.Int32[] m_lastBlockBuffer
    ::Array<int>* _get_m_lastBlockBuffer();
    // Set instance field: private System.Int32[] m_lastBlockBuffer
    void _set_m_lastBlockBuffer(::Array<int>* value);
    // Get instance field: private System.Byte[] m_depadBuffer
    ::Array<uint8_t>* _get_m_depadBuffer();
    // Set instance field: private System.Byte[] m_depadBuffer
    void _set_m_depadBuffer(::Array<uint8_t>* value);
    // Get instance field: private System.Byte[] m_shiftRegister
    ::Array<uint8_t>* _get_m_shiftRegister();
    // Set instance field: private System.Byte[] m_shiftRegister
    void _set_m_shiftRegister(::Array<uint8_t>* value);
    // public System.Int32 get_InputBlockSize()
    // Offset: 0x175F5E4
    int get_InputBlockSize();
    // public System.Int32 get_OutputBlockSize()
    // Offset: 0x175F5EC
    int get_OutputBlockSize();
    // public System.Boolean get_CanTransformMultipleBlocks()
    // Offset: 0x175F5F4
    bool get_CanTransformMultipleBlocks();
    // System.Void .ctor(System.Byte[] rgbKey, System.Security.Cryptography.CipherMode mode, System.Byte[] rgbIV, System.Int32 blockSize, System.Int32 feedbackSize, System.Security.Cryptography.PaddingMode PaddingValue, System.Security.Cryptography.RijndaelManagedTransformMode transformMode)
    // Offset: 0x175E944
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RijndaelManagedTransform* New_ctor(::Array<uint8_t>* rgbKey, System::Security::Cryptography::CipherMode mode, ::Array<uint8_t>* rgbIV, int blockSize, int feedbackSize, System::Security::Cryptography::PaddingMode PaddingValue, System::Security::Cryptography::RijndaelManagedTransformMode transformMode) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Security::Cryptography::RijndaelManagedTransform::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RijndaelManagedTransform*, creationType>(rgbKey, mode, rgbIV, blockSize, feedbackSize, PaddingValue, transformMode)));
    }
    // static private System.Void .cctor()
    // Offset: 0x17616B0
    static void _cctor();
    // public System.Void Dispose()
    // Offset: 0x175F514
    void Dispose();
    // private System.Void Dispose(System.Boolean disposing)
    // Offset: 0x175F51C
    void Dispose(bool disposing);
    // public System.Int32 TransformBlock(System.Byte[] inputBuffer, System.Int32 inputOffset, System.Int32 inputCount, System.Byte[] outputBuffer, System.Int32 outputOffset)
    // Offset: 0x175F5FC
    int TransformBlock(::Array<uint8_t>* inputBuffer, int inputOffset, int inputCount, ::Array<uint8_t>* outputBuffer, int outputOffset);
    // public System.Byte[] TransformFinalBlock(System.Byte[] inputBuffer, System.Int32 inputOffset, System.Int32 inputCount)
    // Offset: 0x1760E34
    ::Array<uint8_t>* TransformFinalBlock(::Array<uint8_t>* inputBuffer, int inputOffset, int inputCount);
    // public System.Void Reset()
    // Offset: 0x1761100
    void Reset();
    // private System.Int32 EncryptData(System.Byte[] inputBuffer, System.Int32 inputOffset, System.Int32 inputCount, ref System.Byte[] outputBuffer, System.Int32 outputOffset, System.Security.Cryptography.PaddingMode paddingMode, System.Boolean fLast)
    // Offset: 0x175F8B8
    int EncryptData(::Array<uint8_t>* inputBuffer, int inputOffset, int inputCount, ByRef<::Array<uint8_t>*> outputBuffer, int outputOffset, System::Security::Cryptography::PaddingMode paddingMode, bool fLast);
    // private System.Int32 DecryptData(System.Byte[] inputBuffer, System.Int32 inputOffset, System.Int32 inputCount, ref System.Byte[] outputBuffer, System.Int32 outputOffset, System.Security.Cryptography.PaddingMode paddingMode, System.Boolean fLast)
    // Offset: 0x17603D8
    int DecryptData(::Array<uint8_t>* inputBuffer, int inputOffset, int inputCount, ByRef<::Array<uint8_t>*> outputBuffer, int outputOffset, System::Security::Cryptography::PaddingMode paddingMode, bool fLast);
    // private System.Void Enc(System.Int32* encryptindex, System.Int32* encryptKeyExpansion, System.Int32* T, System.Int32* TF, System.Int32* work, System.Int32* temp)
    // Offset: 0x176120C
    void Enc(int* encryptindex, int* encryptKeyExpansion, int* T, int* TF, int* work, int* temp);
    // private System.Void Dec(System.Int32* decryptindex, System.Int32* decryptKeyExpansion, System.Int32* iT, System.Int32* iTF, System.Int32* work, System.Int32* temp)
    // Offset: 0x17613C8
    void Dec(int* decryptindex, int* decryptKeyExpansion, int* iT, int* iTF, int* work, int* temp);
    // private System.Void GenerateKeyExpansion(System.Byte[] rgbKey)
    // Offset: 0x175EF60
    void GenerateKeyExpansion(::Array<uint8_t>* rgbKey);
    // static private System.Int32 rot1(System.Int32 val)
    // Offset: 0x17616A8
    static int rot1(int val);
    // static private System.Int32 rot2(System.Int32 val)
    // Offset: 0x17616A0
    static int rot2(int val);
    // static private System.Int32 rot3(System.Int32 val)
    // Offset: 0x1761598
    static int rot3(int val);
    // static private System.Int32 SubWord(System.Int32 a)
    // Offset: 0x17615A0
    static int SubWord(int a);
    // static private System.Int32 MulX(System.Int32 x)
    // Offset: 0x176167C
    static int MulX(int x);
  }; // System.Security.Cryptography.RijndaelManagedTransform
  #pragma pack(pop)
  static check_size<sizeof(RijndaelManagedTransform), 120 + sizeof(::Array<uint8_t>*)> __System_Security_Cryptography_RijndaelManagedTransformSizeCheck;
  static_assert(sizeof(RijndaelManagedTransform) == 0x80);
}
DEFINE_IL2CPP_ARG_TYPE(System::Security::Cryptography::RijndaelManagedTransform*, "System.Security.Cryptography", "RijndaelManagedTransform");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Security::Cryptography::RijndaelManagedTransform::get_InputBlockSize
// Il2CppName: get_InputBlockSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Security::Cryptography::RijndaelManagedTransform::*)()>(&System::Security::Cryptography::RijndaelManagedTransform::get_InputBlockSize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::RijndaelManagedTransform*), "get_InputBlockSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::RijndaelManagedTransform::get_OutputBlockSize
// Il2CppName: get_OutputBlockSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Security::Cryptography::RijndaelManagedTransform::*)()>(&System::Security::Cryptography::RijndaelManagedTransform::get_OutputBlockSize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::RijndaelManagedTransform*), "get_OutputBlockSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::RijndaelManagedTransform::get_CanTransformMultipleBlocks
// Il2CppName: get_CanTransformMultipleBlocks
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Security::Cryptography::RijndaelManagedTransform::*)()>(&System::Security::Cryptography::RijndaelManagedTransform::get_CanTransformMultipleBlocks)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::RijndaelManagedTransform*), "get_CanTransformMultipleBlocks", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::RijndaelManagedTransform::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Security::Cryptography::RijndaelManagedTransform::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Security::Cryptography::RijndaelManagedTransform::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::RijndaelManagedTransform*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::RijndaelManagedTransform::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::RijndaelManagedTransform::*)()>(&System::Security::Cryptography::RijndaelManagedTransform::Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::RijndaelManagedTransform*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::RijndaelManagedTransform::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::RijndaelManagedTransform::*)(bool)>(&System::Security::Cryptography::RijndaelManagedTransform::Dispose)> {
  static const MethodInfo* get() {
    static auto* disposing = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::RijndaelManagedTransform*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{disposing});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::RijndaelManagedTransform::TransformBlock
// Il2CppName: TransformBlock
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Security::Cryptography::RijndaelManagedTransform::*)(::Array<uint8_t>*, int, int, ::Array<uint8_t>*, int)>(&System::Security::Cryptography::RijndaelManagedTransform::TransformBlock)> {
  static const MethodInfo* get() {
    static auto* inputBuffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* inputOffset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* inputCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* outputBuffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* outputOffset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::RijndaelManagedTransform*), "TransformBlock", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{inputBuffer, inputOffset, inputCount, outputBuffer, outputOffset});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::RijndaelManagedTransform::TransformFinalBlock
// Il2CppName: TransformFinalBlock
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<uint8_t>* (System::Security::Cryptography::RijndaelManagedTransform::*)(::Array<uint8_t>*, int, int)>(&System::Security::Cryptography::RijndaelManagedTransform::TransformFinalBlock)> {
  static const MethodInfo* get() {
    static auto* inputBuffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* inputOffset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* inputCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::RijndaelManagedTransform*), "TransformFinalBlock", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{inputBuffer, inputOffset, inputCount});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::RijndaelManagedTransform::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::RijndaelManagedTransform::*)()>(&System::Security::Cryptography::RijndaelManagedTransform::Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::RijndaelManagedTransform*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::RijndaelManagedTransform::EncryptData
// Il2CppName: EncryptData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Security::Cryptography::RijndaelManagedTransform::*)(::Array<uint8_t>*, int, int, ByRef<::Array<uint8_t>*>, int, System::Security::Cryptography::PaddingMode, bool)>(&System::Security::Cryptography::RijndaelManagedTransform::EncryptData)> {
  static const MethodInfo* get() {
    static auto* inputBuffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* inputOffset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* inputCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* outputBuffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->this_arg;
    static auto* outputOffset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* paddingMode = &::il2cpp_utils::GetClassFromName("System.Security.Cryptography", "PaddingMode")->byval_arg;
    static auto* fLast = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::RijndaelManagedTransform*), "EncryptData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{inputBuffer, inputOffset, inputCount, outputBuffer, outputOffset, paddingMode, fLast});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::RijndaelManagedTransform::DecryptData
// Il2CppName: DecryptData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Security::Cryptography::RijndaelManagedTransform::*)(::Array<uint8_t>*, int, int, ByRef<::Array<uint8_t>*>, int, System::Security::Cryptography::PaddingMode, bool)>(&System::Security::Cryptography::RijndaelManagedTransform::DecryptData)> {
  static const MethodInfo* get() {
    static auto* inputBuffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* inputOffset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* inputCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* outputBuffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->this_arg;
    static auto* outputOffset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* paddingMode = &::il2cpp_utils::GetClassFromName("System.Security.Cryptography", "PaddingMode")->byval_arg;
    static auto* fLast = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::RijndaelManagedTransform*), "DecryptData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{inputBuffer, inputOffset, inputCount, outputBuffer, outputOffset, paddingMode, fLast});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::RijndaelManagedTransform::Enc
// Il2CppName: Enc
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::RijndaelManagedTransform::*)(int*, int*, int*, int*, int*, int*)>(&System::Security::Cryptography::RijndaelManagedTransform::Enc)> {
  static const MethodInfo* get() {
    static auto* encryptindex = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Int32"))->byval_arg;
    static auto* encryptKeyExpansion = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Int32"))->byval_arg;
    static auto* T = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Int32"))->byval_arg;
    static auto* TF = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Int32"))->byval_arg;
    static auto* work = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Int32"))->byval_arg;
    static auto* temp = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Int32"))->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::RijndaelManagedTransform*), "Enc", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{encryptindex, encryptKeyExpansion, T, TF, work, temp});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::RijndaelManagedTransform::Dec
// Il2CppName: Dec
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::RijndaelManagedTransform::*)(int*, int*, int*, int*, int*, int*)>(&System::Security::Cryptography::RijndaelManagedTransform::Dec)> {
  static const MethodInfo* get() {
    static auto* decryptindex = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Int32"))->byval_arg;
    static auto* decryptKeyExpansion = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Int32"))->byval_arg;
    static auto* iT = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Int32"))->byval_arg;
    static auto* iTF = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Int32"))->byval_arg;
    static auto* work = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Int32"))->byval_arg;
    static auto* temp = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Int32"))->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::RijndaelManagedTransform*), "Dec", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{decryptindex, decryptKeyExpansion, iT, iTF, work, temp});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::RijndaelManagedTransform::GenerateKeyExpansion
// Il2CppName: GenerateKeyExpansion
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::RijndaelManagedTransform::*)(::Array<uint8_t>*)>(&System::Security::Cryptography::RijndaelManagedTransform::GenerateKeyExpansion)> {
  static const MethodInfo* get() {
    static auto* rgbKey = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::RijndaelManagedTransform*), "GenerateKeyExpansion", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rgbKey});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::RijndaelManagedTransform::rot1
// Il2CppName: rot1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(int)>(&System::Security::Cryptography::RijndaelManagedTransform::rot1)> {
  static const MethodInfo* get() {
    static auto* val = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::RijndaelManagedTransform*), "rot1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{val});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::RijndaelManagedTransform::rot2
// Il2CppName: rot2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(int)>(&System::Security::Cryptography::RijndaelManagedTransform::rot2)> {
  static const MethodInfo* get() {
    static auto* val = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::RijndaelManagedTransform*), "rot2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{val});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::RijndaelManagedTransform::rot3
// Il2CppName: rot3
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(int)>(&System::Security::Cryptography::RijndaelManagedTransform::rot3)> {
  static const MethodInfo* get() {
    static auto* val = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::RijndaelManagedTransform*), "rot3", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{val});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::RijndaelManagedTransform::SubWord
// Il2CppName: SubWord
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(int)>(&System::Security::Cryptography::RijndaelManagedTransform::SubWord)> {
  static const MethodInfo* get() {
    static auto* a = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::RijndaelManagedTransform*), "SubWord", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::RijndaelManagedTransform::MulX
// Il2CppName: MulX
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(int)>(&System::Security::Cryptography::RijndaelManagedTransform::MulX)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::RijndaelManagedTransform*), "MulX", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
