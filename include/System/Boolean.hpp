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
// Including type: System.IConvertible
#include "System/IConvertible.hpp"
// Including type: System.IComparable`1
#include "System/IComparable_1.hpp"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
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
  // Forward declaring type: TypeCode
  struct TypeCode;
  // Forward declaring type: Decimal
  struct Decimal;
  // Forward declaring type: DateTime
  struct DateTime;
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: System
namespace System {
  // Size: 0x1
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.Boolean
  // [ComVisibleAttribute] Offset: CA420C
  struct Boolean/*, public System::ValueType, public System::IComparable, public System::IConvertible, public System::IComparable_1<bool>, public System::IEquatable_1<bool>*/ {
    public:
    // private System.Boolean m_value
    // Size: 0x1
    // Offset: 0x0
    bool m_value;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: Boolean
    constexpr Boolean(bool m_value_ = {}) noexcept : m_value{m_value_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator System::IComparable
    operator System::IComparable() noexcept {
      return *reinterpret_cast<System::IComparable*>(this);
    }
    // Creating interface conversion operator: operator System::IConvertible
    operator System::IConvertible() noexcept {
      return *reinterpret_cast<System::IConvertible*>(this);
    }
    // Creating interface conversion operator: operator System::IComparable_1<bool>
    operator System::IComparable_1<bool>() noexcept {
      return *reinterpret_cast<System::IComparable_1<bool>*>(this);
    }
    // Creating interface conversion operator: operator System::IEquatable_1<bool>
    operator System::IEquatable_1<bool>() noexcept {
      return *reinterpret_cast<System::IEquatable_1<bool>*>(this);
    }
    // Creating conversion operator: operator bool
    constexpr operator bool() const noexcept {
      return m_value;
    }
    // static field const value: static System.Int32 True
    static constexpr const int True = 1;
    // Get static field: static System.Int32 True
    static int _get_True();
    // Set static field: static System.Int32 True
    static void _set_True(int value);
    // static field const value: static System.Int32 False
    static constexpr const int False = 0;
    // Get static field: static System.Int32 False
    static int _get_False();
    // Set static field: static System.Int32 False
    static void _set_False(int value);
    // static field const value: static System.String TrueLiteral
    static constexpr const char* TrueLiteral = "True";
    // Get static field: static System.String TrueLiteral
    static ::Il2CppString* _get_TrueLiteral();
    // Set static field: static System.String TrueLiteral
    static void _set_TrueLiteral(::Il2CppString* value);
    // static field const value: static System.String FalseLiteral
    static constexpr const char* FalseLiteral = "False";
    // Get static field: static System.String FalseLiteral
    static ::Il2CppString* _get_FalseLiteral();
    // Set static field: static System.String FalseLiteral
    static void _set_FalseLiteral(::Il2CppString* value);
    // Get static field: static public readonly System.String TrueString
    static ::Il2CppString* _get_TrueString();
    // Set static field: static public readonly System.String TrueString
    static void _set_TrueString(::Il2CppString* value);
    // Get static field: static public readonly System.String FalseString
    static ::Il2CppString* _get_FalseString();
    // Set static field: static public readonly System.String FalseString
    static void _set_FalseString(::Il2CppString* value);
    // public System.String ToString(System.IFormatProvider provider)
    // Offset: 0xE09ADC
    ::Il2CppString* ToString(System::IFormatProvider* provider);
    // public System.Boolean Equals(System.Boolean obj)
    // Offset: 0xE09B44
    bool Equals(bool obj);
    // public System.Int32 CompareTo(System.Object obj)
    // Offset: 0xE09B58
    int CompareTo(::Il2CppObject* obj);
    // public System.Int32 CompareTo(System.Boolean value)
    // Offset: 0xE09B60
    int CompareTo(bool value);
    // static public System.Boolean Parse(System.String value)
    // Offset: 0x1645B28
    static bool Parse(::Il2CppString* value);
    // static public System.Boolean TryParse(System.String value, out System.Boolean result)
    // Offset: 0x1645C38
    static bool TryParse(::Il2CppString* value, bool& result);
    // static private System.String TrimWhiteSpaceAndNull(System.String value)
    // Offset: 0x1645D5C
    static ::Il2CppString* TrimWhiteSpaceAndNull(::Il2CppString* value);
    // public System.TypeCode GetTypeCode()
    // Offset: 0xE09B80
    System::TypeCode GetTypeCode();
    // private System.Boolean System.IConvertible.ToBoolean(System.IFormatProvider provider)
    // Offset: 0xE09B88
    bool System_IConvertible_ToBoolean(System::IFormatProvider* provider);
    // private System.Char System.IConvertible.ToChar(System.IFormatProvider provider)
    // Offset: 0xE09B98
    ::Il2CppChar System_IConvertible_ToChar(System::IFormatProvider* provider);
    // private System.SByte System.IConvertible.ToSByte(System.IFormatProvider provider)
    // Offset: 0xE09BA4
    int8_t System_IConvertible_ToSByte(System::IFormatProvider* provider);
    // private System.Byte System.IConvertible.ToByte(System.IFormatProvider provider)
    // Offset: 0xE09BAC
    uint8_t System_IConvertible_ToByte(System::IFormatProvider* provider);
    // private System.Int16 System.IConvertible.ToInt16(System.IFormatProvider provider)
    // Offset: 0xE09BB4
    int16_t System_IConvertible_ToInt16(System::IFormatProvider* provider);
    // private System.UInt16 System.IConvertible.ToUInt16(System.IFormatProvider provider)
    // Offset: 0xE09BBC
    uint16_t System_IConvertible_ToUInt16(System::IFormatProvider* provider);
    // private System.Int32 System.IConvertible.ToInt32(System.IFormatProvider provider)
    // Offset: 0xE09BC4
    int System_IConvertible_ToInt32(System::IFormatProvider* provider);
    // private System.UInt32 System.IConvertible.ToUInt32(System.IFormatProvider provider)
    // Offset: 0xE09BCC
    uint System_IConvertible_ToUInt32(System::IFormatProvider* provider);
    // private System.Int64 System.IConvertible.ToInt64(System.IFormatProvider provider)
    // Offset: 0xE09BD4
    int64_t System_IConvertible_ToInt64(System::IFormatProvider* provider);
    // private System.UInt64 System.IConvertible.ToUInt64(System.IFormatProvider provider)
    // Offset: 0xE09BDC
    uint64_t System_IConvertible_ToUInt64(System::IFormatProvider* provider);
    // private System.Single System.IConvertible.ToSingle(System.IFormatProvider provider)
    // Offset: 0xE09BE4
    float System_IConvertible_ToSingle(System::IFormatProvider* provider);
    // private System.Double System.IConvertible.ToDouble(System.IFormatProvider provider)
    // Offset: 0xE09BEC
    double System_IConvertible_ToDouble(System::IFormatProvider* provider);
    // private System.Decimal System.IConvertible.ToDecimal(System.IFormatProvider provider)
    // Offset: 0xE09BF4
    System::Decimal System_IConvertible_ToDecimal(System::IFormatProvider* provider);
    // private System.DateTime System.IConvertible.ToDateTime(System.IFormatProvider provider)
    // Offset: 0xE09BFC
    System::DateTime System_IConvertible_ToDateTime(System::IFormatProvider* provider);
    // private System.Object System.IConvertible.ToType(System.Type type, System.IFormatProvider provider)
    // Offset: 0xE09C08
    ::Il2CppObject* System_IConvertible_ToType(System::Type* type, System::IFormatProvider* provider);
    // static private System.Void .cctor()
    // Offset: 0x16466F4
    static void _cctor();
    // public override System.Int32 GetHashCode()
    // Offset: 0xE09A6C
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
    // public override System.String ToString()
    // Offset: 0xE09A7C
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::Il2CppString* ToString();
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0xE09B3C
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
  }; // System.Boolean
  #pragma pack(pop)
  static check_size<sizeof(Boolean), 0 + sizeof(bool)> __System_BooleanSizeCheck;
  static_assert(sizeof(Boolean) == 0x1);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Boolean, "System", "Boolean");
