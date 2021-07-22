// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: System.Reflection
namespace System::Reflection {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.Reflection.BindingFlags
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: D69250
  // [FlagsAttribute] Offset: FFFFFFFF
  struct BindingFlags/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: BindingFlags
    constexpr BindingFlags(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.Reflection.BindingFlags Default
    static constexpr const int Default = 0;
    // Get static field: static public System.Reflection.BindingFlags Default
    static System::Reflection::BindingFlags _get_Default();
    // Set static field: static public System.Reflection.BindingFlags Default
    static void _set_Default(System::Reflection::BindingFlags value);
    // static field const value: static public System.Reflection.BindingFlags IgnoreCase
    static constexpr const int IgnoreCase = 1;
    // Get static field: static public System.Reflection.BindingFlags IgnoreCase
    static System::Reflection::BindingFlags _get_IgnoreCase();
    // Set static field: static public System.Reflection.BindingFlags IgnoreCase
    static void _set_IgnoreCase(System::Reflection::BindingFlags value);
    // static field const value: static public System.Reflection.BindingFlags DeclaredOnly
    static constexpr const int DeclaredOnly = 2;
    // Get static field: static public System.Reflection.BindingFlags DeclaredOnly
    static System::Reflection::BindingFlags _get_DeclaredOnly();
    // Set static field: static public System.Reflection.BindingFlags DeclaredOnly
    static void _set_DeclaredOnly(System::Reflection::BindingFlags value);
    // static field const value: static public System.Reflection.BindingFlags Instance
    static constexpr const int Instance = 4;
    // Get static field: static public System.Reflection.BindingFlags Instance
    static System::Reflection::BindingFlags _get_Instance();
    // Set static field: static public System.Reflection.BindingFlags Instance
    static void _set_Instance(System::Reflection::BindingFlags value);
    // static field const value: static public System.Reflection.BindingFlags Static
    static constexpr const int Static = 8;
    // Get static field: static public System.Reflection.BindingFlags Static
    static System::Reflection::BindingFlags _get_Static();
    // Set static field: static public System.Reflection.BindingFlags Static
    static void _set_Static(System::Reflection::BindingFlags value);
    // static field const value: static public System.Reflection.BindingFlags Public
    static constexpr const int Public = 16;
    // Get static field: static public System.Reflection.BindingFlags Public
    static System::Reflection::BindingFlags _get_Public();
    // Set static field: static public System.Reflection.BindingFlags Public
    static void _set_Public(System::Reflection::BindingFlags value);
    // static field const value: static public System.Reflection.BindingFlags NonPublic
    static constexpr const int NonPublic = 32;
    // Get static field: static public System.Reflection.BindingFlags NonPublic
    static System::Reflection::BindingFlags _get_NonPublic();
    // Set static field: static public System.Reflection.BindingFlags NonPublic
    static void _set_NonPublic(System::Reflection::BindingFlags value);
    // static field const value: static public System.Reflection.BindingFlags FlattenHierarchy
    static constexpr const int FlattenHierarchy = 64;
    // Get static field: static public System.Reflection.BindingFlags FlattenHierarchy
    static System::Reflection::BindingFlags _get_FlattenHierarchy();
    // Set static field: static public System.Reflection.BindingFlags FlattenHierarchy
    static void _set_FlattenHierarchy(System::Reflection::BindingFlags value);
    // static field const value: static public System.Reflection.BindingFlags InvokeMethod
    static constexpr const int InvokeMethod = 256;
    // Get static field: static public System.Reflection.BindingFlags InvokeMethod
    static System::Reflection::BindingFlags _get_InvokeMethod();
    // Set static field: static public System.Reflection.BindingFlags InvokeMethod
    static void _set_InvokeMethod(System::Reflection::BindingFlags value);
    // static field const value: static public System.Reflection.BindingFlags CreateInstance
    static constexpr const int CreateInstance = 512;
    // Get static field: static public System.Reflection.BindingFlags CreateInstance
    static System::Reflection::BindingFlags _get_CreateInstance();
    // Set static field: static public System.Reflection.BindingFlags CreateInstance
    static void _set_CreateInstance(System::Reflection::BindingFlags value);
    // static field const value: static public System.Reflection.BindingFlags GetField
    static constexpr const int GetField = 1024;
    // Get static field: static public System.Reflection.BindingFlags GetField
    static System::Reflection::BindingFlags _get_GetField();
    // Set static field: static public System.Reflection.BindingFlags GetField
    static void _set_GetField(System::Reflection::BindingFlags value);
    // static field const value: static public System.Reflection.BindingFlags SetField
    static constexpr const int SetField = 2048;
    // Get static field: static public System.Reflection.BindingFlags SetField
    static System::Reflection::BindingFlags _get_SetField();
    // Set static field: static public System.Reflection.BindingFlags SetField
    static void _set_SetField(System::Reflection::BindingFlags value);
    // static field const value: static public System.Reflection.BindingFlags GetProperty
    static constexpr const int GetProperty = 4096;
    // Get static field: static public System.Reflection.BindingFlags GetProperty
    static System::Reflection::BindingFlags _get_GetProperty();
    // Set static field: static public System.Reflection.BindingFlags GetProperty
    static void _set_GetProperty(System::Reflection::BindingFlags value);
    // static field const value: static public System.Reflection.BindingFlags SetProperty
    static constexpr const int SetProperty = 8192;
    // Get static field: static public System.Reflection.BindingFlags SetProperty
    static System::Reflection::BindingFlags _get_SetProperty();
    // Set static field: static public System.Reflection.BindingFlags SetProperty
    static void _set_SetProperty(System::Reflection::BindingFlags value);
    // static field const value: static public System.Reflection.BindingFlags PutDispProperty
    static constexpr const int PutDispProperty = 16384;
    // Get static field: static public System.Reflection.BindingFlags PutDispProperty
    static System::Reflection::BindingFlags _get_PutDispProperty();
    // Set static field: static public System.Reflection.BindingFlags PutDispProperty
    static void _set_PutDispProperty(System::Reflection::BindingFlags value);
    // static field const value: static public System.Reflection.BindingFlags PutRefDispProperty
    static constexpr const int PutRefDispProperty = 32768;
    // Get static field: static public System.Reflection.BindingFlags PutRefDispProperty
    static System::Reflection::BindingFlags _get_PutRefDispProperty();
    // Set static field: static public System.Reflection.BindingFlags PutRefDispProperty
    static void _set_PutRefDispProperty(System::Reflection::BindingFlags value);
    // static field const value: static public System.Reflection.BindingFlags ExactBinding
    static constexpr const int ExactBinding = 65536;
    // Get static field: static public System.Reflection.BindingFlags ExactBinding
    static System::Reflection::BindingFlags _get_ExactBinding();
    // Set static field: static public System.Reflection.BindingFlags ExactBinding
    static void _set_ExactBinding(System::Reflection::BindingFlags value);
    // static field const value: static public System.Reflection.BindingFlags SuppressChangeType
    static constexpr const int SuppressChangeType = 131072;
    // Get static field: static public System.Reflection.BindingFlags SuppressChangeType
    static System::Reflection::BindingFlags _get_SuppressChangeType();
    // Set static field: static public System.Reflection.BindingFlags SuppressChangeType
    static void _set_SuppressChangeType(System::Reflection::BindingFlags value);
    // static field const value: static public System.Reflection.BindingFlags OptionalParamBinding
    static constexpr const int OptionalParamBinding = 262144;
    // Get static field: static public System.Reflection.BindingFlags OptionalParamBinding
    static System::Reflection::BindingFlags _get_OptionalParamBinding();
    // Set static field: static public System.Reflection.BindingFlags OptionalParamBinding
    static void _set_OptionalParamBinding(System::Reflection::BindingFlags value);
    // static field const value: static public System.Reflection.BindingFlags IgnoreReturn
    static constexpr const int IgnoreReturn = 16777216;
    // Get static field: static public System.Reflection.BindingFlags IgnoreReturn
    static System::Reflection::BindingFlags _get_IgnoreReturn();
    // Set static field: static public System.Reflection.BindingFlags IgnoreReturn
    static void _set_IgnoreReturn(System::Reflection::BindingFlags value);
  }; // System.Reflection.BindingFlags
  #pragma pack(pop)
  static check_size<sizeof(BindingFlags), 0 + sizeof(int)> __System_Reflection_BindingFlagsSizeCheck;
  static_assert(sizeof(BindingFlags) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Reflection::BindingFlags, "System.Reflection", "BindingFlags");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
