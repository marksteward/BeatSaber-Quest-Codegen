// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Security.Cryptography.ICryptoTransform
#include "System/Security/Cryptography/ICryptoTransform.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.Security.Cryptography
namespace System::Security::Cryptography {
  // Size: 0x25
  #pragma pack(push, 1)
  // Autogenerated type: System.Security.Cryptography.HashAlgorithm
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: D6B004
  class HashAlgorithm : public ::Il2CppObject/*, public System::Security::Cryptography::ICryptoTransform*/ {
    public:
    // protected System.Int32 HashSizeValue
    // Size: 0x4
    // Offset: 0x10
    int HashSizeValue;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: HashSizeValue and: HashValue
    char __padding0[0x4] = {};
    // protected internal System.Byte[] HashValue
    // Size: 0x8
    // Offset: 0x18
    ::Array<uint8_t>* HashValue;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // protected System.Int32 State
    // Size: 0x4
    // Offset: 0x20
    int State;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Boolean m_bDisposed
    // Size: 0x1
    // Offset: 0x24
    bool m_bDisposed;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: HashAlgorithm
    HashAlgorithm(int HashSizeValue_ = {}, ::Array<uint8_t>* HashValue_ = {}, int State_ = {}, bool m_bDisposed_ = {}) noexcept : HashSizeValue{HashSizeValue_}, HashValue{HashValue_}, State{State_}, m_bDisposed{m_bDisposed_} {}
    // Creating interface conversion operator: operator System::Security::Cryptography::ICryptoTransform
    operator System::Security::Cryptography::ICryptoTransform() noexcept {
      return *reinterpret_cast<System::Security::Cryptography::ICryptoTransform*>(this);
    }
    // public System.Int32 get_HashSize()
    // Offset: 0x193FE00
    int get_HashSize();
    // public System.Byte[] get_Hash()
    // Offset: 0x193FE08
    ::Array<uint8_t>* get_Hash();
    // public System.Int32 get_InputBlockSize()
    // Offset: 0x19401B8
    int get_InputBlockSize();
    // public System.Int32 get_OutputBlockSize()
    // Offset: 0x19401C0
    int get_OutputBlockSize();
    // public System.Boolean get_CanTransformMultipleBlocks()
    // Offset: 0x19401C8
    bool get_CanTransformMultipleBlocks();
    // static public System.Security.Cryptography.HashAlgorithm Create(System.String hashName)
    // Offset: 0x193FF18
    static System::Security::Cryptography::HashAlgorithm* Create(::Il2CppString* hashName);
    // public System.Byte[] ComputeHash(System.Byte[] buffer)
    // Offset: 0x193EE1C
    ::Array<uint8_t>* ComputeHash(::Array<uint8_t>* buffer);
    // public System.Byte[] ComputeHash(System.Byte[] buffer, System.Int32 offset, System.Int32 count)
    // Offset: 0x193FF9C
    ::Array<uint8_t>* ComputeHash(::Array<uint8_t>* buffer, int offset, int count);
    // public System.Int32 TransformBlock(System.Byte[] inputBuffer, System.Int32 inputOffset, System.Int32 inputCount, System.Byte[] outputBuffer, System.Int32 outputOffset)
    // Offset: 0x193F1D4
    int TransformBlock(::Array<uint8_t>* inputBuffer, int inputOffset, int inputCount, ::Array<uint8_t>* outputBuffer, int outputOffset);
    // public System.Byte[] TransformFinalBlock(System.Byte[] inputBuffer, System.Int32 inputOffset, System.Int32 inputCount)
    // Offset: 0x193F514
    ::Array<uint8_t>* TransformFinalBlock(::Array<uint8_t>* inputBuffer, int inputOffset, int inputCount);
    // public System.Void Dispose()
    // Offset: 0x19401D0
    void Dispose();
    // public System.Void Clear()
    // Offset: 0x1940250
    void Clear();
    // protected System.Void Dispose(System.Boolean disposing)
    // Offset: 0x19402F4
    void Dispose(bool disposing);
    // public System.Void Initialize()
    // Offset: 0xFFFFFFFF
    void Initialize();
    // protected System.Void HashCore(System.Byte[] array, System.Int32 ibStart, System.Int32 cbSize)
    // Offset: 0xFFFFFFFF
    void HashCore(::Array<uint8_t>* array, int ibStart, int cbSize);
    // protected System.Byte[] HashFinal()
    // Offset: 0xFFFFFFFF
    ::Array<uint8_t>* HashFinal();
    // protected System.Void .ctor()
    // Offset: 0x193FDF8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HashAlgorithm* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Security::Cryptography::HashAlgorithm::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HashAlgorithm*, creationType>()));
    }
  }; // System.Security.Cryptography.HashAlgorithm
  #pragma pack(pop)
  static check_size<sizeof(HashAlgorithm), 36 + sizeof(bool)> __System_Security_Cryptography_HashAlgorithmSizeCheck;
  static_assert(sizeof(HashAlgorithm) == 0x25);
}
DEFINE_IL2CPP_ARG_TYPE(System::Security::Cryptography::HashAlgorithm*, "System.Security.Cryptography", "HashAlgorithm");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Security::Cryptography::HashAlgorithm::get_HashSize
// Il2CppName: get_HashSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Security::Cryptography::HashAlgorithm::*)()>(&System::Security::Cryptography::HashAlgorithm::get_HashSize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::HashAlgorithm*), "get_HashSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::HashAlgorithm::get_Hash
// Il2CppName: get_Hash
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<uint8_t>* (System::Security::Cryptography::HashAlgorithm::*)()>(&System::Security::Cryptography::HashAlgorithm::get_Hash)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::HashAlgorithm*), "get_Hash", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::HashAlgorithm::get_InputBlockSize
// Il2CppName: get_InputBlockSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Security::Cryptography::HashAlgorithm::*)()>(&System::Security::Cryptography::HashAlgorithm::get_InputBlockSize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::HashAlgorithm*), "get_InputBlockSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::HashAlgorithm::get_OutputBlockSize
// Il2CppName: get_OutputBlockSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Security::Cryptography::HashAlgorithm::*)()>(&System::Security::Cryptography::HashAlgorithm::get_OutputBlockSize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::HashAlgorithm*), "get_OutputBlockSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::HashAlgorithm::get_CanTransformMultipleBlocks
// Il2CppName: get_CanTransformMultipleBlocks
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Security::Cryptography::HashAlgorithm::*)()>(&System::Security::Cryptography::HashAlgorithm::get_CanTransformMultipleBlocks)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::HashAlgorithm*), "get_CanTransformMultipleBlocks", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::HashAlgorithm::Create
// Il2CppName: Create
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Security::Cryptography::HashAlgorithm* (*)(::Il2CppString*)>(&System::Security::Cryptography::HashAlgorithm::Create)> {
  static const MethodInfo* get() {
    static auto* hashName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::HashAlgorithm*), "Create", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hashName});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::HashAlgorithm::ComputeHash
