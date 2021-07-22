// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Crypto.Engines.ThreefishEngine
#include "Org/BouncyCastle/Crypto/Engines/ThreefishEngine.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Org.BouncyCastle.Crypto.Engines
namespace Org::BouncyCastle::Crypto::Engines {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.Engines.ThreefishEngine/Org.BouncyCastle.Crypto.Engines.ThreefishCipher
  // [TokenAttribute] Offset: FFFFFFFF
  class ThreefishEngine::ThreefishCipher : public ::Il2CppObject {
    public:
    // protected readonly System.UInt64[] t
    // Size: 0x8
    // Offset: 0x10
    ::Array<uint64_t>* t;
    // Field size check
    static_assert(sizeof(::Array<uint64_t>*) == 0x8);
    // protected readonly System.UInt64[] kw
    // Size: 0x8
    // Offset: 0x18
    ::Array<uint64_t>* kw;
    // Field size check
    static_assert(sizeof(::Array<uint64_t>*) == 0x8);
    // Creating value type constructor for type: ThreefishCipher
    ThreefishCipher(::Array<uint64_t>* t_ = {}, ::Array<uint64_t>* kw_ = {}) noexcept : t{t_}, kw{kw_} {}
    // protected System.Void .ctor(System.UInt64[] kw, System.UInt64[] t)
    // Offset: 0x1E5D5CC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ThreefishEngine::ThreefishCipher* New_ctor(::Array<uint64_t>* kw, ::Array<uint64_t>* t) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Crypto::Engines::ThreefishEngine::ThreefishCipher::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ThreefishEngine::ThreefishCipher*, creationType>(kw, t)));
    }
    // System.Void EncryptBlock(System.UInt64[] block, System.UInt64[] outWords)
    // Offset: 0xFFFFFFFF
    void EncryptBlock(::Array<uint64_t>* block, ::Array<uint64_t>* outWords);
    // System.Void DecryptBlock(System.UInt64[] block, System.UInt64[] outWords)
    // Offset: 0xFFFFFFFF
    void DecryptBlock(::Array<uint64_t>* block, ::Array<uint64_t>* outWords);
  }; // Org.BouncyCastle.Crypto.Engines.ThreefishEngine/Org.BouncyCastle.Crypto.Engines.ThreefishCipher
  #pragma pack(pop)
  static check_size<sizeof(ThreefishEngine::ThreefishCipher), 24 + sizeof(::Array<uint64_t>*)> __Org_BouncyCastle_Crypto_Engines_ThreefishEngine_ThreefishCipherSizeCheck;
  static_assert(sizeof(ThreefishEngine::ThreefishCipher) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Engines::ThreefishEngine::ThreefishCipher*, "Org.BouncyCastle.Crypto.Engines", "ThreefishEngine/ThreefishCipher");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::ThreefishEngine::ThreefishCipher::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::ThreefishEngine::ThreefishCipher::EncryptBlock
// Il2CppName: EncryptBlock
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Engines::ThreefishEngine::ThreefishCipher::*)(::Array<uint64_t>*, ::Array<uint64_t>*)>(&Org::BouncyCastle::Crypto::Engines::ThreefishEngine::ThreefishCipher::EncryptBlock)> {
  static const MethodInfo* get() {
    static auto* block = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt64"), 1)->byval_arg;
    static auto* outWords = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt64"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::ThreefishEngine::ThreefishCipher*), "EncryptBlock", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{block, outWords});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::ThreefishEngine::ThreefishCipher::DecryptBlock
// Il2CppName: DecryptBlock
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Engines::ThreefishEngine::ThreefishCipher::*)(::Array<uint64_t>*, ::Array<uint64_t>*)>(&Org::BouncyCastle::Crypto::Engines::ThreefishEngine::ThreefishCipher::DecryptBlock)> {
  static const MethodInfo* get() {
    static auto* block = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt64"), 1)->byval_arg;
    static auto* outWords = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt64"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::ThreefishEngine::ThreefishCipher*), "DecryptBlock", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{block, outWords});
  }
};
