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
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IntPtr
  struct IntPtr;
}
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: StringBuilder
  class StringBuilder;
}
// Forward declaring namespace: Microsoft::Win32
namespace Microsoft::Win32 {
  // Forward declaring type: RegistryValueKind
  struct RegistryValueKind;
  // Forward declaring type: RegistryKey
  class RegistryKey;
  // Forward declaring type: RegistryValueOptions
  struct RegistryValueOptions;
}
// Completed forward declares
// Type namespace: Microsoft.Win32
namespace Microsoft::Win32 {
  // Size: 0x14
  #pragma pack(push, 1)
  // Autogenerated type: Microsoft.Win32.Win32RegistryApi
  // [TokenAttribute] Offset: FFFFFFFF
  class Win32RegistryApi : public ::Il2CppObject/*, public Microsoft::Win32::IRegistryApi*/ {
    public:
    // private readonly System.Int32 NativeBytesPerCharacter
    // Size: 0x4
    // Offset: 0x10
    int NativeBytesPerCharacter;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: Win32RegistryApi
    Win32RegistryApi(int NativeBytesPerCharacter_ = {}) noexcept : NativeBytesPerCharacter{NativeBytesPerCharacter_} {}
    // Creating interface conversion operator: operator Microsoft::Win32::IRegistryApi
    operator Microsoft::Win32::IRegistryApi() noexcept {
      return *reinterpret_cast<Microsoft::Win32::IRegistryApi*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return NativeBytesPerCharacter;
    }
    // static private System.Int32 RegCloseKey(System.IntPtr keyHandle)
    // Offset: 0x1A122AC
    static int RegCloseKey(System::IntPtr keyHandle);
    // static private System.Int32 RegFlushKey(System.IntPtr keyHandle)
    // Offset: 0x1A1232C
    static int RegFlushKey(System::IntPtr keyHandle);
    // static private System.Int32 RegOpenKeyEx(System.IntPtr keyBase, System.String keyName, System.IntPtr reserved, System.Int32 access, out System.IntPtr keyHandle)
    // Offset: 0x1A123AC
    static int RegOpenKeyEx(System::IntPtr keyBase, ::Il2CppString* keyName, System::IntPtr reserved, int access, System::IntPtr& keyHandle);
    // static System.Int32 RegEnumKeyEx(System.IntPtr keyHandle, System.Int32 dwIndex, System.Char* lpName, ref System.Int32 lpcbName, System.Int32[] lpReserved, out System.Text.StringBuilder lpClass, System.Int32[] lpcbClass, System.Int64[] lpftLastWriteTime)
    // Offset: 0x1A12460
    static int RegEnumKeyEx(System::IntPtr keyHandle, int dwIndex, ::Il2CppChar* lpName, int& lpcbName, ::Array<int>* lpReserved, System::Text::StringBuilder*& lpClass, ::Array<int>* lpcbClass, ::Array<int64_t>* lpftLastWriteTime);
    // static private System.Int32 RegQueryValueEx(System.IntPtr keyBase, System.String valueName, System.IntPtr reserved, ref Microsoft.Win32.RegistryValueKind type, System.IntPtr zero, ref System.Int32 dataSize)
    // Offset: 0x1A1257C
    static int RegQueryValueEx(System::IntPtr keyBase, ::Il2CppString* valueName, System::IntPtr reserved, Microsoft::Win32::RegistryValueKind& type, System::IntPtr zero, int& dataSize);
    // static private System.Int32 RegQueryValueEx(System.IntPtr keyBase, System.String valueName, System.IntPtr reserved, ref Microsoft.Win32.RegistryValueKind type, out System.Byte[] data, ref System.Int32 dataSize)
    // Offset: 0x1A12644
    static int RegQueryValueEx(System::IntPtr keyBase, ::Il2CppString* valueName, System::IntPtr reserved, Microsoft::Win32::RegistryValueKind& type, ::Array<uint8_t>*& data, int& dataSize);
    // static private System.Int32 RegQueryValueEx(System.IntPtr keyBase, System.String valueName, System.IntPtr reserved, ref Microsoft.Win32.RegistryValueKind type, ref System.Int32 data, ref System.Int32 dataSize)
    // Offset: 0x1A127A4
    static int RegQueryValueEx(System::IntPtr keyBase, ::Il2CppString* valueName, System::IntPtr reserved, Microsoft::Win32::RegistryValueKind& type, int& data, int& dataSize);
    // static private System.Int32 RegQueryValueEx(System.IntPtr keyBase, System.String valueName, System.IntPtr reserved, ref Microsoft.Win32.RegistryValueKind type, ref System.Int64 data, ref System.Int32 dataSize)
    // Offset: 0x1A1286C
    static int RegQueryValueEx(System::IntPtr keyBase, ::Il2CppString* valueName, System::IntPtr reserved, Microsoft::Win32::RegistryValueKind& type, int64_t& data, int& dataSize);
    // static System.Int32 RegQueryInfoKey(System.IntPtr hKey, out System.Text.StringBuilder lpClass, System.Int32[] lpcbClass, System.IntPtr lpReserved_MustBeZero, ref System.Int32 lpcSubKeys, System.Int32[] lpcbMaxSubKeyLen, System.Int32[] lpcbMaxClassLen, ref System.Int32 lpcValues, System.Int32[] lpcbMaxValueNameLen, System.Int32[] lpcbMaxValueLen, System.Int32[] lpcbSecurityDescriptor, System.Int32[] lpftLastWriteTime)
    // Offset: 0x1A12934
    static int RegQueryInfoKey(System::IntPtr hKey, System::Text::StringBuilder*& lpClass, ::Array<int>* lpcbClass, System::IntPtr lpReserved_MustBeZero, int& lpcSubKeys, ::Array<int>* lpcbMaxSubKeyLen, ::Array<int>* lpcbMaxClassLen, int& lpcValues, ::Array<int>* lpcbMaxValueNameLen, ::Array<int>* lpcbMaxValueLen, ::Array<int>* lpcbSecurityDescriptor, ::Array<int>* lpftLastWriteTime);
    // public System.IntPtr GetHandle(Microsoft.Win32.RegistryKey key)
    // Offset: 0x1A12A88
    System::IntPtr GetHandle(Microsoft::Win32::RegistryKey* key);
    // static private System.Boolean IsHandleValid(Microsoft.Win32.RegistryKey key)
    // Offset: 0x1A12B04
    static bool IsHandleValid(Microsoft::Win32::RegistryKey* key);
    // public System.Object GetValue(Microsoft.Win32.RegistryKey rkey, System.String name, System.Object defaultValue, Microsoft.Win32.RegistryValueOptions options)
    // Offset: 0x1A12B24
    ::Il2CppObject* GetValue(Microsoft::Win32::RegistryKey* rkey, ::Il2CppString* name, ::Il2CppObject* defaultValue, Microsoft::Win32::RegistryValueOptions options);
    // private System.Int32 GetBinaryValue(Microsoft.Win32.RegistryKey rkey, System.String name, Microsoft.Win32.RegistryValueKind type, out System.Byte[] data, System.Int32 size)
    // Offset: 0x1A12FD4
    int GetBinaryValue(Microsoft::Win32::RegistryKey* rkey, ::Il2CppString* name, Microsoft::Win32::RegistryValueKind type, ::Array<uint8_t>*& data, int size);
    // public System.Int32 SubKeyCount(Microsoft.Win32.RegistryKey rkey)
    // Offset: 0x1A13070
    int SubKeyCount(Microsoft::Win32::RegistryKey* rkey);
    // public Microsoft.Win32.RegistryKey OpenSubKey(Microsoft.Win32.RegistryKey rkey, System.String keyName, System.Boolean writable)
    // Offset: 0x1A130FC
    Microsoft::Win32::RegistryKey* OpenSubKey(Microsoft::Win32::RegistryKey* rkey, ::Il2CppString* keyName, bool writable);
    // public System.Void Flush(Microsoft.Win32.RegistryKey rkey)
    // Offset: 0x1A13280
    void Flush(Microsoft::Win32::RegistryKey* rkey);
    // public System.Void Close(Microsoft.Win32.RegistryKey rkey)
    // Offset: 0x1A132AC
    void Close(Microsoft::Win32::RegistryKey* rkey);
    // public System.String[] GetSubKeyNames(Microsoft.Win32.RegistryKey rkey)
    // Offset: 0x1A13308
    ::Array<::Il2CppString*>* GetSubKeyNames(Microsoft::Win32::RegistryKey* rkey);
    // private System.Void GenerateException(System.Int32 errorCode)
    // Offset: 0x1A12E60
    void GenerateException(int errorCode);
    // public System.String ToString(Microsoft.Win32.RegistryKey rkey)
    // Offset: 0x1A134BC
    ::Il2CppString* ToString(Microsoft::Win32::RegistryKey* rkey);
    // static System.String CombineName(Microsoft.Win32.RegistryKey rkey, System.String localName)
    // Offset: 0x1A13214
    static ::Il2CppString* CombineName(Microsoft::Win32::RegistryKey* rkey, ::Il2CppString* localName);
    // public System.Void .ctor()
    // Offset: 0x1A10B30
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Win32RegistryApi* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Microsoft::Win32::Win32RegistryApi::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Win32RegistryApi*, creationType>()));
    }
  }; // Microsoft.Win32.Win32RegistryApi
  #pragma pack(pop)
  static check_size<sizeof(Win32RegistryApi), 16 + sizeof(int)> __Microsoft_Win32_Win32RegistryApiSizeCheck;
  static_assert(sizeof(Win32RegistryApi) == 0x14);
}
DEFINE_IL2CPP_ARG_TYPE(Microsoft::Win32::Win32RegistryApi*, "Microsoft.Win32", "Win32RegistryApi");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Microsoft::Win32::Win32RegistryApi::RegCloseKey
// Il2CppName: RegCloseKey
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(System::IntPtr)>(&Microsoft::Win32::Win32RegistryApi::RegCloseKey)> {
  static const MethodInfo* get() {
    static auto* keyHandle = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Microsoft::Win32::Win32RegistryApi*), "RegCloseKey", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{keyHandle});
  }
};
// Writing MetadataGetter for method: Microsoft::Win32::Win32RegistryApi::RegFlushKey
// Il2CppName: RegFlushKey
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(System::IntPtr)>(&Microsoft::Win32::Win32RegistryApi::RegFlushKey)> {
  static const MethodInfo* get() {
    static auto* keyHandle = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Microsoft::Win32::Win32RegistryApi*), "RegFlushKey", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{keyHandle});
  }
};
// Writing MetadataGetter for method: Microsoft::Win32::Win32RegistryApi::RegOpenKeyEx
// Il2CppName: RegOpenKeyEx
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(System::IntPtr, ::Il2CppString*, System::IntPtr, int, System::IntPtr&)>(&Microsoft::Win32::Win32RegistryApi::RegOpenKeyEx)> {
  static const MethodInfo* get() {
    static auto* keyBase = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* keyName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* reserved = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* access = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* keyHandle = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Microsoft::Win32::Win32RegistryApi*), "RegOpenKeyEx", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{keyBase, keyName, reserved, access, keyHandle});
  }
};
// Writing MetadataGetter for method: Microsoft::Win32::Win32RegistryApi::RegEnumKeyEx
// Il2CppName: RegEnumKeyEx
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(System::IntPtr, int, ::Il2CppChar*, int&, ::Array<int>*, System::Text::StringBuilder*&, ::Array<int>*, ::Array<int64_t>*)>(&Microsoft::Win32::Win32RegistryApi::RegEnumKeyEx)> {
  static const MethodInfo* get() {
    static auto* keyHandle = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* dwIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* lpName = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Char"))->byval_arg;
    static auto* lpcbName = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* lpReserved = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Int32"), 1)->byval_arg;
    static auto* lpClass = &::il2cpp_utils::GetClassFromName("System.Text", "StringBuilder")->this_arg;
    static auto* lpcbClass = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Int32"), 1)->byval_arg;
    static auto* lpftLastWriteTime = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Int64"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Microsoft::Win32::Win32RegistryApi*), "RegEnumKeyEx", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{keyHandle, dwIndex, lpName, lpcbName, lpReserved, lpClass, lpcbClass, lpftLastWriteTime});
  }
};
// Writing MetadataGetter for method: Microsoft::Win32::Win32RegistryApi::RegQueryValueEx
// Il2CppName: RegQueryValueEx
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(System::IntPtr, ::Il2CppString*, System::IntPtr, Microsoft::Win32::RegistryValueKind&, System::IntPtr, int&)>(&Microsoft::Win32::Win32RegistryApi::RegQueryValueEx)> {
  static const MethodInfo* get() {
    static auto* keyBase = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* valueName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* reserved = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* type = &::il2cpp_utils::GetClassFromName("Microsoft.Win32", "RegistryValueKind")->this_arg;
    static auto* zero = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* dataSize = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Microsoft::Win32::Win32RegistryApi*), "RegQueryValueEx", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{keyBase, valueName, reserved, type, zero, dataSize});
  }
};
// Writing MetadataGetter for method: Microsoft::Win32::Win32RegistryApi::RegQueryValueEx
// Il2CppName: RegQueryValueEx
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(System::IntPtr, ::Il2CppString*, System::IntPtr, Microsoft::Win32::RegistryValueKind&, ::Array<uint8_t>*&, int&)>(&Microsoft::Win32::Win32RegistryApi::RegQueryValueEx)> {
  static const MethodInfo* get() {
    static auto* keyBase = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* valueName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* reserved = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* type = &::il2cpp_utils::GetClassFromName("Microsoft.Win32", "RegistryValueKind")->this_arg;
    static auto* data = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->this_arg;
    static auto* dataSize = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Microsoft::Win32::Win32RegistryApi*), "RegQueryValueEx", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{keyBase, valueName, reserved, type, data, dataSize});
  }
};
// Writing MetadataGetter for method: Microsoft::Win32::Win32RegistryApi::RegQueryValueEx
// Il2CppName: RegQueryValueEx
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(System::IntPtr, ::Il2CppString*, System::IntPtr, Microsoft::Win32::RegistryValueKind&, int&, int&)>(&Microsoft::Win32::Win32RegistryApi::RegQueryValueEx)> {
  static const MethodInfo* get() {
    static auto* keyBase = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* valueName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* reserved = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* type = &::il2cpp_utils::GetClassFromName("Microsoft.Win32", "RegistryValueKind")->this_arg;
    static auto* data = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* dataSize = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Microsoft::Win32::Win32RegistryApi*), "RegQueryValueEx", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{keyBase, valueName, reserved, type, data, dataSize});
  }
};
// Writing MetadataGetter for method: Microsoft::Win32::Win32RegistryApi::RegQueryValueEx
// Il2CppName: RegQueryValueEx
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(System::IntPtr, ::Il2CppString*, System::IntPtr, Microsoft::Win32::RegistryValueKind&, int64_t&, int&)>(&Microsoft::Win32::Win32RegistryApi::RegQueryValueEx)> {
  static const MethodInfo* get() {
    static auto* keyBase = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* valueName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* reserved = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* type = &::il2cpp_utils::GetClassFromName("Microsoft.Win32", "RegistryValueKind")->this_arg;
    static auto* data = &::il2cpp_utils::GetClassFromName("System", "Int64")->this_arg;
    static auto* dataSize = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Microsoft::Win32::Win32RegistryApi*), "RegQueryValueEx", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{keyBase, valueName, reserved, type, data, dataSize});
  }
};
// Writing MetadataGetter for method: Microsoft::Win32::Win32RegistryApi::RegQueryInfoKey
// Il2CppName: RegQueryInfoKey
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(System::IntPtr, System::Text::StringBuilder*&, ::Array<int>*, System::IntPtr, int&, ::Array<int>*, ::Array<int>*, int&, ::Array<int>*, ::Array<int>*, ::Array<int>*, ::Array<int>*)>(&Microsoft::Win32::Win32RegistryApi::RegQueryInfoKey)> {
  static const MethodInfo* get() {
    static auto* hKey = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* lpClass = &::il2cpp_utils::GetClassFromName("System.Text", "StringBuilder")->this_arg;
    static auto* lpcbClass = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Int32"), 1)->byval_arg;
    static auto* lpReserved_MustBeZero = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* lpcSubKeys = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* lpcbMaxSubKeyLen = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Int32"), 1)->byval_arg;
    static auto* lpcbMaxClassLen = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Int32"), 1)->byval_arg;
    static auto* lpcValues = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* lpcbMaxValueNameLen = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Int32"), 1)->byval_arg;
    static auto* lpcbMaxValueLen = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Int32"), 1)->byval_arg;
    static auto* lpcbSecurityDescriptor = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Int32"), 1)->byval_arg;
    static auto* lpftLastWriteTime = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Int32"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Microsoft::Win32::Win32RegistryApi*), "RegQueryInfoKey", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hKey, lpClass, lpcbClass, lpReserved_MustBeZero, lpcSubKeys, lpcbMaxSubKeyLen, lpcbMaxClassLen, lpcValues, lpcbMaxValueNameLen, lpcbMaxValueLen, lpcbSecurityDescriptor, lpftLastWriteTime});
  }
};
// Writing MetadataGetter for method: Microsoft::Win32::Win32RegistryApi::GetHandle
// Il2CppName: GetHandle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IntPtr (Microsoft::Win32::Win32RegistryApi::*)(Microsoft::Win32::RegistryKey*)>(&Microsoft::Win32::Win32RegistryApi::GetHandle)> {
  static const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("Microsoft.Win32", "RegistryKey")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Microsoft::Win32::Win32RegistryApi*), "GetHandle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key});
  }
};
// Writing MetadataGetter for method: Microsoft::Win32::Win32RegistryApi::IsHandleValid
// Il2CppName: IsHandleValid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(Microsoft::Win32::RegistryKey*)>(&Microsoft::Win32::Win32RegistryApi::IsHandleValid)> {
  static const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("Microsoft.Win32", "RegistryKey")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Microsoft::Win32::Win32RegistryApi*), "IsHandleValid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key});
  }
};
// Writing MetadataGetter for method: Microsoft::Win32::Win32RegistryApi::GetValue
// Il2CppName: GetValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (Microsoft::Win32::Win32RegistryApi::*)(Microsoft::Win32::RegistryKey*, ::Il2CppString*, ::Il2CppObject*, Microsoft::Win32::RegistryValueOptions)>(&Microsoft::Win32::Win32RegistryApi::GetValue)> {
  static const MethodInfo* get() {
    static auto* rkey = &::il2cpp_utils::GetClassFromName("Microsoft.Win32", "RegistryKey")->byval_arg;
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* defaultValue = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* options = &::il2cpp_utils::GetClassFromName("Microsoft.Win32", "RegistryValueOptions")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Microsoft::Win32::Win32RegistryApi*), "GetValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rkey, name, defaultValue, options});
  }
};
// Writing MetadataGetter for method: Microsoft::Win32::Win32RegistryApi::GetBinaryValue
// Il2CppName: GetBinaryValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Microsoft::Win32::Win32RegistryApi::*)(Microsoft::Win32::RegistryKey*, ::Il2CppString*, Microsoft::Win32::RegistryValueKind, ::Array<uint8_t>*&, int)>(&Microsoft::Win32::Win32RegistryApi::GetBinaryValue)> {
  static const MethodInfo* get() {
    static auto* rkey = &::il2cpp_utils::GetClassFromName("Microsoft.Win32", "RegistryKey")->byval_arg;
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* type = &::il2cpp_utils::GetClassFromName("Microsoft.Win32", "RegistryValueKind")->byval_arg;
    static auto* data = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->this_arg;
    static auto* size = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Microsoft::Win32::Win32RegistryApi*), "GetBinaryValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rkey, name, type, data, size});
  }
};
// Writing MetadataGetter for method: Microsoft::Win32::Win32RegistryApi::SubKeyCount
// Il2CppName: SubKeyCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Microsoft::Win32::Win32RegistryApi::*)(Microsoft::Win32::RegistryKey*)>(&Microsoft::Win32::Win32RegistryApi::SubKeyCount)> {
  static const MethodInfo* get() {
    static auto* rkey = &::il2cpp_utils::GetClassFromName("Microsoft.Win32", "RegistryKey")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Microsoft::Win32::Win32RegistryApi*), "SubKeyCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rkey});
  }
};
// Writing MetadataGetter for method: Microsoft::Win32::Win32RegistryApi::OpenSubKey
// Il2CppName: OpenSubKey
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Microsoft::Win32::RegistryKey* (Microsoft::Win32::Win32RegistryApi::*)(Microsoft::Win32::RegistryKey*, ::Il2CppString*, bool)>(&Microsoft::Win32::Win32RegistryApi::OpenSubKey)> {
  static const MethodInfo* get() {
    static auto* rkey = &::il2cpp_utils::GetClassFromName("Microsoft.Win32", "RegistryKey")->byval_arg;
    static auto* keyName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* writable = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Microsoft::Win32::Win32RegistryApi*), "OpenSubKey", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rkey, keyName, writable});
  }
};
// Writing MetadataGetter for method: Microsoft::Win32::Win32RegistryApi::Flush
// Il2CppName: Flush
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Microsoft::Win32::Win32RegistryApi::*)(Microsoft::Win32::RegistryKey*)>(&Microsoft::Win32::Win32RegistryApi::Flush)> {
  static const MethodInfo* get() {
    static auto* rkey = &::il2cpp_utils::GetClassFromName("Microsoft.Win32", "RegistryKey")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Microsoft::Win32::Win32RegistryApi*), "Flush", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rkey});
  }
};
// Writing MetadataGetter for method: Microsoft::Win32::Win32RegistryApi::Close
// Il2CppName: Close
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Microsoft::Win32::Win32RegistryApi::*)(Microsoft::Win32::RegistryKey*)>(&Microsoft::Win32::Win32RegistryApi::Close)> {
  static const MethodInfo* get() {
    static auto* rkey = &::il2cpp_utils::GetClassFromName("Microsoft.Win32", "RegistryKey")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Microsoft::Win32::Win32RegistryApi*), "Close", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rkey});
  }
};
// Writing MetadataGetter for method: Microsoft::Win32::Win32RegistryApi::GetSubKeyNames
// Il2CppName: GetSubKeyNames
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<::Il2CppString*>* (Microsoft::Win32::Win32RegistryApi::*)(Microsoft::Win32::RegistryKey*)>(&Microsoft::Win32::Win32RegistryApi::GetSubKeyNames)> {
  static const MethodInfo* get() {
    static auto* rkey = &::il2cpp_utils::GetClassFromName("Microsoft.Win32", "RegistryKey")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Microsoft::Win32::Win32RegistryApi*), "GetSubKeyNames", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rkey});
  }
};
// Writing MetadataGetter for method: Microsoft::Win32::Win32RegistryApi::GenerateException
// Il2CppName: GenerateException
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Microsoft::Win32::Win32RegistryApi::*)(int)>(&Microsoft::Win32::Win32RegistryApi::GenerateException)> {
  static const MethodInfo* get() {
    static auto* errorCode = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Microsoft::Win32::Win32RegistryApi*), "GenerateException", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{errorCode});
  }
};
// Writing MetadataGetter for method: Microsoft::Win32::Win32RegistryApi::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (Microsoft::Win32::Win32RegistryApi::*)(Microsoft::Win32::RegistryKey*)>(&Microsoft::Win32::Win32RegistryApi::ToString)> {
  static const MethodInfo* get() {
    static auto* rkey = &::il2cpp_utils::GetClassFromName("Microsoft.Win32", "RegistryKey")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Microsoft::Win32::Win32RegistryApi*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rkey});
  }
};
// Writing MetadataGetter for method: Microsoft::Win32::Win32RegistryApi::CombineName
// Il2CppName: CombineName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (*)(Microsoft::Win32::RegistryKey*, ::Il2CppString*)>(&Microsoft::Win32::Win32RegistryApi::CombineName)> {
  static const MethodInfo* get() {
    static auto* rkey = &::il2cpp_utils::GetClassFromName("Microsoft.Win32", "RegistryKey")->byval_arg;
    static auto* localName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Microsoft::Win32::Win32RegistryApi*), "CombineName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rkey, localName});
  }
};
// Writing MetadataGetter for method: Microsoft::Win32::Win32RegistryApi::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
