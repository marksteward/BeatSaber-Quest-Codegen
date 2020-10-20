// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Microsoft.Win32.IRegistryApi
#include "Microsoft/Win32/IRegistryApi.hpp"
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
  // Autogenerated type: Microsoft.Win32.Win32RegistryApi
  class Win32RegistryApi : public ::Il2CppObject/*, public Microsoft::Win32::IRegistryApi*/ {
    public:
    // private readonly System.Int32 NativeBytesPerCharacter
    // Offset: 0x10
    int NativeBytesPerCharacter;
    // Creating interface conversion operator: operator Microsoft::Win32::IRegistryApi
    operator Microsoft::Win32::IRegistryApi() noexcept {
      return *reinterpret_cast<Microsoft::Win32::IRegistryApi*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return NativeBytesPerCharacter;
    }
    // static private System.Int32 RegCloseKey(System.IntPtr keyHandle)
    // Offset: 0x15792DC
    static int RegCloseKey(System::IntPtr keyHandle);
    // static private System.Int32 RegFlushKey(System.IntPtr keyHandle)
    // Offset: 0x157935C
    static int RegFlushKey(System::IntPtr keyHandle);
    // static private System.Int32 RegOpenKeyEx(System.IntPtr keyBase, System.String keyName, System.IntPtr reserved, System.Int32 access, out System.IntPtr keyHandle)
    // Offset: 0x15793DC
    static int RegOpenKeyEx(System::IntPtr keyBase, ::Il2CppString* keyName, System::IntPtr reserved, int access, System::IntPtr& keyHandle);
    // static System.Int32 RegEnumKeyEx(System.IntPtr keyHandle, System.Int32 dwIndex, System.Char* lpName, ref System.Int32 lpcbName, System.Int32[] lpReserved, out System.Text.StringBuilder lpClass, System.Int32[] lpcbClass, System.Int64[] lpftLastWriteTime)
    // Offset: 0x1579490
    static int RegEnumKeyEx(System::IntPtr keyHandle, int dwIndex, ::Il2CppChar* lpName, int& lpcbName, ::Array<int>* lpReserved, System::Text::StringBuilder*& lpClass, ::Array<int>* lpcbClass, ::Array<int64_t>* lpftLastWriteTime);
    // static private System.Int32 RegQueryValueEx(System.IntPtr keyBase, System.String valueName, System.IntPtr reserved, ref Microsoft.Win32.RegistryValueKind type, System.IntPtr zero, ref System.Int32 dataSize)
    // Offset: 0x15795AC
    static int RegQueryValueEx(System::IntPtr keyBase, ::Il2CppString* valueName, System::IntPtr reserved, Microsoft::Win32::RegistryValueKind& type, System::IntPtr zero, int& dataSize);
    // static private System.Int32 RegQueryValueEx(System.IntPtr keyBase, System.String valueName, System.IntPtr reserved, ref Microsoft.Win32.RegistryValueKind type, out System.Byte[] data, ref System.Int32 dataSize)
    // Offset: 0x1579674
    static int RegQueryValueEx(System::IntPtr keyBase, ::Il2CppString* valueName, System::IntPtr reserved, Microsoft::Win32::RegistryValueKind& type, ::Array<uint8_t>*& data, int& dataSize);
    // static private System.Int32 RegQueryValueEx(System.IntPtr keyBase, System.String valueName, System.IntPtr reserved, ref Microsoft.Win32.RegistryValueKind type, ref System.Int32 data, ref System.Int32 dataSize)
    // Offset: 0x15797D4
    static int RegQueryValueEx(System::IntPtr keyBase, ::Il2CppString* valueName, System::IntPtr reserved, Microsoft::Win32::RegistryValueKind& type, int& data, int& dataSize);
    // static private System.Int32 RegQueryValueEx(System.IntPtr keyBase, System.String valueName, System.IntPtr reserved, ref Microsoft.Win32.RegistryValueKind type, ref System.Int64 data, ref System.Int32 dataSize)
    // Offset: 0x157989C
    static int RegQueryValueEx(System::IntPtr keyBase, ::Il2CppString* valueName, System::IntPtr reserved, Microsoft::Win32::RegistryValueKind& type, int64_t& data, int& dataSize);
    // static System.Int32 RegQueryInfoKey(System.IntPtr hKey, out System.Text.StringBuilder lpClass, System.Int32[] lpcbClass, System.IntPtr lpReserved_MustBeZero, ref System.Int32 lpcSubKeys, System.Int32[] lpcbMaxSubKeyLen, System.Int32[] lpcbMaxClassLen, ref System.Int32 lpcValues, System.Int32[] lpcbMaxValueNameLen, System.Int32[] lpcbMaxValueLen, System.Int32[] lpcbSecurityDescriptor, System.Int32[] lpftLastWriteTime)
    // Offset: 0x1579964
    static int RegQueryInfoKey(System::IntPtr hKey, System::Text::StringBuilder*& lpClass, ::Array<int>* lpcbClass, System::IntPtr lpReserved_MustBeZero, int& lpcSubKeys, ::Array<int>* lpcbMaxSubKeyLen, ::Array<int>* lpcbMaxClassLen, int& lpcValues, ::Array<int>* lpcbMaxValueNameLen, ::Array<int>* lpcbMaxValueLen, ::Array<int>* lpcbSecurityDescriptor, ::Array<int>* lpftLastWriteTime);
    // static private System.Boolean IsHandleValid(Microsoft.Win32.RegistryKey key)
    // Offset: 0x1579B34
    static bool IsHandleValid(Microsoft::Win32::RegistryKey* key);
    // private System.Int32 GetBinaryValue(Microsoft.Win32.RegistryKey rkey, System.String name, Microsoft.Win32.RegistryValueKind type, out System.Byte[] data, System.Int32 size)
    // Offset: 0x157A004
    int GetBinaryValue(Microsoft::Win32::RegistryKey* rkey, ::Il2CppString* name, Microsoft::Win32::RegistryValueKind type, ::Array<uint8_t>*& data, int size);
    // public System.Int32 SubKeyCount(Microsoft.Win32.RegistryKey rkey)
    // Offset: 0x157A0B4
    int SubKeyCount(Microsoft::Win32::RegistryKey* rkey);
    // private System.Void GenerateException(System.Int32 errorCode)
    // Offset: 0x1579E90
    void GenerateException(int errorCode);
    // static System.String CombineName(Microsoft.Win32.RegistryKey rkey, System.String localName)
    // Offset: 0x157A250
    static ::Il2CppString* CombineName(Microsoft::Win32::RegistryKey* rkey, ::Il2CppString* localName);
    // public System.IntPtr GetHandle(Microsoft.Win32.RegistryKey key)
    // Offset: 0x1579AB8
    // Implemented from: Microsoft.Win32.IRegistryApi
    // Base method: System.IntPtr IRegistryApi::GetHandle(Microsoft.Win32.RegistryKey key)
    System::IntPtr GetHandle(Microsoft::Win32::RegistryKey* key);
    // public System.Object GetValue(Microsoft.Win32.RegistryKey rkey, System.String name, System.Object defaultValue, Microsoft.Win32.RegistryValueOptions options)
    // Offset: 0x1579B54
    // Implemented from: Microsoft.Win32.IRegistryApi
    // Base method: System.Object IRegistryApi::GetValue(Microsoft.Win32.RegistryKey rkey, System.String name, System.Object defaultValue, Microsoft.Win32.RegistryValueOptions options)
    ::Il2CppObject* GetValue(Microsoft::Win32::RegistryKey* rkey, ::Il2CppString* name, ::Il2CppObject* defaultValue, Microsoft::Win32::RegistryValueOptions options);
    // public Microsoft.Win32.RegistryKey OpenSubKey(Microsoft.Win32.RegistryKey rkey, System.String keyName, System.Boolean writable)
    // Offset: 0x157A140
    // Implemented from: Microsoft.Win32.IRegistryApi
    // Base method: Microsoft.Win32.RegistryKey IRegistryApi::OpenSubKey(Microsoft.Win32.RegistryKey rkey, System.String keyName, System.Boolean writable)
    Microsoft::Win32::RegistryKey* OpenSubKey(Microsoft::Win32::RegistryKey* rkey, ::Il2CppString* keyName, bool writable);
    // public System.Void Flush(Microsoft.Win32.RegistryKey rkey)
    // Offset: 0x157A2BC
    // Implemented from: Microsoft.Win32.IRegistryApi
    // Base method: System.Void IRegistryApi::Flush(Microsoft.Win32.RegistryKey rkey)
    void Flush(Microsoft::Win32::RegistryKey* rkey);
    // public System.Void Close(Microsoft.Win32.RegistryKey rkey)
    // Offset: 0x157A2E8
    // Implemented from: Microsoft.Win32.IRegistryApi
    // Base method: System.Void IRegistryApi::Close(Microsoft.Win32.RegistryKey rkey)
    void Close(Microsoft::Win32::RegistryKey* rkey);
    // public System.String[] GetSubKeyNames(Microsoft.Win32.RegistryKey rkey)
    // Offset: 0x157A344
    // Implemented from: Microsoft.Win32.IRegistryApi
    // Base method: System.String[] IRegistryApi::GetSubKeyNames(Microsoft.Win32.RegistryKey rkey)
    ::Array<::Il2CppString*>* GetSubKeyNames(Microsoft::Win32::RegistryKey* rkey);
    // public System.String ToString(Microsoft.Win32.RegistryKey rkey)
    // Offset: 0x157A500
    // Implemented from: Microsoft.Win32.IRegistryApi
    // Base method: System.String IRegistryApi::ToString(Microsoft.Win32.RegistryKey rkey)
    ::Il2CppString* ToString(Microsoft::Win32::RegistryKey* rkey);
    // public System.Void .ctor()
    // Offset: 0x157717C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static Win32RegistryApi* New_ctor();
  }; // Microsoft.Win32.Win32RegistryApi
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Microsoft::Win32::Win32RegistryApi*, "Microsoft.Win32", "Win32RegistryApi");
#pragma pack(pop)
