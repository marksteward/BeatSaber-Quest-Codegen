// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Globalization
namespace System::Globalization {
  // Forward declaring type: CalendarData
  class CalendarData;
  // Forward declaring type: NumberFormatInfo
  class NumberFormatInfo;
}
// Completed forward declares
// Type namespace: System.Globalization
namespace System::Globalization {
  // Size: 0x88
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.Globalization.CultureData
  class CultureData : public ::Il2CppObject {
    public:
    // private System.String sAM1159
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* sAM1159;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String sPM2359
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* sPM2359;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String sTimeSeparator
    // Size: 0x8
    // Offset: 0x20
    ::Il2CppString* sTimeSeparator;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String[] saLongTimes
    // Size: 0x8
    // Offset: 0x28
    ::Array<::Il2CppString*>* saLongTimes;
    // Field size check
    static_assert(sizeof(::Array<::Il2CppString*>*) == 0x8);
    // private System.String[] saShortTimes
    // Size: 0x8
    // Offset: 0x30
    ::Array<::Il2CppString*>* saShortTimes;
    // Field size check
    static_assert(sizeof(::Array<::Il2CppString*>*) == 0x8);
    // private System.Int32 iFirstDayOfWeek
    // Size: 0x4
    // Offset: 0x38
    int iFirstDayOfWeek;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 iFirstWeekOfYear
    // Size: 0x4
    // Offset: 0x3C
    int iFirstWeekOfYear;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32[] waCalendars
    // Size: 0x8
    // Offset: 0x40
    ::Array<int>* waCalendars;
    // Field size check
    static_assert(sizeof(::Array<int>*) == 0x8);
    // private System.Globalization.CalendarData[] calendars
    // Size: 0x8
    // Offset: 0x48
    ::Array<System::Globalization::CalendarData*>* calendars;
    // Field size check
    static_assert(sizeof(::Array<System::Globalization::CalendarData*>*) == 0x8);
    // private System.String sISO639Language
    // Size: 0x8
    // Offset: 0x50
    ::Il2CppString* sISO639Language;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private readonly System.String sRealName
    // Size: 0x8
    // Offset: 0x58
    ::Il2CppString* sRealName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.Boolean bUseOverrides
    // Size: 0x1
    // Offset: 0x60
    bool bUseOverrides;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: bUseOverrides and: calendarId
    char __padding11[0x3] = {};
    // private System.Int32 calendarId
    // Size: 0x4
    // Offset: 0x64
    int calendarId;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 numberIndex
    // Size: 0x4
    // Offset: 0x68
    int numberIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 iDefaultAnsiCodePage
    // Size: 0x4
    // Offset: 0x6C
    int iDefaultAnsiCodePage;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 iDefaultOemCodePage
    // Size: 0x4
    // Offset: 0x70
    int iDefaultOemCodePage;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 iDefaultMacCodePage
    // Size: 0x4
    // Offset: 0x74
    int iDefaultMacCodePage;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 iDefaultEbcdicCodePage
    // Size: 0x4
    // Offset: 0x78
    int iDefaultEbcdicCodePage;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Boolean isRightToLeft
    // Size: 0x1
    // Offset: 0x7C
    bool isRightToLeft;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: isRightToLeft and: sListSeparator
    char __padding18[0x3] = {};
    // private System.String sListSeparator
    // Size: 0x8
    // Offset: 0x80
    ::Il2CppString* sListSeparator;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: CultureData
    CultureData(::Il2CppString* sAM1159_ = {}, ::Il2CppString* sPM2359_ = {}, ::Il2CppString* sTimeSeparator_ = {}, ::Array<::Il2CppString*>* saLongTimes_ = {}, ::Array<::Il2CppString*>* saShortTimes_ = {}, int iFirstDayOfWeek_ = {}, int iFirstWeekOfYear_ = {}, ::Array<int>* waCalendars_ = {}, ::Array<System::Globalization::CalendarData*>* calendars_ = {}, ::Il2CppString* sISO639Language_ = {}, ::Il2CppString* sRealName_ = {}, bool bUseOverrides_ = {}, int calendarId_ = {}, int numberIndex_ = {}, int iDefaultAnsiCodePage_ = {}, int iDefaultOemCodePage_ = {}, int iDefaultMacCodePage_ = {}, int iDefaultEbcdicCodePage_ = {}, bool isRightToLeft_ = {}, ::Il2CppString* sListSeparator_ = {}) noexcept : sAM1159{sAM1159_}, sPM2359{sPM2359_}, sTimeSeparator{sTimeSeparator_}, saLongTimes{saLongTimes_}, saShortTimes{saShortTimes_}, iFirstDayOfWeek{iFirstDayOfWeek_}, iFirstWeekOfYear{iFirstWeekOfYear_}, waCalendars{waCalendars_}, calendars{calendars_}, sISO639Language{sISO639Language_}, sRealName{sRealName_}, bUseOverrides{bUseOverrides_}, calendarId{calendarId_}, numberIndex{numberIndex_}, iDefaultAnsiCodePage{iDefaultAnsiCodePage_}, iDefaultOemCodePage{iDefaultOemCodePage_}, iDefaultMacCodePage{iDefaultMacCodePage_}, iDefaultEbcdicCodePage{iDefaultEbcdicCodePage_}, isRightToLeft{isRightToLeft_}, sListSeparator{sListSeparator_} {}
    // Get static field: static private System.Globalization.CultureData s_Invariant
    static System::Globalization::CultureData* _get_s_Invariant();
    // Set static field: static private System.Globalization.CultureData s_Invariant
    static void _set_s_Invariant(System::Globalization::CultureData* value);
    // private System.Void .ctor(System.String name)
    // Offset: 0x17B50B8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CultureData* New_ctor(::Il2CppString* name) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Globalization::CultureData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CultureData*, creationType>(name)));
    }
    // static public System.Globalization.CultureData get_Invariant()
    // Offset: 0x17B50E4
    static System::Globalization::CultureData* get_Invariant();
    // static public System.Globalization.CultureData GetCultureData(System.String cultureName, System.Boolean useUserOverride)
    // Offset: 0x17B53E8
    static System::Globalization::CultureData* GetCultureData(::Il2CppString* cultureName, bool useUserOverride);
    // static public System.Globalization.CultureData GetCultureData(System.String cultureName, System.Boolean useUserOverride, System.Int32 datetimeIndex, System.Int32 calendarId, System.Int32 numberIndex, System.String iso2lang, System.Int32 ansiCodePage, System.Int32 oemCodePage, System.Int32 macCodePage, System.Int32 ebcdicCodePage, System.Boolean rightToLeft, System.String listSeparator)
    // Offset: 0x17B54E4
    static System::Globalization::CultureData* GetCultureData(::Il2CppString* cultureName, bool useUserOverride, int datetimeIndex, int calendarId, int numberIndex, ::Il2CppString* iso2lang, int ansiCodePage, int oemCodePage, int macCodePage, int ebcdicCodePage, bool rightToLeft, ::Il2CppString* listSeparator);
    // static System.Globalization.CultureData GetCultureData(System.Int32 culture, System.Boolean bUseUserOverride)
    // Offset: 0x17B5618
    static System::Globalization::CultureData* GetCultureData(int culture, bool bUseUserOverride);
    // private System.Void fill_culture_data(System.Int32 datetimeIndex)
    // Offset: 0x17B5614
    void fill_culture_data(int datetimeIndex);
    // public System.Globalization.CalendarData GetCalendar(System.Int32 calendarId)
    // Offset: 0x17B2848
    System::Globalization::CalendarData* GetCalendar(int calendarId);
    // System.String[] get_LongTimes()
    // Offset: 0x17B5620
    ::Array<::Il2CppString*>* get_LongTimes();
    // System.String[] get_ShortTimes()
    // Offset: 0x17B5644
    ::Array<::Il2CppString*>* get_ShortTimes();
    // System.String get_SISO639LANGNAME()
    // Offset: 0x17B5668
    ::Il2CppString* get_SISO639LANGNAME();
    // System.Int32 get_IFIRSTDAYOFWEEK()
    // Offset: 0x17B5670
    int get_IFIRSTDAYOFWEEK();
    // System.Int32 get_IFIRSTWEEKOFYEAR()
    // Offset: 0x17B5678
    int get_IFIRSTWEEKOFYEAR();
    // System.String get_SAM1159()
    // Offset: 0x17B5680
    ::Il2CppString* get_SAM1159();
    // System.String get_SPM2359()
    // Offset: 0x17B5688
    ::Il2CppString* get_SPM2359();
    // System.String get_TimeSeparator()
    // Offset: 0x17B5690
    ::Il2CppString* get_TimeSeparator();
    // System.Int32[] get_CalendarIds()
    // Offset: 0x17B5698
    ::Array<int>* get_CalendarIds();
    // System.Boolean get_IsInvariantCulture()
    // Offset: 0x17B57EC
    bool get_IsInvariantCulture();
    // System.String get_CultureName()
    // Offset: 0x17B57F8
    ::Il2CppString* get_CultureName();
    // System.String get_SCOMPAREINFO()
    // Offset: 0x17B5800
    ::Il2CppString* get_SCOMPAREINFO();
    // System.String get_STEXTINFO()
    // Offset: 0x17B5848
    ::Il2CppString* get_STEXTINFO();
    // System.Int32 get_ILANGUAGE()
    // Offset: 0x17B5850
    int get_ILANGUAGE();
    // System.Boolean get_UseUserOverride()
    // Offset: 0x17B5858
    bool get_UseUserOverride();
    // System.String[] EraNames(System.Int32 calendarId)
    // Offset: 0x17B5860
    ::Array<::Il2CppString*>* EraNames(int calendarId);
    // System.String[] AbbrevEraNames(System.Int32 calendarId)
    // Offset: 0x17B5880
    ::Array<::Il2CppString*>* AbbrevEraNames(int calendarId);
    // System.String[] AbbreviatedEnglishEraNames(System.Int32 calendarId)
    // Offset: 0x17B58A0
    ::Array<::Il2CppString*>* AbbreviatedEnglishEraNames(int calendarId);
    // System.String[] ShortDates(System.Int32 calendarId)
    // Offset: 0x17B58C0
    ::Array<::Il2CppString*>* ShortDates(int calendarId);
    // System.String[] LongDates(System.Int32 calendarId)
    // Offset: 0x17B58E0
    ::Array<::Il2CppString*>* LongDates(int calendarId);
    // System.String[] YearMonths(System.Int32 calendarId)
    // Offset: 0x17B5900
    ::Array<::Il2CppString*>* YearMonths(int calendarId);
    // System.String[] DayNames(System.Int32 calendarId)
    // Offset: 0x17B5920
    ::Array<::Il2CppString*>* DayNames(int calendarId);
    // System.String[] AbbreviatedDayNames(System.Int32 calendarId)
    // Offset: 0x17B5940
    ::Array<::Il2CppString*>* AbbreviatedDayNames(int calendarId);
    // System.String[] MonthNames(System.Int32 calendarId)
    // Offset: 0x17B5960
    ::Array<::Il2CppString*>* MonthNames(int calendarId);
    // System.String[] GenitiveMonthNames(System.Int32 calendarId)
    // Offset: 0x17B5980
    ::Array<::Il2CppString*>* GenitiveMonthNames(int calendarId);
    // System.String[] AbbreviatedMonthNames(System.Int32 calendarId)
    // Offset: 0x17B59A0
    ::Array<::Il2CppString*>* AbbreviatedMonthNames(int calendarId);
    // System.String[] AbbreviatedGenitiveMonthNames(System.Int32 calendarId)
    // Offset: 0x17B59C0
    ::Array<::Il2CppString*>* AbbreviatedGenitiveMonthNames(int calendarId);
    // System.String[] LeapYearMonthNames(System.Int32 calendarId)
    // Offset: 0x17B59E0
    ::Array<::Il2CppString*>* LeapYearMonthNames(int calendarId);
    // System.String MonthDay(System.Int32 calendarId)
    // Offset: 0x17B5A00
    ::Il2CppString* MonthDay(int calendarId);
    // System.String DateSeparator(System.Int32 calendarId)
    // Offset: 0x17B5A20
    ::Il2CppString* DateSeparator(int calendarId);
    // static private System.String GetDateSeparator(System.String format)
    // Offset: 0x17B5A5C
    static ::Il2CppString* GetDateSeparator(::Il2CppString* format);
    // static private System.String GetSeparator(System.String format, System.String timeParts)
    // Offset: 0x17B5AAC
    static ::Il2CppString* GetSeparator(::Il2CppString* format, ::Il2CppString* timeParts);
    // static private System.Int32 IndexOfTimePart(System.String format, System.Int32 startIndex, System.String timeParts)
    // Offset: 0x17B5BB8
    static int IndexOfTimePart(::Il2CppString* format, int startIndex, ::Il2CppString* timeParts);
    // static private System.String UnescapeNlsString(System.String str, System.Int32 start, System.Int32 end)
    // Offset: 0x17B5CB0
    static ::Il2CppString* UnescapeNlsString(::Il2CppString* str, int start, int end);
    // static System.String[] ReescapeWin32Strings(System.String[] array)
    // Offset: 0x17B2018
    static ::Array<::Il2CppString*>* ReescapeWin32Strings(::Array<::Il2CppString*>* array);
    // static System.String ReescapeWin32String(System.String str)
    // Offset: 0x17B201C
    static ::Il2CppString* ReescapeWin32String(::Il2CppString* str);
    // System.Void GetNFIValues(System.Globalization.NumberFormatInfo nfi)
    // Offset: 0x17B5E64
    void GetNFIValues(System::Globalization::NumberFormatInfo* nfi);
    // static private System.Void fill_number_data(System.Globalization.NumberFormatInfo nfi, System.Int32 numberIndex)
    // Offset: 0x17B5EC0
    static void fill_number_data(System::Globalization::NumberFormatInfo* nfi, int numberIndex);
  }; // System.Globalization.CultureData
  #pragma pack(pop)
  static check_size<sizeof(CultureData), 128 + sizeof(::Il2CppString*)> __System_Globalization_CultureDataSizeCheck;
  static_assert(sizeof(CultureData) == 0x88);
}
DEFINE_IL2CPP_ARG_TYPE(System::Globalization::CultureData*, "System.Globalization", "CultureData");
// Writing MetadataGetter for method: System::Globalization::CultureData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Globalization::CultureData::get_Invariant
// Il2CppName: get_Invariant
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Globalization::CultureData::GetCultureData
// Il2CppName: GetCultureData
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Globalization::CultureData::GetCultureData
// Il2CppName: GetCultureData
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Globalization::CultureData::GetCultureData
// Il2CppName: GetCultureData
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Globalization::CultureData::fill_culture_data
// Il2CppName: fill_culture_data
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Globalization::CultureData::GetCalendar
// Il2CppName: GetCalendar
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Globalization::CultureData::get_LongTimes
// Il2CppName: get_LongTimes
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Globalization::CultureData::get_ShortTimes
// Il2CppName: get_ShortTimes
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Globalization::CultureData::get_SISO639LANGNAME
// Il2CppName: get_SISO639LANGNAME
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Globalization::CultureData::get_IFIRSTDAYOFWEEK
// Il2CppName: get_IFIRSTDAYOFWEEK
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Globalization::CultureData::get_IFIRSTWEEKOFYEAR
// Il2CppName: get_IFIRSTWEEKOFYEAR
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Globalization::CultureData::get_SAM1159
// Il2CppName: get_SAM1159
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Globalization::CultureData::get_SPM2359
// Il2CppName: get_SPM2359
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Globalization::CultureData::get_TimeSeparator
// Il2CppName: get_TimeSeparator
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Globalization::CultureData::get_CalendarIds
// Il2CppName: get_CalendarIds
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Globalization::CultureData::get_IsInvariantCulture
// Il2CppName: get_IsInvariantCulture
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Globalization::CultureData::get_CultureName
// Il2CppName: get_CultureName
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Globalization::CultureData::get_SCOMPAREINFO
// Il2CppName: get_SCOMPAREINFO
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Globalization::CultureData::get_STEXTINFO
// Il2CppName: get_STEXTINFO
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Globalization::CultureData::get_ILANGUAGE
// Il2CppName: get_ILANGUAGE
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Globalization::CultureData::get_UseUserOverride
// Il2CppName: get_UseUserOverride
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Globalization::CultureData::EraNames
// Il2CppName: EraNames
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Globalization::CultureData::AbbrevEraNames
// Il2CppName: AbbrevEraNames
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Globalization::CultureData::AbbreviatedEnglishEraNames
// Il2CppName: AbbreviatedEnglishEraNames
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Globalization::CultureData::ShortDates
// Il2CppName: ShortDates
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Globalization::CultureData::LongDates
// Il2CppName: LongDates
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Globalization::CultureData::YearMonths
// Il2CppName: YearMonths
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Globalization::CultureData::DayNames
// Il2CppName: DayNames
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Globalization::CultureData::AbbreviatedDayNames
// Il2CppName: AbbreviatedDayNames
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Globalization::CultureData::MonthNames
// Il2CppName: MonthNames
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Globalization::CultureData::GenitiveMonthNames
// Il2CppName: GenitiveMonthNames
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Globalization::CultureData::AbbreviatedMonthNames
// Il2CppName: AbbreviatedMonthNames
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Globalization::CultureData::AbbreviatedGenitiveMonthNames
// Il2CppName: AbbreviatedGenitiveMonthNames
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Globalization::CultureData::LeapYearMonthNames
// Il2CppName: LeapYearMonthNames
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Globalization::CultureData::MonthDay
// Il2CppName: MonthDay
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Globalization::CultureData::DateSeparator
// Il2CppName: DateSeparator
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Globalization::CultureData::GetDateSeparator
// Il2CppName: GetDateSeparator
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Globalization::CultureData::GetSeparator
// Il2CppName: GetSeparator
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Globalization::CultureData::IndexOfTimePart
// Il2CppName: IndexOfTimePart
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Globalization::CultureData::UnescapeNlsString
// Il2CppName: UnescapeNlsString
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Globalization::CultureData::ReescapeWin32Strings
// Il2CppName: ReescapeWin32Strings
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Globalization::CultureData::ReescapeWin32String
// Il2CppName: ReescapeWin32String
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Globalization::CultureData::GetNFIValues
// Il2CppName: GetNFIValues
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Globalization::CultureData::fill_number_data
// Il2CppName: fill_number_data
// Cannot perform method pointer template specialization from operators!
