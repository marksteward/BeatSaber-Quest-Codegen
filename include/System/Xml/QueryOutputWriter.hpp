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
    // Offset: 0x1930F9C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static QueryOutputWriter* New_ctor(System::Xml::XmlRawWriter* writer, System::Xml::XmlWriterSettings* settings) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Xml::QueryOutputWriter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<QueryOutputWriter*, creationType>(writer, settings)));
    }
    // private System.Boolean StartCDataSection()
    // Offset: 0x1931870
    bool StartCDataSection();
    // private System.Void EndCDataSection()
    // Offset: 0x1931480
    void EndCDataSection();
    // override System.Void set_NamespaceResolver(System.Xml.IXmlNamespaceResolver value)
    // Offset: 0x1931228
    // Implemented from: System.Xml.XmlRawWriter
    // Base method: System.Void XmlRawWriter::set_NamespaceResolver(System.Xml.IXmlNamespaceResolver value)
    void set_NamespaceResolver(System::Xml::IXmlNamespaceResolver* value);
    // override System.Void WriteXmlDeclaration(System.Xml.XmlStandalone standalone)
    // Offset: 0x1931254
    // Implemented from: System.Xml.XmlRawWriter
    // Base method: System.Void XmlRawWriter::WriteXmlDeclaration(System.Xml.XmlStandalone standalone)
    void WriteXmlDeclaration(System::Xml::XmlStandalone standalone);
    // override System.Void WriteXmlDeclaration(System.String xmldecl)
    // Offset: 0x1931278
    // Implemented from: System.Xml.XmlRawWriter
    // Base method: System.Void XmlRawWriter::WriteXmlDeclaration(System.String xmldecl)
    void WriteXmlDeclaration(::Il2CppString* xmldecl);
    // public override System.Void WriteDocType(System.String name, System.String pubid, System.String sysid, System.String subset)
    // Offset: 0x193129C
    // Implemented from: System.Xml.XmlRawWriter
    // Base method: System.Void XmlRawWriter::WriteDocType(System.String name, System.String pubid, System.String sysid, System.String subset)
    void WriteDocType(::Il2CppString* name, ::Il2CppString* pubid, ::Il2CppString* sysid, ::Il2CppString* subset);
    // public override System.Void WriteStartElement(System.String prefix, System.String localName, System.String ns)
    // Offset: 0x19312D0
    // Implemented from: System.Xml.XmlWriter
    // Base method: System.Void XmlWriter::WriteStartElement(System.String prefix, System.String localName, System.String ns)
    void WriteStartElement(::Il2CppString* prefix, ::Il2CppString* localName, ::Il2CppString* ns);
    // override System.Void WriteEndElement(System.String prefix, System.String localName, System.String ns)
    // Offset: 0x193157C
    // Implemented from: System.Xml.XmlRawWriter
    // Base method: System.Void XmlRawWriter::WriteEndElement(System.String prefix, System.String localName, System.String ns)
    void WriteEndElement(::Il2CppString* prefix, ::Il2CppString* localName, ::Il2CppString* ns);
    // override System.Void WriteFullEndElement(System.String prefix, System.String localName, System.String ns)
    // Offset: 0x19315FC
    // Implemented from: System.Xml.XmlRawWriter
    // Base method: System.Void XmlRawWriter::WriteFullEndElement(System.String prefix, System.String localName, System.String ns)
    void WriteFullEndElement(::Il2CppString* prefix, ::Il2CppString* localName, ::Il2CppString* ns);
    // override System.Void StartElementContent()
    // Offset: 0x193167C
    // Implemented from: System.Xml.XmlRawWriter
    // Base method: System.Void XmlRawWriter::StartElementContent()
    void StartElementContent();
    // public override System.Void WriteStartAttribute(System.String prefix, System.String localName, System.String ns)
    // Offset: 0x19316A0
    // Implemented from: System.Xml.XmlWriter
    // Base method: System.Void XmlWriter::WriteStartAttribute(System.String prefix, System.String localName, System.String ns)
    void WriteStartAttribute(::Il2CppString* prefix, ::Il2CppString* localName, ::Il2CppString* ns);
    // public override System.Void WriteEndAttribute()
    // Offset: 0x19316CC
    // Implemented from: System.Xml.XmlWriter
    // Base method: System.Void XmlWriter::WriteEndAttribute()
    void WriteEndAttribute();
    // override System.Void WriteNamespaceDeclaration(System.String prefix, System.String ns)
    // Offset: 0x19316F4
    // Implemented from: System.Xml.XmlRawWriter
    // Base method: System.Void XmlRawWriter::WriteNamespaceDeclaration(System.String prefix, System.String ns)
    void WriteNamespaceDeclaration(::Il2CppString* prefix, ::Il2CppString* ns);
    // override System.Boolean get_SupportsNamespaceDeclarationInChunks()
    // Offset: 0x1931718
    // Implemented from: System.Xml.XmlRawWriter
    // Base method: System.Boolean XmlRawWriter::get_SupportsNamespaceDeclarationInChunks()
    bool get_SupportsNamespaceDeclarationInChunks();
    // override System.Void WriteStartNamespaceDeclaration(System.String prefix)
    // Offset: 0x193173C
    // Implemented from: System.Xml.XmlRawWriter
    // Base method: System.Void XmlRawWriter::WriteStartNamespaceDeclaration(System.String prefix)
    void WriteStartNamespaceDeclaration(::Il2CppString* prefix);
    // override System.Void WriteEndNamespaceDeclaration()
    // Offset: 0x1931760
    // Implemented from: System.Xml.XmlRawWriter
    // Base method: System.Void XmlRawWriter::WriteEndNamespaceDeclaration()
    void WriteEndNamespaceDeclaration();
    // public override System.Void WriteCData(System.String text)
    // Offset: 0x1931784
    // Implemented from: System.Xml.XmlRawWriter
    // Base method: System.Void XmlRawWriter::WriteCData(System.String text)
    void WriteCData(::Il2CppString* text);
    // public override System.Void WriteComment(System.String text)
    // Offset: 0x19317A4
    // Implemented from: System.Xml.XmlWriter
    // Base method: System.Void XmlWriter::WriteComment(System.String text)
    void WriteComment(::Il2CppString* text);
    // public override System.Void WriteProcessingInstruction(System.String name, System.String text)
    // Offset: 0x19317D0
    // Implemented from: System.Xml.XmlWriter
    // Base method: System.Void XmlWriter::WriteProcessingInstruction(System.String name, System.String text)
    void WriteProcessingInstruction(::Il2CppString* name, ::Il2CppString* text);
    // public override System.Void WriteWhitespace(System.String ws)
    // Offset: 0x19317FC
    // Implemented from: System.Xml.XmlRawWriter
    // Base method: System.Void XmlRawWriter::WriteWhitespace(System.String ws)
    void WriteWhitespace(::Il2CppString* ws);
    // public override System.Void WriteString(System.String text)
    // Offset: 0x19318AC
    // Implemented from: System.Xml.XmlWriter
    // Base method: System.Void XmlWriter::WriteString(System.String text)
    void WriteString(::Il2CppString* text);
    // public override System.Void WriteChars(System.Char[] buffer, System.Int32 index, System.Int32 count)
    // Offset: 0x1931920
    // Implemented from: System.Xml.XmlRawWriter
    // Base method: System.Void XmlRawWriter::WriteChars(System.Char[] buffer, System.Int32 index, System.Int32 count)
    void WriteChars(::Array<::Il2CppChar>* buffer, int index, int count);
    // public override System.Void WriteEntityRef(System.String name)
    // Offset: 0x19319B4
    // Implemented from: System.Xml.XmlWriter
    // Base method: System.Void XmlWriter::WriteEntityRef(System.String name)
    void WriteEntityRef(::Il2CppString* name);
    // public override System.Void WriteCharEntity(System.Char ch)
    // Offset: 0x19319E0
    // Implemented from: System.Xml.XmlRawWriter
    // Base method: System.Void XmlRawWriter::WriteCharEntity(System.Char ch)
    void WriteCharEntity(::Il2CppChar ch);
    // public override System.Void WriteSurrogateCharEntity(System.Char lowChar, System.Char highChar)
    // Offset: 0x1931A0C
    // Implemented from: System.Xml.XmlRawWriter
    // Base method: System.Void XmlRawWriter::WriteSurrogateCharEntity(System.Char lowChar, System.Char highChar)
    void WriteSurrogateCharEntity(::Il2CppChar lowChar, ::Il2CppChar highChar);
    // public override System.Void WriteRaw(System.Char[] buffer, System.Int32 index, System.Int32 count)
    // Offset: 0x1931A38
    // Implemented from: System.Xml.XmlRawWriter
    // Base method: System.Void XmlRawWriter::WriteRaw(System.Char[] buffer, System.Int32 index, System.Int32 count)
    void WriteRaw(::Array<::Il2CppChar>* buffer, int index, int count);
    // public override System.Void WriteRaw(System.String data)
    // Offset: 0x1931ACC
    // Implemented from: System.Xml.XmlRawWriter
    // Base method: System.Void XmlRawWriter::WriteRaw(System.String data)
    void WriteRaw(::Il2CppString* data);
    // public override System.Void Close()
    // Offset: 0x1931B40
    // Implemented from: System.Xml.XmlWriter
    // Base method: System.Void XmlWriter::Close()
    void Close();
    // public override System.Void Flush()
    // Offset: 0x1931BFC
    // Implemented from: System.Xml.XmlWriter
    // Base method: System.Void XmlWriter::Flush()
    void Flush();
  }; // System.Xml.QueryOutputWriter
  #pragma pack(pop)
  static check_size<sizeof(QueryOutputWriter), 96 + sizeof(int)> __System_Xml_QueryOutputWriterSizeCheck;
  static_assert(sizeof(QueryOutputWriter) == 0x64);
}
DEFINE_IL2CPP_ARG_TYPE(System::Xml::QueryOutputWriter*, "System.Xml", "QueryOutputWriter");
// Writing MetadataGetter for method: System::Xml::QueryOutputWriter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Xml::QueryOutputWriter::StartCDataSection
// Il2CppName: StartCDataSection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::QueryOutputWriter::*)()>(&System::Xml::QueryOutputWriter::StartCDataSection)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::QueryOutputWriter*), "StartCDataSection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::QueryOutputWriter::EndCDataSection
// Il2CppName: EndCDataSection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::QueryOutputWriter::*)()>(&System::Xml::QueryOutputWriter::EndCDataSection)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::QueryOutputWriter*), "EndCDataSection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::QueryOutputWriter::set_NamespaceResolver
// Il2CppName: set_NamespaceResolver
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::QueryOutputWriter::*)(System::Xml::IXmlNamespaceResolver*)>(&System::Xml::QueryOutputWriter::set_NamespaceResolver)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System.Xml", "IXmlNamespaceResolver")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::QueryOutputWriter*), "set_NamespaceResolver", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Xml::QueryOutputWriter::WriteXmlDeclaration
// Il2CppName: WriteXmlDeclaration
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::QueryOutputWriter::*)(System::Xml::XmlStandalone)>(&System::Xml::QueryOutputWriter::WriteXmlDeclaration)> {
  const MethodInfo* get() {
    static auto* standalone = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlStandalone")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::QueryOutputWriter*), "WriteXmlDeclaration", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{standalone});
  }
};
// Writing MetadataGetter for method: System::Xml::QueryOutputWriter::WriteXmlDeclaration
// Il2CppName: WriteXmlDeclaration
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::QueryOutputWriter::*)(::Il2CppString*)>(&System::Xml::QueryOutputWriter::WriteXmlDeclaration)> {
  const MethodInfo* get() {
    static auto* xmldecl = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::QueryOutputWriter*), "WriteXmlDeclaration", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{xmldecl});
  }
};
// Writing MetadataGetter for method: System::Xml::QueryOutputWriter::WriteDocType
// Il2CppName: WriteDocType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::QueryOutputWriter::*)(::Il2CppString*, ::Il2CppString*, ::Il2CppString*, ::Il2CppString*)>(&System::Xml::QueryOutputWriter::WriteDocType)> {
  const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* pubid = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* sysid = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* subset = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::QueryOutputWriter*), "WriteDocType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name, pubid, sysid, subset});
  }
};
// Writing MetadataGetter for method: System::Xml::QueryOutputWriter::WriteStartElement
// Il2CppName: WriteStartElement
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::QueryOutputWriter::*)(::Il2CppString*, ::Il2CppString*, ::Il2CppString*)>(&System::Xml::QueryOutputWriter::WriteStartElement)> {
  const MethodInfo* get() {
    static auto* prefix = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* localName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* ns = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::QueryOutputWriter*), "WriteStartElement", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{prefix, localName, ns});
  }
};
// Writing MetadataGetter for method: System::Xml::QueryOutputWriter::WriteEndElement
// Il2CppName: WriteEndElement
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::QueryOutputWriter::*)(::Il2CppString*, ::Il2CppString*, ::Il2CppString*)>(&System::Xml::QueryOutputWriter::WriteEndElement)> {
  const MethodInfo* get() {
    static auto* prefix = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* localName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* ns = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::QueryOutputWriter*), "WriteEndElement", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{prefix, localName, ns});
  }
};
// Writing MetadataGetter for method: System::Xml::QueryOutputWriter::WriteFullEndElement
// Il2CppName: WriteFullEndElement
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::QueryOutputWriter::*)(::Il2CppString*, ::Il2CppString*, ::Il2CppString*)>(&System::Xml::QueryOutputWriter::WriteFullEndElement)> {
  const MethodInfo* get() {
    static auto* prefix = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* localName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* ns = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::QueryOutputWriter*), "WriteFullEndElement", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{prefix, localName, ns});
  }
};
// Writing MetadataGetter for method: System::Xml::QueryOutputWriter::StartElementContent
// Il2CppName: StartElementContent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::QueryOutputWriter::*)()>(&System::Xml::QueryOutputWriter::StartElementContent)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::QueryOutputWriter*), "StartElementContent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::QueryOutputWriter::WriteStartAttribute
// Il2CppName: WriteStartAttribute
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::QueryOutputWriter::*)(::Il2CppString*, ::Il2CppString*, ::Il2CppString*)>(&System::Xml::QueryOutputWriter::WriteStartAttribute)> {
  const MethodInfo* get() {
    static auto* prefix = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* localName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* ns = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::QueryOutputWriter*), "WriteStartAttribute", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{prefix, localName, ns});
  }
};
// Writing MetadataGetter for method: System::Xml::QueryOutputWriter::WriteEndAttribute
// Il2CppName: WriteEndAttribute
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::QueryOutputWriter::*)()>(&System::Xml::QueryOutputWriter::WriteEndAttribute)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::QueryOutputWriter*), "WriteEndAttribute", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::QueryOutputWriter::WriteNamespaceDeclaration
// Il2CppName: WriteNamespaceDeclaration
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::QueryOutputWriter::*)(::Il2CppString*, ::Il2CppString*)>(&System::Xml::QueryOutputWriter::WriteNamespaceDeclaration)> {
  const MethodInfo* get() {
    static auto* prefix = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* ns = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::QueryOutputWriter*), "WriteNamespaceDeclaration", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{prefix, ns});
  }
};
// Writing MetadataGetter for method: System::Xml::QueryOutputWriter::get_SupportsNamespaceDeclarationInChunks
// Il2CppName: get_SupportsNamespaceDeclarationInChunks
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::QueryOutputWriter::*)()>(&System::Xml::QueryOutputWriter::get_SupportsNamespaceDeclarationInChunks)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::QueryOutputWriter*), "get_SupportsNamespaceDeclarationInChunks", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::QueryOutputWriter::WriteStartNamespaceDeclaration
// Il2CppName: WriteStartNamespaceDeclaration
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::QueryOutputWriter::*)(::Il2CppString*)>(&System::Xml::QueryOutputWriter::WriteStartNamespaceDeclaration)> {
  const MethodInfo* get() {
    static auto* prefix = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::QueryOutputWriter*), "WriteStartNamespaceDeclaration", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{prefix});
  }
};
// Writing MetadataGetter for method: System::Xml::QueryOutputWriter::WriteEndNamespaceDeclaration
// Il2CppName: WriteEndNamespaceDeclaration
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::QueryOutputWriter::*)()>(&System::Xml::QueryOutputWriter::WriteEndNamespaceDeclaration)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::QueryOutputWriter*), "WriteEndNamespaceDeclaration", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::QueryOutputWriter::WriteCData
// Il2CppName: WriteCData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::QueryOutputWriter::*)(::Il2CppString*)>(&System::Xml::QueryOutputWriter::WriteCData)> {
  const MethodInfo* get() {
    static auto* text = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::QueryOutputWriter*), "WriteCData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{text});
  }
};
// Writing MetadataGetter for method: System::Xml::QueryOutputWriter::WriteComment
// Il2CppName: WriteComment
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::QueryOutputWriter::*)(::Il2CppString*)>(&System::Xml::QueryOutputWriter::WriteComment)> {
  const MethodInfo* get() {
    static auto* text = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::QueryOutputWriter*), "WriteComment", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{text});
  }
};
// Writing MetadataGetter for method: System::Xml::QueryOutputWriter::WriteProcessingInstruction
// Il2CppName: WriteProcessingInstruction
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::QueryOutputWriter::*)(::Il2CppString*, ::Il2CppString*)>(&System::Xml::QueryOutputWriter::WriteProcessingInstruction)> {
  const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* text = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::QueryOutputWriter*), "WriteProcessingInstruction", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name, text});
  }
};
// Writing MetadataGetter for method: System::Xml::QueryOutputWriter::WriteWhitespace
// Il2CppName: WriteWhitespace
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::QueryOutputWriter::*)(::Il2CppString*)>(&System::Xml::QueryOutputWriter::WriteWhitespace)> {
  const MethodInfo* get() {
    static auto* ws = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::QueryOutputWriter*), "WriteWhitespace", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ws});
  }
};
// Writing MetadataGetter for method: System::Xml::QueryOutputWriter::WriteString
// Il2CppName: WriteString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::QueryOutputWriter::*)(::Il2CppString*)>(&System::Xml::QueryOutputWriter::WriteString)> {
  const MethodInfo* get() {
    static auto* text = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::QueryOutputWriter*), "WriteString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{text});
  }
};
// Writing MetadataGetter for method: System::Xml::QueryOutputWriter::WriteChars
// Il2CppName: WriteChars
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::QueryOutputWriter::*)(::Array<::Il2CppChar>*, int, int)>(&System::Xml::QueryOutputWriter::WriteChars)> {
  const MethodInfo* get() {
    static auto* buffer = &classof(::Array<::Array<::Il2CppChar>*>*)->byval_arg;
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::QueryOutputWriter*), "WriteChars", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, index, count});
  }
};
// Writing MetadataGetter for method: System::Xml::QueryOutputWriter::WriteEntityRef
// Il2CppName: WriteEntityRef
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::QueryOutputWriter::*)(::Il2CppString*)>(&System::Xml::QueryOutputWriter::WriteEntityRef)> {
  const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::QueryOutputWriter*), "WriteEntityRef", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name});
  }
};
// Writing MetadataGetter for method: System::Xml::QueryOutputWriter::WriteCharEntity
// Il2CppName: WriteCharEntity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::QueryOutputWriter::*)(::Il2CppChar)>(&System::Xml::QueryOutputWriter::WriteCharEntity)> {
  const MethodInfo* get() {
    static auto* ch = &::il2cpp_utils::GetClassFromName("System", "Char")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::QueryOutputWriter*), "WriteCharEntity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ch});
  }
};
// Writing MetadataGetter for method: System::Xml::QueryOutputWriter::WriteSurrogateCharEntity
// Il2CppName: WriteSurrogateCharEntity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::QueryOutputWriter::*)(::Il2CppChar, ::Il2CppChar)>(&System::Xml::QueryOutputWriter::WriteSurrogateCharEntity)> {
  const MethodInfo* get() {
    static auto* lowChar = &::il2cpp_utils::GetClassFromName("System", "Char")->byval_arg;
    static auto* highChar = &::il2cpp_utils::GetClassFromName("System", "Char")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::QueryOutputWriter*), "WriteSurrogateCharEntity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{lowChar, highChar});
  }
};
// Writing MetadataGetter for method: System::Xml::QueryOutputWriter::WriteRaw
// Il2CppName: WriteRaw
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::QueryOutputWriter::*)(::Array<::Il2CppChar>*, int, int)>(&System::Xml::QueryOutputWriter::WriteRaw)> {
  const MethodInfo* get() {
    static auto* buffer = &classof(::Array<::Array<::Il2CppChar>*>*)->byval_arg;
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::QueryOutputWriter*), "WriteRaw", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, index, count});
  }
};
// Writing MetadataGetter for method: System::Xml::QueryOutputWriter::WriteRaw
// Il2CppName: WriteRaw
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::QueryOutputWriter::*)(::Il2CppString*)>(&System::Xml::QueryOutputWriter::WriteRaw)> {
  const MethodInfo* get() {
    static auto* data = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::QueryOutputWriter*), "WriteRaw", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{data});
  }
};
// Writing MetadataGetter for method: System::Xml::QueryOutputWriter::Close
// Il2CppName: Close
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::QueryOutputWriter::*)()>(&System::Xml::QueryOutputWriter::Close)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::QueryOutputWriter*), "Close", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::QueryOutputWriter::Flush
// Il2CppName: Flush
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::QueryOutputWriter::*)()>(&System::Xml::QueryOutputWriter::Flush)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::QueryOutputWriter*), "Flush", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
