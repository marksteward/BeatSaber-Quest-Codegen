// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: System.Runtime.Serialization.Formatters.Binary
namespace System::Runtime::Serialization::Formatters::Binary {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Serialization.Formatters.Binary.BinaryHeaderEnum
  // [TokenAttribute] Offset: FFFFFFFF
  struct BinaryHeaderEnum/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: BinaryHeaderEnum
    constexpr BinaryHeaderEnum(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.Runtime.Serialization.Formatters.Binary.BinaryHeaderEnum SerializedStreamHeader
    static constexpr const int SerializedStreamHeader = 0;
    // Get static field: static public System.Runtime.Serialization.Formatters.Binary.BinaryHeaderEnum SerializedStreamHeader
    static System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum _get_SerializedStreamHeader();
    // Set static field: static public System.Runtime.Serialization.Formatters.Binary.BinaryHeaderEnum SerializedStreamHeader
    static void _set_SerializedStreamHeader(System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum value);
    // static field const value: static public System.Runtime.Serialization.Formatters.Binary.BinaryHeaderEnum Object
    static constexpr const int Object = 1;
    // Get static field: static public System.Runtime.Serialization.Formatters.Binary.BinaryHeaderEnum Object
    static System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum _get_Object();
    // Set static field: static public System.Runtime.Serialization.Formatters.Binary.BinaryHeaderEnum Object
    static void _set_Object(System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum value);
    // static field const value: static public System.Runtime.Serialization.Formatters.Binary.BinaryHeaderEnum ObjectWithMap
    static constexpr const int ObjectWithMap = 2;
    // Get static field: static public System.Runtime.Serialization.Formatters.Binary.BinaryHeaderEnum ObjectWithMap
    static System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum _get_ObjectWithMap();
    // Set static field: static public System.Runtime.Serialization.Formatters.Binary.BinaryHeaderEnum ObjectWithMap
    static void _set_ObjectWithMap(System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum value);
    // static field const value: static public System.Runtime.Serialization.Formatters.Binary.BinaryHeaderEnum ObjectWithMapAssemId
    static constexpr const int ObjectWithMapAssemId = 3;
    // Get static field: static public System.Runtime.Serialization.Formatters.Binary.BinaryHeaderEnum ObjectWithMapAssemId
    static System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum _get_ObjectWithMapAssemId();
    // Set static field: static public System.Runtime.Serialization.Formatters.Binary.BinaryHeaderEnum ObjectWithMapAssemId
    static void _set_ObjectWithMapAssemId(System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum value);
    // static field const value: static public System.Runtime.Serialization.Formatters.Binary.BinaryHeaderEnum ObjectWithMapTyped
    static constexpr const int ObjectWithMapTyped = 4;
    // Get static field: static public System.Runtime.Serialization.Formatters.Binary.BinaryHeaderEnum ObjectWithMapTyped
    static System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum _get_ObjectWithMapTyped();
    // Set static field: static public System.Runtime.Serialization.Formatters.Binary.BinaryHeaderEnum ObjectWithMapTyped
    static void _set_ObjectWithMapTyped(System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum value);
    // static field const value: static public System.Runtime.Serialization.Formatters.Binary.BinaryHeaderEnum ObjectWithMapTypedAssemId
    static constexpr const int ObjectWithMapTypedAssemId = 5;
    // Get static field: static public System.Runtime.Serialization.Formatters.Binary.BinaryHeaderEnum ObjectWithMapTypedAssemId
    static System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum _get_ObjectWithMapTypedAssemId();
    // Set static field: static public System.Runtime.Serialization.Formatters.Binary.BinaryHeaderEnum ObjectWithMapTypedAssemId
    static void _set_ObjectWithMapTypedAssemId(System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum value);
    // static field const value: static public System.Runtime.Serialization.Formatters.Binary.BinaryHeaderEnum ObjectString
    static constexpr const int ObjectString = 6;
    // Get static field: static public System.Runtime.Serialization.Formatters.Binary.BinaryHeaderEnum ObjectString
    static System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum _get_ObjectString();
    // Set static field: static public System.Runtime.Serialization.Formatters.Binary.BinaryHeaderEnum ObjectString
    static void _set_ObjectString(System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum value);
    // static field const value: static public System.Runtime.Serialization.Formatters.Binary.BinaryHeaderEnum Array
    static constexpr const int Array = 7;
    // Get static field: static public System.Runtime.Serialization.Formatters.Binary.BinaryHeaderEnum Array
    static System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum _get_Array();
    // Set static field: static public System.Runtime.Serialization.Formatters.Binary.BinaryHeaderEnum Array
    static void _set_Array(System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum value);
    // static field const value: static public System.Runtime.Serialization.Formatters.Binary.BinaryHeaderEnum MemberPrimitiveTyped
    static constexpr const int MemberPrimitiveTyped = 8;
    // Get static field: static public System.Runtime.Serialization.Formatters.Binary.BinaryHeaderEnum MemberPrimitiveTyped
    static System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum _get_MemberPrimitiveTyped();
    // Set static field: static public System.Runtime.Serialization.Formatters.Binary.BinaryHeaderEnum MemberPrimitiveTyped
    static void _set_MemberPrimitiveTyped(System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum value);
    // static field const value: static public System.Runtime.Serialization.Formatters.Binary.BinaryHeaderEnum MemberReference
    static constexpr const int MemberReference = 9;
    // Get static field: static public System.Runtime.Serialization.Formatters.Binary.BinaryHeaderEnum MemberReference
    static System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum _get_MemberReference();
    // Set static field: static public System.Runtime.Serialization.Formatters.Binary.BinaryHeaderEnum MemberReference
    static void _set_MemberReference(System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum value);
    // static field const value: static public System.Runtime.Serialization.Formatters.Binary.BinaryHeaderEnum ObjectNull
    static constexpr const int ObjectNull = 10;
    // Get static field: static public System.Runtime.Serialization.Formatters.Binary.BinaryHeaderEnum ObjectNull
    static System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum _get_ObjectNull();
    // Set static field: static public System.Runtime.Serialization.Formatters.Binary.BinaryHeaderEnum ObjectNull
    static void _set_ObjectNull(System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum value);
    // static field const value: static public System.Runtime.Serialization.Formatters.Binary.BinaryHeaderEnum MessageEnd
    static constexpr const int MessageEnd = 11;
    // Get static field: static public System.Runtime.Serialization.Formatters.Binary.BinaryHeaderEnum MessageEnd
    static System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum _get_MessageEnd();
    // Set static field: static public System.Runtime.Serialization.Formatters.Binary.BinaryHeaderEnum MessageEnd
    static void _set_MessageEnd(System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum value);
    // static field const value: static public System.Runtime.Serialization.Formatters.Binary.BinaryHeaderEnum Assembly
    static constexpr const int Assembly = 12;
    // Get static field: static public System.Runtime.Serialization.Formatters.Binary.BinaryHeaderEnum Assembly
    static System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum _get_Assembly();
    // Set static field: static public System.Runtime.Serialization.Formatters.Binary.BinaryHeaderEnum Assembly
    static void _set_Assembly(System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum value);
    // static field const value: static public System.Runtime.Serialization.Formatters.Binary.BinaryHeaderEnum ObjectNullMultiple256
    static constexpr const int ObjectNullMultiple256 = 13;
    // Get static field: static public System.Runtime.Serialization.Formatters.Binary.BinaryHeaderEnum ObjectNullMultiple256
    static System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum _get_ObjectNullMultiple256();
    // Set static field: static public System.Runtime.Serialization.Formatters.Binary.BinaryHeaderEnum ObjectNullMultiple256
    static void _set_ObjectNullMultiple256(System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum value);
    // static field const value: static public System.Runtime.Serialization.Formatters.Binary.BinaryHeaderEnum ObjectNullMultiple
    static constexpr const int ObjectNullMultiple = 14;
    // Get static field: static public System.Runtime.Serialization.Formatters.Binary.BinaryHeaderEnum ObjectNullMultiple
    static System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum _get_ObjectNullMultiple();
    // Set static field: static public System.Runtime.Serialization.Formatters.Binary.BinaryHeaderEnum ObjectNullMultiple
    static void _set_ObjectNullMultiple(System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum value);
    // static field const value: static public System.Runtime.Serialization.Formatters.Binary.BinaryHeaderEnum ArraySinglePrimitive
    static constexpr const int ArraySinglePrimitive = 15;
    // Get static field: static public System.Runtime.Serialization.Formatters.Binary.BinaryHeaderEnum ArraySinglePrimitive
    static System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum _get_ArraySinglePrimitive();
    // Set static field: static public System.Runtime.Serialization.Formatters.Binary.BinaryHeaderEnum ArraySinglePrimitive
    static void _set_ArraySinglePrimitive(System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum value);
    // static field const value: static public System.Runtime.Serialization.Formatters.Binary.BinaryHeaderEnum ArraySingleObject
    static constexpr const int ArraySingleObject = 16;
    // Get static field: static public System.Runtime.Serialization.Formatters.Binary.BinaryHeaderEnum ArraySingleObject
    static System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum _get_ArraySingleObject();
    // Set static field: static public System.Runtime.Serialization.Formatters.Binary.BinaryHeaderEnum ArraySingleObject
    static void _set_ArraySingleObject(System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum value);
    // static field const value: static public System.Runtime.Serialization.Formatters.Binary.BinaryHeaderEnum ArraySingleString
    static constexpr const int ArraySingleString = 17;
    // Get static field: static public System.Runtime.Serialization.Formatters.Binary.BinaryHeaderEnum ArraySingleString
    static System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum _get_ArraySingleString();
    // Set static field: static public System.Runtime.Serialization.Formatters.Binary.BinaryHeaderEnum ArraySingleString
    static void _set_ArraySingleString(System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum value);
    // static field const value: static public System.Runtime.Serialization.Formatters.Binary.BinaryHeaderEnum CrossAppDomainMap
    static constexpr const int CrossAppDomainMap = 18;
    // Get static field: static public System.Runtime.Serialization.Formatters.Binary.BinaryHeaderEnum CrossAppDomainMap
    static System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum _get_CrossAppDomainMap();
    // Set static field: static public System.Runtime.Serialization.Formatters.Binary.BinaryHeaderEnum CrossAppDomainMap
    static void _set_CrossAppDomainMap(System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum value);
    // static field const value: static public System.Runtime.Serialization.Formatters.Binary.BinaryHeaderEnum CrossAppDomainString
    static constexpr const int CrossAppDomainString = 19;
    // Get static field: static public System.Runtime.Serialization.Formatters.Binary.BinaryHeaderEnum CrossAppDomainString
    static System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum _get_CrossAppDomainString();
    // Set static field: static public System.Runtime.Serialization.Formatters.Binary.BinaryHeaderEnum CrossAppDomainString
    static void _set_CrossAppDomainString(System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum value);
    // static field const value: static public System.Runtime.Serialization.Formatters.Binary.BinaryHeaderEnum CrossAppDomainAssembly
    static constexpr const int CrossAppDomainAssembly = 20;
    // Get static field: static public System.Runtime.Serialization.Formatters.Binary.BinaryHeaderEnum CrossAppDomainAssembly
    static System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum _get_CrossAppDomainAssembly();
    // Set static field: static public System.Runtime.Serialization.Formatters.Binary.BinaryHeaderEnum CrossAppDomainAssembly
    static void _set_CrossAppDomainAssembly(System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum value);
    // static field const value: static public System.Runtime.Serialization.Formatters.Binary.BinaryHeaderEnum MethodCall
    static constexpr const int MethodCall = 21;
    // Get static field: static public System.Runtime.Serialization.Formatters.Binary.BinaryHeaderEnum MethodCall
    static System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum _get_MethodCall();
    // Set static field: static public System.Runtime.Serialization.Formatters.Binary.BinaryHeaderEnum MethodCall
    static void _set_MethodCall(System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum value);
    // static field const value: static public System.Runtime.Serialization.Formatters.Binary.BinaryHeaderEnum MethodReturn
    static constexpr const int MethodReturn = 22;
    // Get static field: static public System.Runtime.Serialization.Formatters.Binary.BinaryHeaderEnum MethodReturn
    static System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum _get_MethodReturn();
    // Set static field: static public System.Runtime.Serialization.Formatters.Binary.BinaryHeaderEnum MethodReturn
    static void _set_MethodReturn(System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum value);
    // Get instance field: public System.Int32 value__
    int _get_value__();
    // Set instance field: public System.Int32 value__
    void _set_value__(int value);
  }; // System.Runtime.Serialization.Formatters.Binary.BinaryHeaderEnum
  #pragma pack(pop)
  static check_size<sizeof(BinaryHeaderEnum), 0 + sizeof(int)> __System_Runtime_Serialization_Formatters_Binary_BinaryHeaderEnumSizeCheck;
  static_assert(sizeof(BinaryHeaderEnum) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum, "System.Runtime.Serialization.Formatters.Binary", "BinaryHeaderEnum");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
