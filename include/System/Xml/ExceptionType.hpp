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
  // Autogenerated type: System.Xml.ExceptionType
  struct ExceptionType : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // Creating value type constructor for type: ExceptionType
    constexpr ExceptionType(int value_ = {}) : value{value_} {}
    // Creating conversion operator: operator int
    constexpr operator int() const {
      return value;
    }
    // static field const value: static public System.Xml.ExceptionType ArgumentException
    static constexpr const int ArgumentException = 0;
    // Get static field: static public System.Xml.ExceptionType ArgumentException
    static System::Xml::ExceptionType _get_ArgumentException();
    // Set static field: static public System.Xml.ExceptionType ArgumentException
    static void _set_ArgumentException(System::Xml::ExceptionType value);
    // static field const value: static public System.Xml.ExceptionType XmlException
    static constexpr const int XmlException = 1;
    // Get static field: static public System.Xml.ExceptionType XmlException
    static System::Xml::ExceptionType _get_XmlException();
    // Set static field: static public System.Xml.ExceptionType XmlException
    static void _set_XmlException(System::Xml::ExceptionType value);
  }; // System.Xml.ExceptionType
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Xml::ExceptionType, "System.Xml", "ExceptionType");
#pragma pack(pop)
