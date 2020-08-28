// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.DateTimeParse
#include "System/DateTimeParse.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: System
namespace System {
  // Autogenerated type: System.DateTimeParse/TM
  struct DateTimeParse::TM : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // Creating value type constructor for type: TM
    constexpr TM(int value_ = {}) : value{value_} {}
    // Creating conversion operator: operator int
    constexpr operator int() const {
      return value;
    }
    // static field const value: static public System.DateTimeParse/TM NotSet
    static constexpr const int NotSet = -1;
    // Get static field: static public System.DateTimeParse/TM NotSet
    static System::DateTimeParse::TM _get_NotSet();
    // Set static field: static public System.DateTimeParse/TM NotSet
    static void _set_NotSet(System::DateTimeParse::TM value);
    // static field const value: static public System.DateTimeParse/TM AM
    static constexpr const int AM = 0;
    // Get static field: static public System.DateTimeParse/TM AM
    static System::DateTimeParse::TM _get_AM();
    // Set static field: static public System.DateTimeParse/TM AM
    static void _set_AM(System::DateTimeParse::TM value);
    // static field const value: static public System.DateTimeParse/TM PM
    static constexpr const int PM = 1;
    // Get static field: static public System.DateTimeParse/TM PM
    static System::DateTimeParse::TM _get_PM();
    // Set static field: static public System.DateTimeParse/TM PM
    static void _set_PM(System::DateTimeParse::TM value);
  }; // System.DateTimeParse/TM
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::DateTimeParse::TM, "System", "DateTimeParse/TM");
#pragma pack(pop)
