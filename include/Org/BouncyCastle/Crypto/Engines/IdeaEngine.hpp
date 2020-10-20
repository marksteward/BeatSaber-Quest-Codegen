// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Crypto.IBlockCipher
#include "Org/BouncyCastle/Crypto/IBlockCipher.hpp"
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
  // Autogenerated type: Org.BouncyCastle.Crypto.Engines.IdeaEngine
  class IdeaEngine : public ::Il2CppObject/*, public Org::BouncyCastle::Crypto::IBlockCipher*/ {
    public:
    // private System.Int32[] workingKey
    // Offset: 0x10
    ::Array<int>* workingKey;
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
    // private System.Int32 BytesToWord(System.Byte[] input, System.Int32 inOff)
    // Offset: 0x1971BDC
    int BytesToWord(::Array<uint8_t>* input, int inOff);
    // private System.Void WordToBytes(System.Int32 word, System.Byte[] outBytes, System.Int32 outOff)
    // Offset: 0x1971C28
    void WordToBytes(int word, ::Array<uint8_t>* outBytes, int outOff);
    // private System.Int32 Mul(System.Int32 x, System.Int32 y)
    // Offset: 0x1971C7C
    int Mul(int x, int y);
    // private System.Void IdeaFunc(System.Int32[] workingKey, System.Byte[] input, System.Int32 inOff, System.Byte[] outBytes, System.Int32 outOff)
    // Offset: 0x1971900
    void IdeaFunc(::Array<int>* workingKey, ::Array<uint8_t>* input, int inOff, ::Array<uint8_t>* outBytes, int outOff);
    // private System.Int32[] ExpandKey(System.Byte[] uKey)
    // Offset: 0x1971DA0
    ::Array<int>* ExpandKey(::Array<uint8_t>* uKey);
    // private System.Int32 MulInv(System.Int32 x)
    // Offset: 0x1971F9C
    int MulInv(int x);
    // private System.Int32 AddInv(System.Int32 x)
    // Offset: 0x19720DC
    int AddInv(int x);
    // private System.Int32[] InvertKey(System.Int32[] inKey)
    // Offset: 0x1972150
    ::Array<int>* InvertKey(::Array<int>* inKey);
    // private System.Int32[] GenerateWorkingKey(System.Boolean forEncryption, System.Byte[] userKey)
    // Offset: 0x197176C
    ::Array<int>* GenerateWorkingKey(bool forEncryption, ::Array<uint8_t>* userKey);
    // static private System.Void .cctor()
    // Offset: 0x1972428
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x197162C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static IdeaEngine* New_ctor();
    // public System.Void Init(System.Boolean forEncryption, Org.BouncyCastle.Crypto.ICipherParameters parameters)
    // Offset: 0x1971634
    // Implemented from: Org.BouncyCastle.Crypto.IBlockCipher
    // Base method: System.Void IBlockCipher::Init(System.Boolean forEncryption, Org.BouncyCastle.Crypto.ICipherParameters parameters)
    void Init(bool forEncryption, Org::BouncyCastle::Crypto::ICipherParameters* parameters);
    // public System.String get_AlgorithmName()
    // Offset: 0x19717A4
    // Implemented from: Org.BouncyCastle.Crypto.IBlockCipher
    // Base method: System.String IBlockCipher::get_AlgorithmName()
    ::Il2CppString* get_AlgorithmName();
    // public System.Boolean get_IsPartialBlockOkay()
    // Offset: 0x19717EC
    // Implemented from: Org.BouncyCastle.Crypto.IBlockCipher
    // Base method: System.Boolean IBlockCipher::get_IsPartialBlockOkay()
    bool get_IsPartialBlockOkay();
    // public System.Int32 GetBlockSize()
    // Offset: 0x19717F4
    // Implemented from: Org.BouncyCastle.Crypto.IBlockCipher
    // Base method: System.Int32 IBlockCipher::GetBlockSize()
    int GetBlockSize();
    // public System.Int32 ProcessBlock(System.Byte[] input, System.Int32 inOff, System.Byte[] output, System.Int32 outOff)
    // Offset: 0x19717FC
    // Implemented from: Org.BouncyCastle.Crypto.IBlockCipher
    // Base method: System.Int32 IBlockCipher::ProcessBlock(System.Byte[] input, System.Int32 inOff, System.Byte[] output, System.Int32 outOff)
    int ProcessBlock(::Array<uint8_t>* input, int inOff, ::Array<uint8_t>* output, int outOff);
    // public System.Void Reset()
    // Offset: 0x1971BD8
    // Implemented from: Org.BouncyCastle.Crypto.IBlockCipher
    // Base method: System.Void IBlockCipher::Reset()
    void Reset();
  }; // Org.BouncyCastle.Crypto.Engines.IdeaEngine
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Engines::IdeaEngine*, "Org.BouncyCastle.Crypto.Engines", "IdeaEngine");
#pragma pack(pop)
