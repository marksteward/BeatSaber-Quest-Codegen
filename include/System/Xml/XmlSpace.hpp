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
  // Autogenerated type: System.Xml.XmlSpace
  // [TokenAttribute] Offset: FFFFFFFF
  struct XmlSpace/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: XmlSpace
    constexpr XmlSpace(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.Xml.XmlSpace None
    static constexpr const int None = 0;
    // Get static field: static public System.Xml.XmlSpace None
    static System::Xml::XmlSpace _get_None();
    // Set static field: static public System.Xml.XmlSpace None
    static void _set_None(System::Xml::XmlSpace value);
    // static field const value: static public System.Xml.XmlSpace Default
    static constexpr const int Default = 1;
    // Get static field: static public System.Xml.XmlSpace Default
    static System::Xml::XmlSpace _get_Default();
    // Set static field: static public System.Xml.XmlSpace Default
    static void _set_Default(System::Xml::XmlSpace value);
    // static field const value: static public System.Xml.XmlSpace Preserve
    static constexpr const int Preserve = 2;
    // Get static field: static public System.Xml.XmlSpace Preserve
    static System::Xml::XmlSpace _get_Preserve();
    // Set static field: static public System.Xml.XmlSpace Preserve
    static void _set_Preserve(System::Xml::XmlSpace value);
  }; // System.Xml.XmlSpace
  #pragma pack(pop)
  static check_size<sizeof(XmlSpace), 0 + sizeof(int)> __System_Xml_XmlSpaceSizeCheck;
  static_assert(sizeof(XmlSpace) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Xml::XmlSpace, "System.Xml", "XmlSpace");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
