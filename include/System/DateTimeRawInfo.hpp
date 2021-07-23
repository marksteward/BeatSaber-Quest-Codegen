// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.DateTimeParse/System.TM
#include "System/DateTimeParse_TM.hpp"
// Completed includes
// Type namespace: System
namespace System {
  // Size: 0x2A
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.DateTimeRawInfo
  // [TokenAttribute] Offset: FFFFFFFF
  struct DateTimeRawInfo/*, public System::ValueType*/ {
    public:
    // private System.Int32* num
    // Size: 0x8
    // Offset: 0x0
    int* num;
    // Field size check
    static_assert(sizeof(int*) == 0x8);
    // System.Int32 numCount
    // Size: 0x4
    // Offset: 0x8
    int numCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Int32 month
    // Size: 0x4
    // Offset: 0xC
    int month;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Int32 year
    // Size: 0x4
    // Offset: 0x10
    int year;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Int32 dayOfWeek
    // Size: 0x4
    // Offset: 0x14
    int dayOfWeek;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Int32 era
    // Size: 0x4
    // Offset: 0x18
    int era;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.DateTimeParse/System.TM timeMark
    // Size: 0x4
    // Offset: 0x1C
    System::DateTimeParse::TM timeMark;
    // Field size check
    static_assert(sizeof(System::DateTimeParse::TM) == 0x4);
    // System.Double fraction
    // Size: 0x8
    // Offset: 0x20
    double fraction;
    // Field size check
    static_assert(sizeof(double) == 0x8);
    // System.Boolean hasSameDateAndTimeSeparators
    // Size: 0x1
    // Offset: 0x28
    bool hasSameDateAndTimeSeparators;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // System.Boolean timeZone
    // Size: 0x1
    // Offset: 0x29
    bool timeZone;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: DateTimeRawInfo
    constexpr DateTimeRawInfo(int* num_ = {}, int numCount_ = {}, int month_ = {}, int year_ = {}, int dayOfWeek_ = {}, int era_ = {}, System::DateTimeParse::TM timeMark_ = {}, double fraction_ = {}, bool hasSameDateAndTimeSeparators_ = {}, bool timeZone_ = {}) noexcept : num{num_}, numCount{numCount_}, month{month_}, year{year_}, dayOfWeek{dayOfWeek_}, era{era_}, timeMark{timeMark_}, fraction{fraction_}, hasSameDateAndTimeSeparators{hasSameDateAndTimeSeparators_}, timeZone{timeZone_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Get instance field: private System.Int32* num
    int* _get_num();
    // Set instance field: private System.Int32* num
    void _set_num(int* value);
    // Get instance field: System.Int32 numCount
    int _get_numCount();
    // Set instance field: System.Int32 numCount
    void _set_numCount(int value);
    // Get instance field: System.Int32 month
    int _get_month();
    // Set instance field: System.Int32 month
    void _set_month(int value);
    // Get instance field: System.Int32 year
    int _get_year();
    // Set instance field: System.Int32 year
    void _set_year(int value);
    // Get instance field: System.Int32 dayOfWeek
    int _get_dayOfWeek();
    // Set instance field: System.Int32 dayOfWeek
    void _set_dayOfWeek(int value);
    // Get instance field: System.Int32 era
    int _get_era();
    // Set instance field: System.Int32 era
    void _set_era(int value);
    // Get instance field: System.DateTimeParse/System.TM timeMark
    System::DateTimeParse::TM _get_timeMark();
    // Set instance field: System.DateTimeParse/System.TM timeMark
    void _set_timeMark(System::DateTimeParse::TM value);
    // Get instance field: System.Double fraction
    double _get_fraction();
    // Set instance field: System.Double fraction
    void _set_fraction(double value);
    // Get instance field: System.Boolean hasSameDateAndTimeSeparators
    bool _get_hasSameDateAndTimeSeparators();
    // Set instance field: System.Boolean hasSameDateAndTimeSeparators
    void _set_hasSameDateAndTimeSeparators(bool value);
    // Get instance field: System.Boolean timeZone
    bool _get_timeZone();
    // Set instance field: System.Boolean timeZone
    void _set_timeZone(bool value);
    // System.Void Init(System.Int32* numberBuffer)
    // Offset: 0xEEF158
    void Init(int* numberBuffer);
    // System.Void AddNumber(System.Int32 value)
    // Offset: 0xEEF17C
    void AddNumber(int value);
    // System.Int32 GetNumber(System.Int32 index)
    // Offset: 0xEEF194
    int GetNumber(int index);
  }; // System.DateTimeRawInfo
  #pragma pack(pop)
  static check_size<sizeof(DateTimeRawInfo), 41 + sizeof(bool)> __System_DateTimeRawInfoSizeCheck;
  static_assert(sizeof(DateTimeRawInfo) == 0x2A);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::DateTimeRawInfo, "System", "DateTimeRawInfo");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::DateTimeRawInfo::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::DateTimeRawInfo::*)(int*)>(&System::DateTimeRawInfo::Init)> {
  static const MethodInfo* get() {
    static auto* numberBuffer = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Int32"))->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::DateTimeRawInfo), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{numberBuffer});
  }
};
// Writing MetadataGetter for method: System::DateTimeRawInfo::AddNumber
// Il2CppName: AddNumber
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::DateTimeRawInfo::*)(int)>(&System::DateTimeRawInfo::AddNumber)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::DateTimeRawInfo), "AddNumber", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::DateTimeRawInfo::GetNumber
// Il2CppName: GetNumber
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::DateTimeRawInfo::*)(int)>(&System::DateTimeRawInfo::GetNumber)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::DateTimeRawInfo), "GetNumber", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index});
  }
};
