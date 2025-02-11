// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Security.Cryptography.RIPEMD160
#include "System/Security/Cryptography/RIPEMD160.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.Security.Cryptography
namespace System::Security::Cryptography {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: System.Security.Cryptography.RIPEMD160Managed
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: E16D9C
  class RIPEMD160Managed : public System::Security::Cryptography::RIPEMD160 {
    public:
    // Writing base type padding for base size: 0x25 to desired offset: 0x28
    char ___base_padding[0x3] = {};
    // private System.Byte[] _buffer
    // Size: 0x8
    // Offset: 0x28
    ::Array<uint8_t>* buffer;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // private System.Int64 _count
    // Size: 0x8
    // Offset: 0x30
    int64_t count;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // private System.UInt32[] _stateMD160
    // Size: 0x8
    // Offset: 0x38
    ::Array<uint>* stateMD160;
    // Field size check
    static_assert(sizeof(::Array<uint>*) == 0x8);
    // private System.UInt32[] _blockDWords
    // Size: 0x8
    // Offset: 0x40
    ::Array<uint>* blockDWords;
    // Field size check
    static_assert(sizeof(::Array<uint>*) == 0x8);
    // Creating value type constructor for type: RIPEMD160Managed
    RIPEMD160Managed(::Array<uint8_t>* buffer_ = {}, int64_t count_ = {}, ::Array<uint>* stateMD160_ = {}, ::Array<uint>* blockDWords_ = {}) noexcept : buffer{buffer_}, count{count_}, stateMD160{stateMD160_}, blockDWords{blockDWords_} {}
    // Get instance field: private System.Byte[] _buffer
    ::Array<uint8_t>* _get__buffer();
    // Set instance field: private System.Byte[] _buffer
    void _set__buffer(::Array<uint8_t>* value);
    // Get instance field: private System.Int64 _count
    int64_t _get__count();
    // Set instance field: private System.Int64 _count
    void _set__count(int64_t value);
    // Get instance field: private System.UInt32[] _stateMD160
    ::Array<uint>* _get__stateMD160();
    // Set instance field: private System.UInt32[] _stateMD160
    void _set__stateMD160(::Array<uint>* value);
    // Get instance field: private System.UInt32[] _blockDWords
    ::Array<uint>* _get__blockDWords();
    // Set instance field: private System.UInt32[] _blockDWords
    void _set__blockDWords(::Array<uint>* value);
    // private System.Void InitializeState()
    // Offset: 0x1614928
    void InitializeState();
    // private System.Void _HashData(System.Byte[] partIn, System.Int32 ibStart, System.Int32 cbSize)
    // Offset: 0x1614A3C
    void _HashData(::Array<uint8_t>* partIn, int ibStart, int cbSize);
    // private System.Byte[] _EndHash()
    // Offset: 0x1614BF0
    ::Array<uint8_t>* _EndHash();
    // static private System.Void MDTransform(System.UInt32* blockDWords, System.UInt32* state, System.Byte* block)
    // Offset: 0x1614DB0
    static void MDTransform(uint* blockDWords, uint* state, uint8_t* block);
    // static private System.UInt32 F(System.UInt32 x, System.UInt32 y, System.UInt32 z)
    // Offset: 0x16164B0
    static uint F(uint x, uint y, uint z);
    // static private System.UInt32 G(System.UInt32 x, System.UInt32 y, System.UInt32 z)
    // Offset: 0x16164BC
    static uint G(uint x, uint y, uint z);
    // static private System.UInt32 H(System.UInt32 x, System.UInt32 y, System.UInt32 z)
    // Offset: 0x16164CC
    static uint H(uint x, uint y, uint z);
    // static private System.UInt32 I(System.UInt32 x, System.UInt32 y, System.UInt32 z)
    // Offset: 0x16164D8
    static uint I(uint x, uint y, uint z);
    // static private System.UInt32 J(System.UInt32 x, System.UInt32 y, System.UInt32 z)
    // Offset: 0x16164E8
    static uint J(uint x, uint y, uint z);
    // public System.Void .ctor()
    // Offset: 0x16091A0
    // Implemented from: System.Security.Cryptography.RIPEMD160
    // Base method: System.Void RIPEMD160::.ctor()
    // Base method: System.Void HashAlgorithm::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RIPEMD160Managed* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Security::Cryptography::RIPEMD160Managed::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RIPEMD160Managed*, creationType>()));
    }
    // public override System.Void Initialize()
    // Offset: 0x16149E8
    // Implemented from: System.Security.Cryptography.HashAlgorithm
    // Base method: System.Void HashAlgorithm::Initialize()
    void Initialize();
    // protected override System.Void HashCore(System.Byte[] rgb, System.Int32 ibStart, System.Int32 cbSize)
    // Offset: 0x1614A38
    // Implemented from: System.Security.Cryptography.HashAlgorithm
    // Base method: System.Void HashAlgorithm::HashCore(System.Byte[] rgb, System.Int32 ibStart, System.Int32 cbSize)
    void HashCore(::Array<uint8_t>* rgb, int ibStart, int cbSize);
    // protected override System.Byte[] HashFinal()
    // Offset: 0x1614BEC
    // Implemented from: System.Security.Cryptography.HashAlgorithm
    // Base method: System.Byte[] HashAlgorithm::HashFinal()
    ::Array<uint8_t>* HashFinal();
  }; // System.Security.Cryptography.RIPEMD160Managed
  #pragma pack(pop)
  static check_size<sizeof(RIPEMD160Managed), 64 + sizeof(::Array<uint>*)> __System_Security_Cryptography_RIPEMD160ManagedSizeCheck;
  static_assert(sizeof(RIPEMD160Managed) == 0x48);
}
DEFINE_IL2CPP_ARG_TYPE(System::Security::Cryptography::RIPEMD160Managed*, "System.Security.Cryptography", "RIPEMD160Managed");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Security::Cryptography::RIPEMD160Managed::InitializeState
// Il2CppName: InitializeState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::RIPEMD160Managed::*)()>(&System::Security::Cryptography::RIPEMD160Managed::InitializeState)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::RIPEMD160Managed*), "InitializeState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::RIPEMD160Managed::_HashData
// Il2CppName: _HashData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::RIPEMD160Managed::*)(::Array<uint8_t>*, int, int)>(&System::Security::Cryptography::RIPEMD160Managed::_HashData)> {
  static const MethodInfo* get() {
    static auto* partIn = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* ibStart = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* cbSize = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::RIPEMD160Managed*), "_HashData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{partIn, ibStart, cbSize});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::RIPEMD160Managed::_EndHash
