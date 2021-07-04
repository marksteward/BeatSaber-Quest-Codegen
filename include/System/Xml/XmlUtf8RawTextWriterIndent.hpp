// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Xml.XmlUtf8RawTextWriter
#include "System/Xml/XmlUtf8RawTextWriter.hpp"
// Including type: System.Xml.ConformanceLevel
#include "System/Xml/ConformanceLevel.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Xml
namespace System::Xml {
  // Forward declaring type: BitStack
  class BitStack;
  // Forward declaring type: XmlWriterSettings
  class XmlWriterSettings;
}
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: Stream
  class Stream;
}
// Completed forward declares
// Type namespace: System.Xml
namespace System::Xml {
  // Size: 0xAC
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.XmlUtf8RawTextWriterIndent
  class XmlUtf8RawTextWriterIndent : public System::Xml::XmlUtf8RawTextWriter {
    public:
    // Writing base type padding for base size: 0x86 to desired offset: 0x88
    char ___base_padding[0x2] = {};
    // protected System.Int32 indentLevel
    // Size: 0x4
    // Offset: 0x88
    int indentLevel;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // protected System.Boolean newLineOnAttributes
    // Size: 0x1
    // Offset: 0x8C
    bool newLineOnAttributes;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: newLineOnAttributes and: indentChars
    char __padding1[0x3] = {};
    // protected System.String indentChars
    // Size: 0x8
    // Offset: 0x90
    ::Il2CppString* indentChars;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // protected System.Boolean mixedContent
    // Size: 0x1
    // Offset: 0x98
    bool mixedContent;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: mixedContent and: mixedContentStack
    char __padding3[0x7] = {};
    // private System.Xml.BitStack mixedContentStack
    // Size: 0x8
    // Offset: 0xA0
    System::Xml::BitStack* mixedContentStack;
    // Field size check
    static_assert(sizeof(System::Xml::BitStack*) == 0x8);
    // protected System.Xml.ConformanceLevel conformanceLevel
    // Size: 0x4
    // Offset: 0xA8
    System::Xml::ConformanceLevel conformanceLevel;
    // Field size check
    static_assert(sizeof(System::Xml::ConformanceLevel) == 0x4);
    // Creating value type constructor for type: XmlUtf8RawTextWriterIndent
    XmlUtf8RawTextWriterIndent(int indentLevel_ = {}, bool newLineOnAttributes_ = {}, ::Il2CppString* indentChars_ = {}, bool mixedContent_ = {}, System::Xml::BitStack* mixedContentStack_ = {}, System::Xml::ConformanceLevel conformanceLevel_ = {}) noexcept : indentLevel{indentLevel_}, newLineOnAttributes{newLineOnAttributes_}, indentChars{indentChars_}, mixedContent{mixedContent_}, mixedContentStack{mixedContentStack_}, conformanceLevel{conformanceLevel_} {}
    // private System.Void Init(System.Xml.XmlWriterSettings settings)
    // Offset: 0x193CAC4
    void Init(System::Xml::XmlWriterSettings* settings);
    // private System.Void WriteIndent()
    // Offset: 0x193CC40
    void WriteIndent();
    // public System.Void .ctor(System.IO.Stream stream, System.Xml.XmlWriterSettings settings)
    // Offset: 0x193CA98
    // Implemented from: System.Xml.XmlUtf8RawTextWriter
    // Base method: System.Void XmlUtf8RawTextWriter::.ctor(System.IO.Stream stream, System.Xml.XmlWriterSettings settings)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XmlUtf8RawTextWriterIndent* New_ctor(System::IO::Stream* stream, System::Xml::XmlWriterSettings* settings) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Xml::XmlUtf8RawTextWriterIndent::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XmlUtf8RawTextWriterIndent*, creationType>(stream, settings)));
    }
    // public override System.Void WriteDocType(System.String name, System.String pubid, System.String sysid, System.String subset)
    // Offset: 0x193CBD4
    // Implemented from: System.Xml.XmlUtf8RawTextWriter
    // Base method: System.Void XmlUtf8RawTextWriter::WriteDocType(System.String name, System.String pubid, System.String sysid, System.String subset)
    void WriteDocType(::Il2CppString* name, ::Il2CppString* pubid, ::Il2CppString* sysid, ::Il2CppString* subset);
    // public override System.Void WriteStartElement(System.String prefix, System.String localName, System.String ns)
    // Offset: 0x193CC8C
    // Implemented from: System.Xml.XmlUtf8RawTextWriter
    // Base method: System.Void XmlUtf8RawTextWriter::WriteStartElement(System.String prefix, System.String localName, System.String ns)
    void WriteStartElement(::Il2CppString* prefix, ::Il2CppString* localName, ::Il2CppString* ns);
    // override System.Void StartElementContent()
    // Offset: 0x193CD30
    // Implemented from: System.Xml.XmlUtf8RawTextWriter
    // Base method: System.Void XmlUtf8RawTextWriter::StartElementContent()
    void StartElementContent();
    // override System.Void OnRootElement(System.Xml.ConformanceLevel currentConformanceLevel)
    // Offset: 0x193CD74
    // Implemented from: System.Xml.XmlRawWriter
    // Base method: System.Void XmlRawWriter::OnRootElement(System.Xml.ConformanceLevel currentConformanceLevel)
    void OnRootElement(System::Xml::ConformanceLevel currentConformanceLevel);
    // override System.Void WriteEndElement(System.String prefix, System.String localName, System.String ns)
    // Offset: 0x193CD7C
    // Implemented from: System.Xml.XmlUtf8RawTextWriter
    // Base method: System.Void XmlUtf8RawTextWriter::WriteEndElement(System.String prefix, System.String localName, System.String ns)
    void WriteEndElement(::Il2CppString* prefix, ::Il2CppString* localName, ::Il2CppString* ns);
    // override System.Void WriteFullEndElement(System.String prefix, System.String localName, System.String ns)
    // Offset: 0x193CE18
    // Implemented from: System.Xml.XmlUtf8RawTextWriter
    // Base method: System.Void XmlUtf8RawTextWriter::WriteFullEndElement(System.String prefix, System.String localName, System.String ns)
    void WriteFullEndElement(::Il2CppString* prefix, ::Il2CppString* localName, ::Il2CppString* ns);
    // public override System.Void WriteStartAttribute(System.String prefix, System.String localName, System.String ns)
    // Offset: 0x193CEB4
    // Implemented from: System.Xml.XmlUtf8RawTextWriter
    // Base method: System.Void XmlUtf8RawTextWriter::WriteStartAttribute(System.String prefix, System.String localName, System.String ns)
    void WriteStartAttribute(::Il2CppString* prefix, ::Il2CppString* localName, ::Il2CppString* ns);
    // public override System.Void WriteCData(System.String text)
    // Offset: 0x193CEFC
    // Implemented from: System.Xml.XmlUtf8RawTextWriter
    // Base method: System.Void XmlUtf8RawTextWriter::WriteCData(System.String text)
    void WriteCData(::Il2CppString* text);
    // public override System.Void WriteComment(System.String text)
    // Offset: 0x193CF08
    // Implemented from: System.Xml.XmlUtf8RawTextWriter
    // Base method: System.Void XmlUtf8RawTextWriter::WriteComment(System.String text)
    void WriteComment(::Il2CppString* text);
    // public override System.Void WriteProcessingInstruction(System.String target, System.String text)
    // Offset: 0x193CF4C
    // Implemented from: System.Xml.XmlUtf8RawTextWriter
    // Base method: System.Void XmlUtf8RawTextWriter::WriteProcessingInstruction(System.String target, System.String text)
    void WriteProcessingInstruction(::Il2CppString* target, ::Il2CppString* text);
    // public override System.Void WriteEntityRef(System.String name)
    // Offset: 0x193CFA0
    // Implemented from: System.Xml.XmlUtf8RawTextWriter
    // Base method: System.Void XmlUtf8RawTextWriter::WriteEntityRef(System.String name)
    void WriteEntityRef(::Il2CppString* name);
    // public override System.Void WriteCharEntity(System.Char ch)
    // Offset: 0x193CFAC
    // Implemented from: System.Xml.XmlUtf8RawTextWriter
    // Base method: System.Void XmlUtf8RawTextWriter::WriteCharEntity(System.Char ch)
    void WriteCharEntity(::Il2CppChar ch);
    // public override System.Void WriteSurrogateCharEntity(System.Char lowChar, System.Char highChar)
    // Offset: 0x193CFB8
    // Implemented from: System.Xml.XmlUtf8RawTextWriter
    // Base method: System.Void XmlUtf8RawTextWriter::WriteSurrogateCharEntity(System.Char lowChar, System.Char highChar)
    void WriteSurrogateCharEntity(::Il2CppChar lowChar, ::Il2CppChar highChar);
    // public override System.Void WriteWhitespace(System.String ws)
    // Offset: 0x193CFC4
    // Implemented from: System.Xml.XmlUtf8RawTextWriter
    // Base method: System.Void XmlUtf8RawTextWriter::WriteWhitespace(System.String ws)
    void WriteWhitespace(::Il2CppString* ws);
    // public override System.Void WriteString(System.String text)
    // Offset: 0x193CFD0
    // Implemented from: System.Xml.XmlUtf8RawTextWriter
    // Base method: System.Void XmlUtf8RawTextWriter::WriteString(System.String text)
    void WriteString(::Il2CppString* text);
    // public override System.Void WriteChars(System.Char[] buffer, System.Int32 index, System.Int32 count)
    // Offset: 0x193CFDC
    // Implemented from: System.Xml.XmlUtf8RawTextWriter
    // Base method: System.Void XmlUtf8RawTextWriter::WriteChars(System.Char[] buffer, System.Int32 index, System.Int32 count)
    void WriteChars(::Array<::Il2CppChar>* buffer, int index, int count);
    // public override System.Void WriteRaw(System.Char[] buffer, System.Int32 index, System.Int32 count)
    // Offset: 0x193CFE8
    // Implemented from: System.Xml.XmlUtf8RawTextWriter
    // Base method: System.Void XmlUtf8RawTextWriter::WriteRaw(System.Char[] buffer, System.Int32 index, System.Int32 count)
    void WriteRaw(::Array<::Il2CppChar>* buffer, int index, int count);
    // public override System.Void WriteRaw(System.String data)
    // Offset: 0x193CFF4
    // Implemented from: System.Xml.XmlUtf8RawTextWriter
    // Base method: System.Void XmlUtf8RawTextWriter::WriteRaw(System.String data)
    void WriteRaw(::Il2CppString* data);
    // public override System.Void WriteBase64(System.Byte[] buffer, System.Int32 index, System.Int32 count)
    // Offset: 0x193D000
    // Implemented from: System.Xml.XmlRawWriter
    // Base method: System.Void XmlRawWriter::WriteBase64(System.Byte[] buffer, System.Int32 index, System.Int32 count)
    void WriteBase64(::Array<uint8_t>* buffer, int index, int count);
  }; // System.Xml.XmlUtf8RawTextWriterIndent
  #pragma pack(pop)
  static check_size<sizeof(XmlUtf8RawTextWriterIndent), 168 + sizeof(System::Xml::ConformanceLevel)> __System_Xml_XmlUtf8RawTextWriterIndentSizeCheck;
  static_assert(sizeof(XmlUtf8RawTextWriterIndent) == 0xAC);
}
DEFINE_IL2CPP_ARG_TYPE(System::Xml::XmlUtf8RawTextWriterIndent*, "System.Xml", "XmlUtf8RawTextWriterIndent");
// Writing MetadataGetter for method: System::Xml::XmlUtf8RawTextWriterIndent::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlUtf8RawTextWriterIndent::*)(System::Xml::XmlWriterSettings*)>(&System::Xml::XmlUtf8RawTextWriterIndent::Init)> {
  const MethodInfo* get() {
    static auto* settings = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlWriterSettings")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlUtf8RawTextWriterIndent*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{settings});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlUtf8RawTextWriterIndent::WriteIndent
// Il2CppName: WriteIndent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlUtf8RawTextWriterIndent::*)()>(&System::Xml::XmlUtf8RawTextWriterIndent::WriteIndent)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlUtf8RawTextWriterIndent*), "WriteIndent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlUtf8RawTextWriterIndent::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Xml::XmlUtf8RawTextWriterIndent::WriteDocType
// Il2CppName: WriteDocType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlUtf8RawTextWriterIndent::*)(::Il2CppString*, ::Il2CppString*, ::Il2CppString*, ::Il2CppString*)>(&System::Xml::XmlUtf8RawTextWriterIndent::WriteDocType)> {
  const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* pubid = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* sysid = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* subset = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlUtf8RawTextWriterIndent*), "WriteDocType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name, pubid, sysid, subset});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlUtf8RawTextWriterIndent::WriteStartElement
