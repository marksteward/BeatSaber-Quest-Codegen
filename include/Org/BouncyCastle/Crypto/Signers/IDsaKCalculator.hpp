// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include <stdint.h>
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Math
namespace Org::BouncyCastle::Math {
  // Forward declaring type: BigInteger
  class BigInteger;
}
// Forward declaring namespace: Org::BouncyCastle::Security
namespace Org::BouncyCastle::Security {
  // Forward declaring type: SecureRandom
  class SecureRandom;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
template<class T>
struct Array;
// Completed il2cpp-utils forward declares
// Type namespace: Org.BouncyCastle.Crypto.Signers
namespace Org::BouncyCastle::Crypto::Signers {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.Signers.IDsaKCalculator
  class IDsaKCalculator {
    public:
    // Creating value type constructor for type: IDsaKCalculator
    IDsaKCalculator() noexcept {}
    // public System.Boolean get_IsDeterministic()
    // Offset: 0xFFFFFFFF
    bool get_IsDeterministic();
    // public System.Void Init(Org.BouncyCastle.Math.BigInteger n, Org.BouncyCastle.Security.SecureRandom random)
    // Offset: 0xFFFFFFFF
    void Init(Org::BouncyCastle::Math::BigInteger* n, Org::BouncyCastle::Security::SecureRandom* random);
    // public System.Void Init(Org.BouncyCastle.Math.BigInteger n, Org.BouncyCastle.Math.BigInteger d, System.Byte[] message)
    // Offset: 0xFFFFFFFF
    void Init(Org::BouncyCastle::Math::BigInteger* n, Org::BouncyCastle::Math::BigInteger* d, ::Array<uint8_t>* message);
    // public Org.BouncyCastle.Math.BigInteger NextK()
    // Offset: 0xFFFFFFFF
    Org::BouncyCastle::Math::BigInteger* NextK();
  }; // Org.BouncyCastle.Crypto.Signers.IDsaKCalculator
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Signers::IDsaKCalculator*, "Org.BouncyCastle.Crypto.Signers", "IDsaKCalculator");
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Signers::IDsaKCalculator::get_IsDeterministic
// Il2CppName: get_IsDeterministic
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Org::BouncyCastle::Crypto::Signers::IDsaKCalculator::*)()>(&Org::BouncyCastle::Crypto::Signers::IDsaKCalculator::get_IsDeterministic)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Signers::IDsaKCalculator*), "get_IsDeterministic", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Signers::IDsaKCalculator::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Signers::IDsaKCalculator::*)(Org::BouncyCastle::Math::BigInteger*, Org::BouncyCastle::Security::SecureRandom*)>(&Org::BouncyCastle::Crypto::Signers::IDsaKCalculator::Init)> {
  const MethodInfo* get() {
    static auto* n = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math", "BigInteger")->byval_arg;
    static auto* random = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Security", "SecureRandom")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Signers::IDsaKCalculator*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{n, random});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Signers::IDsaKCalculator::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Signers::IDsaKCalculator::*)(Org::BouncyCastle::Math::BigInteger*, Org::BouncyCastle::Math::BigInteger*, ::Array<uint8_t>*)>(&Org::BouncyCastle::Crypto::Signers::IDsaKCalculator::Init)> {
  const MethodInfo* get() {
    static auto* n = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math", "BigInteger")->byval_arg;
    static auto* d = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math", "BigInteger")->byval_arg;
    static auto* message = &classof(::Array<::Array<uint8_t>*>*)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Signers::IDsaKCalculator*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{n, d, message});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Signers::IDsaKCalculator::NextK
// Il2CppName: NextK
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::BigInteger* (Org::BouncyCastle::Crypto::Signers::IDsaKCalculator::*)()>(&Org::BouncyCastle::Crypto::Signers::IDsaKCalculator::NextK)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Signers::IDsaKCalculator*), "NextK", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
