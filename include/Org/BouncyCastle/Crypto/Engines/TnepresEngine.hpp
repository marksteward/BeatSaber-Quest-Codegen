// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Crypto.Engines.SerpentEngineBase
#include "Org/BouncyCastle/Crypto/Engines/SerpentEngineBase.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Org.BouncyCastle.Crypto.Engines
namespace Org::BouncyCastle::Crypto::Engines {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.Engines.TnepresEngine
  // [TokenAttribute] Offset: FFFFFFFF
  class TnepresEngine : public Org::BouncyCastle::Crypto::Engines::SerpentEngineBase {
    public:
    // Creating value type constructor for type: TnepresEngine
    TnepresEngine() noexcept {}
    // public override System.String get_AlgorithmName()
    // Offset: 0x1E60040
    // Implemented from: Org.BouncyCastle.Crypto.Engines.SerpentEngineBase
    // Base method: System.String SerpentEngineBase::get_AlgorithmName()
    ::Il2CppString* get_AlgorithmName();
    // public System.Void .ctor()
    // Offset: 0x1E64964
    // Implemented from: Org.BouncyCastle.Crypto.Engines.SerpentEngineBase
    // Base method: System.Void SerpentEngineBase::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TnepresEngine* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Crypto::Engines::TnepresEngine::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TnepresEngine*, creationType>()));
    }
    // protected override System.Int32[] MakeWorkingKey(System.Byte[] key)
    // Offset: 0x1E60088
    // Implemented from: Org.BouncyCastle.Crypto.Engines.SerpentEngineBase
    // Base method: System.Int32[] SerpentEngineBase::MakeWorkingKey(System.Byte[] key)
    ::Array<int>* MakeWorkingKey(::Array<uint8_t>* key);
    // protected override System.Void EncryptBlock(System.Byte[] input, System.Int32 inOff, System.Byte[] output, System.Int32 outOff)
    // Offset: 0x1E61B30
    // Implemented from: Org.BouncyCastle.Crypto.Engines.SerpentEngineBase
    // Base method: System.Void SerpentEngineBase::EncryptBlock(System.Byte[] input, System.Int32 inOff, System.Byte[] output, System.Int32 outOff)
    void EncryptBlock(::Array<uint8_t>* input, int inOff, ::Array<uint8_t>* output, int outOff);
    // protected override System.Void DecryptBlock(System.Byte[] input, System.Int32 inOff, System.Byte[] output, System.Int32 outOff)
    // Offset: 0x1E630A0
    // Implemented from: Org.BouncyCastle.Crypto.Engines.SerpentEngineBase
    // Base method: System.Void SerpentEngineBase::DecryptBlock(System.Byte[] input, System.Int32 inOff, System.Byte[] output, System.Int32 outOff)
    void DecryptBlock(::Array<uint8_t>* input, int inOff, ::Array<uint8_t>* output, int outOff);
  }; // Org.BouncyCastle.Crypto.Engines.TnepresEngine
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Engines::TnepresEngine*, "Org.BouncyCastle.Crypto.Engines", "TnepresEngine");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::TnepresEngine::get_AlgorithmName
// Il2CppName: get_AlgorithmName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (Org::BouncyCastle::Crypto::Engines::TnepresEngine::*)()>(&Org::BouncyCastle::Crypto::Engines::TnepresEngine::get_AlgorithmName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::TnepresEngine*), "get_AlgorithmName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::TnepresEngine::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::TnepresEngine::MakeWorkingKey
// Il2CppName: MakeWorkingKey
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<int>* (Org::BouncyCastle::Crypto::Engines::TnepresEngine::*)(::Array<uint8_t>*)>(&Org::BouncyCastle::Crypto::Engines::TnepresEngine::MakeWorkingKey)> {
  static const MethodInfo* get() {
    static auto* key = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::TnepresEngine*), "MakeWorkingKey", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::TnepresEngine::EncryptBlock
// Il2CppName: EncryptBlock
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Engines::TnepresEngine::*)(::Array<uint8_t>*, int, ::Array<uint8_t>*, int)>(&Org::BouncyCastle::Crypto::Engines::TnepresEngine::EncryptBlock)> {
  static const MethodInfo* get() {
    static auto* input = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* inOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* output = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* outOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::TnepresEngine*), "EncryptBlock", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input, inOff, output, outOff});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::TnepresEngine::DecryptBlock
// Il2CppName: DecryptBlock
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Engines::TnepresEngine::*)(::Array<uint8_t>*, int, ::Array<uint8_t>*, int)>(&Org::BouncyCastle::Crypto::Engines::TnepresEngine::DecryptBlock)> {
  static const MethodInfo* get() {
    static auto* input = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* inOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* output = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* outOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::TnepresEngine*), "DecryptBlock", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input, inOff, output, outOff});
  }
};