// Il2CppName: WriteStartElement
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlUtf8RawTextWriterIndent::*)(::Il2CppString*, ::Il2CppString*, ::Il2CppString*)>(&System::Xml::XmlUtf8RawTextWriterIndent::WriteStartElement)> {
  const MethodInfo* get() {
    static auto* prefix = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* localName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* ns = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlUtf8RawTextWriterIndent*), "WriteStartElement", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{prefix, localName, ns});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlUtf8RawTextWriterIndent::StartElementContent
// Il2CppName: StartElementContent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlUtf8RawTextWriterIndent::*)()>(&System::Xml::XmlUtf8RawTextWriterIndent::StartElementContent)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlUtf8RawTextWriterIndent*), "StartElementContent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlUtf8RawTextWriterIndent::OnRootElement
// Il2CppName: OnRootElement
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlUtf8RawTextWriterIndent::*)(System::Xml::ConformanceLevel)>(&System::Xml::XmlUtf8RawTextWriterIndent::OnRootElement)> {
  const MethodInfo* get() {
    static auto* currentConformanceLevel = &::il2cpp_utils::GetClassFromName("System.Xml", "ConformanceLevel")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlUtf8RawTextWriterIndent*), "OnRootElement", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{currentConformanceLevel});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlUtf8RawTextWriterIndent::WriteEndElement
