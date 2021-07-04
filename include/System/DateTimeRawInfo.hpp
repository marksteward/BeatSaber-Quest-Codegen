// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.DateTimeParse/TM
#include "System/DateTimeParse_TM.hpp"
// Completed includes
// Type namespace: System
namespace System {
  // Size: 0x2A
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.DateTimeRawInfo
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
    // System.DateTimeParse/TM timeMark
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
    // System.Void Init(System.Int32* numberBuffer)
    // Offset: 0xF04BEC
    void Init(int* numberBuffer);
    // System.Void AddNumber(System.Int32 value)
    // Offset: 0xF04C10
    void AddNumber(int value);
    // System.Int32 GetNumber(System.Int32 index)
    // Offset: 0xF04C28
    int GetNumber(int index);
  }; // System.DateTimeRawInfo
  #pragma pack(pop)
  static check_size<sizeof(DateTimeRawInfo), 41 + sizeof(bool)> __System_DateTimeRawInfoSizeCheck;
  static_assert(sizeof(DateTimeRawInfo) == 0x2A);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::DateTimeRawInfo, "System", "DateTimeRawInfo");
// Writing MetadataGetter for method: System::DateTimeRawInfo::Init
// Il2CppName: Init
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::DateTimeRawInfo::AddNumber
// Il2CppName: AddNumber
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::DateTimeRawInfo::GetNumber
// Il2CppName: GetNumber
// Cannot perform method pointer template specialization from operators!