// Il2CppName: _EndHash
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<uint8_t>* (System::Security::Cryptography::RIPEMD160Managed::*)()>(&System::Security::Cryptography::RIPEMD160Managed::_EndHash)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::RIPEMD160Managed*), "_EndHash", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::RIPEMD160Managed::MDTransform
// Il2CppName: MDTransform
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(uint*, uint*, uint8_t*)>(&System::Security::Cryptography::RIPEMD160Managed::MDTransform)> {
  static const MethodInfo* get() {
    static auto* blockDWords = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "UInt32"))->byval_arg;
    static auto* state = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "UInt32"))->byval_arg;
    static auto* block = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Byte"))->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::RIPEMD160Managed*), "MDTransform", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{blockDWords, state, block});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::RIPEMD160Managed::F
// Il2CppName: F
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (*)(uint, uint, uint)>(&System::Security::Cryptography::RIPEMD160Managed::F)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* y = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* z = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::RIPEMD160Managed*), "F", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, y, z});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::RIPEMD160Managed::G
// Il2CppName: G
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (*)(uint, uint, uint)>(&System::Security::Cryptography::RIPEMD160Managed::G)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* y = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* z = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::RIPEMD160Managed*), "G", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, y, z});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::RIPEMD160Managed::H
// Il2CppName: H
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (*)(uint, uint, uint)>(&System::Security::Cryptography::RIPEMD160Managed::H)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* y = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* z = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::RIPEMD160Managed*), "H", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, y, z});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::RIPEMD160Managed::I
// Il2CppName: I
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (*)(uint, uint, uint)>(&System::Security::Cryptography::RIPEMD160Managed::I)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* y = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* z = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::RIPEMD160Managed*), "I", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, y, z});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::RIPEMD160Managed::J
// Il2CppName: J
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (*)(uint, uint, uint)>(&System::Security::Cryptography::RIPEMD160Managed::J)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* y = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* z = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::RIPEMD160Managed*), "J", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, y, z});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::RIPEMD160Managed::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Security::Cryptography::RIPEMD160Managed::Initialize
// Il2CppName: Initialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::RIPEMD160Managed::*)()>(&System::Security::Cryptography::RIPEMD160Managed::Initialize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::RIPEMD160Managed*), "Initialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::RIPEMD160Managed::HashCore
// Il2CppName: HashCore
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::RIPEMD160Managed::*)(::Array<uint8_t>*, int, int)>(&System::Security::Cryptography::RIPEMD160Managed::HashCore)> {
  static const MethodInfo* get() {
    static auto* rgb = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* ibStart = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* cbSize = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::RIPEMD160Managed*), "HashCore", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rgb, ibStart, cbSize});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::RIPEMD160Managed::HashFinal
// Il2CppName: HashFinal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<uint8_t>* (System::Security::Cryptography::RIPEMD160Managed::*)()>(&System::Security::Cryptography::RIPEMD160Managed::HashFinal)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::RIPEMD160Managed*), "HashFinal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
