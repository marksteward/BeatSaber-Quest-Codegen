// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Mono.Security.Cryptography.PKCS8
#include "Mono/Security/Cryptography/PKCS8.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: ArrayList
  class ArrayList;
}
// Forward declaring namespace: System::Security::Cryptography
namespace System::Security::Cryptography {
  // Forward declaring type: RSA
  class RSA;
  // Forward declaring type: DSA
  class DSA;
  // Forward declaring type: DSAParameters
  struct DSAParameters;
  // Forward declaring type: AsymmetricAlgorithm
  class AsymmetricAlgorithm;
}
// Completed forward declares
// Type namespace: Mono.Security.Cryptography
namespace Mono::Security::Cryptography {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: Mono.Security.Cryptography.PKCS8/PrivateKeyInfo
  class PKCS8::PrivateKeyInfo : public ::Il2CppObject {
    public:
    // private System.Int32 _version
    // Size: 0x4
    // Offset: 0x10
    int version;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: version and: algorithm
    char __padding0[0x4] = {};
    // private System.String _algorithm
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* algorithm;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.Byte[] _key
    // Size: 0x8
    // Offset: 0x20
    ::Array<uint8_t>* key;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // private System.Collections.ArrayList _list
    // Size: 0x8
    // Offset: 0x28
    System::Collections::ArrayList* list;
    // Field size check
    static_assert(sizeof(System::Collections::ArrayList*) == 0x8);
    // Creating value type constructor for type: PrivateKeyInfo
    PrivateKeyInfo(int version_ = {}, ::Il2CppString* algorithm_ = {}, ::Array<uint8_t>* key_ = {}, System::Collections::ArrayList* list_ = {}) noexcept : version{version_}, algorithm{algorithm_}, key{key_}, list{list_} {}
    // public System.Void .ctor(System.Byte[] data)
    // Offset: 0x1D76140
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PKCS8::PrivateKeyInfo* New_ctor(::Array<uint8_t>* data) {
      static auto ___internal__logger = ::Logger::get().WithContext("Mono::Security::Cryptography::PKCS8::PrivateKeyInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PKCS8::PrivateKeyInfo*, creationType>(data)));
    }
    // public System.Byte[] get_PrivateKey()
    // Offset: 0x1D763A0
    ::Array<uint8_t>* get_PrivateKey();
    // private System.Void Decode(System.Byte[] data)
    // Offset: 0x1D7616C
    void Decode(::Array<uint8_t>* data);
    // static private System.Byte[] RemoveLeadingZero(System.Byte[] bigInt)
    // Offset: 0x1D7641C
    static ::Array<uint8_t>* RemoveLeadingZero(::Array<uint8_t>* bigInt);
    // static private System.Byte[] Normalize(System.Byte[] bigInt, System.Int32 length)
    // Offset: 0x1D764C8
    static ::Array<uint8_t>* Normalize(::Array<uint8_t>* bigInt, int length);
    // static public System.Security.Cryptography.RSA DecodeRSA(System.Byte[] keypair)
    // Offset: 0x1D7657C
    static System::Security::Cryptography::RSA* DecodeRSA(::Array<uint8_t>* keypair);
    // static public System.Byte[] Encode(System.Security.Cryptography.RSA rsa)
    // Offset: 0x1D768F8
    static ::Array<uint8_t>* Encode(System::Security::Cryptography::RSA* rsa);
    // static public System.Security.Cryptography.DSA DecodeDSA(System.Byte[] privateKey, System.Security.Cryptography.DSAParameters dsaParameters)
    // Offset: 0x1D76ABC
    static System::Security::Cryptography::DSA* DecodeDSA(::Array<uint8_t>* privateKey, System::Security::Cryptography::DSAParameters dsaParameters);
    // static public System.Byte[] Encode(System.Security.Cryptography.DSA dsa)
    // Offset: 0x1D76BD8
    static ::Array<uint8_t>* Encode(System::Security::Cryptography::DSA* dsa);
    // static public System.Byte[] Encode(System.Security.Cryptography.AsymmetricAlgorithm aa)
    // Offset: 0x1D76C24
    static ::Array<uint8_t>* Encode(System::Security::Cryptography::AsymmetricAlgorithm* aa);
    // public System.Void .ctor()
    // Offset: 0x1D760D0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PKCS8::PrivateKeyInfo* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Mono::Security::Cryptography::PKCS8::PrivateKeyInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PKCS8::PrivateKeyInfo*, creationType>()));
    }
  }; // Mono.Security.Cryptography.PKCS8/PrivateKeyInfo
  #pragma pack(pop)
  static check_size<sizeof(PKCS8::PrivateKeyInfo), 40 + sizeof(System::Collections::ArrayList*)> __Mono_Security_Cryptography_PKCS8_PrivateKeyInfoSizeCheck;
  static_assert(sizeof(PKCS8::PrivateKeyInfo) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(Mono::Security::Cryptography::PKCS8::PrivateKeyInfo*, "Mono.Security.Cryptography", "PKCS8/PrivateKeyInfo");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Mono::Security::Cryptography::PKCS8::PrivateKeyInfo::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Mono::Security::Cryptography::PKCS8::PrivateKeyInfo::get_PrivateKey
// Il2CppName: get_PrivateKey
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<uint8_t>* (Mono::Security::Cryptography::PKCS8::PrivateKeyInfo::*)()>(&Mono::Security::Cryptography::PKCS8::PrivateKeyInfo::get_PrivateKey)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::PKCS8::PrivateKeyInfo*), "get_PrivateKey", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::Cryptography::PKCS8::PrivateKeyInfo::Decode
// Il2CppName: Decode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Security::Cryptography::PKCS8::PrivateKeyInfo::*)(::Array<uint8_t>*)>(&Mono::Security::Cryptography::PKCS8::PrivateKeyInfo::Decode)> {
  static const MethodInfo* get() {
    static auto* data = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::PKCS8::PrivateKeyInfo*), "Decode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{data});
  }
};
// Writing MetadataGetter for method: Mono::Security::Cryptography::PKCS8::PrivateKeyInfo::RemoveLeadingZero
// Il2CppName: RemoveLeadingZero
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<uint8_t>* (*)(::Array<uint8_t>*)>(&Mono::Security::Cryptography::PKCS8::PrivateKeyInfo::RemoveLeadingZero)> {
  static const MethodInfo* get() {
    static auto* bigInt = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::PKCS8::PrivateKeyInfo*), "RemoveLeadingZero", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bigInt});
  }
};
// Writing MetadataGetter for method: Mono::Security::Cryptography::PKCS8::PrivateKeyInfo::Normalize
// Il2CppName: Normalize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<uint8_t>* (*)(::Array<uint8_t>*, int)>(&Mono::Security::Cryptography::PKCS8::PrivateKeyInfo::Normalize)> {
  static const MethodInfo* get() {
    static auto* bigInt = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* length = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::PKCS8::PrivateKeyInfo*), "Normalize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bigInt, length});
  }
};
// Writing MetadataGetter for method: Mono::Security::Cryptography::PKCS8::PrivateKeyInfo::DecodeRSA
// Il2CppName: DecodeRSA
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Security::Cryptography::RSA* (*)(::Array<uint8_t>*)>(&Mono::Security::Cryptography::PKCS8::PrivateKeyInfo::DecodeRSA)> {
  static const MethodInfo* get() {
    static auto* keypair = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::PKCS8::PrivateKeyInfo*), "DecodeRSA", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{keypair});
  }
};
// Writing MetadataGetter for method: Mono::Security::Cryptography::PKCS8::PrivateKeyInfo::Encode
// Il2CppName: Encode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<uint8_t>* (*)(System::Security::Cryptography::RSA*)>(&Mono::Security::Cryptography::PKCS8::PrivateKeyInfo::Encode)> {
  static const MethodInfo* get() {
    static auto* rsa = &::il2cpp_utils::GetClassFromName("System.Security.Cryptography", "RSA")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::PKCS8::PrivateKeyInfo*), "Encode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rsa});
  }
};
// Writing MetadataGetter for method: Mono::Security::Cryptography::PKCS8::PrivateKeyInfo::DecodeDSA
// Il2CppName: DecodeDSA
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Security::Cryptography::DSA* (*)(::Array<uint8_t>*, System::Security::Cryptography::DSAParameters)>(&Mono::Security::Cryptography::PKCS8::PrivateKeyInfo::DecodeDSA)> {
  static const MethodInfo* get() {
    static auto* privateKey = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* dsaParameters = &::il2cpp_utils::GetClassFromName("System.Security.Cryptography", "DSAParameters")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::PKCS8::PrivateKeyInfo*), "DecodeDSA", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{privateKey, dsaParameters});
  }
};
// Writing MetadataGetter for method: Mono::Security::Cryptography::PKCS8::PrivateKeyInfo::Encode
// Il2CppName: Encode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<uint8_t>* (*)(System::Security::Cryptography::DSA*)>(&Mono::Security::Cryptography::PKCS8::PrivateKeyInfo::Encode)> {
  static const MethodInfo* get() {
    static auto* dsa = &::il2cpp_utils::GetClassFromName("System.Security.Cryptography", "DSA")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::PKCS8::PrivateKeyInfo*), "Encode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{dsa});
  }
};
// Writing MetadataGetter for method: Mono::Security::Cryptography::PKCS8::PrivateKeyInfo::Encode
// Il2CppName: Encode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<uint8_t>* (*)(System::Security::Cryptography::AsymmetricAlgorithm*)>(&Mono::Security::Cryptography::PKCS8::PrivateKeyInfo::Encode)> {
  static const MethodInfo* get() {
    static auto* aa = &::il2cpp_utils::GetClassFromName("System.Security.Cryptography", "AsymmetricAlgorithm")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::PKCS8::PrivateKeyInfo*), "Encode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{aa});
  }
};
// Writing MetadataGetter for method: Mono::Security::Cryptography::PKCS8::PrivateKeyInfo::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
