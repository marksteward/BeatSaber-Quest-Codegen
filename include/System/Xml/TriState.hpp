// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: System.Xml
namespace System::Xml {
  // Autogenerated type: System.Xml.TriState
  struct TriState : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // Creating value type constructor for type: TriState
    constexpr TriState(int value_ = {}) : value{value_} {}
    // Creating conversion operator: operator int
    constexpr operator int() const {
      return value;
    }
    // static field const value: static public System.Xml.TriState Unknown
    static constexpr const int Unknown = -1;
    // Get static field: static public System.Xml.TriState Unknown
    static System::Xml::TriState _get_Unknown();
    // Set static field: static public System.Xml.TriState Unknown
    static void _set_Unknown(System::Xml::TriState value);
    // static field const value: static public System.Xml.TriState False
    static constexpr const int False = 0;
    // Get static field: static public System.Xml.TriState False
    static System::Xml::TriState _get_False();
    // Set static field: static public System.Xml.TriState False
    static void _set_False(System::Xml::TriState value);
    // static field const value: static public System.Xml.TriState True
    static constexpr const int True = 1;
    // Get static field: static public System.Xml.TriState True
    static System::Xml::TriState _get_True();
    // Set static field: static public System.Xml.TriState True
    static void _set_True(System::Xml::TriState value);
  }; // System.Xml.TriState
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Xml::TriState, "System.Xml", "TriState");
#pragma pack(pop)
