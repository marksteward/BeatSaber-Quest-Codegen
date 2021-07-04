// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Xml.XmlUtf8RawTextWriter
#include "System/Xml/XmlUtf8RawTextWriter.hpp"
// Including type: System.Xml.ElementProperties
#include "System/Xml/ElementProperties.hpp"
// Including type: System.Xml.AttributeProperties
#include "System/Xml/AttributeProperties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Xml
namespace System::Xml {
  // Forward declaring type: ByteStack
  class ByteStack;
  // Forward declaring type: TernaryTreeReadOnly
  class TernaryTreeReadOnly;
  // Forward declaring type: XmlWriterSettings
  class XmlWriterSettings;
  // Skipping declaration: XmlStandalone because it is already included!
}
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: Stream
  class Stream;
}
// Completed forward declares
// Type namespace: System.Xml
namespace System::Xml {
  // Size: 0xB1
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.HtmlUtf8RawTextWriter
  class HtmlUtf8RawTextWriter : public System::Xml::XmlUtf8RawTextWriter {
    public:
    // Writing base type padding for base size: 0x86 to desired offset: 0x88
    char ___base_padding[0x2] = {};
    // protected System.Xml.ByteStack elementScope
    // Size: 0x8
    // Offset: 0x88
    System::Xml::ByteStack* elementScope;
    // Field size check
    static_assert(sizeof(System::Xml::ByteStack*) == 0x8);
    // protected System.Xml.ElementProperties currentElementProperties
    // Size: 0x4
    // Offset: 0x90
    System::Xml::ElementProperties currentElementProperties;
    // Field size check
    static_assert(sizeof(System::Xml::ElementProperties) == 0x4);
    // private System.Xml.AttributeProperties currentAttributeProperties
    // Size: 0x4
    // Offset: 0x94
    System::Xml::AttributeProperties currentAttributeProperties;
    // Field size check
    static_assert(sizeof(System::Xml::AttributeProperties) == 0x4);
    // private System.Boolean endsWithAmpersand
    // Size: 0x1
    // Offset: 0x98
    bool endsWithAmpersand;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: endsWithAmpersand and: uriEscapingBuffer
    char __padding3[0x7] = {};
    // private System.Byte[] uriEscapingBuffer
    // Size: 0x8
    // Offset: 0xA0
    ::Array<uint8_t>* uriEscapingBuffer;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // private System.String mediaType
    // Size: 0x8
    // Offset: 0xA8
    ::Il2CppString* mediaType;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.Boolean doNotEscapeUriAttributes
    // Size: 0x1
    // Offset: 0xB0
    bool doNotEscapeUriAttributes;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: HtmlUtf8RawTextWriter
    HtmlUtf8RawTextWriter(System::Xml::ByteStack* elementScope_ = {}, System::Xml::ElementProperties currentElementProperties_ = {}, System::Xml::AttributeProperties currentAttributeProperties_ = {}, bool endsWithAmpersand_ = {}, ::Array<uint8_t>* uriEscapingBuffer_ = {}, ::Il2CppString* mediaType_ = {}, bool doNotEscapeUriAttributes_ = {}) noexcept : elementScope{elementScope_}, currentElementProperties{currentElementProperties_}, currentAttributeProperties{currentAttributeProperties_}, endsWithAmpersand{endsWithAmpersand_}, uriEscapingBuffer{uriEscapingBuffer_}, mediaType{mediaType_}, doNotEscapeUriAttributes{doNotEscapeUriAttributes_} {}
    // Get static field: static protected System.Xml.TernaryTreeReadOnly elementPropertySearch
    static System::Xml::TernaryTreeReadOnly* _get_elementPropertySearch();
    // Set static field: static protected System.Xml.TernaryTreeReadOnly elementPropertySearch
    static void _set_elementPropertySearch(System::Xml::TernaryTreeReadOnly* value);
    // Get static field: static protected System.Xml.TernaryTreeReadOnly attributePropertySearch
    static System::Xml::TernaryTreeReadOnly* _get_attributePropertySearch();
    // Set static field: static protected System.Xml.TernaryTreeReadOnly attributePropertySearch
    static void _set_attributePropertySearch(System::Xml::TernaryTreeReadOnly* value);
    // private System.Void Init(System.Xml.XmlWriterSettings settings)
    // Offset: 0x192E148
    void Init(System::Xml::XmlWriterSettings* settings);
    // protected System.Void WriteMetaElement()
    // Offset: 0x192E708
    void WriteMetaElement();
    // protected System.Void WriteHtmlElementTextBlock(System.Char* pSrc, System.Char* pSrcEnd)
    // Offset: 0x192F4FC
    void WriteHtmlElementTextBlock(::Il2CppChar* pSrc, ::Il2CppChar* pSrcEnd);
    // protected System.Void WriteHtmlAttributeTextBlock(System.Char* pSrc, System.Char* pSrcEnd)
    // Offset: 0x192F4BC
    void WriteHtmlAttributeTextBlock(::Il2CppChar* pSrc, ::Il2CppChar* pSrcEnd);
    // private System.Void WriteHtmlAttributeText(System.Char* pSrc, System.Char* pSrcEnd)
    // Offset: 0x193013C
    void WriteHtmlAttributeText(::Il2CppChar* pSrc, ::Il2CppChar* pSrcEnd);
    // private System.Void WriteUriAttributeText(System.Char* pSrc, System.Char* pSrcEnd)
    // Offset: 0x192FDE0
    void WriteUriAttributeText(::Il2CppChar* pSrc, ::Il2CppChar* pSrcEnd);
    // private System.Void OutputRestAmps()
    // Offset: 0x192EF40
    void OutputRestAmps();
    // public System.Void .ctor(System.IO.Stream stream, System.Xml.XmlWriterSettings settings)
    // Offset: 0x192DFC8
    // Implemented from: System.Xml.XmlUtf8RawTextWriter
    // Base method: System.Void XmlUtf8RawTextWriter::.ctor(System.IO.Stream stream, System.Xml.XmlWriterSettings settings)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HtmlUtf8RawTextWriter* New_ctor(System::IO::Stream* stream, System::Xml::XmlWriterSettings* settings) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Xml::HtmlUtf8RawTextWriter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HtmlUtf8RawTextWriter*, creationType>(stream, settings)));
    }
    // override System.Void WriteXmlDeclaration(System.Xml.XmlStandalone standalone)
    // Offset: 0x192E298
    // Implemented from: System.Xml.XmlUtf8RawTextWriter
    // Base method: System.Void XmlUtf8RawTextWriter::WriteXmlDeclaration(System.Xml.XmlStandalone standalone)
    void WriteXmlDeclaration(System::Xml::XmlStandalone standalone);
    // override System.Void WriteXmlDeclaration(System.String xmldecl)
    // Offset: 0x192E29C
    // Implemented from: System.Xml.XmlUtf8RawTextWriter
    // Base method: System.Void XmlUtf8RawTextWriter::WriteXmlDeclaration(System.String xmldecl)
    void WriteXmlDeclaration(::Il2CppString* xmldecl);
    // public override System.Void WriteDocType(System.String name, System.String pubid, System.String sysid, System.String subset)
    // Offset: 0x192E2A0
    // Implemented from: System.Xml.XmlUtf8RawTextWriter
    // Base method: System.Void XmlUtf8RawTextWriter::WriteDocType(System.String name, System.String pubid, System.String sysid, System.String subset)
    void WriteDocType(::Il2CppString* name, ::Il2CppString* pubid, ::Il2CppString* sysid, ::Il2CppString* subset);
    // public override System.Void WriteStartElement(System.String prefix, System.String localName, System.String ns)
    // Offset: 0x192E4DC
    // Implemented from: System.Xml.XmlUtf8RawTextWriter
    // Base method: System.Void XmlUtf8RawTextWriter::WriteStartElement(System.String prefix, System.String localName, System.String ns)
    void WriteStartElement(::Il2CppString* prefix, ::Il2CppString* localName, ::Il2CppString* ns);
    // override System.Void StartElementContent()
    // Offset: 0x192E6A4
    // Implemented from: System.Xml.XmlUtf8RawTextWriter
    // Base method: System.Void XmlUtf8RawTextWriter::StartElementContent()
    void StartElementContent();
    // override System.Void WriteEndElement(System.String prefix, System.String localName, System.String ns)
    // Offset: 0x192E7DC
    // Implemented from: System.Xml.XmlUtf8RawTextWriter
    // Base method: System.Void XmlUtf8RawTextWriter::WriteEndElement(System.String prefix, System.String localName, System.String ns)
    void WriteEndElement(::Il2CppString* prefix, ::Il2CppString* localName, ::Il2CppString* ns);
    // override System.Void WriteFullEndElement(System.String prefix, System.String localName, System.String ns)
    // Offset: 0x192EA30
    // Implemented from: System.Xml.XmlUtf8RawTextWriter
    // Base method: System.Void XmlUtf8RawTextWriter::WriteFullEndElement(System.String prefix, System.String localName, System.String ns)
    void WriteFullEndElement(::Il2CppString* prefix, ::Il2CppString* localName, ::Il2CppString* ns);
    // public override System.Void WriteStartAttribute(System.String prefix, System.String localName, System.String ns)
    // Offset: 0x192EC20
    // Implemented from: System.Xml.XmlUtf8RawTextWriter
    // Base method: System.Void XmlUtf8RawTextWriter::WriteStartAttribute(System.String prefix, System.String localName, System.String ns)
    void WriteStartAttribute(::Il2CppString* prefix, ::Il2CppString* localName, ::Il2CppString* ns);
    // public override System.Void WriteEndAttribute()
    // Offset: 0x192EEB4
    // Implemented from: System.Xml.XmlUtf8RawTextWriter
    // Base method: System.Void XmlUtf8RawTextWriter::WriteEndAttribute()
    void WriteEndAttribute();
    // public override System.Void WriteProcessingInstruction(System.String target, System.String text)
    // Offset: 0x192F010
    // Implemented from: System.Xml.XmlUtf8RawTextWriter
    // Base method: System.Void XmlUtf8RawTextWriter::WriteProcessingInstruction(System.String target, System.String text)
    void WriteProcessingInstruction(::Il2CppString* target, ::Il2CppString* text);
    // public override System.Void WriteString(System.String text)
    // Offset: 0x192F468
    // Implemented from: System.Xml.XmlUtf8RawTextWriter
    // Base method: System.Void XmlUtf8RawTextWriter::WriteString(System.String text)
    void WriteString(::Il2CppString* text);
    // public override System.Void WriteEntityRef(System.String name)
    // Offset: 0x192F50C
    // Implemented from: System.Xml.XmlUtf8RawTextWriter
    // Base method: System.Void XmlUtf8RawTextWriter::WriteEntityRef(System.String name)
    void WriteEntityRef(::Il2CppString* name);
    // public override System.Void WriteCharEntity(System.Char ch)
    // Offset: 0x192F57C
    // Implemented from: System.Xml.XmlUtf8RawTextWriter
    // Base method: System.Void XmlUtf8RawTextWriter::WriteCharEntity(System.Char ch)
    void WriteCharEntity(::Il2CppChar ch);
    // public override System.Void WriteSurrogateCharEntity(System.Char lowChar, System.Char highChar)
    // Offset: 0x192F5EC
    // Implemented from: System.Xml.XmlUtf8RawTextWriter
    // Base method: System.Void XmlUtf8RawTextWriter::WriteSurrogateCharEntity(System.Char lowChar, System.Char highChar)
    void WriteSurrogateCharEntity(::Il2CppChar lowChar, ::Il2CppChar highChar);
    // public override System.Void WriteChars(System.Char[] buffer, System.Int32 index, System.Int32 count)
    // Offset: 0x192F65C
    // Implemented from: System.Xml.XmlUtf8RawTextWriter
    // Base method: System.Void XmlUtf8RawTextWriter::WriteChars(System.Char[] buffer, System.Int32 index, System.Int32 count)
    void WriteChars(::Array<::Il2CppChar>* buffer, int index, int count);
  }; // System.Xml.HtmlUtf8RawTextWriter
  #pragma pack(pop)
  static check_size<sizeof(HtmlUtf8RawTextWriter), 176 + sizeof(bool)> __System_Xml_HtmlUtf8RawTextWriterSizeCheck;
  static_assert(sizeof(HtmlUtf8RawTextWriter) == 0xB1);
}
DEFINE_IL2CPP_ARG_TYPE(System::Xml::HtmlUtf8RawTextWriter*, "System.Xml", "HtmlUtf8RawTextWriter");
// Writing MetadataGetter for method: System::Xml::HtmlUtf8RawTextWriter::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::HtmlUtf8RawTextWriter::*)(System::Xml::XmlWriterSettings*)>(&System::Xml::HtmlUtf8RawTextWriter::Init)> {
  const MethodInfo* get() {
    static auto* settings = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlWriterSettings")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::HtmlUtf8RawTextWriter*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{settings});
  }
};
// Writing MetadataGetter for method: System::Xml::HtmlUtf8RawTextWriter::WriteMetaElement
// Il2CppName: WriteMetaElement
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::HtmlUtf8RawTextWriter::*)()>(&System::Xml::HtmlUtf8RawTextWriter::WriteMetaElement)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::HtmlUtf8RawTextWriter*), "WriteMetaElement", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::HtmlUtf8RawTextWriter::WriteHtmlElementTextBlock
// Il2CppName: WriteHtmlElementTextBlock
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::HtmlUtf8RawTextWriter::*)(::Il2CppChar*, ::Il2CppChar*)>(&System::Xml::HtmlUtf8RawTextWriter::WriteHtmlElementTextBlock)> {
  const MethodInfo* get() {
    static auto* pSrc = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Char"))->byval_arg;
    static auto* pSrcEnd = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Char"))->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::HtmlUtf8RawTextWriter*), "WriteHtmlElementTextBlock", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pSrc, pSrcEnd});
  }
};
// Writing MetadataGetter for method: System::Xml::HtmlUtf8RawTextWriter::WriteHtmlAttributeTextBlock
// Il2CppName: WriteHtmlAttributeTextBlock
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::HtmlUtf8RawTextWriter::*)(::Il2CppChar*, ::Il2CppChar*)>(&System::Xml::HtmlUtf8RawTextWriter::WriteHtmlAttributeTextBlock)> {
  const MethodInfo* get() {
    static auto* pSrc = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Char"))->byval_arg;
    static auto* pSrcEnd = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Char"))->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::HtmlUtf8RawTextWriter*), "WriteHtmlAttributeTextBlock", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pSrc, pSrcEnd});
  }
};
// Writing MetadataGetter for method: System::Xml::HtmlUtf8RawTextWriter::WriteHtmlAttributeText
// Il2CppName: WriteHtmlAttributeText
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::HtmlUtf8RawTextWriter::*)(::Il2CppChar*, ::Il2CppChar*)>(&System::Xml::HtmlUtf8RawTextWriter::WriteHtmlAttributeText)> {
  const MethodInfo* get() {
    static auto* pSrc = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Char"))->byval_arg;
    static auto* pSrcEnd = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Char"))->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::HtmlUtf8RawTextWriter*), "WriteHtmlAttributeText", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pSrc, pSrcEnd});
  }
};
// Writing MetadataGetter for method: System::Xml::HtmlUtf8RawTextWriter::WriteUriAttributeText
// Il2CppName: WriteUriAttributeText
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::HtmlUtf8RawTextWriter::*)(::Il2CppChar*, ::Il2CppChar*)>(&System::Xml::HtmlUtf8RawTextWriter::WriteUriAttributeText)> {
  const MethodInfo* get() {
    static auto* pSrc = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Char"))->byval_arg;
    static auto* pSrcEnd = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Char"))->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::HtmlUtf8RawTextWriter*), "WriteUriAttributeText", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pSrc, pSrcEnd});
  }
};
// Writing MetadataGetter for method: System::Xml::HtmlUtf8RawTextWriter::OutputRestAmps
// Il2CppName: OutputRestAmps
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::HtmlUtf8RawTextWriter::*)()>(&System::Xml::HtmlUtf8RawTextWriter::OutputRestAmps)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::HtmlUtf8RawTextWriter*), "OutputRestAmps", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::HtmlUtf8RawTextWriter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Xml::HtmlUtf8RawTextWriter::WriteXmlDeclaration
// Il2CppName: WriteXmlDeclaration
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::HtmlUtf8RawTextWriter::*)(System::Xml::XmlStandalone)>(&System::Xml::HtmlUtf8RawTextWriter::WriteXmlDeclaration)> {
  const MethodInfo* get() {
    static auto* standalone = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlStandalone")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::HtmlUtf8RawTextWriter*), "WriteXmlDeclaration", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{standalone});
  }
};
// Writing MetadataGetter for method: System::Xml::HtmlUtf8RawTextWriter::WriteXmlDeclaration
// Il2CppName: WriteXmlDeclaration
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::HtmlUtf8RawTextWriter::*)(::Il2CppString*)>(&System::Xml::HtmlUtf8RawTextWriter::WriteXmlDeclaration)> {
  const MethodInfo* get() {
    static auto* xmldecl = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::HtmlUtf8RawTextWriter*), "WriteXmlDeclaration", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{xmldecl});
  }
};
// Writing MetadataGetter for method: System::Xml::HtmlUtf8RawTextWriter::WriteDocType
// Il2CppName: WriteDocType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::HtmlUtf8RawTextWriter::*)(::Il2CppString*, ::Il2CppString*, ::Il2CppString*, ::Il2CppString*)>(&System::Xml::HtmlUtf8RawTextWriter::WriteDocType)> {
  const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* pubid = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* sysid = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* subset = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::HtmlUtf8RawTextWriter*), "WriteDocType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name, pubid, sysid, subset});
  }
};
// Writing MetadataGetter for method: System::Xml::HtmlUtf8RawTextWriter::WriteStartElement
// Il2CppName: WriteStartElement
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::HtmlUtf8RawTextWriter::*)(::Il2CppString*, ::Il2CppString*, ::Il2CppString*)>(&System::Xml::HtmlUtf8RawTextWriter::WriteStartElement)> {
  const MethodInfo* get() {
    static auto* prefix = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* localName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* ns = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::HtmlUtf8RawTextWriter*), "WriteStartElement", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{prefix, localName, ns});
  }
};
// Writing MetadataGetter for method: System::Xml::HtmlUtf8RawTextWriter::StartElementContent
// Il2CppName: StartElementContent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::HtmlUtf8RawTextWriter::*)()>(&System::Xml::HtmlUtf8RawTextWriter::StartElementContent)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::HtmlUtf8RawTextWriter*), "StartElementContent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::HtmlUtf8RawTextWriter::WriteEndElement
// Il2CppName: WriteEndElement
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::HtmlUtf8RawTextWriter::*)(::Il2CppString*, ::Il2CppString*, ::Il2CppString*)>(&System::Xml::HtmlUtf8RawTextWriter::WriteEndElement)> {
  const MethodInfo* get() {
    static auto* prefix = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* localName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* ns = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::HtmlUtf8RawTextWriter*), "WriteEndElement", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{prefix, localName, ns});
  }
};
// Writing MetadataGetter for method: System::Xml::HtmlUtf8RawTextWriter::WriteFullEndElement
// Il2CppName: WriteFullEndElement
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::HtmlUtf8RawTextWriter::*)(::Il2CppString*, ::Il2CppString*, ::Il2CppString*)>(&System::Xml::HtmlUtf8RawTextWriter::WriteFullEndElement)> {
  const MethodInfo* get() {
    static auto* prefix = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* localName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* ns = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::HtmlUtf8RawTextWriter*), "WriteFullEndElement", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{prefix, localName, ns});
  }
};
// Writing MetadataGetter for method: System::Xml::HtmlUtf8RawTextWriter::WriteStartAttribute
// Il2CppName: WriteStartAttribute
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::HtmlUtf8RawTextWriter::*)(::Il2CppString*, ::Il2CppString*, ::Il2CppString*)>(&System::Xml::HtmlUtf8RawTextWriter::WriteStartAttribute)> {
  const MethodInfo* get() {
    static auto* prefix = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* localName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* ns = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::HtmlUtf8RawTextWriter*), "WriteStartAttribute", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{prefix, localName, ns});
  }
};
// Writing MetadataGetter for method: System::Xml::HtmlUtf8RawTextWriter::WriteEndAttribute
// Il2CppName: WriteEndAttribute
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::HtmlUtf8RawTextWriter::*)()>(&System::Xml::HtmlUtf8RawTextWriter::WriteEndAttribute)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::HtmlUtf8RawTextWriter*), "WriteEndAttribute", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::HtmlUtf8RawTextWriter::WriteProcessingInstruction
// Il2CppName: WriteProcessingInstruction
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::HtmlUtf8RawTextWriter::*)(::Il2CppString*, ::Il2CppString*)>(&System::Xml::HtmlUtf8RawTextWriter::WriteProcessingInstruction)> {
  const MethodInfo* get() {
    static auto* target = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* text = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::HtmlUtf8RawTextWriter*), "WriteProcessingInstruction", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{target, text});
  }
};
// Writing MetadataGetter for method: System::Xml::HtmlUtf8RawTextWriter::WriteString
// Il2CppName: WriteString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::HtmlUtf8RawTextWriter::*)(::Il2CppString*)>(&System::Xml::HtmlUtf8RawTextWriter::WriteString)> {
  const MethodInfo* get() {
    static auto* text = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::HtmlUtf8RawTextWriter*), "WriteString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{text});
  }
};
// Writing MetadataGetter for method: System::Xml::HtmlUtf8RawTextWriter::WriteEntityRef
// Il2CppName: WriteEntityRef
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::HtmlUtf8RawTextWriter::*)(::Il2CppString*)>(&System::Xml::HtmlUtf8RawTextWriter::WriteEntityRef)> {
  const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::HtmlUtf8RawTextWriter*), "WriteEntityRef", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name});
  }
};
// Writing MetadataGetter for method: System::Xml::HtmlUtf8RawTextWriter::WriteCharEntity
// Il2CppName: WriteCharEntity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::HtmlUtf8RawTextWriter::*)(::Il2CppChar)>(&System::Xml::HtmlUtf8RawTextWriter::WriteCharEntity)> {
  const MethodInfo* get() {
    static auto* ch = &::il2cpp_utils::GetClassFromName("System", "Char")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::HtmlUtf8RawTextWriter*), "WriteCharEntity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ch});
  }
};
// Writing MetadataGetter for method: System::Xml::HtmlUtf8RawTextWriter::WriteSurrogateCharEntity
// Il2CppName: WriteSurrogateCharEntity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::HtmlUtf8RawTextWriter::*)(::Il2CppChar, ::Il2CppChar)>(&System::Xml::HtmlUtf8RawTextWriter::WriteSurrogateCharEntity)> {
  const MethodInfo* get() {
    static auto* lowChar = &::il2cpp_utils::GetClassFromName("System", "Char")->byval_arg;
    static auto* highChar = &::il2cpp_utils::GetClassFromName("System", "Char")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::HtmlUtf8RawTextWriter*), "WriteSurrogateCharEntity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{lowChar, highChar});
  }
};
// Writing MetadataGetter for method: System::Xml::HtmlUtf8RawTextWriter::WriteChars
// Il2CppName: WriteChars
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::HtmlUtf8RawTextWriter::*)(::Array<::Il2CppChar>*, int, int)>(&System::Xml::HtmlUtf8RawTextWriter::WriteChars)> {
  const MethodInfo* get() {
    static auto* buffer = &classof(::Array<::Array<::Il2CppChar>*>*)->byval_arg;
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::HtmlUtf8RawTextWriter*), "WriteChars", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, index, count});
  }
};
