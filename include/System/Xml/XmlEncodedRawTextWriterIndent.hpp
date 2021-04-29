// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Xml.XmlEncodedRawTextWriter
#include "System/Xml/XmlEncodedRawTextWriter.hpp"
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
  // Forward declaring type: TextWriter
  class TextWriter;
  // Forward declaring type: Stream
  class Stream;
}
// Completed forward declares
// Type namespace: System.Xml
namespace System::Xml {
  // Size: 0xDC
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.XmlEncodedRawTextWriterIndent
  class XmlEncodedRawTextWriterIndent : public System::Xml::XmlEncodedRawTextWriter {
    public:
    // Writing base type padding for base size: 0xB6 to desired offset: 0xB8
    char ___base_padding[0x2] = {};
    // protected System.Int32 indentLevel
    // Size: 0x4
    // Offset: 0xB8
    int indentLevel;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // protected System.Boolean newLineOnAttributes
    // Size: 0x1
    // Offset: 0xBC
    bool newLineOnAttributes;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: newLineOnAttributes and: indentChars
    char __padding1[0x3] = {};
    // protected System.String indentChars
    // Size: 0x8
    // Offset: 0xC0
    ::Il2CppString* indentChars;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // protected System.Boolean mixedContent
    // Size: 0x1
    // Offset: 0xC8
    bool mixedContent;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: mixedContent and: mixedContentStack
    char __padding3[0x7] = {};
    // private System.Xml.BitStack mixedContentStack
    // Size: 0x8
    // Offset: 0xD0
    System::Xml::BitStack* mixedContentStack;
    // Field size check
    static_assert(sizeof(System::Xml::BitStack*) == 0x8);
    // protected System.Xml.ConformanceLevel conformanceLevel
    // Size: 0x4
    // Offset: 0xD8
    System::Xml::ConformanceLevel conformanceLevel;
    // Field size check
    static_assert(sizeof(System::Xml::ConformanceLevel) == 0x4);
    // Creating value type constructor for type: XmlEncodedRawTextWriterIndent
    XmlEncodedRawTextWriterIndent(int indentLevel_ = {}, bool newLineOnAttributes_ = {}, ::Il2CppString* indentChars_ = {}, bool mixedContent_ = {}, System::Xml::BitStack* mixedContentStack_ = {}, System::Xml::ConformanceLevel conformanceLevel_ = {}) noexcept : indentLevel{indentLevel_}, newLineOnAttributes{newLineOnAttributes_}, indentChars{indentChars_}, mixedContent{mixedContent_}, mixedContentStack{mixedContentStack_}, conformanceLevel{conformanceLevel_} {}
    // private System.Void Init(System.Xml.XmlWriterSettings settings)
    // Offset: 0x17AED20
    void Init(System::Xml::XmlWriterSettings* settings);
    // private System.Void WriteIndent()
    // Offset: 0x17AEEC8
    void WriteIndent();
    // public System.Void .ctor(System.IO.TextWriter writer, System.Xml.XmlWriterSettings settings)
    // Offset: 0x17AECF4
    // Implemented from: System.Xml.XmlEncodedRawTextWriter
    // Base method: System.Void XmlEncodedRawTextWriter::.ctor(System.IO.TextWriter writer, System.Xml.XmlWriterSettings settings)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XmlEncodedRawTextWriterIndent* New_ctor(System::IO::TextWriter* writer, System::Xml::XmlWriterSettings* settings) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Xml::XmlEncodedRawTextWriterIndent::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XmlEncodedRawTextWriterIndent*, creationType>(writer, settings)));
    }
    // public System.Void .ctor(System.IO.Stream stream, System.Xml.XmlWriterSettings settings)
    // Offset: 0x17AEE30
    // Implemented from: System.Xml.XmlEncodedRawTextWriter
    // Base method: System.Void XmlEncodedRawTextWriter::.ctor(System.IO.Stream stream, System.Xml.XmlWriterSettings settings)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XmlEncodedRawTextWriterIndent* New_ctor(System::IO::Stream* stream, System::Xml::XmlWriterSettings* settings) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Xml::XmlEncodedRawTextWriterIndent::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XmlEncodedRawTextWriterIndent*, creationType>(stream, settings)));
    }
    // public override System.Void WriteDocType(System.String name, System.String pubid, System.String sysid, System.String subset)
    // Offset: 0x17AEE5C
    // Implemented from: System.Xml.XmlEncodedRawTextWriter
    // Base method: System.Void XmlEncodedRawTextWriter::WriteDocType(System.String name, System.String pubid, System.String sysid, System.String subset)
    void WriteDocType(::Il2CppString* name, ::Il2CppString* pubid, ::Il2CppString* sysid, ::Il2CppString* subset);
    // public override System.Void WriteStartElement(System.String prefix, System.String localName, System.String ns)
    // Offset: 0x17AEF14
    // Implemented from: System.Xml.XmlEncodedRawTextWriter
    // Base method: System.Void XmlEncodedRawTextWriter::WriteStartElement(System.String prefix, System.String localName, System.String ns)
    void WriteStartElement(::Il2CppString* prefix, ::Il2CppString* localName, ::Il2CppString* ns);
    // override System.Void StartElementContent()
    // Offset: 0x17AEFB8
    // Implemented from: System.Xml.XmlEncodedRawTextWriter
    // Base method: System.Void XmlEncodedRawTextWriter::StartElementContent()
    void StartElementContent();
    // override System.Void OnRootElement(System.Xml.ConformanceLevel currentConformanceLevel)
    // Offset: 0x17AEFFC
    // Implemented from: System.Xml.XmlRawWriter
    // Base method: System.Void XmlRawWriter::OnRootElement(System.Xml.ConformanceLevel currentConformanceLevel)
    void OnRootElement(System::Xml::ConformanceLevel currentConformanceLevel);
    // override System.Void WriteEndElement(System.String prefix, System.String localName, System.String ns)
    // Offset: 0x17AF004
    // Implemented from: System.Xml.XmlEncodedRawTextWriter
    // Base method: System.Void XmlEncodedRawTextWriter::WriteEndElement(System.String prefix, System.String localName, System.String ns)
    void WriteEndElement(::Il2CppString* prefix, ::Il2CppString* localName, ::Il2CppString* ns);
    // override System.Void WriteFullEndElement(System.String prefix, System.String localName, System.String ns)
    // Offset: 0x17AF0A0
    // Implemented from: System.Xml.XmlEncodedRawTextWriter
    // Base method: System.Void XmlEncodedRawTextWriter::WriteFullEndElement(System.String prefix, System.String localName, System.String ns)
    void WriteFullEndElement(::Il2CppString* prefix, ::Il2CppString* localName, ::Il2CppString* ns);
    // public override System.Void WriteStartAttribute(System.String prefix, System.String localName, System.String ns)
    // Offset: 0x17AF13C
    // Implemented from: System.Xml.XmlEncodedRawTextWriter
    // Base method: System.Void XmlEncodedRawTextWriter::WriteStartAttribute(System.String prefix, System.String localName, System.String ns)
    void WriteStartAttribute(::Il2CppString* prefix, ::Il2CppString* localName, ::Il2CppString* ns);
    // public override System.Void WriteCData(System.String text)
    // Offset: 0x17AF184
    // Implemented from: System.Xml.XmlEncodedRawTextWriter
    // Base method: System.Void XmlEncodedRawTextWriter::WriteCData(System.String text)
    void WriteCData(::Il2CppString* text);
    // public override System.Void WriteComment(System.String text)
    // Offset: 0x17AF190
    // Implemented from: System.Xml.XmlEncodedRawTextWriter
    // Base method: System.Void XmlEncodedRawTextWriter::WriteComment(System.String text)
    void WriteComment(::Il2CppString* text);
    // public override System.Void WriteProcessingInstruction(System.String target, System.String text)
    // Offset: 0x17AF1D4
    // Implemented from: System.Xml.XmlEncodedRawTextWriter
    // Base method: System.Void XmlEncodedRawTextWriter::WriteProcessingInstruction(System.String target, System.String text)
    void WriteProcessingInstruction(::Il2CppString* target, ::Il2CppString* text);
    // public override System.Void WriteEntityRef(System.String name)
    // Offset: 0x17AF228
    // Implemented from: System.Xml.XmlEncodedRawTextWriter
    // Base method: System.Void XmlEncodedRawTextWriter::WriteEntityRef(System.String name)
    void WriteEntityRef(::Il2CppString* name);
    // public override System.Void WriteCharEntity(System.Char ch)
    // Offset: 0x17AF234
    // Implemented from: System.Xml.XmlEncodedRawTextWriter
    // Base method: System.Void XmlEncodedRawTextWriter::WriteCharEntity(System.Char ch)
    void WriteCharEntity(::Il2CppChar ch);
    // public override System.Void WriteSurrogateCharEntity(System.Char lowChar, System.Char highChar)
    // Offset: 0x17AF240
    // Implemented from: System.Xml.XmlEncodedRawTextWriter
    // Base method: System.Void XmlEncodedRawTextWriter::WriteSurrogateCharEntity(System.Char lowChar, System.Char highChar)
    void WriteSurrogateCharEntity(::Il2CppChar lowChar, ::Il2CppChar highChar);
    // public override System.Void WriteWhitespace(System.String ws)
    // Offset: 0x17AF24C
    // Implemented from: System.Xml.XmlEncodedRawTextWriter
    // Base method: System.Void XmlEncodedRawTextWriter::WriteWhitespace(System.String ws)
    void WriteWhitespace(::Il2CppString* ws);
    // public override System.Void WriteString(System.String text)
    // Offset: 0x17AF258
    // Implemented from: System.Xml.XmlEncodedRawTextWriter
    // Base method: System.Void XmlEncodedRawTextWriter::WriteString(System.String text)
    void WriteString(::Il2CppString* text);
    // public override System.Void WriteChars(System.Char[] buffer, System.Int32 index, System.Int32 count)
    // Offset: 0x17AF264
    // Implemented from: System.Xml.XmlEncodedRawTextWriter
    // Base method: System.Void XmlEncodedRawTextWriter::WriteChars(System.Char[] buffer, System.Int32 index, System.Int32 count)
    void WriteChars(::Array<::Il2CppChar>* buffer, int index, int count);
    // public override System.Void WriteRaw(System.Char[] buffer, System.Int32 index, System.Int32 count)
    // Offset: 0x17AF270
    // Implemented from: System.Xml.XmlEncodedRawTextWriter
    // Base method: System.Void XmlEncodedRawTextWriter::WriteRaw(System.Char[] buffer, System.Int32 index, System.Int32 count)
    void WriteRaw(::Array<::Il2CppChar>* buffer, int index, int count);
    // public override System.Void WriteRaw(System.String data)
    // Offset: 0x17AF27C
    // Implemented from: System.Xml.XmlEncodedRawTextWriter
    // Base method: System.Void XmlEncodedRawTextWriter::WriteRaw(System.String data)
    void WriteRaw(::Il2CppString* data);
    // public override System.Void WriteBase64(System.Byte[] buffer, System.Int32 index, System.Int32 count)
    // Offset: 0x17AF288
    // Implemented from: System.Xml.XmlRawWriter
    // Base method: System.Void XmlRawWriter::WriteBase64(System.Byte[] buffer, System.Int32 index, System.Int32 count)
    void WriteBase64(::Array<uint8_t>* buffer, int index, int count);
  }; // System.Xml.XmlEncodedRawTextWriterIndent
  #pragma pack(pop)
  static check_size<sizeof(XmlEncodedRawTextWriterIndent), 216 + sizeof(System::Xml::ConformanceLevel)> __System_Xml_XmlEncodedRawTextWriterIndentSizeCheck;
  static_assert(sizeof(XmlEncodedRawTextWriterIndent) == 0xDC);
}
DEFINE_IL2CPP_ARG_TYPE(System::Xml::XmlEncodedRawTextWriterIndent*, "System.Xml", "XmlEncodedRawTextWriterIndent");
