// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Mono.Security.Cryptography.SymmetricTransform
#include "Mono/Security/Cryptography/SymmetricTransform.hpp"
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
}
// Completed forward declares
// Type namespace: System.Security.Cryptography
namespace System::Security::Cryptography {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: System.Security.Cryptography.DESTransform
  class DESTransform : public Mono::Security::Cryptography::SymmetricTransform {
    public:
    // private System.Byte[] keySchedule
    // Size: 0x8
    // Offset: 0x58
    ::Array<uint8_t>* keySchedule;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // private System.Byte[] byteBuff
    // Size: 0x8
    // Offset: 0x60
    ::Array<uint8_t>* byteBuff;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // private System.UInt32[] dwordBuff
    // Size: 0x8
    // Offset: 0x68
    ::Array<uint>* dwordBuff;
    // Field size check
    static_assert(sizeof(::Array<uint>*) == 0x8);
    // Creating value type constructor for type: DESTransform
    DESTransform(::Array<uint8_t>* keySchedule_ = {}, ::Array<uint8_t>* byteBuff_ = {}, ::Array<uint>* dwordBuff_ = {}) noexcept : keySchedule{keySchedule_}, byteBuff{byteBuff_}, dwordBuff{dwordBuff_} {}
    // Get static field: static readonly System.Int32 KEY_BIT_SIZE
    static int _get_KEY_BIT_SIZE();
    // Set static field: static readonly System.Int32 KEY_BIT_SIZE
    static void _set_KEY_BIT_SIZE(int value);
    // Get static field: static readonly System.Int32 KEY_BYTE_SIZE
    static int _get_KEY_BYTE_SIZE();
    // Set static field: static readonly System.Int32 KEY_BYTE_SIZE
    static void _set_KEY_BYTE_SIZE(int value);
    // Get static field: static readonly System.Int32 BLOCK_BIT_SIZE
    static int _get_BLOCK_BIT_SIZE();
    // Set static field: static readonly System.Int32 BLOCK_BIT_SIZE
    static void _set_BLOCK_BIT_SIZE(int value);
    // Get static field: static readonly System.Int32 BLOCK_BYTE_SIZE
    static int _get_BLOCK_BYTE_SIZE();
    // Set static field: static readonly System.Int32 BLOCK_BYTE_SIZE
    static void _set_BLOCK_BYTE_SIZE(int value);
    // Get static field: static private readonly System.UInt32[] spBoxes
    static ::Array<uint>* _get_spBoxes();
    // Set static field: static private readonly System.UInt32[] spBoxes
    static void _set_spBoxes(::Array<uint>* value);
    // Get static field: static private readonly System.Byte[] PC1
    static ::Array<uint8_t>* _get_PC1();
    // Set static field: static private readonly System.Byte[] PC1
    static void _set_PC1(::Array<uint8_t>* value);
    // Get static field: static private readonly System.Byte[] leftRotTotal
    static ::Array<uint8_t>* _get_leftRotTotal();
    // Set static field: static private readonly System.Byte[] leftRotTotal
    static void _set_leftRotTotal(::Array<uint8_t>* value);
    // Get static field: static private readonly System.Byte[] PC2
    static ::Array<uint8_t>* _get_PC2();
    // Set static field: static private readonly System.Byte[] PC2
    static void _set_PC2(::Array<uint8_t>* value);
    // Get static field: static readonly System.UInt32[] ipTab
    static ::Array<uint>* _get_ipTab();
    // Set static field: static readonly System.UInt32[] ipTab
    static void _set_ipTab(::Array<uint>* value);
    // Get static field: static readonly System.UInt32[] fpTab
    static ::Array<uint>* _get_fpTab();
    // Set static field: static readonly System.UInt32[] fpTab
    static void _set_fpTab(::Array<uint>* value);
    // System.Void .ctor(System.Security.Cryptography.SymmetricAlgorithm symmAlgo, System.Boolean encryption, System.Byte[] key, System.Byte[] iv)
    // Offset: 0x1967574
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DESTransform* New_ctor(System::Security::Cryptography::SymmetricAlgorithm* symmAlgo, bool encryption, ::Array<uint8_t>* key, ::Array<uint8_t>* iv) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Security::Cryptography::DESTransform::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DESTransform*, creationType>(symmAlgo, encryption, key, iv)));
    }
    // private System.UInt32 CipherFunct(System.UInt32 r, System.Int32 n)
    // Offset: 0x1967F2C
    uint CipherFunct(uint r, int n);
    // static System.Void Permutation(System.Byte[] input, System.Byte[] output, System.UInt32[] permTab, System.Boolean preSwap)
    // Offset: 0x1968174
    static void Permutation(::Array<uint8_t>* input, ::Array<uint8_t>* output, ::Array<uint>* permTab, bool preSwap);
    // static private System.Void BSwap(System.Byte[] byteBuff)
    // Offset: 0x19684C4
    static void BSwap(::Array<uint8_t>* byteBuff);
    // System.Void SetKey(System.Byte[] key)
    // Offset: 0x1967B2C
    void SetKey(::Array<uint8_t>* key);
    // public System.Void ProcessBlock(System.Byte[] input, System.Byte[] output)
    // Offset: 0x1968548
    void ProcessBlock(::Array<uint8_t>* input, ::Array<uint8_t>* output);
    // static System.Byte[] GetStrongKey()
    // Offset: 0x1967A38
    static ::Array<uint8_t>* GetStrongKey();
    // static private System.Void .cctor()
    // Offset: 0x19689B4
    static void _cctor();
    // protected override System.Void ECB(System.Byte[] input, System.Byte[] output)
    // Offset: 0x1968900
    // Implemented from: Mono.Security.Cryptography.SymmetricTransform
    // Base method: System.Void SymmetricTransform::ECB(System.Byte[] input, System.Byte[] output)
    void ECB(::Array<uint8_t>* input, ::Array<uint8_t>* output);
  }; // System.Security.Cryptography.DESTransform
  #pragma pack(pop)
  static check_size<sizeof(DESTransform), 104 + sizeof(::Array<uint>*)> __System_Security_Cryptography_DESTransformSizeCheck;
  static_assert(sizeof(DESTransform) == 0x70);
}
DEFINE_IL2CPP_ARG_TYPE(System::Security::Cryptography::DESTransform*, "System.Security.Cryptography", "DESTransform");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Security::Cryptography::DESTransform::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Security::Cryptography::DESTransform::CipherFunct
// Il2CppName: CipherFunct
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (System::Security::Cryptography::DESTransform::*)(uint, int)>(&System::Security::Cryptography::DESTransform::CipherFunct)> {
  static const MethodInfo* get() {
    static auto* r = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* n = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::DESTransform*), "CipherFunct", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{r, n});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::DESTransform::Permutation
