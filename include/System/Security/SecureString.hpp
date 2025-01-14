// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.Security
namespace System::Security {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: System.Security.SecureString
  // [TokenAttribute] Offset: FFFFFFFF
  // [MonoTODOAttribute] Offset: E16860
  class SecureString : public ::Il2CppObject/*, public System::IDisposable*/ {
    public:
    // private System.Int32 length
    // Size: 0x4
    // Offset: 0x10
    int length;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Boolean disposed
    // Size: 0x1
    // Offset: 0x14
    bool disposed;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: disposed and: data
    char __padding1[0x3] = {};
    // private System.Byte[] data
    // Size: 0x8
    // Offset: 0x18
    ::Array<uint8_t>* data;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // Creating value type constructor for type: SecureString
    SecureString(int length_ = {}, bool disposed_ = {}, ::Array<uint8_t>* data_ = {}) noexcept : length{length_}, disposed{disposed_}, data{data_} {}
    // Creating interface conversion operator: operator System::IDisposable
    operator System::IDisposable() noexcept {
      return *reinterpret_cast<System::IDisposable*>(this);
    }
    // Get instance field: private System.Int32 length
    int _get_length();
    // Set instance field: private System.Int32 length
    void _set_length(int value);
    // Get instance field: private System.Boolean disposed
    bool _get_disposed();
    // Set instance field: private System.Boolean disposed
    void _set_disposed(bool value);
    // Get instance field: private System.Byte[] data
    ::Array<uint8_t>* _get_data();
    // Set instance field: private System.Byte[] data
    void _set_data(::Array<uint8_t>* value);
    // public System.Int32 get_Length()
    // Offset: 0x176CA44
    int get_Length();
    // public System.Void .ctor(System.Char* value, System.Int32 length)
    // Offset: 0x176C8DC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SecureString* New_ctor(::Il2CppChar* value, int length) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Security::SecureString::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SecureString*, creationType>(value, length)));
    }
    // public System.Void Dispose()
    // Offset: 0x176CACC
    void Dispose();
    // private System.Void Encrypt()
    // Offset: 0x176CA40
    void Encrypt();
    // private System.Void Decrypt()
    // Offset: 0x176CB10
    void Decrypt();
    // private System.Void Alloc(System.Int32 length, System.Boolean realloc)
    // Offset: 0x176C76C
    void Alloc(int length, bool realloc);
    // System.Byte[] GetBuffer()
    // Offset: 0x176CB14
    ::Array<uint8_t>* GetBuffer();
    // public System.Void .ctor()
    // Offset: 0x176C73C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SecureString* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Security::SecureString::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SecureString*, creationType>()));
    }
  }; // System.Security.SecureString
  #pragma pack(pop)
  static check_size<sizeof(SecureString), 24 + sizeof(::Array<uint8_t>*)> __System_Security_SecureStringSizeCheck;
  static_assert(sizeof(SecureString) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(System::Security::SecureString*, "System.Security", "SecureString");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Security::SecureString::get_Length
// Il2CppName: get_Length
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Security::SecureString::*)()>(&System::Security::SecureString::get_Length)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::SecureString*), "get_Length", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::SecureString::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Security::SecureString::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::SecureString::*)()>(&System::Security::SecureString::Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::SecureString*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::SecureString::Encrypt
// Il2CppName: Encrypt
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::SecureString::*)()>(&System::Security::SecureString::Encrypt)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::SecureString*), "Encrypt", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::SecureString::Decrypt
// Il2CppName: Decrypt
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::SecureString::*)()>(&System::Security::SecureString::Decrypt)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::SecureString*), "Decrypt", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::SecureString::Alloc
// Il2CppName: Alloc
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::SecureString::*)(int, bool)>(&System::Security::SecureString::Alloc)> {
  static const MethodInfo* get() {
    static auto* length = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* realloc = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::SecureString*), "Alloc", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{length, realloc});
  }
};
// Writing MetadataGetter for method: System::Security::SecureString::GetBuffer
// Il2CppName: GetBuffer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<uint8_t>* (System::Security::SecureString::*)()>(&System::Security::SecureString::GetBuffer)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::SecureString*), "GetBuffer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::SecureString::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
