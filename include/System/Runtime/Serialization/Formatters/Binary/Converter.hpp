// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.TypeCode
#include "System/TypeCode.hpp"
// Including type: System.Runtime.Serialization.Formatters.Binary.InternalPrimitiveTypeE
#include "System/Runtime/Serialization/Formatters/Binary/InternalPrimitiveTypeE.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
  // Forward declaring type: Array
  class Array;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: Assembly
  class Assembly;
}
// Completed forward declares
// Type namespace: System.Runtime.Serialization.Formatters.Binary
namespace System::Runtime::Serialization::Formatters::Binary {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Serialization.Formatters.Binary.Converter
  class Converter : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: Converter
    Converter() noexcept {}
    // Get static field: static private System.Int32 primitiveTypeEnumLength
    static int _get_primitiveTypeEnumLength();
    // Set static field: static private System.Int32 primitiveTypeEnumLength
    static void _set_primitiveTypeEnumLength(int value);
    // Get static field: static private System.Type[] typeA
    static ::Array<System::Type*>* _get_typeA();
    // Set static field: static private System.Type[] typeA
    static void _set_typeA(::Array<System::Type*>* value);
    // Get static field: static private System.Type[] arrayTypeA
    static ::Array<System::Type*>* _get_arrayTypeA();
    // Set static field: static private System.Type[] arrayTypeA
    static void _set_arrayTypeA(::Array<System::Type*>* value);
    // Get static field: static private System.String[] valueA
    static ::Array<::Il2CppString*>* _get_valueA();
    // Set static field: static private System.String[] valueA
    static void _set_valueA(::Array<::Il2CppString*>* value);
    // Get static field: static private System.TypeCode[] typeCodeA
    static ::Array<System::TypeCode>* _get_typeCodeA();
    // Set static field: static private System.TypeCode[] typeCodeA
    static void _set_typeCodeA(::Array<System::TypeCode>* value);
    // Get static field: static private System.Runtime.Serialization.Formatters.Binary.InternalPrimitiveTypeE[] codeA
    static ::Array<System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE>* _get_codeA();
    // Set static field: static private System.Runtime.Serialization.Formatters.Binary.InternalPrimitiveTypeE[] codeA
    static void _set_codeA(::Array<System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE>* value);
    // Get static field: static System.Type typeofISerializable
    static System::Type* _get_typeofISerializable();
    // Set static field: static System.Type typeofISerializable
    static void _set_typeofISerializable(System::Type* value);
    // Get static field: static System.Type typeofString
    static System::Type* _get_typeofString();
    // Set static field: static System.Type typeofString
    static void _set_typeofString(System::Type* value);
    // Get static field: static System.Type typeofConverter
    static System::Type* _get_typeofConverter();
    // Set static field: static System.Type typeofConverter
    static void _set_typeofConverter(System::Type* value);
    // Get static field: static System.Type typeofBoolean
    static System::Type* _get_typeofBoolean();
    // Set static field: static System.Type typeofBoolean
    static void _set_typeofBoolean(System::Type* value);
    // Get static field: static System.Type typeofByte
    static System::Type* _get_typeofByte();
    // Set static field: static System.Type typeofByte
    static void _set_typeofByte(System::Type* value);
    // Get static field: static System.Type typeofChar
    static System::Type* _get_typeofChar();
    // Set static field: static System.Type typeofChar
    static void _set_typeofChar(System::Type* value);
    // Get static field: static System.Type typeofDecimal
    static System::Type* _get_typeofDecimal();
    // Set static field: static System.Type typeofDecimal
    static void _set_typeofDecimal(System::Type* value);
    // Get static field: static System.Type typeofDouble
    static System::Type* _get_typeofDouble();
    // Set static field: static System.Type typeofDouble
    static void _set_typeofDouble(System::Type* value);
    // Get static field: static System.Type typeofInt16
    static System::Type* _get_typeofInt16();
    // Set static field: static System.Type typeofInt16
    static void _set_typeofInt16(System::Type* value);
    // Get static field: static System.Type typeofInt32
    static System::Type* _get_typeofInt32();
    // Set static field: static System.Type typeofInt32
    static void _set_typeofInt32(System::Type* value);
    // Get static field: static System.Type typeofInt64
    static System::Type* _get_typeofInt64();
    // Set static field: static System.Type typeofInt64
    static void _set_typeofInt64(System::Type* value);
    // Get static field: static System.Type typeofSByte
    static System::Type* _get_typeofSByte();
    // Set static field: static System.Type typeofSByte
    static void _set_typeofSByte(System::Type* value);
    // Get static field: static System.Type typeofSingle
    static System::Type* _get_typeofSingle();
    // Set static field: static System.Type typeofSingle
    static void _set_typeofSingle(System::Type* value);
    // Get static field: static System.Type typeofTimeSpan
    static System::Type* _get_typeofTimeSpan();
    // Set static field: static System.Type typeofTimeSpan
    static void _set_typeofTimeSpan(System::Type* value);
    // Get static field: static System.Type typeofDateTime
    static System::Type* _get_typeofDateTime();
    // Set static field: static System.Type typeofDateTime
    static void _set_typeofDateTime(System::Type* value);
    // Get static field: static System.Type typeofUInt16
    static System::Type* _get_typeofUInt16();
    // Set static field: static System.Type typeofUInt16
    static void _set_typeofUInt16(System::Type* value);
    // Get static field: static System.Type typeofUInt32
    static System::Type* _get_typeofUInt32();
    // Set static field: static System.Type typeofUInt32
    static void _set_typeofUInt32(System::Type* value);
    // Get static field: static System.Type typeofUInt64
    static System::Type* _get_typeofUInt64();
    // Set static field: static System.Type typeofUInt64
    static void _set_typeofUInt64(System::Type* value);
    // Get static field: static System.Type typeofObject
    static System::Type* _get_typeofObject();
    // Set static field: static System.Type typeofObject
    static void _set_typeofObject(System::Type* value);
    // Get static field: static System.Type typeofSystemVoid
    static System::Type* _get_typeofSystemVoid();
    // Set static field: static System.Type typeofSystemVoid
    static void _set_typeofSystemVoid(System::Type* value);
    // Get static field: static System.Reflection.Assembly urtAssembly
    static System::Reflection::Assembly* _get_urtAssembly();
    // Set static field: static System.Reflection.Assembly urtAssembly
    static void _set_urtAssembly(System::Reflection::Assembly* value);
    // Get static field: static System.String urtAssemblyString
    static ::Il2CppString* _get_urtAssemblyString();
    // Set static field: static System.String urtAssemblyString
    static void _set_urtAssemblyString(::Il2CppString* value);
    // Get static field: static System.Type typeofTypeArray
    static System::Type* _get_typeofTypeArray();
    // Set static field: static System.Type typeofTypeArray
    static void _set_typeofTypeArray(System::Type* value);
    // Get static field: static System.Type typeofObjectArray
    static System::Type* _get_typeofObjectArray();
    // Set static field: static System.Type typeofObjectArray
    static void _set_typeofObjectArray(System::Type* value);
    // Get static field: static System.Type typeofStringArray
    static System::Type* _get_typeofStringArray();
    // Set static field: static System.Type typeofStringArray
    static void _set_typeofStringArray(System::Type* value);
    // Get static field: static System.Type typeofBooleanArray
    static System::Type* _get_typeofBooleanArray();
    // Set static field: static System.Type typeofBooleanArray
    static void _set_typeofBooleanArray(System::Type* value);
    // Get static field: static System.Type typeofByteArray
    static System::Type* _get_typeofByteArray();
    // Set static field: static System.Type typeofByteArray
    static void _set_typeofByteArray(System::Type* value);
    // Get static field: static System.Type typeofCharArray
    static System::Type* _get_typeofCharArray();
    // Set static field: static System.Type typeofCharArray
    static void _set_typeofCharArray(System::Type* value);
    // Get static field: static System.Type typeofDecimalArray
    static System::Type* _get_typeofDecimalArray();
    // Set static field: static System.Type typeofDecimalArray
    static void _set_typeofDecimalArray(System::Type* value);
    // Get static field: static System.Type typeofDoubleArray
    static System::Type* _get_typeofDoubleArray();
    // Set static field: static System.Type typeofDoubleArray
    static void _set_typeofDoubleArray(System::Type* value);
    // Get static field: static System.Type typeofInt16Array
    static System::Type* _get_typeofInt16Array();
    // Set static field: static System.Type typeofInt16Array
    static void _set_typeofInt16Array(System::Type* value);
    // Get static field: static System.Type typeofInt32Array
    static System::Type* _get_typeofInt32Array();
    // Set static field: static System.Type typeofInt32Array
    static void _set_typeofInt32Array(System::Type* value);
    // Get static field: static System.Type typeofInt64Array
    static System::Type* _get_typeofInt64Array();
    // Set static field: static System.Type typeofInt64Array
    static void _set_typeofInt64Array(System::Type* value);
    // Get static field: static System.Type typeofSByteArray
    static System::Type* _get_typeofSByteArray();
    // Set static field: static System.Type typeofSByteArray
    static void _set_typeofSByteArray(System::Type* value);
    // Get static field: static System.Type typeofSingleArray
    static System::Type* _get_typeofSingleArray();
    // Set static field: static System.Type typeofSingleArray
    static void _set_typeofSingleArray(System::Type* value);
    // Get static field: static System.Type typeofTimeSpanArray
    static System::Type* _get_typeofTimeSpanArray();
    // Set static field: static System.Type typeofTimeSpanArray
    static void _set_typeofTimeSpanArray(System::Type* value);
    // Get static field: static System.Type typeofDateTimeArray
    static System::Type* _get_typeofDateTimeArray();
    // Set static field: static System.Type typeofDateTimeArray
    static void _set_typeofDateTimeArray(System::Type* value);
    // Get static field: static System.Type typeofUInt16Array
    static System::Type* _get_typeofUInt16Array();
    // Set static field: static System.Type typeofUInt16Array
    static void _set_typeofUInt16Array(System::Type* value);
    // Get static field: static System.Type typeofUInt32Array
    static System::Type* _get_typeofUInt32Array();
    // Set static field: static System.Type typeofUInt32Array
    static void _set_typeofUInt32Array(System::Type* value);
    // Get static field: static System.Type typeofUInt64Array
    static System::Type* _get_typeofUInt64Array();
    // Set static field: static System.Type typeofUInt64Array
    static void _set_typeofUInt64Array(System::Type* value);
    // Get static field: static System.Type typeofMarshalByRefObject
    static System::Type* _get_typeofMarshalByRefObject();
    // Set static field: static System.Type typeofMarshalByRefObject
    static void _set_typeofMarshalByRefObject(System::Type* value);
    // static System.Runtime.Serialization.Formatters.Binary.InternalPrimitiveTypeE ToCode(System.Type type)
    // Offset: 0x1607600
    static System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE ToCode(System::Type* type);
    // static System.Boolean IsWriteAsByteArray(System.Runtime.Serialization.Formatters.Binary.InternalPrimitiveTypeE code)
    // Offset: 0x160A09C
    static bool IsWriteAsByteArray(System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE code);
    // static System.Int32 TypeLength(System.Runtime.Serialization.Formatters.Binary.InternalPrimitiveTypeE code)
    // Offset: 0x160A0C0
    static int TypeLength(System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE code);
    // static System.Type ToArrayType(System.Runtime.Serialization.Formatters.Binary.InternalPrimitiveTypeE code)
    // Offset: 0x1607CAC
    static System::Type* ToArrayType(System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE code);
    // static private System.Void InitTypeA()
    // Offset: 0x160A4B0
    static void InitTypeA();
    // static private System.Void InitArrayTypeA()
    // Offset: 0x160A0E4
    static void InitArrayTypeA();
    // static System.Type ToType(System.Runtime.Serialization.Formatters.Binary.InternalPrimitiveTypeE code)
    // Offset: 0x1607BC4
    static System::Type* ToType(System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE code);
    // static System.Array CreatePrimitiveArray(System.Runtime.Serialization.Formatters.Binary.InternalPrimitiveTypeE code, System.Int32 length)
    // Offset: 0x160A87C
    static System::Array* CreatePrimitiveArray(System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE code, int length);
    // static System.Boolean IsPrimitiveArray(System.Type type, out System.Object typeInformation)
    // Offset: 0x1606FB4
    static bool IsPrimitiveArray(System::Type* type, ::Il2CppObject*& typeInformation);
    // static private System.Void InitValueA()
    // Offset: 0x160A908
    static void InitValueA();
    // static System.String ToComType(System.Runtime.Serialization.Formatters.Binary.InternalPrimitiveTypeE code)
    // Offset: 0x1607ADC
    static ::Il2CppString* ToComType(System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE code);
    // static private System.Void InitTypeCodeA()
    // Offset: 0x160ACD4
    static void InitTypeCodeA();
    // static System.TypeCode ToTypeCode(System.Runtime.Serialization.Formatters.Binary.InternalPrimitiveTypeE code)
    // Offset: 0x160AE74
    static System::TypeCode ToTypeCode(System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE code);
    // static private System.Void InitCodeA()
    // Offset: 0x160AF5C
    static void InitCodeA();
    // static System.Runtime.Serialization.Formatters.Binary.InternalPrimitiveTypeE ToPrimitiveTypeEnum(System.TypeCode typeCode)
    // Offset: 0x1609FB4
    static System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE ToPrimitiveTypeEnum(System::TypeCode typeCode);
    // static System.Object FromString(System.String value, System.Runtime.Serialization.Formatters.Binary.InternalPrimitiveTypeE code)
    // Offset: 0x160B110
    static ::Il2CppObject* FromString(::Il2CppString* value, System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE code);
    // static private System.Void .cctor()
    // Offset: 0x160B204
    static void _cctor();
  }; // System.Runtime.Serialization.Formatters.Binary.Converter
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Serialization::Formatters::Binary::Converter*, "System.Runtime.Serialization.Formatters.Binary", "Converter");
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::Converter::ToCode
// Il2CppName: ToCode
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::Converter::IsWriteAsByteArray
// Il2CppName: IsWriteAsByteArray
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::Converter::TypeLength
// Il2CppName: TypeLength
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::Converter::ToArrayType
// Il2CppName: ToArrayType
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::Converter::InitTypeA
// Il2CppName: InitTypeA
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::Converter::InitArrayTypeA
// Il2CppName: InitArrayTypeA
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::Converter::ToType
// Il2CppName: ToType
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::Converter::CreatePrimitiveArray
// Il2CppName: CreatePrimitiveArray
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::Converter::IsPrimitiveArray
// Il2CppName: IsPrimitiveArray
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::Converter::InitValueA
// Il2CppName: InitValueA
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::Converter::ToComType
// Il2CppName: ToComType
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::Converter::InitTypeCodeA
// Il2CppName: InitTypeCodeA
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::Converter::ToTypeCode
// Il2CppName: ToTypeCode
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::Converter::InitCodeA
// Il2CppName: InitCodeA
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::Converter::ToPrimitiveTypeEnum
// Il2CppName: ToPrimitiveTypeEnum
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::Converter::FromString
// Il2CppName: FromString
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::Converter::_cctor
// Il2CppName: .cctor
// Cannot perform method pointer template specialization from operators!
