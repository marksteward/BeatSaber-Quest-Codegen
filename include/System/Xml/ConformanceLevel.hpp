// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: System.Xml
namespace System::Xml {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.ConformanceLevel
  // [TokenAttribute] Offset: FFFFFFFF
  struct ConformanceLevel/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: ConformanceLevel
    constexpr ConformanceLevel(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.Xml.ConformanceLevel Auto
    static constexpr const int Auto = 0;
    // Get static field: static public System.Xml.ConformanceLevel Auto
    static System::Xml::ConformanceLevel _get_Auto();
    // Set static field: static public System.Xml.ConformanceLevel Auto
    static void _set_Auto(System::Xml::ConformanceLevel value);
    // static field const value: static public System.Xml.ConformanceLevel Fragment
    static constexpr const int Fragment = 1;
    // Get static field: static public System.Xml.ConformanceLevel Fragment
    static System::Xml::ConformanceLevel _get_Fragment();
    // Set static field: static public System.Xml.ConformanceLevel Fragment
    static void _set_Fragment(System::Xml::ConformanceLevel value);
    // static field const value: static public System.Xml.ConformanceLevel Document
    static constexpr const int Document = 2;
    // Get static field: static public System.Xml.ConformanceLevel Document
    static System::Xml::ConformanceLevel _get_Document();
    // Set static field: static public System.Xml.ConformanceLevel Document
    static void _set_Document(System::Xml::ConformanceLevel value);
    // Get instance field: public System.Int32 value__
    int _get_value__();
    // Set instance field: public System.Int32 value__
    void _set_value__(int value);
  }; // System.Xml.ConformanceLevel
  #pragma pack(pop)
  static check_size<sizeof(ConformanceLevel), 0 + sizeof(int)> __System_Xml_ConformanceLevelSizeCheck;
  static_assert(sizeof(ConformanceLevel) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Xml::ConformanceLevel, "System.Xml", "ConformanceLevel");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
