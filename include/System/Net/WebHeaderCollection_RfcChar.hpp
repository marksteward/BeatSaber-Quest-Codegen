// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Net.WebHeaderCollection
#include "System/Net/WebHeaderCollection.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: System.Net
namespace System::Net {
  // Autogenerated type: System.Net.WebHeaderCollection/RfcChar
  struct WebHeaderCollection::RfcChar : public System::Enum {
    public:
    // public System.Byte value__
    // Offset: 0x0
    uint8_t value;
    // Creating value type constructor for type: RfcChar
    constexpr RfcChar(uint8_t value_ = {}) noexcept : value{value_} {}
    // Creating conversion operator: operator uint8_t
    constexpr operator uint8_t() const noexcept {
      return value;
    }
    // static field const value: static public System.Net.WebHeaderCollection/RfcChar High
    static constexpr const uint8_t High = 0u;
    // Get static field: static public System.Net.WebHeaderCollection/RfcChar High
    static System::Net::WebHeaderCollection::RfcChar _get_High();
    // Set static field: static public System.Net.WebHeaderCollection/RfcChar High
    static void _set_High(System::Net::WebHeaderCollection::RfcChar value);
    // static field const value: static public System.Net.WebHeaderCollection/RfcChar Reg
    static constexpr const uint8_t Reg = 1u;
    // Get static field: static public System.Net.WebHeaderCollection/RfcChar Reg
    static System::Net::WebHeaderCollection::RfcChar _get_Reg();
    // Set static field: static public System.Net.WebHeaderCollection/RfcChar Reg
    static void _set_Reg(System::Net::WebHeaderCollection::RfcChar value);
    // static field const value: static public System.Net.WebHeaderCollection/RfcChar Ctl
    static constexpr const uint8_t Ctl = 2u;
    // Get static field: static public System.Net.WebHeaderCollection/RfcChar Ctl
    static System::Net::WebHeaderCollection::RfcChar _get_Ctl();
    // Set static field: static public System.Net.WebHeaderCollection/RfcChar Ctl
    static void _set_Ctl(System::Net::WebHeaderCollection::RfcChar value);
    // static field const value: static public System.Net.WebHeaderCollection/RfcChar CR
    static constexpr const uint8_t CR = 3u;
    // Get static field: static public System.Net.WebHeaderCollection/RfcChar CR
    static System::Net::WebHeaderCollection::RfcChar _get_CR();
    // Set static field: static public System.Net.WebHeaderCollection/RfcChar CR
    static void _set_CR(System::Net::WebHeaderCollection::RfcChar value);
    // static field const value: static public System.Net.WebHeaderCollection/RfcChar LF
    static constexpr const uint8_t LF = 4u;
    // Get static field: static public System.Net.WebHeaderCollection/RfcChar LF
    static System::Net::WebHeaderCollection::RfcChar _get_LF();
    // Set static field: static public System.Net.WebHeaderCollection/RfcChar LF
    static void _set_LF(System::Net::WebHeaderCollection::RfcChar value);
    // static field const value: static public System.Net.WebHeaderCollection/RfcChar WS
    static constexpr const uint8_t WS = 5u;
    // Get static field: static public System.Net.WebHeaderCollection/RfcChar WS
    static System::Net::WebHeaderCollection::RfcChar _get_WS();
    // Set static field: static public System.Net.WebHeaderCollection/RfcChar WS
    static void _set_WS(System::Net::WebHeaderCollection::RfcChar value);
    // static field const value: static public System.Net.WebHeaderCollection/RfcChar Colon
    static constexpr const uint8_t Colon = 6u;
    // Get static field: static public System.Net.WebHeaderCollection/RfcChar Colon
    static System::Net::WebHeaderCollection::RfcChar _get_Colon();
    // Set static field: static public System.Net.WebHeaderCollection/RfcChar Colon
    static void _set_Colon(System::Net::WebHeaderCollection::RfcChar value);
    // static field const value: static public System.Net.WebHeaderCollection/RfcChar Delim
    static constexpr const uint8_t Delim = 7u;
    // Get static field: static public System.Net.WebHeaderCollection/RfcChar Delim
    static System::Net::WebHeaderCollection::RfcChar _get_Delim();
    // Set static field: static public System.Net.WebHeaderCollection/RfcChar Delim
    static void _set_Delim(System::Net::WebHeaderCollection::RfcChar value);
  }; // System.Net.WebHeaderCollection/RfcChar
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Net::WebHeaderCollection::RfcChar, "System.Net", "WebHeaderCollection/RfcChar");
#pragma pack(pop)