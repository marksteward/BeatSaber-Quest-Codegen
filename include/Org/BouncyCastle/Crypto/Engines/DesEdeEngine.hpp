// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Crypto.Engines.DesEngine
#include "Org/BouncyCastle/Crypto/Engines/DesEngine.hpp"
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
  // Size: 0x31
  // Autogenerated type: Org.BouncyCastle.Crypto.Engines.DesEdeEngine
  // [] Offset: FFFFFFFF
  class DesEdeEngine : public Org::BouncyCastle::Crypto::Engines::DesEngine {
    public:
    // private System.Int32[] workingKey1
    // Size: 0x8
    // Offset: 0x18
    ::Array<int>* workingKey1;
    // Field size check
    static_assert(sizeof(::Array<int>*) == 0x8);
    // private System.Int32[] workingKey2
    // Size: 0x8
    // Offset: 0x20
    ::Array<int>* workingKey2;
    // Field size check
    static_assert(sizeof(::Array<int>*) == 0x8);
    // private System.Int32[] workingKey3
    // Size: 0x8
    // Offset: 0x28
    ::Array<int>* workingKey3;
    // Field size check
    static_assert(sizeof(::Array<int>*) == 0x8);
    // private System.Boolean forEncryption
    // Size: 0x1
    // Offset: 0x30
    bool forEncryption;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: DesEdeEngine
    DesEdeEngine(::Array<int>* workingKey1_ = {}, ::Array<int>* workingKey2_ = {}, ::Array<int>* workingKey3_ = {}, bool forEncryption_ = {}) noexcept : workingKey1{workingKey1_}, workingKey2{workingKey2_}, workingKey3{workingKey3_}, forEncryption{forEncryption_} {}
    // Deleting conversion operator: operator ::Array<int>*
    constexpr operator ::Array<int>*() const noexcept = delete;
    // public override System.Void Init(System.Boolean forEncryption, Org.BouncyCastle.Crypto.ICipherParameters parameters)
    // Offset: 0x17CDC64
    // Implemented from: Org.BouncyCastle.Crypto.Engines.DesEngine
    // Base method: System.Void DesEngine::Init(System.Boolean forEncryption, Org.BouncyCastle.Crypto.ICipherParameters parameters)
    void Init(bool forEncryption, Org::BouncyCastle::Crypto::ICipherParameters* parameters);
    // public override System.String get_AlgorithmName()
    // Offset: 0x17CE4A0
    // Implemented from: Org.BouncyCastle.Crypto.Engines.DesEngine
    // Base method: System.String DesEngine::get_AlgorithmName()
    ::Il2CppString* get_AlgorithmName();
    // public override System.Int32 GetBlockSize()
    // Offset: 0x17CE4E8
    // Implemented from: Org.BouncyCastle.Crypto.Engines.DesEngine
    // Base method: System.Int32 DesEngine::GetBlockSize()
    int GetBlockSize();
    // public override System.Int32 ProcessBlock(System.Byte[] input, System.Int32 inOff, System.Byte[] output, System.Int32 outOff)
    // Offset: 0x17CE4F0
    // Implemented from: Org.BouncyCastle.Crypto.Engines.DesEngine
    // Base method: System.Int32 DesEngine::ProcessBlock(System.Byte[] input, System.Int32 inOff, System.Byte[] output, System.Int32 outOff)
    int ProcessBlock(::Array<uint8_t>* input, int inOff, ::Array<uint8_t>* output, int outOff);
    // public override System.Void Reset()
    // Offset: 0x17CEB1C
    // Implemented from: Org.BouncyCastle.Crypto.Engines.DesEngine
    // Base method: System.Void DesEngine::Reset()
    void Reset();
    // public System.Void .ctor()
    // Offset: 0x17CEB20
    // Implemented from: Org.BouncyCastle.Crypto.Engines.DesEngine
    // Base method: System.Void DesEngine::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DesEdeEngine* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Crypto::Engines::DesEdeEngine::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DesEdeEngine*, creationType>()));
    }
  }; // Org.BouncyCastle.Crypto.Engines.DesEdeEngine
  static check_size<sizeof(DesEdeEngine), 48 + sizeof(bool)> __Org_BouncyCastle_Crypto_Engines_DesEdeEngineSizeCheck;
  static_assert(sizeof(DesEdeEngine) == 0x31);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Engines::DesEdeEngine*, "Org.BouncyCastle.Crypto.Engines", "DesEdeEngine");
#pragma pack(pop)
