// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
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
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.Engines.DesEdeEngine
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
    // Offset: 0x1D9E788
    // Implemented from: Org.BouncyCastle.Crypto.Engines.DesEngine
    // Base method: System.Void DesEngine::Init(System.Boolean forEncryption, Org.BouncyCastle.Crypto.ICipherParameters parameters)
    void Init(bool forEncryption, Org::BouncyCastle::Crypto::ICipherParameters* parameters);
    // public override System.String get_AlgorithmName()
    // Offset: 0x1D9EFA0
    // Implemented from: Org.BouncyCastle.Crypto.Engines.DesEngine
    // Base method: System.String DesEngine::get_AlgorithmName()
    ::Il2CppString* get_AlgorithmName();
    // public override System.Int32 GetBlockSize()
    // Offset: 0x1D9EFE8
    // Implemented from: Org.BouncyCastle.Crypto.Engines.DesEngine
    // Base method: System.Int32 DesEngine::GetBlockSize()
    int GetBlockSize();
    // public override System.Int32 ProcessBlock(System.Byte[] input, System.Int32 inOff, System.Byte[] output, System.Int32 outOff)
    // Offset: 0x1D9EFF0
    // Implemented from: Org.BouncyCastle.Crypto.Engines.DesEngine
    // Base method: System.Int32 DesEngine::ProcessBlock(System.Byte[] input, System.Int32 inOff, System.Byte[] output, System.Int32 outOff)
    int ProcessBlock(::Array<uint8_t>* input, int inOff, ::Array<uint8_t>* output, int outOff);
    // public override System.Void Reset()
    // Offset: 0x1D9F61C
    // Implemented from: Org.BouncyCastle.Crypto.Engines.DesEngine
    // Base method: System.Void DesEngine::Reset()
    void Reset();
    // public System.Void .ctor()
    // Offset: 0x1D9F620
    // Implemented from: Org.BouncyCastle.Crypto.Engines.DesEngine
    // Base method: System.Void DesEngine::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DesEdeEngine* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Crypto::Engines::DesEdeEngine::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DesEdeEngine*, creationType>()));
    }
  }; // Org.BouncyCastle.Crypto.Engines.DesEdeEngine
  #pragma pack(pop)
  static check_size<sizeof(DesEdeEngine), 48 + sizeof(bool)> __Org_BouncyCastle_Crypto_Engines_DesEdeEngineSizeCheck;
  static_assert(sizeof(DesEdeEngine) == 0x31);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Engines::DesEdeEngine*, "Org.BouncyCastle.Crypto.Engines", "DesEdeEngine");
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::DesEdeEngine::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Engines::DesEdeEngine::*)(bool, Org::BouncyCastle::Crypto::ICipherParameters*)>(&Org::BouncyCastle::Crypto::Engines::DesEdeEngine::Init)> {
  const MethodInfo* get() {
    static auto* forEncryption = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* parameters = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Crypto", "ICipherParameters")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::DesEdeEngine*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{forEncryption, parameters});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::DesEdeEngine::get_AlgorithmName
// Il2CppName: get_AlgorithmName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (Org::BouncyCastle::Crypto::Engines::DesEdeEngine::*)()>(&Org::BouncyCastle::Crypto::Engines::DesEdeEngine::get_AlgorithmName)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::DesEdeEngine*), "get_AlgorithmName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::DesEdeEngine::GetBlockSize
// Il2CppName: GetBlockSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Engines::DesEdeEngine::*)()>(&Org::BouncyCastle::Crypto::Engines::DesEdeEngine::GetBlockSize)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::DesEdeEngine*), "GetBlockSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::DesEdeEngine::ProcessBlock
// Il2CppName: ProcessBlock
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Engines::DesEdeEngine::*)(::Array<uint8_t>*, int, ::Array<uint8_t>*, int)>(&Org::BouncyCastle::Crypto::Engines::DesEdeEngine::ProcessBlock)> {
  const MethodInfo* get() {
    static auto* input = &classof(::Array<::Array<uint8_t>*>*)->byval_arg;
    static auto* inOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* output = &classof(::Array<::Array<uint8_t>*>*)->byval_arg;
    static auto* outOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::DesEdeEngine*), "ProcessBlock", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input, inOff, output, outOff});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::DesEdeEngine::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Engines::DesEdeEngine::*)()>(&Org::BouncyCastle::Crypto::Engines::DesEdeEngine::Reset)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::DesEdeEngine*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::DesEdeEngine::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
