// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Microsoft.Win32.IRegistryApi
#include "Microsoft/Win32/IRegistryApi.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Microsoft::Win32
namespace Microsoft::Win32 {
  // Forward declaring type: RegistryKey
  class RegistryKey;
  // Forward declaring type: RegistryValueOptions
  struct RegistryValueOptions;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IntPtr
  struct IntPtr;
}
// Completed forward declares
// Type namespace: Microsoft.Win32
namespace Microsoft::Win32 {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Microsoft.Win32.UnixRegistryApi
  class UnixRegistryApi : public ::Il2CppObject/*, public Microsoft::Win32::IRegistryApi*/ {
    public:
    // Creating value type constructor for type: UnixRegistryApi
    UnixRegistryApi() noexcept {}
    // Creating interface conversion operator: operator Microsoft::Win32::IRegistryApi
    operator Microsoft::Win32::IRegistryApi() noexcept {
      return *reinterpret_cast<Microsoft::Win32::IRegistryApi*>(this);
    }
    // static private System.String ToUnix(System.String keyname)
    // Offset: 0x1A55618
    static ::Il2CppString* ToUnix(::Il2CppString* keyname);
    // static private System.Boolean IsWellKnownKey(System.String parentKeyName, System.String keyname)
    // Offset: 0x1A55674
    static bool IsWellKnownKey(::Il2CppString* parentKeyName, ::Il2CppString* keyname);
    // public Microsoft.Win32.RegistryKey OpenSubKey(Microsoft.Win32.RegistryKey rkey, System.String keyname, System.Boolean writable)
    // Offset: 0x1A557A0
    Microsoft::Win32::RegistryKey* OpenSubKey(Microsoft::Win32::RegistryKey* rkey, ::Il2CppString* keyname, bool writable);
    // public System.Void Flush(Microsoft.Win32.RegistryKey rkey)
    // Offset: 0x1A5588C
    void Flush(Microsoft::Win32::RegistryKey* rkey);
    // public System.Void Close(Microsoft.Win32.RegistryKey rkey)
    // Offset: 0x1A55908
    void Close(Microsoft::Win32::RegistryKey* rkey);
    // public System.Object GetValue(Microsoft.Win32.RegistryKey rkey, System.String name, System.Object default_value, Microsoft.Win32.RegistryValueOptions options)
    // Offset: 0x1A5596C
    ::Il2CppObject* GetValue(Microsoft::Win32::RegistryKey* rkey, ::Il2CppString* name, ::Il2CppObject* default_value, Microsoft::Win32::RegistryValueOptions options);
    // public System.String[] GetSubKeyNames(Microsoft.Win32.RegistryKey rkey)
    // Offset: 0x1A55A2C
    ::Array<::Il2CppString*>* GetSubKeyNames(Microsoft::Win32::RegistryKey* rkey);
    // public System.String ToString(Microsoft.Win32.RegistryKey rkey)
    // Offset: 0x1A55AA0
    ::Il2CppString* ToString(Microsoft::Win32::RegistryKey* rkey);
    // private Microsoft.Win32.RegistryKey CreateSubKey(Microsoft.Win32.RegistryKey rkey, System.String keyname, System.Boolean writable)
    // Offset: 0x1A55880
    Microsoft::Win32::RegistryKey* CreateSubKey(Microsoft::Win32::RegistryKey* rkey, ::Il2CppString* keyname, bool writable);
    // private Microsoft.Win32.RegistryKey CreateSubKey(Microsoft.Win32.RegistryKey rkey, System.String keyname, System.Boolean writable, System.Boolean is_volatile)
    // Offset: 0x1A55AB8
    Microsoft::Win32::RegistryKey* CreateSubKey(Microsoft::Win32::RegistryKey* rkey, ::Il2CppString* keyname, bool writable, bool is_volatile);
    // public System.IntPtr GetHandle(Microsoft.Win32.RegistryKey key)
    // Offset: 0x1A55BF0
    System::IntPtr GetHandle(Microsoft::Win32::RegistryKey* key);
    // public System.Void .ctor()
    // Offset: 0x1A545DC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UnixRegistryApi* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Microsoft::Win32::UnixRegistryApi::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UnixRegistryApi*, creationType>()));
    }
  }; // Microsoft.Win32.UnixRegistryApi
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(Microsoft::Win32::UnixRegistryApi*, "Microsoft.Win32", "UnixRegistryApi");
// Writing MetadataGetter for method: Microsoft::Win32::UnixRegistryApi::ToUnix
// Il2CppName: ToUnix
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (*)(::Il2CppString*)>(&Microsoft::Win32::UnixRegistryApi::ToUnix)> {
  const MethodInfo* get() {
    static auto* keyname = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Microsoft::Win32::UnixRegistryApi*), "ToUnix", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{keyname});
  }
};
// Writing MetadataGetter for method: Microsoft::Win32::UnixRegistryApi::IsWellKnownKey
// Il2CppName: IsWellKnownKey
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Il2CppString*, ::Il2CppString*)>(&Microsoft::Win32::UnixRegistryApi::IsWellKnownKey)> {
  const MethodInfo* get() {
    static auto* parentKeyName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* keyname = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Microsoft::Win32::UnixRegistryApi*), "IsWellKnownKey", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{parentKeyName, keyname});
  }
};
// Writing MetadataGetter for method: Microsoft::Win32::UnixRegistryApi::OpenSubKey
// Il2CppName: OpenSubKey
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Microsoft::Win32::RegistryKey* (Microsoft::Win32::UnixRegistryApi::*)(Microsoft::Win32::RegistryKey*, ::Il2CppString*, bool)>(&Microsoft::Win32::UnixRegistryApi::OpenSubKey)> {
  const MethodInfo* get() {
    static auto* rkey = &::il2cpp_utils::GetClassFromName("Microsoft.Win32", "RegistryKey")->byval_arg;
    static auto* keyname = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* writable = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Microsoft::Win32::UnixRegistryApi*), "OpenSubKey", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rkey, keyname, writable});
  }
};
// Writing MetadataGetter for method: Microsoft::Win32::UnixRegistryApi::Flush
// Il2CppName: Flush
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Microsoft::Win32::UnixRegistryApi::*)(Microsoft::Win32::RegistryKey*)>(&Microsoft::Win32::UnixRegistryApi::Flush)> {
  const MethodInfo* get() {
    static auto* rkey = &::il2cpp_utils::GetClassFromName("Microsoft.Win32", "RegistryKey")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Microsoft::Win32::UnixRegistryApi*), "Flush", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rkey});
  }
};
// Writing MetadataGetter for method: Microsoft::Win32::UnixRegistryApi::Close
// Il2CppName: Close
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Microsoft::Win32::UnixRegistryApi::*)(Microsoft::Win32::RegistryKey*)>(&Microsoft::Win32::UnixRegistryApi::Close)> {
  const MethodInfo* get() {
    static auto* rkey = &::il2cpp_utils::GetClassFromName("Microsoft.Win32", "RegistryKey")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Microsoft::Win32::UnixRegistryApi*), "Close", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rkey});
  }
};
// Writing MetadataGetter for method: Microsoft::Win32::UnixRegistryApi::GetValue
// Il2CppName: GetValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (Microsoft::Win32::UnixRegistryApi::*)(Microsoft::Win32::RegistryKey*, ::Il2CppString*, ::Il2CppObject*, Microsoft::Win32::RegistryValueOptions)>(&Microsoft::Win32::UnixRegistryApi::GetValue)> {
  const MethodInfo* get() {
    static auto* rkey = &::il2cpp_utils::GetClassFromName("Microsoft.Win32", "RegistryKey")->byval_arg;
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* default_value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* options = &::il2cpp_utils::GetClassFromName("Microsoft.Win32", "RegistryValueOptions")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Microsoft::Win32::UnixRegistryApi*), "GetValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rkey, name, default_value, options});
  }
};
// Writing MetadataGetter for method: Microsoft::Win32::UnixRegistryApi::GetSubKeyNames
// Il2CppName: GetSubKeyNames
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<::Il2CppString*>* (Microsoft::Win32::UnixRegistryApi::*)(Microsoft::Win32::RegistryKey*)>(&Microsoft::Win32::UnixRegistryApi::GetSubKeyNames)> {
  const MethodInfo* get() {
    static auto* rkey = &::il2cpp_utils::GetClassFromName("Microsoft.Win32", "RegistryKey")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Microsoft::Win32::UnixRegistryApi*), "GetSubKeyNames", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rkey});
  }
};
// Writing MetadataGetter for method: Microsoft::Win32::UnixRegistryApi::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (Microsoft::Win32::UnixRegistryApi::*)(Microsoft::Win32::RegistryKey*)>(&Microsoft::Win32::UnixRegistryApi::ToString)> {
  const MethodInfo* get() {
    static auto* rkey = &::il2cpp_utils::GetClassFromName("Microsoft.Win32", "RegistryKey")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Microsoft::Win32::UnixRegistryApi*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rkey});
  }
};
// Writing MetadataGetter for method: Microsoft::Win32::UnixRegistryApi::CreateSubKey
// Il2CppName: CreateSubKey
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Microsoft::Win32::RegistryKey* (Microsoft::Win32::UnixRegistryApi::*)(Microsoft::Win32::RegistryKey*, ::Il2CppString*, bool)>(&Microsoft::Win32::UnixRegistryApi::CreateSubKey)> {
  const MethodInfo* get() {
    static auto* rkey = &::il2cpp_utils::GetClassFromName("Microsoft.Win32", "RegistryKey")->byval_arg;
    static auto* keyname = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* writable = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Microsoft::Win32::UnixRegistryApi*), "CreateSubKey", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rkey, keyname, writable});
  }
};
// Writing MetadataGetter for method: Microsoft::Win32::UnixRegistryApi::CreateSubKey
// Il2CppName: CreateSubKey
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Microsoft::Win32::RegistryKey* (Microsoft::Win32::UnixRegistryApi::*)(Microsoft::Win32::RegistryKey*, ::Il2CppString*, bool, bool)>(&Microsoft::Win32::UnixRegistryApi::CreateSubKey)> {
  const MethodInfo* get() {
    static auto* rkey = &::il2cpp_utils::GetClassFromName("Microsoft.Win32", "RegistryKey")->byval_arg;
    static auto* keyname = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* writable = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* is_volatile = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Microsoft::Win32::UnixRegistryApi*), "CreateSubKey", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rkey, keyname, writable, is_volatile});
  }
};
// Writing MetadataGetter for method: Microsoft::Win32::UnixRegistryApi::GetHandle
// Il2CppName: GetHandle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IntPtr (Microsoft::Win32::UnixRegistryApi::*)(Microsoft::Win32::RegistryKey*)>(&Microsoft::Win32::UnixRegistryApi::GetHandle)> {
  const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("Microsoft.Win32", "RegistryKey")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Microsoft::Win32::UnixRegistryApi*), "GetHandle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key});
  }
};
// Writing MetadataGetter for method: Microsoft::Win32::UnixRegistryApi::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
