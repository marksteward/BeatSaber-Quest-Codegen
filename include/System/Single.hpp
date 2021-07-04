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
  // Size: 0x4
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.Single
  // [ComVisibleAttribute] Offset: D7AC9C
  struct Single/*, public System::ValueType, public System::IComparable, public System::IFormattable, public System::IConvertible, public System::IComparable_1<float>, public System::IEquatable_1<float>*/ {
    public:
    // System.Single m_value
    // Size: 0x4
    // Offset: 0x0
    float m_value;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Creating value type constructor for type: Single
    constexpr Single(float m_value_ = {}) noexcept : m_value{m_value_} {}
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
    // Creating interface conversion operator: operator System::IComparable_1<float>
    operator System::IComparable_1<float>() noexcept {
      return *reinterpret_cast<System::IComparable_1<float>*>(this);
    }
    // Creating interface conversion operator: operator System::IEquatable_1<float>
    operator System::IEquatable_1<float>() noexcept {
      return *reinterpret_cast<System::IEquatable_1<float>*>(this);
    }
    // Creating conversion operator: operator float
    constexpr operator float() const noexcept {
      return m_value;
    }
    // static field const value: static public System.Single MinValue
    static constexpr const float MinValue = -3.4028235e+38;
    // Get static field: static public System.Single MinValue
    static float _get_MinValue();
    // Set static field: static public System.Single MinValue
    static void _set_MinValue(float value);
    // static field const value: static public System.Single Epsilon
    static constexpr const float Epsilon = 1e-45;
    // Get static field: static public System.Single Epsilon
    static float _get_Epsilon();
    // Set static field: static public System.Single Epsilon
    static void _set_Epsilon(float value);
    // static field const value: static public System.Single MaxValue
    static constexpr const float MaxValue = 3.4028235e+38;
    // Get static field: static public System.Single MaxValue
    static float _get_MaxValue();
    // Set static field: static public System.Single MaxValue
    static void _set_MaxValue(float value);
    // Get static field: static public System.Single PositiveInfinity
    static float _get_PositiveInfinity();
    // Set static field: static public System.Single PositiveInfinity
    static void _set_PositiveInfinity(float value);
    // Get static field: static public System.Single NegativeInfinity
    static float _get_NegativeInfinity();
    // Set static field: static public System.Single NegativeInfinity
    static void _set_NegativeInfinity(float value);
    // Get static field: static public System.Single NaN
    static float _get_NaN();
    // Set static field: static public System.Single NaN
    static void _set_NaN(float value);
    // static public System.Boolean IsInfinity(System.Single f)
    // Offset: 0x1B50A70
    static bool IsInfinity(float f);
    // static public System.Boolean IsPositiveInfinity(System.Single f)
    // Offset: 0x1B50A88
    static bool IsPositiveInfinity(float f);
    // static public System.Boolean IsNegativeInfinity(System.Single f)
    // Offset: 0x1B50A9C
    static bool IsNegativeInfinity(float f);
    // static public System.Boolean IsNaN(System.Single f)
    // Offset: 0x1B50AAC
    static bool IsNaN(float f);
    // public System.Int32 CompareTo(System.Object value)
    // Offset: 0xF06FC8
    int CompareTo(::Il2CppObject* value);
    // public System.Int32 CompareTo(System.Single value)
    // Offset: 0xF06FD0
    int CompareTo(float value);
    // public System.Boolean Equals(System.Single obj)
    // Offset: 0xF07034
    bool Equals(float obj);
    // public System.String ToString(System.IFormatProvider provider)
    // Offset: 0xF070C8
    ::Il2CppString* ToString(System::IFormatProvider* provider);
    // public System.String ToString(System.String format)
    // Offset: 0xF07100
    ::Il2CppString* ToString(::Il2CppString* format);
    // public System.String ToString(System.String format, System.IFormatProvider provider)
    // Offset: 0xF07140
    ::Il2CppString* ToString(::Il2CppString* format, System::IFormatProvider* provider);
    // static public System.Single Parse(System.String s)
    // Offset: 0x1B50E48
    static float Parse(::Il2CppString* s);
    // static public System.Single Parse(System.String s, System.IFormatProvider provider)
    // Offset: 0x1B50E84
    static float Parse(::Il2CppString* s, System::IFormatProvider* provider);
    // static public System.Single Parse(System.String s, System.Globalization.NumberStyles style, System.IFormatProvider provider)
    // Offset: 0x1B50EBC
    static float Parse(::Il2CppString* s, System::Globalization::NumberStyles style, System::IFormatProvider* provider);
    // static private System.Single Parse(System.String s, System.Globalization.NumberStyles style, System.Globalization.NumberFormatInfo info)
    // Offset: 0x1B50E7C
    static float Parse(::Il2CppString* s, System::Globalization::NumberStyles style, System::Globalization::NumberFormatInfo* info);
    // static public System.Boolean TryParse(System.String s, out System.Single result)
    // Offset: 0x1B50F10
    static bool TryParse(::Il2CppString* s, float& result);
    // static public System.Boolean TryParse(System.String s, System.Globalization.NumberStyles style, System.IFormatProvider provider, out System.Single result)
    // Offset: 0x1B51000
    static bool TryParse(::Il2CppString* s, System::Globalization::NumberStyles style, System::IFormatProvider* provider, float& result);
    // static private System.Boolean TryParse(System.String s, System.Globalization.NumberStyles style, System.Globalization.NumberFormatInfo info, out System.Single result)
    // Offset: 0x1B50F48
    static bool TryParse(::Il2CppString* s, System::Globalization::NumberStyles style, System::Globalization::NumberFormatInfo* info, float& result);
    // public System.TypeCode GetTypeCode()
    // Offset: 0xF07184
    System::TypeCode GetTypeCode();
    // private System.Boolean System.IConvertible.ToBoolean(System.IFormatProvider provider)
    // Offset: 0xF0718C
    bool System_IConvertible_ToBoolean(System::IFormatProvider* provider);
    // private System.Char System.IConvertible.ToChar(System.IFormatProvider provider)
    // Offset: 0xF07194
    ::Il2CppChar System_IConvertible_ToChar(System::IFormatProvider* provider);
    // private System.SByte System.IConvertible.ToSByte(System.IFormatProvider provider)
    // Offset: 0xF071A0
    int8_t System_IConvertible_ToSByte(System::IFormatProvider* provider);
    // private System.Byte System.IConvertible.ToByte(System.IFormatProvider provider)
    // Offset: 0xF071A8
    uint8_t System_IConvertible_ToByte(System::IFormatProvider* provider);
    // private System.Int16 System.IConvertible.ToInt16(System.IFormatProvider provider)
    // Offset: 0xF071B0
    int16_t System_IConvertible_ToInt16(System::IFormatProvider* provider);
    // private System.UInt16 System.IConvertible.ToUInt16(System.IFormatProvider provider)
    // Offset: 0xF071B8
    uint16_t System_IConvertible_ToUInt16(System::IFormatProvider* provider);
    // private System.Int32 System.IConvertible.ToInt32(System.IFormatProvider provider)
    // Offset: 0xF071C0
    int System_IConvertible_ToInt32(System::IFormatProvider* provider);
    // private System.UInt32 System.IConvertible.ToUInt32(System.IFormatProvider provider)
    // Offset: 0xF071C8
    uint System_IConvertible_ToUInt32(System::IFormatProvider* provider);
    // private System.Int64 System.IConvertible.ToInt64(System.IFormatProvider provider)
    // Offset: 0xF071D0
    int64_t System_IConvertible_ToInt64(System::IFormatProvider* provider);
    // private System.UInt64 System.IConvertible.ToUInt64(System.IFormatProvider provider)
    // Offset: 0xF071D8
    uint64_t System_IConvertible_ToUInt64(System::IFormatProvider* provider);
    // private System.Single System.IConvertible.ToSingle(System.IFormatProvider provider)
    // Offset: 0xF071E0
    float System_IConvertible_ToSingle(System::IFormatProvider* provider);
    // private System.Double System.IConvertible.ToDouble(System.IFormatProvider provider)
    // Offset: 0xF071E8
    double System_IConvertible_ToDouble(System::IFormatProvider* provider);
    // private System.Decimal System.IConvertible.ToDecimal(System.IFormatProvider provider)
    // Offset: 0xF071F0
    System::Decimal System_IConvertible_ToDecimal(System::IFormatProvider* provider);
    // private System.DateTime System.IConvertible.ToDateTime(System.IFormatProvider provider)
    // Offset: 0xF071F8
    System::DateTime System_IConvertible_ToDateTime(System::IFormatProvider* provider);
    // private System.Object System.IConvertible.ToType(System.Type type, System.IFormatProvider provider)
    // Offset: 0xF07204
    ::Il2CppObject* System_IConvertible_ToType(System::Type* type, System::IFormatProvider* provider);
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0xF0702C
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0xF07080
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
    // public override System.String ToString()
    // Offset: 0xF07094
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::Il2CppString* ToString();
  }; // System.Single
  #pragma pack(pop)
  static check_size<sizeof(Single), 0 + sizeof(float)> __System_SingleSizeCheck;
  static_assert(sizeof(Single) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Single, "System", "Single");
