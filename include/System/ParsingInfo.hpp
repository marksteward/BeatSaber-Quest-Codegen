// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.DateTimeParse/System.TM
#include "System/DateTimeParse_TM.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Globalization
namespace System::Globalization {
  // Forward declaring type: Calendar
  class Calendar;
}
// Completed forward declares
// Type namespace: System
namespace System {
  // Size: 0x20
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.ParsingInfo
  // [TokenAttribute] Offset: FFFFFFFF
  struct ParsingInfo/*, public System::ValueType*/ {
    public:
    // System.Globalization.Calendar calendar
    // Size: 0x8
    // Offset: 0x0
    System::Globalization::Calendar* calendar;
    // Field size check
    static_assert(sizeof(System::Globalization::Calendar*) == 0x8);
    // System.Int32 dayOfWeek
    // Size: 0x4
    // Offset: 0x8
    int dayOfWeek;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.DateTimeParse/System.TM timeMark
    // Size: 0x4
    // Offset: 0xC
    System::DateTimeParse::TM timeMark;
    // Field size check
    static_assert(sizeof(System::DateTimeParse::TM) == 0x4);
    // System.Boolean fUseHour12
    // Size: 0x1
    // Offset: 0x10
    bool fUseHour12;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // System.Boolean fUseTwoDigitYear
    // Size: 0x1
    // Offset: 0x11
    bool fUseTwoDigitYear;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // System.Boolean fAllowInnerWhite
    // Size: 0x1
    // Offset: 0x12
    bool fAllowInnerWhite;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // System.Boolean fAllowTrailingWhite
    // Size: 0x1
    // Offset: 0x13
    bool fAllowTrailingWhite;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // System.Boolean fCustomNumberParser
    // Size: 0x1
    // Offset: 0x14
    bool fCustomNumberParser;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: fCustomNumberParser and: parseNumberDelegate
    char __padding7[0x3] = {};
    // System.DateTimeParse/System.MatchNumberDelegate parseNumberDelegate
    // Size: 0x8
    // Offset: 0x18
    System::DateTimeParse::MatchNumberDelegate* parseNumberDelegate;
    // Field size check
    static_assert(sizeof(System::DateTimeParse::MatchNumberDelegate*) == 0x8);
    // Creating value type constructor for type: ParsingInfo
    constexpr ParsingInfo(System::Globalization::Calendar* calendar_ = {}, int dayOfWeek_ = {}, System::DateTimeParse::TM timeMark_ = {}, bool fUseHour12_ = {}, bool fUseTwoDigitYear_ = {}, bool fAllowInnerWhite_ = {}, bool fAllowTrailingWhite_ = {}, bool fCustomNumberParser_ = {}, System::DateTimeParse::MatchNumberDelegate* parseNumberDelegate_ = {}) noexcept : calendar{calendar_}, dayOfWeek{dayOfWeek_}, timeMark{timeMark_}, fUseHour12{fUseHour12_}, fUseTwoDigitYear{fUseTwoDigitYear_}, fAllowInnerWhite{fAllowInnerWhite_}, fAllowTrailingWhite{fAllowTrailingWhite_}, fCustomNumberParser{fCustomNumberParser_}, parseNumberDelegate{parseNumberDelegate_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Get instance field: System.Globalization.Calendar calendar
    System::Globalization::Calendar* _get_calendar();
    // Set instance field: System.Globalization.Calendar calendar
    void _set_calendar(System::Globalization::Calendar* value);
    // Get instance field: System.Int32 dayOfWeek
    int _get_dayOfWeek();
    // Set instance field: System.Int32 dayOfWeek
    void _set_dayOfWeek(int value);
    // Get instance field: System.DateTimeParse/System.TM timeMark
    System::DateTimeParse::TM _get_timeMark();
    // Set instance field: System.DateTimeParse/System.TM timeMark
    void _set_timeMark(System::DateTimeParse::TM value);
    // Get instance field: System.Boolean fUseHour12
    bool _get_fUseHour12();
    // Set instance field: System.Boolean fUseHour12
    void _set_fUseHour12(bool value);
    // Get instance field: System.Boolean fUseTwoDigitYear
    bool _get_fUseTwoDigitYear();
    // Set instance field: System.Boolean fUseTwoDigitYear
    void _set_fUseTwoDigitYear(bool value);
    // Get instance field: System.Boolean fAllowInnerWhite
    bool _get_fAllowInnerWhite();
    // Set instance field: System.Boolean fAllowInnerWhite
    void _set_fAllowInnerWhite(bool value);
    // Get instance field: System.Boolean fAllowTrailingWhite
    bool _get_fAllowTrailingWhite();
    // Set instance field: System.Boolean fAllowTrailingWhite
    void _set_fAllowTrailingWhite(bool value);
    // Get instance field: System.Boolean fCustomNumberParser
    bool _get_fCustomNumberParser();
    // Set instance field: System.Boolean fCustomNumberParser
    void _set_fCustomNumberParser(bool value);
    // Get instance field: System.DateTimeParse/System.MatchNumberDelegate parseNumberDelegate
    System::DateTimeParse::MatchNumberDelegate* _get_parseNumberDelegate();
    // Set instance field: System.DateTimeParse/System.MatchNumberDelegate parseNumberDelegate
    void _set_parseNumberDelegate(System::DateTimeParse::MatchNumberDelegate* value);
    // System.Void Init()
    // Offset: 0xD83430
    void Init();
  }; // System.ParsingInfo
  #pragma pack(pop)
  static check_size<sizeof(ParsingInfo), 24 + sizeof(System::DateTimeParse::MatchNumberDelegate*)> __System_ParsingInfoSizeCheck;
  static_assert(sizeof(ParsingInfo) == 0x20);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::ParsingInfo, "System", "ParsingInfo");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::ParsingInfo::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::ParsingInfo::*)()>(&System::ParsingInfo::Init)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ParsingInfo), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
