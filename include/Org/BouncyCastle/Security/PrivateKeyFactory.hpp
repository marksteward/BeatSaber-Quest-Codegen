// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Crypto
namespace Org::BouncyCastle::Crypto {
  // Forward declaring type: AsymmetricKeyParameter
  class AsymmetricKeyParameter;
}
// Forward declaring namespace: Org::BouncyCastle::Asn1::Pkcs
namespace Org::BouncyCastle::Asn1::Pkcs {
  // Forward declaring type: PrivateKeyInfo
  class PrivateKeyInfo;
  // Forward declaring type: EncryptedPrivateKeyInfo
  class EncryptedPrivateKeyInfo;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Security
namespace Org::BouncyCastle::Security {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Security.PrivateKeyFactory
  class PrivateKeyFactory : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: PrivateKeyFactory
    PrivateKeyFactory() noexcept {}
    // static public Org.BouncyCastle.Crypto.AsymmetricKeyParameter CreateKey(Org.BouncyCastle.Asn1.Pkcs.PrivateKeyInfo keyInfo)
    // Offset: 0x136E9A8
    static Org::BouncyCastle::Crypto::AsymmetricKeyParameter* CreateKey(Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo* keyInfo);
    // static private System.Byte[] GetRawKey(Org.BouncyCastle.Asn1.Pkcs.PrivateKeyInfo keyInfo, System.Int32 expectedSize)
    // Offset: 0x136FE04
    static ::Array<uint8_t>* GetRawKey(Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo* keyInfo, int expectedSize);
    // static public Org.BouncyCastle.Crypto.AsymmetricKeyParameter DecryptKey(System.Char[] passPhrase, Org.BouncyCastle.Asn1.Pkcs.EncryptedPrivateKeyInfo encInfo)
    // Offset: 0x136FEC8
    static Org::BouncyCastle::Crypto::AsymmetricKeyParameter* DecryptKey(::Array<::Il2CppChar>* passPhrase, Org::BouncyCastle::Asn1::Pkcs::EncryptedPrivateKeyInfo* encInfo);
  }; // Org.BouncyCastle.Security.PrivateKeyFactory
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Security::PrivateKeyFactory*, "Org.BouncyCastle.Security", "PrivateKeyFactory");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Security::PrivateKeyFactory::CreateKey
// Il2CppName: CreateKey
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Crypto::AsymmetricKeyParameter* (*)(Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo*)>(&Org::BouncyCastle::Security::PrivateKeyFactory::CreateKey)> {
  static const MethodInfo* get() {
    static auto* keyInfo = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Asn1.Pkcs", "PrivateKeyInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Security::PrivateKeyFactory*), "CreateKey", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{keyInfo});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Security::PrivateKeyFactory::GetRawKey
// Il2CppName: GetRawKey
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<uint8_t>* (*)(Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo*, int)>(&Org::BouncyCastle::Security::PrivateKeyFactory::GetRawKey)> {
  static const MethodInfo* get() {
    static auto* keyInfo = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Asn1.Pkcs", "PrivateKeyInfo")->byval_arg;
    static auto* expectedSize = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Security::PrivateKeyFactory*), "GetRawKey", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{keyInfo, expectedSize});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Security::PrivateKeyFactory::DecryptKey
// Il2CppName: DecryptKey
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Crypto::AsymmetricKeyParameter* (*)(::Array<::Il2CppChar>*, Org::BouncyCastle::Asn1::Pkcs::EncryptedPrivateKeyInfo*)>(&Org::BouncyCastle::Security::PrivateKeyFactory::DecryptKey)> {
  static const MethodInfo* get() {
    static auto* passPhrase = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Char"), 1)->byval_arg;
    static auto* encInfo = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Asn1.Pkcs", "EncryptedPrivateKeyInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Security::PrivateKeyFactory*), "DecryptKey", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{passPhrase, encInfo});
  }
};
