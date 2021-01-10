// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
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
  // Autogenerated type: Microsoft.Win32.UnixRegistryApi
  // [] Offset: FFFFFFFF
  class UnixRegistryApi : public ::Il2CppObject/*, public Microsoft::Win32::IRegistryApi*/ {
    public:
    // Creating value type constructor for type: UnixRegistryApi
    UnixRegistryApi() noexcept {}
    // Creating interface conversion operator: operator Microsoft::Win32::IRegistryApi
    operator Microsoft::Win32::IRegistryApi() noexcept {
      return *reinterpret_cast<Microsoft::Win32::IRegistryApi*>(this);
    }
    // static private System.String ToUnix(System.String keyname)
    // Offset: 0x1516AF4
    static ::Il2CppString* ToUnix(::Il2CppString* keyname);
    // static private System.Boolean IsWellKnownKey(System.String parentKeyName, System.String keyname)
    // Offset: 0x1516B50
    static bool IsWellKnownKey(::Il2CppString* parentKeyName, ::Il2CppString* keyname);
    // private Microsoft.Win32.RegistryKey CreateSubKey(Microsoft.Win32.RegistryKey rkey, System.String keyname, System.Boolean writable)
    // Offset: 0x1516D5C
    Microsoft::Win32::RegistryKey* CreateSubKey(Microsoft::Win32::RegistryKey* rkey, ::Il2CppString* keyname, bool writable);
    // private Microsoft.Win32.RegistryKey CreateSubKey(Microsoft.Win32.RegistryKey rkey, System.String keyname, System.Boolean writable, System.Boolean is_volatile)
    // Offset: 0x1516F94
    Microsoft::Win32::RegistryKey* CreateSubKey(Microsoft::Win32::RegistryKey* rkey, ::Il2CppString* keyname, bool writable, bool is_volatile);
    // public Microsoft.Win32.RegistryKey OpenSubKey(Microsoft.Win32.RegistryKey rkey, System.String keyname, System.Boolean writable)
    // Offset: 0x1516C7C
    // Implemented from: Microsoft.Win32.IRegistryApi
    // Base method: Microsoft.Win32.RegistryKey IRegistryApi::OpenSubKey(Microsoft.Win32.RegistryKey rkey, System.String keyname, System.Boolean writable)
    Microsoft::Win32::RegistryKey* OpenSubKey(Microsoft::Win32::RegistryKey* rkey, ::Il2CppString* keyname, bool writable);
    // public System.Void Flush(Microsoft.Win32.RegistryKey rkey)
    // Offset: 0x1516D68
    // Implemented from: Microsoft.Win32.IRegistryApi
    // Base method: System.Void IRegistryApi::Flush(Microsoft.Win32.RegistryKey rkey)
    void Flush(Microsoft::Win32::RegistryKey* rkey);
    // public System.Void Close(Microsoft.Win32.RegistryKey rkey)
    // Offset: 0x1516DE4
    // Implemented from: Microsoft.Win32.IRegistryApi
    // Base method: System.Void IRegistryApi::Close(Microsoft.Win32.RegistryKey rkey)
    void Close(Microsoft::Win32::RegistryKey* rkey);
    // public System.Object GetValue(Microsoft.Win32.RegistryKey rkey, System.String name, System.Object default_value, Microsoft.Win32.RegistryValueOptions options)
    // Offset: 0x1516E48
    // Implemented from: Microsoft.Win32.IRegistryApi
    // Base method: System.Object IRegistryApi::GetValue(Microsoft.Win32.RegistryKey rkey, System.String name, System.Object default_value, Microsoft.Win32.RegistryValueOptions options)
    ::Il2CppObject* GetValue(Microsoft::Win32::RegistryKey* rkey, ::Il2CppString* name, ::Il2CppObject* default_value, Microsoft::Win32::RegistryValueOptions options);
    // public System.String[] GetSubKeyNames(Microsoft.Win32.RegistryKey rkey)
    // Offset: 0x1516F08
    // Implemented from: Microsoft.Win32.IRegistryApi
    // Base method: System.String[] IRegistryApi::GetSubKeyNames(Microsoft.Win32.RegistryKey rkey)
    ::Array<::Il2CppString*>* GetSubKeyNames(Microsoft::Win32::RegistryKey* rkey);
    // public System.String ToString(Microsoft.Win32.RegistryKey rkey)
    // Offset: 0x1516F7C
    // Implemented from: Microsoft.Win32.IRegistryApi
    // Base method: System.String IRegistryApi::ToString(Microsoft.Win32.RegistryKey rkey)
    ::Il2CppString* ToString(Microsoft::Win32::RegistryKey* rkey);
    // public System.IntPtr GetHandle(Microsoft.Win32.RegistryKey key)
    // Offset: 0x15170CC
    // Implemented from: Microsoft.Win32.IRegistryApi
    // Base method: System.IntPtr IRegistryApi::GetHandle(Microsoft.Win32.RegistryKey key)
    System::IntPtr GetHandle(Microsoft::Win32::RegistryKey* key);
    // public System.Void .ctor()
    // Offset: 0x1515A64
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UnixRegistryApi* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Microsoft::Win32::UnixRegistryApi::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UnixRegistryApi*, creationType>()));
    }
  }; // Microsoft.Win32.UnixRegistryApi
}
DEFINE_IL2CPP_ARG_TYPE(Microsoft::Win32::UnixRegistryApi*, "Microsoft.Win32", "UnixRegistryApi");
#pragma pack(pop)