// Il2CppName: WriteEndElement
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlUtf8RawTextWriterIndent::*)(::Il2CppString*, ::Il2CppString*, ::Il2CppString*)>(&System::Xml::XmlUtf8RawTextWriterIndent::WriteEndElement)> {
  const MethodInfo* get() {
    static auto* prefix = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* localName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* ns = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlUtf8RawTextWriterIndent*), "WriteEndElement", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{prefix, localName, ns});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlUtf8RawTextWriterIndent::WriteFullEndElement
// Il2CppName: WriteFullEndElement
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlUtf8RawTextWriterIndent::*)(::Il2CppString*, ::Il2CppString*, ::Il2CppString*)>(&System::Xml::XmlUtf8RawTextWriterIndent::WriteFullEndElement)> {
  const MethodInfo* get() {
    static auto* prefix = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* localName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* ns = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlUtf8RawTextWriterIndent*), "WriteFullEndElement", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{prefix, localName, ns});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlUtf8RawTextWriterIndent::WriteStartAttribute
// Il2CppName: WriteStartAttribute
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlUtf8RawTextWriterIndent::*)(::Il2CppString*, ::Il2CppString*, ::Il2CppString*)>(&System::Xml::XmlUtf8RawTextWriterIndent::WriteStartAttribute)> {
  const MethodInfo* get() {
    static auto* prefix = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* localName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* ns = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlUtf8RawTextWriterIndent*), "WriteStartAttribute", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{prefix, localName, ns});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlUtf8RawTextWriterIndent::WriteCData
