// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include <stdint.h>
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IComparable
#include "System/IComparable.hpp"
// Including type: System.IComparable`1
#include "System/IComparable_1.hpp"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
// Including type: System.IFormattable
#include "System/IFormattable.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IFormatProvider
  class IFormatProvider;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct Il2CppObject;
struct Il2CppString;
// Completed il2cpp-utils forward declares
// Type namespace: System
namespace System {
  // Size: 0x8
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.TimeSpan
  // [ComVisibleAttribute] Offset: CA4C30
  struct TimeSpan/*, public System::ValueType, public System::IComparable, public System::IComparable_1<System::TimeSpan>, public System::IEquatable_1<System::TimeSpan>, public System::IFormattable*/ {
    public:
    // System.Int64 _ticks
    // Size: 0x8
    // Offset: 0x0
    int64_t ticks;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // Creating value type constructor for type: TimeSpan
    constexpr TimeSpan(int64_t ticks_ = {}) noexcept : ticks{ticks_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator System::IComparable
    operator System::IComparable() noexcept {
      return *reinterpret_cast<System::IComparable*>(this);
    }
    // Creating interface conversion operator: operator System::IComparable_1<System::TimeSpan>
    operator System::IComparable_1<System::TimeSpan>() noexcept {
      return *reinterpret_cast<System::IComparable_1<System::TimeSpan>*>(this);
    }
    // Creating interface conversion operator: operator System::IEquatable_1<System::TimeSpan>
    operator System::IEquatable_1<System::TimeSpan>() noexcept {
      return *reinterpret_cast<System::IEquatable_1<System::TimeSpan>*>(this);
    }
    // Creating interface conversion operator: operator System::IFormattable
    operator System::IFormattable() noexcept {
      return *reinterpret_cast<System::IFormattable*>(this);
    }
    // Creating conversion operator: operator int64_t
    constexpr operator int64_t() const noexcept {
      return ticks;
    }
    // Get static field: static public readonly System.TimeSpan Zero
    static System::TimeSpan _get_Zero();
    // Set static field: static public readonly System.TimeSpan Zero
    static void _set_Zero(System::TimeSpan value);
    // Get static field: static public readonly System.TimeSpan MaxValue
    static System::TimeSpan _get_MaxValue();
    // Set static field: static public readonly System.TimeSpan MaxValue
    static void _set_MaxValue(System::TimeSpan value);
    // Get static field: static public readonly System.TimeSpan MinValue
    static System::TimeSpan _get_MinValue();
    // Set static field: static public readonly System.TimeSpan MinValue
    static void _set_MinValue(System::TimeSpan value);
    // Get static field: static private System.Boolean _legacyConfigChecked
    static bool _get__legacyConfigChecked();
    // Set static field: static private System.Boolean _legacyConfigChecked
    static void _set__legacyConfigChecked(bool value);
    // Get static field: static private System.Boolean _legacyMode
    static bool _get__legacyMode();
    // Set static field: static private System.Boolean _legacyMode
    static void _set__legacyMode(bool value);
    // public System.Void .ctor(System.Int64 ticks)
    // Offset: 0xE0B784
    // template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    // ABORTED: conflicts with another method.  TimeSpan(int64_t ticks)
    // public System.Void .ctor(System.Int32 hours, System.Int32 minutes, System.Int32 seconds)
    // Offset: 0xE0B78C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    TimeSpan(int hours, int minutes, int seconds) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::TimeSpan::.ctor");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(hours), ::il2cpp_utils::ExtractType(minutes), ::il2cpp_utils::ExtractType(seconds)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(*this, ___internal__method, hours, minutes, seconds);
    }
    // public System.Void .ctor(System.Int32 days, System.Int32 hours, System.Int32 minutes, System.Int32 seconds, System.Int32 milliseconds)
    // Offset: 0xE0B794
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    TimeSpan(int days, int hours, int minutes, int seconds, int milliseconds) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::TimeSpan::.ctor");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(days), ::il2cpp_utils::ExtractType(hours), ::il2cpp_utils::ExtractType(minutes), ::il2cpp_utils::ExtractType(seconds), ::il2cpp_utils::ExtractType(milliseconds)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(*this, ___internal__method, days, hours, minutes, seconds, milliseconds);
    }
    // public System.Int64 get_Ticks()
    // Offset: 0xE0B79C
    int64_t get_Ticks();
    // public System.Int32 get_Hours()
    // Offset: 0xE0B7A4
    int get_Hours();
    // public System.Int32 get_Minutes()
    // Offset: 0xE0B7EC
    int get_Minutes();
    // public System.Int32 get_Seconds()
    // Offset: 0xE0B834
    int get_Seconds();
    // public System.Double get_TotalHours()
    // Offset: 0xE0B880
    double get_TotalHours();
    // public System.Double get_TotalMilliseconds()
    // Offset: 0xE0B898
    double get_TotalMilliseconds();
    // public System.Double get_TotalMinutes()
    // Offset: 0xE0B8CC
    double get_TotalMinutes();
    // public System.Double get_TotalSeconds()
    // Offset: 0xE0B8E4
    double get_TotalSeconds();
    // public System.TimeSpan Add(System.TimeSpan ts)
    // Offset: 0xE0B8FC
    System::TimeSpan Add(System::TimeSpan ts);
    // public System.Int32 CompareTo(System.Object value)
    // Offset: 0xE0B904
    int CompareTo(::Il2CppObject* value);
    // public System.Int32 CompareTo(System.TimeSpan value)
    // Offset: 0xE0B90C
    int CompareTo(System::TimeSpan value);
    // static public System.TimeSpan FromDays(System.Double value)
    // Offset: 0x16EA088
    static System::TimeSpan FromDays(double value);
    // public System.TimeSpan Duration()
    // Offset: 0xE0B920
    System::TimeSpan Duration();
    // public System.Boolean Equals(System.TimeSpan obj)
    // Offset: 0xE0B930
    bool Equals(System::TimeSpan obj);
    // static public System.TimeSpan FromHours(System.Double value)
    // Offset: 0x16EA3D0
    static System::TimeSpan FromHours(double value);
    // static private System.TimeSpan Interval(System.Double value, System.Int32 scale)
    // Offset: 0x16EA0FC
    static System::TimeSpan Interval(double value, int scale);
    // static public System.TimeSpan FromMilliseconds(System.Double value)
    // Offset: 0x16EA444
    static System::TimeSpan FromMilliseconds(double value);
    // static public System.TimeSpan FromMinutes(System.Double value)
    // Offset: 0x16EA4B4
    static System::TimeSpan FromMinutes(double value);
    // public System.TimeSpan Negate()
    // Offset: 0xE0B94C
    System::TimeSpan Negate();
    // static public System.TimeSpan FromSeconds(System.Double value)
    // Offset: 0x16EA5FC
    static System::TimeSpan FromSeconds(double value);
    // public System.TimeSpan Subtract(System.TimeSpan ts)
    // Offset: 0xE0B954
    System::TimeSpan Subtract(System::TimeSpan ts);
    // static public System.TimeSpan FromTicks(System.Int64 value)
    // Offset: 0x16EA720
    static System::TimeSpan FromTicks(int64_t value);
    // static System.Int64 TimeToTicks(System.Int32 hour, System.Int32 minute, System.Int32 second)
    // Offset: 0x16E9CC8
    static int64_t TimeToTicks(int hour, int minute, int second);
    // public System.String ToString(System.String format)
    // Offset: 0xE0B964
    ::Il2CppString* ToString(::Il2CppString* format);
    // public System.String ToString(System.String format, System.IFormatProvider formatProvider)
    // Offset: 0xE0B96C
    ::Il2CppString* ToString(::Il2CppString* format, System::IFormatProvider* formatProvider);
    // static private System.Boolean GetLegacyFormatMode()
    // Offset: 0x16EAA88
    static bool GetLegacyFormatMode();
    // static private System.Boolean get_LegacyMode()
    // Offset: 0x16EA8EC
    static bool get_LegacyMode();
    // static private System.Void .cctor()
    // Offset: 0x16EAAD8
    static void _cctor();
    // public override System.Boolean Equals(System.Object value)
    // Offset: 0xE0B928
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object value)
    bool Equals(::Il2CppObject* value);
    // public override System.Int32 GetHashCode()
    // Offset: 0xE0B940
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
    // public override System.String ToString()
    // Offset: 0xE0B95C
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::Il2CppString* ToString();
  }; // System.TimeSpan
  #pragma pack(pop)
  static check_size<sizeof(TimeSpan), 0 + sizeof(int64_t)> __System_TimeSpanSizeCheck;
  static_assert(sizeof(TimeSpan) == 0x8);
  // static public System.TimeSpan op_Subtraction(System.TimeSpan t1, System.TimeSpan t2)
  // Offset: 0x16EA9F8
  System::TimeSpan operator-(const System::TimeSpan& t1, const System::TimeSpan& t2);
  // static public System.TimeSpan op_Addition(System.TimeSpan t1, System.TimeSpan t2)
  // Offset: 0x16EAA1C
  System::TimeSpan operator+(const System::TimeSpan& t1, const System::TimeSpan& t2);
  // static public System.Boolean op_Equality(System.TimeSpan t1, System.TimeSpan t2)
  // Offset: 0x16EAA40
  bool operator ==(const System::TimeSpan& t1, const System::TimeSpan& t2);
  // static public System.Boolean op_Inequality(System.TimeSpan t1, System.TimeSpan t2)
  // Offset: 0x16EAA4C
  bool operator !=(const System::TimeSpan& t1, const System::TimeSpan& t2);
  // static public System.Boolean op_LessThan(System.TimeSpan t1, System.TimeSpan t2)
  // Offset: 0x16EAA58
  bool operator <(const System::TimeSpan& t1, const System::TimeSpan& t2);
  // static public System.Boolean op_LessThanOrEqual(System.TimeSpan t1, System.TimeSpan t2)
  // Offset: 0x16EAA64
  bool operator <=(const System::TimeSpan& t1, const System::TimeSpan& t2);
  // static public System.Boolean op_GreaterThan(System.TimeSpan t1, System.TimeSpan t2)
  // Offset: 0x16EAA70
  bool operator >(const System::TimeSpan& t1, const System::TimeSpan& t2);
  // static public System.Boolean op_GreaterThanOrEqual(System.TimeSpan t1, System.TimeSpan t2)
  // Offset: 0x16EAA7C
  bool operator >=(const System::TimeSpan& t1, const System::TimeSpan& t2);
}
DEFINE_IL2CPP_ARG_TYPE(System::TimeSpan, "System", "TimeSpan");