// Writing MetadataGetter for method: System::Single::IsInfinity
// Il2CppName: IsInfinity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(float)>(&System::Single::IsInfinity)> {
  const MethodInfo* get() {
    static auto* f = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Single), "IsInfinity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{f});
  }
};
// Writing MetadataGetter for method: System::Single::IsPositiveInfinity
// Il2CppName: IsPositiveInfinity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(float)>(&System::Single::IsPositiveInfinity)> {
  const MethodInfo* get() {
    static auto* f = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Single), "IsPositiveInfinity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{f});
  }
};
// Writing MetadataGetter for method: System::Single::IsNegativeInfinity
// Il2CppName: IsNegativeInfinity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(float)>(&System::Single::IsNegativeInfinity)> {
  const MethodInfo* get() {
    static auto* f = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Single), "IsNegativeInfinity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{f});
  }
};
// Writing MetadataGetter for method: System::Single::IsNaN
// Il2CppName: IsNaN
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(float)>(&System::Single::IsNaN)> {
  const MethodInfo* get() {
    static auto* f = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Single), "IsNaN", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{f});
  }
};
// Writing MetadataGetter for method: System::Single::CompareTo
// Il2CppName: CompareTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Single::*)(::Il2CppObject*)>(&System::Single::CompareTo)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Single), "CompareTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Single::CompareTo
// Il2CppName: CompareTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Single::*)(float)>(&System::Single::CompareTo)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Single), "CompareTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Single::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Single::*)(float)>(&System::Single::Equals)> {
  const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Single), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: System::Single::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Single::*)(System::IFormatProvider*)>(&System::Single::ToString)> {
  const MethodInfo* get() {
    static auto* provider = &::il2cpp_utils::GetClassFromName("System", "IFormatProvider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Single), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{provider});
  }
};
// Writing MetadataGetter for method: System::Single::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Single::*)(::Il2CppString*)>(&System::Single::ToString)> {
  const MethodInfo* get() {
    static auto* format = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Single), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{format});
  }
};
// Writing MetadataGetter for method: System::Single::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Single::*)(::Il2CppString*, System::IFormatProvider*)>(&System::Single::ToString)> {
  const MethodInfo* get() {
    static auto* format = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* provider = &::il2cpp_utils::GetClassFromName("System", "IFormatProvider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Single), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{format, provider});
  }
};
// Writing MetadataGetter for method: System::Single::Parse
// Il2CppName: Parse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(::Il2CppString*)>(&System::Single::Parse)> {
  const MethodInfo* get() {
    static auto* s = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Single), "Parse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{s});
  }
};
// Writing MetadataGetter for method: System::Single::Parse
// Il2CppName: Parse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(::Il2CppString*, System::IFormatProvider*)>(&System::Single::Parse)> {
  const MethodInfo* get() {
    static auto* s = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* provider = &::il2cpp_utils::GetClassFromName("System", "IFormatProvider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Single), "Parse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{s, provider});
  }
};
// Writing MetadataGetter for method: System::Single::Parse
// Il2CppName: Parse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(::Il2CppString*, System::Globalization::NumberStyles, System::IFormatProvider*)>(&System::Single::Parse)> {
  const MethodInfo* get() {
    static auto* s = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* style = &::il2cpp_utils::GetClassFromName("System.Globalization", "NumberStyles")->byval_arg;
    static auto* provider = &::il2cpp_utils::GetClassFromName("System", "IFormatProvider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Single), "Parse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{s, style, provider});
  }
};
// Writing MetadataGetter for method: System::Single::Parse
// Il2CppName: Parse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(::Il2CppString*, System::Globalization::NumberStyles, System::Globalization::NumberFormatInfo*)>(&System::Single::Parse)> {
  const MethodInfo* get() {
    static auto* s = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* style = &::il2cpp_utils::GetClassFromName("System.Globalization", "NumberStyles")->byval_arg;
    static auto* info = &::il2cpp_utils::GetClassFromName("System.Globalization", "NumberFormatInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Single), "Parse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{s, style, info});
  }
};
// Writing MetadataGetter for method: System::Single::TryParse
// Il2CppName: TryParse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Il2CppString*, float&)>(&System::Single::TryParse)> {
  const MethodInfo* get() {
    static auto* s = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "Single")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Single), "TryParse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{s, result});
  }
};
// Writing MetadataGetter for method: System::Single::TryParse
// Il2CppName: TryParse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Il2CppString*, System::Globalization::NumberStyles, System::IFormatProvider*, float&)>(&System::Single::TryParse)> {
  const MethodInfo* get() {
    static auto* s = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* style = &::il2cpp_utils::GetClassFromName("System.Globalization", "NumberStyles")->byval_arg;
    static auto* provider = &::il2cpp_utils::GetClassFromName("System", "IFormatProvider")->byval_arg;
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "Single")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Single), "TryParse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{s, style, provider, result});
  }
};
// Writing MetadataGetter for method: System::Single::TryParse
// Il2CppName: TryParse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Il2CppString*, System::Globalization::NumberStyles, System::Globalization::NumberFormatInfo*, float&)>(&System::Single::TryParse)> {
  const MethodInfo* get() {
    static auto* s = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* style = &::il2cpp_utils::GetClassFromName("System.Globalization", "NumberStyles")->byval_arg;
    static auto* info = &::il2cpp_utils::GetClassFromName("System.Globalization", "NumberFormatInfo")->byval_arg;
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "Single")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Single), "TryParse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{s, style, info, result});
  }
};
// Writing MetadataGetter for method: System::Single::GetTypeCode
// Il2CppName: GetTypeCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::TypeCode (System::Single::*)()>(&System::Single::GetTypeCode)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Single), "GetTypeCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Single::System_IConvertible_ToBoolean
// Il2CppName: System.IConvertible.ToBoolean
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Single::*)(System::IFormatProvider*)>(&System::Single::System_IConvertible_ToBoolean)> {
  const MethodInfo* get() {
    static auto* provider = &::il2cpp_utils::GetClassFromName("System", "IFormatProvider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Single), "System.IConvertible.ToBoolean", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{provider});
  }
};
// Writing MetadataGetter for method: System::Single::System_IConvertible_ToChar
// Il2CppName: System.IConvertible.ToChar
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppChar (System::Single::*)(System::IFormatProvider*)>(&System::Single::System_IConvertible_ToChar)> {
  const MethodInfo* get() {
    static auto* provider = &::il2cpp_utils::GetClassFromName("System", "IFormatProvider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Single), "System.IConvertible.ToChar", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{provider});
  }
};
// Writing MetadataGetter for method: System::Single::System_IConvertible_ToSByte
// Il2CppName: System.IConvertible.ToSByte
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int8_t (System::Single::*)(System::IFormatProvider*)>(&System::Single::System_IConvertible_ToSByte)> {
  const MethodInfo* get() {
    static auto* provider = &::il2cpp_utils::GetClassFromName("System", "IFormatProvider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Single), "System.IConvertible.ToSByte", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{provider});
  }
};
// Writing MetadataGetter for method: System::Single::System_IConvertible_ToByte
// Il2CppName: System.IConvertible.ToByte
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t (System::Single::*)(System::IFormatProvider*)>(&System::Single::System_IConvertible_ToByte)> {
  const MethodInfo* get() {
    static auto* provider = &::il2cpp_utils::GetClassFromName("System", "IFormatProvider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Single), "System.IConvertible.ToByte", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{provider});
  }
};
// Writing MetadataGetter for method: System::Single::System_IConvertible_ToInt16
// Il2CppName: System.IConvertible.ToInt16
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int16_t (System::Single::*)(System::IFormatProvider*)>(&System::Single::System_IConvertible_ToInt16)> {
  const MethodInfo* get() {
    static auto* provider = &::il2cpp_utils::GetClassFromName("System", "IFormatProvider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Single), "System.IConvertible.ToInt16", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{provider});
  }
};
// Writing MetadataGetter for method: System::Single::System_IConvertible_ToUInt16
// Il2CppName: System.IConvertible.ToUInt16
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint16_t (System::Single::*)(System::IFormatProvider*)>(&System::Single::System_IConvertible_ToUInt16)> {
  const MethodInfo* get() {
    static auto* provider = &::il2cpp_utils::GetClassFromName("System", "IFormatProvider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Single), "System.IConvertible.ToUInt16", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{provider});
  }
};
// Writing MetadataGetter for method: System::Single::System_IConvertible_ToInt32
// Il2CppName: System.IConvertible.ToInt32
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Single::*)(System::IFormatProvider*)>(&System::Single::System_IConvertible_ToInt32)> {
  const MethodInfo* get() {
    static auto* provider = &::il2cpp_utils::GetClassFromName("System", "IFormatProvider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Single), "System.IConvertible.ToInt32", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{provider});
  }
};
// Writing MetadataGetter for method: System::Single::System_IConvertible_ToUInt32
// Il2CppName: System.IConvertible.ToUInt32
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (System::Single::*)(System::IFormatProvider*)>(&System::Single::System_IConvertible_ToUInt32)> {
  const MethodInfo* get() {
    static auto* provider = &::il2cpp_utils::GetClassFromName("System", "IFormatProvider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Single), "System.IConvertible.ToUInt32", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{provider});
  }
};
// Writing MetadataGetter for method: System::Single::System_IConvertible_ToInt64
// Il2CppName: System.IConvertible.ToInt64
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (System::Single::*)(System::IFormatProvider*)>(&System::Single::System_IConvertible_ToInt64)> {
  const MethodInfo* get() {
    static auto* provider = &::il2cpp_utils::GetClassFromName("System", "IFormatProvider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Single), "System.IConvertible.ToInt64", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{provider});
  }
};
// Writing MetadataGetter for method: System::Single::System_IConvertible_ToUInt64
// Il2CppName: System.IConvertible.ToUInt64
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (System::Single::*)(System::IFormatProvider*)>(&System::Single::System_IConvertible_ToUInt64)> {
  const MethodInfo* get() {
    static auto* provider = &::il2cpp_utils::GetClassFromName("System", "IFormatProvider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Single), "System.IConvertible.ToUInt64", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{provider});
  }
};
// Writing MetadataGetter for method: System::Single::System_IConvertible_ToSingle
// Il2CppName: System.IConvertible.ToSingle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (System::Single::*)(System::IFormatProvider*)>(&System::Single::System_IConvertible_ToSingle)> {
  const MethodInfo* get() {
    static auto* provider = &::il2cpp_utils::GetClassFromName("System", "IFormatProvider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Single), "System.IConvertible.ToSingle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{provider});
  }
};
// Writing MetadataGetter for method: System::Single::System_IConvertible_ToDouble
// Il2CppName: System.IConvertible.ToDouble
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double (System::Single::*)(System::IFormatProvider*)>(&System::Single::System_IConvertible_ToDouble)> {
  const MethodInfo* get() {
    static auto* provider = &::il2cpp_utils::GetClassFromName("System", "IFormatProvider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Single), "System.IConvertible.ToDouble", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{provider});
  }
};
// Writing MetadataGetter for method: System::Single::System_IConvertible_ToDecimal
// Il2CppName: System.IConvertible.ToDecimal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Decimal (System::Single::*)(System::IFormatProvider*)>(&System::Single::System_IConvertible_ToDecimal)> {
  const MethodInfo* get() {
    static auto* provider = &::il2cpp_utils::GetClassFromName("System", "IFormatProvider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Single), "System.IConvertible.ToDecimal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{provider});
  }
};
// Writing MetadataGetter for method: System::Single::System_IConvertible_ToDateTime
// Il2CppName: System.IConvertible.ToDateTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::DateTime (System::Single::*)(System::IFormatProvider*)>(&System::Single::System_IConvertible_ToDateTime)> {
  const MethodInfo* get() {
    static auto* provider = &::il2cpp_utils::GetClassFromName("System", "IFormatProvider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Single), "System.IConvertible.ToDateTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{provider});
  }
};
// Writing MetadataGetter for method: System::Single::System_IConvertible_ToType
// Il2CppName: System.IConvertible.ToType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Single::*)(System::Type*, System::IFormatProvider*)>(&System::Single::System_IConvertible_ToType)> {
  const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* provider = &::il2cpp_utils::GetClassFromName("System", "IFormatProvider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Single), "System.IConvertible.ToType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type, provider});
  }
};
// Writing MetadataGetter for method: System::Single::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Single::*)(::Il2CppObject*)>(&System::Single::Equals)> {
  const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Single), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: System::Single::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Single::*)()>(&System::Single::GetHashCode)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Single), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Single::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Single::*)()>(&System::Single::ToString)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Single), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
