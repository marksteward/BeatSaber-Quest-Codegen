// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Oculus::Platform
namespace Oculus::Platform {
  // Forward declaring type: Request`1<T>
  template<typename T>
  class Request_1;
}
// Forward declaring namespace: Oculus::Platform::Models
namespace Oculus::Platform::Models {
  // Forward declaring type: UserDataStoreUpdateResponse
  class UserDataStoreUpdateResponse;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Completed forward declares
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Platform.UserDataStore
  class UserDataStore : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: UserDataStore
    UserDataStore() noexcept {}
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.UserDataStoreUpdateResponse> PrivateDeleteEntryByKey(System.UInt64 userID, System.String key)
    // Offset: 0x23AFBF8
    static Oculus::Platform::Request_1<Oculus::Platform::Models::UserDataStoreUpdateResponse*>* PrivateDeleteEntryByKey(uint64_t userID, ::Il2CppString* key);
    // static public Oculus.Platform.Request`1<System.Collections.Generic.Dictionary`2<System.String,System.String>> PrivateGetEntries(System.UInt64 userID)
    // Offset: 0x23AFD1C
    static Oculus::Platform::Request_1<System::Collections::Generic::Dictionary_2<::Il2CppString*, ::Il2CppString*>*>* PrivateGetEntries(uint64_t userID);
    // static public Oculus.Platform.Request`1<System.Collections.Generic.Dictionary`2<System.String,System.String>> PrivateGetEntryByKey(System.UInt64 userID, System.String key)
    // Offset: 0x23AFE38
    static Oculus::Platform::Request_1<System::Collections::Generic::Dictionary_2<::Il2CppString*, ::Il2CppString*>*>* PrivateGetEntryByKey(uint64_t userID, ::Il2CppString* key);
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.UserDataStoreUpdateResponse> PrivateWriteEntry(System.UInt64 userID, System.String key, System.String value)
    // Offset: 0x23AFF5C
    static Oculus::Platform::Request_1<Oculus::Platform::Models::UserDataStoreUpdateResponse*>* PrivateWriteEntry(uint64_t userID, ::Il2CppString* key, ::Il2CppString* value);
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.UserDataStoreUpdateResponse> PublicDeleteEntryByKey(System.UInt64 userID, System.String key)
    // Offset: 0x23B0090
    static Oculus::Platform::Request_1<Oculus::Platform::Models::UserDataStoreUpdateResponse*>* PublicDeleteEntryByKey(uint64_t userID, ::Il2CppString* key);
    // static public Oculus.Platform.Request`1<System.Collections.Generic.Dictionary`2<System.String,System.String>> PublicGetEntries(System.UInt64 userID)
    // Offset: 0x23B01B4
    static Oculus::Platform::Request_1<System::Collections::Generic::Dictionary_2<::Il2CppString*, ::Il2CppString*>*>* PublicGetEntries(uint64_t userID);
    // static public Oculus.Platform.Request`1<System.Collections.Generic.Dictionary`2<System.String,System.String>> PublicGetEntryByKey(System.UInt64 userID, System.String key)
    // Offset: 0x23B02D0
    static Oculus::Platform::Request_1<System::Collections::Generic::Dictionary_2<::Il2CppString*, ::Il2CppString*>*>* PublicGetEntryByKey(uint64_t userID, ::Il2CppString* key);
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.UserDataStoreUpdateResponse> PublicWriteEntry(System.UInt64 userID, System.String key, System.String value)
    // Offset: 0x23B03F4
    static Oculus::Platform::Request_1<Oculus::Platform::Models::UserDataStoreUpdateResponse*>* PublicWriteEntry(uint64_t userID, ::Il2CppString* key, ::Il2CppString* value);
  }; // Oculus.Platform.UserDataStore
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::UserDataStore*, "Oculus.Platform", "UserDataStore");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Platform::UserDataStore::PrivateDeleteEntryByKey
// Il2CppName: PrivateDeleteEntryByKey
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Oculus::Platform::Request_1<Oculus::Platform::Models::UserDataStoreUpdateResponse*>* (*)(uint64_t, ::Il2CppString*)>(&Oculus::Platform::UserDataStore::PrivateDeleteEntryByKey)> {
  static const MethodInfo* get() {
    static auto* userID = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::UserDataStore*), "PrivateDeleteEntryByKey", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{userID, key});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::UserDataStore::PrivateGetEntries