// Il2CppName: Permutation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Array<uint8_t>*, ::Array<uint8_t>*, ::Array<uint>*, bool)>(&System::Security::Cryptography::DESTransform::Permutation)> {
  static const MethodInfo* get() {
    static auto* input = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* output = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* permTab = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt32"), 1)->byval_arg;
    static auto* preSwap = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::DESTransform*), "Permutation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input, output, permTab, preSwap});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::DESTransform::BSwap
// Il2CppName: BSwap
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Array<uint8_t>*)>(&System::Security::Cryptography::DESTransform::BSwap)> {
  static const MethodInfo* get() {
    static auto* byteBuff = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::DESTransform*), "BSwap", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{byteBuff});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::DESTransform::SetKey
// Il2CppName: SetKey
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::DESTransform::*)(::Array<uint8_t>*)>(&System::Security::Cryptography::DESTransform::SetKey)> {
  static const MethodInfo* get() {
    static auto* key = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::DESTransform*), "SetKey", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::DESTransform::ProcessBlock
// Il2CppName: ProcessBlock
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::DESTransform::*)(::Array<uint8_t>*, ::Array<uint8_t>*)>(&System::Security::Cryptography::DESTransform::ProcessBlock)> {
  static const MethodInfo* get() {
    static auto* input = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* output = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::DESTransform*), "ProcessBlock", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input, output});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::DESTransform::GetStrongKey
// Il2CppName: GetStrongKey
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<uint8_t>* (*)()>(&System::Security::Cryptography::DESTransform::GetStrongKey)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::DESTransform*), "GetStrongKey", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::DESTransform::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Security::Cryptography::DESTransform::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::DESTransform*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::DESTransform::ECB
// Il2CppName: ECB
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::DESTransform::*)(::Array<uint8_t>*, ::Array<uint8_t>*)>(&System::Security::Cryptography::DESTransform::ECB)> {
  static const MethodInfo* get() {
    static auto* input = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* output = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::DESTransform*), "ECB", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input, output});
  }
};
