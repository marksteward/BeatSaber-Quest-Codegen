// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Crypto.IBlockCipher
#include "Org/BouncyCastle/Crypto/IBlockCipher.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Crypto
namespace Org::BouncyCastle::Crypto {
  // Forward declaring type: ICipherParameters
  class ICipherParameters;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Crypto.Engines
namespace Org::BouncyCastle::Crypto::Engines {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.Engines.SM4Engine
  // [] Offset: FFFFFFFF
  class SM4Engine : public ::Il2CppObject/*, public Org::BouncyCastle::Crypto::IBlockCipher*/ {
    public:
    // private System.UInt32[] rk
    // Size: 0x8
    // Offset: 0x10
    ::Array<uint>* rk;
    // Field size check
    static_assert(sizeof(::Array<uint>*) == 0x8);
    // Creating value type constructor for type: SM4Engine
    SM4Engine(::Array<uint>* rk_ = {}) noexcept : rk{rk_} {}
    // Creating interface conversion operator: operator Org::BouncyCastle::Crypto::IBlockCipher
    operator Org::BouncyCastle::Crypto::IBlockCipher() noexcept {
      return *reinterpret_cast<Org::BouncyCastle::Crypto::IBlockCipher*>(this);
    }
    // Creating conversion operator: operator ::Array<uint>*
    constexpr operator ::Array<uint>*() const noexcept {
      return rk;
    }
    // Get static field: static private readonly System.Byte[] Sbox
    static ::Array<uint8_t>* _get_Sbox();
    // Set static field: static private readonly System.Byte[] Sbox
    static void _set_Sbox(::Array<uint8_t>* value);
    // Get static field: static private readonly System.UInt32[] CK
    static ::Array<uint>* _get_CK();
    // Set static field: static private readonly System.UInt32[] CK
    static void _set_CK(::Array<uint>* value);
    // Get static field: static private readonly System.UInt32[] FK
    static ::Array<uint>* _get_FK();
    // Set static field: static private readonly System.UInt32[] FK
    static void _set_FK(::Array<uint>* value);
    // static private System.UInt32 tau(System.UInt32 A)
    // Offset: 0x18092B0
    static uint tau(uint A);
    // static private System.UInt32 L_ap(System.UInt32 B)
    // Offset: 0x1809390
    static uint L_ap(uint B);
    // private System.UInt32 T_ap(System.UInt32 Z)
    // Offset: 0x18093D4
    uint T_ap(uint Z);
    // private System.Void ExpandKey(System.Boolean forEncryption, System.Byte[] key)
    // Offset: 0x1809468
    void ExpandKey(bool forEncryption, ::Array<uint8_t>* key);
    // static private System.UInt32 L(System.UInt32 B)
    // Offset: 0x1809A3C
    static uint L(uint B);
    // static private System.UInt32 T(System.UInt32 Z)
    // Offset: 0x1809AB8
    static uint T(uint Z);
    // static private System.Void .cctor()
    // Offset: 0x1809FEC
    static void _cctor();
    // public System.Void Init(System.Boolean forEncryption, Org.BouncyCastle.Crypto.ICipherParameters parameters)
    // Offset: 0x1809B20
    // Implemented from: Org.BouncyCastle.Crypto.IBlockCipher
    // Base method: System.Void IBlockCipher::Init(System.Boolean forEncryption, Org.BouncyCastle.Crypto.ICipherParameters parameters)
    void Init(bool forEncryption, Org::BouncyCastle::Crypto::ICipherParameters* parameters);
    // public System.String get_AlgorithmName()
    // Offset: 0x1809CE0
    // Implemented from: Org.BouncyCastle.Crypto.IBlockCipher
    // Base method: System.String IBlockCipher::get_AlgorithmName()
    ::Il2CppString* get_AlgorithmName();
    // public System.Boolean get_IsPartialBlockOkay()
    // Offset: 0x1809D28
    // Implemented from: Org.BouncyCastle.Crypto.IBlockCipher
    // Base method: System.Boolean IBlockCipher::get_IsPartialBlockOkay()
    bool get_IsPartialBlockOkay();
    // public System.Int32 GetBlockSize()
    // Offset: 0x1809D30
    // Implemented from: Org.BouncyCastle.Crypto.IBlockCipher
    // Base method: System.Int32 IBlockCipher::GetBlockSize()
    int GetBlockSize();
    // public System.Int32 ProcessBlock(System.Byte[] input, System.Int32 inOff, System.Byte[] output, System.Int32 outOff)
    // Offset: 0x1809D38
    // Implemented from: Org.BouncyCastle.Crypto.IBlockCipher
    // Base method: System.Int32 IBlockCipher::ProcessBlock(System.Byte[] input, System.Int32 inOff, System.Byte[] output, System.Int32 outOff)
    int ProcessBlock(::Array<uint8_t>* input, int inOff, ::Array<uint8_t>* output, int outOff);
    // public System.Void Reset()
    // Offset: 0x1809FE8
    // Implemented from: Org.BouncyCastle.Crypto.IBlockCipher
    // Base method: System.Void IBlockCipher::Reset()
    void Reset();
    // public System.Void .ctor()
    // Offset: 0x180A0EC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SM4Engine* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Crypto::Engines::SM4Engine::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SM4Engine*, creationType>()));
    }
  }; // Org.BouncyCastle.Crypto.Engines.SM4Engine
  static check_size<sizeof(SM4Engine), 16 + sizeof(::Array<uint>*)> __Org_BouncyCastle_Crypto_Engines_SM4EngineSizeCheck;
  static_assert(sizeof(SM4Engine) == 0x18);
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Engines::SM4Engine*, "Org.BouncyCastle.Crypto.Engines", "SM4Engine");
