// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Globalization.Calendar
#include "System/Globalization/Calendar.hpp"
// Including type: System.DateTime
#include "System/DateTime.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Globalization
namespace System::Globalization {
  // Forward declaring type: GregorianCalendarHelper
  class GregorianCalendarHelper;
  // Forward declaring type: EraInfo
  class EraInfo;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: DayOfWeek
  struct DayOfWeek;
}
// Completed forward declares
// Type namespace: System.Globalization
namespace System::Globalization {
  // Autogenerated type: System.Globalization.JapaneseCalendar
  class JapaneseCalendar : public System::Globalization::Calendar {
    public:
    // System.Globalization.GregorianCalendarHelper helper
    // Offset: 0x20
    System::Globalization::GregorianCalendarHelper* helper;
    // Creating conversion operator: operator System::Globalization::GregorianCalendarHelper*
    constexpr operator System::Globalization::GregorianCalendarHelper*() const {
      return helper;
    }
    // Get static field: static readonly System.DateTime calendarMinValue
    static System::DateTime _get_calendarMinValue();
    // Set static field: static readonly System.DateTime calendarMinValue
    static void _set_calendarMinValue(System::DateTime value);
    // Get static field: static System.Globalization.EraInfo[] japaneseEraInfo
    static ::Array<System::Globalization::EraInfo*>* _get_japaneseEraInfo();
    // Set static field: static System.Globalization.EraInfo[] japaneseEraInfo
    static void _set_japaneseEraInfo(::Array<System::Globalization::EraInfo*>* value);
    // Get static field: static System.Globalization.Calendar s_defaultInstance
    static System::Globalization::Calendar* _get_s_defaultInstance();
    // Set static field: static System.Globalization.Calendar s_defaultInstance
    static void _set_s_defaultInstance(System::Globalization::Calendar* value);
    // static System.Globalization.EraInfo[] GetEraInfo()
    // Offset: 0x12D0C7C
    static ::Array<System::Globalization::EraInfo*>* GetEraInfo();
    // static private System.Globalization.EraInfo[] GetErasFromRegistry()
    // Offset: 0x12D100C
    static ::Array<System::Globalization::EraInfo*>* GetErasFromRegistry();
    // static System.Globalization.Calendar GetDefaultInstance()
    // Offset: 0x12BFE8C
    static System::Globalization::Calendar* GetDefaultInstance();
    // static System.String[] EraNames()
    // Offset: 0x12D1504
    static ::Array<::Il2CppString*>* EraNames();
    // static System.String[] AbbrevEraNames()
    // Offset: 0x12D1640
    static ::Array<::Il2CppString*>* AbbrevEraNames();
    // static System.String[] EnglishEraNames()
    // Offset: 0x12D177C
    static ::Array<::Il2CppString*>* EnglishEraNames();
    // static private System.Void .cctor()
    // Offset: 0x12D1918
    static void _cctor();
    // public override System.DateTime get_MinSupportedDateTime()
    // Offset: 0x12D0BAC
    // Implemented from: System.Globalization.Calendar
    // Base method: System.DateTime Calendar::get_MinSupportedDateTime()
    System::DateTime get_MinSupportedDateTime();
    // public override System.DateTime get_MaxSupportedDateTime()
    // Offset: 0x12D0C14
    // Implemented from: System.Globalization.Calendar
    // Base method: System.DateTime Calendar::get_MaxSupportedDateTime()
    System::DateTime get_MaxSupportedDateTime();
    // public System.Void .ctor()
    // Offset: 0x12D1014
    // Implemented from: System.Globalization.Calendar
    // Base method: System.Void Calendar::.ctor()
    // Base method: System.Void Object::.ctor()
    static JapaneseCalendar* New_ctor();
    // override System.Int32 get_ID()
    // Offset: 0x12D11BC
    // Implemented from: System.Globalization.Calendar
    // Base method: System.Int32 Calendar::get_ID()
    int get_ID();
    // public override System.Int32 GetDaysInMonth(System.Int32 year, System.Int32 month, System.Int32 era)
    // Offset: 0x12D11C4
    // Implemented from: System.Globalization.Calendar
    // Base method: System.Int32 Calendar::GetDaysInMonth(System.Int32 year, System.Int32 month, System.Int32 era)
    int GetDaysInMonth(int year, int month, int era);
    // public override System.Int32 GetDayOfMonth(System.DateTime time)
    // Offset: 0x12D11DC
    // Implemented from: System.Globalization.Calendar
    // Base method: System.Int32 Calendar::GetDayOfMonth(System.DateTime time)
    int GetDayOfMonth(System::DateTime time);
    // public override System.DayOfWeek GetDayOfWeek(System.DateTime time)
    // Offset: 0x12D1228
    // Implemented from: System.Globalization.Calendar
    // Base method: System.DayOfWeek Calendar::GetDayOfWeek(System.DateTime time)
    System::DayOfWeek GetDayOfWeek(System::DateTime time);
    // public override System.Int32 GetMonthsInYear(System.Int32 year, System.Int32 era)
    // Offset: 0x12D1240
    // Implemented from: System.Globalization.Calendar
    // Base method: System.Int32 Calendar::GetMonthsInYear(System.Int32 year, System.Int32 era)
    int GetMonthsInYear(int year, int era);
    // public override System.Int32 GetEra(System.DateTime time)
    // Offset: 0x12D1264
    // Implemented from: System.Globalization.Calendar
    // Base method: System.Int32 Calendar::GetEra(System.DateTime time)
    int GetEra(System::DateTime time);
    // public override System.Int32 GetMonth(System.DateTime time)
    // Offset: 0x12D127C
    // Implemented from: System.Globalization.Calendar
    // Base method: System.Int32 Calendar::GetMonth(System.DateTime time)
    int GetMonth(System::DateTime time);
    // public override System.Int32 GetYear(System.DateTime time)
    // Offset: 0x12D12C8
    // Implemented from: System.Globalization.Calendar
    // Base method: System.Int32 Calendar::GetYear(System.DateTime time)
    int GetYear(System::DateTime time);
    // public override System.Boolean IsLeapYear(System.Int32 year, System.Int32 era)
    // Offset: 0x12D12E0
    // Implemented from: System.Globalization.Calendar
    // Base method: System.Boolean Calendar::IsLeapYear(System.Int32 year, System.Int32 era)
    bool IsLeapYear(int year, int era);
    // public override System.DateTime ToDateTime(System.Int32 year, System.Int32 month, System.Int32 day, System.Int32 hour, System.Int32 minute, System.Int32 second, System.Int32 millisecond, System.Int32 era)
    // Offset: 0x12D1354
    // Implemented from: System.Globalization.Calendar
    // Base method: System.DateTime Calendar::ToDateTime(System.Int32 year, System.Int32 month, System.Int32 day, System.Int32 hour, System.Int32 minute, System.Int32 second, System.Int32 millisecond, System.Int32 era)
    System::DateTime ToDateTime(int year, int month, int day, int hour, int minute, int second, int millisecond, int era);
    // public override System.Int32 ToFourDigitYear(System.Int32 year)
    // Offset: 0x12D1378
    // Implemented from: System.Globalization.Calendar
    // Base method: System.Int32 Calendar::ToFourDigitYear(System.Int32 year)
    int ToFourDigitYear(int year);
    // public override System.Int32[] get_Eras()
    // Offset: 0x12D14EC
    // Implemented from: System.Globalization.Calendar
    // Base method: System.Int32[] Calendar::get_Eras()
    ::Array<int>* get_Eras();
    // override System.Boolean IsValidYear(System.Int32 year, System.Int32 era)
    // Offset: 0x12D18B8
    // Implemented from: System.Globalization.Calendar
    // Base method: System.Boolean Calendar::IsValidYear(System.Int32 year, System.Int32 era)
    bool IsValidYear(int year, int era);
    // public override System.Int32 get_TwoDigitYearMax()
    // Offset: 0x12D18D0
    // Implemented from: System.Globalization.Calendar
    // Base method: System.Int32 Calendar::get_TwoDigitYearMax()
    int get_TwoDigitYearMax();
  }; // System.Globalization.JapaneseCalendar
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Globalization::JapaneseCalendar*, "System.Globalization", "JapaneseCalendar");
#pragma pack(pop)
