// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include <initializer_list>
// Including type: System.Runtime.Serialization.ISerializable
#include "System/Runtime/Serialization/ISerializable.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: String
  class String;
  // Forward declaring type: IFormatProvider
  class IFormatProvider;
  // Forward declaring type: ParamsArray
  struct ParamsArray;
}
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
  // Forward declaring type: StreamingContext
  struct StreamingContext;
}
// Completed forward declares
// Type namespace: System.Text
namespace System::Text {
  // Autogenerated type: System.Text.StringBuilder
  class StringBuilder : public ::Il2CppObject/*, public System::Runtime::Serialization::ISerializable*/ {
    public:
    // System.Char[] m_ChunkChars
    // Offset: 0x10
    ::Array<::Il2CppChar>* m_ChunkChars;
    // System.Text.StringBuilder m_ChunkPrevious
    // Offset: 0x18
    System::Text::StringBuilder* m_ChunkPrevious;
    // System.Int32 m_ChunkLength
    // Offset: 0x20
    int m_ChunkLength;
    // System.Int32 m_ChunkOffset
    // Offset: 0x24
    int m_ChunkOffset;
    // System.Int32 m_MaxCapacity
    // Offset: 0x28
    int m_MaxCapacity;
    // Creating interface conversion operator: operator System::Runtime::Serialization::ISerializable
    operator System::Runtime::Serialization::ISerializable() noexcept {
      return *reinterpret_cast<System::Runtime::Serialization::ISerializable*>(this);
    }
    // static field const value: static System.Int32 DefaultCapacity
    static constexpr const int DefaultCapacity = 16;
    // Get static field: static System.Int32 DefaultCapacity
    static int _get_DefaultCapacity();
    // Set static field: static System.Int32 DefaultCapacity
    static void _set_DefaultCapacity(int value);
    // static field const value: static private System.String CapacityField
    static constexpr const char* CapacityField = "Capacity";
    // Get static field: static private System.String CapacityField
    static ::Il2CppString* _get_CapacityField();
    // Set static field: static private System.String CapacityField
    static void _set_CapacityField(::Il2CppString* value);
    // static field const value: static private System.String MaxCapacityField
    static constexpr const char* MaxCapacityField = "m_MaxCapacity";
    // Get static field: static private System.String MaxCapacityField
    static ::Il2CppString* _get_MaxCapacityField();
    // Set static field: static private System.String MaxCapacityField
    static void _set_MaxCapacityField(::Il2CppString* value);
    // static field const value: static private System.String StringValueField
    static constexpr const char* StringValueField = "m_StringValue";
    // Get static field: static private System.String StringValueField
    static ::Il2CppString* _get_StringValueField();
    // Set static field: static private System.String StringValueField
    static void _set_StringValueField(::Il2CppString* value);
    // static field const value: static private System.String ThreadIDField
    static constexpr const char* ThreadIDField = "m_currentThread";
    // Get static field: static private System.String ThreadIDField
    static ::Il2CppString* _get_ThreadIDField();
    // Set static field: static private System.String ThreadIDField
    static void _set_ThreadIDField(::Il2CppString* value);
    // static field const value: static System.Int32 MaxChunkSize
    static constexpr const int MaxChunkSize = 8000;
    // Get static field: static System.Int32 MaxChunkSize
    static int _get_MaxChunkSize();
    // Set static field: static System.Int32 MaxChunkSize
    static void _set_MaxChunkSize(int value);
    // public System.Void .ctor(System.Int32 capacity)
    // Offset: 0x162B274
    static StringBuilder* New_ctor(int capacity);
    // public System.Void .ctor(System.String value)
    // Offset: 0x16390BC
    static StringBuilder* New_ctor(::Il2CppString* value);
    // public System.Void .ctor(System.String value, System.Int32 capacity)
    // Offset: 0x1639090
    static StringBuilder* New_ctor(::Il2CppString* value, int capacity);
    // public System.Void .ctor(System.String value, System.Int32 startIndex, System.Int32 length, System.Int32 capacity)
    // Offset: 0x16390C4
    static StringBuilder* New_ctor(::Il2CppString* value, int startIndex, int length, int capacity);
    // private System.Void .ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x163943C
    static StringBuilder* New_ctor(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context);
    // public System.Int32 get_Capacity()
    // Offset: 0x1639810
    int get_Capacity();
    // public System.Void set_Capacity(System.Int32 value)
    // Offset: 0x1639834
    void set_Capacity(int value);
    // public System.Int32 get_MaxCapacity()
    // Offset: 0x1639980
    int get_MaxCapacity();
    // public System.Int32 EnsureCapacity(System.Int32 capacity)
    // Offset: 0x1639988
    int EnsureCapacity(int capacity);
    // public System.String ToString(System.Int32 startIndex, System.Int32 length)
    // Offset: 0x1639BC0
    ::Il2CppString* ToString(int startIndex, int length);
    // public System.Text.StringBuilder Clear()
    // Offset: 0x1639E00
    System::Text::StringBuilder* Clear();
    // public System.Int32 get_Length()
    // Offset: 0x1625744
    int get_Length();
    // public System.Void set_Length(System.Int32 value)
    // Offset: 0x16257B0
    void set_Length(int value);
    // public System.Char get_Chars(System.Int32 index)
    // Offset: 0x1625970
    ::Il2CppChar get_Chars(int index);
    // public System.Void set_Chars(System.Int32 index, System.Char value)
    // Offset: 0x1637F90
    void set_Chars(int index, ::Il2CppChar value);
    // public System.Text.StringBuilder Append(System.Char value, System.Int32 repeatCount)
    // Offset: 0x1639E28
    System::Text::StringBuilder* Append(::Il2CppChar value, int repeatCount);
    // public System.Text.StringBuilder Append(System.Char[] value, System.Int32 startIndex, System.Int32 charCount)
    // Offset: 0x163A12C
    System::Text::StringBuilder* Append(::Array<::Il2CppChar>* value, int startIndex, int charCount);
    // public System.Text.StringBuilder Append(System.String value)
    // Offset: 0x162B2DC
    System::Text::StringBuilder* Append(::Il2CppString* value);
    // private System.Void AppendHelper(System.String value)
    // Offset: 0x163A410
    void AppendHelper(::Il2CppString* value);
    // public System.Text.StringBuilder Append(System.String value, System.Int32 startIndex, System.Int32 count)
    // Offset: 0x16385E8
    System::Text::StringBuilder* Append(::Il2CppString* value, int startIndex, int count);
    // public System.Text.StringBuilder AppendLine()
    // Offset: 0x163A44C
    System::Text::StringBuilder* AppendLine();
    // public System.Text.StringBuilder AppendLine(System.String value)
    // Offset: 0x163A478
    System::Text::StringBuilder* AppendLine(::Il2CppString* value);
    // public System.Text.StringBuilder Insert(System.Int32 index, System.String value, System.Int32 count)
    // Offset: 0x163A4A8
    System::Text::StringBuilder* Insert(int index, ::Il2CppString* value, int count);
    // public System.Text.StringBuilder Remove(System.Int32 startIndex, System.Int32 length)
    // Offset: 0x163808C
    System::Text::StringBuilder* Remove(int startIndex, int length);
    // public System.Text.StringBuilder Append(System.Boolean value)
    // Offset: 0x163AC08
    System::Text::StringBuilder* Append(bool value);
    // public System.Text.StringBuilder Append(System.Byte value)
    // Offset: 0x163AC44
    System::Text::StringBuilder* Append(uint8_t value);
    // public System.Text.StringBuilder Append(System.Char value)
    // Offset: 0x1625750
    System::Text::StringBuilder* Append(::Il2CppChar value);
    // public System.Text.StringBuilder Append(System.Int32 value)
    // Offset: 0x163ACD4
    System::Text::StringBuilder* Append(int value);
    // public System.Text.StringBuilder Append(System.Int64 value)
    // Offset: 0x163AD64
    System::Text::StringBuilder* Append(int64_t value);
    // public System.Text.StringBuilder Append(System.Double value)
    // Offset: 0x163ADF4
    System::Text::StringBuilder* Append(double value);
    // public System.Text.StringBuilder Append(System.Object value)
    // Offset: 0x163AE84
    System::Text::StringBuilder* Append(::Il2CppObject* value);
    // public System.Text.StringBuilder Insert(System.Int32 index, System.String value)
    // Offset: 0x163AED0
    System::Text::StringBuilder* Insert(int index, ::Il2CppString* value);
    // public System.Text.StringBuilder Insert(System.Int32 index, System.Char value)
    // Offset: 0x163B0C4
    System::Text::StringBuilder* Insert(int index, ::Il2CppChar value);
    // public System.Text.StringBuilder AppendFormat(System.String format, System.Object arg0)
    // Offset: 0x163B0F4
    System::Text::StringBuilder* AppendFormat(::Il2CppString* format, ::Il2CppObject* arg0);
    // public System.Text.StringBuilder AppendFormat(System.String format, System.Object arg0, System.Object arg1)
    // Offset: 0x163B938
    System::Text::StringBuilder* AppendFormat(::Il2CppString* format, ::Il2CppObject* arg0, ::Il2CppObject* arg1);
    // public System.Text.StringBuilder AppendFormat(System.String format, System.Object arg0, System.Object arg1, System.Object arg2)
    // Offset: 0x163B998
    System::Text::StringBuilder* AppendFormat(::Il2CppString* format, ::Il2CppObject* arg0, ::Il2CppObject* arg1, ::Il2CppObject* arg2);
    // public System.Text.StringBuilder AppendFormat(System.String format, params System.Object[] args)
    // Offset: 0x163B9FC
    System::Text::StringBuilder* AppendFormat(::Il2CppString* format, ::Array<::Il2CppObject*>* args);
    // Creating initializer_list -> params proxy for: System.Text.StringBuilder AppendFormat(System.String format, params System.Object[] args)
    System::Text::StringBuilder* AppendFormat(::Il2CppString* format, std::initializer_list<::Il2CppObject*> args);
    // Creating TArgs -> initializer_list proxy for: System.Text.StringBuilder AppendFormat(System.String format, params System.Object[] args)
    template<class ...TParams>
    System::Text::StringBuilder* AppendFormat(::Il2CppString* format, TParams&&... args) {
      return AppendFormat(format, {args...});
    }
    // public System.Text.StringBuilder AppendFormat(System.IFormatProvider provider, System.String format, System.Object arg0)
    // Offset: 0x163BADC
    System::Text::StringBuilder* AppendFormat(System::IFormatProvider* provider, ::Il2CppString* format, ::Il2CppObject* arg0);
    // public System.Text.StringBuilder AppendFormat(System.IFormatProvider provider, System.String format, System.Object arg0, System.Object arg1)
    // Offset: 0x163BB44
    System::Text::StringBuilder* AppendFormat(System::IFormatProvider* provider, ::Il2CppString* format, ::Il2CppObject* arg0, ::Il2CppObject* arg1);
    // public System.Text.StringBuilder AppendFormat(System.IFormatProvider provider, System.String format, params System.Object[] args)
    // Offset: 0x163BBB0
    System::Text::StringBuilder* AppendFormat(System::IFormatProvider* provider, ::Il2CppString* format, ::Array<::Il2CppObject*>* args);
    // Creating initializer_list -> params proxy for: System.Text.StringBuilder AppendFormat(System.IFormatProvider provider, System.String format, params System.Object[] args)
    System::Text::StringBuilder* AppendFormat(System::IFormatProvider* provider, ::Il2CppString* format, std::initializer_list<::Il2CppObject*> args);
    // Creating TArgs -> initializer_list proxy for: System.Text.StringBuilder AppendFormat(System.IFormatProvider provider, System.String format, params System.Object[] args)
    template<class ...TParams>
    System::Text::StringBuilder* AppendFormat(System::IFormatProvider* provider, ::Il2CppString* format, TParams&&... args) {
      return AppendFormat(provider, format, {args...});
    }
    // static private System.Void FormatError()
    // Offset: 0x163BC9C
    static void FormatError();
    // System.Text.StringBuilder AppendFormatHelper(System.IFormatProvider provider, System.String format, System.ParamsArray args)
    // Offset: 0x163B150
    System::Text::StringBuilder* AppendFormatHelper(System::IFormatProvider* provider, ::Il2CppString* format, System::ParamsArray args);
    // public System.Text.StringBuilder Replace(System.String oldValue, System.String newValue)
    // Offset: 0x163BD1C
    System::Text::StringBuilder* Replace(::Il2CppString* oldValue, ::Il2CppString* newValue);
    // public System.Text.StringBuilder Replace(System.String oldValue, System.String newValue, System.Int32 startIndex, System.Int32 count)
    // Offset: 0x163BD2C
    System::Text::StringBuilder* Replace(::Il2CppString* oldValue, ::Il2CppString* newValue, int startIndex, int count);
    // public System.Text.StringBuilder Append(System.Char* value, System.Int32 valueCount)
    // Offset: 0x163A2D8
    System::Text::StringBuilder* Append(::Il2CppChar* value, int valueCount);
    // private System.Void Insert(System.Int32 index, System.Char* value, System.Int32 valueCount)
    // Offset: 0x163AFB0
    void Insert(int index, ::Il2CppChar* value, int valueCount);
    // private System.Void ReplaceAllInChunk(System.Int32[] replacements, System.Int32 replacementsCount, System.Text.StringBuilder sourceChunk, System.Int32 removeCount, System.String value)
    // Offset: 0x163C150
    void ReplaceAllInChunk(::Array<int>* replacements, int replacementsCount, System::Text::StringBuilder* sourceChunk, int removeCount, ::Il2CppString* value);
    // private System.Boolean StartsWith(System.Text.StringBuilder chunk, System.Int32 indexInChunk, System.Int32 count, System.String value)
    // Offset: 0x163C068
    bool StartsWith(System::Text::StringBuilder* chunk, int indexInChunk, int count, ::Il2CppString* value);
    // private System.Void ReplaceInPlaceAtChunk(ref System.Text.StringBuilder chunk, ref System.Int32 indexInChunk, System.Char* value, System.Int32 count)
    // Offset: 0x163A97C
    void ReplaceInPlaceAtChunk(System::Text::StringBuilder*& chunk, int& indexInChunk, ::Il2CppChar* value, int count);
    // static private System.Void ThreadSafeCopy(System.Char* sourcePtr, System.Char[] destination, System.Int32 destinationIndex, System.Int32 count)
    // Offset: 0x1639320
    static void ThreadSafeCopy(::Il2CppChar* sourcePtr, ::Array<::Il2CppChar>* destination, int destinationIndex, int count);
    // static private System.Void ThreadSafeCopy(System.Char[] source, System.Int32 sourceIndex, System.Char[] destination, System.Int32 destinationIndex, System.Int32 count)
    // Offset: 0x163C360
    static void ThreadSafeCopy(::Array<::Il2CppChar>* source, int sourceIndex, ::Array<::Il2CppChar>* destination, int destinationIndex, int count);
    // private System.Text.StringBuilder FindChunkForIndex(System.Int32 index)
    // Offset: 0x1639F50
    System::Text::StringBuilder* FindChunkForIndex(int index);
    // private System.Text.StringBuilder Next(System.Text.StringBuilder chunk)
    // Offset: 0x163C31C
    System::Text::StringBuilder* Next(System::Text::StringBuilder* chunk);
    // private System.Void ExpandByABlock(System.Int32 minBlockCharCount)
    // Offset: 0x1639F78
    void ExpandByABlock(int minBlockCharCount);
    // private System.Void .ctor(System.Text.StringBuilder from)
    // Offset: 0x163C480
    static StringBuilder* New_ctor(System::Text::StringBuilder* from);
    // private System.Void MakeRoom(System.Int32 index, System.Int32 count, out System.Text.StringBuilder chunk, out System.Int32 indexInChunk, System.Boolean doneMoveFollowingChars)
    // Offset: 0x163A668
    void MakeRoom(int index, int count, System::Text::StringBuilder*& chunk, int& indexInChunk, bool doneMoveFollowingChars);
    // private System.Void .ctor(System.Int32 size, System.Int32 maxCapacity, System.Text.StringBuilder previousBlock)
    // Offset: 0x163C4E8
    static StringBuilder* New_ctor(int size, int maxCapacity, System::Text::StringBuilder* previousBlock);
    // private System.Void Remove(System.Int32 startIndex, System.Int32 count, out System.Text.StringBuilder chunk, out System.Int32 indexInChunk)
    // Offset: 0x163AAA0
    void Remove(int startIndex, int count, System::Text::StringBuilder*& chunk, int& indexInChunk);
    // public System.Void .ctor()
    // Offset: 0x162573C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static StringBuilder* New_ctor();
    // private System.Void System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x16396F4
    // Implemented from: System.Runtime.Serialization.ISerializable
    // Base method: System.Void ISerializable::GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    void System_Runtime_Serialization_ISerializable_GetObjectData(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context);
    // public override System.String ToString()
    // Offset: 0x1639A74
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
  }; // System.Text.StringBuilder
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Text::StringBuilder*, "System.Text", "StringBuilder");
#pragma pack(pop)
