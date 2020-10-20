// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Xml.XmlWellFormedWriter
#include "System/Xml/XmlWellFormedWriter.hpp"
// Including type: System.Xml.IXmlNamespaceResolver
#include "System/Xml/IXmlNamespaceResolver.hpp"
// Completed includes
// Type namespace: System.Xml
namespace System::Xml {
  // Autogenerated type: System.Xml.XmlWellFormedWriter/NamespaceResolverProxy
  class XmlWellFormedWriter::NamespaceResolverProxy : public ::Il2CppObject/*, public System::Xml::IXmlNamespaceResolver*/ {
    public:
    // private System.Xml.XmlWellFormedWriter wfWriter
    // Offset: 0x10
    System::Xml::XmlWellFormedWriter* wfWriter;
    // Creating interface conversion operator: operator System::Xml::IXmlNamespaceResolver
    operator System::Xml::IXmlNamespaceResolver() noexcept {
      return *reinterpret_cast<System::Xml::IXmlNamespaceResolver*>(this);
    }
    // Creating conversion operator: operator System::Xml::XmlWellFormedWriter*
    constexpr operator System::Xml::XmlWellFormedWriter*() const noexcept {
      return wfWriter;
    }
    // System.Void .ctor(System.Xml.XmlWellFormedWriter wfWriter)
    // Offset: 0x1F47988
    static XmlWellFormedWriter::NamespaceResolverProxy* New_ctor(System::Xml::XmlWellFormedWriter* wfWriter);
    // private System.String System.Xml.IXmlNamespaceResolver.LookupNamespace(System.String prefix)
    // Offset: 0x1F479BC
    // Implemented from: System.Xml.IXmlNamespaceResolver
    // Base method: System.String IXmlNamespaceResolver::LookupNamespace(System.String prefix)
    ::Il2CppString* System_Xml_IXmlNamespaceResolver_LookupNamespace(::Il2CppString* prefix);
    // private System.String System.Xml.IXmlNamespaceResolver.LookupPrefix(System.String namespaceName)
    // Offset: 0x1F479D8
    // Implemented from: System.Xml.IXmlNamespaceResolver
    // Base method: System.String IXmlNamespaceResolver::LookupPrefix(System.String namespaceName)
    ::Il2CppString* System_Xml_IXmlNamespaceResolver_LookupPrefix(::Il2CppString* namespaceName);
  }; // System.Xml.XmlWellFormedWriter/NamespaceResolverProxy
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Xml::XmlWellFormedWriter::NamespaceResolverProxy*, "System.Xml", "XmlWellFormedWriter/NamespaceResolverProxy");
#pragma pack(pop)
