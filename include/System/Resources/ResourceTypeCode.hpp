// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: System.Resources
namespace System::Resources {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.Resources.ResourceTypeCode
  // [TokenAttribute] Offset: FFFFFFFF
  struct ResourceTypeCode/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: ResourceTypeCode
    constexpr ResourceTypeCode(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.Resources.ResourceTypeCode Null
    static constexpr const int Null = 0;
    // Get static field: static public System.Resources.ResourceTypeCode Null
    static System::Resources::ResourceTypeCode _get_Null();
    // Set static field: static public System.Resources.ResourceTypeCode Null
    static void _set_Null(System::Resources::ResourceTypeCode value);
    // static field const value: static public System.Resources.ResourceTypeCode String
    static constexpr const int String = 1;
    // Get static field: static public System.Resources.ResourceTypeCode String
    static System::Resources::ResourceTypeCode _get_String();
    // Set static field: static public System.Resources.ResourceTypeCode String
    static void _set_String(System::Resources::ResourceTypeCode value);
    // static field const value: static public System.Resources.ResourceTypeCode Boolean
    static constexpr const int Boolean = 2;
    // Get static field: static public System.Resources.ResourceTypeCode Boolean
    static System::Resources::ResourceTypeCode _get_Boolean();
    // Set static field: static public System.Resources.ResourceTypeCode Boolean
    static void _set_Boolean(System::Resources::ResourceTypeCode value);
    // static field const value: static public System.Resources.ResourceTypeCode Char
    static constexpr const int Char = 3;
    // Get static field: static public System.Resources.ResourceTypeCode Char
    static System::Resources::ResourceTypeCode _get_Char();
    // Set static field: static public System.Resources.ResourceTypeCode Char
    static void _set_Char(System::Resources::ResourceTypeCode value);
    // static field const value: static public System.Resources.ResourceTypeCode Byte
    static constexpr const int Byte = 4;
    // Get static field: static public System.Resources.ResourceTypeCode Byte
    static System::Resources::ResourceTypeCode _get_Byte();
    // Set static field: static public System.Resources.ResourceTypeCode Byte
    static void _set_Byte(System::Resources::ResourceTypeCode value);
    // static field const value: static public System.Resources.ResourceTypeCode SByte
    static constexpr const int SByte = 5;
    // Get static field: static public System.Resources.ResourceTypeCode SByte
    static System::Resources::ResourceTypeCode _get_SByte();
    // Set static field: static public System.Resources.ResourceTypeCode SByte
    static void _set_SByte(System::Resources::ResourceTypeCode value);
    // static field const value: static public System.Resources.ResourceTypeCode Int16
    static constexpr const int Int16 = 6;
    // Get static field: static public System.Resources.ResourceTypeCode Int16
    static System::Resources::ResourceTypeCode _get_Int16();
    // Set static field: static public System.Resources.ResourceTypeCode Int16
    static void _set_Int16(System::Resources::ResourceTypeCode value);
    // static field const value: static public System.Resources.ResourceTypeCode UInt16
    static constexpr const int UInt16 = 7;
    // Get static field: static public System.Resources.ResourceTypeCode UInt16
    static System::Resources::ResourceTypeCode _get_UInt16();
    // Set static field: static public System.Resources.ResourceTypeCode UInt16
    static void _set_UInt16(System::Resources::ResourceTypeCode value);
    // static field const value: static public System.Resources.ResourceTypeCode Int32
    static constexpr const int Int32 = 8;
    // Get static field: static public System.Resources.ResourceTypeCode Int32
    static System::Resources::ResourceTypeCode _get_Int32();
    // Set static field: static public System.Resources.ResourceTypeCode Int32
    static void _set_Int32(System::Resources::ResourceTypeCode value);
    // static field const value: static public System.Resources.ResourceTypeCode UInt32
    static constexpr const int UInt32 = 9;
    // Get static field: static public System.Resources.ResourceTypeCode UInt32
    static System::Resources::ResourceTypeCode _get_UInt32();
    // Set static field: static public System.Resources.ResourceTypeCode UInt32
    static void _set_UInt32(System::Resources::ResourceTypeCode value);
    // static field const value: static public System.Resources.ResourceTypeCode Int64
    static constexpr const int Int64 = 10;
    // Get static field: static public System.Resources.ResourceTypeCode Int64
    static System::Resources::ResourceTypeCode _get_Int64();
    // Set static field: static public System.Resources.ResourceTypeCode Int64
    static void _set_Int64(System::Resources::ResourceTypeCode value);
    // static field const value: static public System.Resources.ResourceTypeCode UInt64
    static constexpr const int UInt64 = 11;
    // Get static field: static public System.Resources.ResourceTypeCode UInt64
    static System::Resources::ResourceTypeCode _get_UInt64();
    // Set static field: static public System.Resources.ResourceTypeCode UInt64
    static void _set_UInt64(System::Resources::ResourceTypeCode value);
    // static field const value: static public System.Resources.ResourceTypeCode Single
    static constexpr const int Single = 12;
    // Get static field: static public System.Resources.ResourceTypeCode Single
    static System::Resources::ResourceTypeCode _get_Single();
    // Set static field: static public System.Resources.ResourceTypeCode Single
    static void _set_Single(System::Resources::ResourceTypeCode value);
    // static field const value: static public System.Resources.ResourceTypeCode Double
    static constexpr const int Double = 13;
    // Get static field: static public System.Resources.ResourceTypeCode Double
    static System::Resources::ResourceTypeCode _get_Double();
    // Set static field: static public System.Resources.ResourceTypeCode Double
    static void _set_Double(System::Resources::ResourceTypeCode value);
    // static field const value: static public System.Resources.ResourceTypeCode Decimal
    static constexpr const int Decimal = 14;
    // Get static field: static public System.Resources.ResourceTypeCode Decimal
    static System::Resources::ResourceTypeCode _get_Decimal();
    // Set static field: static public System.Resources.ResourceTypeCode Decimal
    static void _set_Decimal(System::Resources::ResourceTypeCode value);
    // static field const value: static public System.Resources.ResourceTypeCode DateTime
    static constexpr const int DateTime = 15;
    // Get static field: static public System.Resources.ResourceTypeCode DateTime
    static System::Resources::ResourceTypeCode _get_DateTime();
    // Set static field: static public System.Resources.ResourceTypeCode DateTime
    static void _set_DateTime(System::Resources::ResourceTypeCode value);
    // static field const value: static public System.Resources.ResourceTypeCode TimeSpan
    static constexpr const int TimeSpan = 16;
    // Get static field: static public System.Resources.ResourceTypeCode TimeSpan
    static System::Resources::ResourceTypeCode _get_TimeSpan();
    // Set static field: static public System.Resources.ResourceTypeCode TimeSpan
    static void _set_TimeSpan(System::Resources::ResourceTypeCode value);
    // static field const value: static public System.Resources.ResourceTypeCode LastPrimitive
    static constexpr const int LastPrimitive = 16;
    // Get static field: static public System.Resources.ResourceTypeCode LastPrimitive
    static System::Resources::ResourceTypeCode _get_LastPrimitive();
    // Set static field: static public System.Resources.ResourceTypeCode LastPrimitive
    static void _set_LastPrimitive(System::Resources::ResourceTypeCode value);
    // static field const value: static public System.Resources.ResourceTypeCode ByteArray
    static constexpr const int ByteArray = 32;
    // Get static field: static public System.Resources.ResourceTypeCode ByteArray
    static System::Resources::ResourceTypeCode _get_ByteArray();
    // Set static field: static public System.Resources.ResourceTypeCode ByteArray
    static void _set_ByteArray(System::Resources::ResourceTypeCode value);
    // static field const value: static public System.Resources.ResourceTypeCode Stream
    static constexpr const int Stream = 33;
    // Get static field: static public System.Resources.ResourceTypeCode Stream
    static System::Resources::ResourceTypeCode _get_Stream();
    // Set static field: static public System.Resources.ResourceTypeCode Stream
    static void _set_Stream(System::Resources::ResourceTypeCode value);
    // static field const value: static public System.Resources.ResourceTypeCode StartOfUserTypes
    static constexpr const int StartOfUserTypes = 64;
    // Get static field: static public System.Resources.ResourceTypeCode StartOfUserTypes
    static System::Resources::ResourceTypeCode _get_StartOfUserTypes();
    // Set static field: static public System.Resources.ResourceTypeCode StartOfUserTypes
    static void _set_StartOfUserTypes(System::Resources::ResourceTypeCode value);
  }; // System.Resources.ResourceTypeCode
  #pragma pack(pop)
  static check_size<sizeof(ResourceTypeCode), 0 + sizeof(int)> __System_Resources_ResourceTypeCodeSizeCheck;
  static_assert(sizeof(ResourceTypeCode) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Resources::ResourceTypeCode, "System.Resources", "ResourceTypeCode");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
