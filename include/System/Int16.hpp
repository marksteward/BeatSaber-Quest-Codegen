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
  // Forward declaring type: NumberFormatInfo
  class NumberFormatInfo;
  // Forward declaring type: NumberStyles
  struct NumberStyles;
}
// Completed forward declares
// Type namespace: System
namespace System {
  // Size: 0x2
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.Int16
  // [ComVisibleAttribute] Offset: D7A8B4
  struct Int16/*, public System::ValueType, public System::IComparable, public System::IFormattable, public System::IConvertible, public System::IComparable_1<int16_t>, public System::IEquatable_1<int16_t>*/ {
    public:
    // System.Int16 m_value
    // Size: 0x2
    // Offset: 0x0
    int16_t m_value;
    // Field size check
    static_assert(sizeof(int16_t) == 0x2);
    // Creating value type constructor for type: Int16
    constexpr Int16(int16_t m_value_ = {}) noexcept : m_value{m_value_} {}
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
    // Creating interface conversion operator: operator System::IComparable_1<int16_t>
    operator System::IComparable_1<int16_t>() noexcept {
      return *reinterpret_cast<System::IComparable_1<int16_t>*>(this);
    }
    // Creating interface conversion operator: operator System::IEquatable_1<int16_t>
    operator System::IEquatable_1<int16_t>() noexcept {
      return *reinterpret_cast<System::IEquatable_1<int16_t>*>(this);
    }
    // Creating conversion operator: operator int16_t
    constexpr operator int16_t() const noexcept {
      return m_value;
    }
    // static field const value: static public System.Int16 MaxValue
    static constexpr const int16_t MaxValue = 32767;
    // Get static field: static public System.Int16 MaxValue
    static int16_t _get_MaxValue();
    // Set static field: static public System.Int16 MaxValue
    static void _set_MaxValue(int16_t value);
    // static field const value: static public System.Int16 MinValue
    static constexpr const int16_t MinValue = -32768;
    // Get static field: static public System.Int16 MinValue
    static int16_t _get_MinValue();
    // Set static field: static public System.Int16 MinValue
    static void _set_MinValue(int16_t value);
    // public System.Int32 CompareTo(System.Object value)
    // Offset: 0xEFE138
    int CompareTo(::Il2CppObject* value);
    // public System.Int32 CompareTo(System.Int16 value)
    // Offset: 0xEFE140
    int CompareTo(int16_t value);
    // public System.Boolean Equals(System.Int16 obj)
    // Offset: 0xEFE154
    bool Equals(int16_t obj);
    // public System.String ToString(System.IFormatProvider provider)
    // Offset: 0xEFE1A0
    ::Il2CppString* ToString(System::IFormatProvider* provider);
    // public System.String ToString(System.String format, System.IFormatProvider provider)
    // Offset: 0xEFE1D4
    ::Il2CppString* ToString(::Il2CppString* format, System::IFormatProvider* provider);
    // private System.String ToString(System.String format, System.Globalization.NumberFormatInfo info)
    // Offset: 0xEFE20C
    ::Il2CppString* ToString(::Il2CppString* format, System::Globalization::NumberFormatInfo* info);
    // static public System.Int16 Parse(System.String s, System.IFormatProvider provider)
    // Offset: 0x181DA38
    static int16_t Parse(::Il2CppString* s, System::IFormatProvider* provider);
    // static public System.Int16 Parse(System.String s, System.Globalization.NumberStyles style, System.IFormatProvider provider)
    // Offset: 0x181DBEC
    static int16_t Parse(::Il2CppString* s, System::Globalization::NumberStyles style, System::IFormatProvider* provider);
    // static private System.Int16 Parse(System.String s, System.Globalization.NumberStyles style, System.Globalization.NumberFormatInfo info)
    // Offset: 0x181DA6C
    static int16_t Parse(::Il2CppString* s, System::Globalization::NumberStyles style, System::Globalization::NumberFormatInfo* info);
    // public System.TypeCode GetTypeCode()
    // Offset: 0xEFE214
    System::TypeCode GetTypeCode();
    // private System.Boolean System.IConvertible.ToBoolean(System.IFormatProvider provider)
    // Offset: 0xEFE21C
    bool System_IConvertible_ToBoolean(System::IFormatProvider* provider);
    // private System.Char System.IConvertible.ToChar(System.IFormatProvider provider)
    // Offset: 0xEFE224
    ::Il2CppChar System_IConvertible_ToChar(System::IFormatProvider* provider);
    // private System.SByte System.IConvertible.ToSByte(System.IFormatProvider provider)
    // Offset: 0xEFE22C
    int8_t System_IConvertible_ToSByte(System::IFormatProvider* provider);
    // private System.Byte System.IConvertible.ToByte(System.IFormatProvider provider)
    // Offset: 0xEFE234
    uint8_t System_IConvertible_ToByte(System::IFormatProvider* provider);
    // private System.Int16 System.IConvertible.ToInt16(System.IFormatProvider provider)
    // Offset: 0xEFE23C
    int16_t System_IConvertible_ToInt16(System::IFormatProvider* provider);
    // private System.UInt16 System.IConvertible.ToUInt16(System.IFormatProvider provider)
    // Offset: 0xEFE244
    uint16_t System_IConvertible_ToUInt16(System::IFormatProvider* provider);
    // private System.Int32 System.IConvertible.ToInt32(System.IFormatProvider provider)
    // Offset: 0xEFE24C
    int System_IConvertible_ToInt32(System::IFormatProvider* provider);
    // private System.UInt32 System.IConvertible.ToUInt32(System.IFormatProvider provider)
    // Offset: 0xEFE254
    uint System_IConvertible_ToUInt32(System::IFormatProvider* provider);
    // private System.Int64 System.IConvertible.ToInt64(System.IFormatProvider provider)
    // Offset: 0xEFE25C
    int64_t System_IConvertible_ToInt64(System::IFormatProvider* provider);
    // private System.UInt64 System.IConvertible.ToUInt64(System.IFormatProvider provider)
    // Offset: 0xEFE264
    uint64_t System_IConvertible_ToUInt64(System::IFormatProvider* provider);
    // private System.Single System.IConvertible.ToSingle(System.IFormatProvider provider)
    // Offset: 0xEFE26C
    float System_IConvertible_ToSingle(System::IFormatProvider* provider);
    // private System.Double System.IConvertible.ToDouble(System.IFormatProvider provider)
    // Offset: 0xEFE274
    double System_IConvertible_ToDouble(System::IFormatProvider* provider);
    // private System.Decimal System.IConvertible.ToDecimal(System.IFormatProvider provider)
    // Offset: 0xEFE27C
    System::Decimal System_IConvertible_ToDecimal(System::IFormatProvider* provider);
    // private System.DateTime System.IConvertible.ToDateTime(System.IFormatProvider provider)
    // Offset: 0xEFE284
    System::DateTime System_IConvertible_ToDateTime(System::IFormatProvider* provider);
    // private System.Object System.IConvertible.ToType(System.Type type, System.IFormatProvider provider)
    // Offset: 0xEFE290
    ::Il2CppObject* System_IConvertible_ToType(System::Type* type, System::IFormatProvider* provider);
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0xEFE14C
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0xEFE164
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
    // public override System.String ToString()
    // Offset: 0xEFE170
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::Il2CppString* ToString();
  }; // System.Int16
  #pragma pack(pop)
  static check_size<sizeof(Int16), 0 + sizeof(int16_t)> __System_Int16SizeCheck;
  static_assert(sizeof(Int16) == 0x2);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Int16, "System", "Int16");
