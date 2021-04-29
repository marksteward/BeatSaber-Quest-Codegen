// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Security::Cryptography
namespace System::Security::Cryptography {
  // Forward declaring type: RSA
  class RSA;
}
// Completed forward declares
// Type namespace: Mono.Security.Authenticode
namespace Mono::Security::Authenticode {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: Mono.Security.Authenticode.PrivateKey
  class PrivateKey : public ::Il2CppObject {
    public:
    // private System.Boolean encrypted
    // Size: 0x1
    // Offset: 0x10
    bool encrypted;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: encrypted and: rsa
    char __padding0[0x7] = {};
    // private System.Security.Cryptography.RSA rsa
    // Size: 0x8
    // Offset: 0x18
    System::Security::Cryptography::RSA* rsa;
    // Field size check
    static_assert(sizeof(System::Security::Cryptography::RSA*) == 0x8);
    // private System.Boolean weak
    // Size: 0x1
    // Offset: 0x20
    bool weak;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: weak and: keyType
    char __padding2[0x3] = {};
    // private System.Int32 keyType
    // Size: 0x4
    // Offset: 0x24
    int keyType;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: PrivateKey
    PrivateKey(bool encrypted_ = {}, System::Security::Cryptography::RSA* rsa_ = {}, bool weak_ = {}, int keyType_ = {}) noexcept : encrypted{encrypted_}, rsa{rsa_}, weak{weak_}, keyType{keyType_} {}
    // public System.Void .ctor(System.Byte[] data, System.String password)
    // Offset: 0x1B98428
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PrivateKey* New_ctor(::Array<uint8_t>* data, ::Il2CppString* password) {
      static auto ___internal__logger = ::Logger::get().WithContext("Mono::Security::Authenticode::PrivateKey::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PrivateKey*, creationType>(data, password)));
    }
    // public System.Security.Cryptography.RSA get_RSA()
    // Offset: 0x1B98998
    System::Security::Cryptography::RSA* get_RSA();
    // private System.Byte[] DeriveKey(System.Byte[] salt, System.String password)
    // Offset: 0x1B989A0
    ::Array<uint8_t>* DeriveKey(::Array<uint8_t>* salt, ::Il2CppString* password);
    // private System.Boolean Decode(System.Byte[] pvk, System.String password)
    // Offset: 0x1B98518
    bool Decode(::Array<uint8_t>* pvk, ::Il2CppString* password);
    // static public Mono.Security.Authenticode.PrivateKey CreateFromFile(System.String filename)
    // Offset: 0x1B98B88
    static Mono::Security::Authenticode::PrivateKey* CreateFromFile(::Il2CppString* filename);
    // static public Mono.Security.Authenticode.PrivateKey CreateFromFile(System.String filename, System.String password)
    // Offset: 0x1B98B90
    static Mono::Security::Authenticode::PrivateKey* CreateFromFile(::Il2CppString* filename, ::Il2CppString* password);
  }; // Mono.Security.Authenticode.PrivateKey
  #pragma pack(pop)
  static check_size<sizeof(PrivateKey), 36 + sizeof(int)> __Mono_Security_Authenticode_PrivateKeySizeCheck;
  static_assert(sizeof(PrivateKey) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(Mono::Security::Authenticode::PrivateKey*, "Mono.Security.Authenticode", "PrivateKey");
