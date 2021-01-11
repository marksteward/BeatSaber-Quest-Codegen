// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Security.Cryptography.DSA
#include "System/Security/Cryptography/DSA.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Mono::Security::Cryptography
namespace Mono::Security::Cryptography {
}
// Forward declaring namespace: Mono::Math
namespace Mono::Math {
  // Forward declaring type: BigInteger
  class BigInteger;
}
// Forward declaring namespace: System::Security::Cryptography
namespace System::Security::Cryptography {
  // Forward declaring type: RandomNumberGenerator
  class RandomNumberGenerator;
  // Forward declaring type: DSAParameters
  struct DSAParameters;
}
// Completed forward declares
// Type namespace: Mono.Security.Cryptography
namespace Mono::Security::Cryptography {
  // Size: 0x78
  #pragma pack(push, 1)
  // Autogenerated type: Mono.Security.Cryptography.DSAManaged
  // [] Offset: FFFFFFFF
  class DSAManaged : public System::Security::Cryptography::DSA {
    public:
    // Nested type: Mono::Security::Cryptography::DSAManaged::KeyGeneratedEventHandler
    class KeyGeneratedEventHandler;
    // private System.Boolean keypairGenerated
    // Size: 0x1
    // Offset: 0x20
    bool keypairGenerated;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean m_disposed
    // Size: 0x1
    // Offset: 0x21
    bool m_disposed;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: m_disposed and: p
    char __padding1[0x6] = {};
    // private Mono.Math.BigInteger p
    // Size: 0x8
    // Offset: 0x28
    Mono::Math::BigInteger* p;
    // Field size check
    static_assert(sizeof(Mono::Math::BigInteger*) == 0x8);
    // private Mono.Math.BigInteger q
    // Size: 0x8
    // Offset: 0x30
    Mono::Math::BigInteger* q;
    // Field size check
    static_assert(sizeof(Mono::Math::BigInteger*) == 0x8);
    // private Mono.Math.BigInteger g
    // Size: 0x8
    // Offset: 0x38
    Mono::Math::BigInteger* g;
    // Field size check
    static_assert(sizeof(Mono::Math::BigInteger*) == 0x8);
    // private Mono.Math.BigInteger x
    // Size: 0x8
    // Offset: 0x40
    Mono::Math::BigInteger* x;
    // Field size check
    static_assert(sizeof(Mono::Math::BigInteger*) == 0x8);
    // private Mono.Math.BigInteger y
    // Size: 0x8
    // Offset: 0x48
    Mono::Math::BigInteger* y;
    // Field size check
    static_assert(sizeof(Mono::Math::BigInteger*) == 0x8);
    // private Mono.Math.BigInteger j
    // Size: 0x8
    // Offset: 0x50
    Mono::Math::BigInteger* j;
    // Field size check
    static_assert(sizeof(Mono::Math::BigInteger*) == 0x8);
    // private Mono.Math.BigInteger seed
    // Size: 0x8
    // Offset: 0x58
    Mono::Math::BigInteger* seed;
    // Field size check
    static_assert(sizeof(Mono::Math::BigInteger*) == 0x8);
    // private System.Int32 counter
    // Size: 0x4
    // Offset: 0x60
    int counter;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Boolean j_missing
    // Size: 0x1
    // Offset: 0x64
    bool j_missing;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: j_missing and: rng
    char __padding10[0x3] = {};
    // private System.Security.Cryptography.RandomNumberGenerator rng
    // Size: 0x8
    // Offset: 0x68
    System::Security::Cryptography::RandomNumberGenerator* rng;
    // Field size check
    static_assert(sizeof(System::Security::Cryptography::RandomNumberGenerator*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xD3DD20
    // private Mono.Security.Cryptography.DSAManaged/KeyGeneratedEventHandler KeyGenerated
    // Size: 0x8
    // Offset: 0x70
    Mono::Security::Cryptography::DSAManaged::KeyGeneratedEventHandler* KeyGenerated;
    // Field size check
    static_assert(sizeof(Mono::Security::Cryptography::DSAManaged::KeyGeneratedEventHandler*) == 0x8);
    // Creating value type constructor for type: DSAManaged
    DSAManaged(bool keypairGenerated_ = {}, bool m_disposed_ = {}, Mono::Math::BigInteger* p_ = {}, Mono::Math::BigInteger* q_ = {}, Mono::Math::BigInteger* g_ = {}, Mono::Math::BigInteger* x_ = {}, Mono::Math::BigInteger* y_ = {}, Mono::Math::BigInteger* j_ = {}, Mono::Math::BigInteger* seed_ = {}, int counter_ = {}, bool j_missing_ = {}, System::Security::Cryptography::RandomNumberGenerator* rng_ = {}, Mono::Security::Cryptography::DSAManaged::KeyGeneratedEventHandler* KeyGenerated_ = {}) noexcept : keypairGenerated{keypairGenerated_}, m_disposed{m_disposed_}, p{p_}, q{q_}, g{g_}, x{x_}, y{y_}, j{j_}, seed{seed_}, counter{counter_}, j_missing{j_missing_}, rng{rng_}, KeyGenerated{KeyGenerated_} {}
    // public System.Void .ctor(System.Int32 dwKeySize)
    // Offset: 0x15AE070
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DSAManaged* New_ctor(int dwKeySize) {
      static auto ___internal__logger = ::Logger::get().WithContext("Mono::Security::Cryptography::DSAManaged::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DSAManaged*, creationType>(dwKeySize)));
    }
    // private System.Void Generate()
    // Offset: 0x15AE1DC
    void Generate();
    // private System.Void GenerateKeyPair()
    // Offset: 0x15AE858
    void GenerateKeyPair();
    // private System.Void add(System.Byte[] a, System.Byte[] b, System.Int32 value)
    // Offset: 0x15AED8C
    void add(::Array<uint8_t>* a, ::Array<uint8_t>* b, int value);
    // private System.Void GenerateParams(System.Int32 keyLength)
    // Offset: 0x15AE22C
    void GenerateParams(int keyLength);
    // private System.Security.Cryptography.RandomNumberGenerator get_Random()
    // Offset: 0x15AEE40
    System::Security::Cryptography::RandomNumberGenerator* get_Random();
    // public System.Boolean get_PublicOnly()
    // Offset: 0x15AEEA8
    bool get_PublicOnly();
    // private System.Byte[] NormalizeArray(System.Byte[] array)
    // Offset: 0x15AEF30
    ::Array<uint8_t>* NormalizeArray(::Array<uint8_t>* array);
    // public System.Void add_KeyGenerated(Mono.Security.Cryptography.DSAManaged/KeyGeneratedEventHandler value)
    // Offset: 0x15AFDD0
    void add_KeyGenerated(Mono::Security::Cryptography::DSAManaged::KeyGeneratedEventHandler* value);
    // public System.Void remove_KeyGenerated(Mono.Security.Cryptography.DSAManaged/KeyGeneratedEventHandler value)
    // Offset: 0x15AFE74
    void remove_KeyGenerated(Mono::Security::Cryptography::DSAManaged::KeyGeneratedEventHandler* value);
    // protected override System.Void Finalize()
    // Offset: 0x15AE168
    // Implemented from: System.Object
    // Base method: System.Void Object::Finalize()
    void Finalize();
    // public override System.Int32 get_KeySize()
    // Offset: 0x15AEE7C
    // Implemented from: System.Security.Cryptography.AsymmetricAlgorithm
    // Base method: System.Int32 AsymmetricAlgorithm::get_KeySize()
    int get_KeySize();
    // public override System.Security.Cryptography.DSAParameters ExportParameters(System.Boolean includePrivateParameters)
    // Offset: 0x15AEFE4
    // Implemented from: System.Security.Cryptography.DSA
    // Base method: System.Security.Cryptography.DSAParameters DSA::ExportParameters(System.Boolean includePrivateParameters)
    System::Security::Cryptography::DSAParameters ExportParameters(bool includePrivateParameters);
    // public override System.Void ImportParameters(System.Security.Cryptography.DSAParameters parameters)
    // Offset: 0x15AF2D8
    // Implemented from: System.Security.Cryptography.DSA
    // Base method: System.Void DSA::ImportParameters(System.Security.Cryptography.DSAParameters parameters)
    void ImportParameters(System::Security::Cryptography::DSAParameters parameters);
    // public override System.Boolean VerifySignature(System.Byte[] rgbHash, System.Byte[] rgbSignature)
    // Offset: 0x15AF638
    // Implemented from: System.Security.Cryptography.DSA
    // Base method: System.Boolean DSA::VerifySignature(System.Byte[] rgbHash, System.Byte[] rgbSignature)
    bool VerifySignature(::Array<uint8_t>* rgbHash, ::Array<uint8_t>* rgbSignature);
    // protected override System.Void Dispose(System.Boolean disposing)
    // Offset: 0x15AFB10
    // Implemented from: System.Security.Cryptography.AsymmetricAlgorithm
    // Base method: System.Void AsymmetricAlgorithm::Dispose(System.Boolean disposing)
    void Dispose(bool disposing);
  }; // Mono.Security.Cryptography.DSAManaged
  static check_size<sizeof(DSAManaged), 112 + sizeof(Mono::Security::Cryptography::DSAManaged::KeyGeneratedEventHandler*)> __Mono_Security_Cryptography_DSAManagedSizeCheck;
  static_assert(sizeof(DSAManaged) == 0x78);
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(Mono::Security::Cryptography::DSAManaged*, "Mono.Security.Cryptography", "DSAManaged");
