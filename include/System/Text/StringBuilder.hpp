// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include <initializer_list>
// Including type: System.Runtime.Serialization.ISerializable
#include "System/Runtime/Serialization/ISerializable.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
// Including type: System.Runtime.Serialization.StreamingContext
#include "System/Runtime/Serialization/StreamingContext.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
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
}
// Completed forward declares
// Type namespace: System.Text
namespace System::Text {
  // Size: 0x2C
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.Text.StringBuilder
  // [ComVisibleAttribute] Offset: CA5310
  // [DefaultMemberAttribute] Offset: CA5310
  class StringBuilder : public ::Il2CppObject/*, public System::Runtime::Serialization::ISerializable*/ {
    public:
    // System.Char[] m_ChunkChars
    // Size: 0x8
    // Offset: 0x10
    ::Array<::Il2CppChar>* m_ChunkChars;
    // Field size check
    static_assert(sizeof(::Array<::Il2CppChar>*) == 0x8);
    // System.Text.StringBuilder m_ChunkPrevious
    // Size: 0x8
    // Offset: 0x18
    System::Text::StringBuilder* m_ChunkPrevious;
    // Field size check
    static_assert(sizeof(System::Text::StringBuilder*) == 0x8);
    // System.Int32 m_ChunkLength
    // Size: 0x4
    // Offset: 0x20
    int m_ChunkLength;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Int32 m_ChunkOffset
    // Size: 0x4
    // Offset: 0x24
    int m_ChunkOffset;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Int32 m_MaxCapacity
    // Size: 0x4
    // Offset: 0x28
    int m_MaxCapacity;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: StringBuilder
    StringBuilder(::Array<::Il2CppChar>* m_ChunkChars_ = {}, System::Text::StringBuilder* m_ChunkPrevious_ = {}, int m_ChunkLength_ = {}, int m_ChunkOffset_ = {}, int m_MaxCapacity_ = {}) noexcept : m_ChunkChars{m_ChunkChars_}, m_ChunkPrevious{m_ChunkPrevious_}, m_ChunkLength{m_ChunkLength_}, m_ChunkOffset{m_ChunkOffset_}, m_MaxCapacity{m_MaxCapacity_} {}
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
    // Offset: 0x1B2B054
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static StringBuilder* New_ctor(int capacity) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Text::StringBuilder::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<StringBuilder*, creationType>(capacity)));
    }
    // public System.Void .ctor(System.String value)
    // Offset: 0x1B2C850
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static StringBuilder* New_ctor(::Il2CppString* value) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Text::StringBuilder::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<StringBuilder*, creationType>(value)));
    }
    // public System.Void .ctor(System.String value, System.Int32 capacity)
    // Offset: 0x1B2C824
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static StringBuilder* New_ctor(::Il2CppString* value, int capacity) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Text::StringBuilder::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<StringBuilder*, creationType>(value, capacity)));
    }
    // public System.Void .ctor(System.String value, System.Int32 startIndex, System.Int32 length, System.Int32 capacity)
    // Offset: 0x1B2C858
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static StringBuilder* New_ctor(::Il2CppString* value, int startIndex, int length, int capacity) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Text::StringBuilder::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<StringBuilder*, creationType>(value, startIndex, length, capacity)));
    }
    // private System.Void .ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x1B2CBC4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static StringBuilder* New_ctor(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Text::StringBuilder::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<StringBuilder*, creationType>(info, context)));
    }
    // private System.Void System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x1B2CE68
    void System_Runtime_Serialization_ISerializable_GetObjectData(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context);
    // public System.Int32 get_Capacity()
    // Offset: 0x1B2CF84
    int get_Capacity();
    // public System.Void set_Capacity(System.Int32 value)
    // Offset: 0x1B2CFA8
    void set_Capacity(int value);
    // public System.Int32 get_MaxCapacity()
    // Offset: 0x1B2D0D8
    int get_MaxCapacity();
    // public System.Int32 EnsureCapacity(System.Int32 capacity)
    // Offset: 0x1B2D0E0
    int EnsureCapacity(int capacity);
    // public System.String ToString(System.Int32 startIndex, System.Int32 length)
    // Offset: 0x1B2D318
    ::Il2CppString* ToString(int startIndex, int length);
    // public System.Text.StringBuilder Clear()
    // Offset: 0x1B2D558
    System::Text::StringBuilder* Clear();
    // public System.Int32 get_Length()
    // Offset: 0x1B2B6B4
    int get_Length();
    // public System.Void set_Length(System.Int32 value)
    // Offset: 0x1B2D580
    void set_Length(int value);
    // public System.Char get_Chars(System.Int32 index)
    // Offset: 0x1B2B398
    ::Il2CppChar get_Chars(int index);
    // public System.Void set_Chars(System.Int32 index, System.Char value)
    // Offset: 0x1B2B6FC
    void set_Chars(int index, ::Il2CppChar value);
    // public System.Text.StringBuilder Append(System.Char value, System.Int32 repeatCount)
    // Offset: 0x1B2D71C
    System::Text::StringBuilder* Append(::Il2CppChar value, int repeatCount);
    // public System.Text.StringBuilder Append(System.Char[] value, System.Int32 startIndex, System.Int32 charCount)
    // Offset: 0x1B2DA00
    System::Text::StringBuilder* Append(::Array<::Il2CppChar>* value, int startIndex, int charCount);
    // public System.Text.StringBuilder Append(System.String value)
    // Offset: 0x1B2B0BC
    System::Text::StringBuilder* Append(::Il2CppString* value);
    // private System.Void AppendHelper(System.String value)
    // Offset: 0x1B2DCE4
    void AppendHelper(::Il2CppString* value);
    // public System.Text.StringBuilder Append(System.String value, System.Int32 startIndex, System.Int32 count)
    // Offset: 0x1B2BD3C
    System::Text::StringBuilder* Append(::Il2CppString* value, int startIndex, int count);
    // public System.Text.StringBuilder AppendLine()
    // Offset: 0x1B2DD20
    System::Text::StringBuilder* AppendLine();
    // public System.Text.StringBuilder AppendLine(System.String value)
    // Offset: 0x1B2DD4C
    System::Text::StringBuilder* AppendLine(::Il2CppString* value);
    // public System.Text.StringBuilder Insert(System.Int32 index, System.String value, System.Int32 count)
    // Offset: 0x1B2DD7C
    System::Text::StringBuilder* Insert(int index, ::Il2CppString* value, int count);
    // public System.Text.StringBuilder Remove(System.Int32 startIndex, System.Int32 length)
    // Offset: 0x1B2B7F8
    System::Text::StringBuilder* Remove(int startIndex, int length);
    // public System.Text.StringBuilder Append(System.Boolean value)
    // Offset: 0x1B2E434
    System::Text::StringBuilder* Append(bool value);
    // public System.Text.StringBuilder Append(System.Byte value)
    // Offset: 0x1B2E470
    System::Text::StringBuilder* Append(uint8_t value);
    // public System.Text.StringBuilder Append(System.Char value)
    // Offset: 0x1B2C350
    System::Text::StringBuilder* Append(::Il2CppChar value);
    // public System.Text.StringBuilder Append(System.Int32 value)
    // Offset: 0x1B2E500
    System::Text::StringBuilder* Append(int value);
    // public System.Text.StringBuilder Append(System.Int64 value)
    // Offset: 0x1B2E590
    System::Text::StringBuilder* Append(int64_t value);
    // public System.Text.StringBuilder Append(System.Double value)
    // Offset: 0x1B2E620
    System::Text::StringBuilder* Append(double value);
    // public System.Text.StringBuilder Append(System.Object value)
    // Offset: 0x1B2E6B0
    System::Text::StringBuilder* Append(::Il2CppObject* value);
    // public System.Text.StringBuilder Insert(System.Int32 index, System.String value)
    // Offset: 0x1B2E6FC
    System::Text::StringBuilder* Insert(int index, ::Il2CppString* value);
    // public System.Text.StringBuilder Insert(System.Int32 index, System.Char value)
    // Offset: 0x1B2E8F0
    System::Text::StringBuilder* Insert(int index, ::Il2CppChar value);
    // public System.Text.StringBuilder AppendFormat(System.String format, System.Object arg0)
    // Offset: 0x1B2E920
    System::Text::StringBuilder* AppendFormat(::Il2CppString* format, ::Il2CppObject* arg0);
    // public System.Text.StringBuilder AppendFormat(System.String format, System.Object arg0, System.Object arg1)
    // Offset: 0x1B2F164
    System::Text::StringBuilder* AppendFormat(::Il2CppString* format, ::Il2CppObject* arg0, ::Il2CppObject* arg1);
    // public System.Text.StringBuilder AppendFormat(System.String format, System.Object arg0, System.Object arg1, System.Object arg2)
    // Offset: 0x1B2F1C4
    System::Text::StringBuilder* AppendFormat(::Il2CppString* format, ::Il2CppObject* arg0, ::Il2CppObject* arg1, ::Il2CppObject* arg2);
    // public System.Text.StringBuilder AppendFormat(System.String format, params System.Object[] args)
    // Offset: 0x1B2F228
    System::Text::StringBuilder* AppendFormat(::Il2CppString* format, ::Array<::Il2CppObject*>* args);
    // Creating initializer_list -> params proxy for: System.Text.StringBuilder AppendFormat(System.String format, params System.Object[] args)
    System::Text::StringBuilder* AppendFormat(::Il2CppString* format, std::initializer_list<::Il2CppObject*> args);
    // Creating TArgs -> initializer_list proxy for: System.Text.StringBuilder AppendFormat(System.String format, params System.Object[] args)
    template<class ...TParams>
    System::Text::StringBuilder* AppendFormat(::Il2CppString* format, TParams&&... args) {
      return AppendFormat(format, {args...});
    }
    // public System.Text.StringBuilder AppendFormat(System.IFormatProvider provider, System.String format, System.Object arg0)
    // Offset: 0x1B2F308
    System::Text::StringBuilder* AppendFormat(System::IFormatProvider* provider, ::Il2CppString* format, ::Il2CppObject* arg0);
    // public System.Text.StringBuilder AppendFormat(System.IFormatProvider provider, System.String format, System.Object arg0, System.Object arg1)
    // Offset: 0x1B2F370
    System::Text::StringBuilder* AppendFormat(System::IFormatProvider* provider, ::Il2CppString* format, ::Il2CppObject* arg0, ::Il2CppObject* arg1);
    // public System.Text.StringBuilder AppendFormat(System.IFormatProvider provider, System.String format, params System.Object[] args)
    // Offset: 0x1B2F3DC
    System::Text::StringBuilder* AppendFormat(System::IFormatProvider* provider, ::Il2CppString* format, ::Array<::Il2CppObject*>* args);
    // Creating initializer_list -> params proxy for: System.Text.StringBuilder AppendFormat(System.IFormatProvider provider, System.String format, params System.Object[] args)
    System::Text::StringBuilder* AppendFormat(System::IFormatProvider* provider, ::Il2CppString* format, std::initializer_list<::Il2CppObject*> args);
    // Creating TArgs -> initializer_list proxy for: System.Text.StringBuilder AppendFormat(System.IFormatProvider provider, System.String format, params System.Object[] args)
    template<class ...TParams>
    System::Text::StringBuilder* AppendFormat(System::IFormatProvider* provider, ::Il2CppString* format, TParams&&... args) {
      return AppendFormat(provider, format, {args...});
    }
    // static private System.Void FormatError()
    // Offset: 0x1B2F4C8
    static void FormatError();
    // System.Text.StringBuilder AppendFormatHelper(System.IFormatProvider provider, System.String format, System.ParamsArray args)
    // Offset: 0x1B2E97C
    System::Text::StringBuilder* AppendFormatHelper(System::IFormatProvider* provider, ::Il2CppString* format, System::ParamsArray args);
    // public System.Text.StringBuilder Replace(System.String oldValue, System.String newValue)
    // Offset: 0x1B2F548
    System::Text::StringBuilder* Replace(::Il2CppString* oldValue, ::Il2CppString* newValue);
    // public System.Text.StringBuilder Replace(System.String oldValue, System.String newValue, System.Int32 startIndex, System.Int32 count)
    // Offset: 0x1B2F558
    System::Text::StringBuilder* Replace(::Il2CppString* oldValue, ::Il2CppString* newValue, int startIndex, int count);
    // public System.Text.StringBuilder Append(System.Char* value, System.Int32 valueCount)
    // Offset: 0x1B2DBAC
    System::Text::StringBuilder* Append(::Il2CppChar* value, int valueCount);
    // private System.Void Insert(System.Int32 index, System.Char* value, System.Int32 valueCount)
    // Offset: 0x1B2E7DC
    void Insert(int index, ::Il2CppChar* value, int valueCount);
    // private System.Void ReplaceAllInChunk(System.Int32[] replacements, System.Int32 replacementsCount, System.Text.StringBuilder sourceChunk, System.Int32 removeCount, System.String value)
    // Offset: 0x1B2F97C
    void ReplaceAllInChunk(::Array<int>* replacements, int replacementsCount, System::Text::StringBuilder* sourceChunk, int removeCount, ::Il2CppString* value);
    // private System.Boolean StartsWith(System.Text.StringBuilder chunk, System.Int32 indexInChunk, System.Int32 count, System.String value)
    // Offset: 0x1B2F894
    bool StartsWith(System::Text::StringBuilder* chunk, int indexInChunk, int count, ::Il2CppString* value);
    // private System.Void ReplaceInPlaceAtChunk(ref System.Text.StringBuilder chunk, ref System.Int32 indexInChunk, System.Char* value, System.Int32 count)
    // Offset: 0x1B2E224
    void ReplaceInPlaceAtChunk(System::Text::StringBuilder*& chunk, int& indexInChunk, ::Il2CppChar* value, int count);
    // static private System.Void ThreadSafeCopy(System.Char* sourcePtr, System.Char[] destination, System.Int32 destinationIndex, System.Int32 count)
    // Offset: 0x1B2CAA8
    static void ThreadSafeCopy(::Il2CppChar* sourcePtr, ::Array<::Il2CppChar>* destination, int destinationIndex, int count);
    // static private System.Void ThreadSafeCopy(System.Char[] source, System.Int32 sourceIndex, System.Char[] destination, System.Int32 destinationIndex, System.Int32 count)
    // Offset: 0x1B2FB8C
    static void ThreadSafeCopy(::Array<::Il2CppChar>* source, int sourceIndex, ::Array<::Il2CppChar>* destination, int destinationIndex, int count);
    // private System.Text.StringBuilder FindChunkForIndex(System.Int32 index)
    // Offset: 0x1B2D844
    System::Text::StringBuilder* FindChunkForIndex(int index);
    // private System.Text.StringBuilder Next(System.Text.StringBuilder chunk)
    // Offset: 0x1B2FB48
    System::Text::StringBuilder* Next(System::Text::StringBuilder* chunk);
    // private System.Void ExpandByABlock(System.Int32 minBlockCharCount)
    // Offset: 0x1B2D86C
    void ExpandByABlock(int minBlockCharCount);
    // private System.Void .ctor(System.Text.StringBuilder from)
    // Offset: 0x1B2FCAC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static StringBuilder* New_ctor(System::Text::StringBuilder* from) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Text::StringBuilder::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<StringBuilder*, creationType>(from)));
    }
    // private System.Void MakeRoom(System.Int32 index, System.Int32 count, out System.Text.StringBuilder chunk, out System.Int32 indexInChunk, System.Boolean doneMoveFollowingChars)
    // Offset: 0x1B2DF3C
    void MakeRoom(int index, int count, System::Text::StringBuilder*& chunk, int& indexInChunk, bool doneMoveFollowingChars);
    // private System.Void .ctor(System.Int32 size, System.Int32 maxCapacity, System.Text.StringBuilder previousBlock)
    // Offset: 0x1B2FD04
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static StringBuilder* New_ctor(int size, int maxCapacity, System::Text::StringBuilder* previousBlock) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Text::StringBuilder::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<StringBuilder*, creationType>(size, maxCapacity, previousBlock)));
    }
    // private System.Void Remove(System.Int32 startIndex, System.Int32 count, out System.Text.StringBuilder chunk, out System.Int32 indexInChunk)
    // Offset: 0x1B2E33C
    void Remove(int startIndex, int count, System::Text::StringBuilder*& chunk, int& indexInChunk);
    // public System.Void .ctor()
    // Offset: 0x1B2C81C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static StringBuilder* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Text::StringBuilder::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<StringBuilder*, creationType>()));
    }
    // public override System.String ToString()
    // Offset: 0x1B2D1CC
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
  }; // System.Text.StringBuilder
  #pragma pack(pop)
  static check_size<sizeof(StringBuilder), 40 + sizeof(int)> __System_Text_StringBuilderSizeCheck;
  static_assert(sizeof(StringBuilder) == 0x2C);
}
DEFINE_IL2CPP_ARG_TYPE(System::Text::StringBuilder*, "System.Text", "StringBuilder");
