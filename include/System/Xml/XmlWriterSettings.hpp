// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Xml.NewLineHandling
#include "System/Xml/NewLineHandling.hpp"
// Including type: System.Xml.TriState
#include "System/Xml/TriState.hpp"
// Including type: System.Xml.NamespaceHandling
#include "System/Xml/NamespaceHandling.hpp"
// Including type: System.Xml.ConformanceLevel
#include "System/Xml/ConformanceLevel.hpp"
// Including type: System.Xml.XmlOutputMethod
#include "System/Xml/XmlOutputMethod.hpp"
// Including type: System.Xml.XmlStandalone
#include "System/Xml/XmlStandalone.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: Encoding
  class Encoding;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: System::Xml
namespace System::Xml {
  // Forward declaring type: XmlQualifiedName
  class XmlQualifiedName;
  // Forward declaring type: XmlWriter
  class XmlWriter;
}
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: Stream
  class Stream;
  // Forward declaring type: TextWriter
  class TextWriter;
}
// Completed forward declares
// Type namespace: System.Xml
namespace System::Xml {
  // Size: 0x86
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.XmlWriterSettings
  class XmlWriterSettings : public ::Il2CppObject {
    public:
    // private System.Boolean useAsync
    // Size: 0x1
    // Offset: 0x10
    bool useAsync;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: useAsync and: encoding
    char __padding0[0x7] = {};
    // private System.Text.Encoding encoding
    // Size: 0x8
    // Offset: 0x18
    System::Text::Encoding* encoding;
    // Field size check
    static_assert(sizeof(System::Text::Encoding*) == 0x8);
    // private System.Boolean omitXmlDecl
    // Size: 0x1
    // Offset: 0x20
    bool omitXmlDecl;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: omitXmlDecl and: newLineHandling
    char __padding2[0x3] = {};
    // private System.Xml.NewLineHandling newLineHandling
    // Size: 0x4
    // Offset: 0x24
    System::Xml::NewLineHandling newLineHandling;
    // Field size check
    static_assert(sizeof(System::Xml::NewLineHandling) == 0x4);
    // private System.String newLineChars
    // Size: 0x8
    // Offset: 0x28
    ::Il2CppString* newLineChars;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.Xml.TriState indent
    // Size: 0x4
    // Offset: 0x30
    System::Xml::TriState indent;
    // Field size check
    static_assert(sizeof(System::Xml::TriState) == 0x4);
    // Padding between fields: indent and: indentChars
    char __padding5[0x4] = {};
    // private System.String indentChars
    // Size: 0x8
    // Offset: 0x38
    ::Il2CppString* indentChars;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.Boolean newLineOnAttributes
    // Size: 0x1
    // Offset: 0x40
    bool newLineOnAttributes;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean closeOutput
    // Size: 0x1
    // Offset: 0x41
    bool closeOutput;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: closeOutput and: namespaceHandling
    char __padding8[0x2] = {};
    // private System.Xml.NamespaceHandling namespaceHandling
    // Size: 0x4
    // Offset: 0x44
    System::Xml::NamespaceHandling namespaceHandling;
    // Field size check
    static_assert(sizeof(System::Xml::NamespaceHandling) == 0x4);
    // private System.Xml.ConformanceLevel conformanceLevel
    // Size: 0x4
    // Offset: 0x48
    System::Xml::ConformanceLevel conformanceLevel;
    // Field size check
    static_assert(sizeof(System::Xml::ConformanceLevel) == 0x4);
    // private System.Boolean checkCharacters
    // Size: 0x1
    // Offset: 0x4C
    bool checkCharacters;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean writeEndDocumentOnClose
    // Size: 0x1
    // Offset: 0x4D
    bool writeEndDocumentOnClose;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: writeEndDocumentOnClose and: outputMethod
    char __padding12[0x2] = {};
    // private System.Xml.XmlOutputMethod outputMethod
    // Size: 0x4
    // Offset: 0x50
    System::Xml::XmlOutputMethod outputMethod;
    // Field size check
    static_assert(sizeof(System::Xml::XmlOutputMethod) == 0x4);
    // Padding between fields: outputMethod and: cdataSections
    char __padding13[0x4] = {};
    // private System.Collections.Generic.List`1<System.Xml.XmlQualifiedName> cdataSections
    // Size: 0x8
    // Offset: 0x58
    System::Collections::Generic::List_1<System::Xml::XmlQualifiedName*>* cdataSections;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<System::Xml::XmlQualifiedName*>*) == 0x8);
    // private System.Boolean doNotEscapeUriAttributes
    // Size: 0x1
    // Offset: 0x60
    bool doNotEscapeUriAttributes;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean mergeCDataSections
    // Size: 0x1
    // Offset: 0x61
    bool mergeCDataSections;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: mergeCDataSections and: mediaType
    char __padding16[0x6] = {};
    // private System.String mediaType
    // Size: 0x8
    // Offset: 0x68
    ::Il2CppString* mediaType;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String docTypeSystem
    // Size: 0x8
    // Offset: 0x70
    ::Il2CppString* docTypeSystem;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String docTypePublic
    // Size: 0x8
    // Offset: 0x78
    ::Il2CppString* docTypePublic;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.Xml.XmlStandalone standalone
    // Size: 0x4
    // Offset: 0x80
    System::Xml::XmlStandalone standalone;
    // Field size check
    static_assert(sizeof(System::Xml::XmlStandalone) == 0x4);
    // private System.Boolean autoXmlDecl
    // Size: 0x1
    // Offset: 0x84
    bool autoXmlDecl;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean isReadOnly
    // Size: 0x1
    // Offset: 0x85
    bool isReadOnly;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: XmlWriterSettings
    XmlWriterSettings(bool useAsync_ = {}, System::Text::Encoding* encoding_ = {}, bool omitXmlDecl_ = {}, System::Xml::NewLineHandling newLineHandling_ = {}, ::Il2CppString* newLineChars_ = {}, System::Xml::TriState indent_ = {}, ::Il2CppString* indentChars_ = {}, bool newLineOnAttributes_ = {}, bool closeOutput_ = {}, System::Xml::NamespaceHandling namespaceHandling_ = {}, System::Xml::ConformanceLevel conformanceLevel_ = {}, bool checkCharacters_ = {}, bool writeEndDocumentOnClose_ = {}, System::Xml::XmlOutputMethod outputMethod_ = {}, System::Collections::Generic::List_1<System::Xml::XmlQualifiedName*>* cdataSections_ = {}, bool doNotEscapeUriAttributes_ = {}, bool mergeCDataSections_ = {}, ::Il2CppString* mediaType_ = {}, ::Il2CppString* docTypeSystem_ = {}, ::Il2CppString* docTypePublic_ = {}, System::Xml::XmlStandalone standalone_ = {}, bool autoXmlDecl_ = {}, bool isReadOnly_ = {}) noexcept : useAsync{useAsync_}, encoding{encoding_}, omitXmlDecl{omitXmlDecl_}, newLineHandling{newLineHandling_}, newLineChars{newLineChars_}, indent{indent_}, indentChars{indentChars_}, newLineOnAttributes{newLineOnAttributes_}, closeOutput{closeOutput_}, namespaceHandling{namespaceHandling_}, conformanceLevel{conformanceLevel_}, checkCharacters{checkCharacters_}, writeEndDocumentOnClose{writeEndDocumentOnClose_}, outputMethod{outputMethod_}, cdataSections{cdataSections_}, doNotEscapeUriAttributes{doNotEscapeUriAttributes_}, mergeCDataSections{mergeCDataSections_}, mediaType{mediaType_}, docTypeSystem{docTypeSystem_}, docTypePublic{docTypePublic_}, standalone{standalone_}, autoXmlDecl{autoXmlDecl_}, isReadOnly{isReadOnly_} {}
    // public System.Boolean get_Async()
    // Offset: 0x23C5750
    bool get_Async();
    // public System.Text.Encoding get_Encoding()
    // Offset: 0x23C5758
    System::Text::Encoding* get_Encoding();
    // public System.Boolean get_OmitXmlDeclaration()
    // Offset: 0x23C5760
    bool get_OmitXmlDeclaration();
    // public System.Xml.NewLineHandling get_NewLineHandling()
    // Offset: 0x23C5768
    System::Xml::NewLineHandling get_NewLineHandling();
    // public System.String get_NewLineChars()
    // Offset: 0x23C5770
    ::Il2CppString* get_NewLineChars();
    // public System.Boolean get_Indent()
    // Offset: 0x23C5778
    bool get_Indent();
    // public System.Void set_Indent(System.Boolean value)
    // Offset: 0x23C5788
    void set_Indent(bool value);
    // public System.String get_IndentChars()
    // Offset: 0x23C58D0
    ::Il2CppString* get_IndentChars();
    // public System.Boolean get_NewLineOnAttributes()
    // Offset: 0x23C58D8
    bool get_NewLineOnAttributes();
    // public System.Boolean get_CloseOutput()
    // Offset: 0x23C58E0
    bool get_CloseOutput();
    // public System.Xml.ConformanceLevel get_ConformanceLevel()
    // Offset: 0x23C58E8
    System::Xml::ConformanceLevel get_ConformanceLevel();
    // public System.Void set_ConformanceLevel(System.Xml.ConformanceLevel value)
    // Offset: 0x23C58F0
    void set_ConformanceLevel(System::Xml::ConformanceLevel value);
    // public System.Boolean get_CheckCharacters()
    // Offset: 0x23C5998
    bool get_CheckCharacters();
    // public System.Xml.NamespaceHandling get_NamespaceHandling()
    // Offset: 0x23C59A0
    System::Xml::NamespaceHandling get_NamespaceHandling();
    // public System.Boolean get_WriteEndDocumentOnClose()
    // Offset: 0x23C59A8
    bool get_WriteEndDocumentOnClose();
    // public System.Xml.XmlOutputMethod get_OutputMethod()
    // Offset: 0x23C59B0
    System::Xml::XmlOutputMethod get_OutputMethod();
    // System.Void set_OutputMethod(System.Xml.XmlOutputMethod value)
    // Offset: 0x23C59B8
    void set_OutputMethod(System::Xml::XmlOutputMethod value);
    // public System.Xml.XmlWriterSettings Clone()
    // Offset: 0x23C59C0
    System::Xml::XmlWriterSettings* Clone();
    // System.Collections.Generic.List`1<System.Xml.XmlQualifiedName> get_CDataSectionElements()
    // Offset: 0x23C5A78
    System::Collections::Generic::List_1<System::Xml::XmlQualifiedName*>* get_CDataSectionElements();
    // public System.Boolean get_DoNotEscapeUriAttributes()
    // Offset: 0x23C5A80
    bool get_DoNotEscapeUriAttributes();
    // System.Boolean get_MergeCDataSections()
    // Offset: 0x23C5A88
    bool get_MergeCDataSections();
    // System.String get_MediaType()
    // Offset: 0x23C5A90
    ::Il2CppString* get_MediaType();
    // System.String get_DocTypeSystem()
    // Offset: 0x23C5A98
    ::Il2CppString* get_DocTypeSystem();
    // System.String get_DocTypePublic()
    // Offset: 0x23C5AA0
    ::Il2CppString* get_DocTypePublic();
    // System.Xml.XmlStandalone get_Standalone()
    // Offset: 0x23C5AA8
    System::Xml::XmlStandalone get_Standalone();
    // System.Boolean get_AutoXmlDeclaration()
    // Offset: 0x23C5AB0
    bool get_AutoXmlDeclaration();
    // System.Xml.TriState get_IndentInternal()
    // Offset: 0x23C5AB8
    System::Xml::TriState get_IndentInternal();
    // System.Boolean get_IsQuerySpecific()
    // Offset: 0x23C5AC0
    bool get_IsQuerySpecific();
    // System.Xml.XmlWriter CreateWriter(System.IO.Stream output)
    // Offset: 0x23C4FB8
    System::Xml::XmlWriter* CreateWriter(System::IO::Stream* output);
    // System.Xml.XmlWriter CreateWriter(System.IO.TextWriter output)
    // Offset: 0x23C53F0
    System::Xml::XmlWriter* CreateWriter(System::IO::TextWriter* output);
    // System.Void set_ReadOnly(System.Boolean value)
    // Offset: 0x23C5B38
    void set_ReadOnly(bool value);
    // private System.Void CheckReadOnly(System.String propertyName)
    // Offset: 0x23C57F8
    void CheckReadOnly(::Il2CppString* propertyName);
    // private System.Void Initialize()
    // Offset: 0x23C5688
    void Initialize();
    // public System.Void .ctor()
    // Offset: 0x23C4F40
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XmlWriterSettings* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Xml::XmlWriterSettings::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XmlWriterSettings*, creationType>()));
    }
  }; // System.Xml.XmlWriterSettings
  #pragma pack(pop)
  static check_size<sizeof(XmlWriterSettings), 133 + sizeof(bool)> __System_Xml_XmlWriterSettingsSizeCheck;
  static_assert(sizeof(XmlWriterSettings) == 0x86);
}
DEFINE_IL2CPP_ARG_TYPE(System::Xml::XmlWriterSettings*, "System.Xml", "XmlWriterSettings");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::XmlWriterSettings::get_Async
// Il2CppName: get_Async
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::XmlWriterSettings::*)()>(&System::Xml::XmlWriterSettings::get_Async)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlWriterSettings*), "get_Async", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlWriterSettings::get_Encoding
// Il2CppName: get_Encoding
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Text::Encoding* (System::Xml::XmlWriterSettings::*)()>(&System::Xml::XmlWriterSettings::get_Encoding)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlWriterSettings*), "get_Encoding", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlWriterSettings::get_OmitXmlDeclaration
// Il2CppName: get_OmitXmlDeclaration
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::XmlWriterSettings::*)()>(&System::Xml::XmlWriterSettings::get_OmitXmlDeclaration)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlWriterSettings*), "get_OmitXmlDeclaration", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlWriterSettings::get_NewLineHandling
// Il2CppName: get_NewLineHandling
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Xml::NewLineHandling (System::Xml::XmlWriterSettings::*)()>(&System::Xml::XmlWriterSettings::get_NewLineHandling)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlWriterSettings*), "get_NewLineHandling", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlWriterSettings::get_NewLineChars
// Il2CppName: get_NewLineChars
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Xml::XmlWriterSettings::*)()>(&System::Xml::XmlWriterSettings::get_NewLineChars)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlWriterSettings*), "get_NewLineChars", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlWriterSettings::get_Indent
// Il2CppName: get_Indent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::XmlWriterSettings::*)()>(&System::Xml::XmlWriterSettings::get_Indent)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlWriterSettings*), "get_Indent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlWriterSettings::set_Indent
// Il2CppName: set_Indent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlWriterSettings::*)(bool)>(&System::Xml::XmlWriterSettings::set_Indent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlWriterSettings*), "set_Indent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlWriterSettings::get_IndentChars
// Il2CppName: get_IndentChars
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Xml::XmlWriterSettings::*)()>(&System::Xml::XmlWriterSettings::get_IndentChars)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlWriterSettings*), "get_IndentChars", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlWriterSettings::get_NewLineOnAttributes
// Il2CppName: get_NewLineOnAttributes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::XmlWriterSettings::*)()>(&System::Xml::XmlWriterSettings::get_NewLineOnAttributes)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlWriterSettings*), "get_NewLineOnAttributes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlWriterSettings::get_CloseOutput
// Il2CppName: get_CloseOutput
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::XmlWriterSettings::*)()>(&System::Xml::XmlWriterSettings::get_CloseOutput)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlWriterSettings*), "get_CloseOutput", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlWriterSettings::get_ConformanceLevel
// Il2CppName: get_ConformanceLevel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Xml::ConformanceLevel (System::Xml::XmlWriterSettings::*)()>(&System::Xml::XmlWriterSettings::get_ConformanceLevel)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlWriterSettings*), "get_ConformanceLevel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlWriterSettings::set_ConformanceLevel
// Il2CppName: set_ConformanceLevel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlWriterSettings::*)(System::Xml::ConformanceLevel)>(&System::Xml::XmlWriterSettings::set_ConformanceLevel)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System.Xml", "ConformanceLevel")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlWriterSettings*), "set_ConformanceLevel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlWriterSettings::get_CheckCharacters
// Il2CppName: get_CheckCharacters
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::XmlWriterSettings::*)()>(&System::Xml::XmlWriterSettings::get_CheckCharacters)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlWriterSettings*), "get_CheckCharacters", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlWriterSettings::get_NamespaceHandling
// Il2CppName: get_NamespaceHandling
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Xml::NamespaceHandling (System::Xml::XmlWriterSettings::*)()>(&System::Xml::XmlWriterSettings::get_NamespaceHandling)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlWriterSettings*), "get_NamespaceHandling", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlWriterSettings::get_WriteEndDocumentOnClose
// Il2CppName: get_WriteEndDocumentOnClose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::XmlWriterSettings::*)()>(&System::Xml::XmlWriterSettings::get_WriteEndDocumentOnClose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlWriterSettings*), "get_WriteEndDocumentOnClose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlWriterSettings::get_OutputMethod
// Il2CppName: get_OutputMethod
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Xml::XmlOutputMethod (System::Xml::XmlWriterSettings::*)()>(&System::Xml::XmlWriterSettings::get_OutputMethod)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlWriterSettings*), "get_OutputMethod", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlWriterSettings::set_OutputMethod
// Il2CppName: set_OutputMethod
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlWriterSettings::*)(System::Xml::XmlOutputMethod)>(&System::Xml::XmlWriterSettings::set_OutputMethod)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlOutputMethod")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlWriterSettings*), "set_OutputMethod", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlWriterSettings::Clone
// Il2CppName: Clone
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Xml::XmlWriterSettings* (System::Xml::XmlWriterSettings::*)()>(&System::Xml::XmlWriterSettings::Clone)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlWriterSettings*), "Clone", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlWriterSettings::get_CDataSectionElements
// Il2CppName: get_CDataSectionElements
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::List_1<System::Xml::XmlQualifiedName*>* (System::Xml::XmlWriterSettings::*)()>(&System::Xml::XmlWriterSettings::get_CDataSectionElements)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlWriterSettings*), "get_CDataSectionElements", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlWriterSettings::get_DoNotEscapeUriAttributes
// Il2CppName: get_DoNotEscapeUriAttributes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::XmlWriterSettings::*)()>(&System::Xml::XmlWriterSettings::get_DoNotEscapeUriAttributes)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlWriterSettings*), "get_DoNotEscapeUriAttributes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlWriterSettings::get_MergeCDataSections
// Il2CppName: get_MergeCDataSections
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::XmlWriterSettings::*)()>(&System::Xml::XmlWriterSettings::get_MergeCDataSections)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlWriterSettings*), "get_MergeCDataSections", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlWriterSettings::get_MediaType
// Il2CppName: get_MediaType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Xml::XmlWriterSettings::*)()>(&System::Xml::XmlWriterSettings::get_MediaType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlWriterSettings*), "get_MediaType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlWriterSettings::get_DocTypeSystem
// Il2CppName: get_DocTypeSystem
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Xml::XmlWriterSettings::*)()>(&System::Xml::XmlWriterSettings::get_DocTypeSystem)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlWriterSettings*), "get_DocTypeSystem", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlWriterSettings::get_DocTypePublic
// Il2CppName: get_DocTypePublic
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Xml::XmlWriterSettings::*)()>(&System::Xml::XmlWriterSettings::get_DocTypePublic)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlWriterSettings*), "get_DocTypePublic", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlWriterSettings::get_Standalone
// Il2CppName: get_Standalone
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Xml::XmlStandalone (System::Xml::XmlWriterSettings::*)()>(&System::Xml::XmlWriterSettings::get_Standalone)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlWriterSettings*), "get_Standalone", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlWriterSettings::get_AutoXmlDeclaration
// Il2CppName: get_AutoXmlDeclaration
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::XmlWriterSettings::*)()>(&System::Xml::XmlWriterSettings::get_AutoXmlDeclaration)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlWriterSettings*), "get_AutoXmlDeclaration", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlWriterSettings::get_IndentInternal
// Il2CppName: get_IndentInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Xml::TriState (System::Xml::XmlWriterSettings::*)()>(&System::Xml::XmlWriterSettings::get_IndentInternal)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlWriterSettings*), "get_IndentInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlWriterSettings::get_IsQuerySpecific
// Il2CppName: get_IsQuerySpecific
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::XmlWriterSettings::*)()>(&System::Xml::XmlWriterSettings::get_IsQuerySpecific)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlWriterSettings*), "get_IsQuerySpecific", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlWriterSettings::CreateWriter
// Il2CppName: CreateWriter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Xml::XmlWriter* (System::Xml::XmlWriterSettings::*)(System::IO::Stream*)>(&System::Xml::XmlWriterSettings::CreateWriter)> {
  static const MethodInfo* get() {
    static auto* output = &::il2cpp_utils::GetClassFromName("System.IO", "Stream")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlWriterSettings*), "CreateWriter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{output});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlWriterSettings::CreateWriter
// Il2CppName: CreateWriter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Xml::XmlWriter* (System::Xml::XmlWriterSettings::*)(System::IO::TextWriter*)>(&System::Xml::XmlWriterSettings::CreateWriter)> {
  static const MethodInfo* get() {
    static auto* output = &::il2cpp_utils::GetClassFromName("System.IO", "TextWriter")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlWriterSettings*), "CreateWriter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{output});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlWriterSettings::set_ReadOnly
// Il2CppName: set_ReadOnly
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlWriterSettings::*)(bool)>(&System::Xml::XmlWriterSettings::set_ReadOnly)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlWriterSettings*), "set_ReadOnly", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlWriterSettings::CheckReadOnly
// Il2CppName: CheckReadOnly
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlWriterSettings::*)(::Il2CppString*)>(&System::Xml::XmlWriterSettings::CheckReadOnly)> {
  static const MethodInfo* get() {
    static auto* propertyName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlWriterSettings*), "CheckReadOnly", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{propertyName});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlWriterSettings::Initialize
// Il2CppName: Initialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlWriterSettings::*)()>(&System::Xml::XmlWriterSettings::Initialize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlWriterSettings*), "Initialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlWriterSettings::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
