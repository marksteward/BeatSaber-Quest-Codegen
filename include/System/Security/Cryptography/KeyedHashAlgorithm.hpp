// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Security.Cryptography.HashAlgorithm
#include "System/Security/Cryptography/HashAlgorithm.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.Security.Cryptography
namespace System::Security::Cryptography {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: System.Security.Cryptography.KeyedHashAlgorithm
  // [ComVisibleAttribute] Offset: D7D948
  class KeyedHashAlgorithm : public System::Security::Cryptography::HashAlgorithm {
    public:
    // Writing base type padding for base size: 0x25 to desired offset: 0x28
    char ___base_padding[0x3] = {};
    // protected System.Byte[] KeyValue
    // Size: 0x8
    // Offset: 0x28
    ::Array<uint8_t>* KeyValue;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // Creating value type constructor for type: KeyedHashAlgorithm
    KeyedHashAlgorithm(::Array<uint8_t>* KeyValue_ = {}) noexcept : KeyValue{KeyValue_} {}
    // Creating conversion operator: operator ::Array<uint8_t>*
    constexpr operator ::Array<uint8_t>*() const noexcept {
      return KeyValue;
    }
    // public System.Byte[] get_Key()
    // Offset: 0x196B714
    ::Array<uint8_t>* get_Key();
    // public System.Void set_Key(System.Byte[] value)
    // Offset: 0x196B794
    void set_Key(::Array<uint8_t>* value);
    // protected System.Void .ctor()
    // Offset: 0x196AA98
    // Implemented from: System.Security.Cryptography.HashAlgorithm
    // Base method: System.Void HashAlgorithm::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static KeyedHashAlgorithm* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Security::Cryptography::KeyedHashAlgorithm::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<KeyedHashAlgorithm*, creationType>()));
    }
    // protected override System.Void Dispose(System.Boolean disposing)
    // Offset: 0x196AA28
    // Implemented from: System.Security.Cryptography.HashAlgorithm
    // Base method: System.Void HashAlgorithm::Dispose(System.Boolean disposing)
    void Dispose(bool disposing);
  }; // System.Security.Cryptography.KeyedHashAlgorithm
  #pragma pack(pop)
  static check_size<sizeof(KeyedHashAlgorithm), 40 + sizeof(::Array<uint8_t>*)> __System_Security_Cryptography_KeyedHashAlgorithmSizeCheck;
  static_assert(sizeof(KeyedHashAlgorithm) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(System::Security::Cryptography::KeyedHashAlgorithm*, "System.Security.Cryptography", "KeyedHashAlgorithm");
// Writing MetadataGetter for method: System::Security::Cryptography::KeyedHashAlgorithm::get_Key
// Il2CppName: get_Key
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Security::Cryptography::KeyedHashAlgorithm::set_Key
// Il2CppName: set_Key
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Security::Cryptography::KeyedHashAlgorithm::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Security::Cryptography::KeyedHashAlgorithm::Dispose
// Il2CppName: Dispose
// Cannot perform method pointer template specialization from operators!
