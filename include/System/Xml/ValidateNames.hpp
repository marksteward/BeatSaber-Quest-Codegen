// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Xml.XmlCharType
#include "System/Xml/XmlCharType.hpp"
// Completed includes
// Type namespace: System.Xml
namespace System::Xml {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.ValidateNames
  class ValidateNames : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: ValidateNames
    ValidateNames() noexcept {}
    // Get static field: static private System.Xml.XmlCharType xmlCharType
    static System::Xml::XmlCharType _get_xmlCharType();
    // Set static field: static private System.Xml.XmlCharType xmlCharType
    static void _set_xmlCharType(System::Xml::XmlCharType value);
    // static System.Int32 ParseNCName(System.String s, System.Int32 offset)
    // Offset: 0x19326C4
    static int ParseNCName(::Il2CppString* s, int offset);
    // static System.Int32 ParseQName(System.String s, System.Int32 offset, out System.Int32 colonOffset)
    // Offset: 0x1932810
    static int ParseQName(::Il2CppString* s, int offset, int& colonOffset);
    // static private System.Void .cctor()
    // Offset: 0x193290C
    static void _cctor();
  }; // System.Xml.ValidateNames
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Xml::ValidateNames*, "System.Xml", "ValidateNames");
// Writing MetadataGetter for method: System::Xml::ValidateNames::ParseNCName
// Il2CppName: ParseNCName
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Xml::ValidateNames::ParseQName
// Il2CppName: ParseQName
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Xml::ValidateNames::_cctor
// Il2CppName: .cctor
// Cannot perform method pointer template specialization from operators!
