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
  // Forward declaring type: NumberFormatInfo
  class NumberFormatInfo;
}
// Completed forward declares
// Type namespace: System
namespace System {
  // Size: 0x2
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.UInt16
  // [] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: D37AA0
  // [CLSCompliantAttribute] Offset: D37AA0
  struct UInt16/*, public System::ValueType, public System::IComparable, public System::IFormattable, public System::IConvertible, public System::IComparable_1<uint16_t>, public System::IEquatable_1<uint16_t>*/ {
    public:
    // private System.UInt16 m_value
    // Size: 0x2
    // Offset: 0x0
    uint16_t m_value;
    // Field size check
    static_assert(sizeof(uint16_t) == 0x2);
    // Creating value type constructor for type: UInt16
    constexpr UInt16(uint16_t m_value_ = {}) noexcept : m_value{m_value_} {}
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
    // Creating interface conversion operator: operator System::IComparable_1<uint16_t>
    operator System::IComparable_1<uint16_t>() noexcept {
      return *reinterpret_cast<System::IComparable_1<uint16_t>*>(this);
    }
    // Creating interface conversion operator: operator System::IEquatable_1<uint16_t>
    operator System::IEquatable_1<uint16_t>() noexcept {
      return *reinterpret_cast<System::IEquatable_1<uint16_t>*>(this);
    }
    // Creating conversion operator: operator uint16_t
    constexpr operator uint16_t() const noexcept {
      return m_value;
    }
    // static field const value: static public System.UInt16 MaxValue
    static constexpr const uint16_t MaxValue = 65535u;
    // Get static field: static public System.UInt16 MaxValue
    static uint16_t _get_MaxValue();
    // Set static field: static public System.UInt16 MaxValue
    static void _set_MaxValue(uint16_t value);
    // static field const value: static public System.UInt16 MinValue
    static constexpr const uint16_t MinValue = 0u;
    // Get static field: static public System.UInt16 MinValue
    static uint16_t _get_MinValue();
    // Set static field: static public System.UInt16 MinValue
    static void _set_MinValue(uint16_t value);
    // public System.String ToString(System.String format)
    // Offset: 0xCA3C14
    ::Il2CppString* ToString(::Il2CppString* format);
    // static public System.UInt16 Parse(System.String s)
    // Offset: 0x165CC20
    static uint16_t Parse(::Il2CppString* s);
    // static public System.UInt16 Parse(System.String s, System.IFormatProvider provider)
    // Offset: 0x165CDC4
    static uint16_t Parse(::Il2CppString* s, System::IFormatProvider* provider);
    // static public System.UInt16 Parse(System.String s, System.Globalization.NumberStyles style, System.IFormatProvider provider)
    // Offset: 0x165CDF8
    static uint16_t Parse(::Il2CppString* s, System::Globalization::NumberStyles style, System::IFormatProvider* provider);
    // static private System.UInt16 Parse(System.String s, System.Globalization.NumberStyles style, System.Globalization.NumberFormatInfo info)
    // Offset: 0x165CC50
    static uint16_t Parse(::Il2CppString* s, System::Globalization::NumberStyles style, System::Globalization::NumberFormatInfo* info);
    // public System.Int32 CompareTo(System.Object value)
    // Offset: 0xCA3B74
    // Implemented from: System.IComparable
    // Base method: System.Int32 IComparable::CompareTo(System.Object value)
    int CompareTo(::Il2CppObject* value);
    // Creating proxy method: System_IComparable_CompareTo
    // Maps to method: CompareTo
    int System_IComparable_CompareTo(::Il2CppObject* value);
    // public System.Int32 CompareTo(System.UInt16 value)
    // Offset: 0xCA3B7C
    // Implemented from: System.IComparable`1
    // Base method: System.Int32 IComparable_1::CompareTo(System.UInt16 value)
    int CompareTo(uint16_t value);
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0xCA3B88
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public System.Boolean Equals(System.UInt16 obj)
    // Offset: 0xCA3B90
    // Implemented from: System.IEquatable`1
    // Base method: System.Boolean IEquatable_1::Equals(System.UInt16 obj)
    bool Equals(uint16_t obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0xCA3BA0
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
    // public override System.String ToString()
    // Offset: 0xCA3BA8
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::Il2CppString* ToString();
    // public System.String ToString(System.IFormatProvider provider)
    // Offset: 0xCA3BDC
    // Implemented from: System.IConvertible
    // Base method: System.String IConvertible::ToString(System.IFormatProvider provider)
    ::Il2CppString* ToString(System::IFormatProvider* provider);
    // public System.String ToString(System.String format, System.IFormatProvider provider)
    // Offset: 0xCA3C4C
    // Implemented from: System.IFormattable
    // Base method: System.String IFormattable::ToString(System.String format, System.IFormatProvider provider)
    ::Il2CppString* ToString(::Il2CppString* format, System::IFormatProvider* provider);
    // public System.TypeCode GetTypeCode()
    // Offset: 0xCA3C88
    // Implemented from: System.IConvertible
    // Base method: System.TypeCode IConvertible::GetTypeCode()
    System::TypeCode GetTypeCode();
    // private System.Boolean System.IConvertible.ToBoolean(System.IFormatProvider provider)
    // Offset: 0xCA3C90
    // Implemented from: System.IConvertible
    // Base method: System.Boolean IConvertible::ToBoolean(System.IFormatProvider provider)
    bool System_IConvertible_ToBoolean(System::IFormatProvider* provider);
    // private System.Char System.IConvertible.ToChar(System.IFormatProvider provider)
    // Offset: 0xCA3C98
    // Implemented from: System.IConvertible
    // Base method: System.Char IConvertible::ToChar(System.IFormatProvider provider)
    ::Il2CppChar System_IConvertible_ToChar(System::IFormatProvider* provider);
    // private System.SByte System.IConvertible.ToSByte(System.IFormatProvider provider)
    // Offset: 0xCA3CA0
    // Implemented from: System.IConvertible
    // Base method: System.SByte IConvertible::ToSByte(System.IFormatProvider provider)
    int8_t System_IConvertible_ToSByte(System::IFormatProvider* provider);
    // private System.Byte System.IConvertible.ToByte(System.IFormatProvider provider)
    // Offset: 0xCA3CA8
    // Implemented from: System.IConvertible
    // Base method: System.Byte IConvertible::ToByte(System.IFormatProvider provider)
    uint8_t System_IConvertible_ToByte(System::IFormatProvider* provider);
    // private System.Int16 System.IConvertible.ToInt16(System.IFormatProvider provider)
    // Offset: 0xCA3CB0
    // Implemented from: System.IConvertible
    // Base method: System.Int16 IConvertible::ToInt16(System.IFormatProvider provider)
    int16_t System_IConvertible_ToInt16(System::IFormatProvider* provider);
    // private System.UInt16 System.IConvertible.ToUInt16(System.IFormatProvider provider)
    // Offset: 0xCA3CB8
    // Implemented from: System.IConvertible
    // Base method: System.UInt16 IConvertible::ToUInt16(System.IFormatProvider provider)
    uint16_t System_IConvertible_ToUInt16(System::IFormatProvider* provider);
    // private System.Int32 System.IConvertible.ToInt32(System.IFormatProvider provider)
    // Offset: 0xCA3CC0
    // Implemented from: System.IConvertible
    // Base method: System.Int32 IConvertible::ToInt32(System.IFormatProvider provider)
    int System_IConvertible_ToInt32(System::IFormatProvider* provider);
    // private System.UInt32 System.IConvertible.ToUInt32(System.IFormatProvider provider)
    // Offset: 0xCA3CC8
    // Implemented from: System.IConvertible
    // Base method: System.UInt32 IConvertible::ToUInt32(System.IFormatProvider provider)
    uint System_IConvertible_ToUInt32(System::IFormatProvider* provider);
    // private System.Int64 System.IConvertible.ToInt64(System.IFormatProvider provider)
    // Offset: 0xCA3CD0
    // Implemented from: System.IConvertible
    // Base method: System.Int64 IConvertible::ToInt64(System.IFormatProvider provider)
    int64_t System_IConvertible_ToInt64(System::IFormatProvider* provider);
    // private System.UInt64 System.IConvertible.ToUInt64(System.IFormatProvider provider)
    // Offset: 0xCA3CD8
    // Implemented from: System.IConvertible
    // Base method: System.UInt64 IConvertible::ToUInt64(System.IFormatProvider provider)
    uint64_t System_IConvertible_ToUInt64(System::IFormatProvider* provider);
    // private System.Single System.IConvertible.ToSingle(System.IFormatProvider provider)
    // Offset: 0xCA3CE0
    // Implemented from: System.IConvertible
    // Base method: System.Single IConvertible::ToSingle(System.IFormatProvider provider)
    float System_IConvertible_ToSingle(System::IFormatProvider* provider);
    // private System.Double System.IConvertible.ToDouble(System.IFormatProvider provider)
    // Offset: 0xCA3CE8
    // Implemented from: System.IConvertible
    // Base method: System.Double IConvertible::ToDouble(System.IFormatProvider provider)
    double System_IConvertible_ToDouble(System::IFormatProvider* provider);
    // private System.Decimal System.IConvertible.ToDecimal(System.IFormatProvider provider)
    // Offset: 0xCA3CF0
    // Implemented from: System.IConvertible
    // Base method: System.Decimal IConvertible::ToDecimal(System.IFormatProvider provider)
    System::Decimal System_IConvertible_ToDecimal(System::IFormatProvider* provider);
    // private System.DateTime System.IConvertible.ToDateTime(System.IFormatProvider provider)
    // Offset: 0xCA3CF8
    // Implemented from: System.IConvertible
    // Base method: System.DateTime IConvertible::ToDateTime(System.IFormatProvider provider)
    System::DateTime System_IConvertible_ToDateTime(System::IFormatProvider* provider);
    // private System.Object System.IConvertible.ToType(System.Type type, System.IFormatProvider provider)
    // Offset: 0xCA3D04
    // Implemented from: System.IConvertible
    // Base method: System.Object IConvertible::ToType(System.Type type, System.IFormatProvider provider)
    ::Il2CppObject* System_IConvertible_ToType(System::Type* type, System::IFormatProvider* provider);
  }; // System.UInt16
  static check_size<sizeof(UInt16), 0 + sizeof(uint16_t)> __System_UInt16SizeCheck;
  static_assert(sizeof(UInt16) == 0x2);
}
#pragma pack(pop)
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::UInt16, "System", "UInt16");