// Il2CppName: WriteCData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlUtf8RawTextWriterIndent::*)(::Il2CppString*)>(&System::Xml::XmlUtf8RawTextWriterIndent::WriteCData)> {
  const MethodInfo* get() {
    static auto* text = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlUtf8RawTextWriterIndent*), "WriteCData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{text});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlUtf8RawTextWriterIndent::WriteComment
// Il2CppName: WriteComment
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlUtf8RawTextWriterIndent::*)(::Il2CppString*)>(&System::Xml::XmlUtf8RawTextWriterIndent::WriteComment)> {
  const MethodInfo* get() {
    static auto* text = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlUtf8RawTextWriterIndent*), "WriteComment", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{text});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlUtf8RawTextWriterIndent::WriteProcessingInstruction
// Il2CppName: WriteProcessingInstruction
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlUtf8RawTextWriterIndent::*)(::Il2CppString*, ::Il2CppString*)>(&System::Xml::XmlUtf8RawTextWriterIndent::WriteProcessingInstruction)> {
  const MethodInfo* get() {
    static auto* target = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* text = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlUtf8RawTextWriterIndent*), "WriteProcessingInstruction", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{target, text});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlUtf8RawTextWriterIndent::WriteEntityRef
// Il2CppName: WriteEntityRef
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlUtf8RawTextWriterIndent::*)(::Il2CppString*)>(&System::Xml::XmlUtf8RawTextWriterIndent::WriteEntityRef)> {
  const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlUtf8RawTextWriterIndent*), "WriteEntityRef", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlUtf8RawTextWriterIndent::WriteCharEntity
