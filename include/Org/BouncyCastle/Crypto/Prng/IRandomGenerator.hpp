// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include <stdint.h>
// Completed includes
// Begin il2cpp-utils forward declares
template<class T>
struct Array;
// Completed il2cpp-utils forward declares
// Type namespace: Org.BouncyCastle.Crypto.Prng
namespace Org::BouncyCastle::Crypto::Prng {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.Prng.IRandomGenerator
  class IRandomGenerator {
    public:
    // Creating value type constructor for type: IRandomGenerator
    IRandomGenerator() noexcept {}
    // public System.Void NextBytes(System.Byte[] bytes)
    // Offset: 0xFFFFFFFF
    void NextBytes(::Array<uint8_t>* bytes);
  }; // Org.BouncyCastle.Crypto.Prng.IRandomGenerator
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Prng::IRandomGenerator*, "Org.BouncyCastle.Crypto.Prng", "IRandomGenerator");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Prng::IRandomGenerator::NextBytes
// Il2CppName: NextBytes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Prng::IRandomGenerator::*)(::Array<uint8_t>*)>(&Org::BouncyCastle::Crypto::Prng::IRandomGenerator::NextBytes)> {
  static const MethodInfo* get() {
    static auto* bytes = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Prng::IRandomGenerator*), "NextBytes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bytes});
  }
};
