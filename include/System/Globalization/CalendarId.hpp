// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: System.Globalization
namespace System::Globalization {
  // Size: 0x2
  #pragma pack(push, 1)
  // Autogenerated type: System.Globalization.CalendarId
  // [] Offset: FFFFFFFF
  struct CalendarId/*, public System::Enum*/ {
    public:
    // public System.UInt16 value__
    // Size: 0x2
    // Offset: 0x0
    uint16_t value;
    // Field size check
    static_assert(sizeof(uint16_t) == 0x2);
    // Creating value type constructor for type: CalendarId
    constexpr CalendarId(uint16_t value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator uint16_t
    constexpr operator uint16_t() const noexcept {
      return value;
    }
    // static field const value: static public System.Globalization.CalendarId GREGORIAN
    static constexpr const uint16_t GREGORIAN = 1u;
    // Get static field: static public System.Globalization.CalendarId GREGORIAN
    static System::Globalization::CalendarId _get_GREGORIAN();
    // Set static field: static public System.Globalization.CalendarId GREGORIAN
    static void _set_GREGORIAN(System::Globalization::CalendarId value);
    // static field const value: static public System.Globalization.CalendarId GREGORIAN_US
    static constexpr const uint16_t GREGORIAN_US = 2u;
    // Get static field: static public System.Globalization.CalendarId GREGORIAN_US
    static System::Globalization::CalendarId _get_GREGORIAN_US();
    // Set static field: static public System.Globalization.CalendarId GREGORIAN_US
    static void _set_GREGORIAN_US(System::Globalization::CalendarId value);
    // static field const value: static public System.Globalization.CalendarId JAPAN
    static constexpr const uint16_t JAPAN = 3u;
    // Get static field: static public System.Globalization.CalendarId JAPAN
    static System::Globalization::CalendarId _get_JAPAN();
    // Set static field: static public System.Globalization.CalendarId JAPAN
    static void _set_JAPAN(System::Globalization::CalendarId value);
    // static field const value: static public System.Globalization.CalendarId TAIWAN
    static constexpr const uint16_t TAIWAN = 4u;
    // Get static field: static public System.Globalization.CalendarId TAIWAN
    static System::Globalization::CalendarId _get_TAIWAN();
    // Set static field: static public System.Globalization.CalendarId TAIWAN
    static void _set_TAIWAN(System::Globalization::CalendarId value);
    // static field const value: static public System.Globalization.CalendarId KOREA
    static constexpr const uint16_t KOREA = 5u;
    // Get static field: static public System.Globalization.CalendarId KOREA
    static System::Globalization::CalendarId _get_KOREA();
    // Set static field: static public System.Globalization.CalendarId KOREA
    static void _set_KOREA(System::Globalization::CalendarId value);
    // static field const value: static public System.Globalization.CalendarId HIJRI
    static constexpr const uint16_t HIJRI = 6u;
    // Get static field: static public System.Globalization.CalendarId HIJRI
    static System::Globalization::CalendarId _get_HIJRI();
    // Set static field: static public System.Globalization.CalendarId HIJRI
    static void _set_HIJRI(System::Globalization::CalendarId value);
    // static field const value: static public System.Globalization.CalendarId THAI
    static constexpr const uint16_t THAI = 7u;
    // Get static field: static public System.Globalization.CalendarId THAI
    static System::Globalization::CalendarId _get_THAI();
    // Set static field: static public System.Globalization.CalendarId THAI
    static void _set_THAI(System::Globalization::CalendarId value);
    // static field const value: static public System.Globalization.CalendarId HEBREW
    static constexpr const uint16_t HEBREW = 8u;
    // Get static field: static public System.Globalization.CalendarId HEBREW
    static System::Globalization::CalendarId _get_HEBREW();
    // Set static field: static public System.Globalization.CalendarId HEBREW
    static void _set_HEBREW(System::Globalization::CalendarId value);
    // static field const value: static public System.Globalization.CalendarId GREGORIAN_ME_FRENCH
    static constexpr const uint16_t GREGORIAN_ME_FRENCH = 9u;
    // Get static field: static public System.Globalization.CalendarId GREGORIAN_ME_FRENCH
    static System::Globalization::CalendarId _get_GREGORIAN_ME_FRENCH();
    // Set static field: static public System.Globalization.CalendarId GREGORIAN_ME_FRENCH
    static void _set_GREGORIAN_ME_FRENCH(System::Globalization::CalendarId value);
    // static field const value: static public System.Globalization.CalendarId GREGORIAN_ARABIC
    static constexpr const uint16_t GREGORIAN_ARABIC = 10u;
    // Get static field: static public System.Globalization.CalendarId GREGORIAN_ARABIC
    static System::Globalization::CalendarId _get_GREGORIAN_ARABIC();
    // Set static field: static public System.Globalization.CalendarId GREGORIAN_ARABIC
    static void _set_GREGORIAN_ARABIC(System::Globalization::CalendarId value);
    // static field const value: static public System.Globalization.CalendarId GREGORIAN_XLIT_ENGLISH
    static constexpr const uint16_t GREGORIAN_XLIT_ENGLISH = 11u;
    // Get static field: static public System.Globalization.CalendarId GREGORIAN_XLIT_ENGLISH
    static System::Globalization::CalendarId _get_GREGORIAN_XLIT_ENGLISH();
    // Set static field: static public System.Globalization.CalendarId GREGORIAN_XLIT_ENGLISH
    static void _set_GREGORIAN_XLIT_ENGLISH(System::Globalization::CalendarId value);
    // static field const value: static public System.Globalization.CalendarId GREGORIAN_XLIT_FRENCH
    static constexpr const uint16_t GREGORIAN_XLIT_FRENCH = 12u;
    // Get static field: static public System.Globalization.CalendarId GREGORIAN_XLIT_FRENCH
    static System::Globalization::CalendarId _get_GREGORIAN_XLIT_FRENCH();
    // Set static field: static public System.Globalization.CalendarId GREGORIAN_XLIT_FRENCH
    static void _set_GREGORIAN_XLIT_FRENCH(System::Globalization::CalendarId value);
    // static field const value: static public System.Globalization.CalendarId JULIAN
    static constexpr const uint16_t JULIAN = 13u;
    // Get static field: static public System.Globalization.CalendarId JULIAN
    static System::Globalization::CalendarId _get_JULIAN();
    // Set static field: static public System.Globalization.CalendarId JULIAN
    static void _set_JULIAN(System::Globalization::CalendarId value);
    // static field const value: static public System.Globalization.CalendarId JAPANESELUNISOLAR
    static constexpr const uint16_t JAPANESELUNISOLAR = 14u;
    // Get static field: static public System.Globalization.CalendarId JAPANESELUNISOLAR
    static System::Globalization::CalendarId _get_JAPANESELUNISOLAR();
    // Set static field: static public System.Globalization.CalendarId JAPANESELUNISOLAR
    static void _set_JAPANESELUNISOLAR(System::Globalization::CalendarId value);
    // static field const value: static public System.Globalization.CalendarId CHINESELUNISOLAR
    static constexpr const uint16_t CHINESELUNISOLAR = 15u;
    // Get static field: static public System.Globalization.CalendarId CHINESELUNISOLAR
    static System::Globalization::CalendarId _get_CHINESELUNISOLAR();
    // Set static field: static public System.Globalization.CalendarId CHINESELUNISOLAR
    static void _set_CHINESELUNISOLAR(System::Globalization::CalendarId value);
    // static field const value: static public System.Globalization.CalendarId SAKA
    static constexpr const uint16_t SAKA = 16u;
    // Get static field: static public System.Globalization.CalendarId SAKA
    static System::Globalization::CalendarId _get_SAKA();
    // Set static field: static public System.Globalization.CalendarId SAKA
    static void _set_SAKA(System::Globalization::CalendarId value);
    // static field const value: static public System.Globalization.CalendarId LUNAR_ETO_CHN
    static constexpr const uint16_t LUNAR_ETO_CHN = 17u;
    // Get static field: static public System.Globalization.CalendarId LUNAR_ETO_CHN
    static System::Globalization::CalendarId _get_LUNAR_ETO_CHN();
    // Set static field: static public System.Globalization.CalendarId LUNAR_ETO_CHN
    static void _set_LUNAR_ETO_CHN(System::Globalization::CalendarId value);
    // static field const value: static public System.Globalization.CalendarId LUNAR_ETO_KOR
    static constexpr const uint16_t LUNAR_ETO_KOR = 18u;
    // Get static field: static public System.Globalization.CalendarId LUNAR_ETO_KOR
    static System::Globalization::CalendarId _get_LUNAR_ETO_KOR();
    // Set static field: static public System.Globalization.CalendarId LUNAR_ETO_KOR
    static void _set_LUNAR_ETO_KOR(System::Globalization::CalendarId value);
    // static field const value: static public System.Globalization.CalendarId LUNAR_ETO_ROKUYOU
    static constexpr const uint16_t LUNAR_ETO_ROKUYOU = 19u;
    // Get static field: static public System.Globalization.CalendarId LUNAR_ETO_ROKUYOU
    static System::Globalization::CalendarId _get_LUNAR_ETO_ROKUYOU();
    // Set static field: static public System.Globalization.CalendarId LUNAR_ETO_ROKUYOU
    static void _set_LUNAR_ETO_ROKUYOU(System::Globalization::CalendarId value);
    // static field const value: static public System.Globalization.CalendarId KOREANLUNISOLAR
    static constexpr const uint16_t KOREANLUNISOLAR = 20u;
    // Get static field: static public System.Globalization.CalendarId KOREANLUNISOLAR
    static System::Globalization::CalendarId _get_KOREANLUNISOLAR();
    // Set static field: static public System.Globalization.CalendarId KOREANLUNISOLAR
    static void _set_KOREANLUNISOLAR(System::Globalization::CalendarId value);
    // static field const value: static public System.Globalization.CalendarId TAIWANLUNISOLAR
    static constexpr const uint16_t TAIWANLUNISOLAR = 21u;
    // Get static field: static public System.Globalization.CalendarId TAIWANLUNISOLAR
    static System::Globalization::CalendarId _get_TAIWANLUNISOLAR();
    // Set static field: static public System.Globalization.CalendarId TAIWANLUNISOLAR
    static void _set_TAIWANLUNISOLAR(System::Globalization::CalendarId value);
    // static field const value: static public System.Globalization.CalendarId PERSIAN
    static constexpr const uint16_t PERSIAN = 22u;
    // Get static field: static public System.Globalization.CalendarId PERSIAN
    static System::Globalization::CalendarId _get_PERSIAN();
    // Set static field: static public System.Globalization.CalendarId PERSIAN
    static void _set_PERSIAN(System::Globalization::CalendarId value);
    // static field const value: static public System.Globalization.CalendarId UMALQURA
    static constexpr const uint16_t UMALQURA = 23u;
    // Get static field: static public System.Globalization.CalendarId UMALQURA
    static System::Globalization::CalendarId _get_UMALQURA();
    // Set static field: static public System.Globalization.CalendarId UMALQURA
    static void _set_UMALQURA(System::Globalization::CalendarId value);
    // static field const value: static public System.Globalization.CalendarId LAST_CALENDAR
    static constexpr const uint16_t LAST_CALENDAR = 23u;
    // Get static field: static public System.Globalization.CalendarId LAST_CALENDAR
    static System::Globalization::CalendarId _get_LAST_CALENDAR();
    // Set static field: static public System.Globalization.CalendarId LAST_CALENDAR
    static void _set_LAST_CALENDAR(System::Globalization::CalendarId value);
  }; // System.Globalization.CalendarId
  static check_size<sizeof(CalendarId), 0 + sizeof(uint16_t)> __System_Globalization_CalendarIdSizeCheck;
  static_assert(sizeof(CalendarId) == 0x2);
}
#pragma pack(pop)
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Globalization::CalendarId, "System.Globalization", "CalendarId");
