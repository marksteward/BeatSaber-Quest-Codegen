// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.MarshalByRefObject
#include "System/MarshalByRefObject.hpp"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
// Including type: Microsoft.Win32.RegistryHive
#include "Microsoft/Win32/RegistryHive.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Microsoft::Win32::SafeHandles
namespace Microsoft::Win32::SafeHandles {
  // Forward declaring type: SafeRegistryHandle
  class SafeRegistryHandle;
}
// Forward declaring namespace: Microsoft::Win32
namespace Microsoft::Win32 {
  // Forward declaring type: IRegistryApi
  class IRegistryApi;
}
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: IOException
  class IOException;
}
// Completed forward declares
// Type namespace: Microsoft.Win32
namespace Microsoft::Win32 {
  // Size: 0x3A
  #pragma pack(push, 1)
  // Autogenerated type: Microsoft.Win32.RegistryKey
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: D675A4
  class RegistryKey : public System::MarshalByRefObject/*, public System::IDisposable*/ {
    public:
    // private System.Object handle
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppObject* handle;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // private Microsoft.Win32.SafeHandles.SafeRegistryHandle safe_handle
    // Size: 0x8
    // Offset: 0x20
    Microsoft::Win32::SafeHandles::SafeRegistryHandle* safe_handle;
    // Field size check
    static_assert(sizeof(Microsoft::Win32::SafeHandles::SafeRegistryHandle*) == 0x8);
    // private System.Object hive
    // Size: 0x8
    // Offset: 0x28
    ::Il2CppObject* hive;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // private readonly System.String qname
    // Size: 0x8
    // Offset: 0x30
    ::Il2CppString* qname;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private readonly System.Boolean isRemoteRoot
    // Size: 0x1
    // Offset: 0x38
    bool isRemoteRoot;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private readonly System.Boolean isWritable
    // Size: 0x1
    // Offset: 0x39
    bool isWritable;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: RegistryKey
    RegistryKey(::Il2CppObject* handle_ = {}, Microsoft::Win32::SafeHandles::SafeRegistryHandle* safe_handle_ = {}, ::Il2CppObject* hive_ = {}, ::Il2CppString* qname_ = {}, bool isRemoteRoot_ = {}, bool isWritable_ = {}) noexcept : handle{handle_}, safe_handle{safe_handle_}, hive{hive_}, qname{qname_}, isRemoteRoot{isRemoteRoot_}, isWritable{isWritable_} {}
    // Creating interface conversion operator: operator System::IDisposable
    operator System::IDisposable() noexcept {
      return *reinterpret_cast<System::IDisposable*>(this);
    }
    // Deleting conversion operator: operator ::Il2CppObject*
    constexpr operator ::Il2CppObject*() const noexcept = delete;
    // Get static field: static private readonly Microsoft.Win32.IRegistryApi RegistryApi
    static Microsoft::Win32::IRegistryApi* _get_RegistryApi();
    // Set static field: static private readonly Microsoft.Win32.IRegistryApi RegistryApi
    static void _set_RegistryApi(Microsoft::Win32::IRegistryApi* value);
    // public System.String get_Name()
    // Offset: 0x1A10FAC
    ::Il2CppString* get_Name();
    // public Microsoft.Win32.SafeHandles.SafeRegistryHandle get_Handle()
    // Offset: 0x1A11094
    Microsoft::Win32::SafeHandles::SafeRegistryHandle* get_Handle();
    // System.Boolean get_IsRoot()
    // Offset: 0x1A0F03C
    bool get_IsRoot();
    // Microsoft.Win32.RegistryHive get_Hive()
    // Offset: 0x1A0F04C
    Microsoft::Win32::RegistryHive get_Hive();
    // System.Object get_InternalHandle()
    // Offset: 0x1A11728
    ::Il2CppObject* get_InternalHandle();
    // static private System.Void .cctor()
    // Offset: 0x1A10A74
    static void _cctor();
    // System.Void .ctor(Microsoft.Win32.RegistryHive hiveId)
    // Offset: 0x1A10A28
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RegistryKey* New_ctor(Microsoft::Win32::RegistryHive hiveId) {
      static auto ___internal__logger = ::Logger::get().WithContext("Microsoft::Win32::RegistryKey::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RegistryKey*, creationType>(hiveId)));
    }
    // System.Void .ctor(Microsoft.Win32.RegistryHive hiveId, System.IntPtr keyHandle, System.Boolean remoteRoot)
    // Offset: 0x1A10BB0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RegistryKey* New_ctor(Microsoft::Win32::RegistryHive hiveId, System::IntPtr keyHandle, bool remoteRoot) {
      static auto ___internal__logger = ::Logger::get().WithContext("Microsoft::Win32::RegistryKey::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RegistryKey*, creationType>(hiveId, keyHandle, remoteRoot)));
    }
    // System.Void .ctor(System.Object data, System.String keyName, System.Boolean writable)
    // Offset: 0x1A0DAD0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RegistryKey* New_ctor(::Il2CppObject* data, ::Il2CppString* keyName, bool writable) {
      static auto ___internal__logger = ::Logger::get().WithContext("Microsoft::Win32::RegistryKey::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RegistryKey*, creationType>(data, keyName, writable)));
    }
    // static System.Boolean IsEquals(Microsoft.Win32.RegistryKey a, Microsoft.Win32.RegistryKey b)
    // Offset: 0x1A10D94
    static bool IsEquals(Microsoft::Win32::RegistryKey* a, Microsoft::Win32::RegistryKey* b);
    // public System.Void Dispose()
    // Offset: 0x1A10E38
    void Dispose();
    // public System.Void Flush()
    // Offset: 0x1A10FB4
    void Flush();
    // public System.Void Close()
    // Offset: 0x1A10EA8
    void Close();
    // public Microsoft.Win32.RegistryKey OpenSubKey(System.String name)
    // Offset: 0x1A11270
    Microsoft::Win32::RegistryKey* OpenSubKey(::Il2CppString* name);
    // public Microsoft.Win32.RegistryKey OpenSubKey(System.String name, System.Boolean writable)
    // Offset: 0x1A11278
    Microsoft::Win32::RegistryKey* OpenSubKey(::Il2CppString* name, bool writable);
    // public System.Object GetValue(System.String name)
    // Offset: 0x1A1144C
    ::Il2CppObject* GetValue(::Il2CppString* name);
    // public System.Object GetValue(System.String name, System.Object defaultValue)
    // Offset: 0x1A11454
    ::Il2CppObject* GetValue(::Il2CppString* name, ::Il2CppObject* defaultValue);
    // public System.String[] GetSubKeyNames()
    // Offset: 0x1A11558
    ::Array<::Il2CppString*>* GetSubKeyNames();
    // private System.Void AssertKeyStillValid()
    // Offset: 0x1A111C0
    void AssertKeyStillValid();
    // private System.Void AssertKeyNameLength(System.String name)
    // Offset: 0x1A113BC
    void AssertKeyNameLength(::Il2CppString* name);
    // static System.String DecodeString(System.Byte[] data)
    // Offset: 0x1A11730
    static ::Il2CppString* DecodeString(::Array<uint8_t>* data);
    // static System.IO.IOException CreateMarkedForDeletionException()
    // Offset: 0x1A117E0
    static System::IO::IOException* CreateMarkedForDeletionException();
    // static private System.String GetHiveName(Microsoft.Win32.RegistryHive hive)
    // Offset: 0x1A10C94
    static ::Il2CppString* GetHiveName(Microsoft::Win32::RegistryHive hive);
    // public override System.String ToString()
    // Offset: 0x1A11640
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
  }; // Microsoft.Win32.RegistryKey
  #pragma pack(pop)
  static check_size<sizeof(RegistryKey), 57 + sizeof(bool)> __Microsoft_Win32_RegistryKeySizeCheck;
  static_assert(sizeof(RegistryKey) == 0x3A);
}
DEFINE_IL2CPP_ARG_TYPE(Microsoft::Win32::RegistryKey*, "Microsoft.Win32", "RegistryKey");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Microsoft::Win32::RegistryKey::get_Name
// Il2CppName: get_Name
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (Microsoft::Win32::RegistryKey::*)()>(&Microsoft::Win32::RegistryKey::get_Name)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Microsoft::Win32::RegistryKey*), "get_Name", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Microsoft::Win32::RegistryKey::get_Handle
// Il2CppName: get_Handle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Microsoft::Win32::SafeHandles::SafeRegistryHandle* (Microsoft::Win32::RegistryKey::*)()>(&Microsoft::Win32::RegistryKey::get_Handle)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Microsoft::Win32::RegistryKey*), "get_Handle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Microsoft::Win32::RegistryKey::get_IsRoot
// Il2CppName: get_IsRoot
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Microsoft::Win32::RegistryKey::*)()>(&Microsoft::Win32::RegistryKey::get_IsRoot)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Microsoft::Win32::RegistryKey*), "get_IsRoot", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Microsoft::Win32::RegistryKey::get_Hive
// Il2CppName: get_Hive
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Microsoft::Win32::RegistryHive (Microsoft::Win32::RegistryKey::*)()>(&Microsoft::Win32::RegistryKey::get_Hive)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Microsoft::Win32::RegistryKey*), "get_Hive", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Microsoft::Win32::RegistryKey::get_InternalHandle
// Il2CppName: get_InternalHandle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (Microsoft::Win32::RegistryKey::*)()>(&Microsoft::Win32::RegistryKey::get_InternalHandle)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Microsoft::Win32::RegistryKey*), "get_InternalHandle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Microsoft::Win32::RegistryKey::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Microsoft::Win32::RegistryKey::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Microsoft::Win32::RegistryKey*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Microsoft::Win32::RegistryKey::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Microsoft::Win32::RegistryKey::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Microsoft::Win32::RegistryKey::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Microsoft::Win32::RegistryKey::IsEquals
// Il2CppName: IsEquals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(Microsoft::Win32::RegistryKey*, Microsoft::Win32::RegistryKey*)>(&Microsoft::Win32::RegistryKey::IsEquals)> {
  static const MethodInfo* get() {
    static auto* a = &::il2cpp_utils::GetClassFromName("Microsoft.Win32", "RegistryKey")->byval_arg;
    static auto* b = &::il2cpp_utils::GetClassFromName("Microsoft.Win32", "RegistryKey")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Microsoft::Win32::RegistryKey*), "IsEquals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a, b});
  }
};
// Writing MetadataGetter for method: Microsoft::Win32::RegistryKey::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Microsoft::Win32::RegistryKey::*)()>(&Microsoft::Win32::RegistryKey::Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Microsoft::Win32::RegistryKey*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Microsoft::Win32::RegistryKey::Flush
// Il2CppName: Flush
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Microsoft::Win32::RegistryKey::*)()>(&Microsoft::Win32::RegistryKey::Flush)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Microsoft::Win32::RegistryKey*), "Flush", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Microsoft::Win32::RegistryKey::Close
// Il2CppName: Close
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Microsoft::Win32::RegistryKey::*)()>(&Microsoft::Win32::RegistryKey::Close)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Microsoft::Win32::RegistryKey*), "Close", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Microsoft::Win32::RegistryKey::OpenSubKey
// Il2CppName: OpenSubKey
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Microsoft::Win32::RegistryKey* (Microsoft::Win32::RegistryKey::*)(::Il2CppString*)>(&Microsoft::Win32::RegistryKey::OpenSubKey)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Microsoft::Win32::RegistryKey*), "OpenSubKey", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name});
  }
};
// Writing MetadataGetter for method: Microsoft::Win32::RegistryKey::OpenSubKey
// Il2CppName: OpenSubKey
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Microsoft::Win32::RegistryKey* (Microsoft::Win32::RegistryKey::*)(::Il2CppString*, bool)>(&Microsoft::Win32::RegistryKey::OpenSubKey)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* writable = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Microsoft::Win32::RegistryKey*), "OpenSubKey", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name, writable});
  }
};
// Writing MetadataGetter for method: Microsoft::Win32::RegistryKey::GetValue
// Il2CppName: GetValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (Microsoft::Win32::RegistryKey::*)(::Il2CppString*)>(&Microsoft::Win32::RegistryKey::GetValue)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Microsoft::Win32::RegistryKey*), "GetValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name});
  }
};
// Writing MetadataGetter for method: Microsoft::Win32::RegistryKey::GetValue
// Il2CppName: GetValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (Microsoft::Win32::RegistryKey::*)(::Il2CppString*, ::Il2CppObject*)>(&Microsoft::Win32::RegistryKey::GetValue)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* defaultValue = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Microsoft::Win32::RegistryKey*), "GetValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name, defaultValue});
  }
};
// Writing MetadataGetter for method: Microsoft::Win32::RegistryKey::GetSubKeyNames
// Il2CppName: GetSubKeyNames
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<::Il2CppString*>* (Microsoft::Win32::RegistryKey::*)()>(&Microsoft::Win32::RegistryKey::GetSubKeyNames)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Microsoft::Win32::RegistryKey*), "GetSubKeyNames", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Microsoft::Win32::RegistryKey::AssertKeyStillValid
// Il2CppName: AssertKeyStillValid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Microsoft::Win32::RegistryKey::*)()>(&Microsoft::Win32::RegistryKey::AssertKeyStillValid)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Microsoft::Win32::RegistryKey*), "AssertKeyStillValid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Microsoft::Win32::RegistryKey::AssertKeyNameLength
// Il2CppName: AssertKeyNameLength
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Microsoft::Win32::RegistryKey::*)(::Il2CppString*)>(&Microsoft::Win32::RegistryKey::AssertKeyNameLength)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Microsoft::Win32::RegistryKey*), "AssertKeyNameLength", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name});
  }
};
// Writing MetadataGetter for method: Microsoft::Win32::RegistryKey::DecodeString
// Il2CppName: DecodeString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (*)(::Array<uint8_t>*)>(&Microsoft::Win32::RegistryKey::DecodeString)> {
  static const MethodInfo* get() {
    static auto* data = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Microsoft::Win32::RegistryKey*), "DecodeString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{data});
  }
};
// Writing MetadataGetter for method: Microsoft::Win32::RegistryKey::CreateMarkedForDeletionException
// Il2CppName: CreateMarkedForDeletionException
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IO::IOException* (*)()>(&Microsoft::Win32::RegistryKey::CreateMarkedForDeletionException)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Microsoft::Win32::RegistryKey*), "CreateMarkedForDeletionException", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Microsoft::Win32::RegistryKey::GetHiveName
// Il2CppName: GetHiveName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (*)(Microsoft::Win32::RegistryHive)>(&Microsoft::Win32::RegistryKey::GetHiveName)> {
  static const MethodInfo* get() {
    static auto* hive = &::il2cpp_utils::GetClassFromName("Microsoft.Win32", "RegistryHive")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Microsoft::Win32::RegistryKey*), "GetHiveName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hive});
  }
};
// Writing MetadataGetter for method: Microsoft::Win32::RegistryKey::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (Microsoft::Win32::RegistryKey::*)()>(&Microsoft::Win32::RegistryKey::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Microsoft::Win32::RegistryKey*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
