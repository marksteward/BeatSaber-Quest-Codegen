// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Mono.Xml.SmallXmlParser
#include "Mono/Xml/SmallXmlParser.hpp"
// Including type: Mono.Xml.SmallXmlParser/IContentHandler
#include "Mono/Xml/SmallXmlParser_IContentHandler.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Security
namespace System::Security {
  // Forward declaring type: SecurityElement
  class SecurityElement;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: Stack
  class Stack;
}
// Completed forward declares
// Type namespace: Mono.Xml
namespace Mono::Xml {
  // Autogenerated type: Mono.Xml.SecurityParser
  class SecurityParser : public Mono::Xml::SmallXmlParser/*, public Mono::Xml::SmallXmlParser::IContentHandler*/ {
    public:
    // private System.Security.SecurityElement root
    // Offset: 0x68
    System::Security::SecurityElement* root;
    // private System.Security.SecurityElement current
    // Offset: 0x70
    System::Security::SecurityElement* current;
    // private System.Collections.Stack stack
    // Offset: 0x78
    System::Collections::Stack* stack;
    // Creating interface conversion operator: operator Mono::Xml::SmallXmlParser::IContentHandler
    operator Mono::Xml::SmallXmlParser::IContentHandler() noexcept {
      return *reinterpret_cast<Mono::Xml::SmallXmlParser::IContentHandler*>(this);
    }
    // public System.Void LoadXml(System.String xml)
    // Offset: 0x1642C14
    void LoadXml(::Il2CppString* xml);
    // public System.Security.SecurityElement ToXml()
    // Offset: 0x1654148
    System::Security::SecurityElement* ToXml();
    // public System.Void .ctor()
    // Offset: 0x1642BA4
    // Implemented from: Mono.Xml.SmallXmlParser
    // Base method: System.Void SmallXmlParser::.ctor()
    // Base method: System.Void Object::.ctor()
    static SecurityParser* New_ctor();
    // public System.Void OnStartParsing(Mono.Xml.SmallXmlParser parser)
    // Offset: 0x1654150
    // Implemented from: Mono.Xml.SmallXmlParser/IContentHandler
    // Base method: System.Void IContentHandler::OnStartParsing(Mono.Xml.SmallXmlParser parser)
    void OnStartParsing(Mono::Xml::SmallXmlParser* parser);
    // public System.Void OnProcessingInstruction(System.String name, System.String text)
    // Offset: 0x1654154
    // Implemented from: Mono.Xml.SmallXmlParser/IContentHandler
    // Base method: System.Void IContentHandler::OnProcessingInstruction(System.String name, System.String text)
    void OnProcessingInstruction(::Il2CppString* name, ::Il2CppString* text);
    // public System.Void OnIgnorableWhitespace(System.String s)
    // Offset: 0x1654158
    // Implemented from: Mono.Xml.SmallXmlParser/IContentHandler
    // Base method: System.Void IContentHandler::OnIgnorableWhitespace(System.String s)
    void OnIgnorableWhitespace(::Il2CppString* s);
    // public System.Void OnStartElement(System.String name, Mono.Xml.SmallXmlParser/IAttrList attrs)
    // Offset: 0x165415C
    // Implemented from: Mono.Xml.SmallXmlParser/IContentHandler
    // Base method: System.Void IContentHandler::OnStartElement(System.String name, Mono.Xml.SmallXmlParser/IAttrList attrs)
    void OnStartElement(::Il2CppString* name, Mono::Xml::SmallXmlParser::IAttrList* attrs);
    // public System.Void OnEndElement(System.String name)
    // Offset: 0x165442C
    // Implemented from: Mono.Xml.SmallXmlParser/IContentHandler
    // Base method: System.Void IContentHandler::OnEndElement(System.String name)
    void OnEndElement(::Il2CppString* name);
    // public System.Void OnChars(System.String ch)
    // Offset: 0x16544BC
    // Implemented from: Mono.Xml.SmallXmlParser/IContentHandler
    // Base method: System.Void IContentHandler::OnChars(System.String ch)
    void OnChars(::Il2CppString* ch);
    // public System.Void OnEndParsing(Mono.Xml.SmallXmlParser parser)
    // Offset: 0x165454C
    // Implemented from: Mono.Xml.SmallXmlParser/IContentHandler
    // Base method: System.Void IContentHandler::OnEndParsing(Mono.Xml.SmallXmlParser parser)
    void OnEndParsing(Mono::Xml::SmallXmlParser* parser);
  }; // Mono.Xml.SecurityParser
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Mono::Xml::SecurityParser*, "Mono.Xml", "SecurityParser");
#pragma pack(pop)
