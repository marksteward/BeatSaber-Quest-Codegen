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
  // Autogenerated type: Org.BouncyCastle.Crypto.Engines.IdeaEngine
  class IdeaEngine : public ::Il2CppObject/*, public Org::BouncyCastle::Crypto::IBlockCipher*/ {
    public:
    // private System.Int32[] workingKey
    // Size: 0x8
    // Offset: 0x10
    ::Array<int>* workingKey;
    // Field size check
    static_assert(sizeof(::Array<int>*) == 0x8);
    // Creating value type constructor for type: IdeaEngine
    IdeaEngine(::Array<int>* workingKey_ = {}) noexcept : workingKey{workingKey_} {}
    // Creating interface conversion operator: operator Org::BouncyCastle::Crypto::IBlockCipher
    operator Org::BouncyCastle::Crypto::IBlockCipher() noexcept {
      return *reinterpret_cast<Org::BouncyCastle::Crypto::IBlockCipher*>(this);
    }
    // Creating conversion operator: operator ::Array<int>*
    constexpr operator ::Array<int>*() const noexcept {
      return workingKey;
    }
    // Get static field: static private readonly System.Int32 MASK
    static int _get_MASK();
    // Set static field: static private readonly System.Int32 MASK
    static void _set_MASK(int value);
    // Get static field: static private readonly System.Int32 BASE
    static int _get_BASE();
    // Set static field: static private readonly System.Int32 BASE
    static void _set_BASE(int value);
    // public System.Void Init(System.Boolean forEncryption, Org.BouncyCastle.Crypto.ICipherParameters parameters)
    // Offset: 0x1BB9930
    void Init(bool forEncryption, Org::BouncyCastle::Crypto::ICipherParameters* parameters);
    // public System.String get_AlgorithmName()
    // Offset: 0x1BB9A98
    ::Il2CppString* get_AlgorithmName();
    // public System.Boolean get_IsPartialBlockOkay()
    // Offset: 0x1BB9AE0
    bool get_IsPartialBlockOkay();
    // public System.Int32 GetBlockSize()
    // Offset: 0x1BB9AE8
    int GetBlockSize();
    // public System.Int32 ProcessBlock(System.Byte[] input, System.Int32 inOff, System.Byte[] output, System.Int32 outOff)
    // Offset: 0x1BB9AF0
    int ProcessBlock(::Array<uint8_t>* input, int inOff, ::Array<uint8_t>* output, int outOff);
    // public System.Void Reset()
    // Offset: 0x1BB9ECC
    void Reset();
    // private System.Int32 BytesToWord(System.Byte[] input, System.Int32 inOff)
    // Offset: 0x1BB9ED0
    int BytesToWord(::Array<uint8_t>* input, int inOff);
    // private System.Void WordToBytes(System.Int32 word, System.Byte[] outBytes, System.Int32 outOff)
    // Offset: 0x1BB9F1C
    void WordToBytes(int word, ::Array<uint8_t>* outBytes, int outOff);
    // private System.Int32 Mul(System.Int32 x, System.Int32 y)
    // Offset: 0x1BB9F70
    int Mul(int x, int y);
    // private System.Void IdeaFunc(System.Int32[] workingKey, System.Byte[] input, System.Int32 inOff, System.Byte[] outBytes, System.Int32 outOff)
    // Offset: 0x1BB9BF4
    void IdeaFunc(::Array<int>* workingKey, ::Array<uint8_t>* input, int inOff, ::Array<uint8_t>* outBytes, int outOff);
    // private System.Int32[] ExpandKey(System.Byte[] uKey)
    // Offset: 0x1BBA094
    ::Array<int>* ExpandKey(::Array<uint8_t>* uKey);
    // private System.Int32 MulInv(System.Int32 x)
    // Offset: 0x1BBA290
    int MulInv(int x);
    // private System.Int32 AddInv(System.Int32 x)
    // Offset: 0x1BBA3D0
    int AddInv(int x);
    // private System.Int32[] InvertKey(System.Int32[] inKey)
    // Offset: 0x1BBA444
    ::Array<int>* InvertKey(::Array<int>* inKey);
    // private System.Int32[] GenerateWorkingKey(System.Boolean forEncryption, System.Byte[] userKey)
    // Offset: 0x1BB9A60
    ::Array<int>* GenerateWorkingKey(bool forEncryption, ::Array<uint8_t>* userKey);
    // static private System.Void .cctor()
    // Offset: 0x1BBA71C
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x1BB9928
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IdeaEngine* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Crypto::Engines::IdeaEngine::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IdeaEngine*, creationType>()));
    }
  }; // Org.BouncyCastle.Crypto.Engines.IdeaEngine
  #pragma pack(pop)
  static check_size<sizeof(IdeaEngine), 16 + sizeof(::Array<int>*)> __Org_BouncyCastle_Crypto_Engines_IdeaEngineSizeCheck;
  static_assert(sizeof(IdeaEngine) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Engines::IdeaEngine*, "Org.BouncyCastle.Crypto.Engines", "IdeaEngine");