// Il2CppName: PrivateGetEntries
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Oculus::Platform::Request_1<System::Collections::Generic::Dictionary_2<::Il2CppString*, ::Il2CppString*>*>* (*)(uint64_t)>(&Oculus::Platform::UserDataStore::PrivateGetEntries)> {
  static const MethodInfo* get() {
    static auto* userID = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::UserDataStore*), "PrivateGetEntries", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{userID});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::UserDataStore::PrivateGetEntryByKey
// Il2CppName: PrivateGetEntryByKey
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Oculus::Platform::Request_1<System::Collections::Generic::Dictionary_2<::Il2CppString*, ::Il2CppString*>*>* (*)(uint64_t, ::Il2CppString*)>(&Oculus::Platform::UserDataStore::PrivateGetEntryByKey)> {
  static const MethodInfo* get() {
    static auto* userID = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::UserDataStore*), "PrivateGetEntryByKey", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{userID, key});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::UserDataStore::PrivateWriteEntry
// Il2CppName: PrivateWriteEntry
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Oculus::Platform::Request_1<Oculus::Platform::Models::UserDataStoreUpdateResponse*>* (*)(uint64_t, ::Il2CppString*, ::Il2CppString*)>(&Oculus::Platform::UserDataStore::PrivateWriteEntry)> {
  static const MethodInfo* get() {
    static auto* userID = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::UserDataStore*), "PrivateWriteEntry", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{userID, key, value});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::UserDataStore::PublicDeleteEntryByKey
// Il2CppName: PublicDeleteEntryByKey
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Oculus::Platform::Request_1<Oculus::Platform::Models::UserDataStoreUpdateResponse*>* (*)(uint64_t, ::Il2CppString*)>(&Oculus::Platform::UserDataStore::PublicDeleteEntryByKey)> {
  static const MethodInfo* get() {
    static auto* userID = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::UserDataStore*), "PublicDeleteEntryByKey", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{userID, key});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::UserDataStore::PublicGetEntries
// Il2CppName: PublicGetEntries
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Oculus::Platform::Request_1<System::Collections::Generic::Dictionary_2<::Il2CppString*, ::Il2CppString*>*>* (*)(uint64_t)>(&Oculus::Platform::UserDataStore::PublicGetEntries)> {
  static const MethodInfo* get() {
    static auto* userID = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::UserDataStore*), "PublicGetEntries", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{userID});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::UserDataStore::PublicGetEntryByKey
// Il2CppName: PublicGetEntryByKey
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Oculus::Platform::Request_1<System::Collections::Generic::Dictionary_2<::Il2CppString*, ::Il2CppString*>*>* (*)(uint64_t, ::Il2CppString*)>(&Oculus::Platform::UserDataStore::PublicGetEntryByKey)> {
  static const MethodInfo* get() {
    static auto* userID = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::UserDataStore*), "PublicGetEntryByKey", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{userID, key});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::UserDataStore::PublicWriteEntry
// Il2CppName: PublicWriteEntry
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Oculus::Platform::Request_1<Oculus::Platform::Models::UserDataStoreUpdateResponse*>* (*)(uint64_t, ::Il2CppString*, ::Il2CppString*)>(&Oculus::Platform::UserDataStore::PublicWriteEntry)> {
  static const MethodInfo* get() {
    static auto* userID = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::UserDataStore*), "PublicWriteEntry", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{userID, key, value});
  }
};