// Il2CppName: WriteCharEntity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlUtf8RawTextWriterIndent::*)(::Il2CppChar)>(&System::Xml::XmlUtf8RawTextWriterIndent::WriteCharEntity)> {
  const MethodInfo* get() {
    static auto* ch = &::il2cpp_utils::GetClassFromName("System", "Char")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlUtf8RawTextWriterIndent*), "WriteCharEntity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ch});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlUtf8RawTextWriterIndent::WriteSurrogateCharEntity
// Il2CppName: WriteSurrogateCharEntity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlUtf8RawTextWriterIndent::*)(::Il2CppChar, ::Il2CppChar)>(&System::Xml::XmlUtf8RawTextWriterIndent::WriteSurrogateCharEntity)> {
  const MethodInfo* get() {
    static auto* lowChar = &::il2cpp_utils::GetClassFromName("System", "Char")->byval_arg;
    static auto* highChar = &::il2cpp_utils::GetClassFromName("System", "Char")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlUtf8RawTextWriterIndent*), "WriteSurrogateCharEntity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{lowChar, highChar});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlUtf8RawTextWriterIndent::WriteWhitespace
// Il2CppName: WriteWhitespace
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlUtf8RawTextWriterIndent::*)(::Il2CppString*)>(&System::Xml::XmlUtf8RawTextWriterIndent::WriteWhitespace)> {
  const MethodInfo* get() {
    static auto* ws = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlUtf8RawTextWriterIndent*), "WriteWhitespace", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ws});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlUtf8RawTextWriterIndent::WriteString
// Il2CppName: WriteString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlUtf8RawTextWriterIndent::*)(::Il2CppString*)>(&System::Xml::XmlUtf8RawTextWriterIndent::WriteString)> {
  const MethodInfo* get() {
    static auto* text = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlUtf8RawTextWriterIndent*), "WriteString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{text});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlUtf8RawTextWriterIndent::WriteChars
// Il2CppName: WriteChars
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlUtf8RawTextWriterIndent::*)(::Array<::Il2CppChar>*, int, int)>(&System::Xml::XmlUtf8RawTextWriterIndent::WriteChars)> {
  const MethodInfo* get() {
    static auto* buffer = &classof(::Array<::Array<::Il2CppChar>*>*)->byval_arg;
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlUtf8RawTextWriterIndent*), "WriteChars", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, index, count});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlUtf8RawTextWriterIndent::WriteRaw
// Il2CppName: WriteRaw
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlUtf8RawTextWriterIndent::*)(::Array<::Il2CppChar>*, int, int)>(&System::Xml::XmlUtf8RawTextWriterIndent::WriteRaw)> {
  const MethodInfo* get() {
    static auto* buffer = &classof(::Array<::Array<::Il2CppChar>*>*)->byval_arg;
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlUtf8RawTextWriterIndent*), "WriteRaw", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, index, count});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlUtf8RawTextWriterIndent::WriteRaw
// Il2CppName: WriteRaw
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlUtf8RawTextWriterIndent::*)(::Il2CppString*)>(&System::Xml::XmlUtf8RawTextWriterIndent::WriteRaw)> {
  const MethodInfo* get() {
    static auto* data = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlUtf8RawTextWriterIndent*), "WriteRaw", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{data});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlUtf8RawTextWriterIndent::WriteBase64
// Il2CppName: WriteBase64
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlUtf8RawTextWriterIndent::*)(::Array<uint8_t>*, int, int)>(&System::Xml::XmlUtf8RawTextWriterIndent::WriteBase64)> {
  const MethodInfo* get() {
    static auto* buffer = &classof(::Array<::Array<uint8_t>*>*)->byval_arg;
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlUtf8RawTextWriterIndent*), "WriteBase64", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, index, count});
  }
};
