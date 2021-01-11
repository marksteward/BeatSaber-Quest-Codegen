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
  // [] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: D368C0
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
    // static private System.Void .cctor()
    // Offset: 0x151592C
    static void _cctor();
    // System.Void .ctor(Microsoft.Win32.RegistryHive hiveId)
    // Offset: 0x15158E0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RegistryKey* New_ctor(Microsoft::Win32::RegistryHive hiveId) {
      static auto ___internal__logger = ::Logger::get().WithContext("Microsoft::Win32::RegistryKey::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RegistryKey*, creationType>(hiveId)));
    }
    // System.Void .ctor(Microsoft.Win32.RegistryHive hiveId, System.IntPtr keyHandle, System.Boolean remoteRoot)
    // Offset: 0x1515A6C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RegistryKey* New_ctor(Microsoft::Win32::RegistryHive hiveId, System::IntPtr keyHandle, bool remoteRoot) {
      static auto ___internal__logger = ::Logger::get().WithContext("Microsoft::Win32::RegistryKey::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RegistryKey*, creationType>(hiveId, keyHandle, remoteRoot)));
    }
    // System.Void .ctor(System.Object data, System.String keyName, System.Boolean writable)
    // Offset: 0x15127B0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RegistryKey* New_ctor(::Il2CppObject* data, ::Il2CppString* keyName, bool writable) {
      static auto ___internal__logger = ::Logger::get().WithContext("Microsoft::Win32::RegistryKey::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RegistryKey*, creationType>(data, keyName, writable)));
    }
    // static System.Boolean IsEquals(Microsoft.Win32.RegistryKey a, Microsoft.Win32.RegistryKey b)
    // Offset: 0x1515C74
    static bool IsEquals(Microsoft::Win32::RegistryKey* a, Microsoft::Win32::RegistryKey* b);
    // public System.String get_Name()
    // Offset: 0x1515EAC
    ::Il2CppString* get_Name();
    // public System.Void Flush()
    // Offset: 0x1515EB4
    void Flush();
    // public System.Void Close()
    // Offset: 0x1515D88
    void Close();
    // public Microsoft.Win32.SafeHandles.SafeRegistryHandle get_Handle()
    // Offset: 0x1515F94
    Microsoft::Win32::SafeHandles::SafeRegistryHandle* get_Handle();
    // public Microsoft.Win32.RegistryKey OpenSubKey(System.String name)
    // Offset: 0x1516180
    Microsoft::Win32::RegistryKey* OpenSubKey(::Il2CppString* name);
    // public Microsoft.Win32.RegistryKey OpenSubKey(System.String name, System.Boolean writable)
    // Offset: 0x1516188
    Microsoft::Win32::RegistryKey* OpenSubKey(::Il2CppString* name, bool writable);
    // public System.Object GetValue(System.String name)
    // Offset: 0x151635C
    ::Il2CppObject* GetValue(::Il2CppString* name);
    // public System.Object GetValue(System.String name, System.Object defaultValue)
    // Offset: 0x1516364
    ::Il2CppObject* GetValue(::Il2CppString* name, ::Il2CppObject* defaultValue);
    // public System.String[] GetSubKeyNames()
    // Offset: 0x1516468
    ::Array<::Il2CppString*>* GetSubKeyNames();
    // System.Boolean get_IsRoot()
    // Offset: 0x1513E30
    bool get_IsRoot();
    // Microsoft.Win32.RegistryHive get_Hive()
    // Offset: 0x1513E40
    Microsoft::Win32::RegistryHive get_Hive();
    // System.Object get_InternalHandle()
    // Offset: 0x1516638
    ::Il2CppObject* get_InternalHandle();
    // private System.Void AssertKeyStillValid()
    // Offset: 0x15160D0
    void AssertKeyStillValid();
    // private System.Void AssertKeyNameLength(System.String name)
    // Offset: 0x15162CC
    void AssertKeyNameLength(::Il2CppString* name);
    // static System.String DecodeString(System.Byte[] data)
    // Offset: 0x1516640
    static ::Il2CppString* DecodeString(::Array<uint8_t>* data);
    // static System.IO.IOException CreateMarkedForDeletionException()
    // Offset: 0x15166F0
    static System::IO::IOException* CreateMarkedForDeletionException();
    // static private System.String GetHiveName(Microsoft.Win32.RegistryHive hive)
    // Offset: 0x1515B74
    static ::Il2CppString* GetHiveName(Microsoft::Win32::RegistryHive hive);
    // public System.Void Dispose()
    // Offset: 0x1515D18
    // Implemented from: System.IDisposable
    // Base method: System.Void IDisposable::Dispose()
    void Dispose();
    // Creating proxy method: System_IDisposable_Dispose
    // Maps to method: Dispose
    void System_IDisposable_Dispose();
    // public override System.String ToString()
    // Offset: 0x1516550
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
  }; // Microsoft.Win32.RegistryKey
  static check_size<sizeof(RegistryKey), 57 + sizeof(bool)> __Microsoft_Win32_RegistryKeySizeCheck;
  static_assert(sizeof(RegistryKey) == 0x3A);
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(Microsoft::Win32::RegistryKey*, "Microsoft.Win32", "RegistryKey");
