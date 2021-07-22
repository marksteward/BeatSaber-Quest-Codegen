// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: NUnit::Framework::Interfaces
namespace NUnit::Framework::Interfaces {
  // Forward declaring type: AttributeDictionary
  class AttributeDictionary;
  // Forward declaring type: NodeList
  class NodeList;
}
// Forward declaring namespace: System::Text::RegularExpressions
namespace System::Text::RegularExpressions {
  // Forward declaring type: Regex
  class Regex;
}
// Forward declaring namespace: System::Xml
namespace System::Xml {
  // Forward declaring type: XmlWriter
  class XmlWriter;
}
// Completed forward declares
// Type namespace: NUnit.Framework.Interfaces
namespace NUnit::Framework::Interfaces {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: NUnit.Framework.Interfaces.TNode
  // [TokenAttribute] Offset: FFFFFFFF
  class TNode : public ::Il2CppObject {
    public:
    // Nested type: NUnit::Framework::Interfaces::TNode::$$c
    class $$c;
    // [DebuggerBrowsableAttribute] Offset: 0xDEF7F0
    // private System.String <Name>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* Name;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // [DebuggerBrowsableAttribute] Offset: 0xDEF82C
    // private System.String <Value>k__BackingField
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* Value;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // [DebuggerBrowsableAttribute] Offset: 0xDEF868
    // private System.Boolean <ValueIsCDATA>k__BackingField
    // Size: 0x1
    // Offset: 0x20
    bool ValueIsCDATA;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: ValueIsCDATA and: Attributes
    char __padding2[0x7] = {};
    // [DebuggerBrowsableAttribute] Offset: 0xDEF8A4
    // private NUnit.Framework.Interfaces.AttributeDictionary <Attributes>k__BackingField
    // Size: 0x8
    // Offset: 0x28
    NUnit::Framework::Interfaces::AttributeDictionary* Attributes;
    // Field size check
    static_assert(sizeof(NUnit::Framework::Interfaces::AttributeDictionary*) == 0x8);
    // [DebuggerBrowsableAttribute] Offset: 0xDEF8E0
    // private NUnit.Framework.Interfaces.NodeList <ChildNodes>k__BackingField
    // Size: 0x8
    // Offset: 0x30
    NUnit::Framework::Interfaces::NodeList* ChildNodes;
    // Field size check
    static_assert(sizeof(NUnit::Framework::Interfaces::NodeList*) == 0x8);
    // Creating value type constructor for type: TNode
    TNode(::Il2CppString* Name_ = {}, ::Il2CppString* Value_ = {}, bool ValueIsCDATA_ = {}, NUnit::Framework::Interfaces::AttributeDictionary* Attributes_ = {}, NUnit::Framework::Interfaces::NodeList* ChildNodes_ = {}) noexcept : Name{Name_}, Value{Value_}, ValueIsCDATA{ValueIsCDATA_}, Attributes{Attributes_}, ChildNodes{ChildNodes_} {}
    // Get static field: static private readonly System.Text.RegularExpressions.Regex InvalidXmlCharactersRegex
    static System::Text::RegularExpressions::Regex* _get_InvalidXmlCharactersRegex();
    // Set static field: static private readonly System.Text.RegularExpressions.Regex InvalidXmlCharactersRegex
    static void _set_InvalidXmlCharactersRegex(System::Text::RegularExpressions::Regex* value);
    // public System.String get_Name()
    // Offset: 0x1721580
    ::Il2CppString* get_Name();
    // private System.Void set_Name(System.String value)
    // Offset: 0x1721588
    void set_Name(::Il2CppString* value);
    // public System.String get_Value()
    // Offset: 0x1721590
    ::Il2CppString* get_Value();
    // public System.Void set_Value(System.String value)
    // Offset: 0x1721598
    void set_Value(::Il2CppString* value);
    // public System.Boolean get_ValueIsCDATA()
    // Offset: 0x17215A0
    bool get_ValueIsCDATA();
    // private System.Void set_ValueIsCDATA(System.Boolean value)
    // Offset: 0x17215A8
    void set_ValueIsCDATA(bool value);
    // public NUnit.Framework.Interfaces.AttributeDictionary get_Attributes()
    // Offset: 0x17215B4
    NUnit::Framework::Interfaces::AttributeDictionary* get_Attributes();
    // private System.Void set_Attributes(NUnit.Framework.Interfaces.AttributeDictionary value)
    // Offset: 0x17215BC
    void set_Attributes(NUnit::Framework::Interfaces::AttributeDictionary* value);
    // public NUnit.Framework.Interfaces.NodeList get_ChildNodes()
    // Offset: 0x17215C4
    NUnit::Framework::Interfaces::NodeList* get_ChildNodes();
    // private System.Void set_ChildNodes(NUnit.Framework.Interfaces.NodeList value)
    // Offset: 0x17215CC
    void set_ChildNodes(NUnit::Framework::Interfaces::NodeList* value);
    // public System.String get_OuterXml()
    // Offset: 0x17215D4
    ::Il2CppString* get_OuterXml();
    // public System.Void .ctor(System.String name)
    // Offset: 0x1721484
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TNode* New_ctor(::Il2CppString* name) {
      static auto ___internal__logger = ::Logger::get().WithContext("NUnit::Framework::Interfaces::TNode::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TNode*, creationType>(name)));
    }
    // public System.Void .ctor(System.String name, System.String value)
    // Offset: 0x1721518
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TNode* New_ctor(::Il2CppString* name, ::Il2CppString* value) {
      static auto ___internal__logger = ::Logger::get().WithContext("NUnit::Framework::Interfaces::TNode::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TNode*, creationType>(name, value)));
    }
    // public System.Void .ctor(System.String name, System.String value, System.Boolean valueIsCDATA)
    // Offset: 0x1721544
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TNode* New_ctor(::Il2CppString* name, ::Il2CppString* value, bool valueIsCDATA) {
      static auto ___internal__logger = ::Logger::get().WithContext("NUnit::Framework::Interfaces::TNode::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TNode*, creationType>(name, value, valueIsCDATA)));
    }
    // static private System.Void .cctor()
    // Offset: 0x1721F08
    static void _cctor();
    // public NUnit.Framework.Interfaces.TNode AddElement(System.String name)
    // Offset: 0x172197C
    NUnit::Framework::Interfaces::TNode* AddElement(::Il2CppString* name);
    // public NUnit.Framework.Interfaces.TNode AddElement(System.String name, System.String value)
    // Offset: 0x1721A08
    NUnit::Framework::Interfaces::TNode* AddElement(::Il2CppString* name, ::Il2CppString* value);
    // public NUnit.Framework.Interfaces.TNode AddElementWithCDATA(System.String name, System.String value)
    // Offset: 0x1721C04
    NUnit::Framework::Interfaces::TNode* AddElementWithCDATA(::Il2CppString* name, ::Il2CppString* value);
    // public System.Void AddAttribute(System.String name, System.String value)
    // Offset: 0x1721CC8
    void AddAttribute(::Il2CppString* name, ::Il2CppString* value);
    // public System.Void WriteTo(System.Xml.XmlWriter writer)
    // Offset: 0x172173C
    void WriteTo(System::Xml::XmlWriter* writer);
    // static private System.String EscapeInvalidXmlCharacters(System.String str)
    // Offset: 0x1721AC8
    static ::Il2CppString* EscapeInvalidXmlCharacters(::Il2CppString* str);
    // static private System.String CharToUnicodeSequence(System.Char symbol)
    // Offset: 0x1721E84
    static ::Il2CppString* CharToUnicodeSequence(::Il2CppChar symbol);
    // private System.Void WriteCDataTo(System.Xml.XmlWriter writer)
    // Offset: 0x1721D64
    void WriteCDataTo(System::Xml::XmlWriter* writer);
  }; // NUnit.Framework.Interfaces.TNode
  #pragma pack(pop)
  static check_size<sizeof(TNode), 48 + sizeof(NUnit::Framework::Interfaces::NodeList*)> __NUnit_Framework_Interfaces_TNodeSizeCheck;
  static_assert(sizeof(TNode) == 0x38);
}
DEFINE_IL2CPP_ARG_TYPE(NUnit::Framework::Interfaces::TNode*, "NUnit.Framework.Interfaces", "TNode");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: NUnit::Framework::Interfaces::TNode::get_Name
// Il2CppName: get_Name
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (NUnit::Framework::Interfaces::TNode::*)()>(&NUnit::Framework::Interfaces::TNode::get_Name)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Interfaces::TNode*), "get_Name", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Interfaces::TNode::set_Name
// Il2CppName: set_Name
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (NUnit::Framework::Interfaces::TNode::*)(::Il2CppString*)>(&NUnit::Framework::Interfaces::TNode::set_Name)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Interfaces::TNode*), "set_Name", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Interfaces::TNode::get_Value
// Il2CppName: get_Value
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (NUnit::Framework::Interfaces::TNode::*)()>(&NUnit::Framework::Interfaces::TNode::get_Value)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Interfaces::TNode*), "get_Value", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Interfaces::TNode::set_Value
// Il2CppName: set_Value
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (NUnit::Framework::Interfaces::TNode::*)(::Il2CppString*)>(&NUnit::Framework::Interfaces::TNode::set_Value)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Interfaces::TNode*), "set_Value", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Interfaces::TNode::get_ValueIsCDATA
// Il2CppName: get_ValueIsCDATA
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (NUnit::Framework::Interfaces::TNode::*)()>(&NUnit::Framework::Interfaces::TNode::get_ValueIsCDATA)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Interfaces::TNode*), "get_ValueIsCDATA", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Interfaces::TNode::set_ValueIsCDATA
// Il2CppName: set_ValueIsCDATA
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (NUnit::Framework::Interfaces::TNode::*)(bool)>(&NUnit::Framework::Interfaces::TNode::set_ValueIsCDATA)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Interfaces::TNode*), "set_ValueIsCDATA", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Interfaces::TNode::get_Attributes
// Il2CppName: get_Attributes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<NUnit::Framework::Interfaces::AttributeDictionary* (NUnit::Framework::Interfaces::TNode::*)()>(&NUnit::Framework::Interfaces::TNode::get_Attributes)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Interfaces::TNode*), "get_Attributes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Interfaces::TNode::set_Attributes
// Il2CppName: set_Attributes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (NUnit::Framework::Interfaces::TNode::*)(NUnit::Framework::Interfaces::AttributeDictionary*)>(&NUnit::Framework::Interfaces::TNode::set_Attributes)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("NUnit.Framework.Interfaces", "AttributeDictionary")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Interfaces::TNode*), "set_Attributes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Interfaces::TNode::get_ChildNodes
// Il2CppName: get_ChildNodes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<NUnit::Framework::Interfaces::NodeList* (NUnit::Framework::Interfaces::TNode::*)()>(&NUnit::Framework::Interfaces::TNode::get_ChildNodes)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Interfaces::TNode*), "get_ChildNodes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Interfaces::TNode::set_ChildNodes
// Il2CppName: set_ChildNodes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (NUnit::Framework::Interfaces::TNode::*)(NUnit::Framework::Interfaces::NodeList*)>(&NUnit::Framework::Interfaces::TNode::set_ChildNodes)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("NUnit.Framework.Interfaces", "NodeList")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Interfaces::TNode*), "set_ChildNodes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Interfaces::TNode::get_OuterXml
// Il2CppName: get_OuterXml
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (NUnit::Framework::Interfaces::TNode::*)()>(&NUnit::Framework::Interfaces::TNode::get_OuterXml)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Interfaces::TNode*), "get_OuterXml", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Interfaces::TNode::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: NUnit::Framework::Interfaces::TNode::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: NUnit::Framework::Interfaces::TNode::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: NUnit::Framework::Interfaces::TNode::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&NUnit::Framework::Interfaces::TNode::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Interfaces::TNode*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Interfaces::TNode::AddElement
// Il2CppName: AddElement
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<NUnit::Framework::Interfaces::TNode* (NUnit::Framework::Interfaces::TNode::*)(::Il2CppString*)>(&NUnit::Framework::Interfaces::TNode::AddElement)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Interfaces::TNode*), "AddElement", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Interfaces::TNode::AddElement
// Il2CppName: AddElement
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<NUnit::Framework::Interfaces::TNode* (NUnit::Framework::Interfaces::TNode::*)(::Il2CppString*, ::Il2CppString*)>(&NUnit::Framework::Interfaces::TNode::AddElement)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Interfaces::TNode*), "AddElement", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name, value});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Interfaces::TNode::AddElementWithCDATA
// Il2CppName: AddElementWithCDATA
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<NUnit::Framework::Interfaces::TNode* (NUnit::Framework::Interfaces::TNode::*)(::Il2CppString*, ::Il2CppString*)>(&NUnit::Framework::Interfaces::TNode::AddElementWithCDATA)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Interfaces::TNode*), "AddElementWithCDATA", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name, value});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Interfaces::TNode::AddAttribute
// Il2CppName: AddAttribute
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (NUnit::Framework::Interfaces::TNode::*)(::Il2CppString*, ::Il2CppString*)>(&NUnit::Framework::Interfaces::TNode::AddAttribute)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Interfaces::TNode*), "AddAttribute", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name, value});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Interfaces::TNode::WriteTo
// Il2CppName: WriteTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (NUnit::Framework::Interfaces::TNode::*)(System::Xml::XmlWriter*)>(&NUnit::Framework::Interfaces::TNode::WriteTo)> {
  static const MethodInfo* get() {
    static auto* writer = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlWriter")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Interfaces::TNode*), "WriteTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{writer});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Interfaces::TNode::EscapeInvalidXmlCharacters
// Il2CppName: EscapeInvalidXmlCharacters
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (*)(::Il2CppString*)>(&NUnit::Framework::Interfaces::TNode::EscapeInvalidXmlCharacters)> {
  static const MethodInfo* get() {
    static auto* str = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Interfaces::TNode*), "EscapeInvalidXmlCharacters", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{str});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Interfaces::TNode::CharToUnicodeSequence
// Il2CppName: CharToUnicodeSequence
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (*)(::Il2CppChar)>(&NUnit::Framework::Interfaces::TNode::CharToUnicodeSequence)> {
  static const MethodInfo* get() {
    static auto* symbol = &::il2cpp_utils::GetClassFromName("System", "Char")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Interfaces::TNode*), "CharToUnicodeSequence", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{symbol});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Interfaces::TNode::WriteCDataTo
// Il2CppName: WriteCDataTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (NUnit::Framework::Interfaces::TNode::*)(System::Xml::XmlWriter*)>(&NUnit::Framework::Interfaces::TNode::WriteCDataTo)> {
  static const MethodInfo* get() {
    static auto* writer = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlWriter")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Interfaces::TNode*), "WriteCDataTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{writer});
  }
};