// Il2CppName: ComputeHash
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<uint8_t>* (System::Security::Cryptography::HashAlgorithm::*)(::Array<uint8_t>*)>(&System::Security::Cryptography::HashAlgorithm::ComputeHash)> {
  static const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::HashAlgorithm*), "ComputeHash", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::HashAlgorithm::ComputeHash
// Il2CppName: ComputeHash
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<uint8_t>* (System::Security::Cryptography::HashAlgorithm::*)(::Array<uint8_t>*, int, int)>(&System::Security::Cryptography::HashAlgorithm::ComputeHash)> {
  static const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::HashAlgorithm*), "ComputeHash", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, offset, count});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::HashAlgorithm::TransformBlock
// Il2CppName: TransformBlock
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Security::Cryptography::HashAlgorithm::*)(::Array<uint8_t>*, int, int, ::Array<uint8_t>*, int)>(&System::Security::Cryptography::HashAlgorithm::TransformBlock)> {
  static const MethodInfo* get() {
    static auto* inputBuffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* inputOffset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* inputCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* outputBuffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* outputOffset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::HashAlgorithm*), "TransformBlock", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{inputBuffer, inputOffset, inputCount, outputBuffer, outputOffset});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::HashAlgorithm::TransformFinalBlock
// Il2CppName: TransformFinalBlock
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<uint8_t>* (System::Security::Cryptography::HashAlgorithm::*)(::Array<uint8_t>*, int, int)>(&System::Security::Cryptography::HashAlgorithm::TransformFinalBlock)> {
  static const MethodInfo* get() {
    static auto* inputBuffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* inputOffset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* inputCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::HashAlgorithm*), "TransformFinalBlock", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{inputBuffer, inputOffset, inputCount});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::HashAlgorithm::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::HashAlgorithm::*)()>(&System::Security::Cryptography::HashAlgorithm::Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::HashAlgorithm*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::HashAlgorithm::Clear
// Il2CppName: Clear
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::HashAlgorithm::*)()>(&System::Security::Cryptography::HashAlgorithm::Clear)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::HashAlgorithm*), "Clear", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::HashAlgorithm::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::HashAlgorithm::*)(bool)>(&System::Security::Cryptography::HashAlgorithm::Dispose)> {
  static const MethodInfo* get() {
    static auto* disposing = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::HashAlgorithm*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{disposing});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::HashAlgorithm::Initialize
// Il2CppName: Initialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::HashAlgorithm::*)()>(&System::Security::Cryptography::HashAlgorithm::Initialize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::HashAlgorithm*), "Initialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::HashAlgorithm::HashCore
// Il2CppName: HashCore
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::HashAlgorithm::*)(::Array<uint8_t>*, int, int)>(&System::Security::Cryptography::HashAlgorithm::HashCore)> {
  static const MethodInfo* get() {
    static auto* array = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* ibStart = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* cbSize = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::HashAlgorithm*), "HashCore", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{array, ibStart, cbSize});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::HashAlgorithm::HashFinal
// Il2CppName: HashFinal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<uint8_t>* (System::Security::Cryptography::HashAlgorithm::*)()>(&System::Security::Cryptography::HashAlgorithm::HashFinal)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::HashAlgorithm*), "HashFinal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::HashAlgorithm::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
