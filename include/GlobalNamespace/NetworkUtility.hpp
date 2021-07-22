// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: AuthenticationToken
#include "GlobalNamespace/AuthenticationToken.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: NetworkUtility
  // [TokenAttribute] Offset: FFFFFFFF
  class NetworkUtility : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: NetworkUtility
    NetworkUtility() noexcept {}
    // Get static field: static private System.Byte[] _nameEncryptionKey
    static ::Array<uint8_t>* _get__nameEncryptionKey();
    // Set static field: static private System.Byte[] _nameEncryptionKey
    static void _set__nameEncryptionKey(::Array<uint8_t>* value);
    // Get static field: static private System.Byte[] _nameEncryptionIv
    static ::Array<uint8_t>* _get__nameEncryptionIv();
    // Set static field: static private System.Byte[] _nameEncryptionIv
    static void _set__nameEncryptionIv(::Array<uint8_t>* value);
    // static private System.Void .cctor()
    // Offset: 0x1538804
    static void _cctor();
    // static private System.Void Init()
    // Offset: 0x1538808
    static void Init();
    // static public System.String GetHashedUserId(System.String userId, AuthenticationToken/Platform platform)
    // Offset: 0x15388D4
    static ::Il2CppString* GetHashedUserId(::Il2CppString* userId, GlobalNamespace::AuthenticationToken::Platform platform);
    // static public System.String EncryptName(System.String text)
    // Offset: 0x1538B20
    static ::Il2CppString* EncryptName(::Il2CppString* text);
    // static public System.String DecryptName(System.String text)
    // Offset: 0x1538E3C
    static ::Il2CppString* DecryptName(::Il2CppString* text);
    // static public System.String GenerateId()
    // Offset: 0x153915C
    static ::Il2CppString* GenerateId();
    // static public System.String GetHashBase64(System.String input)
    // Offset: 0x153898C
    static ::Il2CppString* GetHashBase64(::Il2CppString* input);
  }; // NetworkUtility
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::NetworkUtility*, "", "NetworkUtility");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::NetworkUtility::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::NetworkUtility::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NetworkUtility*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NetworkUtility::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::NetworkUtility::Init)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NetworkUtility*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NetworkUtility::GetHashedUserId
// Il2CppName: GetHashedUserId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (*)(::Il2CppString*, GlobalNamespace::AuthenticationToken::Platform)>(&GlobalNamespace::NetworkUtility::GetHashedUserId)> {
  static const MethodInfo* get() {
    static auto* userId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* platform = &::il2cpp_utils::GetClassFromName("", "AuthenticationToken/Platform")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NetworkUtility*), "GetHashedUserId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{userId, platform});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NetworkUtility::EncryptName
// Il2CppName: EncryptName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (*)(::Il2CppString*)>(&GlobalNamespace::NetworkUtility::EncryptName)> {
  static const MethodInfo* get() {
    static auto* text = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NetworkUtility*), "EncryptName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{text});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NetworkUtility::DecryptName
// Il2CppName: DecryptName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (*)(::Il2CppString*)>(&GlobalNamespace::NetworkUtility::DecryptName)> {
  static const MethodInfo* get() {
    static auto* text = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NetworkUtility*), "DecryptName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{text});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NetworkUtility::GenerateId
// Il2CppName: GenerateId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (*)()>(&GlobalNamespace::NetworkUtility::GenerateId)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NetworkUtility*), "GenerateId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NetworkUtility::GetHashBase64
// Il2CppName: GetHashBase64
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (*)(::Il2CppString*)>(&GlobalNamespace::NetworkUtility::GetHashBase64)> {
  static const MethodInfo* get() {
    static auto* input = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NetworkUtility*), "GetHashBase64", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input});
  }
};
