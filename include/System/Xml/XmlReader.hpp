// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Type namespace: System.Xml
namespace System::Xml {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.XmlReader
  // [DebuggerDisplayAttribute] Offset: D86C58
  // [DebuggerDisplayAttribute] Offset: D86C58
  // [DefaultMemberAttribute] Offset: D86C58
  class XmlReader : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: XmlReader
    XmlReader() noexcept {}
    // Get static field: static private System.UInt32 IsTextualNodeBitmap
    static uint _get_IsTextualNodeBitmap();
    // Set static field: static private System.UInt32 IsTextualNodeBitmap
    static void _set_IsTextualNodeBitmap(uint value);
    // Get static field: static private System.UInt32 CanReadContentAsBitmap
    static uint _get_CanReadContentAsBitmap();
    // Set static field: static private System.UInt32 CanReadContentAsBitmap
    static void _set_CanReadContentAsBitmap(uint value);
    // Get static field: static private System.UInt32 HasValueBitmap
    static uint _get_HasValueBitmap();
    // Set static field: static private System.UInt32 HasValueBitmap
    static void _set_HasValueBitmap(uint value);
    // static private System.Void .cctor()
    // Offset: 0x193AAA4
    static void _cctor();
  }; // System.Xml.XmlReader
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Xml::XmlReader*, "System.Xml", "XmlReader");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::XmlReader::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Xml::XmlReader::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlReader*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
