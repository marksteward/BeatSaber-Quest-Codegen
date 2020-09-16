// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Globalization.CultureData
#include "System/Globalization/CultureData.hpp"
// Including type: System.Globalization.CalendarData
#include "System/Globalization/CalendarData.hpp"
// Including type: System.Globalization.NumberFormatInfo
#include "System/Globalization/NumberFormatInfo.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static private System.Globalization.CultureData s_Invariant
System::Globalization::CultureData* System::Globalization::CultureData::_get_s_Invariant() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<System::Globalization::CultureData*>("System.Globalization", "CultureData", "s_Invariant"));
}
// Autogenerated static field setter
// Set static field: static private System.Globalization.CultureData s_Invariant
void System::Globalization::CultureData::_set_s_Invariant(System::Globalization::CultureData* value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System.Globalization", "CultureData", "s_Invariant", value));
}
// Autogenerated method: System.Globalization.CultureData..ctor
System::Globalization::CultureData* System::Globalization::CultureData::New_ctor(::Il2CppString* name) {
  return THROW_UNLESS(il2cpp_utils::New<CultureData*>(name));
}
// Autogenerated method: System.Globalization.CultureData.get_Invariant
System::Globalization::CultureData* System::Globalization::CultureData::get_Invariant() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Globalization::CultureData*>("System.Globalization", "CultureData", "get_Invariant"));
}
// Autogenerated method: System.Globalization.CultureData.GetCultureData
System::Globalization::CultureData* System::Globalization::CultureData::GetCultureData(::Il2CppString* cultureName, bool useUserOverride) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Globalization::CultureData*>("System.Globalization", "CultureData", "GetCultureData", cultureName, useUserOverride));
}
// Autogenerated method: System.Globalization.CultureData.GetCultureData
System::Globalization::CultureData* System::Globalization::CultureData::GetCultureData(::Il2CppString* cultureName, bool useUserOverride, int datetimeIndex, int calendarId, int numberIndex, ::Il2CppString* iso2lang, int ansiCodePage, int oemCodePage, int macCodePage, int ebcdicCodePage, bool rightToLeft, ::Il2CppString* listSeparator) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Globalization::CultureData*>("System.Globalization", "CultureData", "GetCultureData", cultureName, useUserOverride, datetimeIndex, calendarId, numberIndex, iso2lang, ansiCodePage, oemCodePage, macCodePage, ebcdicCodePage, rightToLeft, listSeparator));
}
// Autogenerated method: System.Globalization.CultureData.GetCultureData
System::Globalization::CultureData* System::Globalization::CultureData::GetCultureData(int culture, bool bUseUserOverride) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Globalization::CultureData*>("System.Globalization", "CultureData", "GetCultureData", culture, bUseUserOverride));
}
// Autogenerated method: System.Globalization.CultureData.fill_culture_data
void System::Globalization::CultureData::fill_culture_data(int datetimeIndex) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "fill_culture_data", datetimeIndex));
}
// Autogenerated method: System.Globalization.CultureData.GetCalendar
System::Globalization::CalendarData* System::Globalization::CultureData::GetCalendar(int calendarId) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Globalization::CalendarData*>(this, "GetCalendar", calendarId));
}
// Autogenerated method: System.Globalization.CultureData.get_LongTimes
::Array<::Il2CppString*>* System::Globalization::CultureData::get_LongTimes() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Array<::Il2CppString*>*>(this, "get_LongTimes"));
}
// Autogenerated method: System.Globalization.CultureData.get_ShortTimes
::Array<::Il2CppString*>* System::Globalization::CultureData::get_ShortTimes() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Array<::Il2CppString*>*>(this, "get_ShortTimes"));
}
// Autogenerated method: System.Globalization.CultureData.get_SISO639LANGNAME
::Il2CppString* System::Globalization::CultureData::get_SISO639LANGNAME() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppString*>(this, "get_SISO639LANGNAME"));
}
// Autogenerated method: System.Globalization.CultureData.get_IFIRSTDAYOFWEEK
int System::Globalization::CultureData::get_IFIRSTDAYOFWEEK() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "get_IFIRSTDAYOFWEEK"));
}
// Autogenerated method: System.Globalization.CultureData.get_IFIRSTWEEKOFYEAR
int System::Globalization::CultureData::get_IFIRSTWEEKOFYEAR() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "get_IFIRSTWEEKOFYEAR"));
}
// Autogenerated method: System.Globalization.CultureData.get_SAM1159
::Il2CppString* System::Globalization::CultureData::get_SAM1159() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppString*>(this, "get_SAM1159"));
}
// Autogenerated method: System.Globalization.CultureData.get_SPM2359
::Il2CppString* System::Globalization::CultureData::get_SPM2359() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppString*>(this, "get_SPM2359"));
}
// Autogenerated method: System.Globalization.CultureData.get_TimeSeparator
::Il2CppString* System::Globalization::CultureData::get_TimeSeparator() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppString*>(this, "get_TimeSeparator"));
}
// Autogenerated method: System.Globalization.CultureData.get_CalendarIds
::Array<int>* System::Globalization::CultureData::get_CalendarIds() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Array<int>*>(this, "get_CalendarIds"));
}
// Autogenerated method: System.Globalization.CultureData.get_IsInvariantCulture
bool System::Globalization::CultureData::get_IsInvariantCulture() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_IsInvariantCulture"));
}
// Autogenerated method: System.Globalization.CultureData.get_CultureName
::Il2CppString* System::Globalization::CultureData::get_CultureName() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppString*>(this, "get_CultureName"));
}
// Autogenerated method: System.Globalization.CultureData.get_SCOMPAREINFO
::Il2CppString* System::Globalization::CultureData::get_SCOMPAREINFO() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppString*>(this, "get_SCOMPAREINFO"));
}
// Autogenerated method: System.Globalization.CultureData.get_STEXTINFO
::Il2CppString* System::Globalization::CultureData::get_STEXTINFO() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppString*>(this, "get_STEXTINFO"));
}
// Autogenerated method: System.Globalization.CultureData.get_ILANGUAGE
int System::Globalization::CultureData::get_ILANGUAGE() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "get_ILANGUAGE"));
}
// Autogenerated method: System.Globalization.CultureData.get_UseUserOverride
bool System::Globalization::CultureData::get_UseUserOverride() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_UseUserOverride"));
}
// Autogenerated method: System.Globalization.CultureData.EraNames
::Array<::Il2CppString*>* System::Globalization::CultureData::EraNames(int calendarId) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Array<::Il2CppString*>*>(this, "EraNames", calendarId));
}
// Autogenerated method: System.Globalization.CultureData.AbbrevEraNames
::Array<::Il2CppString*>* System::Globalization::CultureData::AbbrevEraNames(int calendarId) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Array<::Il2CppString*>*>(this, "AbbrevEraNames", calendarId));
}
// Autogenerated method: System.Globalization.CultureData.AbbreviatedEnglishEraNames
::Array<::Il2CppString*>* System::Globalization::CultureData::AbbreviatedEnglishEraNames(int calendarId) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Array<::Il2CppString*>*>(this, "AbbreviatedEnglishEraNames", calendarId));
}
// Autogenerated method: System.Globalization.CultureData.ShortDates
::Array<::Il2CppString*>* System::Globalization::CultureData::ShortDates(int calendarId) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Array<::Il2CppString*>*>(this, "ShortDates", calendarId));
}
// Autogenerated method: System.Globalization.CultureData.LongDates
::Array<::Il2CppString*>* System::Globalization::CultureData::LongDates(int calendarId) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Array<::Il2CppString*>*>(this, "LongDates", calendarId));
}
// Autogenerated method: System.Globalization.CultureData.YearMonths
::Array<::Il2CppString*>* System::Globalization::CultureData::YearMonths(int calendarId) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Array<::Il2CppString*>*>(this, "YearMonths", calendarId));
}
// Autogenerated method: System.Globalization.CultureData.DayNames
::Array<::Il2CppString*>* System::Globalization::CultureData::DayNames(int calendarId) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Array<::Il2CppString*>*>(this, "DayNames", calendarId));
}
// Autogenerated method: System.Globalization.CultureData.AbbreviatedDayNames
::Array<::Il2CppString*>* System::Globalization::CultureData::AbbreviatedDayNames(int calendarId) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Array<::Il2CppString*>*>(this, "AbbreviatedDayNames", calendarId));
}
// Autogenerated method: System.Globalization.CultureData.MonthNames
::Array<::Il2CppString*>* System::Globalization::CultureData::MonthNames(int calendarId) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Array<::Il2CppString*>*>(this, "MonthNames", calendarId));
}
// Autogenerated method: System.Globalization.CultureData.GenitiveMonthNames
::Array<::Il2CppString*>* System::Globalization::CultureData::GenitiveMonthNames(int calendarId) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Array<::Il2CppString*>*>(this, "GenitiveMonthNames", calendarId));
}
// Autogenerated method: System.Globalization.CultureData.AbbreviatedMonthNames
::Array<::Il2CppString*>* System::Globalization::CultureData::AbbreviatedMonthNames(int calendarId) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Array<::Il2CppString*>*>(this, "AbbreviatedMonthNames", calendarId));
}
// Autogenerated method: System.Globalization.CultureData.AbbreviatedGenitiveMonthNames
::Array<::Il2CppString*>* System::Globalization::CultureData::AbbreviatedGenitiveMonthNames(int calendarId) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Array<::Il2CppString*>*>(this, "AbbreviatedGenitiveMonthNames", calendarId));
}
// Autogenerated method: System.Globalization.CultureData.LeapYearMonthNames
::Array<::Il2CppString*>* System::Globalization::CultureData::LeapYearMonthNames(int calendarId) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Array<::Il2CppString*>*>(this, "LeapYearMonthNames", calendarId));
}
// Autogenerated method: System.Globalization.CultureData.MonthDay
::Il2CppString* System::Globalization::CultureData::MonthDay(int calendarId) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppString*>(this, "MonthDay", calendarId));
}
// Autogenerated method: System.Globalization.CultureData.DateSeparator
::Il2CppString* System::Globalization::CultureData::DateSeparator(int calendarId) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppString*>(this, "DateSeparator", calendarId));
}
// Autogenerated method: System.Globalization.CultureData.GetDateSeparator
::Il2CppString* System::Globalization::CultureData::GetDateSeparator(::Il2CppString* format) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppString*>("System.Globalization", "CultureData", "GetDateSeparator", format));
}
// Autogenerated method: System.Globalization.CultureData.GetSeparator
::Il2CppString* System::Globalization::CultureData::GetSeparator(::Il2CppString* format, ::Il2CppString* timeParts) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppString*>("System.Globalization", "CultureData", "GetSeparator", format, timeParts));
}
// Autogenerated method: System.Globalization.CultureData.IndexOfTimePart
int System::Globalization::CultureData::IndexOfTimePart(::Il2CppString* format, int startIndex, ::Il2CppString* timeParts) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>("System.Globalization", "CultureData", "IndexOfTimePart", format, startIndex, timeParts));
}
// Autogenerated method: System.Globalization.CultureData.UnescapeNlsString
::Il2CppString* System::Globalization::CultureData::UnescapeNlsString(::Il2CppString* str, int start, int end) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppString*>("System.Globalization", "CultureData", "UnescapeNlsString", str, start, end));
}
// Autogenerated method: System.Globalization.CultureData.ReescapeWin32Strings
::Array<::Il2CppString*>* System::Globalization::CultureData::ReescapeWin32Strings(::Array<::Il2CppString*>* array) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Array<::Il2CppString*>*>("System.Globalization", "CultureData", "ReescapeWin32Strings", array));
}
// Autogenerated method: System.Globalization.CultureData.ReescapeWin32String
::Il2CppString* System::Globalization::CultureData::ReescapeWin32String(::Il2CppString* str) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppString*>("System.Globalization", "CultureData", "ReescapeWin32String", str));
}
// Autogenerated method: System.Globalization.CultureData.GetNFIValues
void System::Globalization::CultureData::GetNFIValues(System::Globalization::NumberFormatInfo* nfi) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "GetNFIValues", nfi));
}
// Autogenerated method: System.Globalization.CultureData.fill_number_data
void System::Globalization::CultureData::fill_number_data(System::Globalization::NumberFormatInfo* nfi, int numberIndex) {
  THROW_UNLESS(il2cpp_utils::RunMethod("System.Globalization", "CultureData", "fill_number_data", nfi, numberIndex));
}
