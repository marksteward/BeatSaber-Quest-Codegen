// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Mono::Security::X509
namespace Mono::Security::X509 {
  // Forward declaring type: X509Stores
  class X509Stores;
}
// Completed forward declares
// Type namespace: Mono.Security.X509
namespace Mono::Security::X509 {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Mono.Security.X509.X509StoreManager
  // [TokenAttribute] Offset: FFFFFFFF
  class X509StoreManager : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: X509StoreManager
    X509StoreManager() noexcept {}
    // Get static field: static private System.String _userPath
    static ::Il2CppString* _get__userPath();
    // Set static field: static private System.String _userPath
    static void _set__userPath(::Il2CppString* value);
    // Get static field: static private System.String _localMachinePath
    static ::Il2CppString* _get__localMachinePath();
    // Set static field: static private System.String _localMachinePath
    static void _set__localMachinePath(::Il2CppString* value);
    // Get static field: static private Mono.Security.X509.X509Stores _userStore
    static Mono::Security::X509::X509Stores* _get__userStore();
    // Set static field: static private Mono.Security.X509.X509Stores _userStore
    static void _set__userStore(Mono::Security::X509::X509Stores* value);
    // Get static field: static private Mono.Security.X509.X509Stores _machineStore
    static Mono::Security::X509::X509Stores* _get__machineStore();
    // Set static field: static private Mono.Security.X509.X509Stores _machineStore
    static void _set__machineStore(Mono::Security::X509::X509Stores* value);
    // static System.String get_CurrentUserPath()
    // Offset: 0x23830AC
    static ::Il2CppString* get_CurrentUserPath();
    // static System.String get_LocalMachinePath()
    // Offset: 0x2383190
    static ::Il2CppString* get_LocalMachinePath();
    // static public Mono.Security.X509.X509Stores get_CurrentUser()
    // Offset: 0x238326C
    static Mono::Security::X509::X509Stores* get_CurrentUser();
    // static public Mono.Security.X509.X509Stores get_LocalMachine()
    // Offset: 0x238334C
    static Mono::Security::X509::X509Stores* get_LocalMachine();
  }; // Mono.Security.X509.X509StoreManager
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Mono::Security::X509::X509StoreManager*, "Mono.Security.X509", "X509StoreManager");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Mono::Security::X509::X509StoreManager::get_CurrentUserPath
// Il2CppName: get_CurrentUserPath
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (*)()>(&Mono::Security::X509::X509StoreManager::get_CurrentUserPath)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::X509::X509StoreManager*), "get_CurrentUserPath", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::X509::X509StoreManager::get_LocalMachinePath
// Il2CppName: get_LocalMachinePath
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (*)()>(&Mono::Security::X509::X509StoreManager::get_LocalMachinePath)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::X509::X509StoreManager*), "get_LocalMachinePath", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::X509::X509StoreManager::get_CurrentUser
// Il2CppName: get_CurrentUser
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Mono::Security::X509::X509Stores* (*)()>(&Mono::Security::X509::X509StoreManager::get_CurrentUser)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::X509::X509StoreManager*), "get_CurrentUser", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::X509::X509StoreManager::get_LocalMachine
// Il2CppName: get_LocalMachine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Mono::Security::X509::X509Stores* (*)()>(&Mono::Security::X509::X509StoreManager::get_LocalMachine)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::X509::X509StoreManager*), "get_LocalMachine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
