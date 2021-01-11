// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Xml.XmlRawWriter
#include "System/Xml/XmlRawWriter.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Forward declaring namespace: System::Xml
namespace System::Xml {
  // Forward declaring type: XmlQualifiedName
  class XmlQualifiedName;
  // Forward declaring type: BitStack
  class BitStack;
  // Forward declaring type: XmlWriterSettings
  class XmlWriterSettings;
  // Forward declaring type: IXmlNamespaceResolver
  class IXmlNamespaceResolver;
  // Forward declaring type: XmlStandalone
  struct XmlStandalone;
}
// Completed forward declares
// Type namespace: System.Xml
namespace System::Xml {
  // Size: 0x64
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.QueryOutputWriter
  // [] Offset: FFFFFFFF
  class QueryOutputWriter : public System::Xml::XmlRawWriter {
    public:
    // private System.Xml.XmlRawWriter wrapped
    // Size: 0x8
    // Offset: 0x20
    System::Xml::XmlRawWriter* wrapped;
    // Field size check
    static_assert(sizeof(System::Xml::XmlRawWriter*) == 0x8);
    // private System.Boolean inCDataSection
    // Size: 0x1
    // Offset: 0x28
    bool inCDataSection;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: inCDataSection and: lookupCDataElems
    char __padding1[0x7] = {};
    // private System.Collections.Generic.Dictionary`2<System.Xml.XmlQualifiedName,System.Int32> lookupCDataElems
    // Size: 0x8
    // Offset: 0x30
    System::Collections::Generic::Dictionary_2<System::Xml::XmlQualifiedName*, int>* lookupCDataElems;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::Dictionary_2<System::Xml::XmlQualifiedName*, int>*) == 0x8);
    // private System.Xml.BitStack bitsCData
    // Size: 0x8
    // Offset: 0x38
    System::Xml::BitStack* bitsCData;
    // Field size check
    static_assert(sizeof(System::Xml::BitStack*) == 0x8);
    // private System.Xml.XmlQualifiedName qnameCData
    // Size: 0x8
    // Offset: 0x40
    System::Xml::XmlQualifiedName* qnameCData;
    // Field size check
    static_assert(sizeof(System::Xml::XmlQualifiedName*) == 0x8);
    // private System.Boolean outputDocType
    // Size: 0x1
    // Offset: 0x48
    bool outputDocType;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean checkWellFormedDoc
    // Size: 0x1
    // Offset: 0x49
    bool checkWellFormedDoc;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean hasDocElem
    // Size: 0x1
    // Offset: 0x4A
    bool hasDocElem;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean inAttr
    // Size: 0x1
    // Offset: 0x4B
    bool inAttr;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: inAttr and: systemId
    char __padding8[0x4] = {};
    // private System.String systemId
    // Size: 0x8
    // Offset: 0x50
    ::Il2CppString* systemId;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String publicId
    // Size: 0x8
    // Offset: 0x58
    ::Il2CppString* publicId;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.Int32 depth
    // Size: 0x4
    // Offset: 0x60
    int depth;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: QueryOutputWriter
    QueryOutputWriter(System::Xml::XmlRawWriter* wrapped_ = {}, bool inCDataSection_ = {}, System::Collections::Generic::Dictionary_2<System::Xml::XmlQualifiedName*, int>* lookupCDataElems_ = {}, System::Xml::BitStack* bitsCData_ = {}, System::Xml::XmlQualifiedName* qnameCData_ = {}, bool outputDocType_ = {}, bool checkWellFormedDoc_ = {}, bool hasDocElem_ = {}, bool inAttr_ = {}, ::Il2CppString* systemId_ = {}, ::Il2CppString* publicId_ = {}, int depth_ = {}) noexcept : wrapped{wrapped_}, inCDataSection{inCDataSection_}, lookupCDataElems{lookupCDataElems_}, bitsCData{bitsCData_}, qnameCData{qnameCData_}, outputDocType{outputDocType_}, checkWellFormedDoc{checkWellFormedDoc_}, hasDocElem{hasDocElem_}, inAttr{inAttr_}, systemId{systemId_}, publicId{publicId_}, depth{depth_} {}
    // public System.Void .ctor(System.Xml.XmlRawWriter writer, System.Xml.XmlWriterSettings settings)
    // Offset: 0x14E60A0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static QueryOutputWriter* New_ctor(System::Xml::XmlRawWriter* writer, System::Xml::XmlWriterSettings* settings) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Xml::QueryOutputWriter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<QueryOutputWriter*, creationType>(writer, settings)));
    }
    // private System.Boolean StartCDataSection()
    // Offset: 0x14E6A20
    bool StartCDataSection();
    // private System.Void EndCDataSection()
    // Offset: 0x14E6614
    void EndCDataSection();
    // override System.Void set_NamespaceResolver(System.Xml.IXmlNamespaceResolver value)
    // Offset: 0x14E6384
    // Implemented from: System.Xml.XmlRawWriter
    // Base method: System.Void XmlRawWriter::set_NamespaceResolver(System.Xml.IXmlNamespaceResolver value)
    void set_NamespaceResolver(System::Xml::IXmlNamespaceResolver* value);
    // override System.Void WriteXmlDeclaration(System.Xml.XmlStandalone standalone)
    // Offset: 0x14E63CC
    // Implemented from: System.Xml.XmlRawWriter
    // Base method: System.Void XmlRawWriter::WriteXmlDeclaration(System.Xml.XmlStandalone standalone)
    void WriteXmlDeclaration(System::Xml::XmlStandalone standalone);
    // override System.Void WriteXmlDeclaration(System.String xmldecl)
    // Offset: 0x14E63F0
    // Implemented from: System.Xml.XmlRawWriter
    // Base method: System.Void XmlRawWriter::WriteXmlDeclaration(System.String xmldecl)
    void WriteXmlDeclaration(::Il2CppString* xmldecl);
    // public override System.Void WriteDocType(System.String name, System.String pubid, System.String sysid, System.String subset)
    // Offset: 0x14E6414
    // Implemented from: System.Xml.XmlRawWriter
    // Base method: System.Void XmlRawWriter::WriteDocType(System.String name, System.String pubid, System.String sysid, System.String subset)
    void WriteDocType(::Il2CppString* name, ::Il2CppString* pubid, ::Il2CppString* sysid, ::Il2CppString* subset);
    // public override System.Void WriteStartElement(System.String prefix, System.String localName, System.String ns)
    // Offset: 0x14E6448
    // Implemented from: System.Xml.XmlWriter
    // Base method: System.Void XmlWriter::WriteStartElement(System.String prefix, System.String localName, System.String ns)
    void WriteStartElement(::Il2CppString* prefix, ::Il2CppString* localName, ::Il2CppString* ns);
    // override System.Void WriteEndElement(System.String prefix, System.String localName, System.String ns)
    // Offset: 0x14E672C
    // Implemented from: System.Xml.XmlRawWriter
    // Base method: System.Void XmlRawWriter::WriteEndElement(System.String prefix, System.String localName, System.String ns)
    void WriteEndElement(::Il2CppString* prefix, ::Il2CppString* localName, ::Il2CppString* ns);
    // override System.Void WriteFullEndElement(System.String prefix, System.String localName, System.String ns)
    // Offset: 0x14E67AC
    // Implemented from: System.Xml.XmlRawWriter
    // Base method: System.Void XmlRawWriter::WriteFullEndElement(System.String prefix, System.String localName, System.String ns)
    void WriteFullEndElement(::Il2CppString* prefix, ::Il2CppString* localName, ::Il2CppString* ns);
    // override System.Void StartElementContent()
    // Offset: 0x14E682C
    // Implemented from: System.Xml.XmlRawWriter
    // Base method: System.Void XmlRawWriter::StartElementContent()
    void StartElementContent();
    // public override System.Void WriteStartAttribute(System.String prefix, System.String localName, System.String ns)
    // Offset: 0x14E6850
    // Implemented from: System.Xml.XmlWriter
    // Base method: System.Void XmlWriter::WriteStartAttribute(System.String prefix, System.String localName, System.String ns)
    void WriteStartAttribute(::Il2CppString* prefix, ::Il2CppString* localName, ::Il2CppString* ns);
    // public override System.Void WriteEndAttribute()
    // Offset: 0x14E687C
    // Implemented from: System.Xml.XmlWriter
    // Base method: System.Void XmlWriter::WriteEndAttribute()
    void WriteEndAttribute();
    // override System.Void WriteNamespaceDeclaration(System.String prefix, System.String ns)
    // Offset: 0x14E68A4
    // Implemented from: System.Xml.XmlRawWriter
    // Base method: System.Void XmlRawWriter::WriteNamespaceDeclaration(System.String prefix, System.String ns)
    void WriteNamespaceDeclaration(::Il2CppString* prefix, ::Il2CppString* ns);
    // override System.Boolean get_SupportsNamespaceDeclarationInChunks()
    // Offset: 0x14E68C8
    // Implemented from: System.Xml.XmlRawWriter
    // Base method: System.Boolean XmlRawWriter::get_SupportsNamespaceDeclarationInChunks()
    bool get_SupportsNamespaceDeclarationInChunks();
    // override System.Void WriteStartNamespaceDeclaration(System.String prefix)
    // Offset: 0x14E68EC
    // Implemented from: System.Xml.XmlRawWriter
    // Base method: System.Void XmlRawWriter::WriteStartNamespaceDeclaration(System.String prefix)
    void WriteStartNamespaceDeclaration(::Il2CppString* prefix);
    // override System.Void WriteEndNamespaceDeclaration()
    // Offset: 0x14E6910
    // Implemented from: System.Xml.XmlRawWriter
    // Base method: System.Void XmlRawWriter::WriteEndNamespaceDeclaration()
    void WriteEndNamespaceDeclaration();
    // public override System.Void WriteCData(System.String text)
    // Offset: 0x14E6934
    // Implemented from: System.Xml.XmlRawWriter
    // Base method: System.Void XmlRawWriter::WriteCData(System.String text)
    void WriteCData(::Il2CppString* text);
    // public override System.Void WriteComment(System.String text)
    // Offset: 0x14E6954
    // Implemented from: System.Xml.XmlWriter
    // Base method: System.Void XmlWriter::WriteComment(System.String text)
    void WriteComment(::Il2CppString* text);
    // public override System.Void WriteProcessingInstruction(System.String name, System.String text)
    // Offset: 0x14E6980
    // Implemented from: System.Xml.XmlWriter
    // Base method: System.Void XmlWriter::WriteProcessingInstruction(System.String name, System.String text)
    void WriteProcessingInstruction(::Il2CppString* name, ::Il2CppString* text);
    // public override System.Void WriteWhitespace(System.String ws)
    // Offset: 0x14E69AC
    // Implemented from: System.Xml.XmlRawWriter
    // Base method: System.Void XmlRawWriter::WriteWhitespace(System.String ws)
    void WriteWhitespace(::Il2CppString* ws);
    // public override System.Void WriteString(System.String text)
    // Offset: 0x14E6A5C
    // Implemented from: System.Xml.XmlWriter
    // Base method: System.Void XmlWriter::WriteString(System.String text)
    void WriteString(::Il2CppString* text);
    // public override System.Void WriteChars(System.Char[] buffer, System.Int32 index, System.Int32 count)
    // Offset: 0x14E6AD0
    // Implemented from: System.Xml.XmlRawWriter
    // Base method: System.Void XmlRawWriter::WriteChars(System.Char[] buffer, System.Int32 index, System.Int32 count)
    void WriteChars(::Array<::Il2CppChar>* buffer, int index, int count);
    // public override System.Void WriteEntityRef(System.String name)
    // Offset: 0x14E6B64
    // Implemented from: System.Xml.XmlWriter
    // Base method: System.Void XmlWriter::WriteEntityRef(System.String name)
    void WriteEntityRef(::Il2CppString* name);
    // public override System.Void WriteCharEntity(System.Char ch)
    // Offset: 0x14E6B90
    // Implemented from: System.Xml.XmlRawWriter
    // Base method: System.Void XmlRawWriter::WriteCharEntity(System.Char ch)
    void WriteCharEntity(::Il2CppChar ch);
    // public override System.Void WriteSurrogateCharEntity(System.Char lowChar, System.Char highChar)
    // Offset: 0x14E6BBC
    // Implemented from: System.Xml.XmlRawWriter
    // Base method: System.Void XmlRawWriter::WriteSurrogateCharEntity(System.Char lowChar, System.Char highChar)
    void WriteSurrogateCharEntity(::Il2CppChar lowChar, ::Il2CppChar highChar);
    // public override System.Void WriteRaw(System.Char[] buffer, System.Int32 index, System.Int32 count)
    // Offset: 0x14E6BE8
    // Implemented from: System.Xml.XmlRawWriter
    // Base method: System.Void XmlRawWriter::WriteRaw(System.Char[] buffer, System.Int32 index, System.Int32 count)
    void WriteRaw(::Array<::Il2CppChar>* buffer, int index, int count);
    // public override System.Void WriteRaw(System.String data)
    // Offset: 0x14E6C7C
    // Implemented from: System.Xml.XmlRawWriter
    // Base method: System.Void XmlRawWriter::WriteRaw(System.String data)
    void WriteRaw(::Il2CppString* data);
    // public override System.Void Close()
    // Offset: 0x14E6CF0
    // Implemented from: System.Xml.XmlWriter
    // Base method: System.Void XmlWriter::Close()
    void Close();
    // public override System.Void Flush()
    // Offset: 0x14E6DAC
    // Implemented from: System.Xml.XmlWriter
    // Base method: System.Void XmlWriter::Flush()
    void Flush();
  }; // System.Xml.QueryOutputWriter
  static check_size<sizeof(QueryOutputWriter), 96 + sizeof(int)> __System_Xml_QueryOutputWriterSizeCheck;
  static_assert(sizeof(QueryOutputWriter) == 0x64);
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(System::Xml::QueryOutputWriter*, "System.Xml", "QueryOutputWriter");
