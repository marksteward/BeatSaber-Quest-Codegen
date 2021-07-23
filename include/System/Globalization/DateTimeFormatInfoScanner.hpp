// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Enum
#include "System/Enum.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: System::Globalization
namespace System::Globalization {
  // Forward declaring type: DateTimeFormatInfo
  class DateTimeFormatInfo;
  // Forward declaring type: FORMATFLAGS
  struct FORMATFLAGS;
}
// Completed forward declares
// Type namespace: System.Globalization
namespace System::Globalization {
  // Size: 0x1C
  #pragma pack(push, 1)
  // Autogenerated type: System.Globalization.DateTimeFormatInfoScanner
  // [TokenAttribute] Offset: FFFFFFFF
  class DateTimeFormatInfoScanner : public ::Il2CppObject {
    public:
    // Nested type: System::Globalization::DateTimeFormatInfoScanner::FoundDatePattern
    struct FoundDatePattern;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: System.Globalization.DateTimeFormatInfoScanner/System.Globalization.FoundDatePattern
    // [TokenAttribute] Offset: FFFFFFFF
    struct FoundDatePattern/*, public System::Enum*/ {
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // Creating value type constructor for type: FoundDatePattern
      constexpr FoundDatePattern(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator System::Enum
      operator System::Enum() noexcept {
        return *reinterpret_cast<System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public System.Globalization.DateTimeFormatInfoScanner/System.Globalization.FoundDatePattern None
      static constexpr const int None = 0;
      // Get static field: static public System.Globalization.DateTimeFormatInfoScanner/System.Globalization.FoundDatePattern None
      static System::Globalization::DateTimeFormatInfoScanner::FoundDatePattern _get_None();
      // Set static field: static public System.Globalization.DateTimeFormatInfoScanner/System.Globalization.FoundDatePattern None
      static void _set_None(System::Globalization::DateTimeFormatInfoScanner::FoundDatePattern value);
      // static field const value: static public System.Globalization.DateTimeFormatInfoScanner/System.Globalization.FoundDatePattern FoundYearPatternFlag
      static constexpr const int FoundYearPatternFlag = 1;
      // Get static field: static public System.Globalization.DateTimeFormatInfoScanner/System.Globalization.FoundDatePattern FoundYearPatternFlag
      static System::Globalization::DateTimeFormatInfoScanner::FoundDatePattern _get_FoundYearPatternFlag();
      // Set static field: static public System.Globalization.DateTimeFormatInfoScanner/System.Globalization.FoundDatePattern FoundYearPatternFlag
      static void _set_FoundYearPatternFlag(System::Globalization::DateTimeFormatInfoScanner::FoundDatePattern value);
      // static field const value: static public System.Globalization.DateTimeFormatInfoScanner/System.Globalization.FoundDatePattern FoundMonthPatternFlag
      static constexpr const int FoundMonthPatternFlag = 2;
      // Get static field: static public System.Globalization.DateTimeFormatInfoScanner/System.Globalization.FoundDatePattern FoundMonthPatternFlag
      static System::Globalization::DateTimeFormatInfoScanner::FoundDatePattern _get_FoundMonthPatternFlag();
      // Set static field: static public System.Globalization.DateTimeFormatInfoScanner/System.Globalization.FoundDatePattern FoundMonthPatternFlag
      static void _set_FoundMonthPatternFlag(System::Globalization::DateTimeFormatInfoScanner::FoundDatePattern value);
      // static field const value: static public System.Globalization.DateTimeFormatInfoScanner/System.Globalization.FoundDatePattern FoundDayPatternFlag
      static constexpr const int FoundDayPatternFlag = 4;
      // Get static field: static public System.Globalization.DateTimeFormatInfoScanner/System.Globalization.FoundDatePattern FoundDayPatternFlag
      static System::Globalization::DateTimeFormatInfoScanner::FoundDatePattern _get_FoundDayPatternFlag();
      // Set static field: static public System.Globalization.DateTimeFormatInfoScanner/System.Globalization.FoundDatePattern FoundDayPatternFlag
      static void _set_FoundDayPatternFlag(System::Globalization::DateTimeFormatInfoScanner::FoundDatePattern value);
      // static field const value: static public System.Globalization.DateTimeFormatInfoScanner/System.Globalization.FoundDatePattern FoundYMDPatternFlag
      static constexpr const int FoundYMDPatternFlag = 7;
      // Get static field: static public System.Globalization.DateTimeFormatInfoScanner/System.Globalization.FoundDatePattern FoundYMDPatternFlag
      static System::Globalization::DateTimeFormatInfoScanner::FoundDatePattern _get_FoundYMDPatternFlag();
      // Set static field: static public System.Globalization.DateTimeFormatInfoScanner/System.Globalization.FoundDatePattern FoundYMDPatternFlag
      static void _set_FoundYMDPatternFlag(System::Globalization::DateTimeFormatInfoScanner::FoundDatePattern value);
      // Get instance field: public System.Int32 value__
      int _get_value__();
      // Set instance field: public System.Int32 value__
      void _set_value__(int value);
    }; // System.Globalization.DateTimeFormatInfoScanner/System.Globalization.FoundDatePattern
    #pragma pack(pop)
    static check_size<sizeof(DateTimeFormatInfoScanner::FoundDatePattern), 0 + sizeof(int)> __System_Globalization_DateTimeFormatInfoScanner_FoundDatePatternSizeCheck;
    static_assert(sizeof(DateTimeFormatInfoScanner::FoundDatePattern) == 0x4);
    // System.Collections.Generic.List`1<System.String> m_dateWords
    // Size: 0x8
    // Offset: 0x10
    System::Collections::Generic::List_1<::Il2CppString*>* m_dateWords;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<::Il2CppString*>*) == 0x8);
    // private System.Globalization.DateTimeFormatInfoScanner/System.Globalization.FoundDatePattern m_ymdFlags
    // Size: 0x4
    // Offset: 0x18
    System::Globalization::DateTimeFormatInfoScanner::FoundDatePattern m_ymdFlags;
    // Field size check
    static_assert(sizeof(System::Globalization::DateTimeFormatInfoScanner::FoundDatePattern) == 0x4);
    // Creating value type constructor for type: DateTimeFormatInfoScanner
    DateTimeFormatInfoScanner(System::Collections::Generic::List_1<::Il2CppString*>* m_dateWords_ = {}, System::Globalization::DateTimeFormatInfoScanner::FoundDatePattern m_ymdFlags_ = {}) noexcept : m_dateWords{m_dateWords_}, m_ymdFlags{m_ymdFlags_} {}
    // Get static field: static private System.Collections.Generic.Dictionary`2<System.String,System.String> s_knownWords
    static System::Collections::Generic::Dictionary_2<::Il2CppString*, ::Il2CppString*>* _get_s_knownWords();
    // Set static field: static private System.Collections.Generic.Dictionary`2<System.String,System.String> s_knownWords
    static void _set_s_knownWords(System::Collections::Generic::Dictionary_2<::Il2CppString*, ::Il2CppString*>* value);
    // Get instance field: System.Collections.Generic.List`1<System.String> m_dateWords
    System::Collections::Generic::List_1<::Il2CppString*>* _get_m_dateWords();
    // Set instance field: System.Collections.Generic.List`1<System.String> m_dateWords
    void _set_m_dateWords(System::Collections::Generic::List_1<::Il2CppString*>* value);
    // Get instance field: private System.Globalization.DateTimeFormatInfoScanner/System.Globalization.FoundDatePattern m_ymdFlags
    System::Globalization::DateTimeFormatInfoScanner::FoundDatePattern _get_m_ymdFlags();
    // Set instance field: private System.Globalization.DateTimeFormatInfoScanner/System.Globalization.FoundDatePattern m_ymdFlags
    void _set_m_ymdFlags(System::Globalization::DateTimeFormatInfoScanner::FoundDatePattern value);
    // static private System.Collections.Generic.Dictionary`2<System.String,System.String> get_KnownWords()
    // Offset: 0x19BEE4C
    static System::Collections::Generic::Dictionary_2<::Il2CppString*, ::Il2CppString*>* get_KnownWords();
    // static System.Int32 SkipWhiteSpacesAndNonLetter(System.String pattern, System.Int32 currentIndex)
    // Offset: 0x19BF14C
    static int SkipWhiteSpacesAndNonLetter(::Il2CppString* pattern, int currentIndex);
    // System.Void AddDateWordOrPostfix(System.String formatPostfix, System.String str)
    // Offset: 0x19BF258
    void AddDateWordOrPostfix(::Il2CppString* formatPostfix, ::Il2CppString* str);
    // System.Int32 AddDateWords(System.String pattern, System.Int32 index, System.String formatPostfix)
    // Offset: 0x19BF530
    int AddDateWords(::Il2CppString* pattern, int index, ::Il2CppString* formatPostfix);
    // static System.Int32 ScanRepeatChar(System.String pattern, System.Char ch, System.Int32 index, out System.Int32 count)
    // Offset: 0x19BF71C
    static int ScanRepeatChar(::Il2CppString* pattern, ::Il2CppChar ch, int index, int& count);
    // System.Void AddIgnorableSymbols(System.String text)
    // Offset: 0x19BF448
    void AddIgnorableSymbols(::Il2CppString* text);
    // System.Void ScanDateWord(System.String pattern)
    // Offset: 0x19BF7A4
    void ScanDateWord(::Il2CppString* pattern);
    // System.String[] GetDateWordsOfDTFI(System.Globalization.DateTimeFormatInfo dtfi)
    // Offset: 0x19BF9D8
    ::Array<::Il2CppString*>* GetDateWordsOfDTFI(System::Globalization::DateTimeFormatInfo* dtfi);
    // static System.Globalization.FORMATFLAGS GetFormatFlagGenitiveMonth(System.String[] monthNames, System.String[] genitveMonthNames, System.String[] abbrevMonthNames, System.String[] genetiveAbbrevMonthNames)
    // Offset: 0x19BFCA8
    static System::Globalization::FORMATFLAGS GetFormatFlagGenitiveMonth(::Array<::Il2CppString*>* monthNames, ::Array<::Il2CppString*>* genitveMonthNames, ::Array<::Il2CppString*>* abbrevMonthNames, ::Array<::Il2CppString*>* genetiveAbbrevMonthNames);
    // static System.Globalization.FORMATFLAGS GetFormatFlagUseSpaceInMonthNames(System.String[] monthNames, System.String[] genitveMonthNames, System.String[] abbrevMonthNames, System.String[] genetiveAbbrevMonthNames)
    // Offset: 0x19BFDA8
    static System::Globalization::FORMATFLAGS GetFormatFlagUseSpaceInMonthNames(::Array<::Il2CppString*>* monthNames, ::Array<::Il2CppString*>* genitveMonthNames, ::Array<::Il2CppString*>* abbrevMonthNames, ::Array<::Il2CppString*>* genetiveAbbrevMonthNames);
    // static System.Globalization.FORMATFLAGS GetFormatFlagUseSpaceInDayNames(System.String[] dayNames, System.String[] abbrevDayNames)
    // Offset: 0x19C01D8
    static System::Globalization::FORMATFLAGS GetFormatFlagUseSpaceInDayNames(::Array<::Il2CppString*>* dayNames, ::Array<::Il2CppString*>* abbrevDayNames);
    // static System.Globalization.FORMATFLAGS GetFormatFlagUseHebrewCalendar(System.Int32 calID)
    // Offset: 0x19C0214
    static System::Globalization::FORMATFLAGS GetFormatFlagUseHebrewCalendar(int calID);
    // static private System.Boolean EqualStringArrays(System.String[] array1, System.String[] array2)
    // Offset: 0x19BFCEC
    static bool EqualStringArrays(::Array<::Il2CppString*>* array1, ::Array<::Il2CppString*>* array2);
    // static private System.Boolean ArrayElementsHaveSpace(System.String[] array)
    // Offset: 0x19C00CC
    static bool ArrayElementsHaveSpace(::Array<::Il2CppString*>* array);
    // static private System.Boolean ArrayElementsBeginWithDigit(System.String[] array)
    // Offset: 0x19BFE58
    static bool ArrayElementsBeginWithDigit(::Array<::Il2CppString*>* array);
    // public System.Void .ctor()
    // Offset: 0x19C0224
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DateTimeFormatInfoScanner* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Globalization::DateTimeFormatInfoScanner::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DateTimeFormatInfoScanner*, creationType>()));
    }
  }; // System.Globalization.DateTimeFormatInfoScanner
  #pragma pack(pop)
  static check_size<sizeof(DateTimeFormatInfoScanner), 24 + sizeof(System::Globalization::DateTimeFormatInfoScanner::FoundDatePattern)> __System_Globalization_DateTimeFormatInfoScannerSizeCheck;
  static_assert(sizeof(DateTimeFormatInfoScanner) == 0x1C);
}
DEFINE_IL2CPP_ARG_TYPE(System::Globalization::DateTimeFormatInfoScanner*, "System.Globalization", "DateTimeFormatInfoScanner");
DEFINE_IL2CPP_ARG_TYPE(System::Globalization::DateTimeFormatInfoScanner::FoundDatePattern, "System.Globalization", "DateTimeFormatInfoScanner/FoundDatePattern");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Globalization::DateTimeFormatInfoScanner::get_KnownWords
// Il2CppName: get_KnownWords
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::Dictionary_2<::Il2CppString*, ::Il2CppString*>* (*)()>(&System::Globalization::DateTimeFormatInfoScanner::get_KnownWords)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::DateTimeFormatInfoScanner*), "get_KnownWords", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Globalization::DateTimeFormatInfoScanner::SkipWhiteSpacesAndNonLetter
// Il2CppName: SkipWhiteSpacesAndNonLetter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::Il2CppString*, int)>(&System::Globalization::DateTimeFormatInfoScanner::SkipWhiteSpacesAndNonLetter)> {
  static const MethodInfo* get() {
    static auto* pattern = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* currentIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::DateTimeFormatInfoScanner*), "SkipWhiteSpacesAndNonLetter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pattern, currentIndex});
  }
};
// Writing MetadataGetter for method: System::Globalization::DateTimeFormatInfoScanner::AddDateWordOrPostfix
// Il2CppName: AddDateWordOrPostfix
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Globalization::DateTimeFormatInfoScanner::*)(::Il2CppString*, ::Il2CppString*)>(&System::Globalization::DateTimeFormatInfoScanner::AddDateWordOrPostfix)> {
  static const MethodInfo* get() {
    static auto* formatPostfix = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* str = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::DateTimeFormatInfoScanner*), "AddDateWordOrPostfix", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{formatPostfix, str});
  }
};
// Writing MetadataGetter for method: System::Globalization::DateTimeFormatInfoScanner::AddDateWords
// Il2CppName: AddDateWords
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Globalization::DateTimeFormatInfoScanner::*)(::Il2CppString*, int, ::Il2CppString*)>(&System::Globalization::DateTimeFormatInfoScanner::AddDateWords)> {
  static const MethodInfo* get() {
    static auto* pattern = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* formatPostfix = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::DateTimeFormatInfoScanner*), "AddDateWords", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pattern, index, formatPostfix});
  }
};
// Writing MetadataGetter for method: System::Globalization::DateTimeFormatInfoScanner::ScanRepeatChar
// Il2CppName: ScanRepeatChar
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::Il2CppString*, ::Il2CppChar, int, int&)>(&System::Globalization::DateTimeFormatInfoScanner::ScanRepeatChar)> {
  static const MethodInfo* get() {
    static auto* pattern = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* ch = &::il2cpp_utils::GetClassFromName("System", "Char")->byval_arg;
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::DateTimeFormatInfoScanner*), "ScanRepeatChar", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pattern, ch, index, count});
  }
};
// Writing MetadataGetter for method: System::Globalization::DateTimeFormatInfoScanner::AddIgnorableSymbols
// Il2CppName: AddIgnorableSymbols
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Globalization::DateTimeFormatInfoScanner::*)(::Il2CppString*)>(&System::Globalization::DateTimeFormatInfoScanner::AddIgnorableSymbols)> {
  static const MethodInfo* get() {
    static auto* text = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::DateTimeFormatInfoScanner*), "AddIgnorableSymbols", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{text});
  }
};
// Writing MetadataGetter for method: System::Globalization::DateTimeFormatInfoScanner::ScanDateWord
// Il2CppName: ScanDateWord
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Globalization::DateTimeFormatInfoScanner::*)(::Il2CppString*)>(&System::Globalization::DateTimeFormatInfoScanner::ScanDateWord)> {
  static const MethodInfo* get() {
    static auto* pattern = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::DateTimeFormatInfoScanner*), "ScanDateWord", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pattern});
  }
};
// Writing MetadataGetter for method: System::Globalization::DateTimeFormatInfoScanner::GetDateWordsOfDTFI
// Il2CppName: GetDateWordsOfDTFI
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<::Il2CppString*>* (System::Globalization::DateTimeFormatInfoScanner::*)(System::Globalization::DateTimeFormatInfo*)>(&System::Globalization::DateTimeFormatInfoScanner::GetDateWordsOfDTFI)> {
  static const MethodInfo* get() {
    static auto* dtfi = &::il2cpp_utils::GetClassFromName("System.Globalization", "DateTimeFormatInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::DateTimeFormatInfoScanner*), "GetDateWordsOfDTFI", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{dtfi});
  }
};
// Writing MetadataGetter for method: System::Globalization::DateTimeFormatInfoScanner::GetFormatFlagGenitiveMonth
// Il2CppName: GetFormatFlagGenitiveMonth
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Globalization::FORMATFLAGS (*)(::Array<::Il2CppString*>*, ::Array<::Il2CppString*>*, ::Array<::Il2CppString*>*, ::Array<::Il2CppString*>*)>(&System::Globalization::DateTimeFormatInfoScanner::GetFormatFlagGenitiveMonth)> {
  static const MethodInfo* get() {
    static auto* monthNames = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "String"), 1)->byval_arg;
    static auto* genitveMonthNames = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "String"), 1)->byval_arg;
    static auto* abbrevMonthNames = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "String"), 1)->byval_arg;
    static auto* genetiveAbbrevMonthNames = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "String"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::DateTimeFormatInfoScanner*), "GetFormatFlagGenitiveMonth", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{monthNames, genitveMonthNames, abbrevMonthNames, genetiveAbbrevMonthNames});
  }
};
// Writing MetadataGetter for method: System::Globalization::DateTimeFormatInfoScanner::GetFormatFlagUseSpaceInMonthNames
// Il2CppName: GetFormatFlagUseSpaceInMonthNames
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Globalization::FORMATFLAGS (*)(::Array<::Il2CppString*>*, ::Array<::Il2CppString*>*, ::Array<::Il2CppString*>*, ::Array<::Il2CppString*>*)>(&System::Globalization::DateTimeFormatInfoScanner::GetFormatFlagUseSpaceInMonthNames)> {
  static const MethodInfo* get() {
    static auto* monthNames = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "String"), 1)->byval_arg;
    static auto* genitveMonthNames = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "String"), 1)->byval_arg;
    static auto* abbrevMonthNames = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "String"), 1)->byval_arg;
    static auto* genetiveAbbrevMonthNames = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "String"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::DateTimeFormatInfoScanner*), "GetFormatFlagUseSpaceInMonthNames", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{monthNames, genitveMonthNames, abbrevMonthNames, genetiveAbbrevMonthNames});
  }
};
// Writing MetadataGetter for method: System::Globalization::DateTimeFormatInfoScanner::GetFormatFlagUseSpaceInDayNames
// Il2CppName: GetFormatFlagUseSpaceInDayNames
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Globalization::FORMATFLAGS (*)(::Array<::Il2CppString*>*, ::Array<::Il2CppString*>*)>(&System::Globalization::DateTimeFormatInfoScanner::GetFormatFlagUseSpaceInDayNames)> {
  static const MethodInfo* get() {
    static auto* dayNames = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "String"), 1)->byval_arg;
    static auto* abbrevDayNames = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "String"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::DateTimeFormatInfoScanner*), "GetFormatFlagUseSpaceInDayNames", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{dayNames, abbrevDayNames});
  }
};
// Writing MetadataGetter for method: System::Globalization::DateTimeFormatInfoScanner::GetFormatFlagUseHebrewCalendar
// Il2CppName: GetFormatFlagUseHebrewCalendar
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Globalization::FORMATFLAGS (*)(int)>(&System::Globalization::DateTimeFormatInfoScanner::GetFormatFlagUseHebrewCalendar)> {
  static const MethodInfo* get() {
    static auto* calID = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::DateTimeFormatInfoScanner*), "GetFormatFlagUseHebrewCalendar", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{calID});
  }
};
// Writing MetadataGetter for method: System::Globalization::DateTimeFormatInfoScanner::EqualStringArrays
// Il2CppName: EqualStringArrays
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Array<::Il2CppString*>*, ::Array<::Il2CppString*>*)>(&System::Globalization::DateTimeFormatInfoScanner::EqualStringArrays)> {
  static const MethodInfo* get() {
    static auto* array1 = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "String"), 1)->byval_arg;
    static auto* array2 = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "String"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::DateTimeFormatInfoScanner*), "EqualStringArrays", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{array1, array2});
  }
};
// Writing MetadataGetter for method: System::Globalization::DateTimeFormatInfoScanner::ArrayElementsHaveSpace
// Il2CppName: ArrayElementsHaveSpace
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Array<::Il2CppString*>*)>(&System::Globalization::DateTimeFormatInfoScanner::ArrayElementsHaveSpace)> {
  static const MethodInfo* get() {
    static auto* array = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "String"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::DateTimeFormatInfoScanner*), "ArrayElementsHaveSpace", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{array});
  }
};
// Writing MetadataGetter for method: System::Globalization::DateTimeFormatInfoScanner::ArrayElementsBeginWithDigit
// Il2CppName: ArrayElementsBeginWithDigit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Array<::Il2CppString*>*)>(&System::Globalization::DateTimeFormatInfoScanner::ArrayElementsBeginWithDigit)> {
  static const MethodInfo* get() {
    static auto* array = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "String"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::DateTimeFormatInfoScanner*), "ArrayElementsBeginWithDigit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{array});
  }
};
// Writing MetadataGetter for method: System::Globalization::DateTimeFormatInfoScanner::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
