// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include <initializer_list>
// Completed includes
// Type namespace: System.Security.Cryptography
namespace System::Security::Cryptography {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Security.Cryptography.CryptoConfig
  // [ComVisibleAttribute] Offset: D7DB50
  class CryptoConfig : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: CryptoConfig
    CryptoConfig() noexcept {}
    // static public System.Byte[] EncodeOID(System.String str)
    // Offset: 0x1960E64
    static ::Array<uint8_t>* EncodeOID(::Il2CppString* str);
    // static private System.Byte[] EncodeLongNumber(System.Int64 x)
    // Offset: 0x19612AC
    static ::Array<uint8_t>* EncodeLongNumber(int64_t x);
    // static public System.Boolean get_AllowOnlyFipsAlgorithms()
    // Offset: 0x1961454
    static bool get_AllowOnlyFipsAlgorithms();
    // static public System.Object CreateFromName(System.String name)
    // Offset: 0x196145C
    static ::Il2CppObject* CreateFromName(::Il2CppString* name);
    // static public System.Object CreateFromName(System.String name, params System.Object[] args)
    // Offset: 0x1961460
    static ::Il2CppObject* CreateFromName(::Il2CppString* name, ::Array<::Il2CppObject*>* args);
    // Creating initializer_list -> params proxy for: System.Object CreateFromName(System.String name, params System.Object[] args)
    static ::Il2CppObject* CreateFromName(::Il2CppString* name, std::initializer_list<::Il2CppObject*> args);
    // Creating TArgs -> initializer_list proxy for: System.Object CreateFromName(System.String name, params System.Object[] args)
    template<class ...TParams>
    static ::Il2CppObject* CreateFromName(::Il2CppString* name, TParams&&... args) {
      return CreateFromName(name, {args...});
    }
    // static System.String MapNameToOID(System.String name, System.Object arg)
    // Offset: 0x1962FAC
    static ::Il2CppString* MapNameToOID(::Il2CppString* name, ::Il2CppObject* arg);
    // static public System.String MapNameToOID(System.String name)
    // Offset: 0x1962FB0
    static ::Il2CppString* MapNameToOID(::Il2CppString* name);
  }; // System.Security.Cryptography.CryptoConfig
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Security::Cryptography::CryptoConfig*, "System.Security.Cryptography", "CryptoConfig");
// Writing MetadataGetter for method: System::Security::Cryptography::CryptoConfig::EncodeOID
// Il2CppName: EncodeOID
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<uint8_t>* (*)(::Il2CppString*)>(&System::Security::Cryptography::CryptoConfig::EncodeOID)> {
  const MethodInfo* get() {
    static auto* str = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::CryptoConfig*), "EncodeOID", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{str});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::CryptoConfig::EncodeLongNumber
// Il2CppName: EncodeLongNumber
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<uint8_t>* (*)(int64_t)>(&System::Security::Cryptography::CryptoConfig::EncodeLongNumber)> {
  const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::CryptoConfig*), "EncodeLongNumber", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::CryptoConfig::get_AllowOnlyFipsAlgorithms
// Il2CppName: get_AllowOnlyFipsAlgorithms
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&System::Security::Cryptography::CryptoConfig::get_AllowOnlyFipsAlgorithms)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::CryptoConfig*), "get_AllowOnlyFipsAlgorithms", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::CryptoConfig::CreateFromName
// Il2CppName: CreateFromName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (*)(::Il2CppString*)>(&System::Security::Cryptography::CryptoConfig::CreateFromName)> {
  const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::CryptoConfig*), "CreateFromName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::CryptoConfig::CreateFromName
// Il2CppName: CreateFromName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (*)(::Il2CppString*, ::Array<::Il2CppObject*>*)>(&System::Security::Cryptography::CryptoConfig::CreateFromName)> {
  const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* args = &classof(::Array<::Array<::Il2CppObject*>*>*)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::CryptoConfig*), "CreateFromName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name, args});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::CryptoConfig::MapNameToOID
// Il2CppName: MapNameToOID
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (*)(::Il2CppString*, ::Il2CppObject*)>(&System::Security::Cryptography::CryptoConfig::MapNameToOID)> {
  const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* arg = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::CryptoConfig*), "MapNameToOID", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name, arg});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::CryptoConfig::MapNameToOID
// Il2CppName: MapNameToOID
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (*)(::Il2CppString*)>(&System::Security::Cryptography::CryptoConfig::MapNameToOID)> {
  const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::CryptoConfig*), "MapNameToOID", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name});
  }
};