// Writing MetadataGetter for method: System::Int16::CompareTo
// Il2CppName: CompareTo
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Int16::CompareTo
// Il2CppName: CompareTo
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Int16::Equals
// Il2CppName: Equals
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Int16::ToString
// Il2CppName: ToString
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Int16::ToString
// Il2CppName: ToString
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Int16::ToString
// Il2CppName: ToString
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Int16::Parse
// Il2CppName: Parse
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Int16::Parse
// Il2CppName: Parse
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Int16::Parse
// Il2CppName: Parse
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Int16::GetTypeCode
// Il2CppName: GetTypeCode
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Int16::System_IConvertible_ToBoolean
// Il2CppName: System.IConvertible.ToBoolean
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Int16::System_IConvertible_ToChar
// Il2CppName: System.IConvertible.ToChar
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Int16::System_IConvertible_ToSByte
// Il2CppName: System.IConvertible.ToSByte
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Int16::System_IConvertible_ToByte
// Il2CppName: System.IConvertible.ToByte
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Int16::System_IConvertible_ToInt16
// Il2CppName: System.IConvertible.ToInt16
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Int16::System_IConvertible_ToUInt16
// Il2CppName: System.IConvertible.ToUInt16
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Int16::System_IConvertible_ToInt32
// Il2CppName: System.IConvertible.ToInt32
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Int16::System_IConvertible_ToUInt32
// Il2CppName: System.IConvertible.ToUInt32
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Int16::System_IConvertible_ToInt64
// Il2CppName: System.IConvertible.ToInt64
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Int16::System_IConvertible_ToUInt64
// Il2CppName: System.IConvertible.ToUInt64
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Int16::System_IConvertible_ToSingle
// Il2CppName: System.IConvertible.ToSingle
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Int16::System_IConvertible_ToDouble
// Il2CppName: System.IConvertible.ToDouble
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Int16::System_IConvertible_ToDecimal
// Il2CppName: System.IConvertible.ToDecimal
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Int16::System_IConvertible_ToDateTime
// Il2CppName: System.IConvertible.ToDateTime
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Int16::System_IConvertible_ToType
// Il2CppName: System.IConvertible.ToType
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Int16::Equals
// Il2CppName: Equals
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Int16::GetHashCode
// Il2CppName: GetHashCode
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Int16::ToString
// Il2CppName: ToString
// Cannot perform method pointer template specialization from operators!
