// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Runtime.Serialization.Formatters.FormatterTypeStyle
#include "System/Runtime/Serialization/Formatters/FormatterTypeStyle.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: Stream
  class Stream;
  // Forward declaring type: BinaryWriter
  class BinaryWriter;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: Hashtable
  class Hashtable;
}
// Forward declaring namespace: System::Runtime::Serialization::Formatters::Binary
namespace System::Runtime::Serialization::Formatters::Binary {
  // Forward declaring type: ObjectWriter
  class ObjectWriter;
  // Forward declaring type: BinaryMethodCall
  class BinaryMethodCall;
  // Forward declaring type: BinaryMethodReturn
  class BinaryMethodReturn;
  // Forward declaring type: BinaryObject
  class BinaryObject;
  // Forward declaring type: BinaryObjectWithMap
  class BinaryObjectWithMap;
  // Forward declaring type: BinaryObjectWithMapTyped
  class BinaryObjectWithMapTyped;
  // Forward declaring type: BinaryObjectString
  class BinaryObjectString;
  // Forward declaring type: BinaryArray
  class BinaryArray;
  // Forward declaring type: MemberPrimitiveUnTyped
  class MemberPrimitiveUnTyped;
  // Forward declaring type: MemberPrimitiveTyped
  class MemberPrimitiveTyped;
  // Forward declaring type: ObjectNull
  class ObjectNull;
  // Forward declaring type: MemberReference
  class MemberReference;
  // Forward declaring type: BinaryAssembly
  class BinaryAssembly;
  // Forward declaring type: NameInfo
  class NameInfo;
  // Forward declaring type: WriteObjectInfo
  class WriteObjectInfo;
  // Forward declaring type: InternalPrimitiveTypeE
  struct InternalPrimitiveTypeE;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Decimal
  struct Decimal;
  // Forward declaring type: TimeSpan
  struct TimeSpan;
  // Forward declaring type: DateTime
  struct DateTime;
  // Forward declaring type: Type
  class Type;
  // Forward declaring type: Array
  class Array;
}
// Completed forward declares
// Type namespace: System.Runtime.Serialization.Formatters.Binary
namespace System::Runtime::Serialization::Formatters::Binary {
  // Size: 0xB0
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Serialization.Formatters.Binary.__BinaryWriter
  class __BinaryWriter : public ::Il2CppObject {
    public:
    // System.IO.Stream sout
    // Size: 0x8
    // Offset: 0x10
    System::IO::Stream* sout;
    // Field size check
    static_assert(sizeof(System::IO::Stream*) == 0x8);
    // System.Runtime.Serialization.Formatters.FormatterTypeStyle formatterTypeStyle
    // Size: 0x4
    // Offset: 0x18
    System::Runtime::Serialization::Formatters::FormatterTypeStyle formatterTypeStyle;
    // Field size check
    static_assert(sizeof(System::Runtime::Serialization::Formatters::FormatterTypeStyle) == 0x4);
    // Padding between fields: formatterTypeStyle and: objectMapTable
    char __padding1[0x4] = {};
    // System.Collections.Hashtable objectMapTable
    // Size: 0x8
    // Offset: 0x20
    System::Collections::Hashtable* objectMapTable;
    // Field size check
    static_assert(sizeof(System::Collections::Hashtable*) == 0x8);
    // System.Runtime.Serialization.Formatters.Binary.ObjectWriter objectWriter
    // Size: 0x8
    // Offset: 0x28
    System::Runtime::Serialization::Formatters::Binary::ObjectWriter* objectWriter;
    // Field size check
    static_assert(sizeof(System::Runtime::Serialization::Formatters::Binary::ObjectWriter*) == 0x8);
    // System.IO.BinaryWriter dataWriter
    // Size: 0x8
    // Offset: 0x30
    System::IO::BinaryWriter* dataWriter;
    // Field size check
    static_assert(sizeof(System::IO::BinaryWriter*) == 0x8);
    // System.Int32 m_nestedObjectCount
    // Size: 0x4
    // Offset: 0x38
    int m_nestedObjectCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 nullCount
    // Size: 0x4
    // Offset: 0x3C
    int nullCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Runtime.Serialization.Formatters.Binary.BinaryMethodCall binaryMethodCall
    // Size: 0x8
    // Offset: 0x40
    System::Runtime::Serialization::Formatters::Binary::BinaryMethodCall* binaryMethodCall;
    // Field size check
    static_assert(sizeof(System::Runtime::Serialization::Formatters::Binary::BinaryMethodCall*) == 0x8);
    // System.Runtime.Serialization.Formatters.Binary.BinaryMethodReturn binaryMethodReturn
    // Size: 0x8
    // Offset: 0x48
    System::Runtime::Serialization::Formatters::Binary::BinaryMethodReturn* binaryMethodReturn;
    // Field size check
    static_assert(sizeof(System::Runtime::Serialization::Formatters::Binary::BinaryMethodReturn*) == 0x8);
    // System.Runtime.Serialization.Formatters.Binary.BinaryObject binaryObject
    // Size: 0x8
    // Offset: 0x50
    System::Runtime::Serialization::Formatters::Binary::BinaryObject* binaryObject;
    // Field size check
    static_assert(sizeof(System::Runtime::Serialization::Formatters::Binary::BinaryObject*) == 0x8);
    // System.Runtime.Serialization.Formatters.Binary.BinaryObjectWithMap binaryObjectWithMap
    // Size: 0x8
    // Offset: 0x58
    System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMap* binaryObjectWithMap;
    // Field size check
    static_assert(sizeof(System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMap*) == 0x8);
    // System.Runtime.Serialization.Formatters.Binary.BinaryObjectWithMapTyped binaryObjectWithMapTyped
    // Size: 0x8
    // Offset: 0x60
    System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMapTyped* binaryObjectWithMapTyped;
    // Field size check
    static_assert(sizeof(System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMapTyped*) == 0x8);
    // System.Runtime.Serialization.Formatters.Binary.BinaryObjectString binaryObjectString
    // Size: 0x8
    // Offset: 0x68
    System::Runtime::Serialization::Formatters::Binary::BinaryObjectString* binaryObjectString;
    // Field size check
    static_assert(sizeof(System::Runtime::Serialization::Formatters::Binary::BinaryObjectString*) == 0x8);
    // System.Runtime.Serialization.Formatters.Binary.BinaryArray binaryArray
    // Size: 0x8
    // Offset: 0x70
    System::Runtime::Serialization::Formatters::Binary::BinaryArray* binaryArray;
    // Field size check
    static_assert(sizeof(System::Runtime::Serialization::Formatters::Binary::BinaryArray*) == 0x8);
    // private System.Byte[] byteBuffer
    // Size: 0x8
    // Offset: 0x78
    ::Array<uint8_t>* byteBuffer;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // private System.Int32 chunkSize
    // Size: 0x4
    // Offset: 0x80
    int chunkSize;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: chunkSize and: memberPrimitiveUnTyped
    char __padding15[0x4] = {};
    // System.Runtime.Serialization.Formatters.Binary.MemberPrimitiveUnTyped memberPrimitiveUnTyped
    // Size: 0x8
    // Offset: 0x88
    System::Runtime::Serialization::Formatters::Binary::MemberPrimitiveUnTyped* memberPrimitiveUnTyped;
    // Field size check
    static_assert(sizeof(System::Runtime::Serialization::Formatters::Binary::MemberPrimitiveUnTyped*) == 0x8);
    // System.Runtime.Serialization.Formatters.Binary.MemberPrimitiveTyped memberPrimitiveTyped
    // Size: 0x8
    // Offset: 0x90
    System::Runtime::Serialization::Formatters::Binary::MemberPrimitiveTyped* memberPrimitiveTyped;
    // Field size check
    static_assert(sizeof(System::Runtime::Serialization::Formatters::Binary::MemberPrimitiveTyped*) == 0x8);
    // System.Runtime.Serialization.Formatters.Binary.ObjectNull objectNull
    // Size: 0x8
    // Offset: 0x98
    System::Runtime::Serialization::Formatters::Binary::ObjectNull* objectNull;
    // Field size check
    static_assert(sizeof(System::Runtime::Serialization::Formatters::Binary::ObjectNull*) == 0x8);
    // System.Runtime.Serialization.Formatters.Binary.MemberReference memberReference
    // Size: 0x8
    // Offset: 0xA0
    System::Runtime::Serialization::Formatters::Binary::MemberReference* memberReference;
    // Field size check
    static_assert(sizeof(System::Runtime::Serialization::Formatters::Binary::MemberReference*) == 0x8);
    // System.Runtime.Serialization.Formatters.Binary.BinaryAssembly binaryAssembly
    // Size: 0x8
    // Offset: 0xA8
    System::Runtime::Serialization::Formatters::Binary::BinaryAssembly* binaryAssembly;
    // Field size check
    static_assert(sizeof(System::Runtime::Serialization::Formatters::Binary::BinaryAssembly*) == 0x8);
    // Creating value type constructor for type: __BinaryWriter
    __BinaryWriter(System::IO::Stream* sout_ = {}, System::Runtime::Serialization::Formatters::FormatterTypeStyle formatterTypeStyle_ = {}, System::Collections::Hashtable* objectMapTable_ = {}, System::Runtime::Serialization::Formatters::Binary::ObjectWriter* objectWriter_ = {}, System::IO::BinaryWriter* dataWriter_ = {}, int m_nestedObjectCount_ = {}, int nullCount_ = {}, System::Runtime::Serialization::Formatters::Binary::BinaryMethodCall* binaryMethodCall_ = {}, System::Runtime::Serialization::Formatters::Binary::BinaryMethodReturn* binaryMethodReturn_ = {}, System::Runtime::Serialization::Formatters::Binary::BinaryObject* binaryObject_ = {}, System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMap* binaryObjectWithMap_ = {}, System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMapTyped* binaryObjectWithMapTyped_ = {}, System::Runtime::Serialization::Formatters::Binary::BinaryObjectString* binaryObjectString_ = {}, System::Runtime::Serialization::Formatters::Binary::BinaryArray* binaryArray_ = {}, ::Array<uint8_t>* byteBuffer_ = {}, int chunkSize_ = {}, System::Runtime::Serialization::Formatters::Binary::MemberPrimitiveUnTyped* memberPrimitiveUnTyped_ = {}, System::Runtime::Serialization::Formatters::Binary::MemberPrimitiveTyped* memberPrimitiveTyped_ = {}, System::Runtime::Serialization::Formatters::Binary::ObjectNull* objectNull_ = {}, System::Runtime::Serialization::Formatters::Binary::MemberReference* memberReference_ = {}, System::Runtime::Serialization::Formatters::Binary::BinaryAssembly* binaryAssembly_ = {}) noexcept : sout{sout_}, formatterTypeStyle{formatterTypeStyle_}, objectMapTable{objectMapTable_}, objectWriter{objectWriter_}, dataWriter{dataWriter_}, m_nestedObjectCount{m_nestedObjectCount_}, nullCount{nullCount_}, binaryMethodCall{binaryMethodCall_}, binaryMethodReturn{binaryMethodReturn_}, binaryObject{binaryObject_}, binaryObjectWithMap{binaryObjectWithMap_}, binaryObjectWithMapTyped{binaryObjectWithMapTyped_}, binaryObjectString{binaryObjectString_}, binaryArray{binaryArray_}, byteBuffer{byteBuffer_}, chunkSize{chunkSize_}, memberPrimitiveUnTyped{memberPrimitiveUnTyped_}, memberPrimitiveTyped{memberPrimitiveTyped_}, objectNull{objectNull_}, memberReference{memberReference_}, binaryAssembly{binaryAssembly_} {}
    // System.Void .ctor(System.IO.Stream sout, System.Runtime.Serialization.Formatters.Binary.ObjectWriter objectWriter, System.Runtime.Serialization.Formatters.FormatterTypeStyle formatterTypeStyle)
    // Offset: 0x1691064
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static __BinaryWriter* New_ctor(System::IO::Stream* sout, System::Runtime::Serialization::Formatters::Binary::ObjectWriter* objectWriter, System::Runtime::Serialization::Formatters::FormatterTypeStyle formatterTypeStyle) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<__BinaryWriter*, creationType>(sout, objectWriter, formatterTypeStyle)));
    }
    // System.Void WriteBegin()
    // Offset: 0x169111C
    void WriteBegin();
    // System.Void WriteEnd()
    // Offset: 0x1691120
    void WriteEnd();
    // System.Void WriteBoolean(System.Boolean value)
    // Offset: 0x1691140
    void WriteBoolean(bool value);
    // System.Void WriteByte(System.Byte value)
    // Offset: 0x1691164
    void WriteByte(uint8_t value);
    // private System.Void WriteBytes(System.Byte[] value)
    // Offset: 0x1691184
    void WriteBytes(::Array<uint8_t>* value);
    // private System.Void WriteBytes(System.Byte[] byteA, System.Int32 offset, System.Int32 size)
    // Offset: 0x16911A4
    void WriteBytes(::Array<uint8_t>* byteA, int offset, int size);
    // System.Void WriteChar(System.Char value)
    // Offset: 0x16911C4
    void WriteChar(::Il2CppChar value);
    // System.Void WriteChars(System.Char[] value)
    // Offset: 0x16911E4
    void WriteChars(::Array<::Il2CppChar>* value);
    // System.Void WriteDecimal(System.Decimal value)
    // Offset: 0x1691204
    void WriteDecimal(System::Decimal value);
    // System.Void WriteSingle(System.Single value)
    // Offset: 0x16912D0
    void WriteSingle(float value);
    // System.Void WriteDouble(System.Double value)
    // Offset: 0x16912F4
    void WriteDouble(double value);
    // System.Void WriteInt16(System.Int16 value)
    // Offset: 0x1691318
    void WriteInt16(int16_t value);
    // System.Void WriteInt32(System.Int32 value)
    // Offset: 0x169133C
    void WriteInt32(int value);
    // System.Void WriteInt64(System.Int64 value)
    // Offset: 0x1691360
    void WriteInt64(int64_t value);
    // System.Void WriteSByte(System.SByte value)
    // Offset: 0x1691384
    void WriteSByte(int8_t value);
    // System.Void WriteString(System.String value)
    // Offset: 0x16912AC
    void WriteString(::Il2CppString* value);
    // System.Void WriteTimeSpan(System.TimeSpan value)
    // Offset: 0x16913A4
    void WriteTimeSpan(System::TimeSpan value);
    // System.Void WriteDateTime(System.DateTime value)
    // Offset: 0x16913C8
    void WriteDateTime(System::DateTime value);
    // System.Void WriteUInt16(System.UInt16 value)
    // Offset: 0x16913EC
    void WriteUInt16(uint16_t value);
    // System.Void WriteUInt32(System.UInt32 value)
    // Offset: 0x1691410
    void WriteUInt32(uint value);
    // System.Void WriteUInt64(System.UInt64 value)
    // Offset: 0x1691434
    void WriteUInt64(uint64_t value);
    // System.Void WriteObjectEnd(System.Runtime.Serialization.Formatters.Binary.NameInfo memberNameInfo, System.Runtime.Serialization.Formatters.Binary.NameInfo typeNameInfo)
    // Offset: 0x1691458
    void WriteObjectEnd(System::Runtime::Serialization::Formatters::Binary::NameInfo* memberNameInfo, System::Runtime::Serialization::Formatters::Binary::NameInfo* typeNameInfo);
    // System.Void WriteSerializationHeaderEnd()
    // Offset: 0x169145C
    void WriteSerializationHeaderEnd();
    // System.Void WriteSerializationHeader(System.Int32 topId, System.Int32 headerId, System.Int32 minorVersion, System.Int32 majorVersion)
    // Offset: 0x16914DC
    void WriteSerializationHeader(int topId, int headerId, int minorVersion, int majorVersion);
    // System.Void WriteMethodCall()
    // Offset: 0x169158C
    void WriteMethodCall();
    // System.Void WriteMethodReturn()
    // Offset: 0x1691618
    void WriteMethodReturn();
    // System.Void WriteObject(System.Runtime.Serialization.Formatters.Binary.NameInfo nameInfo, System.Runtime.Serialization.Formatters.Binary.NameInfo typeNameInfo, System.Int32 numMembers, System.String[] memberNames, System.Type[] memberTypes, System.Runtime.Serialization.Formatters.Binary.WriteObjectInfo[] memberObjectInfos)
    // Offset: 0x16916A4
    void WriteObject(System::Runtime::Serialization::Formatters::Binary::NameInfo* nameInfo, System::Runtime::Serialization::Formatters::Binary::NameInfo* typeNameInfo, int numMembers, ::Array<::Il2CppString*>* memberNames, ::Array<System::Type*>* memberTypes, ::Array<System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*>* memberObjectInfos);
    // System.Void WriteObjectString(System.Int32 objectId, System.String value)
    // Offset: 0x1691BFC
    void WriteObjectString(int objectId, ::Il2CppString* value);
    // System.Void WriteSingleArray(System.Runtime.Serialization.Formatters.Binary.NameInfo memberNameInfo, System.Runtime.Serialization.Formatters.Binary.NameInfo arrayNameInfo, System.Runtime.Serialization.Formatters.Binary.WriteObjectInfo objectInfo, System.Runtime.Serialization.Formatters.Binary.NameInfo arrayElemTypeNameInfo, System.Int32 length, System.Int32 lowerBound, System.Array array)
    // Offset: 0x1691CA8
    void WriteSingleArray(System::Runtime::Serialization::Formatters::Binary::NameInfo* memberNameInfo, System::Runtime::Serialization::Formatters::Binary::NameInfo* arrayNameInfo, System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* objectInfo, System::Runtime::Serialization::Formatters::Binary::NameInfo* arrayElemTypeNameInfo, int length, int lowerBound, System::Array* array);
    // private System.Void WriteArrayAsBytes(System.Array array, System.Int32 typeLength)
    // Offset: 0x1691F64
    void WriteArrayAsBytes(System::Array* array, int typeLength);
    // System.Void WriteJaggedArray(System.Runtime.Serialization.Formatters.Binary.NameInfo memberNameInfo, System.Runtime.Serialization.Formatters.Binary.NameInfo arrayNameInfo, System.Runtime.Serialization.Formatters.Binary.WriteObjectInfo objectInfo, System.Runtime.Serialization.Formatters.Binary.NameInfo arrayElemTypeNameInfo, System.Int32 length, System.Int32 lowerBound)
    // Offset: 0x169219C
    void WriteJaggedArray(System::Runtime::Serialization::Formatters::Binary::NameInfo* memberNameInfo, System::Runtime::Serialization::Formatters::Binary::NameInfo* arrayNameInfo, System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* objectInfo, System::Runtime::Serialization::Formatters::Binary::NameInfo* arrayElemTypeNameInfo, int length, int lowerBound);
    // System.Void WriteRectangleArray(System.Runtime.Serialization.Formatters.Binary.NameInfo memberNameInfo, System.Runtime.Serialization.Formatters.Binary.NameInfo arrayNameInfo, System.Runtime.Serialization.Formatters.Binary.WriteObjectInfo objectInfo, System.Runtime.Serialization.Formatters.Binary.NameInfo arrayElemTypeNameInfo, System.Int32 rank, System.Int32[] lengthA, System.Int32[] lowerBoundA)
    // Offset: 0x1692344
    void WriteRectangleArray(System::Runtime::Serialization::Formatters::Binary::NameInfo* memberNameInfo, System::Runtime::Serialization::Formatters::Binary::NameInfo* arrayNameInfo, System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* objectInfo, System::Runtime::Serialization::Formatters::Binary::NameInfo* arrayElemTypeNameInfo, int rank, ::Array<int>* lengthA, ::Array<int>* lowerBoundA);
    // System.Void WriteObjectByteArray(System.Runtime.Serialization.Formatters.Binary.NameInfo memberNameInfo, System.Runtime.Serialization.Formatters.Binary.NameInfo arrayNameInfo, System.Runtime.Serialization.Formatters.Binary.WriteObjectInfo objectInfo, System.Runtime.Serialization.Formatters.Binary.NameInfo arrayElemTypeNameInfo, System.Int32 length, System.Int32 lowerBound, System.Byte[] byteA)
    // Offset: 0x16924C4
    void WriteObjectByteArray(System::Runtime::Serialization::Formatters::Binary::NameInfo* memberNameInfo, System::Runtime::Serialization::Formatters::Binary::NameInfo* arrayNameInfo, System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* objectInfo, System::Runtime::Serialization::Formatters::Binary::NameInfo* arrayElemTypeNameInfo, int length, int lowerBound, ::Array<uint8_t>* byteA);
    // System.Void WriteMember(System.Runtime.Serialization.Formatters.Binary.NameInfo memberNameInfo, System.Runtime.Serialization.Formatters.Binary.NameInfo typeNameInfo, System.Object value)
    // Offset: 0x1692530
    void WriteMember(System::Runtime::Serialization::Formatters::Binary::NameInfo* memberNameInfo, System::Runtime::Serialization::Formatters::Binary::NameInfo* typeNameInfo, ::Il2CppObject* value);
    // System.Void WriteNullMember(System.Runtime.Serialization.Formatters.Binary.NameInfo memberNameInfo, System.Runtime.Serialization.Formatters.Binary.NameInfo typeNameInfo)
    // Offset: 0x1692680
    void WriteNullMember(System::Runtime::Serialization::Formatters::Binary::NameInfo* memberNameInfo, System::Runtime::Serialization::Formatters::Binary::NameInfo* typeNameInfo);
    // System.Void WriteMemberObjectRef(System.Runtime.Serialization.Formatters.Binary.NameInfo memberNameInfo, System.Int32 idRef)
    // Offset: 0x1692740
    void WriteMemberObjectRef(System::Runtime::Serialization::Formatters::Binary::NameInfo* memberNameInfo, int idRef);
    // System.Void WriteMemberNested(System.Runtime.Serialization.Formatters.Binary.NameInfo memberNameInfo)
    // Offset: 0x16927F0
    void WriteMemberNested(System::Runtime::Serialization::Formatters::Binary::NameInfo* memberNameInfo);
    // System.Void WriteMemberString(System.Runtime.Serialization.Formatters.Binary.NameInfo memberNameInfo, System.Runtime.Serialization.Formatters.Binary.NameInfo typeNameInfo, System.String value)
    // Offset: 0x1692818
    void WriteMemberString(System::Runtime::Serialization::Formatters::Binary::NameInfo* memberNameInfo, System::Runtime::Serialization::Formatters::Binary::NameInfo* typeNameInfo, ::Il2CppString* value);
    // System.Void WriteItem(System.Runtime.Serialization.Formatters.Binary.NameInfo itemNameInfo, System.Runtime.Serialization.Formatters.Binary.NameInfo typeNameInfo, System.Object value)
    // Offset: 0x1692864
    void WriteItem(System::Runtime::Serialization::Formatters::Binary::NameInfo* itemNameInfo, System::Runtime::Serialization::Formatters::Binary::NameInfo* typeNameInfo, ::Il2CppObject* value);
    // System.Void WriteNullItem(System.Runtime.Serialization.Formatters.Binary.NameInfo itemNameInfo, System.Runtime.Serialization.Formatters.Binary.NameInfo typeNameInfo)
    // Offset: 0x16928A8
    void WriteNullItem(System::Runtime::Serialization::Formatters::Binary::NameInfo* itemNameInfo, System::Runtime::Serialization::Formatters::Binary::NameInfo* typeNameInfo);
    // System.Void WriteDelayedNullItem()
    // Offset: 0x16928B8
    void WriteDelayedNullItem();
    // System.Void WriteItemEnd()
    // Offset: 0x16928C8
    void WriteItemEnd();
    // private System.Void InternalWriteItemNull()
    // Offset: 0x1691B50
    void InternalWriteItemNull();
    // System.Void WriteItemObjectRef(System.Runtime.Serialization.Formatters.Binary.NameInfo nameInfo, System.Int32 idRef)
    // Offset: 0x16928CC
    void WriteItemObjectRef(System::Runtime::Serialization::Formatters::Binary::NameInfo* nameInfo, int idRef);
    // System.Void WriteAssembly(System.Type type, System.String assemblyString, System.Int32 assemId, System.Boolean isNew)
    // Offset: 0x1692908
    void WriteAssembly(System::Type* type, ::Il2CppString* assemblyString, int assemId, bool isNew);
    // System.Void WriteValue(System.Runtime.Serialization.Formatters.Binary.InternalPrimitiveTypeE code, System.Object value)
    // Offset: 0x1692A04
    void WriteValue(System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE code, ::Il2CppObject* value);
  }; // System.Runtime.Serialization.Formatters.Binary.__BinaryWriter
  #pragma pack(pop)
  static check_size<sizeof(__BinaryWriter), 168 + sizeof(System::Runtime::Serialization::Formatters::Binary::BinaryAssembly*)> __System_Runtime_Serialization_Formatters_Binary___BinaryWriterSizeCheck;
  static_assert(sizeof(__BinaryWriter) == 0xB0);
}
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Serialization::Formatters::Binary::__BinaryWriter*, "System.Runtime.Serialization.Formatters.Binary", "__BinaryWriter");
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::WriteBegin
// Il2CppName: WriteBegin
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::WriteEnd
// Il2CppName: WriteEnd
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::WriteBoolean
// Il2CppName: WriteBoolean
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::WriteByte
// Il2CppName: WriteByte
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::WriteBytes
// Il2CppName: WriteBytes
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::WriteBytes
// Il2CppName: WriteBytes
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::WriteChar
// Il2CppName: WriteChar
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::WriteChars
// Il2CppName: WriteChars
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::WriteDecimal
// Il2CppName: WriteDecimal
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::WriteSingle
// Il2CppName: WriteSingle
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::WriteDouble
// Il2CppName: WriteDouble
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::WriteInt16
// Il2CppName: WriteInt16
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::WriteInt32
// Il2CppName: WriteInt32
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::WriteInt64
// Il2CppName: WriteInt64
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::WriteSByte
// Il2CppName: WriteSByte
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::WriteString
// Il2CppName: WriteString
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::WriteTimeSpan
// Il2CppName: WriteTimeSpan
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::WriteDateTime
// Il2CppName: WriteDateTime
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::WriteUInt16
// Il2CppName: WriteUInt16
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::WriteUInt32
// Il2CppName: WriteUInt32
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::WriteUInt64
// Il2CppName: WriteUInt64
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::WriteObjectEnd
// Il2CppName: WriteObjectEnd
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::WriteSerializationHeaderEnd
// Il2CppName: WriteSerializationHeaderEnd
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::WriteSerializationHeader
// Il2CppName: WriteSerializationHeader
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::WriteMethodCall
// Il2CppName: WriteMethodCall
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::WriteMethodReturn
// Il2CppName: WriteMethodReturn
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::WriteObject
// Il2CppName: WriteObject
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::WriteObjectString
// Il2CppName: WriteObjectString
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::WriteSingleArray
// Il2CppName: WriteSingleArray
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::WriteArrayAsBytes
// Il2CppName: WriteArrayAsBytes
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::WriteJaggedArray
// Il2CppName: WriteJaggedArray
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::WriteRectangleArray
// Il2CppName: WriteRectangleArray
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::WriteObjectByteArray
// Il2CppName: WriteObjectByteArray
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::WriteMember
// Il2CppName: WriteMember
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::WriteNullMember
// Il2CppName: WriteNullMember
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::WriteMemberObjectRef
// Il2CppName: WriteMemberObjectRef
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::WriteMemberNested
// Il2CppName: WriteMemberNested
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::WriteMemberString
// Il2CppName: WriteMemberString
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::WriteItem
// Il2CppName: WriteItem
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::WriteNullItem
// Il2CppName: WriteNullItem
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::WriteDelayedNullItem
// Il2CppName: WriteDelayedNullItem
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::WriteItemEnd
// Il2CppName: WriteItemEnd
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::InternalWriteItemNull
// Il2CppName: InternalWriteItemNull
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::WriteItemObjectRef
// Il2CppName: WriteItemObjectRef
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::WriteAssembly
// Il2CppName: WriteAssembly
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::WriteValue
// Il2CppName: WriteValue
// Cannot perform method pointer template specialization from operators!
