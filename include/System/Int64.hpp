// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IComparable
#include "System/IComparable.hpp"
// Including type: System.IFormattable
#include "System/IFormattable.hpp"
// Including type: System.IConvertible
#include "System/IConvertible.hpp"
// Including type: System.IComparable`1
#include "System/IComparable_1.hpp"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IFormatProvider
  class IFormatProvider;
  // Forward declaring type: TypeCode
  struct TypeCode;
  // Forward declaring type: Decimal
  struct Decimal;
  // Forward declaring type: DateTime
  struct DateTime;
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: System::Globalization
namespace System::Globalization {
  // Forward declaring type: NumberStyles
  struct NumberStyles;
}
// Completed forward declares
// Type namespace: System
namespace System {
  // Size: 0x8
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.Int64
  // [ComVisibleAttribute] Offset: D7A8DC
  struct Int64/*, public System::ValueType, public System::IComparable, public System::IFormattable, public System::IConvertible, public System::IComparable_1<int64_t>, public System::IEquatable_1<int64_t>*/ {
    public:
    // System.Int64 m_value
    // Size: 0x8
    // Offset: 0x0
    int64_t m_value;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // Creating value type constructor for type: Int64
    constexpr Int64(int64_t m_value_ = {}) noexcept : m_value{m_value_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator System::IComparable
    operator System::IComparable() noexcept {
      return *reinterpret_cast<System::IComparable*>(this);
    }
    // Creating interface conversion operator: operator System::IFormattable
    operator System::IFormattable() noexcept {
      return *reinterpret_cast<System::IFormattable*>(this);
    }
    // Creating interface conversion operator: operator System::IConvertible
    operator System::IConvertible() noexcept {
      return *reinterpret_cast<System::IConvertible*>(this);
    }
    // Creating interface conversion operator: operator System::IComparable_1<int64_t>
    operator System::IComparable_1<int64_t>() noexcept {
      return *reinterpret_cast<System::IComparable_1<int64_t>*>(this);
    }
    // Creating interface conversion operator: operator System::IEquatable_1<int64_t>
    operator System::IEquatable_1<int64_t>() noexcept {
      return *reinterpret_cast<System::IEquatable_1<int64_t>*>(this);
    }
    // Creating conversion operator: operator int64_t
    constexpr operator int64_t() const noexcept {
      return m_value;
    }
    // static field const value: static public System.Int64 MaxValue
    static constexpr const int64_t MaxValue = 9223372036854775807;
    // Get static field: static public System.Int64 MaxValue
    static int64_t _get_MaxValue();
    // Set static field: static public System.Int64 MaxValue
    static void _set_MaxValue(int64_t value);
    // static field const value: static public System.Int64 MinValue
    static constexpr const int64_t MinValue = -9223372036854775807 - 1;
    // Get static field: static public System.Int64 MinValue
    static int64_t _get_MinValue();
    // Set static field: static public System.Int64 MinValue
    static void _set_MinValue(int64_t value);
    // public System.Int32 CompareTo(System.Object value)
    // Offset: 0xEFE428
    int CompareTo(::Il2CppObject* value);
    // public System.Int32 CompareTo(System.Int64 value)
    // Offset: 0xEFE430
    int CompareTo(int64_t value);
    // public System.Boolean Equals(System.Int64 obj)
    // Offset: 0xEFE44C
    bool Equals(int64_t obj);
    // public System.String ToString(System.IFormatProvider provider)
    // Offset: 0xEFE498
    ::Il2CppString* ToString(System::IFormatProvider* provider);
    // public System.String ToString(System.String format)
    // Offset: 0xEFE4CC
    ::Il2CppString* ToString(::Il2CppString* format);
    // public System.String ToString(System.String format, System.IFormatProvider provider)
    // Offset: 0xEFE500
    ::Il2CppString* ToString(::Il2CppString* format, System::IFormatProvider* provider);
    // static public System.Int64 Parse(System.String s)
    // Offset: 0x181F370
    static int64_t Parse(::Il2CppString* s);
    // static public System.Int64 Parse(System.String s, System.IFormatProvider provider)
    // Offset: 0x181F50C
    static int64_t Parse(::Il2CppString* s, System::IFormatProvider* provider);
    // static public System.Int64 Parse(System.String s, System.Globalization.NumberStyles style, System.IFormatProvider provider)
    // Offset: 0x181F540
    static int64_t Parse(::Il2CppString* s, System::Globalization::NumberStyles style, System::IFormatProvider* provider);
    // static public System.Boolean TryParse(System.String s, out System.Int64 result)
    // Offset: 0x181F590
    static bool TryParse(::Il2CppString* s, int64_t& result);
    // static public System.Boolean TryParse(System.String s, System.Globalization.NumberStyles style, System.IFormatProvider provider, out System.Int64 result)
    // Offset: 0x181F6F8
    static bool TryParse(::Il2CppString* s, System::Globalization::NumberStyles style, System::IFormatProvider* provider, int64_t& result);
    // public System.TypeCode GetTypeCode()
    // Offset: 0xEFE538
    System::TypeCode GetTypeCode();
    // private System.Boolean System.IConvertible.ToBoolean(System.IFormatProvider provider)
    // Offset: 0xEFE540
    bool System_IConvertible_ToBoolean(System::IFormatProvider* provider);
    // private System.Char System.IConvertible.ToChar(System.IFormatProvider provider)
    // Offset: 0xEFE548
    ::Il2CppChar System_IConvertible_ToChar(System::IFormatProvider* provider);
    // private System.SByte System.IConvertible.ToSByte(System.IFormatProvider provider)
    // Offset: 0xEFE550
    int8_t System_IConvertible_ToSByte(System::IFormatProvider* provider);
    // private System.Byte System.IConvertible.ToByte(System.IFormatProvider provider)
    // Offset: 0xEFE558
    uint8_t System_IConvertible_ToByte(System::IFormatProvider* provider);
    // private System.Int16 System.IConvertible.ToInt16(System.IFormatProvider provider)
    // Offset: 0xEFE560
    int16_t System_IConvertible_ToInt16(System::IFormatProvider* provider);
    // private System.UInt16 System.IConvertible.ToUInt16(System.IFormatProvider provider)
    // Offset: 0xEFE568
    uint16_t System_IConvertible_ToUInt16(System::IFormatProvider* provider);
    // private System.Int32 System.IConvertible.ToInt32(System.IFormatProvider provider)
    // Offset: 0xEFE570
    int System_IConvertible_ToInt32(System::IFormatProvider* provider);
    // private System.UInt32 System.IConvertible.ToUInt32(System.IFormatProvider provider)
    // Offset: 0xEFE578
    uint System_IConvertible_ToUInt32(System::IFormatProvider* provider);
    // private System.Int64 System.IConvertible.ToInt64(System.IFormatProvider provider)
    // Offset: 0xEFE580
    int64_t System_IConvertible_ToInt64(System::IFormatProvider* provider);
    // private System.UInt64 System.IConvertible.ToUInt64(System.IFormatProvider provider)
    // Offset: 0xEFE588
    uint64_t System_IConvertible_ToUInt64(System::IFormatProvider* provider);
    // private System.Single System.IConvertible.ToSingle(System.IFormatProvider provider)
    // Offset: 0xEFE590
    float System_IConvertible_ToSingle(System::IFormatProvider* provider);
    // private System.Double System.IConvertible.ToDouble(System.IFormatProvider provider)
    // Offset: 0xEFE598
    double System_IConvertible_ToDouble(System::IFormatProvider* provider);
    // private System.Decimal System.IConvertible.ToDecimal(System.IFormatProvider provider)
    // Offset: 0xEFE5A0
    System::Decimal System_IConvertible_ToDecimal(System::IFormatProvider* provider);
    // private System.DateTime System.IConvertible.ToDateTime(System.IFormatProvider provider)
    // Offset: 0xEFE5A8
    System::DateTime System_IConvertible_ToDateTime(System::IFormatProvider* provider);
    // private System.Object System.IConvertible.ToType(System.Type type, System.IFormatProvider provider)
    // Offset: 0xEFE5B4
    ::Il2CppObject* System_IConvertible_ToType(System::Type* type, System::IFormatProvider* provider);
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0xEFE444
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0xEFE45C
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
    // public override System.String ToString()
    // Offset: 0xEFE468
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::Il2CppString* ToString();
  }; // System.Int64
  #pragma pack(pop)
  static check_size<sizeof(Int64), 0 + sizeof(int64_t)> __System_Int64SizeCheck;
  static_assert(sizeof(Int64) == 0x8);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Int64, "System", "Int64");
// Writing MetadataGetter for method: System::Int64::CompareTo
// Il2CppName: CompareTo
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Int64::CompareTo
// Il2CppName: CompareTo
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Int64::Equals
// Il2CppName: Equals
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Int64::ToString
// Il2CppName: ToString
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Int64::ToString
// Il2CppName: ToString
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Int64::ToString
// Il2CppName: ToString
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Int64::Parse
// Il2CppName: Parse
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Int64::Parse
// Il2CppName: Parse
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Int64::Parse
// Il2CppName: Parse
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Int64::TryParse
// Il2CppName: TryParse
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Int64::TryParse
// Il2CppName: TryParse
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Int64::GetTypeCode
// Il2CppName: GetTypeCode
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Int64::System_IConvertible_ToBoolean
// Il2CppName: System.IConvertible.ToBoolean
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Int64::System_IConvertible_ToChar
// Il2CppName: System.IConvertible.ToChar
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Int64::System_IConvertible_ToSByte
// Il2CppName: System.IConvertible.ToSByte
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Int64::System_IConvertible_ToByte
// Il2CppName: System.IConvertible.ToByte
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Int64::System_IConvertible_ToInt16
// Il2CppName: System.IConvertible.ToInt16
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Int64::System_IConvertible_ToUInt16
// Il2CppName: System.IConvertible.ToUInt16
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Int64::System_IConvertible_ToInt32
// Il2CppName: System.IConvertible.ToInt32
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Int64::System_IConvertible_ToUInt32
// Il2CppName: System.IConvertible.ToUInt32
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Int64::System_IConvertible_ToInt64
// Il2CppName: System.IConvertible.ToInt64
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Int64::System_IConvertible_ToUInt64
// Il2CppName: System.IConvertible.ToUInt64
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Int64::System_IConvertible_ToSingle
// Il2CppName: System.IConvertible.ToSingle
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Int64::System_IConvertible_ToDouble
// Il2CppName: System.IConvertible.ToDouble
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Int64::System_IConvertible_ToDecimal
// Il2CppName: System.IConvertible.ToDecimal
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Int64::System_IConvertible_ToDateTime
// Il2CppName: System.IConvertible.ToDateTime
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Int64::System_IConvertible_ToType
// Il2CppName: System.IConvertible.ToType
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Int64::Equals
// Il2CppName: Equals
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Int64::GetHashCode
// Il2CppName: GetHashCode
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Int64::ToString
// Il2CppName: ToString
// Cannot perform method pointer template specialization from operators!
