// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: SecureRandomProvider
#include "GlobalNamespace/SecureRandomProvider.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Security::Cryptography
namespace System::Security::Cryptography {
  // Forward declaring type: RNGCryptoServiceProvider
  class RNGCryptoServiceProvider;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x2C
  #pragma pack(push, 1)
  // Autogenerated type: SecureRandomProvider/SecureRandomState
  // [TokenAttribute] Offset: FFFFFFFF
  class SecureRandomProvider::SecureRandomState : public ::Il2CppObject {
    public:
    // private readonly System.Security.Cryptography.RNGCryptoServiceProvider _random
    // Size: 0x8
    // Offset: 0x10
    System::Security::Cryptography::RNGCryptoServiceProvider* random;
    // Field size check
    static_assert(sizeof(System::Security::Cryptography::RNGCryptoServiceProvider*) == 0x8);
    // private readonly System.Byte[] _randomBuffer0
    // Size: 0x8
    // Offset: 0x18
    ::Array<uint8_t>* randomBuffer0;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // private readonly System.Byte[] _randomBuffer1
    // Size: 0x8
    // Offset: 0x20
    ::Array<uint8_t>* randomBuffer1;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // private System.Int32 _index
    // Size: 0x4
    // Offset: 0x28
    int index;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: SecureRandomState
    SecureRandomState(System::Security::Cryptography::RNGCryptoServiceProvider* random_ = {}, ::Array<uint8_t>* randomBuffer0_ = {}, ::Array<uint8_t>* randomBuffer1_ = {}, int index_ = {}) noexcept : random{random_}, randomBuffer0{randomBuffer0_}, randomBuffer1{randomBuffer1_}, index{index_} {}
    // static field const value: static private System.Int32 kBufferSize
    static constexpr const int kBufferSize = 16384;
    // Get static field: static private System.Int32 kBufferSize
    static int _get_kBufferSize();
    // Set static field: static private System.Int32 kBufferSize
    static void _set_kBufferSize(int value);
    // Get instance field: private readonly System.Security.Cryptography.RNGCryptoServiceProvider _random
    System::Security::Cryptography::RNGCryptoServiceProvider* _get__random();
    // Set instance field: private readonly System.Security.Cryptography.RNGCryptoServiceProvider _random
    void _set__random(System::Security::Cryptography::RNGCryptoServiceProvider* value);
    // Get instance field: private readonly System.Byte[] _randomBuffer0
    ::Array<uint8_t>* _get__randomBuffer0();
    // Set instance field: private readonly System.Byte[] _randomBuffer0
    void _set__randomBuffer0(::Array<uint8_t>* value);
    // Get instance field: private readonly System.Byte[] _randomBuffer1
    ::Array<uint8_t>* _get__randomBuffer1();
    // Set instance field: private readonly System.Byte[] _randomBuffer1
    void _set__randomBuffer1(::Array<uint8_t>* value);
    // Get instance field: private System.Int32 _index
    int _get__index();
    // Set instance field: private System.Int32 _index
    void _set__index(int value);
    // public System.Void GetBytes(System.Byte[] buffer, System.Int32 offset, System.Int32 length)
    // Offset: 0x23100F4
    void GetBytes(::Array<uint8_t>* buffer, int offset, int length);
    // public System.Byte GetByte()
    // Offset: 0x2310228
    uint8_t GetByte();
    // private System.Void FillBuffer()
    // Offset: 0x23104F8
    void FillBuffer();
    // public System.Void .ctor()
    // Offset: 0x2310458
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SecureRandomProvider::SecureRandomState* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::SecureRandomProvider::SecureRandomState::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SecureRandomProvider::SecureRandomState*, creationType>()));
    }
  }; // SecureRandomProvider/SecureRandomState
  #pragma pack(pop)
  static check_size<sizeof(SecureRandomProvider::SecureRandomState), 40 + sizeof(int)> __GlobalNamespace_SecureRandomProvider_SecureRandomStateSizeCheck;
  static_assert(sizeof(SecureRandomProvider::SecureRandomState) == 0x2C);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SecureRandomProvider::SecureRandomState*, "", "SecureRandomProvider/SecureRandomState");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::SecureRandomProvider::SecureRandomState::GetBytes
// Il2CppName: GetBytes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SecureRandomProvider::SecureRandomState::*)(::Array<uint8_t>*, int, int)>(&GlobalNamespace::SecureRandomProvider::SecureRandomState::GetBytes)> {
  static const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* length = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SecureRandomProvider::SecureRandomState*), "GetBytes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, offset, length});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SecureRandomProvider::SecureRandomState::GetByte
// Il2CppName: GetByte
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t (GlobalNamespace::SecureRandomProvider::SecureRandomState::*)()>(&GlobalNamespace::SecureRandomProvider::SecureRandomState::GetByte)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SecureRandomProvider::SecureRandomState*), "GetByte", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SecureRandomProvider::SecureRandomState::FillBuffer
// Il2CppName: FillBuffer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SecureRandomProvider::SecureRandomState::*)()>(&GlobalNamespace::SecureRandomProvider::SecureRandomState::FillBuffer)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SecureRandomProvider::SecureRandomState*), "FillBuffer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SecureRandomProvider::SecureRandomState::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
