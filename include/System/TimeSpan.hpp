// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IComparable`1
#include "System/IComparable_1.hpp"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
// Including type: System.IComparable
#include "System/IComparable.hpp"
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
// Type namespace: System
namespace System {
  // Size: 0x8
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.TimeSpan
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: D68584
  struct TimeSpan/*, public System::ValueType, public System::IComparable_1<System::TimeSpan>, public System::IEquatable_1<System::TimeSpan>, public System::IComparable, public System::IFormattable*/ {
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
    // Creating interface conversion operator: operator System::IComparable_1<System::TimeSpan>
    operator System::IComparable_1<System::TimeSpan>() noexcept {
      return *reinterpret_cast<System::IComparable_1<System::TimeSpan>*>(this);
    }
    // Creating interface conversion operator: operator System::IEquatable_1<System::TimeSpan>
    operator System::IEquatable_1<System::TimeSpan>() noexcept {
      return *reinterpret_cast<System::IEquatable_1<System::TimeSpan>*>(this);
    }
    // Creating interface conversion operator: operator System::IComparable
    operator System::IComparable() noexcept {
      return *reinterpret_cast<System::IComparable*>(this);
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
    // public System.Int64 get_Ticks()
    // Offset: 0xEE9FB0
    int64_t get_Ticks();
    // public System.Int32 get_Hours()
    // Offset: 0xEE9FB8
    int get_Hours();
    // public System.Int32 get_Minutes()
    // Offset: 0xEEA000
    int get_Minutes();
    // public System.Int32 get_Seconds()
    // Offset: 0xEEA048
    int get_Seconds();
    // public System.Double get_TotalHours()
    // Offset: 0xEEA094
    double get_TotalHours();
    // public System.Double get_TotalMilliseconds()
    // Offset: 0xEEA0AC
    double get_TotalMilliseconds();
    // public System.Double get_TotalMinutes()
    // Offset: 0xEEA0E0
    double get_TotalMinutes();
    // public System.Double get_TotalSeconds()
    // Offset: 0xEEA0F8
    double get_TotalSeconds();
    // static private System.Boolean get_LegacyMode()
    // Offset: 0x1891BB8
    static bool get_LegacyMode();
    // public System.Void .ctor(System.Int64 ticks)
    // Offset: 0xEE9F98
    // template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    // ABORTED: conflicts with another method.  TimeSpan(int64_t ticks)
    // public System.Void .ctor(System.Int32 hours, System.Int32 minutes, System.Int32 seconds)
    // Offset: 0xEE9FA0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    TimeSpan(int hours, int minutes, int seconds) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::TimeSpan::.ctor");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(hours), ::il2cpp_utils::ExtractType(minutes), ::il2cpp_utils::ExtractType(seconds)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(*this, ___internal__method, hours, minutes, seconds);
    }
    // public System.Void .ctor(System.Int32 days, System.Int32 hours, System.Int32 minutes, System.Int32 seconds, System.Int32 milliseconds)
    // Offset: 0xEE9FA8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    TimeSpan(int days, int hours, int minutes, int seconds, int milliseconds) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::TimeSpan::.ctor");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(days), ::il2cpp_utils::ExtractType(hours), ::il2cpp_utils::ExtractType(minutes), ::il2cpp_utils::ExtractType(seconds), ::il2cpp_utils::ExtractType(milliseconds)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(*this, ___internal__method, days, hours, minutes, seconds, milliseconds);
    }
    // static private System.Void .cctor()
    // Offset: 0x1891DA4
    static void _cctor();
    // public System.TimeSpan Add(System.TimeSpan ts)
    // Offset: 0xEEA110
    System::TimeSpan Add(System::TimeSpan ts);
    // public System.Int32 CompareTo(System.Object value)
    // Offset: 0xEEA118
    int CompareTo(::Il2CppObject* value);
    // public System.Int32 CompareTo(System.TimeSpan value)
    // Offset: 0xEEA120
    int CompareTo(System::TimeSpan value);
    // static public System.TimeSpan FromDays(System.Double value)
    // Offset: 0x1891354
    static System::TimeSpan FromDays(double value);
    // public System.TimeSpan Duration()
    // Offset: 0xEEA134
    System::TimeSpan Duration();
    // public System.Boolean Equals(System.TimeSpan obj)
    // Offset: 0xEEA144
    bool Equals(System::TimeSpan obj);
    // static public System.TimeSpan FromHours(System.Double value)
    // Offset: 0x189169C
    static System::TimeSpan FromHours(double value);
    // static private System.TimeSpan Interval(System.Double value, System.Int32 scale)
    // Offset: 0x18913C8
    static System::TimeSpan Interval(double value, int scale);
    // static public System.TimeSpan FromMilliseconds(System.Double value)
    // Offset: 0x1891710
    static System::TimeSpan FromMilliseconds(double value);
    // static public System.TimeSpan FromMinutes(System.Double value)
    // Offset: 0x1891780
    static System::TimeSpan FromMinutes(double value);
    // public System.TimeSpan Negate()
    // Offset: 0xEEA160
    System::TimeSpan Negate();
    // static public System.TimeSpan FromSeconds(System.Double value)
    // Offset: 0x18918C8
    static System::TimeSpan FromSeconds(double value);
    // public System.TimeSpan Subtract(System.TimeSpan ts)
    // Offset: 0xEEA168
    System::TimeSpan Subtract(System::TimeSpan ts);
    // static public System.TimeSpan FromTicks(System.Int64 value)
    // Offset: 0x18919EC
    static System::TimeSpan FromTicks(int64_t value);
    // static System.Int64 TimeToTicks(System.Int32 hour, System.Int32 minute, System.Int32 second)
    // Offset: 0x1890F94
    static int64_t TimeToTicks(int hour, int minute, int second);
    // public System.String ToString(System.String format)
    // Offset: 0xEEA178
    ::Il2CppString* ToString(::Il2CppString* format);
    // public System.String ToString(System.String format, System.IFormatProvider formatProvider)
    // Offset: 0xEEA180
    ::Il2CppString* ToString(::Il2CppString* format, System::IFormatProvider* formatProvider);
    // static private System.Boolean GetLegacyFormatMode()
    // Offset: 0x1891D54
    static bool GetLegacyFormatMode();
    // public override System.Boolean Equals(System.Object value)
    // Offset: 0xEEA13C
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object value)
    bool Equals(::Il2CppObject* value);
    // public override System.Int32 GetHashCode()
    // Offset: 0xEEA154
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
    // public override System.String ToString()
    // Offset: 0xEEA170
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::Il2CppString* ToString();
  }; // System.TimeSpan
  #pragma pack(pop)
  static check_size<sizeof(TimeSpan), 0 + sizeof(int64_t)> __System_TimeSpanSizeCheck;
  static_assert(sizeof(TimeSpan) == 0x8);
  // static public System.TimeSpan op_Subtraction(System.TimeSpan t1, System.TimeSpan t2)
  // Offset: 0x1891CC4
  System::TimeSpan operator-(const System::TimeSpan& t1, const System::TimeSpan& t2);
  // static public System.TimeSpan op_Addition(System.TimeSpan t1, System.TimeSpan t2)
  // Offset: 0x1891CE8
  System::TimeSpan operator+(const System::TimeSpan& t1, const System::TimeSpan& t2);
  // static public System.Boolean op_Equality(System.TimeSpan t1, System.TimeSpan t2)
  // Offset: 0x1891D0C
  bool operator ==(const System::TimeSpan& t1, const System::TimeSpan& t2);
  // static public System.Boolean op_Inequality(System.TimeSpan t1, System.TimeSpan t2)
  // Offset: 0x1891D18
  bool operator !=(const System::TimeSpan& t1, const System::TimeSpan& t2);
  // static public System.Boolean op_LessThan(System.TimeSpan t1, System.TimeSpan t2)
  // Offset: 0x1891D24
  bool operator <(const System::TimeSpan& t1, const System::TimeSpan& t2);
  // static public System.Boolean op_LessThanOrEqual(System.TimeSpan t1, System.TimeSpan t2)
  // Offset: 0x1891D30
  bool operator <=(const System::TimeSpan& t1, const System::TimeSpan& t2);
  // static public System.Boolean op_GreaterThan(System.TimeSpan t1, System.TimeSpan t2)
  // Offset: 0x1891D3C
  bool operator >(const System::TimeSpan& t1, const System::TimeSpan& t2);
  // static public System.Boolean op_GreaterThanOrEqual(System.TimeSpan t1, System.TimeSpan t2)
  // Offset: 0x1891D48
  bool operator >=(const System::TimeSpan& t1, const System::TimeSpan& t2);
}
DEFINE_IL2CPP_ARG_TYPE(System::TimeSpan, "System", "TimeSpan");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::TimeSpan::get_Ticks
// Il2CppName: get_Ticks
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (System::TimeSpan::*)()>(&System::TimeSpan::get_Ticks)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::TimeSpan), "get_Ticks", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::TimeSpan::get_Hours
// Il2CppName: get_Hours
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::TimeSpan::*)()>(&System::TimeSpan::get_Hours)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::TimeSpan), "get_Hours", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::TimeSpan::get_Minutes
// Il2CppName: get_Minutes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::TimeSpan::*)()>(&System::TimeSpan::get_Minutes)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::TimeSpan), "get_Minutes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::TimeSpan::get_Seconds
// Il2CppName: get_Seconds
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::TimeSpan::*)()>(&System::TimeSpan::get_Seconds)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::TimeSpan), "get_Seconds", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::TimeSpan::get_TotalHours
// Il2CppName: get_TotalHours
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double (System::TimeSpan::*)()>(&System::TimeSpan::get_TotalHours)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::TimeSpan), "get_TotalHours", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::TimeSpan::get_TotalMilliseconds
// Il2CppName: get_TotalMilliseconds
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double (System::TimeSpan::*)()>(&System::TimeSpan::get_TotalMilliseconds)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::TimeSpan), "get_TotalMilliseconds", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::TimeSpan::get_TotalMinutes
// Il2CppName: get_TotalMinutes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double (System::TimeSpan::*)()>(&System::TimeSpan::get_TotalMinutes)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::TimeSpan), "get_TotalMinutes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::TimeSpan::get_TotalSeconds
// Il2CppName: get_TotalSeconds
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double (System::TimeSpan::*)()>(&System::TimeSpan::get_TotalSeconds)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::TimeSpan), "get_TotalSeconds", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::TimeSpan::get_LegacyMode
// Il2CppName: get_LegacyMode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&System::TimeSpan::get_LegacyMode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::TimeSpan), "get_LegacyMode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::TimeSpan::TimeSpan
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::TimeSpan::TimeSpan
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::TimeSpan::TimeSpan
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::TimeSpan::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::TimeSpan::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::TimeSpan), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::TimeSpan::Add
// Il2CppName: Add
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::TimeSpan (System::TimeSpan::*)(System::TimeSpan)>(&System::TimeSpan::Add)> {
  static const MethodInfo* get() {
    static auto* ts = &::il2cpp_utils::GetClassFromName("System", "TimeSpan")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::TimeSpan), "Add", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ts});
  }
};
// Writing MetadataGetter for method: System::TimeSpan::CompareTo
// Il2CppName: CompareTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::TimeSpan::*)(::Il2CppObject*)>(&System::TimeSpan::CompareTo)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::TimeSpan), "CompareTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::TimeSpan::CompareTo
// Il2CppName: CompareTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::TimeSpan::*)(System::TimeSpan)>(&System::TimeSpan::CompareTo)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "TimeSpan")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::TimeSpan), "CompareTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::TimeSpan::FromDays
// Il2CppName: FromDays
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::TimeSpan (*)(double)>(&System::TimeSpan::FromDays)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Double")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::TimeSpan), "FromDays", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::TimeSpan::Duration
// Il2CppName: Duration
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::TimeSpan (System::TimeSpan::*)()>(&System::TimeSpan::Duration)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::TimeSpan), "Duration", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::TimeSpan::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::TimeSpan::*)(System::TimeSpan)>(&System::TimeSpan::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "TimeSpan")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::TimeSpan), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: System::TimeSpan::FromHours
// Il2CppName: FromHours
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::TimeSpan (*)(double)>(&System::TimeSpan::FromHours)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Double")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::TimeSpan), "FromHours", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::TimeSpan::Interval
// Il2CppName: Interval
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::TimeSpan (*)(double, int)>(&System::TimeSpan::Interval)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Double")->byval_arg;
    static auto* scale = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::TimeSpan), "Interval", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value, scale});
  }
};
// Writing MetadataGetter for method: System::TimeSpan::FromMilliseconds
// Il2CppName: FromMilliseconds
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::TimeSpan (*)(double)>(&System::TimeSpan::FromMilliseconds)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Double")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::TimeSpan), "FromMilliseconds", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::TimeSpan::FromMinutes
// Il2CppName: FromMinutes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::TimeSpan (*)(double)>(&System::TimeSpan::FromMinutes)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Double")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::TimeSpan), "FromMinutes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::TimeSpan::Negate
// Il2CppName: Negate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::TimeSpan (System::TimeSpan::*)()>(&System::TimeSpan::Negate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::TimeSpan), "Negate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::TimeSpan::FromSeconds
// Il2CppName: FromSeconds
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::TimeSpan (*)(double)>(&System::TimeSpan::FromSeconds)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Double")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::TimeSpan), "FromSeconds", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::TimeSpan::Subtract
// Il2CppName: Subtract
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::TimeSpan (System::TimeSpan::*)(System::TimeSpan)>(&System::TimeSpan::Subtract)> {
  static const MethodInfo* get() {
    static auto* ts = &::il2cpp_utils::GetClassFromName("System", "TimeSpan")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::TimeSpan), "Subtract", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ts});
  }
};
// Writing MetadataGetter for method: System::TimeSpan::FromTicks
// Il2CppName: FromTicks
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::TimeSpan (*)(int64_t)>(&System::TimeSpan::FromTicks)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::TimeSpan), "FromTicks", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::TimeSpan::TimeToTicks
// Il2CppName: TimeToTicks
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (*)(int, int, int)>(&System::TimeSpan::TimeToTicks)> {
  static const MethodInfo* get() {
    static auto* hour = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* minute = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* second = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::TimeSpan), "TimeToTicks", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hour, minute, second});
  }
};
// Writing MetadataGetter for method: System::TimeSpan::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::TimeSpan::*)(::Il2CppString*)>(&System::TimeSpan::ToString)> {
  static const MethodInfo* get() {
    static auto* format = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::TimeSpan), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{format});
  }
};
// Writing MetadataGetter for method: System::TimeSpan::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::TimeSpan::*)(::Il2CppString*, System::IFormatProvider*)>(&System::TimeSpan::ToString)> {
  static const MethodInfo* get() {
    static auto* format = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* formatProvider = &::il2cpp_utils::GetClassFromName("System", "IFormatProvider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::TimeSpan), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{format, formatProvider});
  }
};
// Writing MetadataGetter for method: System::TimeSpan::GetLegacyFormatMode
// Il2CppName: GetLegacyFormatMode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&System::TimeSpan::GetLegacyFormatMode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::TimeSpan), "GetLegacyFormatMode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::TimeSpan::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::TimeSpan::*)(::Il2CppObject*)>(&System::TimeSpan::Equals)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::TimeSpan), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::TimeSpan::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::TimeSpan::*)()>(&System::TimeSpan::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::TimeSpan), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::TimeSpan::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::TimeSpan::*)()>(&System::TimeSpan::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::TimeSpan), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::TimeSpan::operator-
// Il2CppName: op_Subtraction
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::TimeSpan::operator+
// Il2CppName: op_Addition
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::TimeSpan::operator ==
// Il2CppName: op_Equality
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::TimeSpan::operator !=
// Il2CppName: op_Inequality
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::TimeSpan::operator <
// Il2CppName: op_LessThan
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::TimeSpan::operator <=
// Il2CppName: op_LessThanOrEqual
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::TimeSpan::operator >
// Il2CppName: op_GreaterThan
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::TimeSpan::operator >=
// Il2CppName: op_GreaterThanOrEqual
// Cannot perform method pointer template specialization from operators!
